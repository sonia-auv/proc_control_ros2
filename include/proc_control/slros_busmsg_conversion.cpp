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


[[maybe_unused]] static void convertFromBus(builtin_interfaces::msg::Duration& msgPtr, SL_Bus_builtin_interfaces_Duration const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_builtin_interfaces_Duration* busPtr, const builtin_interfaces::msg::Duration& msgPtr);

[[maybe_unused]] static void convertFromBus(builtin_interfaces::msg::Time& msgPtr, SL_Bus_builtin_interfaces_Time const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_builtin_interfaces_Time* busPtr, const builtin_interfaces::msg::Time& msgPtr);

[[maybe_unused]] static void convertFromBus(geometry_msgs::msg::Point& msgPtr, SL_Bus_geometry_msgs_Point const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_geometry_msgs_Point* busPtr, const geometry_msgs::msg::Point& msgPtr);

[[maybe_unused]] static void convertFromBus(geometry_msgs::msg::Pose& msgPtr, SL_Bus_geometry_msgs_Pose const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_geometry_msgs_Pose* busPtr, const geometry_msgs::msg::Pose& msgPtr);

[[maybe_unused]] static void convertFromBus(geometry_msgs::msg::PoseWithCovariance& msgPtr, SL_Bus_geometry_msgs_PoseWithCovariance const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_geometry_msgs_PoseWithCovariance* busPtr, const geometry_msgs::msg::PoseWithCovariance& msgPtr);

[[maybe_unused]] static void convertFromBus(geometry_msgs::msg::Quaternion& msgPtr, SL_Bus_geometry_msgs_Quaternion const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_geometry_msgs_Quaternion* busPtr, const geometry_msgs::msg::Quaternion& msgPtr);

[[maybe_unused]] static void convertFromBus(geometry_msgs::msg::Transform& msgPtr, SL_Bus_geometry_msgs_Transform const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_geometry_msgs_Transform* busPtr, const geometry_msgs::msg::Transform& msgPtr);

[[maybe_unused]] static void convertFromBus(geometry_msgs::msg::Twist& msgPtr, SL_Bus_geometry_msgs_Twist const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_geometry_msgs_Twist* busPtr, const geometry_msgs::msg::Twist& msgPtr);

[[maybe_unused]] static void convertFromBus(geometry_msgs::msg::TwistWithCovariance& msgPtr, SL_Bus_geometry_msgs_TwistWithCovariance const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_geometry_msgs_TwistWithCovariance* busPtr, const geometry_msgs::msg::TwistWithCovariance& msgPtr);

[[maybe_unused]] static void convertFromBus(geometry_msgs::msg::Vector3& msgPtr, SL_Bus_geometry_msgs_Vector3 const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_geometry_msgs_Vector3* busPtr, const geometry_msgs::msg::Vector3& msgPtr);

[[maybe_unused]] static void convertFromBus(nav_msgs::msg::Odometry& msgPtr, SL_Bus_nav_msgs_Odometry const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_nav_msgs_Odometry* busPtr, const nav_msgs::msg::Odometry& msgPtr);

[[maybe_unused]] static void convertFromBus(sensor_msgs::msg::Imu& msgPtr, SL_Bus_sensor_msgs_Imu const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_sensor_msgs_Imu* busPtr, const sensor_msgs::msg::Imu& msgPtr);

[[maybe_unused]] static void convertFromBus(sonia_common_ros2::msg::BodyVelocityDVL& msgPtr, SL_Bus_sonia_common_ros2_BodyVelocityDVL const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_sonia_common_ros2_BodyVelocityDVL* busPtr, const sonia_common_ros2::msg::BodyVelocityDVL& msgPtr);

[[maybe_unused]] static void convertFromBus(sonia_common_ros2::msg::KillStatus& msgPtr, SL_Bus_sonia_common_ros2_KillStatus const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_sonia_common_ros2_KillStatus* busPtr, const sonia_common_ros2::msg::KillStatus& msgPtr);

[[maybe_unused]] static void convertFromBus(sonia_common_ros2::msg::MotorPwm& msgPtr, SL_Bus_sonia_common_ros2_MotorPwm const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_sonia_common_ros2_MotorPwm* busPtr, const sonia_common_ros2::msg::MotorPwm& msgPtr);

[[maybe_unused]] static void convertFromBus(sonia_common_ros2::msg::MpcGains& msgPtr, SL_Bus_sonia_common_ros2_MpcGains const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_sonia_common_ros2_MpcGains* busPtr, const sonia_common_ros2::msg::MpcGains& msgPtr);

[[maybe_unused]] static void convertFromBus(sonia_common_ros2::msg::MpcInfo& msgPtr, SL_Bus_sonia_common_ros2_MpcInfo const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_sonia_common_ros2_MpcInfo* busPtr, const sonia_common_ros2::msg::MpcInfo& msgPtr);

[[maybe_unused]] static void convertFromBus(sonia_common_ros2::msg::Pose& msgPtr, SL_Bus_sonia_common_ros2_Pose const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_sonia_common_ros2_Pose* busPtr, const sonia_common_ros2::msg::Pose& msgPtr);

[[maybe_unused]] static void convertFromBus(std_msgs::msg::Bool& msgPtr, SL_Bus_std_msgs_Bool const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_std_msgs_Bool* busPtr, const std_msgs::msg::Bool& msgPtr);

[[maybe_unused]] static void convertFromBus(std_msgs::msg::Float32& msgPtr, SL_Bus_std_msgs_Float32 const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_std_msgs_Float32* busPtr, const std_msgs::msg::Float32& msgPtr);

[[maybe_unused]] static void convertFromBus(std_msgs::msg::Float64MultiArray& msgPtr, SL_Bus_std_msgs_Float64MultiArray const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_std_msgs_Float64MultiArray* busPtr, const std_msgs::msg::Float64MultiArray& msgPtr);

[[maybe_unused]] static void convertFromBus(std_msgs::msg::Header& msgPtr, SL_Bus_std_msgs_Header const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_std_msgs_Header* busPtr, const std_msgs::msg::Header& msgPtr);

[[maybe_unused]] static void convertFromBus(std_msgs::msg::Int16MultiArray& msgPtr, SL_Bus_std_msgs_Int16MultiArray const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_std_msgs_Int16MultiArray* busPtr, const std_msgs::msg::Int16MultiArray& msgPtr);

[[maybe_unused]] static void convertFromBus(std_msgs::msg::MultiArrayDimension& msgPtr, SL_Bus_std_msgs_MultiArrayDimension const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_std_msgs_MultiArrayDimension* busPtr, const std_msgs::msg::MultiArrayDimension& msgPtr);

[[maybe_unused]] static void convertFromBus(std_msgs::msg::MultiArrayLayout& msgPtr, SL_Bus_std_msgs_MultiArrayLayout const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_std_msgs_MultiArrayLayout* busPtr, const std_msgs::msg::MultiArrayLayout& msgPtr);

[[maybe_unused]] static void convertFromBus(std_msgs::msg::UInt8& msgPtr, SL_Bus_std_msgs_UInt8 const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_std_msgs_UInt8* busPtr, const std_msgs::msg::UInt8& msgPtr);

[[maybe_unused]] static void convertFromBus(trajectory_msgs::msg::MultiDOFJointTrajectoryPoint& msgPtr, SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint const* busPtr);
[[maybe_unused]] static void convertToBus(SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint* busPtr, const trajectory_msgs::msg::MultiDOFJointTrajectoryPoint& msgPtr);



// Conversions between SL_Bus_builtin_interfaces_Duration and builtin_interfaces::msg::Duration

[[maybe_unused]] static void convertFromBus(builtin_interfaces::msg::Duration& msgPtr, SL_Bus_builtin_interfaces_Duration const* busPtr)
{
  const std::string rosMessageType("builtin_interfaces/Duration");

  msgPtr.nanosec =  busPtr->nanosec;
  msgPtr.sec =  busPtr->sec;
}

[[maybe_unused]] static void convertToBus(SL_Bus_builtin_interfaces_Duration* busPtr, const builtin_interfaces::msg::Duration& msgPtr)
{
  const std::string rosMessageType("builtin_interfaces/Duration");

  busPtr->nanosec =  msgPtr.nanosec;
  busPtr->sec =  msgPtr.sec;
}


// Conversions between SL_Bus_builtin_interfaces_Time and builtin_interfaces::msg::Time

[[maybe_unused]] static void convertFromBus(builtin_interfaces::msg::Time& msgPtr, SL_Bus_builtin_interfaces_Time const* busPtr)
{
  const std::string rosMessageType("builtin_interfaces/Time");

  msgPtr.nanosec =  busPtr->nanosec;
  msgPtr.sec =  busPtr->sec;
}

[[maybe_unused]] static void convertToBus(SL_Bus_builtin_interfaces_Time* busPtr, const builtin_interfaces::msg::Time& msgPtr)
{
  const std::string rosMessageType("builtin_interfaces/Time");

  busPtr->nanosec =  msgPtr.nanosec;
  busPtr->sec =  msgPtr.sec;
}


// Conversions between SL_Bus_geometry_msgs_Point and geometry_msgs::msg::Point

[[maybe_unused]] static void convertFromBus(geometry_msgs::msg::Point& msgPtr, SL_Bus_geometry_msgs_Point const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Point");

  msgPtr.x =  busPtr->x;
  msgPtr.y =  busPtr->y;
  msgPtr.z =  busPtr->z;
}

[[maybe_unused]] static void convertToBus(SL_Bus_geometry_msgs_Point* busPtr, const geometry_msgs::msg::Point& msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Point");

  busPtr->x =  msgPtr.x;
  busPtr->y =  msgPtr.y;
  busPtr->z =  msgPtr.z;
}


// Conversions between SL_Bus_geometry_msgs_Pose and geometry_msgs::msg::Pose

[[maybe_unused]] static void convertFromBus(geometry_msgs::msg::Pose& msgPtr, SL_Bus_geometry_msgs_Pose const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Pose");

  convertFromBus(msgPtr.orientation, &busPtr->orientation);
  convertFromBus(msgPtr.position, &busPtr->position);
}

[[maybe_unused]] static void convertToBus(SL_Bus_geometry_msgs_Pose* busPtr, const geometry_msgs::msg::Pose& msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Pose");

  convertToBus(&busPtr->orientation, msgPtr.orientation);
  convertToBus(&busPtr->position, msgPtr.position);
}


// Conversions between SL_Bus_geometry_msgs_PoseWithCovariance and geometry_msgs::msg::PoseWithCovariance

[[maybe_unused]] static void convertFromBus(geometry_msgs::msg::PoseWithCovariance& msgPtr, SL_Bus_geometry_msgs_PoseWithCovariance const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/PoseWithCovariance");

  convertFromBusFixedPrimitiveArray(msgPtr.covariance, busPtr->covariance);
  convertFromBus(msgPtr.pose, &busPtr->pose);
}

[[maybe_unused]] static void convertToBus(SL_Bus_geometry_msgs_PoseWithCovariance* busPtr, const geometry_msgs::msg::PoseWithCovariance& msgPtr)
{
  const std::string rosMessageType("geometry_msgs/PoseWithCovariance");

  convertToBusFixedPrimitiveArray(busPtr->covariance, msgPtr.covariance, slros::NoopWarning());
  convertToBus(&busPtr->pose, msgPtr.pose);
}


// Conversions between SL_Bus_geometry_msgs_Quaternion and geometry_msgs::msg::Quaternion

[[maybe_unused]] static void convertFromBus(geometry_msgs::msg::Quaternion& msgPtr, SL_Bus_geometry_msgs_Quaternion const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Quaternion");

  msgPtr.w =  busPtr->w;
  msgPtr.x =  busPtr->x;
  msgPtr.y =  busPtr->y;
  msgPtr.z =  busPtr->z;
}

[[maybe_unused]] static void convertToBus(SL_Bus_geometry_msgs_Quaternion* busPtr, const geometry_msgs::msg::Quaternion& msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Quaternion");

  busPtr->w =  msgPtr.w;
  busPtr->x =  msgPtr.x;
  busPtr->y =  msgPtr.y;
  busPtr->z =  msgPtr.z;
}


// Conversions between SL_Bus_geometry_msgs_Transform and geometry_msgs::msg::Transform

[[maybe_unused]] static void convertFromBus(geometry_msgs::msg::Transform& msgPtr, SL_Bus_geometry_msgs_Transform const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Transform");

  convertFromBus(msgPtr.rotation, &busPtr->rotation);
  convertFromBus(msgPtr.translation, &busPtr->translation);
}

[[maybe_unused]] static void convertToBus(SL_Bus_geometry_msgs_Transform* busPtr, const geometry_msgs::msg::Transform& msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Transform");

  convertToBus(&busPtr->rotation, msgPtr.rotation);
  convertToBus(&busPtr->translation, msgPtr.translation);
}


// Conversions between SL_Bus_geometry_msgs_Twist and geometry_msgs::msg::Twist

[[maybe_unused]] static void convertFromBus(geometry_msgs::msg::Twist& msgPtr, SL_Bus_geometry_msgs_Twist const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Twist");

  convertFromBus(msgPtr.angular, &busPtr->angular);
  convertFromBus(msgPtr.linear, &busPtr->linear);
}

[[maybe_unused]] static void convertToBus(SL_Bus_geometry_msgs_Twist* busPtr, const geometry_msgs::msg::Twist& msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Twist");

  convertToBus(&busPtr->angular, msgPtr.angular);
  convertToBus(&busPtr->linear, msgPtr.linear);
}


// Conversions between SL_Bus_geometry_msgs_TwistWithCovariance and geometry_msgs::msg::TwistWithCovariance

[[maybe_unused]] static void convertFromBus(geometry_msgs::msg::TwistWithCovariance& msgPtr, SL_Bus_geometry_msgs_TwistWithCovariance const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/TwistWithCovariance");

  convertFromBusFixedPrimitiveArray(msgPtr.covariance, busPtr->covariance);
  convertFromBus(msgPtr.twist, &busPtr->twist);
}

[[maybe_unused]] static void convertToBus(SL_Bus_geometry_msgs_TwistWithCovariance* busPtr, const geometry_msgs::msg::TwistWithCovariance& msgPtr)
{
  const std::string rosMessageType("geometry_msgs/TwistWithCovariance");

  convertToBusFixedPrimitiveArray(busPtr->covariance, msgPtr.covariance, slros::NoopWarning());
  convertToBus(&busPtr->twist, msgPtr.twist);
}


// Conversions between SL_Bus_geometry_msgs_Vector3 and geometry_msgs::msg::Vector3

[[maybe_unused]] static void convertFromBus(geometry_msgs::msg::Vector3& msgPtr, SL_Bus_geometry_msgs_Vector3 const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Vector3");

  msgPtr.x =  busPtr->x;
  msgPtr.y =  busPtr->y;
  msgPtr.z =  busPtr->z;
}

[[maybe_unused]] static void convertToBus(SL_Bus_geometry_msgs_Vector3* busPtr, const geometry_msgs::msg::Vector3& msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Vector3");

  busPtr->x =  msgPtr.x;
  busPtr->y =  msgPtr.y;
  busPtr->z =  msgPtr.z;
}


// Conversions between SL_Bus_nav_msgs_Odometry and nav_msgs::msg::Odometry

[[maybe_unused]] static void convertFromBus(nav_msgs::msg::Odometry& msgPtr, SL_Bus_nav_msgs_Odometry const* busPtr)
{
  const std::string rosMessageType("nav_msgs/Odometry");

  convertFromBusVariablePrimitiveArray(msgPtr.child_frame_id, busPtr->child_frame_id, busPtr->child_frame_id_SL_Info);
  convertFromBus(msgPtr.header, &busPtr->header);
  convertFromBus(msgPtr.pose, &busPtr->pose);
  convertFromBus(msgPtr.twist, &busPtr->twist);
}

[[maybe_unused]] static void convertToBus(SL_Bus_nav_msgs_Odometry* busPtr, const nav_msgs::msg::Odometry& msgPtr)
{
  const std::string rosMessageType("nav_msgs/Odometry");

  convertToBusVariablePrimitiveArray(busPtr->child_frame_id, busPtr->child_frame_id_SL_Info, msgPtr.child_frame_id, slros::EnabledWarning(rosMessageType, "child_frame_id"));
  convertToBus(&busPtr->header, msgPtr.header);
  convertToBus(&busPtr->pose, msgPtr.pose);
  convertToBus(&busPtr->twist, msgPtr.twist);
}


// Conversions between SL_Bus_sensor_msgs_Imu and sensor_msgs::msg::Imu

[[maybe_unused]] static void convertFromBus(sensor_msgs::msg::Imu& msgPtr, SL_Bus_sensor_msgs_Imu const* busPtr)
{
  const std::string rosMessageType("sensor_msgs/Imu");

  convertFromBus(msgPtr.angular_velocity, &busPtr->angular_velocity);
  convertFromBusFixedPrimitiveArray(msgPtr.angular_velocity_covariance, busPtr->angular_velocity_covariance);
  convertFromBus(msgPtr.header, &busPtr->header);
  convertFromBus(msgPtr.linear_acceleration, &busPtr->linear_acceleration);
  convertFromBusFixedPrimitiveArray(msgPtr.linear_acceleration_covariance, busPtr->linear_acceleration_covariance);
  convertFromBus(msgPtr.orientation, &busPtr->orientation);
  convertFromBusFixedPrimitiveArray(msgPtr.orientation_covariance, busPtr->orientation_covariance);
}

[[maybe_unused]] static void convertToBus(SL_Bus_sensor_msgs_Imu* busPtr, const sensor_msgs::msg::Imu& msgPtr)
{
  const std::string rosMessageType("sensor_msgs/Imu");

  convertToBus(&busPtr->angular_velocity, msgPtr.angular_velocity);
  convertToBusFixedPrimitiveArray(busPtr->angular_velocity_covariance, msgPtr.angular_velocity_covariance, slros::NoopWarning());
  convertToBus(&busPtr->header, msgPtr.header);
  convertToBus(&busPtr->linear_acceleration, msgPtr.linear_acceleration);
  convertToBusFixedPrimitiveArray(busPtr->linear_acceleration_covariance, msgPtr.linear_acceleration_covariance, slros::NoopWarning());
  convertToBus(&busPtr->orientation, msgPtr.orientation);
  convertToBusFixedPrimitiveArray(busPtr->orientation_covariance, msgPtr.orientation_covariance, slros::NoopWarning());
}


// Conversions between SL_Bus_sonia_common_ros2_BodyVelocityDVL and sonia_common_ros2::msg::BodyVelocityDVL

[[maybe_unused]] static void convertFromBus(sonia_common_ros2::msg::BodyVelocityDVL& msgPtr, SL_Bus_sonia_common_ros2_BodyVelocityDVL const* busPtr)
{
  const std::string rosMessageType("sonia_common_ros2/BodyVelocityDVL");

  msgPtr.e_vel_btm =  busPtr->e_vel_btm;
  convertFromBus(msgPtr.header, &busPtr->header);
  msgPtr.velocity1 =  busPtr->velocity1;
  msgPtr.velocity2 =  busPtr->velocity2;
  msgPtr.velocity3 =  busPtr->velocity3;
  msgPtr.velocity4 =  busPtr->velocity4;
  msgPtr.x_vel_btm =  busPtr->x_vel_btm;
  msgPtr.y_vel_btm =  busPtr->y_vel_btm;
  msgPtr.z_vel_btm =  busPtr->z_vel_btm;
}

[[maybe_unused]] static void convertToBus(SL_Bus_sonia_common_ros2_BodyVelocityDVL* busPtr, const sonia_common_ros2::msg::BodyVelocityDVL& msgPtr)
{
  const std::string rosMessageType("sonia_common_ros2/BodyVelocityDVL");

  busPtr->e_vel_btm =  msgPtr.e_vel_btm;
  convertToBus(&busPtr->header, msgPtr.header);
  busPtr->velocity1 =  msgPtr.velocity1;
  busPtr->velocity2 =  msgPtr.velocity2;
  busPtr->velocity3 =  msgPtr.velocity3;
  busPtr->velocity4 =  msgPtr.velocity4;
  busPtr->x_vel_btm =  msgPtr.x_vel_btm;
  busPtr->y_vel_btm =  msgPtr.y_vel_btm;
  busPtr->z_vel_btm =  msgPtr.z_vel_btm;
}


// Conversions between SL_Bus_sonia_common_ros2_KillStatus and sonia_common_ros2::msg::KillStatus

[[maybe_unused]] static void convertFromBus(sonia_common_ros2::msg::KillStatus& msgPtr, SL_Bus_sonia_common_ros2_KillStatus const* busPtr)
{
  const std::string rosMessageType("sonia_common_ros2/KillStatus");

  msgPtr.status =  busPtr->status;
}

[[maybe_unused]] static void convertToBus(SL_Bus_sonia_common_ros2_KillStatus* busPtr, const sonia_common_ros2::msg::KillStatus& msgPtr)
{
  const std::string rosMessageType("sonia_common_ros2/KillStatus");

  busPtr->status =  msgPtr.status;
}


// Conversions between SL_Bus_sonia_common_ros2_MotorPwm and sonia_common_ros2::msg::MotorPwm

[[maybe_unused]] static void convertFromBus(sonia_common_ros2::msg::MotorPwm& msgPtr, SL_Bus_sonia_common_ros2_MotorPwm const* busPtr)
{
  const std::string rosMessageType("sonia_common_ros2/MotorPwm");

  msgPtr.motor1 =  busPtr->motor1;
  msgPtr.motor2 =  busPtr->motor2;
  msgPtr.motor3 =  busPtr->motor3;
  msgPtr.motor4 =  busPtr->motor4;
  msgPtr.motor5 =  busPtr->motor5;
  msgPtr.motor6 =  busPtr->motor6;
  msgPtr.motor7 =  busPtr->motor7;
  msgPtr.motor8 =  busPtr->motor8;
}

[[maybe_unused]] static void convertToBus(SL_Bus_sonia_common_ros2_MotorPwm* busPtr, const sonia_common_ros2::msg::MotorPwm& msgPtr)
{
  const std::string rosMessageType("sonia_common_ros2/MotorPwm");

  busPtr->motor1 =  msgPtr.motor1;
  busPtr->motor2 =  msgPtr.motor2;
  busPtr->motor3 =  msgPtr.motor3;
  busPtr->motor4 =  msgPtr.motor4;
  busPtr->motor5 =  msgPtr.motor5;
  busPtr->motor6 =  msgPtr.motor6;
  busPtr->motor7 =  msgPtr.motor7;
  busPtr->motor8 =  msgPtr.motor8;
}


// Conversions between SL_Bus_sonia_common_ros2_MpcGains and sonia_common_ros2::msg::MpcGains

[[maybe_unused]] static void convertFromBus(sonia_common_ros2::msg::MpcGains& msgPtr, SL_Bus_sonia_common_ros2_MpcGains const* busPtr)
{
  const std::string rosMessageType("sonia_common_ros2/MpcGains");

  msgPtr.max_thrust =  busPtr->max_thrust;
  msgPtr.min_thrust =  busPtr->min_thrust;
  convertFromBusVariablePrimitiveArray(msgPtr.mv, busPtr->mv, busPtr->mv_SL_Info);
  convertFromBusVariablePrimitiveArray(msgPtr.mvr, busPtr->mvr, busPtr->mvr_SL_Info);
  convertFromBusVariablePrimitiveArray(msgPtr.ov, busPtr->ov, busPtr->ov_SL_Info);
}

[[maybe_unused]] static void convertToBus(SL_Bus_sonia_common_ros2_MpcGains* busPtr, const sonia_common_ros2::msg::MpcGains& msgPtr)
{
  const std::string rosMessageType("sonia_common_ros2/MpcGains");

  busPtr->max_thrust =  msgPtr.max_thrust;
  busPtr->min_thrust =  msgPtr.min_thrust;
  convertToBusVariablePrimitiveArray(busPtr->mv, busPtr->mv_SL_Info, msgPtr.mv, slros::EnabledWarning(rosMessageType, "mv"));
  convertToBusVariablePrimitiveArray(busPtr->mvr, busPtr->mvr_SL_Info, msgPtr.mvr, slros::EnabledWarning(rosMessageType, "mvr"));
  convertToBusVariablePrimitiveArray(busPtr->ov, busPtr->ov_SL_Info, msgPtr.ov, slros::EnabledWarning(rosMessageType, "ov"));
}


// Conversions between SL_Bus_sonia_common_ros2_MpcInfo and sonia_common_ros2::msg::MpcInfo

[[maybe_unused]] static void convertFromBus(sonia_common_ros2::msg::MpcInfo& msgPtr, SL_Bus_sonia_common_ros2_MpcInfo const* busPtr)
{
  const std::string rosMessageType("sonia_common_ros2/MpcInfo");

  convertFromBus(msgPtr.current_gains, &busPtr->current_gains);
  msgPtr.is_mpc_alive =  busPtr->is_mpc_alive;
  msgPtr.is_trajectory_done =  busPtr->is_trajectory_done;
  msgPtr.mpc_mode =  busPtr->mpc_mode;
  msgPtr.mpc_status =  busPtr->mpc_status;
  msgPtr.target_reached =  busPtr->target_reached;
  convertFromBusVariablePrimitiveArray(msgPtr.thrusters_status, busPtr->thrusters_status, busPtr->thrusters_status_SL_Info);
}

[[maybe_unused]] static void convertToBus(SL_Bus_sonia_common_ros2_MpcInfo* busPtr, const sonia_common_ros2::msg::MpcInfo& msgPtr)
{
  const std::string rosMessageType("sonia_common_ros2/MpcInfo");

  convertToBus(&busPtr->current_gains, msgPtr.current_gains);
  busPtr->is_mpc_alive =  msgPtr.is_mpc_alive;
  busPtr->is_trajectory_done =  msgPtr.is_trajectory_done;
  busPtr->mpc_mode =  msgPtr.mpc_mode;
  busPtr->mpc_status =  msgPtr.mpc_status;
  busPtr->target_reached =  msgPtr.target_reached;
  convertToBusVariablePrimitiveArray(busPtr->thrusters_status, busPtr->thrusters_status_SL_Info, msgPtr.thrusters_status, slros::EnabledWarning(rosMessageType, "thrusters_status"));
}


// Conversions between SL_Bus_sonia_common_ros2_Pose and sonia_common_ros2::msg::Pose

[[maybe_unused]] static void convertFromBus(sonia_common_ros2::msg::Pose& msgPtr, SL_Bus_sonia_common_ros2_Pose const* busPtr)
{
  const std::string rosMessageType("sonia_common_ros2/Pose");

  msgPtr.fine =  busPtr->fine;
  msgPtr.frame =  busPtr->frame;
  convertFromBus(msgPtr.orientation, &busPtr->orientation);
  convertFromBus(msgPtr.position, &busPtr->position);
  msgPtr.rotation =  busPtr->rotation;
  msgPtr.speed =  busPtr->speed;
}

[[maybe_unused]] static void convertToBus(SL_Bus_sonia_common_ros2_Pose* busPtr, const sonia_common_ros2::msg::Pose& msgPtr)
{
  const std::string rosMessageType("sonia_common_ros2/Pose");

  busPtr->fine =  msgPtr.fine;
  busPtr->frame =  msgPtr.frame;
  convertToBus(&busPtr->orientation, msgPtr.orientation);
  convertToBus(&busPtr->position, msgPtr.position);
  busPtr->rotation =  msgPtr.rotation;
  busPtr->speed =  msgPtr.speed;
}


// Conversions between SL_Bus_std_msgs_Bool and std_msgs::msg::Bool

[[maybe_unused]] static void convertFromBus(std_msgs::msg::Bool& msgPtr, SL_Bus_std_msgs_Bool const* busPtr)
{
  const std::string rosMessageType("std_msgs/Bool");

  msgPtr.data =  busPtr->data;
}

[[maybe_unused]] static void convertToBus(SL_Bus_std_msgs_Bool* busPtr, const std_msgs::msg::Bool& msgPtr)
{
  const std::string rosMessageType("std_msgs/Bool");

  busPtr->data =  msgPtr.data;
}


// Conversions between SL_Bus_std_msgs_Float32 and std_msgs::msg::Float32

[[maybe_unused]] static void convertFromBus(std_msgs::msg::Float32& msgPtr, SL_Bus_std_msgs_Float32 const* busPtr)
{
  const std::string rosMessageType("std_msgs/Float32");

  msgPtr.data =  busPtr->data;
}

[[maybe_unused]] static void convertToBus(SL_Bus_std_msgs_Float32* busPtr, const std_msgs::msg::Float32& msgPtr)
{
  const std::string rosMessageType("std_msgs/Float32");

  busPtr->data =  msgPtr.data;
}


// Conversions between SL_Bus_std_msgs_Float64MultiArray and std_msgs::msg::Float64MultiArray

[[maybe_unused]] static void convertFromBus(std_msgs::msg::Float64MultiArray& msgPtr, SL_Bus_std_msgs_Float64MultiArray const* busPtr)
{
  const std::string rosMessageType("std_msgs/Float64MultiArray");

  convertFromBusVariablePrimitiveArray(msgPtr.data, busPtr->data, busPtr->data_SL_Info);
  convertFromBus(msgPtr.layout, &busPtr->layout);
}

[[maybe_unused]] static void convertToBus(SL_Bus_std_msgs_Float64MultiArray* busPtr, const std_msgs::msg::Float64MultiArray& msgPtr)
{
  const std::string rosMessageType("std_msgs/Float64MultiArray");

  convertToBusVariablePrimitiveArray(busPtr->data, busPtr->data_SL_Info, msgPtr.data, slros::EnabledWarning(rosMessageType, "data"));
  convertToBus(&busPtr->layout, msgPtr.layout);
}


// Conversions between SL_Bus_std_msgs_Header and std_msgs::msg::Header

[[maybe_unused]] static void convertFromBus(std_msgs::msg::Header& msgPtr, SL_Bus_std_msgs_Header const* busPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertFromBusVariablePrimitiveArray(msgPtr.frame_id, busPtr->frame_id, busPtr->frame_id_SL_Info);
  convertFromBus(msgPtr.stamp, &busPtr->stamp);
}

[[maybe_unused]] static void convertToBus(SL_Bus_std_msgs_Header* busPtr, const std_msgs::msg::Header& msgPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertToBusVariablePrimitiveArray(busPtr->frame_id, busPtr->frame_id_SL_Info, msgPtr.frame_id, slros::EnabledWarning(rosMessageType, "frame_id"));
  convertToBus(&busPtr->stamp, msgPtr.stamp);
}


// Conversions between SL_Bus_std_msgs_Int16MultiArray and std_msgs::msg::Int16MultiArray

[[maybe_unused]] static void convertFromBus(std_msgs::msg::Int16MultiArray& msgPtr, SL_Bus_std_msgs_Int16MultiArray const* busPtr)
{
  const std::string rosMessageType("std_msgs/Int16MultiArray");

  convertFromBusVariablePrimitiveArray(msgPtr.data, busPtr->data, busPtr->data_SL_Info);
  convertFromBus(msgPtr.layout, &busPtr->layout);
}

[[maybe_unused]] static void convertToBus(SL_Bus_std_msgs_Int16MultiArray* busPtr, const std_msgs::msg::Int16MultiArray& msgPtr)
{
  const std::string rosMessageType("std_msgs/Int16MultiArray");

  convertToBusVariablePrimitiveArray(busPtr->data, busPtr->data_SL_Info, msgPtr.data, slros::EnabledWarning(rosMessageType, "data"));
  convertToBus(&busPtr->layout, msgPtr.layout);
}


// Conversions between SL_Bus_std_msgs_MultiArrayDimension and std_msgs::msg::MultiArrayDimension

[[maybe_unused]] static void convertFromBus(std_msgs::msg::MultiArrayDimension& msgPtr, SL_Bus_std_msgs_MultiArrayDimension const* busPtr)
{
  const std::string rosMessageType("std_msgs/MultiArrayDimension");

  convertFromBusVariablePrimitiveArray(msgPtr.label, busPtr->label, busPtr->label_SL_Info);
  msgPtr.size =  busPtr->size;
  msgPtr.stride =  busPtr->stride;
}

[[maybe_unused]] static void convertToBus(SL_Bus_std_msgs_MultiArrayDimension* busPtr, const std_msgs::msg::MultiArrayDimension& msgPtr)
{
  const std::string rosMessageType("std_msgs/MultiArrayDimension");

  convertToBusVariablePrimitiveArray(busPtr->label, busPtr->label_SL_Info, msgPtr.label, slros::EnabledWarning(rosMessageType, "label"));
  busPtr->size =  msgPtr.size;
  busPtr->stride =  msgPtr.stride;
}


// Conversions between SL_Bus_std_msgs_MultiArrayLayout and std_msgs::msg::MultiArrayLayout

[[maybe_unused]] static void convertFromBus(std_msgs::msg::MultiArrayLayout& msgPtr, SL_Bus_std_msgs_MultiArrayLayout const* busPtr)
{
  const std::string rosMessageType("std_msgs/MultiArrayLayout");

  msgPtr.data_offset =  busPtr->data_offset;
  convertFromBusVariableNestedArray(msgPtr.dim, busPtr->dim, busPtr->dim_SL_Info);
}

[[maybe_unused]] static void convertToBus(SL_Bus_std_msgs_MultiArrayLayout* busPtr, const std_msgs::msg::MultiArrayLayout& msgPtr)
{
  const std::string rosMessageType("std_msgs/MultiArrayLayout");

  busPtr->data_offset =  msgPtr.data_offset;
  convertToBusVariableNestedArray(busPtr->dim, busPtr->dim_SL_Info, msgPtr.dim, slros::EnabledWarning(rosMessageType, "dim"));
}


// Conversions between SL_Bus_std_msgs_UInt8 and std_msgs::msg::UInt8

[[maybe_unused]] static void convertFromBus(std_msgs::msg::UInt8& msgPtr, SL_Bus_std_msgs_UInt8 const* busPtr)
{
  const std::string rosMessageType("std_msgs/UInt8");

  msgPtr.data =  busPtr->data;
}

[[maybe_unused]] static void convertToBus(SL_Bus_std_msgs_UInt8* busPtr, const std_msgs::msg::UInt8& msgPtr)
{
  const std::string rosMessageType("std_msgs/UInt8");

  busPtr->data =  msgPtr.data;
}


// Conversions between SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint and trajectory_msgs::msg::MultiDOFJointTrajectoryPoint

[[maybe_unused]] static void convertFromBus(trajectory_msgs::msg::MultiDOFJointTrajectoryPoint& msgPtr, SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint const* busPtr)
{
  const std::string rosMessageType("trajectory_msgs/MultiDOFJointTrajectoryPoint");

  convertFromBusVariableNestedArray(msgPtr.accelerations, busPtr->accelerations, busPtr->accelerations_SL_Info);
  convertFromBus(msgPtr.time_from_start, &busPtr->time_from_start);
  convertFromBusVariableNestedArray(msgPtr.transforms, busPtr->transforms, busPtr->transforms_SL_Info);
  convertFromBusVariableNestedArray(msgPtr.velocities, busPtr->velocities, busPtr->velocities_SL_Info);
}

[[maybe_unused]] static void convertToBus(SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint* busPtr, const trajectory_msgs::msg::MultiDOFJointTrajectoryPoint& msgPtr)
{
  const std::string rosMessageType("trajectory_msgs/MultiDOFJointTrajectoryPoint");

  convertToBusVariableNestedArray(busPtr->accelerations, busPtr->accelerations_SL_Info, msgPtr.accelerations, slros::EnabledWarning(rosMessageType, "accelerations"));
  convertToBus(&busPtr->time_from_start, msgPtr.time_from_start);
  convertToBusVariableNestedArray(busPtr->transforms, busPtr->transforms_SL_Info, msgPtr.transforms, slros::EnabledWarning(rosMessageType, "transforms"));
  convertToBusVariableNestedArray(busPtr->velocities, busPtr->velocities_SL_Info, msgPtr.velocities, slros::EnabledWarning(rosMessageType, "velocities"));
}



#endif
