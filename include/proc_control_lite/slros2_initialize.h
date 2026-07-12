// Copyright 2022-2024 The MathWorks, Inc.
// Generated 12-Jul-2026 01:23:44
#ifndef _SLROS2_INITIALIZE_H_
#define _SLROS2_INITIALIZE_H_
#include "proc_control_lite_types.h"
// Generic pub-sub header
#include "slros2_generic_pubsub.h"
#include "slros2_time.h"
#include "slros2_generic_param.h"
#ifndef SET_QOS_VALUES
#define SET_QOS_VALUES(qosStruct, _history, _depth, _durability, _reliability, _deadline \
, _lifespan, _liveliness, _lease_duration, _avoid_ros_namespace_conventions)             \
    {                                                                                    \
        qosStruct.history = _history;                                                    \
        qosStruct.depth = _depth;                                                        \
        qosStruct.durability = _durability;                                              \
        qosStruct.reliability = _reliability;                                            \
        qosStruct.deadline.sec = _deadline.sec;                                          \
        qosStruct.deadline.nsec = _deadline.nsec;                                        \
        qosStruct.lifespan.sec = _lifespan.sec;                                          \
        qosStruct.lifespan.nsec = _lifespan.nsec;                                        \
        qosStruct.liveliness = _liveliness;                                              \
        qosStruct.liveliness_lease_duration.sec = _lease_duration.sec;                   \
        qosStruct.liveliness_lease_duration.nsec = _lease_duration.nsec;                 \
        qosStruct.avoid_ros_namespace_conventions = _avoid_ros_namespace_conventions;    \
    }
#endif
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
// proc_control_lite/Enabled Subsystem/Send Sensor On/proc_control sensor_on
extern SimulinkPublisher<std_msgs::msg::Bool,SL_Bus_std_msgs_Bool> Pub_proc_control_lite_500;
// proc_control_lite/Enabled Subsystem/Send auv states/proc_nav auv_states
extern SimulinkPublisher<nav_msgs::msg::Odometry,SL_Bus_nav_msgs_Odometry> Pub_proc_control_lite_478;
// proc_control_lite/Enabled Subsystem1/Subsystem/proc_control controller_info
extern SimulinkPublisher<sonia_common_ros2::msg::MpcInfo,SL_Bus_sonia_common_ros2_MpcInfo> Pub_proc_control_lite_1430;
// proc_control_lite/Enabled Subsystem1/provider_thruster thruster_pwm
extern SimulinkPublisher<sonia_common_ros2::msg::MotorPwm,SL_Bus_sonia_common_ros2_MotorPwm> Pub_proc_control_lite_1380;
// proc_control_lite/Enabled Subsystem1/telemetry thruster_newton
extern SimulinkPublisher<sonia_common_ros2::msg::MotorPwm,SL_Bus_sonia_common_ros2_MotorPwm> Pub_proc_control_lite_1386;
// proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals/Publish
extern SimulinkPublisher<nav_msgs::msg::Odometry,SL_Bus_nav_msgs_Odometry> Pub_proc_control_lite_913;
// proc_control_lite/Subsystem Trajectory/Send Current Target/Publish
extern SimulinkPublisher<geometry_msgs::msg::Pose,SL_Bus_geometry_msgs_Pose> Pub_proc_control_lite_671;
// proc_control_lite/proc_nav_ros_input_lite1/Publish
extern SimulinkPublisher<std_msgs::msg::Bool,SL_Bus_std_msgs_Bool> Pub_proc_control_lite_2958_2971;
// proc_control_lite/proc_nav_ros_input_lite1/Publish1
extern SimulinkPublisher<std_msgs::msg::Bool,SL_Bus_std_msgs_Bool> Pub_proc_control_lite_2958_2972;
// proc_control_lite/proc_nav_ros_input_lite1/Publish2
extern SimulinkPublisher<std_msgs::msg::Bool,SL_Bus_std_msgs_Bool> Pub_proc_control_lite_2958_2973;
// proc_control_lite/proc_nav_ros_input_lite1/Publish3
extern SimulinkPublisher<std_msgs::msg::Bool,SL_Bus_std_msgs_Bool> Pub_proc_control_lite_2958_2974;
// proc_control_lite/proc_nav_ros_input_lite1/Publish4
extern SimulinkPublisher<std_msgs::msg::Bool,SL_Bus_std_msgs_Bool> Pub_proc_control_lite_2958_2948;
// proc_control_lite/proc_nav_ros_input_lite1/Simulation/Publish
extern SimulinkPublisher<std_msgs::msg::Bool,SL_Bus_std_msgs_Bool> Pub_proc_control_lite_2958_2668;
// proc_control_lite/Ros Command/Ros Command Manager/proc_control reset_trajectory
extern SimulinkSubscriber<std_msgs::msg::Bool,SL_Bus_std_msgs_Bool> Sub_proc_control_lite_16;
// proc_control_lite/Ros Command/Ros Command Manager/proc_control set_mode
extern SimulinkSubscriber<std_msgs::msg::UInt8,SL_Bus_std_msgs_UInt8> Sub_proc_control_lite_1;
// proc_control_lite/Ros Command/Ros Command Manager/proc_nav reset_pos
extern SimulinkSubscriber<std_msgs::msg::Bool,SL_Bus_std_msgs_Bool> Sub_proc_control_lite_1486;
// proc_control_lite/Ros Command/Ros Command Manager/proc_simulation start_simulation
extern SimulinkSubscriber<geometry_msgs::msg::Pose,SL_Bus_geometry_msgs_Pose> Sub_proc_control_lite_40;
// proc_control_lite/Ros Command/Ros Command Manager/provider_rs485 kill_status
extern SimulinkSubscriber<sonia_common_ros2::msg::KillStatus,SL_Bus_sonia_common_ros2_KillStatus> Sub_proc_control_lite_13;
// proc_control_lite/Ros Command/Ros Command Manager/telemetry dryrun
extern SimulinkSubscriber<std_msgs::msg::Bool,SL_Bus_std_msgs_Bool> Sub_proc_control_lite_15;
// proc_control_lite/Subsystem Controller/If Action Subsystem/Subscribe
extern SimulinkSubscriber<sonia_common_ros2::msg::MpcGains,SL_Bus_sonia_common_ros2_MpcGains> Sub_proc_control_lite_780;
// proc_control_lite/Subsystem Controller/If Action Subsystem/Subscribe1
extern SimulinkSubscriber<std_msgs::msg::Float64MultiArray,SL_Bus_std_msgs_Float64MultiArray> Sub_proc_control_lite_781;
// proc_control_lite/Subsystem Trajectory/Subsystem/Subscribe
extern SimulinkSubscriber<geometry_msgs::msg::Twist,SL_Bus_geometry_msgs_Twist> Sub_proc_control_lite_532;
// proc_control_lite/Subsystem Trajectory/Subsystem1/Subscribe
extern SimulinkSubscriber<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint,SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint> Sub_proc_control_lite_572;
// proc_control_lite/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Subscribe
extern SimulinkSubscriber<sonia_common_ros2::msg::Pose,SL_Bus_sonia_common_ros2_Pose> Sub_proc_control_lite_589;
// proc_control_lite/proc_nav_ros_input_lite1/AUV/provider_depth depth
extern SimulinkSubscriber<std_msgs::msg::Float32,SL_Bus_std_msgs_Float32> Sub_proc_control_lite_2958_6;
// proc_control_lite/proc_nav_ros_input_lite1/AUV/provider_dvl dvl_velocity
extern SimulinkSubscriber<sonia_common_ros2::msg::BodyVelocityDVL,SL_Bus_sonia_common_ros2_BodyVelocityDVL> Sub_proc_control_lite_2958_5;
// proc_control_lite/proc_nav_ros_input_lite1/AUV/provider_imu imu_info
extern SimulinkSubscriber<sensor_msgs::msg::Imu,SL_Bus_sensor_msgs_Imu> Sub_proc_control_lite_2958_4;
// proc_control_lite/proc_nav_ros_input_lite1/AUV/provider_imu imu_info2
extern SimulinkSubscriber<std_msgs::msg::Bool,SL_Bus_std_msgs_Bool> Sub_proc_control_lite_2958_2543;
// proc_control_lite/proc_nav_ros_input_lite1/Simulation/proc_simulation depth
extern SimulinkSubscriber<std_msgs::msg::Float32,SL_Bus_std_msgs_Float32> Sub_proc_control_lite_2958_85;
// proc_control_lite/proc_nav_ros_input_lite1/Simulation/proc_simulation dvl_velocity
extern SimulinkSubscriber<sonia_common_ros2::msg::BodyVelocityDVL,SL_Bus_sonia_common_ros2_BodyVelocityDVL> Sub_proc_control_lite_2958_84;
// proc_control_lite/proc_nav_ros_input_lite1/Simulation/proc_simulation imu_info
extern SimulinkSubscriber<sensor_msgs::msg::Imu,SL_Bus_sensor_msgs_Imu> Sub_proc_control_lite_2958_83;
// proc_control_lite/proc_nav_ros_input_lite1/Simulation/provider_imu imu_info1
extern SimulinkSubscriber<sensor_msgs::msg::Imu,SL_Bus_sensor_msgs_Imu> Sub_proc_control_lite_2958_2511;
// For Block proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Default/MV
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_72;
// For Block proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Default/MVR
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_74;
// For Block proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Default/OV
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_66;
// For Block proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 10/MV
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_98;
// For Block proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 10/MVR
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_99;
// For Block proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 10/OV
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_97;
// For Block proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 11/MV
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_107;
// For Block proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 11/MVR
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_108;
// For Block proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 11/OV
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_106;
// For Block proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 19/MV
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_116;
// For Block proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 19/MVR
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_117;
// For Block proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 19/OV
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_115;
// For Block proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains No DVL/MV
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_133;
// For Block proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/M
extern SimulinkParameterGetter<int64_T,int64_t> ParamGet_proc_control_lite_143;
// For Block proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/P
extern SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_lite_140;
// For Block proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/T Max
extern SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_lite_144;
// For Block proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/T Min
extern SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_lite_145;
// For Block proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/targetReached Params/Angular Tolerance
extern SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_lite_151;
// For Block proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/targetReached Params/Linear Tolerance
extern SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_lite_150;
// For Block proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/targetReached Params/Time In Tolerance
extern SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_lite_152;
// For Block proc_control_lite/Ros Command/Get_ROS_param/Physics Constants/Added Mass
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_180;
// For Block proc_control_lite/Ros Command/Get_ROS_param/Physics Constants/CDL
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_175;
// For Block proc_control_lite/Ros Command/Get_ROS_param/Physics Constants/CDQ
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_177;
// For Block proc_control_lite/Ros Command/Get_ROS_param/Physics Constants/DVL Lost Override
extern SimulinkParameterGetter<boolean_T,bool> ParamGet_proc_control_lite_196;
// For Block proc_control_lite/Ros Command/Get_ROS_param/Physics Constants/DVL Rotation
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_192;
// For Block proc_control_lite/Ros Command/Get_ROS_param/Physics Constants/Depth Pose
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_184;
// For Block proc_control_lite/Ros Command/Get_ROS_param/Physics Constants/G
extern SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_lite_167;
// For Block proc_control_lite/Ros Command/Get_ROS_param/Physics Constants/Get Parameter2
extern SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_lite_168;
// For Block proc_control_lite/Ros Command/Get_ROS_param/Physics Constants/Hydro Pose
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_186;
// For Block proc_control_lite/Ros Command/Get_ROS_param/Physics Constants/I
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_182;
// For Block proc_control_lite/Ros Command/Get_ROS_param/Physics Constants/RB
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_173;
// For Block proc_control_lite/Ros Command/Get_ROS_param/Physics Constants/RG
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_171;
// For Block proc_control_lite/Ros Command/Get_ROS_param/Physics Constants/RHO
extern SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_lite_166;
// For Block proc_control_lite/Ros Command/Get_ROS_param/Physics Constants/Sonar Pose
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_190;
// For Block proc_control_lite/Ros Command/Get_ROS_param/Physics Constants/Sub Height
extern SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_lite_170;
// For Block proc_control_lite/Ros Command/Get_ROS_param/Physics Constants/Thrusters
extern SimulinkParameterArrayGetter<real64_T,std::vector<double>> ParamGet_proc_control_lite_194;
// For Block proc_control_lite/Ros Command/Get_ROS_param/Physics Constants/Volume
extern SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_lite_169;
#endif
