
//
// File ros2nodeinterface.h
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.202
// Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
// C/C++ source code generated on : Wed Nov 27 16:52:26 2024
//
#ifndef _ROS2_MATLAB_NODEINTERFACE_
#define _ROS2_MATLAB_NODEINTERFACE_
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4265)
#pragma warning(disable : 4458)
#pragma warning(disable : 4100)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#endif //_MSC_VER
#include "rclcpp/rclcpp.hpp"
class proc_control;
#include "proc_control_types.h"
#include "rtwtypes.h"
#include "slros_busmsg_conversion.h"
#include "geometry_msgs/msg/pose.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "sensor_msgs/msg/imu.hpp"
#include "sonia_common_ros2/msg/body_velocity_dvl.hpp"
#include "sonia_common_ros2/msg/kill_status.hpp"
#include "sonia_common_ros2/msg/motor_pwm.hpp"
#include "sonia_common_ros2/msg/mpc_gains.hpp"
#include "sonia_common_ros2/msg/mpc_info.hpp"
#include "sonia_common_ros2/msg/pose.hpp"
#include "std_msgs/msg/bool.hpp"
#include "std_msgs/msg/float32.hpp"
#include "std_msgs/msg/float64_multi_array.hpp"
#include "std_msgs/msg/u_int8.hpp"
#include "trajectory_msgs/msg/multi_dof_joint_trajectory_point.hpp"
namespace ros2 {
namespace matlab {
  //Semaphore using std::CV and std::mutex
  class Semaphore {
  public:
    std::mutex mMutex;
    std::condition_variable mCV;
    std::atomic_uint mCount;
    //
    Semaphore(int count = 0)
      : mCount(count) {
      }
    //
    inline void notify() {
      std::unique_lock<std::mutex> lock(mMutex);
      mCount++;
      mCV.notify_all();
    }
    //
    inline void wait() {
      std::unique_lock<std::mutex> lock(mMutex);
      while (mCount == 0) {
        mCV.wait(lock);
      }
      if (mCount)
        mCount--;
    }
  };
  //NodeInterface
  class NodeInterface {
    NodeInterface(const NodeInterface& );
    NodeInterface& operator=(const NodeInterface& );
    //
    rclcpp::Node::SharedPtr mNode;
    std::shared_ptr<proc_control> mModel;
    rclcpp::executors::MultiThreadedExecutor::SharedPtr mExec;
    //
    Semaphore mBaseRateSem;
    std::shared_ptr<std::thread> mBaseRateThread;
    rclcpp::TimerBase::SharedPtr mSchedulerTimer;
    rclcpp::CallbackGroup::SharedPtr mSchedulerGroup;
    //
    //
    Semaphore mStopSem;
    volatile boolean_T mRunModel;
  public:
    NodeInterface();
    ~NodeInterface();
    //
    void initialize(int argc, char * const argv[]);
    int run();
    void stop(void);
    void terminate(void);
    //
    boolean_T getStopRequestedFlag(void);
    void schedulerThreadCallback(void);
    void baseRateTask(void);
    //
    rclcpp::Node::SharedPtr getNode() {
      return mNode;
    }
    //
    std::shared_ptr<proc_control> getModel() {
      return mModel;
    }
  }; //class NodeInterface
  //
  std::shared_ptr<ros2::matlab::NodeInterface> getNodeInterface();
  // Get QoS Settings from RMW
  inline rclcpp::QoS getQOSSettingsFromRMW(const rmw_qos_profile_t& qosProfile) {
      rclcpp::QoS qos(rclcpp::QoSInitialization::from_rmw(qosProfile));
      if (RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL == qosProfile.durability) {
          qos.transient_local();
      } else {
          qos.durability_volatile();
      }
      if (RMW_QOS_POLICY_RELIABILITY_RELIABLE == qosProfile.reliability) {
          qos.reliable();
      } else {
          qos.best_effort();
      }
      return qos;
  }
}//namespace matlab
}//namespace ros2
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER
#endif //_ROS2_MATLAB_ROS2CGEN_MULTIRATE_
