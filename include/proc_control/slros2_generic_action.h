/* Copyright 2023 The MathWorks, Inc. */

#ifndef _SLROS2_GENERIC_ACTION_H_
#define _SLROS2_GENERIC_ACTION_H_

#include <memory>                            // For std::shared_ptr, atomic raw pointer
#include <string>                            // For std::string
#include <mutex>                             // For std::mutex, std::unique_lock, std::lock_guard
#include <condition_variable>                // For std::condition_variable
#include <map>                               // For std::map
#include "rclcpp/rclcpp.hpp"
#include "rclcpp/node.hpp"
#include "rclcpp_action/create_client.hpp"
#include "rclcpp/qos.hpp"
#include "slros_busmsg_conversion.h"          // For ConvertFromBus, ConvertToBus functions

extern rclcpp::Node::SharedPtr SLROSNodePtr;

/**
 * Class for ROS 2 Action Client in C++.
 *
 * This class is used by code generated from the Simulink ROS 2
 * "Send Action Goal" block - for sending goal messages to ROS 2 Action server,
 * "Monitor Action Goal" block - for monitoring status, feedback and result of an active goal
 * It is templated by the ROS 2 action type and the Simulink
 * bus types for input and output messages.
 */
template <class ActType>
class SimulinkActionClient {
public:

    SimulinkActionClient()
        :_goalHandle(nullptr),
        _uuidMsg(nullptr),
        _latestFeedbackMsg(nullptr),
        _cancelResponseMsg(nullptr),
        _currentResultMsg(nullptr) {}

    void createActionClient(const std::string& actionName,
        const rmw_qos_profile_t& goalServiceQos = rmw_qos_profile_default,
        const rmw_qos_profile_t& resultServiceQos = rmw_qos_profile_default,
        const rmw_qos_profile_t& cancelServiceQos = rmw_qos_profile_default,
        const rmw_qos_profile_t& feedbackTopicQos = rmw_qos_profile_default,
        const rmw_qos_profile_t& statusTopicQos = rmw_qos_profile_default);

    bool isServerConnected();

    template <typename GoalBusType>
    void sendGoal(const GoalBusType* goalBusPtr, uint8_t* errorCode);
    void waitUntilGoalReady();
    
    int8_t getStatus();

    template <typename FbBusType>
    void getLatestFeedback(FbBusType* feedbackBusPtr);

    template <typename ResultBusType>
    void getResult(ResultBusType* resultBusPtr);
    bool isResultReady();

    void cancelGoal();

    template <typename CancelRespBusType>
    void getCancelResponse(CancelRespBusType* cancelRespBusPtr);

    void getGoalUUID(SL_Bus_unique_identifier_msgs_UUID* uuidBusPtr);
    bool isGoalHandleAvailable();
    void waitUntilResultReady();
private:
    void onGoalResponseCallback(const typename rclcpp_action::ClientGoalHandle<ActType>::SharedPtr& goal_handle);
    void onFeedbackReceivedCallback(typename rclcpp_action::ClientGoalHandle<ActType>::SharedPtr goal_handle,
        const std::shared_ptr<const typename ActType::Feedback> feedbackMsgPtr);
    void onResultReceivedCallback(const typename rclcpp_action::ClientGoalHandle<ActType>::WrappedResult& result);
    void OnCancelCallBack(std::shared_ptr<action_msgs::srv::CancelGoal::Response> cancelRespMsg);

    std::shared_ptr<typename ActType::Goal> _goalMsgPtr = std::make_shared<typename ActType::Goal>();
    std::condition_variable _cv;
    int8_t _resultCode = -1;
    std::atomic<bool> _mGoalResponse = { false };
    std::mutex _mutex;
    typename rclcpp_action::Client<ActType>::SharedPtr _actClient; // The ROS 2 action client object
    typename rclcpp_action::ClientGoalHandle<ActType>::SharedPtr _goalHandle;
    std::shared_ptr<unique_identifier_msgs::msg::UUID> _uuidMsg;
    std::shared_ptr<const typename ActType::Feedback> _latestFeedbackMsg;
    std::shared_ptr<action_msgs::srv::CancelGoal::Response> _cancelResponseMsg;
    typename ActType::Result::SharedPtr _currentResultMsg;
    rclcpp::CallbackGroup::SharedPtr _actClientCbGroup; ///< The callback group for action client
};

/* Map used by cancel action goal block to detect the client
 * based on uuid, as it is not paired to send or monitor goal block
 */
template <typename ActType>
std::map<std::string, SimulinkActionClient<ActType>*> _UUIDSimulinkClientMap;

template <typename ActType>
inline void clearMap() {
    if (_UUIDSimulinkClientMap<ActType>.size() > 0) {
        _UUIDSimulinkClientMap<ActType>.clear();
    }
}

/**
 * Create a ROS 2 action client and register it into current ROS 2 network.
 *
 * @param[in] actionName the name of the action passed from Simulink
 * @param[in] goalServiceQos - QoS profile for goal service passed from Simulink
 * @param[in] resultServiceQos - QoS profile for result service passed from Simulink
 * @param[in] cancelServiceQos - QoS profile for cancel service passed from Simulink
 * @param[in] feedbackTopicQos - QoS profile for feedback topic passed from Simulink
 * @param[in] statusTopicQos - QoS profile for status topic passed from Simulink
 * @param[in] group - callback group to associate with action client
 */
template <class ActType>
void SimulinkActionClient<ActType>::createActionClient(
    const std::string& actionName,
    const rmw_qos_profile_t& goalServiceQos,
    const rmw_qos_profile_t& resultServiceQos,
    const rmw_qos_profile_t& cancelServiceQos,
    const rmw_qos_profile_t& feedbackTopicQos,
    const rmw_qos_profile_t& statusTopicQos) {
    rcl_action_client_options_t options;
    options.goal_service_qos = goalServiceQos;
    options.result_service_qos = resultServiceQos;
    options.cancel_service_qos = cancelServiceQos;
    options.feedback_topic_qos = feedbackTopicQos;
    options.status_topic_qos = statusTopicQos;
    options.allocator = rcl_get_default_allocator();

    //check and clear the uuid map before creating the client
    std::unique_lock<std::mutex> lck(_mutex);
    clearMap<ActType>();
    lck.unlock();

    _actClientCbGroup = SLROSNodePtr->create_callback_group(rclcpp::CallbackGroupType::Reentrant);
    _actClient = rclcpp_action::create_client<ActType>(SLROSNodePtr, actionName, _actClientCbGroup, options);
}

/**
 * Check whether server is ready to connect
 * @retval True ROS 2 action server is available and ready for use
 * @retval False ROS 2 action server is not available
 */
template <class ActType>
bool SimulinkActionClient<ActType>::isServerConnected() {
    return _actClient->action_server_is_ready();
}

/**
 * Send goal message to action server
 * @param goalBusPtr[in] Pointer to the bus structure for the goal message
 * @param errorCode[out] Pointer that returns the error code if there is any issue in send goal
 */
template <class ActType>
template <class GoalBusType>
void SimulinkActionClient<ActType>::sendGoal(const GoalBusType* goalBusPtr, uint8_t* errorCode) {
    RCLCPP_INFO(SLROSNodePtr->get_logger(), "Sending goal");
    auto send_goal_options = typename rclcpp_action::Client<ActType>::SendGoalOptions();
    send_goal_options.goal_response_callback =
        std::bind(&SimulinkActionClient::onGoalResponseCallback, this, std::placeholders::_1);
    send_goal_options.feedback_callback =
        std::bind(&SimulinkActionClient::onFeedbackReceivedCallback, this, std::placeholders::_1, std::placeholders::_2);
    send_goal_options.result_callback =
        std::bind(&SimulinkActionClient::onResultReceivedCallback, this, std::placeholders::_1);

    std::lock_guard<std::mutex> lockAct(_mutex);
    // Get message to be sent
    convertFromBus(*_goalMsgPtr.get(), goalBusPtr);
    _mGoalResponse = false;
    // Send goal to action server
    try {
        _actClient->async_send_goal(*_goalMsgPtr.get(), send_goal_options);
    }
    catch (...) {
        *errorCode = static_cast<uint8_t>(2);
    }
}

/**
* Cancel goal associated with the goal handle
*/
template <class ActType>
void SimulinkActionClient<ActType>::cancelGoal() {
    waitUntilGoalReady();
    _actClient->async_cancel_goal(_goalHandle,
        std::bind(&SimulinkActionClient::OnCancelCallBack, this, std::placeholders::_1));
}

/**
* Inspect whether result of a goal is ready to return
* @retval True Result is available
* @retval False Result is not yet available
*/
template <class ActType>
bool SimulinkActionClient<ActType>::isResultReady() {
    return (_resultCode != -1);
}

/**
 * Goal response callback for sendGoal
 * @param goal_handle[in] - const reference to shared pointer for goal handle
 */
template <class ActType>
void SimulinkActionClient<ActType>::onGoalResponseCallback(const typename rclcpp_action::ClientGoalHandle<ActType>::SharedPtr& goal_handle) {
    // call MATLAB function here
    std::lock_guard<std::mutex> lockAct(_mutex);
    if (!goal_handle) {
        RCLCPP_ERROR(SLROSNodePtr->get_logger(), "Goal was rejected by server");
        _goalHandle = nullptr;
        _resultCode = int8_t(0);
        _uuidMsg = std::make_shared<unique_identifier_msgs::msg::UUID>();
        _uuidMsg->uuid = {};
        _UUIDSimulinkClientMap<ActType>[""] = this;
        _mGoalResponse = true;
        _cv.notify_all();
    }
    else {
        RCLCPP_INFO(SLROSNodePtr->get_logger(), "Goal accepted by server, waiting for result");
        // Save current goalhandle to _goalHandle
        _goalHandle = goal_handle;
        _uuidMsg = std::make_shared<unique_identifier_msgs::msg::UUID>();
        _uuidMsg->uuid = goal_handle->get_goal_id();
        // Get goal id
        std::string goalUUID = rclcpp_action::to_string(goal_handle->get_goal_id());
        _UUIDSimulinkClientMap<ActType>[goalUUID] = this;
    }
    // set this to true irrespective of goal is accepted or rejected
    _mGoalResponse = true;
    _cv.notify_all();
}

/**
 * Feedback callback for sendGoal
 * @param goal_handle[in] - goal handle of the associated goal
 * @param feedback[in] - feedback message shared pointer
 */
template <class ActType>
void SimulinkActionClient<ActType>::onFeedbackReceivedCallback(typename rclcpp_action::ClientGoalHandle<ActType>::SharedPtr goal_handle,
    const std::shared_ptr<const typename ActType::Feedback> feedbackMsgPtr) {
    std::lock_guard<std::mutex> lockAct(_mutex);
    _latestFeedbackMsg = feedbackMsgPtr;
}

/**
 * Result callback for sendGoal
 * @param result - wrapped result of the associated goal
 */
template <class ActType>
void SimulinkActionClient<ActType>::onResultReceivedCallback(const typename rclcpp_action::ClientGoalHandle<ActType>::WrappedResult& result) {
    std::lock_guard<std::mutex> lockAct(_mutex);
    _resultCode = int8_t(result.code);
    _currentResultMsg = result.result;
    switch (result.code) {
      case rclcpp_action::ResultCode::SUCCEEDED:
        break;
      case rclcpp_action::ResultCode::ABORTED:
        RCLCPP_ERROR(SLROSNodePtr->get_logger(), "Goal was aborted");
        break;
      case rclcpp_action::ResultCode::CANCELED:
        RCLCPP_ERROR(SLROSNodePtr->get_logger(), "Goal was canceled");
        break;
      default:
        RCLCPP_ERROR(SLROSNodePtr->get_logger(), "Unknown result code");
        break;
    }
    RCLCPP_INFO(SLROSNodePtr->get_logger(), "Goal is in terminal state. Result Received");
}

/**
 * Cancel callback for cancelGoal
 * @param cancelRespMsg - cancel response message shared pointer
 */
template <class ActType>
void SimulinkActionClient<ActType>::OnCancelCallBack(std::shared_ptr<action_msgs::srv::CancelGoal::Response> cancelRespMsg) {
    RCLCPP_INFO(SLROSNodePtr->get_logger(), "Goal is in canceling state");
    std::lock_guard<std::mutex> lockAct(_mutex);
    _cancelResponseMsg = cancelRespMsg;
}

/**
 * Get status of a goal associated with given goal handle
 *
 * @retval Retrieve goal status of type int8_t from the goal handle
 */
template <class ActType>
int8_t SimulinkActionClient<ActType>::getStatus() {
    int8_t goalStatus = -1;
    if (_goalHandle) {
        try {
            goalStatus = _goalHandle.get()->get_status();
        }
        catch (...) {
            // return -1 if server did not accept the goal
        }
    }
    return goalStatus;
}

/**
 * Get result of a goal
 *
 * @param[in] resultBusPtr Result bus message
 */
template <class ActType>
template <class ResultBusType>
void SimulinkActionClient<ActType>::getResult(ResultBusType* resultBusPtr) {
    waitUntilResultReady();
    if (_currentResultMsg.get()) {
        std::lock_guard<std::mutex> lck(_mutex);
        *resultBusPtr = ResultBusType();
        convertToBus(resultBusPtr, *_currentResultMsg);
    }
}

/**
 * Pause current thread until goal is ready to access
 */
template <class ActType>
void SimulinkActionClient<ActType>::waitUntilGoalReady() {
    // This means _mGoalResponse is ready irrespective of accepted
    // or rejected, so that goal handle is available
    // While loop is required here to avoid _cv.notify_all triggered by
    // another goal instead of the goal associated with goalhandle.
    while (!_mGoalResponse) {
        std::unique_lock<std::mutex> lck(_mutex);
        _cv.wait(lck);
    }
}

/**
 * Pause current thread until goal is ready to access
 */
template <class ActType>
void SimulinkActionClient<ActType>::waitUntilResultReady() {
    // This means _resultCode is ready
    // While loop is required here to avoid _cv.notify_all triggered by
    // another goal instead of the goal associated with goalhandle.
    while (!isResultReady()) {
        std::unique_lock<std::mutex> lck(_mutex);
        _cv.wait(lck);
    }
}

/**
 * Get the latest feedback and return to MATLAB
 *
 * @param[in] feedbackBusPtr Feedback bus message
 */
template <class ActType>
template <class FbBusType>
void SimulinkActionClient<ActType>::getLatestFeedback(FbBusType* feedbackBusPtr) {
    if (_latestFeedbackMsg.get()) {
        std::lock_guard<std::mutex> lck(_mutex);
        *feedbackBusPtr = FbBusType();
        convertToBus(feedbackBusPtr, *_latestFeedbackMsg);
    }
}

/**
 * Get the cancel response and return to MATLAB
 *
 * @param[in] cancelRespStructPtr Cancel response bus message
 */
template <class ActType>
template <class CancelRespBusType>
void SimulinkActionClient<ActType>::getCancelResponse(CancelRespBusType* cancelRespBusPtr) {
    if (_cancelResponseMsg.get()) {
        std::lock_guard<std::mutex> lck(_mutex);
        *cancelRespBusPtr = CancelRespBusType();
        convertToBus(cancelRespBusPtr, *_cancelResponseMsg);
        _cancelResponseMsg.reset();
    }
}

/**
 * Get the goal UUID and return to MATLAB
 *
 * @param[in] uuidBusPtr pointer to UUID bus message
 */
template <class ActType>
void SimulinkActionClient<ActType>::getGoalUUID(SL_Bus_unique_identifier_msgs_UUID* uuidBusPtr) {
    if (_uuidMsg.get()) {
        std::lock_guard<std::mutex> lck(_mutex);
        convertToBus(uuidBusPtr, *_uuidMsg);
    }
}

/**
 * Method to check if the goal handle is available
 * @retval True if the goal handle is avaiable, otherwise false
 */
template <class ActType>
bool SimulinkActionClient<ActType>::isGoalHandleAvailable() {
    if (_goalHandle) {
        return true;
    }
    return false;
}

/**
 * Wrapper Class for ROS 2 Cancel Action Goal in C++.
 *
 * This class is used by code generated from the Simulink ROS 2
 * "Cancel Action Goal" block - for canceling an active goal
 * It is templated by the ROS 2 action type. It contains
 * bus types for input and output messages.
 */
template <class ActType>
class CancelActionGoal {
public:
    CancelActionGoal()
        : _pSimActClient(nullptr) {};

    void setSimActClientForUUID(const SL_Bus_unique_identifier_msgs_UUID* uuidBusPtr);
    bool isServerConnected();
    void cancelGoal(uint8_t* cancelErrorCode);
    bool isGoalHandleAvailable();

    template <typename CancelRespBusType>
    void getCancelResponse(CancelRespBusType* cancelRespBusPtr);

private:
    SimulinkActionClient<ActType>* _pSimActClient;
};

/* Sets the _pSimActClient property of CancelGoal.
 * This stores the SimulinkActionClient object and acts upon the its methods
 * through wrapper methods of CancelGoal class.
 * @param uuidBusPtr - used to get Goal UUID for an active goal. Using this UUID,
 * client methods are called.
 */
template <typename ActType>
void CancelActionGoal<ActType>::setSimActClientForUUID(SL_Bus_unique_identifier_msgs_UUID const* uuidBusPtr) {
    auto uuidMsg = std::make_unique<unique_identifier_msgs::msg::UUID>();
    convertFromBus(*uuidMsg, uuidBusPtr);
    try {
        std::string uuidToFind = rclcpp_action::to_string(uuidMsg->uuid);
        auto it = _UUIDSimulinkClientMap<ActType>.find(uuidToFind);
        if (it != _UUIDSimulinkClientMap<ActType>.end()) {
            _pSimActClient = _UUIDSimulinkClientMap<ActType>[uuidToFind];
        }
        else {
            _pSimActClient = _UUIDSimulinkClientMap<ActType>[""];
        }
    }
    catch (...) {
        _pSimActClient = nullptr;
    }
}

/**
 * Wrapper method to check if the action server is connected
 * @retval True if the server is connected, otherwise false
 */
template <typename ActType>
bool CancelActionGoal<ActType>::isServerConnected() {
    if (_pSimActClient)
        return _pSimActClient->isServerConnected();
    return false;
}

/**
 * Wrapper method to cancel an active goal
 * @param cancelErrorCode[out] Pointer that contains error code as 1 (Goal is already in terminal state)
 */
template <class ActType>
void CancelActionGoal<ActType>::cancelGoal(uint8_t* cancelErrorCode) {
    try {
        // Cancel an active goal
        _pSimActClient->cancelGoal();
    }
    catch (...) {
        // Goal is already in terminal state
        *cancelErrorCode = static_cast<uint8_t>(1);
    }
}

/**
 * Wrapper method to check if the goal handle is available
 * @retval True if the goal handle is avaiable, otherwise false
 */
template <class ActType>
bool CancelActionGoal<ActType>::isGoalHandleAvailable() {
    if (_pSimActClient)
        return _pSimActClient->isGoalHandleAvailable();
    return false;
}

/**
 * Wrapper method to get the cancel response message, if the goal is transitioned to canceling state
 * @param cancelRespBusPtr[in] Pointer to the bus structure for the cancel response message
 */
template <class ActType>
template <class CancelRespBusType>
void CancelActionGoal<ActType>::getCancelResponse(CancelRespBusType* cancelRespBusPtr) {
    _pSimActClient->getCancelResponse(cancelRespBusPtr);
}

#endif
