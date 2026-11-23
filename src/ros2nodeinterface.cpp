
//
// File ros2nodeinterface.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 4.301
// Simulink Coder version         : 26.1 (R2026a) 20-Nov-2025
// C/C++ source code generated on : Mon Nov 23 15:32:19 2026
//
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4244)
#pragma warning(disable : 4265)
#pragma warning(disable : 4458)
#pragma warning(disable : 4100)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#endif //_MSC_VER
#include "rclcpp/rclcpp.hpp"
#include "proc_control.h"
#include "ros2nodeinterface.h"
#include <thread>
#include <chrono>
#include <utility>
#undef ROS_SET_RTM_ERROR_STATUS
#undef ROS_GET_RTM_ERROR_STATUS
#undef ROS_RTM_STEP_TASK
#define ROS_SET_RTM_ERROR_STATUS(status) mModel->getRTM()->setErrorStatus(status)
#define ROS_GET_RTM_ERROR_STATUS()       mModel->getRTM()->getErrorStatus()
#define ROS_RTM_STEP_TASK(id)            mModel->getRTM()->StepTask(id)
#include "slros2_multi_threaded_executor.h"
std::vector<rclcpp::SubscriptionBase*> SLROSSubscribers;
std::map<std::string, std::function<void()>> SLROSCallbackMap;
#include "rclcpp_components/register_node_macro.hpp"
rclcpp::Node::SharedPtr SLROSNodePtr;
namespace ros2 {
namespace matlab {
  std::shared_ptr<ros2::matlab::NodeInterface> gMatlabNodeIntr;
  std::shared_ptr<ros2::matlab::NodeInterface> getNodeInterface() {
    return gMatlabNodeIntr;
  }
} //namespace matlab
} //namespace ros2
namespace proc_control
{
	class proc_control : public rclcpp::Node
	{
	public:
		explicit proc_control(const rclcpp::NodeOptions & options)
		: Node("_proc_control", options)
		{
			startModelNode();
		}
        ~proc_control()
        {
            stopModelNode();
        }
    private:
        void startModelNode()
        {
            // Create ROS 2 node and assign to global node pointer
			SLROSNodePtr = std::make_shared<rclcpp::Node>("proc_control", rclcpp::NodeOptions().use_intra_process_comms(true));
			// Initialize globally accessible node interface pointer in constructor
			ros2::matlab::gMatlabNodeIntr = std::make_shared<ros2::matlab::NodeInterface>();
    	    ros2::matlab::gMatlabNodeIntr->initialize();
            // Create custom executor and thread to spawn node
            _mExec = std::make_shared<rclcpp::executors::SLMultiThreadedExecutor>();
            _mExec->add_node(SLROSNodePtr);
            for(size_t ctr = 0; ctr<SLROSSubscribers.size();ctr++){
                _mExec->stopSubscriberCallback(SLROSSubscribers[ctr]);
            }
            _spinnerThread = std::thread([this](){ _mExec->spin();});
        }
        void stopModelNode()
        {
            // Terminates and reset node interface
			ros2::matlab::gMatlabNodeIntr->terminate();
    	    ros2::matlab::gMatlabNodeIntr.reset();
            if (_mExec.get()) {
                _mExec->cancel();
            }
            SLROSNodePtr = nullptr;
            if (_spinnerThread.joinable()){
                _spinnerThread.join();
            }
        }
        std::shared_ptr<rclcpp::executors::SLMultiThreadedExecutor> _mExec;
        std::thread _spinnerThread;
	}; // class proc_control
} // namespace proc_control
RCLCPP_COMPONENTS_REGISTER_NODE(proc_control::proc_control)
#ifndef RT_MEMORY_ALLOCATION_ERROR_DEF
#define RT_MEMORY_ALLOCATION_ERROR_DEF
const char *RT_MEMORY_ALLOCATION_ERROR = "memory allocation error";
#endif
namespace ros2 {
namespace matlab {
NodeInterface::NodeInterface()
    : mModel()
    , mExec()
    , mBaseRateSem()
    , mBaseRateThread()
    , mSchedulerTimer()
    , mStopSem()
    , mRunModel(true){
  }
NodeInterface::~NodeInterface() {
    terminate();
  }
void NodeInterface::initialize() {
    try {
        RCLCPP_INFO(SLROSNodePtr->get_logger(),"** Starting the model \"proc_control\" **\n");
        //initialize the model which will initialize the publishers and subscribers
        mModel = std::make_shared<proc_control>(
        );
        ROS_SET_RTM_ERROR_STATUS(NULL);
        //Initialize the callback map and then initialize the model
        mModel->initialize();
        //create the threads for the rates in the Model
        mBaseRateThread = std::make_shared<std::thread>(&NodeInterface::baseRateTask, this);
        // Create "MutuallyExclusive" callback group for callback associated with mSchedulerTimer to prevent
        // it from being executed in parallel.
		mSchedulerGroup = SLROSNodePtr->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
		mSchedulerTimer = SLROSNodePtr->create_wall_timer(std::chrono::nanoseconds(20000000),std::bind(&NodeInterface::schedulerThreadCallback,this),mSchedulerGroup);
    }
    catch (std::exception& ex) {
        std::cout << ex.what() << std::endl;
        throw ex;
    }
    catch (...) {
        std::cout << "Unknown exception" << std::endl;
        throw;
    }
}
boolean_T NodeInterface::getStopRequestedFlag(void) {
    #ifndef rtmGetStopRequested
    return (!(ROS_GET_RTM_ERROR_STATUS()
        == (NULL)));
    #else
    return (!(ROS_GET_RTM_ERROR_STATUS()
        == (NULL)) || rtmGetStopRequested(mModel->getRTM()));
    #endif
}
void NodeInterface::stop(void) {
}
void NodeInterface::terminate(void) {
    if (mBaseRateThread.get()) {
        mRunModel = false;
        mBaseRateSem.notify(); // break out wait
        mBaseRateThread->join();
        if (mSchedulerTimer.get()) {
	        mSchedulerTimer->cancel();
    	    mSchedulerTimer->reset();
        }
        mBaseRateThread.reset();
        if (mModel.get()) {
            mModel->terminate();
        }
        mModel.reset();
    }
}
//
// Scheduler Task using wall clock timer to run base-rate
//
void NodeInterface::schedulerThreadCallback(void)
{
  if(mRunModel) {
        mBaseRateSem.notify();
    }
}
//
//Model specific
// Base-rate task
void NodeInterface::baseRateTask(void) {
  mRunModel = (ROS_GET_RTM_ERROR_STATUS() ==
              (NULL));
  while (mRunModel) {
    mBaseRateSem.wait();
#ifdef MW_DEBUG_LOG
    RCLCPP_INFO(SLROSNodePtr->get_logger(),"** Base rate task semaphore received\n");
#endif
    if (!mRunModel) break;
    mModel->step();
    mRunModel &= !NodeInterface::getStopRequestedFlag(); //If RunModel and not stop requested
  }
  NodeInterface::stop();
}
}//namespace matlab
}//namespace ros2
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
