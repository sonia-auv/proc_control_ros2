/*
 * proc_control_lite_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "proc_control_lite".
 *
 * Model version              : 1.22
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C++ source code generated on : Mon Jul 13 16:04:52 2026
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LLP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef proc_control_lite_types_h_
#define proc_control_lite_types_h_
#include "rtwtypes.h"
#include "coder_bounded_array.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_builtin_interfaces_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_builtin_interfaces_Time_

struct SL_Bus_builtin_interfaces_Time
{
  int32_T sec;
  uint32_T nanosec;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_Default_
#define DEFINED_TYPEDEF_FOR_Default_

struct Default
{
  real_T OV[13];
  real_T MV[8];
  real_T MVR[8];
};

#endif

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

#ifndef DEFINED_TYPEDEF_FOR_NoDvl_
#define DEFINED_TYPEDEF_FOR_NoDvl_

struct NoDvl
{
  real_T MV[8];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_Gains_
#define DEFINED_TYPEDEF_FOR_Gains_

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

#ifndef DEFINED_TYPEDEF_FOR_TargetReached_
#define DEFINED_TYPEDEF_FOR_TargetReached_

struct TargetReached
{
  real_T linearTol;
  real_T angularTol;
  real_T timeInTol;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_mpcParams_
#define DEFINED_TYPEDEF_FOR_mpcParams_

struct mpcParams
{
  Gains gains;
  TargetReached targetReached;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_physicsConstants_
#define DEFINED_TYPEDEF_FOR_physicsConstants_

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

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_Bool_
#define DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_Bool_

struct SL_Bus_std_msgs_Bool
{
  boolean_T data;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

struct SL_Bus_ROSVariableLengthArrayInfo
{
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_Header_

struct SL_Bus_std_msgs_Header
{
  SL_Bus_builtin_interfaces_Time stamp;
  uint8_T frame_id[128];
  SL_Bus_ROSVariableLengthArrayInfo frame_id_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Point_
#define DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Point_

struct SL_Bus_geometry_msgs_Point
{
  real_T x;
  real_T y;
  real_T z;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Quaternion_
#define DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Quaternion_

struct SL_Bus_geometry_msgs_Quaternion
{
  real_T x;
  real_T y;
  real_T z;
  real_T w;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Pose_
#define DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Pose_

struct SL_Bus_geometry_msgs_Pose
{
  SL_Bus_geometry_msgs_Point position;
  SL_Bus_geometry_msgs_Quaternion orientation;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_PoseWithCovariance_
#define DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_PoseWithCovariance_

struct SL_Bus_geometry_msgs_PoseWithCovariance
{
  SL_Bus_geometry_msgs_Pose pose;
  real_T covariance[36];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Vector3_

struct SL_Bus_geometry_msgs_Vector3
{
  real_T x;
  real_T y;
  real_T z;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Twist_

struct SL_Bus_geometry_msgs_Twist
{
  SL_Bus_geometry_msgs_Vector3 linear;
  SL_Bus_geometry_msgs_Vector3 angular;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_TwistWithCovariance_
#define DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_TwistWithCovariance_

struct SL_Bus_geometry_msgs_TwistWithCovariance
{
  SL_Bus_geometry_msgs_Twist twist;
  real_T covariance[36];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_nav_msgs_Odometry_
#define DEFINED_TYPEDEF_FOR_SL_Bus_nav_msgs_Odometry_

struct SL_Bus_nav_msgs_Odometry
{
  SL_Bus_std_msgs_Header header;
  uint8_T child_frame_id[128];
  SL_Bus_ROSVariableLengthArrayInfo child_frame_id_SL_Info;
  SL_Bus_geometry_msgs_PoseWithCovariance pose;
  SL_Bus_geometry_msgs_TwistWithCovariance twist;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_sonia_common_ros2_MotorPwm_
#define DEFINED_TYPEDEF_FOR_SL_Bus_sonia_common_ros2_MotorPwm_

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

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_sonia_common_ros2_MotorNewton_
#define DEFINED_TYPEDEF_FOR_SL_Bus_sonia_common_ros2_MotorNewton_

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

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_sonia_common_ros2_MpcGains_
#define DEFINED_TYPEDEF_FOR_SL_Bus_sonia_common_ros2_MpcGains_

struct SL_Bus_sonia_common_ros2_MpcGains
{
  real_T ov[128];
  SL_Bus_ROSVariableLengthArrayInfo ov_SL_Info;
  real_T mv[128];
  SL_Bus_ROSVariableLengthArrayInfo mv_SL_Info;
  real_T mvr[128];
  SL_Bus_ROSVariableLengthArrayInfo mvr_SL_Info;
  real_T max_thrust;
  real_T min_thrust;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_sonia_common_ros2_MpcInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_sonia_common_ros2_MpcInfo_

struct SL_Bus_sonia_common_ros2_MpcInfo
{
  boolean_T is_mpc_alive;
  boolean_T target_reached;
  boolean_T is_trajectory_done;
  boolean_T thrusters_status[128];
  SL_Bus_ROSVariableLengthArrayInfo thrusters_status_SL_Info;
  int8_T mpc_status;
  uint8_T mpc_mode;
  SL_Bus_sonia_common_ros2_MpcGains current_gains;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_UInt8_
#define DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_UInt8_

struct SL_Bus_std_msgs_UInt8
{
  uint8_T data;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_sonia_common_ros2_KillStatus_
#define DEFINED_TYPEDEF_FOR_SL_Bus_sonia_common_ros2_KillStatus_

struct SL_Bus_sonia_common_ros2_KillStatus
{
  boolean_T status;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_MultiArrayDimension_
#define DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_MultiArrayDimension_

struct SL_Bus_std_msgs_MultiArrayDimension
{
  uint8_T label[128];
  SL_Bus_ROSVariableLengthArrayInfo label_SL_Info;
  uint32_T size;
  uint32_T stride;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_MultiArrayLayout_
#define DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_MultiArrayLayout_

struct SL_Bus_std_msgs_MultiArrayLayout
{
  SL_Bus_std_msgs_MultiArrayDimension dim[16];
  SL_Bus_ROSVariableLengthArrayInfo dim_SL_Info;
  uint32_T data_offset;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_Float64MultiArray_
#define DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_Float64MultiArray_

struct SL_Bus_std_msgs_Float64MultiArray
{
  SL_Bus_std_msgs_MultiArrayLayout layout;
  real_T data[128];
  SL_Bus_ROSVariableLengthArrayInfo data_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Transform_
#define DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Transform_

struct SL_Bus_geometry_msgs_Transform
{
  SL_Bus_geometry_msgs_Vector3 translation;
  SL_Bus_geometry_msgs_Quaternion rotation;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_builtin_interfaces_Duration_
#define DEFINED_TYPEDEF_FOR_SL_Bus_builtin_interfaces_Duration_

struct SL_Bus_builtin_interfaces_Duration
{
  int32_T sec;
  uint32_T nanosec;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint_
#define DEFINED_TYPEDEF_FOR_SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint_

struct SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint
{
  SL_Bus_geometry_msgs_Transform transforms[1024];
  SL_Bus_ROSVariableLengthArrayInfo transforms_SL_Info;
  SL_Bus_geometry_msgs_Twist velocities[1024];
  SL_Bus_ROSVariableLengthArrayInfo velocities_SL_Info;
  SL_Bus_geometry_msgs_Twist accelerations[1024];
  SL_Bus_ROSVariableLengthArrayInfo accelerations_SL_Info;
  SL_Bus_builtin_interfaces_Duration time_from_start;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_sonia_common_ros2_Pose_
#define DEFINED_TYPEDEF_FOR_SL_Bus_sonia_common_ros2_Pose_

struct SL_Bus_sonia_common_ros2_Pose
{
  uint8_T frame;
  uint8_T speed;
  SL_Bus_geometry_msgs_Point position;
  SL_Bus_geometry_msgs_Vector3 orientation;
  real_T fine;
  boolean_T rotation;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_Float32_
#define DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_Float32_

struct SL_Bus_std_msgs_Float32
{
  real32_T data;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_sonia_common_ros2_BodyVelocityDVL_
#define DEFINED_TYPEDEF_FOR_SL_Bus_sonia_common_ros2_BodyVelocityDVL_

struct SL_Bus_sonia_common_ros2_BodyVelocityDVL
{
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

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_sensor_msgs_Imu_
#define DEFINED_TYPEDEF_FOR_SL_Bus_sensor_msgs_Imu_

struct SL_Bus_sensor_msgs_Imu
{
  SL_Bus_std_msgs_Header header;
  SL_Bus_geometry_msgs_Quaternion orientation;
  real_T orientation_covariance[9];
  SL_Bus_geometry_msgs_Vector3 angular_velocity;
  real_T angular_velocity_covariance[9];
  SL_Bus_geometry_msgs_Vector3 linear_acceleration;
  real_T linear_acceleration_covariance[9];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_qfomatEQOl7mLQ02Mpt2VE_
#define DEFINED_TYPEDEF_FOR_struct_qfomatEQOl7mLQ02Mpt2VE_

struct struct_qfomatEQOl7mLQ02Mpt2VE
{
  real_T T[48];
  real_T tau;
  real_T b0;
  real_T a1;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_72FZU0bzvPLwZ2S2uz9PiD_
#define DEFINED_TYPEDEF_FOR_struct_72FZU0bzvPLwZ2S2uz9PiD_

struct struct_72FZU0bzvPLwZ2S2uz9PiD
{
  real_T mass;
  real_T volume;
  real_T rho;
  real_T g;
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

#ifndef DEFINED_TYPEDEF_FOR_struct_ufqIMyHD2vQ8RfLYE7OdnG_
#define DEFINED_TYPEDEF_FOR_struct_ufqIMyHD2vQ8RfLYE7OdnG_

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

#ifndef DEFINED_TYPEDEF_FOR_struct_Fcl3OWFFDL64qkAOtsVYAC_
#define DEFINED_TYPEDEF_FOR_struct_Fcl3OWFFDL64qkAOtsVYAC_

struct struct_Fcl3OWFFDL64qkAOtsVYAC
{
  real_T trajMode;
  real_T singleWpts[5];
  real_T SpaceMouseMode[3];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_x7JWpgYpPywnYpZFC6VmZH_
#define DEFINED_TYPEDEF_FOR_struct_x7JWpgYpPywnYpZFC6VmZH_

struct struct_x7JWpgYpPywnYpZFC6VmZH
{
  real_T init;
  struct_ufqIMyHD2vQ8RfLYE7OdnG control;
  struct_Fcl3OWFFDL64qkAOtsVYAC traj;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_lestj3Cmqe3cAicxMA7epG_
#define DEFINED_TYPEDEF_FOR_struct_lestj3Cmqe3cAicxMA7epG_

struct struct_lestj3Cmqe3cAicxMA7epG
{
  real_T dvl;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_dhOFexlPAOq1XLxIBHN1J_
#define DEFINED_TYPEDEF_FOR_struct_dhOFexlPAOq1XLxIBHN1J_

struct struct_dhOFexlPAOq1XLxIBHN1J
{
  real_T WorldPosition[3];
  real_T qS2W[4];
  real_T qW2S[4];
  real_T Body_Velocity[3];
  real_T Angular_Rate[3];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_eJsqWOClzwG18rBvtrhWOG_
#define DEFINED_TYPEDEF_FOR_struct_eJsqWOClzwG18rBvtrhWOG_

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

#ifndef DEFINED_TYPEDEF_FOR_struct_TOFpsJJYcOBczOpEd57stD_
#define DEFINED_TYPEDEF_FOR_struct_TOFpsJJYcOBczOpEd57stD_

struct struct_TOFpsJJYcOBczOpEd57stD
{
  real_T Body_Velocity[3];
  real_T error[3];
  real_T enable;
};

#endif

#ifndef struct_b_dsp_SOSFilter_0_proc_contro_T
#define struct_b_dsp_SOSFilter_0_proc_contro_T

struct b_dsp_SOSFilter_0_proc_contro_T
{
  int32_T S0_isInitialized;
  real_T W0_ZERO_STATES[12];
  real_T W1_POLE_STATES[12];
  int32_T W2_PreviousNumChannels;
  real_T P0_ICRTP;
  real_T P1_RTP1COEFF[18];
  real_T P2_RTP2COEFF[18];
  real_T P3_RTP3COEFF[7];
  real_T P4_IC2RTP;
};

#endif                              /* struct_b_dsp_SOSFilter_0_proc_contro_T */

#ifndef struct_b_dspcodegen_SOSFilter_proc_c_T
#define struct_b_dspcodegen_SOSFilter_proc_c_T

struct b_dspcodegen_SOSFilter_proc_c_T
{
  int32_T isInitialized;
  boolean_T isSetupComplete;
  b_dsp_SOSFilter_0_proc_contro_T cSFunObject;
};

#endif                              /* struct_b_dspcodegen_SOSFilter_proc_c_T */

#ifndef struct_cell_wrap_proc_control_lite_T
#define struct_cell_wrap_proc_control_lite_T

struct cell_wrap_proc_control_lite_T
{
  uint32_T f1[8];
};

#endif                                /* struct_cell_wrap_proc_control_lite_T */

#ifndef struct_dsp_simulink_HighpassFilter_p_T
#define struct_dsp_simulink_HighpassFilter_p_T

struct dsp_simulink_HighpassFilter_p_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  cell_wrap_proc_control_lite_T inputVarSize;
  int32_T NumChannels;
  b_dspcodegen_SOSFilter_proc_c_T *FilterObj;
  b_dspcodegen_SOSFilter_proc_c_T _pobj0;
};

#endif                              /* struct_dsp_simulink_HighpassFilter_p_T */

#ifndef struct_b_dsp_FIRFilter_0_proc_contro_T
#define struct_b_dsp_FIRFilter_0_proc_contro_T

struct b_dsp_FIRFilter_0_proc_contro_T
{
  int32_T S0_isInitialized;
  real_T W0_states[139];
  real_T W1_simContextBuf[278];
  real_T W2_simRevCoeff[140];
  int32_T W3_halideSimTBBGrainSize;
  real_T P0_InitialStates;
  real_T P1_Coefficients[140];
};

#endif                              /* struct_b_dsp_FIRFilter_0_proc_contro_T */

#ifndef struct_b_dspcodegen_FIRFilter_proc_c_T
#define struct_b_dspcodegen_FIRFilter_proc_c_T

struct b_dspcodegen_FIRFilter_proc_c_T
{
  int32_T isInitialized;
  boolean_T isSetupComplete;
  b_dsp_FIRFilter_0_proc_contro_T cSFunObject;
};

#endif                              /* struct_b_dspcodegen_FIRFilter_proc_c_T */

#ifndef struct_dsp_simulink_LowpassFilter_pr_T
#define struct_dsp_simulink_LowpassFilter_pr_T

struct dsp_simulink_LowpassFilter_pr_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  cell_wrap_proc_control_lite_T inputVarSize;
  int32_T NumChannels;
  b_dspcodegen_FIRFilter_proc_c_T *FilterObj;
  b_dspcodegen_FIRFilter_proc_c_T _pobj0;
};

#endif                              /* struct_dsp_simulink_LowpassFilter_pr_T */

#ifndef struct_dsp_simulink_MovingAverage_pr_T
#define struct_dsp_simulink_MovingAverage_pr_T

struct dsp_simulink_MovingAverage_pr_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap_proc_control_lite_T inputVarSize;
  int32_T NumChannels;
  int32_T FrameLength;
  real_T pCumSum;
  real_T pCumSumRev[9];
  real_T pCumRevIndex;
  real_T pModValueRev;
};

#endif                              /* struct_dsp_simulink_MovingAverage_pr_T */

#ifndef struct_dsp_simulink_MovingAverage_e_T
#define struct_dsp_simulink_MovingAverage_e_T

struct dsp_simulink_MovingAverage_e_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap_proc_control_lite_T inputVarSize;
  int32_T NumChannels;
  int32_T FrameLength;
  real_T pCumSum;
  real_T pCumSumRev[4];
  real_T pCumRevIndex;
  real_T pModValueRev;
};

#endif                               /* struct_dsp_simulink_MovingAverage_e_T */

#ifndef struct_dsp_simulink_MovingAverage_e3_T
#define struct_dsp_simulink_MovingAverage_e3_T

struct dsp_simulink_MovingAverage_e3_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap_proc_control_lite_T inputVarSize;
  int32_T NumChannels;
  int32_T FrameLength;
  real_T pCumSum;
  real_T pCumSumRev[49];
  real_T pCumRevIndex;
  real_T pModValueRev;
};

#endif                              /* struct_dsp_simulink_MovingAverage_e3_T */

/* Custom Type definition for MATLABSystem: '<S284>/SourceBlock' */
#include "rmw/qos_profiles.h"
#ifndef struct_sJ4ih70VmKcvCeguWN0mNVF
#define struct_sJ4ih70VmKcvCeguWN0mNVF

struct sJ4ih70VmKcvCeguWN0mNVF
{
  real_T sec;
  real_T nsec;
};

#endif                                 /* struct_sJ4ih70VmKcvCeguWN0mNVF */

#ifndef struct_ros_slros2_internal_block_Pub_T
#define struct_ros_slros2_internal_block_Pub_T

struct ros_slros2_internal_block_Pub_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T QOSAvoidROSNamespaceConventions;
};

#endif                              /* struct_ros_slros2_internal_block_Pub_T */

#ifndef struct_e_robotics_slcore_internal_bl_T
#define struct_e_robotics_slcore_internal_bl_T

struct e_robotics_slcore_internal_bl_T
{
  int32_T __dummy;
};

#endif                              /* struct_e_robotics_slcore_internal_bl_T */

#ifndef struct_ros_slros2_internal_block_Cur_T
#define struct_ros_slros2_internal_block_Cur_T

struct ros_slros2_internal_block_Cur_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  e_robotics_slcore_internal_bl_T SampleTimeHandler;
};

#endif                              /* struct_ros_slros2_internal_block_Cur_T */

#ifndef struct_ros_slros2_internal_block_Get_T
#define struct_ros_slros2_internal_block_Get_T

struct ros_slros2_internal_block_Get_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  e_robotics_slcore_internal_bl_T SampleTimeHandler;
};

#endif                              /* struct_ros_slros2_internal_block_Get_T */

#ifndef struct_ros_slros2_internal_block_Sub_T
#define struct_ros_slros2_internal_block_Sub_T

struct ros_slros2_internal_block_Sub_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T QOSAvoidROSNamespaceConventions;
};

#endif                              /* struct_ros_slros2_internal_block_Sub_T */

/* Custom Type definition for MATLAB Function: '<S127>/NLMPC' */
#ifndef struct_sG8JZ69axY52WWR6RKyApQC_proc__T
#define struct_sG8JZ69axY52WWR6RKyApQC_proc__T

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

#endif                              /* struct_sG8JZ69axY52WWR6RKyApQC_proc__T */

#ifndef struct_s7RdrPWkr8UPAUyTdDJkLaG_proc__T
#define struct_s7RdrPWkr8UPAUyTdDJkLaG_proc__T

struct s7RdrPWkr8UPAUyTdDJkLaG_proc__T
{
  boolean_T gradOK;
  boolean_T fevalOK;
  boolean_T done;
  boolean_T stepAccepted;
  boolean_T failedLineSearch;
  int32_T stepType;
};

#endif                              /* struct_s7RdrPWkr8UPAUyTdDJkLaG_proc__T */

#ifndef struct_matlabshared_tracking_interna_T
#define struct_matlabshared_tracking_interna_T

struct matlabshared_tracking_interna_T
{
  int32_T isInitialized;
};

#endif                              /* struct_matlabshared_tracking_interna_T */

#ifndef struct_matlabshared_tracking_inter_h_T
#define struct_matlabshared_tracking_inter_h_T

struct matlabshared_tracking_inter_h_T
{
  int32_T isInitialized;
};

#endif                              /* struct_matlabshared_tracking_inter_h_T */

#ifndef struct_quaternion_proc_control_lite_T
#define struct_quaternion_proc_control_lite_T

struct quaternion_proc_control_lite_T
{
  real_T a;
  real_T b;
  real_T c;
  real_T d;
};

#endif                               /* struct_quaternion_proc_control_lite_T */

#ifndef struct_Vector2DoubleArray_proc_contr_T
#define struct_Vector2DoubleArray_proc_contr_T

struct Vector2DoubleArray_proc_contr_T
{
  real_T lastValues[8];
};

#endif                              /* struct_Vector2DoubleArray_proc_contr_T */

#ifndef struct_Vector2DoubleArray_proc_con_h_T
#define struct_Vector2DoubleArray_proc_con_h_T

struct Vector2DoubleArray_proc_con_h_T
{
  real_T lastValues[13];
};

#endif                              /* struct_Vector2DoubleArray_proc_con_h_T */

#ifndef struct_Vector2DoubleArray_proc_co_hp_T
#define struct_Vector2DoubleArray_proc_co_hp_T

struct Vector2DoubleArray_proc_co_hp_T
{
  real_T lastValues[6];
};

#endif                              /* struct_Vector2DoubleArray_proc_co_hp_T */

#ifndef struct_Vector2DoubleArray_proc_c_hpq_T
#define struct_Vector2DoubleArray_proc_c_hpq_T

struct Vector2DoubleArray_proc_c_hpq_T
{
  real_T lastValues[3];
};

#endif                              /* struct_Vector2DoubleArray_proc_c_hpq_T */

#ifndef struct_Vector2DoubleArray_proc__hpq2_T
#define struct_Vector2DoubleArray_proc__hpq2_T

struct Vector2DoubleArray_proc__hpq2_T
{
  real_T lastValues[9];
};

#endif                              /* struct_Vector2DoubleArray_proc__hpq2_T */

#ifndef struct_rosCommandManager_proc_contro_T
#define struct_rosCommandManager_proc_contro_T

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

#endif                              /* struct_rosCommandManager_proc_contro_T */

#ifndef struct_TrimPlant_proc_control_lite_T
#define struct_TrimPlant_proc_control_lite_T

struct TrimPlant_proc_control_lite_T
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

#endif                                /* struct_TrimPlant_proc_control_lite_T */

#ifndef struct_OpenLoopController_proc_contr_T
#define struct_OpenLoopController_proc_contr_T

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

#endif                              /* struct_OpenLoopController_proc_contr_T */

/* Custom Type definition for MATLAB Function: '<S127>/NLMPC' */
#ifndef struct_somzaGboVhDG7PNQS6E98jD_proc__T
#define struct_somzaGboVhDG7PNQS6E98jD_proc__T

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

#endif                              /* struct_somzaGboVhDG7PNQS6E98jD_proc__T */

#ifndef struct_mpcManager_proc_control_lite_T
#define struct_mpcManager_proc_control_lite_T

struct mpcManager_proc_control_lite_T
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

#endif                               /* struct_mpcManager_proc_control_lite_T */

#ifndef struct_ProcPlannerManager_proc_contr_T
#define struct_ProcPlannerManager_proc_contr_T

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

#endif                              /* struct_ProcPlannerManager_proc_contr_T */

#ifndef struct_AddPose_proc_control_lite_T
#define struct_AddPose_proc_control_lite_T

struct AddPose_proc_control_lite_T
{
  real_T i;
  real_T poseList[18];
  real_T initcond[7];
};

#endif                                 /* struct_AddPose_proc_control_lite_T */

#ifndef struct_TrajectoryManager_proc_contro_T
#define struct_TrajectoryManager_proc_contro_T

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

#endif                              /* struct_TrajectoryManager_proc_contro_T */

#ifndef struct_sqZuOXvj3QtPO9QwF8LnDoG_proc__T
#define struct_sqZuOXvj3QtPO9QwF8LnDoG_proc__T

struct sqZuOXvj3QtPO9QwF8LnDoG_proc__T
{
  real_T breaks[4];
  real_T coefs[36];
};

#endif                              /* struct_sqZuOXvj3QtPO9QwF8LnDoG_proc__T */

#ifndef struct_cell_proc_control_lite_T
#define struct_cell_proc_control_lite_T

struct cell_proc_control_lite_T
{
  real_T f1[6];
  real_T f2[2];
};

#endif                                 /* struct_cell_proc_control_lite_T */

/* Custom Type definition for MATLAB Function: '<S127>/NLMPC' */
#ifndef struct_s_WVbWSSvCeJzx5TXXa9L1l_proc__T
#define struct_s_WVbWSSvCeJzx5TXXa9L1l_proc__T

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

#endif                              /* struct_s_WVbWSSvCeJzx5TXXa9L1l_proc__T */

/* Custom Type definition for MATLAB Function: '<S127>/NLMPC' */
#ifndef struct_s_z8miyzCNLMZx998HtZciUB_proc_T
#define struct_s_z8miyzCNLMZx998HtZciUB_proc_T

struct s_z8miyzCNLMZx998HtZciUB_proc_T
{
  coder::bounded_array<real_T, 1792420U, 2U> workspace_float;
  coder::bounded_array<int32_T, 1829U, 1U> workspace_int;
  coder::bounded_array<int32_T, 1829U, 1U> workspace_sort;
};

#endif                              /* struct_s_z8miyzCNLMZx998HtZciUB_proc_T */

/* Custom Type definition for MATLAB Function: '<S127>/NLMPC' */
#ifndef struct_s_PAtG1CW05sRYOWrqzwRQyC_proc_T
#define struct_s_PAtG1CW05sRYOWrqzwRQyC_proc_T

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

#endif                              /* struct_s_PAtG1CW05sRYOWrqzwRQyC_proc_T */

/* Custom Type definition for MATLAB Function: '<S127>/NLMPC' */
#ifndef struct_s_bsf2Fsale81D2LTDCKuKhG_proc_T
#define struct_s_bsf2Fsale81D2LTDCKuKhG_proc_T

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

#endif                              /* struct_s_bsf2Fsale81D2LTDCKuKhG_proc_T */

/* Custom Type definition for MATLAB Function: '<S127>/NLMPC' */
#ifndef struct_s_o1KzuWoPqzc62zOgqamCNH_proc_T
#define struct_s_o1KzuWoPqzc62zOgqamCNH_proc_T

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

#endif                              /* struct_s_o1KzuWoPqzc62zOgqamCNH_proc_T */

#ifndef struct_s_962gqykB8vLiRVqsLdGQIG_proc_T
#define struct_s_962gqykB8vLiRVqsLdGQIG_proc_T

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

#endif                              /* struct_s_962gqykB8vLiRVqsLdGQIG_proc_T */

/* Custom Type definition for MATLAB Function: '<S127>/NLMPC' */
#ifndef struct_s_qYIvDqP9yRqtt40IDZ89JG_proc_T
#define struct_s_qYIvDqP9yRqtt40IDZ89JG_proc_T

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

#endif                              /* struct_s_qYIvDqP9yRqtt40IDZ89JG_proc_T */

#ifndef struct_sumhYdZsdukPgvAXm7nzHOD_proc__T
#define struct_sumhYdZsdukPgvAXm7nzHOD_proc__T

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

#endif                              /* struct_sumhYdZsdukPgvAXm7nzHOD_proc__T */

#ifndef struct_s_xJmQKnCTzvv6aUzMZcIqsF_proc_T
#define struct_s_xJmQKnCTzvv6aUzMZcIqsF_proc_T

struct s_xJmQKnCTzvv6aUzMZcIqsF_proc_T
{
  s_qYIvDqP9yRqtt40IDZ89JG_proc_T runtimedata;
  sumhYdZsdukPgvAXm7nzHOD_proc__T userdata;
};

#endif                              /* struct_s_xJmQKnCTzvv6aUzMZcIqsF_proc_T */

#ifndef struct_anonymous_function_proc_contr_T
#define struct_anonymous_function_proc_contr_T

struct anonymous_function_proc_contr_T
{
  s_xJmQKnCTzvv6aUzMZcIqsF_proc_T workspace;
};

#endif                              /* struct_anonymous_function_proc_contr_T */

#ifndef struct_coder_internal_stickyStruct_1_T
#define struct_coder_internal_stickyStruct_1_T

struct coder_internal_stickyStruct_1_T
{
  anonymous_function_proc_contr_T b_value;
};

#endif                              /* struct_coder_internal_stickyStruct_1_T */

#ifndef struct_coder_internal_stickyStruct_n_T
#define struct_coder_internal_stickyStruct_n_T

struct coder_internal_stickyStruct_n_T
{
  anonymous_function_proc_contr_T b_value;
  coder_internal_stickyStruct_1_T next;
};

#endif                              /* struct_coder_internal_stickyStruct_n_T */

#ifndef struct_coder_internal_stickyStruct_d_T
#define struct_coder_internal_stickyStruct_d_T

struct coder_internal_stickyStruct_d_T
{
  coder_internal_stickyStruct_n_T next;
};

#endif                              /* struct_coder_internal_stickyStruct_d_T */

#ifndef struct_coder_internal_stickyStruct_f_T
#define struct_coder_internal_stickyStruct_f_T

struct coder_internal_stickyStruct_f_T
{
  int32_T b_value;
  coder_internal_stickyStruct_d_T next;
};

#endif                              /* struct_coder_internal_stickyStruct_f_T */

#ifndef struct_coder_internal_stickyStruct_c_T
#define struct_coder_internal_stickyStruct_c_T

struct coder_internal_stickyStruct_c_T
{
  coder_internal_stickyStruct_f_T next;
};

#endif                              /* struct_coder_internal_stickyStruct_c_T */

#ifndef struct_coder_internal_stickyStruct_i_T
#define struct_coder_internal_stickyStruct_i_T

struct coder_internal_stickyStruct_i_T
{
  coder_internal_stickyStruct_c_T next;
};

#endif                              /* struct_coder_internal_stickyStruct_i_T */

#ifndef struct_coder_internal_stickyStruc_iz_T
#define struct_coder_internal_stickyStruc_iz_T

struct coder_internal_stickyStruc_iz_T
{
  coder_internal_stickyStruct_i_T next;
};

#endif                              /* struct_coder_internal_stickyStruc_iz_T */

#ifndef struct_coder_internal_stickyStruct_j_T
#define struct_coder_internal_stickyStruct_j_T

struct coder_internal_stickyStruct_j_T
{
  coder_internal_stickyStruc_iz_T next;
};

#endif                              /* struct_coder_internal_stickyStruct_j_T */

#ifndef struct_coder_internal_stickyStruct_2_T
#define struct_coder_internal_stickyStruct_2_T

struct coder_internal_stickyStruct_2_T
{
  coder_internal_stickyStruct_j_T next;
};

#endif                              /* struct_coder_internal_stickyStruct_2_T */

#ifndef struct_s_FtDkUjnZiZaWW3T7JWXLsD_proc_T
#define struct_s_FtDkUjnZiZaWW3T7JWXLsD_proc_T

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

#endif                              /* struct_s_FtDkUjnZiZaWW3T7JWXLsD_proc_T */

#ifndef struct_robotics_slcore_internal_bloc_T
#define struct_robotics_slcore_internal_bloc_T

struct robotics_slcore_internal_bloc_T
{
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  cell_wrap_proc_control_lite_T inputVarSize[4];
  real_T TimeScaling[33];
};

#endif                              /* struct_robotics_slcore_internal_bloc_T */

#ifndef struct_robotics_slcore_internal_bl_h_T
#define struct_robotics_slcore_internal_bl_h_T

struct robotics_slcore_internal_bl_h_T
{
  boolean_T tunablePropertyChanged[5];
  int32_T isInitialized;
  boolean_T TunablePropsChanged;
  cell_wrap_proc_control_lite_T inputVarSize[3];
  real_T VelocityBoundaryCondition[6];
  real_T AccelerationBoundaryCondition[10];
  sqZuOXvj3QtPO9QwF8LnDoG_proc__T PPStruct;
  sqZuOXvj3QtPO9QwF8LnDoG_proc__T PPDStruct;
  sqZuOXvj3QtPO9QwF8LnDoG_proc__T PPDDStruct;
  cell_proc_control_lite_T PrevOptInputs;
  boolean_T PPFormUpdatedNeeded;
};

#endif                              /* struct_robotics_slcore_internal_bl_h_T */

/* Parameters for system: '<S35>/Enabled Subsystem' */
typedef struct P_EnabledSubsystem_proc_contr_T_ P_EnabledSubsystem_proc_contr_T;

/* Parameters for system: '<S300>/Enabled Subsystem' */
typedef struct P_EnabledSubsystem_proc_con_p_T_ P_EnabledSubsystem_proc_con_p_T;

/* Parameters for system: '<S301>/Enabled Subsystem' */
typedef struct P_EnabledSubsystem_proc_co_pu_T_ P_EnabledSubsystem_proc_co_pu_T;

/* Parameters for system: '<S302>/Enabled Subsystem' */
typedef struct P_EnabledSubsystem_proc_con_m_T_ P_EnabledSubsystem_proc_con_m_T;

/* Parameters (default storage) */
typedef struct P_proc_control_lite_T_ P_proc_control_lite_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_proc_control_lite_T RT_MODEL_proc_control_lite_T;

#endif                                 /* proc_control_lite_types_h_ */
