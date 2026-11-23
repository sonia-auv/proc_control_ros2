//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: proc_control_types.h
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 4.301
// Simulink Coder version         : 26.1 (R2026a) 20-Nov-2025
// C/C++ source code generated on : Mon Nov 23 15:31:53 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM 64-bit (LLP64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef PROC_CONTROL_TYPES_H_
#define PROC_CONTROL_TYPES_H_
#include "rtwtypes.h"
#include "coder_bounded_array.h"
#ifndef DEFINED_TYPEDEF_FOR_C10_
#define DEFINED_TYPEDEF_FOR_C10_

struct C10
{
  real_T OV[13];
  real_T MV[8];
  real_T MVR[8];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_C11_
#define DEFINED_TYPEDEF_FOR_C11_

struct C11
{
  real_T OV[13];
  real_T MV[8];
  real_T MVR[8];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_C19_
#define DEFINED_TYPEDEF_FOR_C19_

struct C19
{
  real_T OV[13];
  real_T MV[8];
  real_T MVR[8];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_DEFAULT_
#define DEFINED_TYPEDEF_FOR_DEFAULT_

struct Default
{
  real_T OV[13];
  real_T MV[8];
  real_T MVR[8];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_NODVL_
#define DEFINED_TYPEDEF_FOR_NODVL_

struct NoDvl
{
  real_T MV[8];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_GAINS_
#define DEFINED_TYPEDEF_FOR_GAINS_

struct Gains
{
  Default predefined;
  C10 c10;
  C11 c11;
  C19 c19;
  NoDvl noDvl;
  real_T p;
  real_T m;
  real_T tmax;
  real_T tmin;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_ROSVARIABLELENGTHARRAYINFO_
#define DEFINED_TYPEDEF_FOR_SL_BUS_ROSVARIABLELENGTHARRAYINFO_

struct SL_Bus_ROSVariableLengthArrayInfo
{
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_BUILTIN_INTERFACES_DURATION_
#define DEFINED_TYPEDEF_FOR_SL_BUS_BUILTIN_INTERFACES_DURATION_

// MsgType=builtin_interfaces/Duration
struct SL_Bus_builtin_interfaces_Duration
{
  int32_T sec;
  uint32_T nanosec;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_BUILTIN_INTERFACES_TIME_
#define DEFINED_TYPEDEF_FOR_SL_BUS_BUILTIN_INTERFACES_TIME_

// MsgType=builtin_interfaces/Time
struct SL_Bus_builtin_interfaces_Time
{
  int32_T sec;
  uint32_T nanosec;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_GEOMETRY_MSGS_POINT_
#define DEFINED_TYPEDEF_FOR_SL_BUS_GEOMETRY_MSGS_POINT_

// MsgType=geometry_msgs/Point
struct SL_Bus_geometry_msgs_Point
{
  real_T x;
  real_T y;
  real_T z;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_GEOMETRY_MSGS_QUATERNION_
#define DEFINED_TYPEDEF_FOR_SL_BUS_GEOMETRY_MSGS_QUATERNION_

// MsgType=geometry_msgs/Quaternion
struct SL_Bus_geometry_msgs_Quaternion
{
  real_T x;
  real_T y;
  real_T z;
  real_T w;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_GEOMETRY_MSGS_POSE_
#define DEFINED_TYPEDEF_FOR_SL_BUS_GEOMETRY_MSGS_POSE_

// MsgType=geometry_msgs/Pose
struct SL_Bus_geometry_msgs_Pose
{
  // MsgType=geometry_msgs/Point
  SL_Bus_geometry_msgs_Point position;

  // MsgType=geometry_msgs/Quaternion
  SL_Bus_geometry_msgs_Quaternion orientation;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_GEOMETRY_MSGS_POSEWITHCOVARIANCE_
#define DEFINED_TYPEDEF_FOR_SL_BUS_GEOMETRY_MSGS_POSEWITHCOVARIANCE_

// MsgType=geometry_msgs/PoseWithCovariance
struct SL_Bus_geometry_msgs_PoseWithCovariance
{
  // MsgType=geometry_msgs/Pose
  SL_Bus_geometry_msgs_Pose pose;
  real_T covariance[36];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_GEOMETRY_MSGS_VECTOR3_
#define DEFINED_TYPEDEF_FOR_SL_BUS_GEOMETRY_MSGS_VECTOR3_

// MsgType=geometry_msgs/Vector3
struct SL_Bus_geometry_msgs_Vector3
{
  real_T x;
  real_T y;
  real_T z;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_GEOMETRY_MSGS_TRANSFORM_
#define DEFINED_TYPEDEF_FOR_SL_BUS_GEOMETRY_MSGS_TRANSFORM_

// MsgType=geometry_msgs/Transform
struct SL_Bus_geometry_msgs_Transform
{
  // MsgType=geometry_msgs/Vector3
  SL_Bus_geometry_msgs_Vector3 translation;

  // MsgType=geometry_msgs/Quaternion
  SL_Bus_geometry_msgs_Quaternion rotation;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_GEOMETRY_MSGS_TWIST_
#define DEFINED_TYPEDEF_FOR_SL_BUS_GEOMETRY_MSGS_TWIST_

// MsgType=geometry_msgs/Twist
struct SL_Bus_geometry_msgs_Twist
{
  // MsgType=geometry_msgs/Vector3
  SL_Bus_geometry_msgs_Vector3 linear;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_geometry_msgs_Vector3 angular;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_GEOMETRY_MSGS_TWISTWITHCOVARIANCE_
#define DEFINED_TYPEDEF_FOR_SL_BUS_GEOMETRY_MSGS_TWISTWITHCOVARIANCE_

// MsgType=geometry_msgs/TwistWithCovariance
struct SL_Bus_geometry_msgs_TwistWithCovariance
{
  // MsgType=geometry_msgs/Twist
  SL_Bus_geometry_msgs_Twist twist;
  real_T covariance[36];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_STD_MSGS_HEADER_
#define DEFINED_TYPEDEF_FOR_SL_BUS_STD_MSGS_HEADER_

// MsgType=std_msgs/Header
struct SL_Bus_std_msgs_Header
{
  // MsgType=builtin_interfaces/Time
  SL_Bus_builtin_interfaces_Time stamp;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=frame_id_SL_Info:TruncateAction=warn 
  uint8_T frame_id[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=frame_id
  SL_Bus_ROSVariableLengthArrayInfo frame_id_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_NAV_MSGS_ODOMETRY_
#define DEFINED_TYPEDEF_FOR_SL_BUS_NAV_MSGS_ODOMETRY_

// MsgType=nav_msgs/Odometry
struct SL_Bus_nav_msgs_Odometry
{
  // MsgType=std_msgs/Header
  SL_Bus_std_msgs_Header header;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=child_frame_id_SL_Info:TruncateAction=warn 
  uint8_T child_frame_id[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=child_frame_id
  SL_Bus_ROSVariableLengthArrayInfo child_frame_id_SL_Info;

  // MsgType=geometry_msgs/PoseWithCovariance
  SL_Bus_geometry_msgs_PoseWithCovariance pose;

  // MsgType=geometry_msgs/TwistWithCovariance
  SL_Bus_geometry_msgs_TwistWithCovariance twist;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_SENSOR_MSGS_IMU_
#define DEFINED_TYPEDEF_FOR_SL_BUS_SENSOR_MSGS_IMU_

// MsgType=sensor_msgs/Imu
struct SL_Bus_sensor_msgs_Imu
{
  // MsgType=std_msgs/Header
  SL_Bus_std_msgs_Header header;

  // MsgType=geometry_msgs/Quaternion
  SL_Bus_geometry_msgs_Quaternion orientation;
  real_T orientation_covariance[9];

  // MsgType=geometry_msgs/Vector3
  SL_Bus_geometry_msgs_Vector3 angular_velocity;
  real_T angular_velocity_covariance[9];

  // MsgType=geometry_msgs/Vector3
  SL_Bus_geometry_msgs_Vector3 linear_acceleration;
  real_T linear_acceleration_covariance[9];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_SONIA_COMMON_ROS2_BODYVELOCITYDVL_
#define DEFINED_TYPEDEF_FOR_SL_BUS_SONIA_COMMON_ROS2_BODYVELOCITYDVL_

// MsgType=sonia_common_ros2/BodyVelocityDVL
struct SL_Bus_sonia_common_ros2_BodyVelocityDVL
{
  // MsgType=std_msgs/Header
  SL_Bus_std_msgs_Header header;
  real_T x_vel_btm;
  real_T y_vel_btm;
  real_T z_vel_btm;
  real_T e_vel_btm;
  real_T velocity1;
  real_T velocity2;
  real_T velocity3;
  real_T velocity4;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_SONIA_COMMON_ROS2_KILLSTATUS_
#define DEFINED_TYPEDEF_FOR_SL_BUS_SONIA_COMMON_ROS2_KILLSTATUS_

// MsgType=sonia_common_ros2/KillStatus
struct SL_Bus_sonia_common_ros2_KillStatus
{
  boolean_T status;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_SONIA_COMMON_ROS2_MOTORNEWTON_
#define DEFINED_TYPEDEF_FOR_SL_BUS_SONIA_COMMON_ROS2_MOTORNEWTON_

// MsgType=sonia_common_ros2/MotorNewton
struct SL_Bus_sonia_common_ros2_MotorNewton
{
  real32_T motor1;
  real32_T motor2;
  real32_T motor3;
  real32_T motor4;
  real32_T motor5;
  real32_T motor6;
  real32_T motor7;
  real32_T motor8;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_SONIA_COMMON_ROS2_MOTORPWM_
#define DEFINED_TYPEDEF_FOR_SL_BUS_SONIA_COMMON_ROS2_MOTORPWM_

// MsgType=sonia_common_ros2/MotorPwm
struct SL_Bus_sonia_common_ros2_MotorPwm
{
  uint16_T motor1;
  uint16_T motor2;
  uint16_T motor3;
  uint16_T motor4;
  uint16_T motor5;
  uint16_T motor6;
  uint16_T motor7;
  uint16_T motor8;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_SONIA_COMMON_ROS2_MPCGAINS_
#define DEFINED_TYPEDEF_FOR_SL_BUS_SONIA_COMMON_ROS2_MPCGAINS_

// MsgType=sonia_common_ros2/MpcGains
struct SL_Bus_sonia_common_ros2_MpcGains
{
  // IsVarLen=1:VarLenCategory=data:VarLenElem=ov_SL_Info:TruncateAction=warn
  real_T ov[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=ov
  SL_Bus_ROSVariableLengthArrayInfo ov_SL_Info;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=mv_SL_Info:TruncateAction=warn
  real_T mv[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=mv
  SL_Bus_ROSVariableLengthArrayInfo mv_SL_Info;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=mvr_SL_Info:TruncateAction=warn
  real_T mvr[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=mvr
  SL_Bus_ROSVariableLengthArrayInfo mvr_SL_Info;
  real_T max_thrust;
  real_T min_thrust;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_SONIA_COMMON_ROS2_MPCINFO_
#define DEFINED_TYPEDEF_FOR_SL_BUS_SONIA_COMMON_ROS2_MPCINFO_

// MsgType=sonia_common_ros2/MpcInfo
struct SL_Bus_sonia_common_ros2_MpcInfo
{
  boolean_T is_mpc_alive;
  boolean_T target_reached;
  boolean_T is_trajectory_done;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=thrusters_status_SL_Info:TruncateAction=warn 
  boolean_T thrusters_status[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=thrusters_status
  SL_Bus_ROSVariableLengthArrayInfo thrusters_status_SL_Info;
  int8_T mpc_status;
  uint8_T mpc_mode;

  // MsgType=sonia_common_ros2/MpcGains
  SL_Bus_sonia_common_ros2_MpcGains current_gains;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_SONIA_COMMON_ROS2_POSE_
#define DEFINED_TYPEDEF_FOR_SL_BUS_SONIA_COMMON_ROS2_POSE_

// MsgType=sonia_common_ros2/Pose
struct SL_Bus_sonia_common_ros2_Pose
{
  uint8_T frame;
  uint8_T speed;

  // MsgType=geometry_msgs/Point
  SL_Bus_geometry_msgs_Point position;

  // MsgType=geometry_msgs/Vector3
  SL_Bus_geometry_msgs_Vector3 orientation;
  real_T fine;
  boolean_T rotation;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_STD_MSGS_BOOL_
#define DEFINED_TYPEDEF_FOR_SL_BUS_STD_MSGS_BOOL_

// MsgType=std_msgs/Bool
struct SL_Bus_std_msgs_Bool
{
  boolean_T data;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_STD_MSGS_FLOAT32_
#define DEFINED_TYPEDEF_FOR_SL_BUS_STD_MSGS_FLOAT32_

// MsgType=std_msgs/Float32
struct SL_Bus_std_msgs_Float32
{
  real32_T data;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_STD_MSGS_MULTIARRAYDIMENSION_
#define DEFINED_TYPEDEF_FOR_SL_BUS_STD_MSGS_MULTIARRAYDIMENSION_

// MsgType=std_msgs/MultiArrayDimension
struct SL_Bus_std_msgs_MultiArrayDimension
{
  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=label_SL_Info:TruncateAction=warn 
  uint8_T label[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=label
  SL_Bus_ROSVariableLengthArrayInfo label_SL_Info;
  uint32_T size;
  uint32_T stride;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_STD_MSGS_MULTIARRAYLAYOUT_
#define DEFINED_TYPEDEF_FOR_SL_BUS_STD_MSGS_MULTIARRAYLAYOUT_

// MsgType=std_msgs/MultiArrayLayout
struct SL_Bus_std_msgs_MultiArrayLayout
{
  // MsgType=std_msgs/MultiArrayDimension:IsVarLen=1:VarLenCategory=data:VarLenElem=dim_SL_Info:TruncateAction=warn 
  SL_Bus_std_msgs_MultiArrayDimension dim[16];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=dim
  SL_Bus_ROSVariableLengthArrayInfo dim_SL_Info;
  uint32_T data_offset;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_STD_MSGS_FLOAT64MULTIARRAY_
#define DEFINED_TYPEDEF_FOR_SL_BUS_STD_MSGS_FLOAT64MULTIARRAY_

// MsgType=std_msgs/Float64MultiArray
struct SL_Bus_std_msgs_Float64MultiArray
{
  // MsgType=std_msgs/MultiArrayLayout
  SL_Bus_std_msgs_MultiArrayLayout layout;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=data_SL_Info:TruncateAction=warn
  real_T data[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=data
  SL_Bus_ROSVariableLengthArrayInfo data_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_STD_MSGS_UINT8_
#define DEFINED_TYPEDEF_FOR_SL_BUS_STD_MSGS_UINT8_

// MsgType=std_msgs/UInt8
struct SL_Bus_std_msgs_UInt8
{
  uint8_T data;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_BUS_TRAJECTORY_MSGS_MULTIDOFJOINTTRAJECTORYPOINT_
#define DEFINED_TYPEDEF_FOR_SL_BUS_TRAJECTORY_MSGS_MULTIDOFJOINTTRAJECTORYPOINT_

// MsgType=trajectory_msgs/MultiDOFJointTrajectoryPoint
struct SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint
{
  // MsgType=geometry_msgs/Transform:IsVarLen=1:VarLenCategory=data:VarLenElem=transforms_SL_Info:TruncateAction=warn 
  SL_Bus_geometry_msgs_Transform transforms[1024];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=transforms
  SL_Bus_ROSVariableLengthArrayInfo transforms_SL_Info;

  // MsgType=geometry_msgs/Twist:IsVarLen=1:VarLenCategory=data:VarLenElem=velocities_SL_Info:TruncateAction=warn 
  SL_Bus_geometry_msgs_Twist velocities[1024];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=velocities
  SL_Bus_ROSVariableLengthArrayInfo velocities_SL_Info;

  // MsgType=geometry_msgs/Twist:IsVarLen=1:VarLenCategory=data:VarLenElem=accelerations_SL_Info:TruncateAction=warn 
  SL_Bus_geometry_msgs_Twist accelerations[1024];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=accelerations
  SL_Bus_ROSVariableLengthArrayInfo accelerations_SL_Info;

  // MsgType=builtin_interfaces/Duration
  SL_Bus_builtin_interfaces_Duration time_from_start;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_TARGETREACHED_
#define DEFINED_TYPEDEF_FOR_TARGETREACHED_

struct TargetReached
{
  real_T linearTol;
  real_T angularTol;
  real_T timeInTol;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_MPCPARAMS_
#define DEFINED_TYPEDEF_FOR_MPCPARAMS_

struct mpcParams
{
  Gains gains;
  TargetReached targetReached;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_PHYSICSCONSTANTS_
#define DEFINED_TYPEDEF_FOR_PHYSICSCONSTANTS_

struct physicsConstants
{
  real_T rho;
  real_T g;
  real_T mass;
  real_T volume;
  real_T sub_height;
  real_T rg[3];
  real_T rb[3];
  real_T cdl[6];
  real_T cdq[6];
  real_T added_mass[6];
  real_T I[9];
  real_T depth_pose[3];
  real_T hydro_pose[3];
  real_T sonar_pose[3];
  real_T dvl_rotation[3];
  real_T thrusters[48];
  real_T dvl_lost_override;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_STRUCT_FCL3OWFFDL64QKAOTSVYAC_
#define DEFINED_TYPEDEF_FOR_STRUCT_FCL3OWFFDL64QKAOTSVYAC_

struct struct_Fcl3OWFFDL64qkAOtsVYAC
{
  real_T trajMode;
  real_T singleWpts[5];
  real_T SpaceMouseMode[3];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_STRUCT_QFOMATEQOL7MLQ02MPT2VE_
#define DEFINED_TYPEDEF_FOR_STRUCT_QFOMATEQOL7MLQ02MPT2VE_

struct struct_qfomatEQOl7mLQ02Mpt2VE
{
  real_T T[48];
  real_T tau;
  real_T b0;
  real_T a1;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_STRUCT_PHAFHL5XYXX1OAESBZWBKD_
#define DEFINED_TYPEDEF_FOR_STRUCT_PHAFHL5XYXX1OAESBZWBKD_

struct struct_PHAFHl5XyXX1OaeSBzWbKD
{
  real_T mass;
  real_T volume;
  real_T rho;
  real_T g;
  real_T dvlCenterDist;
  real_T height;
  real_T I[9];
  real_T RG[3];
  real_T RB[3];
  real_T CDL[6];
  real_T CDQ[6];
  real_T AF[3];
  real_T AddedMass[6];
  real_T DepthPose[3];
  real_T hydroPose[3];
  real_T sonarPose[3];
  real_T dvlRotation[3];
  struct_qfomatEQOl7mLQ02Mpt2VE thruster;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_STRUCT_TOFPSJJYCOBCZOPED57STD_
#define DEFINED_TYPEDEF_FOR_STRUCT_TOFPSJJYCOBCZOPED57STD_

struct struct_TOFpsJJYcOBczOpEd57stD
{
  real_T Body_Velocity[3];
  real_T error[3];
  real_T enable;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_STRUCT_DHOFEXLPAOQ1XLXIBHN1J_
#define DEFINED_TYPEDEF_FOR_STRUCT_DHOFEXLPAOQ1XLXIBHN1J_

struct struct_dhOFexlPAOq1XLxIBHN1J
{
  real_T WorldPosition[3];
  real_T qS2W[4];
  real_T qW2S[4];
  real_T Body_Velocity[3];
  real_T Angular_Rate[3];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_STRUCT_EJSQWOCLZWG18RBVTRHWOG_
#define DEFINED_TYPEDEF_FOR_STRUCT_EJSQWOCLZWG18RBVTRHWOG_

struct struct_eJsqWOClzwG18rBvtrhWOG
{
  real_T mvmin[8];
  real_T mvmax[8];
  real_T ywt[13];
  real_T mvwt[8];
  real_T dmwwt[8];
  boolean_T thrustersStatus[8];
  boolean_T kill;
  real_T p;
  real_T m;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_STRUCT_LESTJ3CMQE3CAICXMA7EPG_
#define DEFINED_TYPEDEF_FOR_STRUCT_LESTJ3CMQE3CAICXMA7EPG_

struct struct_lestj3Cmqe3cAicxMA7epG
{
  real_T dvl;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_STRUCT_UFQIMYHD2VQ8RFLYE7ODNG_
#define DEFINED_TYPEDEF_FOR_STRUCT_UFQIMYHD2VQ8RFLYE7ODNG_

struct struct_ufqIMyHD2vQ8RfLYE7OdnG
{
  real_T adapQMpcMode[4];
  real_T openLoopMode[2];
  real_T LtvQMpcMode;
  real_T rosGains;
  real_T NlmpcMode;
  real_T adapEMpcMode;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_STRUCT_X7JWPGYPPYWNYPZFC6VMZH_
#define DEFINED_TYPEDEF_FOR_STRUCT_X7JWPGYPPYWNYPZFC6VMZH_

struct struct_x7JWpgYpPywnYpZFC6VmZH
{
  real_T init;
  struct_ufqIMyHD2vQ8RfLYE7OdnG control;
  struct_Fcl3OWFFDL64qkAOtsVYAC traj;
};

#endif

#ifndef STRUCT_B_DSP_FIRFILTER_0_PROC_CONTRO_T
#define STRUCT_B_DSP_FIRFILTER_0_PROC_CONTRO_T

struct b_dsp_FIRFilter_0_proc_contro_T
{
  int32_T S0_isInitialized;
  real_T W0_states[38];
  real_T W1_simContextBuf[76];
  real_T W2_simRevCoeff[39];
  int32_T W3_halideSimTBBGrainSize;
  int32_T W4_StateBuffIdx;
  real_T P0_InitialStates;
  real_T P1_Coefficients[39];
};

#endif                                // STRUCT_B_DSP_FIRFILTER_0_PROC_CONTRO_T

#ifndef STRUCT_B_DSP_FIRFILTER_PROC_CONTROL_T
#define STRUCT_B_DSP_FIRFILTER_PROC_CONTROL_T

struct b_dsp_FIRFilter_proc_control_T
{
  int32_T isInitialized;
  boolean_T isSetupComplete;
  b_dsp_FIRFilter_0_proc_contro_T cSFunObject;
};

#endif                                 // STRUCT_B_DSP_FIRFILTER_PROC_CONTROL_T

#ifndef STRUCT_CELL_WRAP_PROC_CONTROL_T
#define STRUCT_CELL_WRAP_PROC_CONTROL_T

struct cell_wrap_proc_control_T
{
  uint32_T f1[8];
};

#endif                                 // STRUCT_CELL_WRAP_PROC_CONTROL_T

#ifndef STRUCT_DSP_SIMULINK_HIGHPASSFILTER_P_T
#define STRUCT_DSP_SIMULINK_HIGHPASSFILTER_P_T

struct dsp_simulink_HighpassFilter_p_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  cell_wrap_proc_control_T inputVarSize;
  int32_T NumChannels;
  b_dsp_FIRFilter_proc_control_T *FilterObj;
  b_dsp_FIRFilter_proc_control_T coder_buffer_pobj0;
};

#endif                                // STRUCT_DSP_SIMULINK_HIGHPASSFILTER_P_T

#ifndef STRUCT_B_DSP_FIRFILTER_0_PROC_CONT_A_T
#define STRUCT_B_DSP_FIRFILTER_0_PROC_CONT_A_T

struct b_dsp_FIRFilter_0_proc_cont_a_T
{
  int32_T S0_isInitialized;
  real_T W0_states[139];
  real_T W1_simContextBuf[278];
  real_T W2_simRevCoeff[140];
  int32_T W3_halideSimTBBGrainSize;
  int32_T W4_StateBuffIdx;
  real_T P0_InitialStates;
  real_T P1_Coefficients[140];
};

#endif                                // STRUCT_B_DSP_FIRFILTER_0_PROC_CONT_A_T

#ifndef STRUCT_B_DSP_FIRFILTER_PROC_CONTRO_D_T
#define STRUCT_B_DSP_FIRFILTER_PROC_CONTRO_D_T

struct b_dsp_FIRFilter_proc_contro_d_T
{
  int32_T isInitialized;
  boolean_T isSetupComplete;
  b_dsp_FIRFilter_0_proc_cont_a_T cSFunObject;
};

#endif                                // STRUCT_B_DSP_FIRFILTER_PROC_CONTRO_D_T

#ifndef STRUCT_DSP_SIMULINK_LOWPASSFILTER_PR_T
#define STRUCT_DSP_SIMULINK_LOWPASSFILTER_PR_T

struct dsp_simulink_LowpassFilter_pr_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  cell_wrap_proc_control_T inputVarSize;
  int32_T NumChannels;
  b_dsp_FIRFilter_proc_contro_d_T *FilterObj;
  b_dsp_FIRFilter_proc_contro_d_T coder_buffer_pobj0;
};

#endif                                // STRUCT_DSP_SIMULINK_LOWPASSFILTER_PR_T

#ifndef STRUCT_DSP_SIMULINK_MOVINGAVERAGE_PR_T
#define STRUCT_DSP_SIMULINK_MOVINGAVERAGE_PR_T

struct dsp_simulink_MovingAverage_pr_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap_proc_control_T inputVarSize;
  int32_T NumChannels;
  int32_T FrameLength;
  real_T pCumSum;
  real_T pCumSumRev[4];
  uint32_T pCumRevIndex;
  uint32_T pModValueRev;
};

#endif                                // STRUCT_DSP_SIMULINK_MOVINGAVERAGE_PR_T

#ifndef STRUCT_DSP_SIMULINK_MOVINGAVERAGE_E_T
#define STRUCT_DSP_SIMULINK_MOVINGAVERAGE_E_T

struct dsp_simulink_MovingAverage_e_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap_proc_control_T inputVarSize;
  int32_T NumChannels;
  int32_T FrameLength;
  real_T pCumSum;
  real_T pCumSumRev[49];
  uint32_T pCumRevIndex;
  uint32_T pModValueRev;
};

#endif                                 // STRUCT_DSP_SIMULINK_MOVINGAVERAGE_E_T

#ifndef STRUCT_DSP_SIMULINK_MOVINGAVERAGE_E3_T
#define STRUCT_DSP_SIMULINK_MOVINGAVERAGE_E3_T

struct dsp_simulink_MovingAverage_e3_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap_proc_control_T inputVarSize;
  int32_T NumChannels;
  int32_T FrameLength;
  real_T pCumSum;
  real_T pCumSumRev[9];
  uint32_T pCumRevIndex;
  uint32_T pModValueRev;
};

#endif                                // STRUCT_DSP_SIMULINK_MOVINGAVERAGE_E3_T

#ifndef STRUCT_DSP_SIMULINK_MOVINGAVERAG_E3X_T
#define STRUCT_DSP_SIMULINK_MOVINGAVERAG_E3X_T

struct dsp_simulink_MovingAverag_e3x_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap_proc_control_T inputVarSize;
  int32_T NumChannels;
  int32_T FrameLength;
  real_T pCumSum;
  real_T pCumSumRev[24];
  uint32_T pCumRevIndex;
  uint32_T pModValueRev;
};

#endif                                // STRUCT_DSP_SIMULINK_MOVINGAVERAG_E3X_T

#ifndef STRUCT_SJ4IH70VMKCVCEGUWN0MNVF
#define STRUCT_SJ4IH70VMKCVCEGUWN0MNVF

struct sJ4ih70VmKcvCeguWN0mNVF
{
  real_T sec;
  real_T nsec;
};

#endif                                 // STRUCT_SJ4IH70VMKCVCEGUWN0MNVF

#ifndef STRUCT_ROS_SLROS2_INTERNAL_BLOCK_PUB_T
#define STRUCT_ROS_SLROS2_INTERNAL_BLOCK_PUB_T

struct ros_slros2_internal_block_Pub_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T QOSAvoidROSNamespaceConventions;
};

#endif                                // STRUCT_ROS_SLROS2_INTERNAL_BLOCK_PUB_T

#ifndef STRUCT_ROS_SLROS2_INTERNAL_BLOCK_SUB_T
#define STRUCT_ROS_SLROS2_INTERNAL_BLOCK_SUB_T

struct ros_slros2_internal_block_Sub_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T QOSAvoidROSNamespaceConventions;
};

#endif                                // STRUCT_ROS_SLROS2_INTERNAL_BLOCK_SUB_T

#ifndef STRUCT_E_ROBOTICS_CORE_INTERNAL_VALI_T
#define STRUCT_E_ROBOTICS_CORE_INTERNAL_VALI_T

struct e_robotics_core_internal_vali_T
{
  boolean_T FeatureControlFlag;
};

#endif                                // STRUCT_E_ROBOTICS_CORE_INTERNAL_VALI_T

// Custom Type definition for MATLAB Function: '<S170>/NLMPC'
#ifndef STRUCT_SG8JZ69AXY52WWR6RKYAPQC_PROC__T
#define STRUCT_SG8JZ69AXY52WWR6RKYAPQC_PROC__T

struct sG8JZ69axY52WWR6RKyApQC_proc__T
{
  real_T penaltyParam;
  real_T threshold;
  int32_T nPenaltyDecreases;
  real_T linearizedConstrViol;
  real_T initFval;
  real_T initConstrViolationEq;
  real_T initConstrViolationIneq;
  real_T phi;
  real_T phiPrimePlus;
  real_T phiFullStep;
  real_T feasRelativeFactor;
  real_T nlpPrimalFeasError;
  real_T nlpDualFeasError;
  real_T nlpComplError;
  real_T firstOrderOpt;
  boolean_T hasObjective;
};

#endif                                // STRUCT_SG8JZ69AXY52WWR6RKYAPQC_PROC__T

#ifndef STRUCT_S7RDRPWKR8UPAUYTDDJKLAG_PROC__T
#define STRUCT_S7RDRPWKR8UPAUYTDDJKLAG_PROC__T

struct s7RdrPWkr8UPAUyTdDJkLaG_proc__T
{
  boolean_T gradOK;
  boolean_T fevalOK;
  boolean_T done;
  boolean_T stepAccepted;
  boolean_T failedLineSearch;
  int32_T stepType;
};

#endif                                // STRUCT_S7RDRPWKR8UPAUYTDDJKLAG_PROC__T

#ifndef STRUCT_MATLABSHARED_TRACKING_INTERNA_T
#define STRUCT_MATLABSHARED_TRACKING_INTERNA_T

struct matlabshared_tracking_interna_T
{
  int32_T isInitialized;
};

#endif                                // STRUCT_MATLABSHARED_TRACKING_INTERNA_T

#ifndef STRUCT_MATLABSHARED_TRACKING_INTER_P_T
#define STRUCT_MATLABSHARED_TRACKING_INTER_P_T

struct matlabshared_tracking_inter_p_T
{
  int32_T isInitialized;
};

#endif                                // STRUCT_MATLABSHARED_TRACKING_INTER_P_T

#ifndef STRUCT_QUATERNION_PROC_CONTROL_T
#define STRUCT_QUATERNION_PROC_CONTROL_T

struct quaternion_proc_control_T
{
  real_T a;
  real_T b;
  real_T c;
  real_T d;
};

#endif                                 // STRUCT_QUATERNION_PROC_CONTROL_T

#ifndef STRUCT_E_ROBOTICS_SLCORE_INTERNAL_BL_T
#define STRUCT_E_ROBOTICS_SLCORE_INTERNAL_BL_T

struct e_robotics_slcore_internal_bl_T
{
  boolean_T SampleTimeSpecTypeMask[4];
};

#endif                                // STRUCT_E_ROBOTICS_SLCORE_INTERNAL_BL_T

#ifndef STRUCT_ROS_SLROS2_INTERNAL_BLOCK_CUR_T
#define STRUCT_ROS_SLROS2_INTERNAL_BLOCK_CUR_T

struct ros_slros2_internal_block_Cur_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  e_robotics_slcore_internal_bl_T SampleTimeHandler;
};

#endif                                // STRUCT_ROS_SLROS2_INTERNAL_BLOCK_CUR_T

#ifndef STRUCT_VECTOR2DOUBLEARRAY_PROC_CONTR_T
#define STRUCT_VECTOR2DOUBLEARRAY_PROC_CONTR_T

struct Vector2DoubleArray_proc_contr_T
{
  real_T lastValues[8];
};

#endif                                // STRUCT_VECTOR2DOUBLEARRAY_PROC_CONTR_T

#ifndef STRUCT_VECTOR2DOUBLEARRAY_PROC_CON_P_T
#define STRUCT_VECTOR2DOUBLEARRAY_PROC_CON_P_T

struct Vector2DoubleArray_proc_con_p_T
{
  real_T lastValues[13];
};

#endif                                // STRUCT_VECTOR2DOUBLEARRAY_PROC_CON_P_T

#ifndef STRUCT_ROS_SLROS2_INTERNAL_BLOCK_GET_T
#define STRUCT_ROS_SLROS2_INTERNAL_BLOCK_GET_T

struct ros_slros2_internal_block_Get_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  e_robotics_slcore_internal_bl_T SampleTimeHandler;
};

#endif                                // STRUCT_ROS_SLROS2_INTERNAL_BLOCK_GET_T

#ifndef STRUCT_VECTOR2DOUBLEARRAY_PROC_CO_PR_T
#define STRUCT_VECTOR2DOUBLEARRAY_PROC_CO_PR_T

struct Vector2DoubleArray_proc_co_pr_T
{
  real_T lastValues[6];
};

#endif                                // STRUCT_VECTOR2DOUBLEARRAY_PROC_CO_PR_T

#ifndef STRUCT_VECTOR2DOUBLEARRAY_PROC_C_PR3_T
#define STRUCT_VECTOR2DOUBLEARRAY_PROC_C_PR3_T

struct Vector2DoubleArray_proc_c_pr3_T
{
  real_T lastValues[3];
};

#endif                                // STRUCT_VECTOR2DOUBLEARRAY_PROC_C_PR3_T

#ifndef STRUCT_VECTOR2DOUBLEARRAY_PROC__PR35_T
#define STRUCT_VECTOR2DOUBLEARRAY_PROC__PR35_T

struct Vector2DoubleArray_proc__pr35_T
{
  real_T lastValues[9];
};

#endif                                // STRUCT_VECTOR2DOUBLEARRAY_PROC__PR35_T

#ifndef STRUCT_ROSCOMMANDMANAGER_PROC_CONTRO_T
#define STRUCT_ROSCOMMANDMANAGER_PROC_CONTRO_T

struct rosCommandManager_proc_contro_T
{
  int32_T isInitialized;
  real_T initial_mode;
  real_T m_initCond[7];
  real_T m_mode;
  real_T m_killStatus;
  real_T m_simulation;
  real_T m_reset;
  real_T m_trajClear;
  real_T m_notDryRun;
};

#endif                                // STRUCT_ROSCOMMANDMANAGER_PROC_CONTRO_T

#ifndef STRUCT_TRIMPLANT_PROC_CONTROL_T
#define STRUCT_TRIMPLANT_PROC_CONTROL_T

struct TrimPlant_proc_control_T
{
  int32_T isInitialized;
  real_T qkm[4];
  real_T qkt[4];
  real_T xl[13];
  real_T Bc[104];
  real_T C[169];
  real_T D[104];
  boolean_T init;
  real_T constValues[38];
};

#endif                                 // STRUCT_TRIMPLANT_PROC_CONTROL_T

#ifndef STRUCT_OPENLOOPCONTROLLER_PROC_CONTR_T
#define STRUCT_OPENLOOPCONTROLLER_PROC_CONTR_T

struct OpenLoopController_proc_contr_T
{
  int32_T isInitialized;
  real_T k;
  real_T binv[48];
  real_T mass;
  real_T volume;
  real_T height;
  real_T I[9];
  real_T RG[3];
  real_T RB[3];
  real_T AddedMass[6];
  real_T CDL[6];
  real_T CDQ[6];
  real_T AF[3];
  real_T g;
  real_T rho;
};

#endif                                // STRUCT_OPENLOOPCONTROLLER_PROC_CONTR_T

#ifndef STRUCT_STTYSJM5GCI2C1EU0R50EFC_PROC__T
#define STRUCT_STTYSJM5GCI2C1EU0R50EFC_PROC__T

struct sttYSJM5GCi2c1Eu0R50efC_proc__T
{
  real_T iterations;
  real_T funcCount;
  char_T algorithm[3];
  real_T constrviolation;
  real_T stepsize;
  real_T lssteplength;
  real_T firstorderopt;
};

#endif                                // STRUCT_STTYSJM5GCI2C1EU0R50EFC_PROC__T

#ifndef STRUCT_SOMZAGBOVHDG7PNQS6E98JD_PROC__T
#define STRUCT_SOMZAGBOVHDG7PNQS6E98JD_PROC__T

struct somzaGboVhDG7PNQS6E98jD_proc__T
{
  char_T SolverName[7];
  int32_T MaxIterations;
  real_T StepTolerance;
  real_T OptimalityTolerance;
  real_T ConstraintTolerance;
  real_T ObjectiveLimit;
  real_T PricingTolerance;
  real_T ConstrRelTolFactor;
  real_T ProbRelTolFactor;
  boolean_T RemainFeasible;
  boolean_T IterDisplayQP;
};

#endif                                // STRUCT_SOMZAGBOVHDG7PNQS6E98JD_PROC__T

#ifndef STRUCT_MPCMANAGER_PROC_CONTROL_T
#define STRUCT_MPCMANAGER_PROC_CONTROL_T

struct mpcManager_proc_control_T
{
  int32_T isInitialized;
  real_T init;
  real_T currentFaultCount[8];
  boolean_T isThrusterFault[8];
  real_T rosOV[13];
  real_T rosMV[8];
  real_T rosMVR[8];
  real_T gainsList[600];
};

#endif                                 // STRUCT_MPCMANAGER_PROC_CONTROL_T

#ifndef STRUCT_PROCPLANNERMANAGER_PROC_CONTR_T
#define STRUCT_PROCPLANNERMANAGER_PROC_CONTR_T

struct ProcPlannerManager_proc_contr_T
{
  int32_T isInitialized;
  real_T poseBuffer[78000];
  real_T bufferCount;
  boolean_T done;
  real_T targetReachedCount;
  real_T initialPose[7];
  boolean_T init;
  real_T dummy;
  real_T emptyArray[13];
};

#endif                                // STRUCT_PROCPLANNERMANAGER_PROC_CONTR_T

#ifndef STRUCT_ADDPOSE_PROC_CONTROL_T
#define STRUCT_ADDPOSE_PROC_CONTROL_T

struct AddPose_proc_control_T
{
  real_T i;
  real_T poseList[18];
  real_T initcond[7];
};

#endif                                 // STRUCT_ADDPOSE_PROC_CONTROL_T

#ifndef STRUCT_TRAJECTORYMANAGER_PROC_CONTRO_T
#define STRUCT_TRAJECTORYMANAGER_PROC_CONTRO_T

struct TrajectoryManager_proc_contro_T
{
  int32_T isInitialized;
  real_T linearConvergence;
  real_T quaternionConvergence;
  real_T TargetThreshold;
  real_T poseBuffer[78013];
  real_T generationNumber;
  real_T bufferCount;
  boolean_T done;
  real_T targetReachedCount;
  real_T init;
  real_T dummy;
  real_T emptyArray[13];
};

#endif                                // STRUCT_TRAJECTORYMANAGER_PROC_CONTRO_T

#ifndef STRUCT_SQZUOXVJ3QTPO9QWF8LNDOG_PROC__T
#define STRUCT_SQZUOXVJ3QTPO9QWF8LNDOG_PROC__T

struct sqZuOXvj3QtPO9QwF8LnDoG_proc__T
{
  real_T breaks[4];
  real_T coefs[36];
};

#endif                                // STRUCT_SQZUOXVJ3QTPO9QWF8LNDOG_PROC__T

#ifndef STRUCT_CELL_PROC_CONTROL_T
#define STRUCT_CELL_PROC_CONTROL_T

struct cell_proc_control_T
{
  real_T f1[6];
  real_T f2[2];
};

#endif                                 // STRUCT_CELL_PROC_CONTROL_T

#ifndef STRUCT_S_WVBWSSVCEJZX5TXXA9L1L_PROC__T
#define STRUCT_S_WVBWSSVCEJZX5TXXA9L1L_PROC__T

struct s_WVbWSSvCeJzx5TXXa9L1l_proc__T
{
  int32_T nVarMax;
  int32_T mNonlinIneq;
  int32_T mNonlinEq;
  int32_T mIneq;
  int32_T mEq;
  int32_T iNonIneq0;
  int32_T iNonEq0;
  real_T sqpFval;
  real_T sqpFval_old;
  real_T xstarsqp[139];
  real_T xstarsqp_old[139];
  coder::bounded_array<real_T, 580U, 1U> cIneq;
  coder::bounded_array<real_T, 580U, 1U> cIneq_old;
  real_T cEq[130];
  real_T cEq_old[130];
  coder::bounded_array<real_T, 980U, 1U> grad;
  coder::bounded_array<real_T, 980U, 1U> grad_old;
  int32_T FunctionEvaluations;
  int32_T sqpIterations;
  int32_T sqpExitFlag;
  coder::bounded_array<real_T, 1829U, 1U> lambdasqp;
  coder::bounded_array<real_T, 1829U, 1U> lambdaStopTest;
  coder::bounded_array<real_T, 1829U, 1U> lambdaStopTestPrev;
  real_T steplength;
  coder::bounded_array<real_T, 1829U, 1U> delta_x;
  coder::bounded_array<real_T, 980U, 1U> socDirection;
  coder::bounded_array<int32_T, 1829U, 1U> workingset_old;
  coder::bounded_array<real_T, 254800U, 2U> JacCineqTrans_old;
  coder::bounded_array<real_T, 127400U, 2U> JacCeqTrans_old;
  coder::bounded_array<real_T, 980U, 1U> gradLag;
  coder::bounded_array<real_T, 980U, 1U> delta_gradLag;
  coder::bounded_array<real_T, 1829U, 1U> xstar;
  real_T fstar;
  real_T firstorderopt;
  coder::bounded_array<real_T, 1829U, 1U> lambda;
  int32_T state;
  real_T maxConstr;
  int32_T iterations;
  coder::bounded_array<real_T, 1829U, 1U> searchDir;
};

#endif                                // STRUCT_S_WVBWSSVCEJZX5TXXA9L1L_PROC__T

#ifndef STRUCT_S_Z8MIYZCNLMZX998HTZCIUB_PROC_T
#define STRUCT_S_Z8MIYZCNLMZX998HTZCIUB_PROC_T

struct s_z8miyzCNLMZx998HtZciUB_proc_T
{
  coder::bounded_array<real_T, 1792420U, 2U> workspace_float;
  coder::bounded_array<int32_T, 1829U, 1U> workspace_int;
  coder::bounded_array<int32_T, 1829U, 1U> workspace_sort;
};

#endif                                // STRUCT_S_Z8MIYZCNLMZX998HTZCIUB_PROC_T

#ifndef STRUCT_S_PATG1CW05SRYOWRQZWRQYC_PROC_T
#define STRUCT_S_PATG1CW05SRYOWRQZWRQYC_PROC_T

struct s_PAtG1CW05sRYOWrqzwRQyC_proc_T
{
  int32_T mConstr;
  int32_T mConstrOrig;
  int32_T mConstrMax;
  int32_T nVar;
  int32_T nVarOrig;
  int32_T nVarMax;
  int32_T ldA;
  coder::bounded_array<real_T, 568400U, 1U> Aineq;
  coder::bounded_array<real_T, 580U, 1U> bineq;
  coder::bounded_array<real_T, 127400U, 1U> Aeq;
  real_T beq[130];
  coder::bounded_array<real_T, 980U, 1U> lb;
  coder::bounded_array<real_T, 980U, 1U> ub;
  coder::bounded_array<int32_T, 980U, 1U> indexLB;
  coder::bounded_array<int32_T, 980U, 1U> indexUB;
  coder::bounded_array<int32_T, 980U, 1U> indexFixed;
  int32_T mEqRemoved;
  int32_T indexEqRemoved[130];
  coder::bounded_array<real_T, 1792420U, 1U> ATwset;
  coder::bounded_array<real_T, 1829U, 1U> bwset;
  int32_T nActiveConstr;
  coder::bounded_array<real_T, 1829U, 1U> maxConstrWorkspace;
  int32_T sizes[5];
  int32_T sizesNormal[5];
  int32_T sizesPhaseOne[5];
  int32_T sizesRegularized[5];
  int32_T sizesRegPhaseOne[5];
  int32_T isActiveIdx[6];
  int32_T isActiveIdxNormal[6];
  int32_T isActiveIdxPhaseOne[6];
  int32_T isActiveIdxRegularized[6];
  int32_T isActiveIdxRegPhaseOne[6];
  coder::bounded_array<boolean_T, 1829U, 1U> isActiveConstr;
  coder::bounded_array<int32_T, 1829U, 1U> Wid;
  coder::bounded_array<int32_T, 1829U, 1U> Wlocalidx;
  int32_T nWConstr[5];
  int32_T probType;
  real_T SLACK0;
};

#endif                                // STRUCT_S_PATG1CW05SRYOWRQZWRQYC_PROC_T

#ifndef STRUCT_S_BSF2FSALE81D2LTDCKUKHG_PROC_T
#define STRUCT_S_BSF2FSALE81D2LTDCKUKHG_PROC_T

struct s_bsf2Fsale81D2LTDCKuKhG_proc_T
{
  coder::bounded_array<real_T, 980U, 1U> grad;
  coder::bounded_array<real_T, 979U, 1U> Hx;
  boolean_T hasLinear;
  int32_T nvar;
  int32_T maxVar;
  real_T beta;
  real_T rho;
  int32_T objtype;
  int32_T prev_objtype;
  int32_T prev_nvar;
  boolean_T prev_hasLinear;
  real_T gammaScalar;
};

#endif                                // STRUCT_S_BSF2FSALE81D2LTDCKUKHG_PROC_T

#ifndef STRUCT_S_O1KZUWOPQZC62ZOGQAMCNH_PROC_T
#define STRUCT_S_O1KZUWOPQZC62ZOGQAMCNH_PROC_T

struct s_o1KzuWoPqzc62zOgqamCNH_proc_T
{
  int32_T ldq;
  coder::bounded_array<real_T, 3345241U, 2U> QR;
  coder::bounded_array<real_T, 3345241U, 2U> Q;
  coder::bounded_array<int32_T, 1829U, 1U> jpvt;
  int32_T mrows;
  int32_T ncols;
  coder::bounded_array<real_T, 1829U, 1U> tau;
  int32_T minRowCol;
  boolean_T usedPivoting;
};

#endif                                // STRUCT_S_O1KZUWOPQZC62ZOGQAMCNH_PROC_T

#ifndef STRUCT_S_962GQYKB8VLIRVQSLDGQIG_PROC_T
#define STRUCT_S_962GQYKB8VLIRVQSLDGQIG_PROC_T

struct s_962gqykB8vLiRVqsLdGQIG_proc_T
{
  coder::bounded_array<real_T, 3345241U, 2U> FMat;
  int32_T ldm;
  int32_T ndims;
  int32_T info;
  real_T scaleFactor;
  boolean_T ConvexCheck;
  real_T regTol_;
  real_T workspace_;
  real_T workspace2_;
};

#endif                                // STRUCT_S_962GQYKB8VLIRVQSLDGQIG_PROC_T

#ifndef STRUCT_S_QYIVDQP9YRQTT40IDZ89JG_PROC_T
#define STRUCT_S_QYIVDQP9YRQTT40IDZ89JG_PROC_T

struct s_qYIvDqP9yRqtt40IDZ89JG_proc_T
{
  real_T x[13];
  real_T lastMV[8];
  real_T ref[130];
  real_T OutputWeights[130];
  real_T MVWeights[80];
  real_T MVRateWeights[80];
  real_T ECRWeight;
  real_T OutputMin[130];
  real_T OutputMax[130];
  real_T StateMin[130];
  real_T StateMax[130];
  real_T MVMin[80];
  real_T MVMax[80];
  real_T MVRateMin[80];
  real_T MVRateMax[80];
  real_T MVScaledTarget[80];
};

#endif                                // STRUCT_S_QYIVDQP9YRQTT40IDZ89JG_PROC_T

#ifndef STRUCT_SUMHYDZSDUKPGVAXM7NZHOD_PROC__T
#define STRUCT_SUMHYDZSDUKPGVAXM7NZHOD_PROC__T

struct sumhYdZsdukPgvAXm7nzHOD_proc__T
{
  real_T Ts;
  real_T CurrentStates[13];
  real_T LastMV[8];
  real_T References[130];
  real_T MVTarget[80];
  real_T PredictionHorizon;
  real_T NumOfStates;
  real_T NumOfOutputs;
  real_T NumOfInputs;
  real_T MVIndex[8];
  real_T InputPassivityIndex;
  real_T OutputPassivityIndex;
  boolean_T PassivityUsePredictedX;
};

#endif                                // STRUCT_SUMHYDZSDUKPGVAXM7NZHOD_PROC__T

#ifndef STRUCT_S_XJMQKNCTZVV6AUZMZCIQSF_PROC_T
#define STRUCT_S_XJMQKNCTZVV6AUZMZCIQSF_PROC_T

struct s_xJmQKnCTzvv6aUzMZcIqsF_proc_T
{
  s_qYIvDqP9yRqtt40IDZ89JG_proc_T runtimedata;
  sumhYdZsdukPgvAXm7nzHOD_proc__T userdata;
};

#endif                                // STRUCT_S_XJMQKNCTZVV6AUZMZCIQSF_PROC_T

#ifndef STRUCT_ANONYMOUS_FUNCTION_PROC_CONTR_T
#define STRUCT_ANONYMOUS_FUNCTION_PROC_CONTR_T

struct anonymous_function_proc_contr_T
{
  s_xJmQKnCTzvv6aUzMZcIqsF_proc_T workspace;
};

#endif                                // STRUCT_ANONYMOUS_FUNCTION_PROC_CONTR_T

#ifndef STRUCT_CODER_INTERNAL_STICKYSTRUCT_1_T
#define STRUCT_CODER_INTERNAL_STICKYSTRUCT_1_T

struct coder_internal_stickyStruct_1_T
{
  anonymous_function_proc_contr_T b_value;
};

#endif                                // STRUCT_CODER_INTERNAL_STICKYSTRUCT_1_T

#ifndef STRUCT_CODER_INTERNAL_STICKYSTRUCT_N_T
#define STRUCT_CODER_INTERNAL_STICKYSTRUCT_N_T

struct coder_internal_stickyStruct_n_T
{
  anonymous_function_proc_contr_T b_value;
  coder_internal_stickyStruct_1_T next;
};

#endif                                // STRUCT_CODER_INTERNAL_STICKYSTRUCT_N_T

#ifndef STRUCT_CODER_INTERNAL_STICKYSTRUCT_D_T
#define STRUCT_CODER_INTERNAL_STICKYSTRUCT_D_T

struct coder_internal_stickyStruct_d_T
{
  coder_internal_stickyStruct_n_T next;
};

#endif                                // STRUCT_CODER_INTERNAL_STICKYSTRUCT_D_T

#ifndef STRUCT_CODER_INTERNAL_STICKYSTRUCT_F_T
#define STRUCT_CODER_INTERNAL_STICKYSTRUCT_F_T

struct coder_internal_stickyStruct_f_T
{
  int32_T b_value;
  coder_internal_stickyStruct_d_T next;
};

#endif                                // STRUCT_CODER_INTERNAL_STICKYSTRUCT_F_T

#ifndef STRUCT_CODER_INTERNAL_STICKYSTRUCT_C_T
#define STRUCT_CODER_INTERNAL_STICKYSTRUCT_C_T

struct coder_internal_stickyStruct_c_T
{
  coder_internal_stickyStruct_f_T next;
};

#endif                                // STRUCT_CODER_INTERNAL_STICKYSTRUCT_C_T

#ifndef STRUCT_CODER_INTERNAL_STICKYSTRUCT_I_T
#define STRUCT_CODER_INTERNAL_STICKYSTRUCT_I_T

struct coder_internal_stickyStruct_i_T
{
  coder_internal_stickyStruct_c_T next;
};

#endif                                // STRUCT_CODER_INTERNAL_STICKYSTRUCT_I_T

#ifndef STRUCT_CODER_INTERNAL_STICKYSTRUC_IZ_T
#define STRUCT_CODER_INTERNAL_STICKYSTRUC_IZ_T

struct coder_internal_stickyStruc_iz_T
{
  coder_internal_stickyStruct_i_T next;
};

#endif                                // STRUCT_CODER_INTERNAL_STICKYSTRUC_IZ_T

#ifndef STRUCT_CODER_INTERNAL_STICKYSTRUCT_J_T
#define STRUCT_CODER_INTERNAL_STICKYSTRUCT_J_T

struct coder_internal_stickyStruct_j_T
{
  coder_internal_stickyStruc_iz_T next;
};

#endif                                // STRUCT_CODER_INTERNAL_STICKYSTRUCT_J_T

#ifndef STRUCT_CODER_INTERNAL_STICKYSTRUCT_2_T
#define STRUCT_CODER_INTERNAL_STICKYSTRUCT_2_T

struct coder_internal_stickyStruct_2_T
{
  coder_internal_stickyStruct_j_T next;
};

#endif                                // STRUCT_CODER_INTERNAL_STICKYSTRUCT_2_T

#ifndef STRUCT_S_FTDKUJNZIZAWW3T7JWXLSD_PROC_T
#define STRUCT_S_FTDKUJNZIZAWW3T7JWXLSD_PROC_T

struct s_FtDkUjnZiZaWW3T7JWXLsD_proc_T
{
  anonymous_function_proc_contr_T objfun;
  anonymous_function_proc_contr_T nonlin;
  real_T f_1;
  coder::bounded_array<real_T, 260U, 1U> cIneq_1;
  real_T cEq_1[130];
  real_T f_2;
  coder::bounded_array<real_T, 260U, 1U> cIneq_2;
  real_T cEq_2[130];
  int32_T nVar;
  int32_T mIneq;
  int32_T mEq;
  int32_T numEvals;
  boolean_T SpecifyObjectiveGradient;
  boolean_T SpecifyConstraintGradient;
  boolean_T isEmptyNonlcon;
  boolean_T hasLB[139];
  boolean_T hasUB[139];
  boolean_T hasBounds;
  int32_T FiniteDifferenceType;
};

#endif                                // STRUCT_S_FTDKUJNZIZAWW3T7JWXLSD_PROC_T

#ifndef STRUCT_ROBOTICS_SLCORE_INTERNAL_BLOC_T
#define STRUCT_ROBOTICS_SLCORE_INTERNAL_BLOC_T

struct robotics_slcore_internal_bloc_T
{
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  cell_wrap_proc_control_T inputVarSize[4];
  real_T TimeScaling[33];
};

#endif                                // STRUCT_ROBOTICS_SLCORE_INTERNAL_BLOC_T

#ifndef STRUCT_ROBOTICS_SLCORE_INTERNAL_BL_P_T
#define STRUCT_ROBOTICS_SLCORE_INTERNAL_BL_P_T

struct robotics_slcore_internal_bl_p_T
{
  boolean_T tunablePropertyChanged[5];
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  cell_wrap_proc_control_T inputVarSize[3];
  real_T VelocityBoundaryCondition[6];
  real_T AccelerationBoundaryCondition[10];
  sqZuOXvj3QtPO9QwF8LnDoG_proc__T PPStruct;
  sqZuOXvj3QtPO9QwF8LnDoG_proc__T PPDStruct;
  sqZuOXvj3QtPO9QwF8LnDoG_proc__T PPDDStruct;
  cell_proc_control_T PrevOptInputs;
  boolean_T PPFormUpdatedNeeded;
};

#endif                                // STRUCT_ROBOTICS_SLCORE_INTERNAL_BL_P_T
#endif                                 // PROC_CONTROL_TYPES_H_

//
// File trailer for generated code.
//
// [EOF]
//
