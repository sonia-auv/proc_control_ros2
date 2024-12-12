#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include "rclcpp/rclcpp.hpp"
#include <builtin_interfaces/msg/duration.hpp>
#include <builtin_interfaces/msg/time.hpp>
#include <geometry_msgs/msg/point.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <geometry_msgs/msg/pose_with_covariance.hpp>
#include <geometry_msgs/msg/quaternion.hpp>
#include <geometry_msgs/msg/transform.hpp>
#include <geometry_msgs/msg/twist.hpp>
#include <geometry_msgs/msg/twist_with_covariance.hpp>
#include <geometry_msgs/msg/vector3.hpp>
#include <nav_msgs/msg/odometry.hpp>
#include <sensor_msgs/msg/imu.hpp>
#include <sonia_common_ros2/msg/body_velocity_dvl.hpp>
#include <sonia_common_ros2/msg/kill_status.hpp>
#include <sonia_common_ros2/msg/motor_pwm.hpp>
#include <sonia_common_ros2/msg/mpc_gains.hpp>
#include <sonia_common_ros2/msg/mpc_info.hpp>
#include <sonia_common_ros2/msg/pose.hpp>
#include <std_msgs/msg/bool.hpp>
#include <std_msgs/msg/float32.hpp>
#include <std_msgs/msg/float64_multi_array.hpp>
#include <std_msgs/msg/header.hpp>
#include <std_msgs/msg/int16_multi_array.hpp>
#include <std_msgs/msg/multi_array_dimension.hpp>
#include <std_msgs/msg/multi_array_layout.hpp>
#include <std_msgs/msg/u_int8.hpp>
#include <trajectory_msgs/msg/multi_dof_joint_trajectory_point.hpp>
#include "proc_control_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(builtin_interfaces::msg::Duration& msgPtr, SL_Bus_builtin_interfaces_Duration const* busPtr);
void convertToBus(SL_Bus_builtin_interfaces_Duration* busPtr, const builtin_interfaces::msg::Duration& msgPtr);

void convertFromBus(builtin_interfaces::msg::Time& msgPtr, SL_Bus_builtin_interfaces_Time const* busPtr);
void convertToBus(SL_Bus_builtin_interfaces_Time* busPtr, const builtin_interfaces::msg::Time& msgPtr);

void convertFromBus(geometry_msgs::msg::Point& msgPtr, SL_Bus_geometry_msgs_Point const* busPtr);
void convertToBus(SL_Bus_geometry_msgs_Point* busPtr, const geometry_msgs::msg::Point& msgPtr);

void convertFromBus(geometry_msgs::msg::Pose& msgPtr, SL_Bus_geometry_msgs_Pose const* busPtr);
void convertToBus(SL_Bus_geometry_msgs_Pose* busPtr, const geometry_msgs::msg::Pose& msgPtr);

void convertFromBus(geometry_msgs::msg::PoseWithCovariance& msgPtr, SL_Bus_geometry_msgs_PoseWithCovariance const* busPtr);
void convertToBus(SL_Bus_geometry_msgs_PoseWithCovariance* busPtr, const geometry_msgs::msg::PoseWithCovariance& msgPtr);

void convertFromBus(geometry_msgs::msg::Quaternion& msgPtr, SL_Bus_geometry_msgs_Quaternion const* busPtr);
void convertToBus(SL_Bus_geometry_msgs_Quaternion* busPtr, const geometry_msgs::msg::Quaternion& msgPtr);

void convertFromBus(geometry_msgs::msg::Transform& msgPtr, SL_Bus_geometry_msgs_Transform const* busPtr);
void convertToBus(SL_Bus_geometry_msgs_Transform* busPtr, const geometry_msgs::msg::Transform& msgPtr);

void convertFromBus(geometry_msgs::msg::Twist& msgPtr, SL_Bus_geometry_msgs_Twist const* busPtr);
void convertToBus(SL_Bus_geometry_msgs_Twist* busPtr, const geometry_msgs::msg::Twist& msgPtr);

void convertFromBus(geometry_msgs::msg::TwistWithCovariance& msgPtr, SL_Bus_geometry_msgs_TwistWithCovariance const* busPtr);
void convertToBus(SL_Bus_geometry_msgs_TwistWithCovariance* busPtr, const geometry_msgs::msg::TwistWithCovariance& msgPtr);

void convertFromBus(geometry_msgs::msg::Vector3& msgPtr, SL_Bus_geometry_msgs_Vector3 const* busPtr);
void convertToBus(SL_Bus_geometry_msgs_Vector3* busPtr, const geometry_msgs::msg::Vector3& msgPtr);

void convertFromBus(nav_msgs::msg::Odometry& msgPtr, SL_Bus_nav_msgs_Odometry const* busPtr);
void convertToBus(SL_Bus_nav_msgs_Odometry* busPtr, const nav_msgs::msg::Odometry& msgPtr);

void convertFromBus(sensor_msgs::msg::Imu& msgPtr, SL_Bus_sensor_msgs_Imu const* busPtr);
void convertToBus(SL_Bus_sensor_msgs_Imu* busPtr, const sensor_msgs::msg::Imu& msgPtr);

void convertFromBus(sonia_common_ros2::msg::BodyVelocityDVL& msgPtr, SL_Bus_sonia_common_ros2_BodyVelocityDVL const* busPtr);
void convertToBus(SL_Bus_sonia_common_ros2_BodyVelocityDVL* busPtr, const sonia_common_ros2::msg::BodyVelocityDVL& msgPtr);

void convertFromBus(sonia_common_ros2::msg::KillStatus& msgPtr, SL_Bus_sonia_common_ros2_KillStatus const* busPtr);
void convertToBus(SL_Bus_sonia_common_ros2_KillStatus* busPtr, const sonia_common_ros2::msg::KillStatus& msgPtr);

void convertFromBus(sonia_common_ros2::msg::MotorPwm& msgPtr, SL_Bus_sonia_common_ros2_MotorPwm const* busPtr);
void convertToBus(SL_Bus_sonia_common_ros2_MotorPwm* busPtr, const sonia_common_ros2::msg::MotorPwm& msgPtr);

void convertFromBus(sonia_common_ros2::msg::MpcGains& msgPtr, SL_Bus_sonia_common_ros2_MpcGains const* busPtr);
void convertToBus(SL_Bus_sonia_common_ros2_MpcGains* busPtr, const sonia_common_ros2::msg::MpcGains& msgPtr);

void convertFromBus(sonia_common_ros2::msg::MpcInfo& msgPtr, SL_Bus_sonia_common_ros2_MpcInfo const* busPtr);
void convertToBus(SL_Bus_sonia_common_ros2_MpcInfo* busPtr, const sonia_common_ros2::msg::MpcInfo& msgPtr);

void convertFromBus(sonia_common_ros2::msg::Pose& msgPtr, SL_Bus_sonia_common_ros2_Pose const* busPtr);
void convertToBus(SL_Bus_sonia_common_ros2_Pose* busPtr, const sonia_common_ros2::msg::Pose& msgPtr);

void convertFromBus(std_msgs::msg::Bool& msgPtr, SL_Bus_std_msgs_Bool const* busPtr);
void convertToBus(SL_Bus_std_msgs_Bool* busPtr, const std_msgs::msg::Bool& msgPtr);

void convertFromBus(std_msgs::msg::Float32& msgPtr, SL_Bus_std_msgs_Float32 const* busPtr);
void convertToBus(SL_Bus_std_msgs_Float32* busPtr, const std_msgs::msg::Float32& msgPtr);

void convertFromBus(std_msgs::msg::Float64MultiArray& msgPtr, SL_Bus_std_msgs_Float64MultiArray const* busPtr);
void convertToBus(SL_Bus_std_msgs_Float64MultiArray* busPtr, const std_msgs::msg::Float64MultiArray& msgPtr);

void convertFromBus(std_msgs::msg::Header& msgPtr, SL_Bus_std_msgs_Header const* busPtr);
void convertToBus(SL_Bus_std_msgs_Header* busPtr, const std_msgs::msg::Header& msgPtr);

void convertFromBus(std_msgs::msg::Int16MultiArray& msgPtr, SL_Bus_std_msgs_Int16MultiArray const* busPtr);
void convertToBus(SL_Bus_std_msgs_Int16MultiArray* busPtr, const std_msgs::msg::Int16MultiArray& msgPtr);

void convertFromBus(std_msgs::msg::MultiArrayDimension& msgPtr, SL_Bus_std_msgs_MultiArrayDimension const* busPtr);
void convertToBus(SL_Bus_std_msgs_MultiArrayDimension* busPtr, const std_msgs::msg::MultiArrayDimension& msgPtr);

void convertFromBus(std_msgs::msg::MultiArrayLayout& msgPtr, SL_Bus_std_msgs_MultiArrayLayout const* busPtr);
void convertToBus(SL_Bus_std_msgs_MultiArrayLayout* busPtr, const std_msgs::msg::MultiArrayLayout& msgPtr);

void convertFromBus(std_msgs::msg::UInt8& msgPtr, SL_Bus_std_msgs_UInt8 const* busPtr);
void convertToBus(SL_Bus_std_msgs_UInt8* busPtr, const std_msgs::msg::UInt8& msgPtr);

void convertFromBus(trajectory_msgs::msg::MultiDOFJointTrajectoryPoint& msgPtr, SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint const* busPtr);
void convertToBus(SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint* busPtr, const trajectory_msgs::msg::MultiDOFJointTrajectoryPoint& msgPtr);


#endif
