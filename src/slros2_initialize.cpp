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
// proc_control/Model System/Modele Thruster (Approximation)/Send RPM to unity/Publish
SimulinkPublisher<std_msgs::msg::Int16MultiArray,SL_Bus_std_msgs_Int16MultiArray> Pub_proc_control_1184;
// proc_control/Model System/Sensor Model/Hydrophones Model/Publish
SimulinkPublisher<geometry_msgs::msg::Vector3,SL_Bus_geometry_msgs_Vector3> Pub_proc_control_1280;
// proc_control/ROS Output/Send DVL msg/Publish
SimulinkPublisher<geometry_msgs::msg::Point,SL_Bus_geometry_msgs_Point> Pub_proc_control_1347;
// proc_control/ROS Output/Send Depth msg/Publish
SimulinkPublisher<std_msgs::msg::Float32,SL_Bus_std_msgs_Float32> Pub_proc_control_1353;
// proc_control/ROS Output/Send IMU Msg/Publish
SimulinkPublisher<sensor_msgs::msg::Imu,SL_Bus_sensor_msgs_Imu> Pub_proc_control_1342;
// proc_control/ROS Output/Send to Unity/Publish
SimulinkPublisher<geometry_msgs::msg::Pose,SL_Bus_geometry_msgs_Pose> Pub_proc_control_1321;
// proc_control/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals/Publish
SimulinkPublisher<nav_msgs::msg::Odometry,SL_Bus_nav_msgs_Odometry> Pub_proc_control_913;
// proc_control/Subsystem Trajectory/Send Current Target/Publish
SimulinkPublisher<geometry_msgs::msg::Pose,SL_Bus_geometry_msgs_Pose> Pub_proc_control_671;
// proc_control/Model System/Sensor Model/Hydrophones Model/Subscribe
SimulinkSubscriber<geometry_msgs::msg::Vector3,SL_Bus_geometry_msgs_Vector3> Sub_proc_control_1278;
// proc_control/ROS Input/AUV/provider_depth//depth
SimulinkSubscriber<std_msgs::msg::Float32,SL_Bus_std_msgs_Float32> Sub_proc_control_209_6;
// proc_control/ROS Input/AUV/provider_dvl//dvl_velocity
SimulinkSubscriber<sonia_common_ros2::msg::BodyVelocityDVL,SL_Bus_sonia_common_ros2_BodyVelocityDVL> Sub_proc_control_209_5;
// proc_control/ROS Input/AUV/provider_imu//imu_info
SimulinkSubscriber<sensor_msgs::msg::Imu,SL_Bus_sensor_msgs_Imu> Sub_proc_control_209_4;
// proc_control/ROS Input/Simulation/proc_simulation//depth
SimulinkSubscriber<std_msgs::msg::Float32,SL_Bus_std_msgs_Float32> Sub_proc_control_209_85;
// proc_control/ROS Input/Simulation/proc_simulation//dvl_velocity
SimulinkSubscriber<sonia_common_ros2::msg::BodyVelocityDVL,SL_Bus_sonia_common_ros2_BodyVelocityDVL> Sub_proc_control_209_84;
// proc_control/ROS Input/Simulation/proc_simulation//imu_info
SimulinkSubscriber<sensor_msgs::msg::Imu,SL_Bus_sensor_msgs_Imu> Sub_proc_control_209_83;
// proc_control/Ros Command/Ros Command Manager/proc_control//set_mode
SimulinkSubscriber<std_msgs::msg::UInt8,SL_Bus_std_msgs_UInt8> Sub_proc_control_1;
// proc_control/Ros Command/Ros Command Manager/proc_nav//reset_pos
SimulinkSubscriber<std_msgs::msg::Bool,SL_Bus_std_msgs_Bool> Sub_proc_control_1486;
// proc_control/Ros Command/Ros Command Manager/proc_nav//reset_trajectory
SimulinkSubscriber<std_msgs::msg::Bool,SL_Bus_std_msgs_Bool> Sub_proc_control_16;
// proc_control/Ros Command/Ros Command Manager/proc_simulation//start_sim
SimulinkSubscriber<geometry_msgs::msg::Pose,SL_Bus_geometry_msgs_Pose> Sub_proc_control_40;
// proc_control/Ros Command/Ros Command Manager/provider_rs485//kill_status 
SimulinkSubscriber<sonia_common_ros2::msg::KillStatus,SL_Bus_sonia_common_ros2_KillStatus> Sub_proc_control_13;
// proc_control/Ros Command/Ros Command Manager/telemtry//dry_run
SimulinkSubscriber<std_msgs::msg::Bool,SL_Bus_std_msgs_Bool> Sub_proc_control_15;
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
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Default/Default MV
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_72;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Default/Default MVR
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_74;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Default/Default OV
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_66;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 10/C10 MV
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_98;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 10/C10 MVR
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_99;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 10/C10 OV
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_97;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 11/C11 MV
SimulinkParameterArrayGetter<real64_T,std::vector<int64_t>> ParamGet_proc_control_107;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 11/C11 MVR
SimulinkParameterArrayGetter<real64_T,std::vector<int64_t>> ParamGet_proc_control_108;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 11/C11 OV
SimulinkParameterArrayGetter<real64_T,std::vector<int64_t>> ParamGet_proc_control_106;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 19/C19 MV
SimulinkParameterArrayGetter<real64_T,std::vector<int64_t>> ParamGet_proc_control_116;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 19/C19 MVR
SimulinkParameterArrayGetter<real64_T,std::vector<int64_t>> ParamGet_proc_control_117;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 19/C19 OV
SimulinkParameterArrayGetter<real64_T,std::vector<int64_t>> ParamGet_proc_control_115;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains No DVL/NoDVL MV
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_133;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/MPC.M
SimulinkParameterGetter<int64_T,int64_t> ParamGet_proc_control_143;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/MPC.P
SimulinkParameterGetter<int64_T,int64_t> ParamGet_proc_control_140;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/MPC.TMAX
SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_144;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/MPC.TMIN
SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_145;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/targetReached Params/Angular Tolerance
SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_151;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/targetReached Params/Linear Tolerance
SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_150;
// For Block proc_control/Ros Command/Get_ROS_param/MPC Parameters/targetReached Params/Time in Tolerance
SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_152;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Constants/DVL Lost Override
SimulinkParameterGetter<boolean_T,bool> ParamGet_proc_control_196;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Constants/Physics Added Mass
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_180;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Constants/Physics CDL
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_175;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Constants/Physics CDQ
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_177;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Constants/Physics DVL Rotation
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_192;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Constants/Physics Depth Pose
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_184;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Constants/Physics G
SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_167;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Constants/Physics Hydro Pose
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_186;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Constants/Physics I
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_182;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Constants/Physics Mass
SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_168;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Constants/Physics RB
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_173;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Constants/Physics RG
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_171;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Constants/Physics Rho
SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_166;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Constants/Physics Sonar Pose
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_190;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Constants/Physics Sub Height
SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_170;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Constants/Physics Thrusters
SimulinkParameterArrayGetter<real64_T,std::vector<real64_T>> ParamGet_proc_control_194;
// For Block proc_control/Ros Command/Get_ROS_param/Physics Constants/Physics Volume
SimulinkParameterGetter<real64_T,double> ParamGet_proc_control_169;
