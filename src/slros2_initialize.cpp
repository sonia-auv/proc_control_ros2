// Copyright 2022-2023 The MathWorks, Inc.
// Generated 27-Nov-2024 16:52:25
#include "slros2_initialize.h"
// proc_control/Enabled Subsystem/Send Sensor On/Publish
SimulinkPublisher<std_msgs::msg::Bool,SL_Bus_std_msgs_Bool> Pub_proc_control_500;
// proc_control/Enabled Subsystem/Send auv states/Publish
SimulinkPublisher<nav_msgs::msg::Odometry,SL_Bus_nav_msgs_Odometry> Pub_proc_control_478;
// proc_control/Enabled Subsystem1/Publish
SimulinkPublisher<sonia_common_ros2::msg::MotorPwm,SL_Bus_sonia_common_ros2_MotorPwm> Pub_proc_control_1380;
// proc_control/Enabled Subsystem1/Publish1
SimulinkPublisher<sonia_common_ros2::msg::MotorPwm,SL_Bus_sonia_common_ros2_MotorPwm> Pub_proc_control_1386;
// proc_control/Enabled Subsystem1/Subsystem/Publish
SimulinkPublisher<sonia_common_ros2::msg::MpcInfo,SL_Bus_sonia_common_ros2_MpcInfo> Pub_proc_control_1430;
// proc_control/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals/Publish
SimulinkPublisher<nav_msgs::msg::Odometry,SL_Bus_nav_msgs_Odometry> Pub_proc_control_913;
// proc_control/Subsystem Trajectory/Send Current Target/Publish
SimulinkPublisher<geometry_msgs::msg::Pose,SL_Bus_geometry_msgs_Pose> Pub_proc_control_671;
// proc_control/ROS Input/AUV/Subscribe
SimulinkSubscriber<sensor_msgs::msg::Imu,SL_Bus_sensor_msgs_Imu> Sub_proc_control_209_4;
// proc_control/ROS Input/AUV/Subscribe1
SimulinkSubscriber<sonia_common_ros2::msg::BodyVelocityDVL,SL_Bus_sonia_common_ros2_BodyVelocityDVL> Sub_proc_control_209_5;
// proc_control/ROS Input/AUV/Subscribe2
SimulinkSubscriber<std_msgs::msg::Float32,SL_Bus_std_msgs_Float32> Sub_proc_control_209_6;
// proc_control/ROS Input/Simulation/Subscribe
SimulinkSubscriber<sensor_msgs::msg::Imu,SL_Bus_sensor_msgs_Imu> Sub_proc_control_209_83;
// proc_control/ROS Input/Simulation/Subscribe1
SimulinkSubscriber<sonia_common_ros2::msg::BodyVelocityDVL,SL_Bus_sonia_common_ros2_BodyVelocityDVL> Sub_proc_control_209_84;
// proc_control/ROS Input/Simulation/Subscribe2
SimulinkSubscriber<std_msgs::msg::Float32,SL_Bus_std_msgs_Float32> Sub_proc_control_209_85;
// proc_control/Ros Command/Ros Command Manager/Subscribe
SimulinkSubscriber<std_msgs::msg::UInt8,SL_Bus_std_msgs_UInt8> Sub_proc_control_1;
// proc_control/Ros Command/Ros Command Manager/Subscribe2
SimulinkSubscriber<sonia_common_ros2::msg::KillStatus,SL_Bus_sonia_common_ros2_KillStatus> Sub_proc_control_13;
// proc_control/Ros Command/Ros Command Manager/Subscribe3
SimulinkSubscriber<geometry_msgs::msg::Pose,SL_Bus_geometry_msgs_Pose> Sub_proc_control_40;
// proc_control/Ros Command/Ros Command Manager/Subscribe4
SimulinkSubscriber<std_msgs::msg::Bool,SL_Bus_std_msgs_Bool> Sub_proc_control_15;
// proc_control/Ros Command/Ros Command Manager/Subscribe5
SimulinkSubscriber<std_msgs::msg::Bool,SL_Bus_std_msgs_Bool> Sub_proc_control_16;
// proc_control/Ros Command/Ros Command Manager/Subscribe6
SimulinkSubscriber<std_msgs::msg::Bool,SL_Bus_std_msgs_Bool> Sub_proc_control_1486;
// proc_control/Subsystem Controller/If Action Subsystem/Subscribe
SimulinkSubscriber<sonia_common_ros2::msg::MpcGains,SL_Bus_sonia_common_ros2_MpcGains> Sub_proc_control_780;
// proc_control/Subsystem Controller/If Action Subsystem/Subscribe1
SimulinkSubscriber<std_msgs::msg::Float64MultiArray,SL_Bus_std_msgs_Float64MultiArray> Sub_proc_control_781;
// proc_control/Subsystem Trajectory/Subsystem/Subscribe
SimulinkSubscriber<geometry_msgs::msg::Twist,SL_Bus_geometry_msgs_Twist> Sub_proc_control_532;
// proc_control/Subsystem Trajectory/Subsystem1/Subscribe
SimulinkSubscriber<trajectory_msgs::msg::MultiDOFJointTrajectoryPoint,SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint> Sub_proc_control_572;
// proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Subscribe
SimulinkSubscriber<sonia_common_ros2::msg::Pose,SL_Bus_sonia_common_ros2_Pose> Sub_proc_control_589;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Default/Get Parameter
SimulinkParameterArrayGetter<real64_T,std::vector<int64_t>> ParamGet_proc_control_66;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Default/Get Parameter1
SimulinkParameterArrayGetter<real64_T,std::vector<int64_t>> ParamGet_proc_control_72;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Default/Get Parameter2
SimulinkParameterArrayGetter<real64_T,std::vector<int64_t>> ParamGet_proc_control_74;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 10/Get Parameter
SimulinkParameterArrayGetter<real64_T,std::vector<int64_t>> ParamGet_proc_control_97;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 10/Get Parameter1
SimulinkParameterArrayGetter<real64_T,std::vector<int64_t>> ParamGet_proc_control_98;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 10/Get Parameter2
SimulinkParameterArrayGetter<real64_T,std::vector<int64_t>> ParamGet_proc_control_99;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 11/Get Parameter
SimulinkParameterArrayGetter<real64_T,std::vector<int64_t>> ParamGet_proc_control_106;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 11/Get Parameter1
SimulinkParameterArrayGetter<real64_T,std::vector<int64_t>> ParamGet_proc_control_107;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 11/Get Parameter2
SimulinkParameterArrayGetter<real64_T,std::vector<int64_t>> ParamGet_proc_control_108;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 19/Get Parameter
SimulinkParameterArrayGetter<real64_T,std::vector<int64_t>> ParamGet_proc_control_115;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 19/Get Parameter1
SimulinkParameterArrayGetter<real64_T,std::vector<int64_t>> ParamGet_proc_control_116;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 19/Get Parameter2
SimulinkParameterArrayGetter<real64_T,std::vector<int64_t>> ParamGet_proc_control_117;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains No DVL/Get Parameter
SimulinkParameterArrayGetter<real64_T,std::vector<int64_t>> ParamGet_proc_control_133;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Get Parameter
SimulinkParameterGetter<int64_T,int64_t> ParamGet_proc_control_140;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Get Parameter1
SimulinkParameterGetter<int64_T,int64_t> ParamGet_proc_control_143;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Get Parameter2
SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_144;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Get Parameter3
SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_145;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/targetReached Params/Get Parameter
SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_150;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/targetReached Params/Get Parameter1
SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_151;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/targetReached Params/Get Parameter2
SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_152;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Parameters/I
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_182;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Parameters/Rho
SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_166;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Parameters/added mass
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_180;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Parameters/cdl
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_175;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Parameters/cdq
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_177;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Parameters/depth pose
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_184;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Parameters/dvl lost override
SimulinkParameterGetter<boolean_T,bool> ParamGet_proc_control_196;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Parameters/dvl rotation
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_192;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Parameters/g
SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_167;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Parameters/hydro pose
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_186;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Parameters/mass
SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_168;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Parameters/rb
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_173;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Parameters/rg
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_171;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Parameters/sonar pose
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_190;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Parameters/sub height
SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_170;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Parameters/thrusters
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_194;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Parameters/volume
SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_169;
