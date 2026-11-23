// Copyright 2022-2025 The MathWorks, Inc.

#ifndef _SLROS2_GENERIC_PUBSUB_H_
#define _SLROS2_GENERIC_PUBSUB_H_

#include "rclcpp/rclcpp.hpp"
#include "rclcpp/qos.hpp"
#include "slros_busmsg_conversion.cpp"
#include <vector>

#ifndef _SL_ROS2_CONTROL_PLUGIN_
// Use shared pointer for standard/component node generation
extern rclcpp::Node::SharedPtr SLROSNodePtr;
#endif

#ifdef _SL_ROS2_CONTROL_PLUGIN_
#include "realtime_tools/realtime_box.hpp"
#include "realtime_tools/realtime_buffer.hpp"
#include "realtime_tools/realtime_publisher.hpp"
#include "rclcpp_lifecycle/lifecycle_node.hpp"
// Use lifecycle node for ROS 2 control plugin generation
extern rclcpp_lifecycle::LifecycleNode::SharedPtr SLROSNodePtr;
#endif

extern std::vector<rclcpp::SubscriptionBase*> SLROSSubscribers;

inline rclcpp::QoS getQOSSettingsFromRMW(const rmw_qos_profile_t& qosProfile);

static std::string getPolicyNameFromKind(int policyKind) {
    switch (policyKind) {
        case 1 << 0: return "INVALID";
        case 1 << 1: return "DURABILITY";
        case 1 << 2: return "DEADLINE";
        case 1 << 3: return "LIVELINESS";
        case 1 << 4: return "RELIABILITY";
        case 1 << 5: return "HISTORY";
        case 1 << 6: return "LIFESPAN";
        case 1 << 7: return "DEPTH";
        case 1 << 8: return "LIVELINESS_LEASE_DURATION";
        case 1 << 9: return "AVOID_ROS_NAMESPACE_CONVENTIONS";
        default: return "UNKNOWN_POLICY";
    }
}

/**
 * Utility class for executing the subscriber callback.
 */
class ExecutorUtils : public rclcpp::Executor{
	public:
	static void executeSubscription(rclcpp::SubscriptionBase::SharedPtr subscriber){
		rclcpp::Executor::execute_subscription(subscriber);
	}
};

/**
* Utility function to get the value of an environment variable.
*/
inline char* getEnvironmentVariable(const char* varName) {
    try{
        return getenv(varName);
    }catch(...){
        return nullptr;
    }
}

/**
 * Class for subscribing to ROS 2 messages in C++.
 *
 * This class is used by code generated from the Simulink ROS 2
 * subscriber blocks and is templatized by the ROS 2 message type and
 * Simulink bus type.
 */
template <class MsgType, class BusType>
class SimulinkSubscriber {
  public:
    void createSubscriber(std::string const& topic, const rmw_qos_profile_t& qosProfile);
    bool getLatestMessage(BusType* busPtr); // returns true iff message is new
    void resetSubscriberPtr(){
        _subscriber.reset();
    }
  private:
    std::shared_ptr<rclcpp::Subscription<MsgType>> _subscriber;
    bool _newMessageReceived;
	BusType* mBusPtr;
    std::mutex _subMutex;
	std::string mTopic;
    size_t msgCtr = 0;
	double avgLatency = 0;
};

/**
 * Class for publishing ROS 2 messages in C++.
 *
 * This class is used by code generated from the Simulink ROS 2
 * publisher blocks and is templatized by the ROS 2 message type and
 * Simulink bus type.
 */
template <class MsgType, class BusType>
class SimulinkPublisher {
  public:
    void createPublisher(std::string const& topic, const rmw_qos_profile_t& qosProfile);
    void publish(const BusType* busPtr); // returns true iff message is new
    void resetPublisherPtr(){
        _publisher.reset();
    }
  private:
    std::shared_ptr<rclcpp::Publisher<MsgType>> _publisher;
    std::string mTopic;
    size_t msgCtr = 0;
};


/**
 * Create a C++ subscriber object
 *
 * @param topic The topic name to subscribe to
 * @param qosProfile QoS profile of the subscription
 */
template <class MsgType, class BusType>
void SimulinkSubscriber<MsgType, BusType>::createSubscriber(std::string const& topic,
                                                            const rmw_qos_profile_t& qosProfile) {

    auto callback = [this](const MsgType & msg) {    
		convertToBus(mBusPtr, msg);
		msgCtr++;

        #ifdef MW_LATENCY_DEBUG_LOG
		auto nowTs = SLROSNodePtr->get_clock()->now();
        auto time_difference = nowTs - msg.header.stamp;
        auto time_difference_ms =  time_difference.seconds()*1000;
        // Print the time difference in milliseconds
		avgLatency = avgLatency + time_difference_ms;
        RCLCPP_INFO(SLROSNodePtr->get_logger(), "latency(ms): %ld, avgLatency: %f", time_difference_ms, static_cast<double>(avgLatency) / msgCtr);
        #endif

        #ifdef MW_DEBUG_LOG
        RCLCPP_INFO(SLROSNodePtr->get_logger(),"SUB-%s : %ld, msg_ptr : %p",mTopic.c_str(),msgCtr,(void*)&msg);
        #endif
		_newMessageReceived = true;
    };
    
    rclcpp::SubscriptionOptions subscription_options;

    subscription_options.event_callbacks.deadline_callback = [this, topic](const rclcpp::QOSDeadlineRequestedInfo& event) {
        RCLCPP_WARN(SLROSNodePtr->get_logger(), "Requested deadline missed on topic '%s'. The subscription did not receive any messages within the expected duration set by the deadline QoS policy. Total missed deadlines: %d\n",topic.c_str(),event.total_count);
    };

    subscription_options.event_callbacks.liveliness_callback = [this, topic](const rclcpp::QOSLivelinessChangedInfo& event) {
        RCLCPP_WARN(SLROSNodePtr->get_logger(), "Liveliness changed on topic '%s'. A change in the liveliness of one or more publishers on the topic has been detected. Alive count: %d, Not alive count: %d\n",topic.c_str(),event.alive_count,event.not_alive_count);
    };

    subscription_options.event_callbacks.message_lost_callback = [this, topic](const rclcpp::QOSMessageLostInfo& event) {
        RCLCPP_WARN(SLROSNodePtr->get_logger(), "Messages lost on topic '%s'. Total lost messages: %lu\n",topic.c_str(),event.total_count);
    };
    
    subscription_options.event_callbacks.incompatible_qos_callback = [this, topic](const rclcpp::QOSRequestedIncompatibleQoSInfo& event) {
        RCLCPP_WARN(SLROSNodePtr->get_logger(), "New publisher discovered on topic '%s', offering incompatible QoS. No messages will be received from it. Last incompatible policy: %s",topic.c_str(),getPolicyNameFromKind(event.last_policy_kind).c_str());
    };

    _subscriber = SLROSNodePtr->create_subscription<MsgType>(
            topic, getQOSSettingsFromRMW(qosProfile), callback, subscription_options);
    
    // Add the subscriber to the list of subscriber
    SLROSSubscribers.push_back(_subscriber.get());
	
	mTopic = topic;

    // If the environment variable is set to use loaned-message and at the same time message loaning is not possible due to any reason, 
    // warning will be displayed. Reason could be due to unsupported RMW or unsupported data type etc.
    auto canLoanMessages = _subscriber->can_loan_messages();
    #ifdef MW_DEBUG_LOG
    RCLCPP_INFO(SLROSNodePtr->get_logger(),"subscriber : %s, can_loan_messages() : %d",topic.c_str(),canLoanMessages);
    #endif
    if(!canLoanMessages){
        auto val = getEnvironmentVariable("ROS_DISABLE_LOANED_MESSAGES");
        if(val && std::string(val) == "0"){
            RCLCPP_WARN(SLROSNodePtr->get_logger(), "Subscriber of topic '%s' is not able to use loaned messages. Falling back to use normal messages.",topic.c_str());
        }
    }
}

/**
 * Get the latest received message
 *
 * @param busPtr Simulink bus structure that should be populated with message contents
 * @return =TRUE, then a new message has been received and *busPtr holds the newly-received message.
 * =FALSE when a new message has not been received and *busPtr is unchanged.
 */
template <class MsgType, class BusType>
bool SimulinkSubscriber<MsgType, BusType>::getLatestMessage(BusType* busPtr) {

    mBusPtr = busPtr;

    #ifdef MW_LATENCY_DEBUG_LOG
    static auto startTs = SLROSNodePtr->get_clock()->now();
	auto nowTs = SLROSNodePtr->get_clock()->now();
    #endif

    //Execute the subscriber callback
    ExecutorUtils::executeSubscription(_subscriber);
	
	if (_newMessageReceived) {
		_newMessageReceived = false;
        #ifdef MW_LATENCY_DEBUG_LOG
		auto nowTs2 = SLROSNodePtr->get_clock()->now();
	    auto d = nowTs2 - nowTs;
		auto totalTime = nowTs - startTs;
	    RCLCPP_INFO( SLROSNodePtr->get_logger(), "sub-exec time(ms): %f, HZ: %f", 
                    d.seconds() * 1000, msgCtr / totalTime.seconds());
        #endif
        return true;
    }
    return false;
}

/**
 * Create a C++ publisher object
 *
 * @param topic The topic name to publish to
 * @param qosProfile QoS profile of the publisher
 */
template <class MsgType, class BusType>
void SimulinkPublisher<MsgType, BusType>::createPublisher(std::string const& topic,
                                                          const rmw_qos_profile_t& qosProfile) {
    rclcpp::PublisherOptions publisher_options;

    publisher_options.event_callbacks.deadline_callback = [this,topic](rclcpp::QOSDeadlineOfferedInfo& event) {
        RCLCPP_WARN(SLROSNodePtr->get_logger(), "Offered deadline missed on topic '%s'. The publisher failed to meet the expected deadline for publishing messages as per the deadline QoS policy. Total missed deadlines: %d\n",topic.c_str(),event.total_count);
    };

    publisher_options.event_callbacks.liveliness_callback = [this,topic](rclcpp::QOSLivelinessLostInfo& event) {
        RCLCPP_WARN(SLROSNodePtr->get_logger(), "Liveliness lost on topic '%s'. The publisher has not indicated liveliness within the lease duration. Liveliness lost count: %d\n",topic.c_str(),event.total_count);
    };

    publisher_options.event_callbacks.incompatible_qos_callback = [this,topic](rclcpp::QOSOfferedIncompatibleQoSInfo& event) {
        RCLCPP_WARN(SLROSNodePtr->get_logger(), "New subscription discovered on topic '%s', requesting incompatible QoS. No messages will be sent to it. Last incompatible policy: %s\n",topic.c_str(),getPolicyNameFromKind(event.last_policy_kind).c_str());
    };

    _publisher = SLROSNodePtr->create_publisher<MsgType>(topic, getQOSSettingsFromRMW(qosProfile), publisher_options);
    mTopic = topic;

    auto canLoanMessages = _publisher->can_loan_messages();
    #ifdef MW_DEBUG_LOG
    RCLCPP_INFO(SLROSNodePtr->get_logger(),"publisher : %s, can_loan_messages() : %d",topic.c_str(),canLoanMessages);
    #endif
    if(!canLoanMessages){
        auto val = getEnvironmentVariable("ROS_DISABLE_LOANED_MESSAGES");
        if(val && std::string(val) == "0"){
            RCLCPP_WARN(SLROSNodePtr->get_logger(), "Subscriber of topic '%s' is not able to use loaned messages. Falling back to use normal messages.",topic.c_str());
        }
    }
}

/**
 * Publish a message
 *
 * @param busPtr Pointer to the bus structure for the outgoing message
 */
template <class MsgType, class BusType>
void SimulinkPublisher<MsgType, BusType>::publish(const BusType* inBus) {
	msgCtr++;
    #ifdef MW_LATENCY_DEBUG_LOG    
    static auto startTs = SLROSNodePtr->get_clock()->now();
	auto nowTs = SLROSNodePtr->get_clock()->now();
    #endif

    if(_publisher->can_loan_messages()){
        auto loaned_msg = _publisher->borrow_loaned_message();
        convertFromBus(loaned_msg.get(), inBus);
        
        #ifdef MW_DEBUG_LOG
        RCLCPP_INFO(SLROSNodePtr->get_logger(),"PUB-%s : %ld, msg-ptr : %p, can_loan_messages():true.",mTopic.c_str(),msgCtr,(void*)&(loaned_msg.get()));
        #endif
        
        #ifdef MW_LATENCY_DEBUG_LOG
        auto msg = &(loaned_msg.get());
        msg->header.stamp = SLROSNodePtr->get_clock()->now(); 
        #endif
        _publisher->publish(std::move(loaned_msg));
	}else{
        auto msg = std::make_unique<MsgType>();
        convertFromBus(*msg, inBus);
        
        #ifdef MW_DEBUG_LOG
        RCLCPP_INFO(SLROSNodePtr->get_logger(),"PUB-%s : %ld, msg-ptr : %p, can_loan_messages():false.",mTopic.c_str(),msgCtr,(void*)msg.get());
        #endif
        
        #ifdef MW_LATENCY_DEBUG_LOG
        msg->header.stamp = SLROSNodePtr->get_clock()->now();
        #endif

        _publisher->publish(std::move(msg));	
	}

#ifdef MW_LATENCY_DEBUG_LOG
    auto nowTs2 = SLROSNodePtr->get_clock()->now();
	auto d = nowTs2 - nowTs;
	auto totalTime = nowTs - startTs;
	RCLCPP_INFO(SLROSNodePtr->get_logger(), "pub-exec time(ms): %f, HZ: %f", d.seconds() * 1000, msgCtr / totalTime.seconds());
#endif
}

#ifdef _SL_ROS2_CONTROL_PLUGIN_
/**
 * Class for publishing realtime ROS 2 messages in C++.
 *
 * This class is used by code ros2_control controller package
 * generated from the Simulink ROS 2 publisher blocks and is templatized by
 * the ROS 2 message type and Simulink bus type.
 */
template <class MsgType, class BusType>
class SimulinkRTPublisher {
  public:
    void createPublisher(std::string const& topic, const rmw_qos_profile_t& qosProfile);
    void publish(const BusType* busPtr);// returns true if message is new
    void resetPublisherPtr(){
        _realtime_publisher.reset();
        _regular_publisher.reset();
    }

  private:
    std::shared_ptr<rclcpp::Publisher<MsgType>> _regular_publisher = nullptr; // Regular publisher
    std::shared_ptr<realtime_tools::RealtimePublisher<MsgType>> _realtime_publisher = nullptr; /// Realtime publisher
};

/**
 * Initialize the realtime publisher
 *
 * @param topic The topic name to publish to
 * @param qosProfile QoS profile of the publisher
 */
template <class MsgType, class BusType>
void SimulinkRTPublisher<MsgType, BusType>::createPublisher(std::string const& topic,
                                                            const rmw_qos_profile_t& qosProfile) {
    rclcpp::PublisherOptions publisher_options;

    publisher_options.event_callbacks.deadline_callback = [this,topic](rclcpp::QOSDeadlineOfferedInfo& event) {
        RCLCPP_WARN(SLROSNodePtr->get_logger(), "Offered deadline missed on topic '%s'. The publisher failed to meet the expected deadline for publishing messages as per the deadline QoS policy. Total missed deadlines: %d\n",topic.c_str(),event.total_count);
    };

    publisher_options.event_callbacks.liveliness_callback = [this,topic](rclcpp::QOSLivelinessLostInfo& event) {
        RCLCPP_WARN(SLROSNodePtr->get_logger(), "Liveliness lost on topic '%s'. The publisher has not indicated liveliness within the lease duration. Liveliness lost count: %d\n",topic.c_str(),event.total_count);
    };

    publisher_options.event_callbacks.incompatible_qos_callback = [this,topic](rclcpp::QOSOfferedIncompatibleQoSInfo& event) {
        RCLCPP_WARN(SLROSNodePtr->get_logger(), "New subscription discovered on topic '%s', requesting incompatible QoS. No messages will be sent to it. Last incompatible policy: %s\n",topic.c_str(),getPolicyNameFromKind(event.last_policy_kind).c_str());
    };

    _regular_publisher = SLROSNodePtr->create_publisher<MsgType>(topic, getQOSSettingsFromRMW(qosProfile), publisher_options);
    _realtime_publisher = std::make_shared<realtime_tools::RealtimePublisher<MsgType>>(_regular_publisher);
}
/**
 * Convert from bus and publish the message
 *
 * @param busPtr Pointer to the bus structure for the outgoing message
 */
template <class MsgType, class BusType>
void SimulinkRTPublisher<MsgType, BusType>::publish(const BusType* inBus) {
    if (_realtime_publisher->trylock())
    {
        convertFromBus(_realtime_publisher->msg_, inBus);
        _realtime_publisher->unlockAndPublish();
    }
}
#endif
#endif
