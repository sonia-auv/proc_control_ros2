//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: proc_control.h
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.202
// Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
// C/C++ source code generated on : Wed Nov 27 16:37:06 2024
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef proc_control_h_
#define proc_control_h_
#include <string.h>
#include <cstdio>
#include "rtwtypes.h"
#include "slros2_initialize.h"
#include "proc_control_types.h"
#include "rmw/qos_profiles.h"
#include "coder_array.h"

extern "C"
{

#include "rt_nonfinite.h"

}

extern "C"
{

#include "rtGetInf.h"

}

extern "C"
{

#include "rtGetNaN.h"

}

#include <stddef.h>
#include "zero_crossing_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
struct B_proc_control_T {
  coder::array<uint16_T,1> b_Mrows;
  coder::array<real_T,2> b_Ac;
  coder::array<real_T,2> b_Mx;
  coder::array<real_T,2> b_Mu1;
  coder::array<real_T,2> b_Mv;
  coder::array<real_T,1> rseq;
  coder::array<real_T,1> vseq;
  coder::array<real_T,1> b_Mlim;
  coder::array<real_T,1> Bc;
  coder::array<real_T,1> r;
  coder::array<real_T,1> r1;
  coder::array<real_T,1> r2;
  coder::array<real_T,1> r4;
  coder::array<real_T,1> r5;
  coder::array<real_T,1> r6;
  coder::array<real_T,1> r7;
  coder::array<real_T,1> r8;
  coder::array<real_T,1> a__1;
  coder::array<real_T,1> cTol;
  coder::array<int32_T,1> iC;
  coder::array<boolean_T,1> r3;
  coder::array<boolean_T,1> b_iA;
  coder::array<real_T,3> Bu;
  coder::array<real_T,3> Bv;
  coder::array<real_T,3> Dv;
  s_KPwpEZDfdzkqudEdVwjGjF_proc_T TrialState;
  s_PAtG1CW05sRYOWrqzwRQyC_proc_T WorkingSet;
  s_PAtG1CW05sRYOWrqzwRQyC_proc_T b_WorkingSet;
  s_PAtG1CW05sRYOWrqzwRQyC_proc_T c_WorkingSet;
  s_o1KzuWoPqzc62zOgqamCNH_proc_T QRManager;
  s_z8miyzCNLMZx998HtZciUB_proc_T memspace;
  s_bsf2Fsale81D2LTDCKuKhG_proc_T QPObjective;
  s_962gqykB8vLiRVqsLdGQIG_proc_T CholManager;
  real_T y_data[3345241];
  real_T B_data[1792420];
  real_T b_this[78013];
  real_T b_this_m[78000];
  real_T A_data[67520];
  real_T Mu_data[46400];
  real_T Mu_data_c[46400];
  real_T JacCineqTrans_data[36140];
  real_T b_varargin_1_data[36140];
  real_T a__4_data[36140];
  real_T Jx[33800];
  real_T Jx_data[33800];
  real_T varargin_1_data[33800];
  real_T Au[25600];
  real_T Auf_data[25600];
  real_T tmp_data[20800];
  real_T unusedExpr[19321];
  real_T JacCeqTrans[18070];
  real_T JacEqTrans_tmp[18070];
  real_T Jx_k[16900];
  real_T Sx_data[12180];
  real_T Su_data[10400];
  real_T SuJm_data[10400];
  real_T y_data_c[10400];
  real_T varargin_2_data[10400];
  real_T a[10400];
  real_T Jmv[10400];
  real_T tmp_data_b[6561];
  real_T tmp_data_p[6561];
  real_T tmp_data_c[6561];
  real_T RLinv_data[6561];
  real_T b_D_data[6561];
  real_T b_H_data[6561];
  real_T b_H_data_f[6561];
  real_T b_H_data_g[6561];
  real_T b_Linv_data[6561];
  real_T tmp_data_g[6561];
  real_T TL_data[6561];
  real_T Q_data[6561];
  real_T R_data[6561];
  real_T b_A_data[6561];
  real_T tmp_data_m[6561];
  real_T tmp_data_n[6561];
  real_T tmp_data_pp[6561];
  real_T in1_data[6561];
  real_T tmp_data_l[6400];
  real_T Jm_data[6400];
  real_T I2Jm_data[6400];
  real_T I3_data[6400];
  real_T varargin_4_data[6400];
  real_T varargin_6_data[6400];
  real_T tmp_data_j[6400];
  real_T Mv_aux_data[6380];
  real_T Mv_aux_data_d[6380];
  real_T b_A[4851];
  real_T o[4746];
  real_T Su1_data[4640];
  real_T AA[3969];
  coder_internal_stickyStruct_2_T FcnEvaluator;
  real_T b_C[3003];
  real_T Sx_data_g[2730];
  real_T b_Sx[2730];
  real_T tmp_data_ld[2560];
  real_T tmp_data_d[2560];
  real_T dv[2486];
  real_T ct[2166];
  real_T varargin_2_data_d[2080];
  real_T h[2034];
  real_T ct_l[1959];
  real_T A[1859];                      // '<S72>/MATLAB Function'
  real_T C[1859];                      // '<S72>/MATLAB Function'
  real_T Bu_o[1848];
  real_T y_data_b[1829];
  real_T y_data_n[1829];
  real_T work_data[1829];
  real_T work_data_b[1829];
  real_T vn1_data[1829];
  real_T vn2_data[1829];
  real_T work_data_l[1829];
  real_T y_data_h[1829];
  real_T y_data_bn[1829];
  real_T y_data_d[1829];
  real_T y_data_e[1829];
  real_T y_data_bj[1829];
  real_T y_data_j[1829];
  real_T q[1808];
  real_T Kx_data[1680];
  real_T ct_f[1640];
  real_T Hv_data[1430];
  real_T varargin_1_data_a[1430];
  real_T b_Hv[1430];
  s_qYIvDqP9yRqtt40IDZ89JG_proc_T CostFcn_workspace_runtimedata;
  s_qYIvDqP9yRqtt40IDZ89JG_proc_T ConFcn_workspace_runtimedata;
  real_T ct_j[1260];
  real_T CovMat[1156];
  real_T B[1144];                      // '<S72>/MATLAB Function'
  real_T varargin_1_data_j[1040];
  real_T Su1_data_o[1040];
  real_T b_SuJm[1040];
  real_T b_Su1[1040];
  real_T WySuJm[1040];
  real_T Jmv_n[1040];
  real_T ct_i[1016];
  real_T ct_o[1016];
  real_T b_tmp[986];
  real_T m_data[980];
  int8_T b_data[6561];
  real_T ct_n[812];
  real_T ct_m[805];
  real_T ct_c[804];
  int8_T a_m[6400];
  real_T tmp_data_m3[640];
  real_T tmp_data_ja[640];
  real_T I1_data[640];
  real_T Ku1_data[640];
  real_T I2Jm[640];
  real_T WuI2Jm[640];
  real_T WduJm[640];
  real_T tmp_data_h[640];
  real_T tmp_data_c0[640];
  real_T b_B[630];
  real_T Mlimfull_data[580];
  real_T Vfull_data[580];
  real_T in4[445];
  real_T b_A_c[441];
  real_T AA_p[441];
  real_T Mlimfull0[436];
  real_T Vfull0[436];
  real_T in3[435];
  real_T in3_p[433];
  SL_Bus_std_msgs_Float64MultiArray In1;// '<S174>/In1'
  SL_Bus_std_msgs_Float64MultiArray rtb_SourceBlock_o2_a;
  SL_Bus_sonia_common_ros2_MpcInfo BusAssignment;// '<S21>/Bus Assignment'
  real_T b_D[390];
  SL_Bus_sonia_common_ros2_MpcGains In1_j;// '<S173>/In1'
  SL_Bus_sonia_common_ros2_MpcGains rtb_SourceBlock_o2_h_e;
  real_T a__1_a[338];
  real_T y_a[338];
  real_T B_data_i[320];
  SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint In1_i;// '<S248>/In1'
  SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint rtb_SourceBlock_o2_j_l;
  real_T Nk[273];
  real_T b_C_o[273];
  real_T CA[273];
  real_T CA_o[273];
  real_T b_C_i[273];
  real_T a__1_f[260];
  real_T y_i[260];
  real_T Cineq_data[260];
  real_T b_data_f[260];
  real_T varargin_1_data_g[260];
  real_T b_c[260];
  real_T a__3_data[260];
  real_T varargin_1_data_c[260];
  real_T b_c_o[260];
  real_T b_c_data[260];
  real_T Je_data[260];
  sumhYdZsdukPgvAXm7nzHOD_proc__T expl_temp;
  sumhYdZsdukPgvAXm7nzHOD_proc__T expl_temp_l;
  real_T Bv_m[231];
  real_T b_Mlim_m[226];
  real_T Bc_c[226];
  real_T a__1_fm[226];
  real_T cTol_p[226];
  real_T a__1_e[208];
  real_T y_o[208];
  real_T a__1_h[182];
  real_T y_l[182];
  real_T A_h[169];
  real_T y_m[169];
  real_T dv1[169];
  real_T Ac[169];
  real_T Ac_m[169];
  real_T A2[169];
  real_T A4[169];
  real_T A6[169];
  real_T T[169];
  real_T A4_h[169];
  real_T dv2[169];
  real_T a_c[169];
  real_T cBuffer[169];
  real_T aBuffer[169];
  real_T cBuffer_k[169];
  real_T cBuffer_p[169];
  real_T A2_p[169];
  real_T A4_p[169];
  real_T A6_a[169];
  real_T T_j[169];
  real_T A4_e[169];
  real_T dv3[169];
  real_T b_a[169];
  real_T cBuffer_o[169];
  real_T aBuffer_b[169];
  real_T cBuffer_a[169];
  real_T cBuffer_g[169];
  real_T Ak[169];
  real_T Ak1[169];
  real_T b_Kx[168];
  int16_T s_data[580];
  real_T Dv_e[143];
  real_T Y[143];                       // '<S72>/MATLAB Function'
  real_T X[143];                       // '<S72>/MATLAB Function'
  real_T DX[143];                      // '<S72>/MATLAB Function'
  real_T CA_data[143];
  real_T X_f[143];
  real_T b_X[143];
  real_T X_h[143];
  real_T X_e[143];
  real_T X_c[143];
  real_T b_X_a[143];
  real_T b_X_d[143];
  real_T a__1_af[140];
  real_T K[140];
  real_T z[139];
  real_T rtb_Selector_m_p[139];
  real_T dv4[139];
  real_T b_x[139];
  int32_T ineqRange_data[260];
  real_T rseq_m[130];
  real_T Ceq[130];
  real_T c[130];
  real_T b_x_o[130];
  real_T gfX[130];
  real_T z_n[130];
  real_T VectorConcatenate[128];       // '<S21>/Vector Concatenate'
  real_T VectorConcatenate1[128];      // '<S21>/Vector Concatenate1'
  real_T VectorConcatenate2[128];      // '<S21>/Vector Concatenate2'
  real_T VectorConcatenate3[128];      // '<S21>/Vector Concatenate3'
  SL_Bus_nav_msgs_Odometry BusCreator_l;// '<S9>/Bus Creator'
  SL_Bus_nav_msgs_Odometry BusAssignment_k;// '<S78>/Bus Assignment'
  real_T Selector_m[117];              // '<S149>/Selector'
  int32_T iC_p[226];
  real_T dv5[104];
  real_T rtb_B_p[104];
  real_T Sum_f[104];
  real_T Bc_i[104];
  real_T b_Su1_o[104];
  real_T w_data[100];
  physicsConstants BusCreator;         // '<S47>/Bus Creator'
  real_T DataTypeConversion_uState[95];// '<S221>/DataTypeConversion_uState'
  real_T b_dHdx[91];
  real_T K_k[91];
  real_T C_i[91];
  real_T U[88];                        // '<S72>/MATLAB Function'
  real_T U_o[88];
  real_T b_U[88];
  real_T U_m[88];
  real_T b_Kv[88];
  real_T U_c[88];
  real_T U_f[88];
  real_T b_U_h[88];
  real_T Umv[88];
  real_T b_U_m[88];
  real_T g[81];
  real_T zopt_data[81];
  real_T f_data[81];
  real_T L[81];
  real_T b_D_a[81];
  real_T b_H[81];
  real_T U_k[81];
  real_T RLinv[81];
  real_T TL[81];
  real_T R[81];
  real_T b_A_p[81];
  real_T r_data[81];
  real_T AcRow_data[81];
  real_T z_data[81];
  real_T tau_data[81];
  real_T b_Ac_data[81];
  real_T work_data_bp[81];
  real_T b_utarget[80];
  real_T dv6[80];
  real_T utargetseq_data[80];
  real_T a_ch[80];
  real_T gfU[80];
  real_T y_n[80];
  boolean_T isMrows_data[580];
  real_T Selector1_h[72];              // '<S149>/Selector1'
  int16_T tmp_data_i[260];
  int16_T tmp_data_my[260];
  real_T dv7[64];
  real_T dv8[64];
  real_T dv9[64];
  real_T y_tmp[64];
  real_T b_B_j[64];
  real_T b_Su1_e[64];
  real_T b_I1[64];
  SL_Bus_sensor_msgs_Imu In1_e;        // '<S30>/In1'
  SL_Bus_sensor_msgs_Imu In1_g;        // '<S41>/In1'
  SL_Bus_sensor_msgs_Imu rtb_SourceBlock_o2_n_m;
  boolean_T isMrows0[436];
  real_T Sy[49];
  real_T R_m[49];
  real_T a__1_j[48];
  real_T array_f[48];                  // '<S47>/MATLAB Function'
  real_T Tm[48];
  real_T T_a[48];
  real_T Tm_g[48];
  real_T constValues[41];
  real_T b_dHdx_n[39];
  real_T K_d[39];
  real_T C_n[39];
  real_T C_c[39];
  real_T modCoeffs[36];
  real_T dv10[36];
  real_T constValues_f[36];
  real_T dv11[36];
  real_T b_this_p[36];
  real_T Ac_p[36];
  real_T inputs[36];
  boolean_T icf[260];
  boolean_T icf_n[260];
  int8_T Je[260];
  char_T rtb_ASCIItoString_k[256];
  char_T Switch1_p[256];               // '<S13>/Switch1'
  char_T Switch1[256];                 // '<S110>/Switch1'
  boolean_T bv[226];
  SL_Bus_sonia_common_ros2_BodyVelocityDVL In1_m;// '<S31>/In1'
  SL_Bus_sonia_common_ros2_BodyVelocityDVL In1_iq;// '<S42>/In1'
  SL_Bus_sonia_common_ros2_BodyVelocityDVL rtb_SourceBlock_o2_p_n;
  int8_T Ck[169];
  int8_T val[169];
  real_T b_xoff[21];
  real_T rtb_X_e_o[21];
  real_T Transpose_b[18];              // '<S250>/Transpose'
  real_T Opt[18];
  real_T Rhs[18];
  boolean_T bv1[130];
  boolean_T bv2[130];
  char_T cv[128];
  sG8JZ69axY52WWR6RKyApQC_proc__T MeritFunction;
  int32_T ic[26];
  int32_T ic_g[26];
  real_T rtb_MATLABSystem_o10_c[13];
  real_T imvec[13];
  real_T z_c[13];
  real_T X_e_m[13];                    // '<S71>/MATLAB System'
  real_T DataStoreRead[13];
  real_T dv12[13];
  real_T CA_j[13];
  real_T x_dot_kk[13];
  real_T dv13[13];
  real_T w[13];
  real_T ic_k[13];
  real_T b_Wy[13];
  real_T ic_m[13];
  real_T w_p[13];
  real_T dv14[13];
  real_T ix[13];
  real_T obj_next_next_next_next_next_ne[13];
  real_T gfX_d[13];
  real_T ic_g4[13];
  real_T dv15[13];
  real_T dv16[13];
  real_T coefMat[12];
  real_T vseq_c[11];
  int8_T b[81];
  int32_T i_data[20];
  int32_T ii_data[20];
  Vector2DoubleArray_proc__pr35_T obj_lw;
  real_T twpt[9];
  real_T TmpSignalConversionAtMATL_d[9];// '<S238>/Enabled Subsystem'
  real_T twpt_c[9];
  real_T zopt[9];
  real_T varargin_1[9];
  real_T r_i[9];
  real_T z_d[9];
  real_T tau[9];
  real_T work[9];
  somzaGboVhDG7PNQS6E98jD_proc__T expl_temp_g;
  somzaGboVhDG7PNQS6E98jD_proc__T expl_temp_lg;
  real_T U_f1[8];
  real_T u_scale[8];                   // '<S79>/u_scale'
  real_T dv17[8];
  real_T dv18[8];
  real_T umax_incr[8];
  real_T umin_incr[8];
  real_T umvk[8];
  real_T duk[8];
  real_T b_Wu[8];
  real_T b_Wdu[8];
  real_T iu[8];
  real_T umvk_d[8];
  real_T duk_j[8];
  real_T gfU_i[8];
  SL_Bus_sonia_common_ros2_Pose rtb_SourceBlock_o2_ne_h;
  SL_Bus_geometry_msgs_Pose BusCreator_i;// '<S234>/Bus Creator'
  SL_Bus_geometry_msgs_Pose In1_gs;    // '<S64>/In1'
  SL_Bus_geometry_msgs_Pose rtb_SourceBlock_o2_m_n;
  real_T TmpSignalConversionAtMATLAB[7];
  real_T d[7];
  real_T d_o[7];
  int32_T iv[13];
  Vector2DoubleArray_proc_co_pr_T obj_n;
  Vector2DoubleArray_proc_co_pr_T obj_li;
  Vector2DoubleArray_proc_co_pr_T obj_d;
  int32_T blockFormat[12];
  int32_T blockFormat_c[12];
  SL_Bus_geometry_msgs_Twist In1_l;    // '<S246>/In1'
  SL_Bus_geometry_msgs_Twist rtb_SourceBlock_o2_g_b;
  real_T TSamp[6];                     // '<S145>/TSamp'
  real_T rtb_TSamp_e[6];
  real_T constValues_d[6];
  real_T constValues_i[6];
  real_T dv19[6];
  real_T n[4];
  real_T TmpSignalConversionAtSFunct[4];// '<S177>/MATLAB Function'
  real_T qt[4];
  int32_T iv1[8];
  int32_T gfU_tmp[8];
  quaternion_proc_control_T expl_temp_gs;
  quaternion_proc_control_T expl_temp_n;
  quaternion_proc_control_T expl_temp_l0;
  boolean_T icf_c[26];
  boolean_T icf_nc[26];
  Vector2DoubleArray_proc_c_pr3_T obj_n0;
  Vector2DoubleArray_proc_c_pr3_T obj_jm;
  Vector2DoubleArray_proc_c_pr3_T obj_bx;
  Vector2DoubleArray_proc_c_pr3_T obj_o4;
  Vector2DoubleArray_proc_c_pr3_T obj_k3;
  real_T sincos_o1[3];                 // '<S206>/sincos'
  real_T dv20[3];
  real_T dv21[3];
  real_T dv22[3];
  boolean_T corr[20];
  SL_Bus_sonia_common_ros2_MotorPwm BusCreator_g;// '<S2>/Bus Creator'
  SL_Bus_sonia_common_ros2_MotorPwm BusCreator1_g;// '<S2>/Bus Creator1'
  real_T dv23[2];
  real_T dv24[2];
  real_T dv25[2];
  real_T dv26[2];
  real_T dv27[2];
  real_T dv28[2];
  real_T dv29[2];
  real_T dv30[2];
  real_T dv31[2];
  real_T dv32[2];
  real_T dv33[2];
  real_T dv34[2];
  real_T dv35[2];
  real_T dv36[2];
  real_T dv37[2];
  real_T dv38[2];
  real_T dv39[2];
  real_T dv40[2];
  real_T dv41[2];
  real_T dv42[2];
  real_T dv43[2];
  real_T dv44[2];
  real_T dv45[2];
  real_T dv46[2];
  real_T dv47[2];
  real_T dv48[2];
  real_T dv49[2];
  real_T dv50[2];
  real_T dv51[2];
  real_T dv52[2];
  real_T dv53[2];
  real_T dv54[2];
  uint16_T pwm[8];                     // '<S70>/n-D Lookup Table1'
  uint8_T rows[13];
  uint8_T rows_d[13];
  boolean_T x[13];
  boolean_T x_p[13];
  int32_T Jx_size[3];
  int16_T WorkingSet_tmp[5];
  s7RdrPWkr8UPAUyTdDJkLaG_proc__T Flags;
  real_T Probe_o1;                     // '<S181>/Probe'
  real_T Transpose[48];                // '<S181>/Transpose'
  real_T Gain[3];                      // '<S236>/Gain'
  real_T Transpose_n[8];               // '<S70>/Transpose'
  real_T alive;                        // '<S68>/Merge'
  real_T MatrixConcatenate[2];         // '<S250>/Matrix Concatenate'
  real_T Selector[6];                  // '<S250>/Selector'
  real_T Selector1[8];                 // '<S250>/Selector1'
  real_T Selector4[7];                 // '<S250>/Selector4'
  real_T DataTypeConversion[6];        // '<S249>/Data Type Conversion'
  real_T DataTypeConversion1[2];       // '<S249>/Data Type Conversion1'
  real_T DataTypeConversion2;          // '<S249>/Data Type Conversion2'
  real_T zposition;                    // '<S178>/Sum'
  real_T Gain_l;                       // '<S208>/Gain'
  real_T Gain1;                        // '<S208>/Gain1'
  real_T Gain2;                        // '<S208>/Gain2'
  real_T Sum;                          // '<S208>/Sum'
  real_T Gain_o;                       // '<S209>/Gain'
  real_T Gain1_d;                      // '<S209>/Gain1'
  real_T Gain2_l;                      // '<S209>/Gain2'
  real_T Sum_n;                        // '<S209>/Sum'
  real_T Gain_d;                       // '<S210>/Gain'
  real_T Gain1_e;                      // '<S210>/Gain1'
  real_T Gain2_n;                      // '<S210>/Gain2'
  real_T Sum_l;                        // '<S210>/Sum'
  real_T enable_i;                     // '<S177>/MATLAB Function'
  real_T q0;                           // '<S206>/q0'
  real_T q1;                           // '<S206>/q1'
  real_T q2;                           // '<S206>/q2'
  real_T q3;                           // '<S206>/q3'
  real_T ywt[13];                      // '<S69>/MATLAB System'
  real_T mvwt[8];                      // '<S69>/MATLAB System'
  real_T dmwwt[8];                     // '<S69>/MATLAB System'
  real_T p;                            // '<S69>/MATLAB System'
  real_T m;                            // '<S69>/MATLAB System'
  real_T mvmin[8];                     // '<S69>/MATLAB System'
  real_T mvmax[8];                     // '<S69>/MATLAB System'
  real_T p_h;                          // '<S48>/Data Type Conversion'
  real_T m_a;                          // '<S48>/Data Type Conversion1'
  real_T timeInTol;                    // '<S49>/Get Parameter2'
  real_T angularTol;                   // '<S49>/Get Parameter1'
  real_T linearTol;                    // '<S49>/Get Parameter'
  real_T tmin;                         // '<S48>/Get Parameter3'
  real_T tmax;                         // '<S48>/Get Parameter2'
  real_T MV[8];                        // '<S54>/MATLAB System5'
  real_T MV_c[8];                      // '<S53>/MATLAB System5'
  real_T OV[13];                       // '<S53>/MATLAB System4'
  real_T MVR[8];                       // '<S53>/MATLAB System3'
  real_T MV_l[8];                      // '<S52>/MATLAB System5'
  real_T OV_l[13];                     // '<S52>/MATLAB System4'
  real_T MVR_c[8];                     // '<S52>/MATLAB System3'
  real_T MV_j[8];                      // '<S51>/MATLAB System5'
  real_T OV_c[13];                     // '<S51>/MATLAB System4'
  real_T MVR_a[8];                     // '<S51>/MATLAB System3'
  real_T MV_p[8];                      // '<S50>/MATLAB System4'
  real_T OV_d[13];                     // '<S50>/MATLAB System3'
  real_T MVR_cn[8];                    // '<S50>/MATLAB System1'
  real_T y;                            // '<S25>/MATLAB Function'
  real_T BufferToMakeInportVirtual_Inser[8];
  real_T WorldPosition[3];
                         // '<S1>/BusConversion_InsertedFor_Output_at_inport_0'
  real_T qS2W[4];        // '<S1>/BusConversion_InsertedFor_Output_at_inport_0'
  real_T BodyVelocity[3];// '<S1>/BusConversion_InsertedFor_Output_at_inport_0'
  real_T AngularRate[3]; // '<S1>/BusConversion_InsertedFor_Output_at_inport_0'
  real_T d_oi;
  real_T scale;
  real_T absxk;
  real_T t;
  real_T t32;
  real_T t33;
  real_T t34;
  real_T t39;
  real_T t40;
  real_T t41;
  real_T t42;
  real_T t43;
  real_T t44;
  real_T t45;
  real_T t55;
  real_T t59;
  real_T t61;
  real_T t68;
  real_T t60;
  real_T i;
  real_T j_data;
  real_T b_x_data;
  real_T t10;
  real_T t11;
  real_T t12;
  real_T t13;
  real_T t14;
  real_T t15;
  real_T t16;
  real_T t17;
  real_T t19;
  real_T t20;
  real_T t21;
  real_T t24;
  real_T t25;
  real_T t52;
  real_T t56;
  real_T t57;
  real_T t70;
  real_T residue;
  real_T linearScaling;
  real_T oc;
  real_T Product3_l;                   // '<S230>/Product3'
  real_T Product3_h;                   // '<S207>/Product3'
  real_T Product1_hg;                  // '<S207>/Product1'
  real_T Product2_j;                   // '<S207>/Product2'
  real_T Product_o;                    // '<S207>/Product'
  real_T n_data;
  real_T n_data_j;
  real_T n_c;
  real_T rtb_sincos_o2_idx_2;
  real_T rtb_sincos_o2_idx_1;
  real_T rtb_sincos_o2_idx_0;
  real_T q0_tmp;
  real_T t35_tmp;
  real_T t36_tmp;
  real_T t37_tmp;
  real_T scale_tmp;
  real_T t70_tmp;
  real_T t24_tmp;
  real_T t32_tmp;
  real_T t25_tmp;
  real_T t_tmp;
  real_T d_h;
  real_T d1;
  real_T d2;
  real_T d3;
  real_T d4;
  real_T d5;
  real_T d6;
  real_T d7;
  real_T d8;
  real_T d9;
  real_T d10;
  real_T d11;
  real_T d12;
  real_T d13;
  real_T d14;
  real_T d15;
  real_T d16;
  real_T d17;
  real_T d18;
  real_T d19;
  real_T d20;
  real_T d21;
  real_T d22;
  real_T d23;
  real_T d24;
  real_T d25;
  real_T d26;
  real_T d27;
  real_T d28;
  real_T d29;
  real_T d30;
  real_T d31;
  real_T d32;
  real_T d33;
  real_T d34;
  real_T d35;
  real_T d36;
  real_T A_tmp;
  real_T Sx_data_tmp;
  real_T b_p;
  real_T pny1;
  real_T CA_d;
  real_T bkj;
  real_T t5;
  real_T t6;
  real_T t15_c;
  real_T t16_p;
  real_T t17_p;
  real_T t18;
  real_T t19_a;
  real_T constMec_rg;
  real_T constMec_rg_o;
  real_T exptj;
  real_T d6_j;
  real_T eta1;
  real_T A4_pi;
  real_T e;
  real_T ed2;
  real_T b_c_ob;
  real_T scale_l;
  real_T absxk_k;
  real_T t_j;
  real_T smax;
  real_T s;
  real_T phi_alpha;
  real_T fs;
  real_T e_f;
  real_T wtYerr;
  real_T umvk_c;
  real_T duk_f;
  real_T wtYerr_tmp;
  real_T e_n;
  real_T runtimedata_OutputMax;
  real_T runtimedata_OutputMin;
  real_T normH;
  real_T s_i;
  real_T b_B_l;
  real_T WuI2Jm_i;
  real_T b_Jm;
  real_T rMin;
  real_T Xnorm0;
  real_T cMin;
  real_T cVal;
  real_T t_k;
  real_T beta1;
  real_T b_A_f;
  real_T RLinv_a;
  real_T scale_d;
  real_T absxk_e;
  real_T t_e;
  real_T e_b;
  real_T runtimedata_OutputMax_a;
  real_T runtimedata_OutputMin_i;
  real_T exptj_f;
  real_T d6_ji;
  real_T eta1_o;
  real_T A4_f;
  real_T e_o;
  real_T ed2_l;
  real_T t14_l;
  real_T t15_g;
  real_T qt_idx_0;
  real_T c_idx_0;
  real_T c_idx_1;
  real_T c_idx_2;
  real_T s_idx_0;
  real_T s_idx_1;
  real_T s_idx_2;
  real_T qt_idx_1;
  real_T inputs_d;
  real_T qt_idx_0_tmp;
  real_T t20_d;
  real_T t22;
  real_T t23;
  real_T t24_j;
  real_T t27;
  real_T t28;
  real_T t29;
  real_T t30;
  real_T t31;
  real_T t32_f;
  real_T t36;
  real_T t37;
  real_T t38;
  real_T t40_j;
  real_T t41_h;
  real_T t43_c;
  real_T t48;
  real_T t49;
  real_T t51;
  real_T t83;
  real_T t84;
  real_T t85;
  real_T t86;
  real_T t87;
  real_T t88;
  real_T t89;
  real_T t90;
  real_T t91;
  real_T t92;
  real_T t93;
  real_T t94;
  real_T t95;
  real_T t96;
  real_T t97;
  real_T t98;
  real_T t99;
  real_T t100;
  real_T t103;
  real_T t104;
  real_T t105;
  real_T t106;
  real_T t107;
  real_T t108;
  real_T t111;
  real_T t114;
  real_T t115;
  real_T t116;
  real_T t118;
  real_T t120;
  real_T in4_tmp;
  real_T in4_tmp_n;
  real_T in4_tmp_k;
  real_T in4_tmp_a;
  real_T in4_tmp_f;
  real_T t898;
  real_T t899;
  real_T t900;
  real_T t901;
  real_T ct_tmp;
  real_T t1164;
  real_T t1165;
  real_T t1166;
  real_T t1466;
  real_T t1488;
  real_T t1489;
  real_T t1490;
  real_T t1491;
  real_T t1492;
  real_T t1463;
  real_T t1464;
  real_T t1465;
  real_T t1524;
  real_T t1546;
  real_T t1526;
  real_T t1542;
  real_T t1546_tmp;
  real_T t1546_tmp_j;
  real_T t1543_tmp;
  real_T t1543_tmp_k;
  real_T t1542_tmp;
  real_T out1_tmp;
  real_T out1_tmp_b;
  real_T out1_tmp_h;
  real_T out1_tmp_e;
  real_T out1_tmp_hn;
  real_T out1_tmp_k;
  real_T out1_tmp_j;
  real_T out1_tmp_o;
  real_T out1_tmp_c;
  real_T out1_tmp_hw;
  real_T out1_tmp_i;
  real_T out1_tmp_p;
  real_T out1_tmp_f;
  real_T out1_tmp_ew;
  real_T out1_tmp_n;
  real_T out1_tmp_ho;
  real_T out1_tmp_hp;
  real_T out1_tmp_fn;
  real_T out1_tmp_iv;
  real_T out1_tmp_f4;
  real_T out1_tmp_cy;
  real_T out1_tmp_nn;
  real_T out1_tmp_he;
  real_T out1_tmp_kq;
  real_T out1_tmp_hz;
  real_T out1_tmp_be;
  real_T out1_tmp_os;
  real_T out1_tmp_nq;
  real_T out1_tmp_m;
  real_T out1_tmp_ku;
  real_T out1_tmp_jk;
  real_T out1_tmp_hc;
  real_T out1_tmp_f2;
  real_T out1_tmp_d;
  real_T out1_tmp_l;
  real_T out1_tmp_kg;
  real_T out1_tmp_ic;
  real_T out1_tmp_h5;
  real_T out1_tmp_mg;
  real_T out1_tmp_g;
  real_T out1_tmp_lf;
  real_T out1_tmp_m4;
  real_T out1_tmp_nt;
  real_T out1_tmp_gv;
  real_T out1_tmp_dj;
  real_T out1_tmp_mq;
  real_T out1_tmp_ft;
  real_T out1_tmp_gd;
  real_T out1_tmp_jc;
  real_T out1_tmp_cq;
  real_T out1_tmp_eg;
  real_T out1_tmp_mx;
  real_T out1_tmp_of;
  real_T out1_tmp_a;
  real_T out1_tmp_ji;
  real_T out1_tmp_ga;
  real_T out1_tmp_jkm;
  real_T out1_tmp_ee;
  real_T out1_tmp_jy;
  real_T out1_tmp_jb;
  real_T out1_tmp_gi;
  real_T out1_tmp_om;
  real_T out1_tmp_hm;
  real_T out1_tmp_c2;
  real_T out1_tmp_a0;
  real_T out1_tmp_lu;
  real_T out1_tmp_jcs;
  real_T out1_tmp_ib;
  real_T out1_tmp_mi;
  real_T out1_tmp_ftf;
  real_T out1_tmp_on;
  real_T out1_tmp_iz;
  real_T out1_tmp_e0;
  real_T out1_tmp_j0;
  real_T out1_tmp_tmp;
  real_T out1_tmp_tmp_o;
  real_T out1_tmp_tmp_f;
  real_T out1_tmp_m3;
  real_T out1_tmp_ax;
  real_T out1_tmp_hi;
  real_T out1_tmp_oc;
  real_T out1_tmp_hnt;
  real_T out1_tmp_j3;
  real_T out1_tmp_g3;
  real_T out1_tmp_jz;
  real_T out1_tmp_lg;
  real_T out1_tmp_kb;
  real_T out1_tmp_tmp_d;
  real_T out1_tmp_tmp_n;
  real_T out1_tmp_tmp_j;
  real_T out1_tmp_a3;
  real_T out1_tmp_hzv;
  real_T out1_tmp_iq;
  real_T out1_tmp_dn;
  real_T out1_tmp_bf;
  real_T out1_tmp_hj;
  real_T out1_tmp_pn;
  real_T out1_tmp_nk;
  real_T out1_tmp_jza;
  real_T out1_tmp_ot;
  real_T out1_tmp_bj;
  real_T out1_tmp_tmp_jk;
  real_T out1_tmp_tmp_e;
  real_T out1_tmp_tmp_i;
  real_T out1_tmp_ng;
  real_T out1_tmp_ie;
  real_T out1_tmp_p3;
  real_T out1_tmp_og;
  real_T out1_tmp_mz;
  real_T out1_tmp_otc;
  real_T out1_tmp_gz;
  real_T out1_tmp_ez;
  real_T out1_tmp_izd;
  real_T out1_tmp_gb;
  real_T out1_tmp_ge;
  real_T out1_tmp_gbr;
  real_T out1_tmp_gr;
  real_T out1_tmp_ca;
  real_T out1_tmp_kt;
  real_T out1_tmp_ds;
  real_T out1_tmp_kx;
  real_T out1_tmp_pd;
  real_T out1_tmp_p5;
  real_T out1_tmp_m4e;
  real_T out1_tmp_ktf;
  real_T out1_tmp_a0x;
  real_T out1_tmp_fto;
  real_T out1_tmp_ci;
  real_T out1_tmp_jkx;
  real_T out1_tmp_kbp;
  real_T out1_tmp_tmp_h;
  real_T out1_tmp_tmp_d1;
  real_T out1_tmp_j1;
  real_T out1_tmp_np;
  real_T out1_tmp_j0o;
  real_T out1_tmp_lc;
  real_T out1_tmp_ph;
  real_T out1_tmp_po;
  real_T out1_tmp_tmp_l;
  real_T out1_tmp_tmp_ld;
  real_T out1_tmp_tmp_hb;
  real_T out1_tmp_cg;
  real_T out1_tmp_g0;
  real_T out1_tmp_el;
  real_T out1_tmp_n3;
  real_T out1_tmp_fni;
  real_T out1_tmp_nl;
  real_T out1_tmp_e2;
  real_T out1_tmp_by;
  real_T out1_tmp_av;
  real_T out1_tmp_i2;
  real_T out1_tmp_nqp;
  real_T out1_tmp_fx;
  real_T out1_tmp_i4;
  real_T out1_tmp_k3;
  real_T out1_tmp_tmp_b;
  real_T out1_tmp_tmp_da;
  real_T out1_tmp_tmp_hs;
  real_T out1_tmp_nlw;
  real_T out1_tmp_fj;
  real_T out1_tmp_ay;
  real_T out1_tmp_mu;
  real_T out1_tmp_gu;
  real_T out1_tmp_nh;
  real_T out1_tmp_ch;
  real_T out1_tmp_d4;
  real_T out1_tmp_ky;
  real_T out1_tmp_cl;
  real_T out1_tmp_jd;
  real_T out1_tmp_mt;
  real_T out1_tmp_iee;
  real_T out1_tmp_bjy;
  real_T out1_tmp_oq;
  real_T out1_tmp_gs;
  real_T out1_tmp_ed;
  real_T out1_tmp_in;
  real_T out1_tmp_eb;
  real_T out1_tmp_is;
  real_T out1_tmp_m5;
  real_T out1_tmp_dl;
  real_T out1_tmp_j4;
  real_T out1_tmp_pe;
  real_T out1_tmp_b4;
  real_T out1_tmp_pn1;
  real_T out1_tmp_nm;
  real_T out1_tmp_ce;
  real_T out1_tmp_nhy;
  real_T out1_tmp_da;
  real_T out1_tmp_tmp_ih;
  real_T out1_tmp_tmp_no;
  real_T out1_tmp_tmp_bi;
  real_T out1_tmp_bt;
  real_T out1_tmp_jkh;
  real_T out1_tmp_n0;
  real_T out1_tmp_fa;
  real_T out1_tmp_eu;
  real_T out1_tmp_inq;
  real_T out1_tmp_a0m;
  real_T out1_tmp_fd;
  real_T out1_tmp_ko;
  real_T out1_tmp_cg1;
  real_T out1_tmp_j11;
  real_T out1_tmp_ld;
  real_T out1_tmp_ai;
  real_T out1_tmp_iy;
  real_T out1_tmp_ok;
  real_T out1_tmp_b4z;
  real_T out1_tmp_an;
  real_T out1_tmp_aq;
  real_T out1_tmp_i0;
  real_T out1_tmp_izy;
  real_T out1_tmp_lgo;
  real_T out1_tmp_o5;
  real_T out1_tmp_py;
  real_T out1_tmp_omd;
  real_T out1_tmp_cm;
  real_T out1_tmp_oct;
  real_T out1_tmp_ol;
  real_T out1_tmp_heb;
  real_T out1_tmp_ih;
  real_T out1_tmp_gn;
  real_T out1_tmp_c1;
  real_T out1_tmp_ok1;
  real_T out1_tmp_g5;
  real_T out1_tmp_o2;
  real_T t1524_g;
  real_T fs_a;
  real_T e_g;
  real_T wtYerr_b;
  real_T duk_k;
  real_T umvk_ca;
  real_T wtYerr_j;
  real_T wtYerr_tmp_a;
  real_T y_d;
  real_T t15_cx;
  real_T t17_d;
  real_T t19_a2;
  real_T t23_b;
  real_T t25_g;
  real_T t27_f;
  real_T t33_c;
  real_T t34_p;
  real_T t35;
  real_T t37_a;
  real_T t38_n;
  real_T t39_h;
  real_T t41_m;
  real_T t42_f;
  real_T t43_b;
  real_T t44_e;
  real_T t45_n;
  real_T t47;
  real_T t50;
  real_T t57_p;
  real_T t58;
  real_T t129;
  real_T t130;
  real_T t131;
  real_T t133;
  real_T in3_tmp;
  real_T in3_tmp_i;
  real_T ct_tmp_j;
  real_T ct_tmp_l;
  real_T ct_tmp_c;
  real_T ct_tmp_g;
  real_T ct_tmp_c5;
  real_T ct_tmp_ly;
  real_T ct_tmp_e;
  real_T ct_tmp_d;
  real_T ct_tmp_m;
  real_T ct_tmp_f;
  real_T ct_tmp_n;
  real_T t3179;
  real_T t3180;
  real_T t3181;
  real_T t3182;
  real_T t3183;
  real_T t3184;
  real_T t3185;
  real_T t3186;
  real_T t3190;
  real_T t3191;
  real_T t3192;
  real_T t3196;
  real_T t3197;
  real_T t3198;
  real_T t3199;
  real_T t3200;
  real_T t3201;
  real_T t3202;
  real_T t3203;
  real_T t3204;
  real_T t3205;
  real_T t3206;
  real_T t3207;
  real_T t3208;
  real_T t3209;
  real_T t3224;
  real_T t3225;
  real_T t3228;
  real_T t3229;
  real_T t3230;
  real_T t3231;
  real_T t3232;
  real_T t3233;
  real_T t3234;
  real_T t3235;
  real_T t3236;
  real_T t3237;
  real_T t3238;
  real_T t3239;
  real_T t3240;
  real_T t3241;
  real_T t3242;
  real_T t3210;
  real_T t3211;
  real_T t3212;
  real_T t3213;
  real_T t3214;
  real_T t3215;
  real_T t3216;
  real_T t3217;
  real_T t3218;
  real_T t3219;
  real_T t3243;
  real_T t3244;
  real_T t3245;
  real_T t3247;
  real_T t3247_tmp;
  real_T t3247_tmp_o;
  real_T Anq_tmp;
  real_T Anq_tmp_tmp;
  real_T Anq_tmp_e;
  real_T Anq_tmp_m;
  real_T Anq_tmp_c;
  real_T Anq_tmp_g;
  real_T Anq_tmp_b;
  real_T Anq_tmp_p;
  real_T Anq_tmp_tmp_p;
  real_T Anq_tmp_a;
  real_T Anq_tmp_f;
  real_T Anq_tmp_gr;
  real_T t20_b;
  real_T t22_k;
  real_T t23_k;
  real_T t24_b;
  real_T t27_i;
  real_T t28_n;
  real_T t29_h;
  real_T t30_n;
  real_T t31_m;
  real_T t32_g;
  real_T t36_j;
  real_T t37_f;
  real_T t38_ng;
  real_T t39_g;
  real_T t41_d;
  real_T t42_c;
  real_T t44_m;
  real_T t49_d;
  real_T t50_n;
  real_T t52_b;
  real_T t80;
  real_T t81;
  real_T t82;
  real_T t83_p;
  real_T t84_k;
  real_T t85_c;
  real_T t86_n;
  real_T t87_n;
  real_T t88_c;
  real_T t89_d;
  real_T t90_n;
  real_T t91_g;
  real_T t92_l;
  real_T t93_g;
  real_T t94_p;
  real_T t95_k;
  real_T t96_l;
  real_T t97_b;
  real_T t100_c;
  real_T t101;
  real_T t102;
  real_T t103_f;
  real_T t104_o;
  real_T t105_d;
  real_T t108_l;
  real_T t111_l;
  real_T t112;
  real_T t113;
  real_T t115_d;
  real_T t117;
  real_T in3_tmp_k;
  real_T in3_tmp_f;
  real_T t896;
  real_T t897;
  real_T t898_p;
  real_T t899_k;
  real_T ct_tmp_k;
  real_T t1162;
  real_T t1163;
  real_T t1164_i;
  real_T t1459;
  real_T t1483;
  real_T t1484;
  real_T t1485;
  real_T t1488_e;
  real_T t1489_f;
  real_T t575;
  real_T t1456;
  real_T t1457;
  real_T t1458;
  real_T t1473;
  real_T t1487;
  real_T t1479;
  real_T t1499;
  real_T t1527;
  real_T t1533;
  real_T t1533_tmp;
  real_T t1533_tmp_k;
  real_T t1533_tmp_n;
  real_T out1_tmp_it;
  real_T out1_tmp_im;
  real_T out1_tmp_o2s;
  real_T out1_tmp_dn5;
  real_T out1_tmp_iu;
  real_T out1_tmp_gy;
  real_T out1_tmp_cv;
  real_T out1_tmp_een;
  real_T out1_tmp_a5;
  real_T out1_tmp_hq;
  real_T out1_tmp_ef;
  real_T out1_tmp_dw;
  real_T out1_tmp_g5h;
  real_T out1_tmp_ev;
  real_T out1_tmp_eq;
  real_T out1_tmp_gm;
  real_T out1_tmp_gk;
  real_T out1_tmp_dz;
  real_T out1_tmp_n1;
  real_T out1_tmp_p2;
  real_T out1_tmp_bs;
  real_T out1_tmp_iw;
  real_T out1_tmp_bi;
  real_T out1_tmp_jv;
  real_T out1_tmp_gzp;
  real_T out1_tmp_nly;
  real_T out1_tmp_p4;
  real_T out1_tmp_fb;
  real_T out1_tmp_fs;
  real_T out1_tmp_aa;
  real_T out1_tmp_g3y;
  real_T out1_tmp_ma;
  real_T out1_tmp_dv;
  real_T out1_tmp_efd;
  real_T out1_tmp_ey;
  real_T out1_tmp_dlv;
  real_T out1_tmp_jbr;
  real_T out1_tmp_nx;
  real_T out1_tmp_ju;
  real_T out1_tmp_pm;
  real_T out1_tmp_aw;
  real_T out1_tmp_df;
  real_T out1_tmp_pz;
  real_T out1_tmp_d2;
  real_T out1_tmp_pq;
  real_T out1_tmp_fp;
  real_T out1_tmp_gen;
  real_T out1_tmp_dp;
  real_T out1_tmp_hg;
  real_T out1_tmp_iei;
  real_T out1_tmp_mzx;
  real_T out1_tmp_cy2;
  real_T out1_tmp_lv;
  real_T out1_tmp_pb;
  real_T out1_tmp_i1;
  real_T out1_tmp_b3;
  real_T out1_tmp_gni;
  real_T out1_tmp_oqd;
  real_T out1_tmp_b1;
  real_T out1_tmp_ewq;
  real_T out1_tmp_e1;
  real_T out1_tmp_lgy;
  real_T out1_tmp_cf;
  real_T out1_tmp_e5;
  real_T out1_tmp_dwl;
  real_T out1_tmp_oe;
  real_T out1_tmp_lw;
  real_T out1_tmp_hga;
  real_T out1_tmp_ln;
  real_T out1_tmp_c5;
  real_T out1_tmp_cx;
  real_T out1_tmp_ag;
  real_T out1_tmp_i2x;
  real_T out1_tmp_lt;
  real_T out1_tmp_iyp;
  real_T out1_tmp_az;
  real_T out1_tmp_ix;
  real_T out1_tmp_c3;
  real_T out1_tmp_mb;
  real_T out1_tmp_nnt;
  real_T out1_tmp_chb;
  real_T out1_tmp_na;
  real_T out1_tmp_hk;
  real_T out1_tmp_iut;
  real_T out1_tmp_ef2;
  real_T out1_tmp_pc;
  real_T out1_tmp_tmp_k;
  real_T out1_tmp_tmp_i3;
  real_T out1_tmp_tmp_nl;
  real_T out1_tmp_ob;
  real_T out1_tmp_lch;
  real_T out1_tmp_pr;
  real_T out1_tmp_br;
  real_T out1_tmp_fy;
  real_T out1_tmp_isj;
  real_T out1_tmp_ciq;
  real_T out1_tmp_gl;
  real_T out1_tmp_iuw;
  real_T out1_tmp_b11;
  real_T out1_tmp_nad;
  real_T out1_tmp_pn4;
  real_T out1_tmp_oo;
  real_T out1_tmp_by2;
  real_T out1_tmp_o1;
  real_T out1_tmp_cm3;
  real_T out1_tmp_jcw;
  real_T out1_tmp_ei;
  real_T out1_tmp_pw;
  real_T out1_tmp_npj;
  real_T out1_tmp_oec;
  real_T out1_tmp_d5;
  real_T out1_tmp_gq;
  real_T out1_tmp_il;
  real_T out1_tmp_tmp_ihc;
  real_T out1_tmp_tmp_c;
  real_T out1_tmp_tmp_bv;
  real_T out1_tmp_tmp_g;
  real_T out1_tmp_tmp_df;
  real_T out1_tmp_fn1;
  real_T out1_tmp_j1t;
  real_T out1_tmp_eqx;
  real_T out1_tmp_pc2;
  real_T out1_tmp_dd;
  real_T out1_tmp_fm;
  real_T out1_tmp_n5;
  real_T out1_tmp_o5b;
  real_T out1_tmp_du;
  real_T out1_tmp_lm;
  real_T out1_tmp_fu;
  real_T out1_tmp_jf;
  real_T out1_tmp_geq;
  real_T out1_tmp_ltq;
  real_T out1_tmp_kts;
  real_T out1_tmp_tmp_p;
  real_T out1_tmp_tmp_bu;
  real_T out1_tmp_tmp_i3s;
  real_T out1_tmp_pme;
  real_T out1_tmp_lb;
  real_T out1_tmp_ea;
  real_T out1_tmp_es;
  real_T out1_tmp_pn5;
  real_T out1_tmp_jg;
  real_T out1_tmp_gyk;
  real_T out1_tmp_le;
  real_T out1_tmp_jo;
  real_T out1_tmp_pk;
  real_T out1_tmp_d0;
  real_T out1_tmp_kh;
  real_T out1_tmp_m0;
  real_T out1_tmp_fv;
  real_T out1_tmp_m4a;
  real_T out1_tmp_nf;
  real_T out1_tmp_mie;
  real_T out1_tmp_b0;
  real_T out1_tmp_cc;
  real_T out1_tmp_gw;
  real_T out1_tmp_ck;
  real_T out1_tmp_tmp_iz;
  real_T out1_tmp_tmp_kv;
  real_T out1_tmp_tmp_go;
  real_T out1_tmp_pdd;
  real_T out1_tmp_fdb;
  real_T out1_tmp_mo;
  real_T out1_tmp_my;
  real_T out1_tmp_lbl;
  real_T out1_tmp_jon;
  real_T out1_tmp_m5i;
  real_T out1_tmp_j4j;
  real_T out1_tmp_ii;
  real_T out1_tmp_am;
  real_T out1_tmp_hv;
  real_T out1_tmp_ddu;
  real_T out1_tmp_i2p;
  real_T out1_tmp_hr;
  real_T out1_tmp_djq;
  real_T out1_tmp_lb5;
  real_T out1_tmp_f3;
  real_T out1_tmp_tmp_lt;
  real_T out1_tmp_tmp_l3;
  real_T out1_tmp_tmp_f4;
  real_T out1_tmp_gyc;
  real_T out1_tmp_gzg;
  real_T out1_tmp_av2;
  real_T out1_tmp_du1;
  real_T out1_tmp_bc;
  real_T out1_tmp_dg;
  real_T out1_tmp_fvc;
  real_T out1_tmp_as;
  real_T out1_tmp_mqv;
  real_T out1_tmp_ied;
  real_T out1_tmp_ir;
  real_T out1_tmp_kqj;
  real_T out1_tmp_au;
  real_T out1_tmp_m2;
  real_T out1_tmp_cec;
  real_T out1_tmp_bo;
  real_T out1_tmp_kgq;
  real_T out1_tmp_lr;
  real_T out1_tmp_nz;
  real_T out1_tmp_pp;
  real_T out1_tmp_f0;
  real_T out1_tmp_ko5;
  real_T out1_tmp_en;
  real_T out1_tmp_nadk;
  real_T out1_tmp_olg;
  real_T out1_tmp_ad;
  real_T out1_tmp_bic;
  real_T out1_tmp_ba;
  real_T out1_tmp_mg4;
  real_T out1_tmp_mc;
  real_T out1_tmp_kw;
  real_T out1_tmp_mcj;
  real_T out1_tmp_hkh;
  real_T out1_tmp_i15;
  real_T out1_tmp_ct;
  real_T out1_tmp_ni;
  real_T out1_tmp_ilu;
  real_T out1_tmp_ocp;
  real_T out1_tmp_hy;
  real_T out1_tmp_pj;
  real_T out1_tmp_go;
  real_T out1_tmp_cy0;
  real_T out1_tmp_gn3;
  real_T out1_tmp_bb;
  real_T b_C_j;
  real_T Jmv_h;
  real_T t8;
  real_T t9;
  real_T t11_d;
  real_T t12_o;
  real_T t13_k;
  real_T t14_j;
  real_T t15_d;
  real_T t16_f;
  real_T t25_a;
  real_T t29_e;
  real_T t31_n;
  real_T t50_o;
  real_T t53;
  real_T t54;
  real_T t18_d;
  real_T t19_c;
  real_T t57_m;
  real_T t64;
  real_T t65;
  real_T t68_o;
  real_T t45_b;
  real_T t46;
  real_T t47_m;
  real_T t51_i;
  real_T t58_i;
  real_T t59_g;
  real_T out1_tmp_mui;
  real_T out1_tmp_no;
  real_T out1_tmp_cag;
  real_T out1_tmp_jvr;
  real_T out1_tmp_ej;
  real_T out1_tmp_ep;
  real_T out1_tmp_kr;
  real_T out1_tmp_k4;
  real_T out1_tmp_id;
  real_T out1_tmp_eh;
  real_T out1_tmp_ly;
  real_T out1_tmp_ldf;
  real_T out1_tmp_lcq;
  real_T out1_tmp_obs;
  real_T out1_tmp_i5;
  real_T out1_tmp_e2t;
  real_T out1_tmp_lo;
  real_T out1_tmp_noc;
  real_T out1_tmp_eue;
  real_T out1_tmp_cu;
  real_T out1_tmp_ap;
  real_T out1_tmp_ms;
  real_T out1_tmp_ckb;
  real_T out1_tmp_fg;
  real_T out1_tmp_mj;
  real_T out1_tmp_k0;
  real_T rMin_b;
  real_T Xnorm0_h;
  real_T cMin_h;
  real_T cVal_h;
  real_T t_b;
  real_T Linv;
  real_T atmp;
  real_T xnorm;
  real_T scale_b;
  real_T absxk_d;
  real_T t_jd;
  SL_Bus_std_msgs_UInt8 In1_me;        // '<S62>/In1'
  SL_Bus_std_msgs_Float32 In1_b;       // '<S32>/In1'
  SL_Bus_std_msgs_Float32 In1_hb;      // '<S43>/In1'
  SL_Bus_std_msgs_Bool In1_gf;         // '<S65>/In1'
  SL_Bus_sonia_common_ros2_KillStatus In1_lz;// '<S63>/In1'
  uint16_T Delay[8];                   // '<S5>/Delay'
  uint16_T current[8];                 // '<S70>/N to A'
  int64_T b_value;
  boolean_T umax_incr_flag[8];
  boolean_T umin_incr_flag[8];
  boolean_T umax_incr_flag_d[8];
  boolean_T umin_incr_flag_l[8];
  int32_T A_size[2];
  int32_T Jm_size[2];
  int32_T I1_size[2];
  int32_T I3_size[2];
  int32_T b_H_size[2];
  int32_T SuJm_size[2];
  int32_T Sx_size[2];
  int32_T Su1_size[2];
  int32_T Hv_size[2];
  int32_T Ku1_size[2];
  int32_T Kx_size[2];
  int32_T y_size[2];
  int32_T varargin_4_size[2];
  int32_T w_size[2];
  int32_T tmp_size[2];
  int32_T Su_size[2];
  int32_T Cineq_size[2];
  int32_T JacCineqTrans_size[2];
  int32_T b_size[2];
  int32_T varargin_1_size[2];
  int32_T a__3_size[2];
  int32_T a__4_size[2];
  int32_T varargin_1_size_j[2];
  int32_T b_varargin_1_size[2];
  int32_T Jx_b[2];
  int32_T tmp_size_f[2];
  int32_T RLinv_size[2];
  int32_T b_D_size[2];
  int32_T b_H_size_p[2];
  int32_T AcRow_size[2];
  int32_T b_H_size_l[2];
  int32_T Q_size[2];
  int32_T b_A_size[2];
  boolean_T b_l[4];
  int16_T sizes[2];
  int16_T sizes_i[2];
  int16_T Jx_o[2];
  int16_T varargin_2[2];
  int16_T Je_b[2];
  real32_T rtb_Merge2_data;
  int32_T b_k;
  int32_T base_index;
  int32_T nz;
  int32_T b_j;
  int32_T Ns;
  int32_T Ns_i;
  int32_T i_g;
  int32_T i_p;
  int32_T i_h;
  int32_T i_d;
  int32_T i_f;
  int32_T pny;
  int32_T nmoves;
  int32_T TotalFreeMoves;
  int32_T j;
  int32_T ioff;
  int32_T b_j_f;
  int32_T i_c;
  int32_T pny_d;
  int32_T loop_ub;
  int32_T i_ca;
  int32_T b_Mv_b;
  int32_T loop_ub_tmp;
  int32_T varargin_2_p;
  int32_T nmoves_tmp;
  int32_T s_size_idx_0;
  int32_T Mu_size_idx_0;
  int32_T Mv_aux_size_idx_0;
  int32_T i1;
  int32_T loop_ub_h;
  int32_T i2;
  int32_T loop_ub_e;
  int32_T loop_ub_l;
  int32_T input_sizes_idx_0;
  int32_T b_input_sizes_idx_0;
  int32_T Sum_tmp;
  int32_T loop_ub_tmp_h;
  int32_T input_sizes_idx_0_tmp;
  int32_T mc;
  int32_T coffset;
  int32_T boffset;
  int32_T aoffset;
  int32_T j_n;
  int32_T c_k;
  int32_T i_b;
  int32_T b_i;
  int32_T scalarLB;
  int32_T vectorUB;
  int32_T b_o;
  int32_T i3;
  int32_T b_i_n;
  int32_T i_fi;
  int32_T b_i_g;
  int32_T b_k_d;
  int32_T i4;
  int32_T i5;
  int32_T j_d;
  int32_T b_k_e;
  int32_T eint;
  int32_T i_ce;
  int32_T i6;
  int32_T b_k_a;
  int32_T i7;
  int32_T n_h;
  int32_T nb;
  int32_T nbitson;
  int32_T n_e;
  int32_T i8;
  int32_T i9;
  int32_T i10;
  int32_T cBuffer_tmp;
  int32_T mIneq;
  int32_T mConstrMax;
  int32_T maxDims;
  int32_T mNonlinIneq;
  int32_T k;
  int32_T iEq0;
  int32_T i_n;
  int32_T vectorUB_h;
  int32_T loop_ub_o;
  int32_T mFixed;
  int32_T mIneq_f;
  int32_T mLB;
  int32_T mUB;
  int32_T qpoptions_MaxIterations;
  int32_T b_nVar;
  int32_T mLambda;
  int32_T idx_max;
  int32_T ix_k;
  int32_T iy;
  int32_T c_ix;
  int32_T b_iy;
  int32_T u1;
  int32_T idx_max_tmp;
  int32_T mConstr_tmp;
  int32_T mLinIneq_tmp;
  int32_T b_nVar_tmp;
  int32_T c_ix_tmp;
  int32_T nVar_tmp_tmp;
  int32_T idx_max_tmp_tmp;
  int32_T mLinIneq;
  int32_T k_e;
  int32_T loop_ub_i;
  int32_T vectorUB_o;
  int32_T loop_ub_j;
  int32_T yk;
  int32_T i_k;
  int32_T i_j;
  int32_T vectorUB_d;
  int32_T ineqRange_size_idx_1;
  int32_T i11;
  int32_T loop_ub_g;
  int32_T loop_ub_c;
  int32_T k_k;
  int32_T i_jn;
  int32_T tmp_size_idx_0;
  int32_T i2_h;
  int32_T ix_c;
  int32_T a_d;
  int32_T i_a;
  int32_T kidx;
  int32_T i2_p;
  int32_T Tries;
  int32_T i_fk;
  int32_T i12;
  int32_T kidx_h;
  int32_T nA;
  int32_T tmp;
  int32_T exponent;
  int32_T b_exponent;
  int32_T i_j5;
  int32_T iSave;
  int32_T iC_n;
  int32_T U_tmp;
  int32_T k_i;
  int32_T ii;
  int32_T knt;
  int32_T b_lastv;
  int32_T coltop;
  int32_T b_coltop;
  int32_T vectorUB_o1;
  int32_T vectorUB_tmp;
  int32_T kend;
  int32_T k_o;
  int32_T row;
  int32_T col;
  int32_T col_end;
  int32_T idx_mat;
  int32_T i13;
  int32_T loop_ub_d;
  int32_T loop_ub_a;
  int32_T c_k_k;
  int32_T d_k;
  int32_T i_ct;
  int32_T tmp_size_idx_0_j;
  int32_T i14;
  int32_T i15;
  int32_T loop_ub_b;
  int32_T loop_ub_n;
  int32_T loop_ub_dm;
  int32_T mc_h;
  int32_T coffset_b;
  int32_T boffset_p;
  int32_T aoffset_b;
  int32_T bkj_p;
  int32_T j_ne;
  int32_T b_j2;
  int32_T b_i_b;
  int32_T scalarLB_n;
  int32_T vectorUB_b;
  int32_T i16;
  int32_T e_j;
  int32_T e_i;
  int32_T b_s;
  int32_T i17;
  int32_T b_s_j;
  int32_T i18;
  int32_T F_tmp;
  int32_T n_k;
  int32_T nb_d;
  int32_T nbitson_d;
  int32_T b_n;
  int32_T i19;
  int32_T i20;
  int32_T i21;
  int32_T i22;
  int32_T b_i_o;
  int32_T i23;
  int32_T i24;
  int32_T b_i_c;
  int32_T idx_current;
  int32_T i_o;
  int32_T wtYerr_tmp_aj;
  int32_T gfU_tmp_tmp;
  int32_T gfU_tmp_tmp_d;
  int32_T gfU_tmp_tmp_e;
  int32_T i25;
  int32_T i_i;
  int32_T i_bw;
  int32_T U_tmp_a;
  int32_T j_k;
  int32_T i_m;
  int32_T i_jx;
  int32_T i26;
  int32_T i27;
  int32_T b_Su1_tmp;
  int32_T AA_tmp;
  int32_T i_jm;
  int32_T i28;
  int32_T k_kg;
  int32_T i29;
  int32_T Ak1_tmp;
  int32_T Jx_tmp;
  int32_T TotalFreeMoves_k;
  int32_T nA_a;
  int32_T kDrop;
  int32_T kNext;
  int32_T idx;
  int32_T loop_ub_k;
  int32_T scalarLB_f;
  int32_T vectorUB_c;
  int32_T b_m;
  int32_T b_n_o;
  int32_T i_j_k;
  int32_T iC_p2;
  int32_T RLinv_idx_0_tmp;
  int32_T RLinv_idx_1_tmp;
  int32_T i_j_tmp;
  int32_T loop_ub_f;
  int32_T TL_size_idx_0;
  int32_T R_size_idx_0;
  int32_T minmana;
  int32_T minmn;
  int32_T ii_d;
  int32_T mmi;
  int32_T mmip1;
  int32_T b_e;
  int32_T ix0;
  int32_T coltop_l;
  int32_T vectorUB_e;
  int32_T b_m_tmp;
  int32_T n_tmp;
  int32_T vectorUB_tmp_h;
  int32_T kend_g;
  int32_T k_p;
  uint32_T len;
  uint32_T b_q;
  uint32_T b_q_tmp;
  uint32_T u;
  SL_Bus_std_msgs_Float32 rtb_SourceBlock_o2_pk_n;
  int32_T g_size[1];
  int32_T j_size[1];
  int32_T n_size[1];
  int32_T n_size_o[1];
  int32_T isMrows_size[1];
  int32_T tmp_size_l[1];
  int32_T tmp_size_fz[1];
  int32_T tmp_size_h[1];
  int32_T b_c_size[1];
  int32_T z_size[1];
  int32_T tau_size[1];
  char_T expl_temp_d[3];
  int8_T empty_non_axis_sizes[2];
  int8_T empty_non_axis_sizes_m[2];
  int8_T empty_non_axis_sizes_i[2];
  int16_T b_Mrows_j;
  int16_T WorkingSet_tmp_p;
  int16_T ixw;
  int16_T i30;
  uint8_T empty_non_axis_sizes_d[2];
  uint8_T empty_non_axis_sizes_j[2];
  uint8_T empty_non_axis_sizes_k[2];
  uint8_T varargin_1_m[2];
  int8_T MpcStatus;                    // '<S68>/Merge'
  int8_T rtAction;
  int8_T rtPrevAction;
  int8_T sizes_idx_1;
  int8_T i31;
  uint8_T mode;
  uint8_T u1_d;
  uint8_T i_pz;
  uint8_T sizes_idx_0;
  uint8_T i_ig;
  uint8_T rows_g;
  boolean_T isMpcAlive;                // '<S70>/Data Type Conversion'
  boolean_T SourceBlock_o1;            // '<S247>/SourceBlock'
  boolean_T MATLABSystem_o3_k;         // '<S222>/MATLAB System'
  boolean_T thrustersStatus[8];        // '<S69>/MATLAB System'
  boolean_T SourceBlock_o1_j;          // '<S61>/SourceBlock'
  boolean_T SourceBlock_o1_k;          // '<S60>/SourceBlock'
  boolean_T SourceBlock_o1_k3;         // '<S59>/SourceBlock'
  boolean_T SourceBlock_o1_a;          // '<S58>/SourceBlock'
  boolean_T SourceBlock_o1_e;          // '<S57>/SourceBlock'
  boolean_T SourceBlock_o1_f;          // '<S56>/SourceBlock'
  boolean_T b_value_e;
  boolean_T p_ha;
  boolean_T NewDvlMsg;                 // '<S3>/Merge5'
  boolean_T newPressureMsg;            // '<S3>/Merge3'
  boolean_T Reset;                     // '<S36>/Reset'
  boolean_T empty_non_axis_sizes_g;
  boolean_T b_cg;
  boolean_T recomputeDiags;
  boolean_T firstmult;
  boolean_T aBufferInUse;
  boolean_T cBufferInUse;
  boolean_T isFeasible;
  boolean_T tooSmallX;
  boolean_T b1;
  boolean_T sizes_idx_1_tmp;
  boolean_T y_a5;
  boolean_T b_Del_Save_Flag0;
  boolean_T cTolComputed;
  boolean_T DualFeasible;
  boolean_T ColdReset;
  boolean_T allFinite;
  boolean_T sizes_idx_1_tmp_f;
  boolean_T y_ik;
  boolean_T recomputeDiags_c;
  boolean_T firstmult_n;
  boolean_T aBufferInUse_c;
  boolean_T cBufferInUse_c;
  boolean_T allFinite_i;
  boolean_T cTolComputed_h;
  boolean_T isT1Inf;
  boolean_T tempOK;
  SL_Bus_std_msgs_Bool rtb_SourceBlock_o2_my_m;
  SL_Bus_std_msgs_Bool BusAssignment_g;
  SL_Bus_std_msgs_UInt8 rtb_SourceBlock_o2_d_o;
  SL_Bus_sonia_common_ros2_KillStatus rtb_SourceBlock_o2_i_m;
};

// Block states (default storage) for system '<Root>'
struct DW_proc_control_T {
  TrajectoryManager_proc_contro_T obj; // '<S238>/MATLAB System1'
  ProcPlannerManager_proc_contr_T obj_l;// '<S233>/MATLAB System'
  mpcManager_proc_control_T obj_k;     // '<S69>/MATLAB System'
  TrimPlant_proc_control_T obj_b;      // '<S71>/MATLAB System'
  robotics_slcore_internal_bl_p_T obj_m;// '<S254>/Polynomial Trajectory'
  OpenLoopController_proc_contr_T obj_p;// '<S73>/MATLAB System'
  robotics_slcore_internal_bloc_T obj_p3;// '<S251>/Rotation Trajectory'
  AddPose_proc_control_T obj_f;        // '<S238>/MATLAB System'
  rosCommandManager_proc_contro_T obj_i;// '<S45>/MATLAB System'
  ros_slros2_internal_block_Get_T obj_ju;// '<S47>/volume'
  ros_slros2_internal_block_Get_T obj_l4;// '<S47>/thrusters'
  ros_slros2_internal_block_Get_T obj_e5;// '<S47>/sub height'
  ros_slros2_internal_block_Get_T obj_eu;// '<S47>/sonar pose'
  ros_slros2_internal_block_Get_T obj_e1;// '<S47>/rg'
  ros_slros2_internal_block_Get_T obj_h;// '<S47>/rb'
  ros_slros2_internal_block_Get_T obj_jq;// '<S47>/mass'
  ros_slros2_internal_block_Get_T obj_c4;// '<S47>/hydro pose'
  ros_slros2_internal_block_Get_T obj_axm;// '<S47>/g'
  ros_slros2_internal_block_Get_T obj_mh;// '<S47>/dvl rotation'
  ros_slros2_internal_block_Get_T obj_jk;// '<S47>/dvl lost override'
  ros_slros2_internal_block_Get_T obj_lq;// '<S47>/depth pose'
  ros_slros2_internal_block_Get_T obj_kb;// '<S47>/cdq'
  ros_slros2_internal_block_Get_T obj_fg;// '<S47>/cdl'
  ros_slros2_internal_block_Get_T obj_ps;// '<S47>/added mass'
  ros_slros2_internal_block_Get_T obj_pp;// '<S47>/Rho'
  ros_slros2_internal_block_Get_T obj_hn;// '<S47>/I'
  ros_slros2_internal_block_Get_T obj_do;// '<S49>/Get Parameter2'
  ros_slros2_internal_block_Get_T obj_eug;// '<S49>/Get Parameter1'
  ros_slros2_internal_block_Get_T obj_dc;// '<S49>/Get Parameter'
  ros_slros2_internal_block_Get_T obj_pu;// '<S48>/Get Parameter3'
  ros_slros2_internal_block_Get_T obj_cm;// '<S48>/Get Parameter2'
  ros_slros2_internal_block_Get_T obj_dx;// '<S48>/Get Parameter1'
  ros_slros2_internal_block_Get_T obj_f0;// '<S48>/Get Parameter'
  ros_slros2_internal_block_Get_T obj_nb;// '<S54>/Get Parameter'
  ros_slros2_internal_block_Get_T obj_hq;// '<S53>/Get Parameter2'
  ros_slros2_internal_block_Get_T obj_pz;// '<S53>/Get Parameter1'
  ros_slros2_internal_block_Get_T obj_fs;// '<S53>/Get Parameter'
  ros_slros2_internal_block_Get_T obj_as;// '<S52>/Get Parameter2'
  ros_slros2_internal_block_Get_T obj_nr;// '<S52>/Get Parameter1'
  ros_slros2_internal_block_Get_T obj_nl;// '<S52>/Get Parameter'
  ros_slros2_internal_block_Get_T obj_pzf;// '<S51>/Get Parameter2'
  ros_slros2_internal_block_Get_T obj_f2;// '<S51>/Get Parameter1'
  ros_slros2_internal_block_Get_T obj_j1;// '<S51>/Get Parameter'
  ros_slros2_internal_block_Get_T obj_bn;// '<S50>/Get Parameter2'
  ros_slros2_internal_block_Get_T obj_iw;// '<S50>/Get Parameter1'
  ros_slros2_internal_block_Get_T obj_fk;// '<S50>/Get Parameter'
  ros_slros2_internal_block_Pub_T obj_oe;// '<S243>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_ni;// '<S111>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_clf;// '<S23>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_fd;// '<S20>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_oa;// '<S19>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_ez;// '<S15>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_dv;// '<S11>/SinkBlock'
  ros_slros2_internal_block_Sub_T obj_ha;// '<S252>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_eh;// '<S247>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_jb;// '<S245>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_if;// '<S172>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_no;// '<S171>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_i3;// '<S61>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_ppy;// '<S60>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_cg;// '<S59>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_fw;// '<S58>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_lt;// '<S57>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_nf;// '<S56>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_ak;// '<S29>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_n5;// '<S28>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_du;// '<S27>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_na;// '<S40>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_fka;// '<S39>/SourceBlock'
  ros_slros2_internal_block_Sub_T obj_fe;// '<S38>/SourceBlock'
  real_T Delay_DSTATE[8];              // '<S181>/Delay'
  real_T Delay_DSTATE_j;               // '<S45>/Delay'
  real_T Delay_DSTATE_m;               // '<S3>/Delay'
  real_T Delay_DSTATE_p;               // '<S70>/Delay'
  real_T DiscreteTimeIntegrator_DSTATE;// '<S251>/Discrete-Time Integrator'
  real_T Delay_DSTATE_i;               // '<S202>/Delay'
  real_T Delay_DSTATE_pp[8];           // '<S75>/Delay'
  real_T mv_Delay_DSTATE[88];          // '<S149>/mv_Delay'
  real_T x_Delay_DSTATE[143];          // '<S149>/x_Delay'
  real_T slack_delay_DSTATE;           // '<S149>/slack_delay'
  real_T last_mv_DSTATE[8];            // '<S115>/last_mv'
  real_T Delay1_DSTATE[88];            // '<S72>/Delay1'
  real_T UD_DSTATE[6];                 // '<S145>/UD'
  real_T Delay_DSTATE_a[8];            // '<S71>/Delay'
  real_T last_mv_DSTATE_j[8];          // '<S79>/last_mv'
  real_T lastMsg[400];                 // '<S47>/MATLAB System8'
  real_T lastMsg_a[400];               // '<S47>/MATLAB System7'
  real_T lastMsg_l[400];               // '<S47>/MATLAB System6'
  real_T lastMsg_k[400];               // '<S47>/MATLAB System5'
  real_T lastMsg_m[400];               // '<S47>/MATLAB System4'
  real_T lastMsg_kw[400];              // '<S47>/MATLAB System3'
  real_T lastMsg_f[400];               // '<S47>/MATLAB System2'
  real_T lastMsg_p[400];               // '<S47>/MATLAB System12'
  real_T lastMsg_d[400];               // '<S47>/MATLAB System11'
  real_T lastMsg_i[400];               // '<S47>/MATLAB System1'
  real_T lastMsg_g[400];               // '<S54>/MATLAB System5'
  real_T lastMsg_fk[400];              // '<S53>/MATLAB System5'
  real_T lastMsg_h[400];               // '<S53>/MATLAB System4'
  real_T lastMsg_ar[400];              // '<S53>/MATLAB System3'
  real_T lastMsg_m4[400];              // '<S52>/MATLAB System5'
  real_T lastMsg_lq[400];              // '<S52>/MATLAB System4'
  real_T lastMsg_g4[400];              // '<S52>/MATLAB System3'
  real_T lastMsg_aa[400];              // '<S51>/MATLAB System5'
  real_T lastMsg_gp[400];              // '<S51>/MATLAB System4'
  real_T lastMsg_kz[400];              // '<S51>/MATLAB System3'
  real_T lastMsg_k3[400];              // '<S50>/MATLAB System4'
  real_T lastMsg_c[400];               // '<S50>/MATLAB System3'
  real_T lastMsg_b[400];               // '<S50>/MATLAB System1'
  real_T P[169];                       // '<S221>/DataStoreMemory - P'
  real_T x[13];                        // '<S221>/DataStoreMemory - x'
  ros_slros2_internal_block_Cur_T obj_o3;// '<S110>/Current Time'
  ros_slros2_internal_block_Cur_T obj_haq;// '<S13>/Current Time'
  int32_T clockTickCounter;            // '<S75>/Pulse Generator'
  int32_T clockTickCounter_n;          // '<S72>/Pulse Generator'
  int32_T clockTickCounter_f;          // '<S71>/Pulse Generator'
  uint32_T m_bpIndex[8];               // '<S70>/n-D Lookup Table1'
  uint32_T m_bpIndex_p[8];             // '<S70>/N to A'
  uint16_T Delay_DSTATE_m0[8];         // '<S5>/Delay'
  boolean_T Delay_DSTATE_g;            // '<S238>/Delay'
  boolean_T DelayInput1_DSTATE;        // '<S240>/Delay Input1'
  int8_T If_ActiveSubsystem_b;         // '<S5>/If'
  int8_T SwitchCase_ActiveSubsystem;   // '<S7>/Switch Case'
  int8_T SwitchCase_ActiveSubsystem_p; // '<S68>/Switch Case'
  boolean_T icLoad;                    // '<S149>/mv_Delay'
  boolean_T icLoad_g;                  // '<S149>/x_Delay'
  boolean_T icLoad_o;                  // '<S149>/slack_delay'
  boolean_T Memory_PreviousInput[226]; // '<S115>/Memory'
  boolean_T Memory_PreviousInput_l[226];// '<S79>/Memory'
  boolean_T Memory_PreviousInput_e;    // '<S36>/Memory'
  boolean_T Memory_PreviousInput_n;    // '<S37>/Memory'
};

// Zero-crossing (trigger) state
struct PrevZCX_proc_control_T {
  ZCSigState ResettableSubsystem_Reset_ZCE;// '<S238>/Resettable Subsystem'
};

// Parameters (default storage)
struct P_proc_control_T_ {
  struct_Xl449lO1uDRqlUFijqjpYB physics;// Variable: physics
                                           //  Referenced by: '<S73>/MATLAB System'

  struct_x7JWpgYpPywnYpZFC6VmZH mode;  // Variable: mode
                                          //  Referenced by: '<S45>/MATLAB System'

  real_T N[201];                       // Variable: N
                                          //  Referenced by:
                                          //    '<S70>/N to A'
                                          //    '<S70>/n-D Lookup Table1'

  real_T binv[48];                     // Variable: binv
                                          //  Referenced by: '<S73>/MATLAB System'

  uint16_T A[201];                     // Variable: A
                                          //  Referenced by: '<S70>/N to A'

  uint16_T PWM[201];                   // Variable: PWM
                                          //  Referenced by: '<S70>/n-D Lookup Table1'

  real_T DiscreteDerivative_ICPrevScaled;
                              // Mask Parameter: DiscreteDerivative_ICPrevScaled
                                 //  Referenced by: '<S145>/UD'

  boolean_T MinMaxRunningResettable_vinit;
                                // Mask Parameter: MinMaxRunningResettable_vinit
                                   //  Referenced by:
                                   //    '<S36>/Initial Condition'
                                   //    '<S36>/Memory'

  boolean_T MinMaxRunningResettable1_vinit;
                               // Mask Parameter: MinMaxRunningResettable1_vinit
                                  //  Referenced by:
                                  //    '<S37>/Initial Condition'
                                  //    '<S37>/Memory'

  boolean_T DetectRisePositive_vinit;// Mask Parameter: DetectRisePositive_vinit
                                        //  Referenced by: '<S240>/Delay Input1'

  SL_Bus_std_msgs_Float64MultiArray Out1_Y0;// Computed Parameter: Out1_Y0
                                               //  Referenced by: '<S174>/Out1'

  SL_Bus_std_msgs_Float64MultiArray Constant_Value;// Computed Parameter: Constant_Value
                                                      //  Referenced by: '<S172>/Constant'

  SL_Bus_sonia_common_ros2_MpcInfo Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                       //  Referenced by: '<S22>/Constant'

  SL_Bus_sonia_common_ros2_MpcGains Out1_Y0_b;// Computed Parameter: Out1_Y0_b
                                                 //  Referenced by: '<S173>/Out1'

  SL_Bus_sonia_common_ros2_MpcGains Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                        //  Referenced by: '<S171>/Constant'

  SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint Out1_Y0_n;// Computed Parameter: Out1_Y0_n
                                                                   //  Referenced by: '<S248>/Out1'

  SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                                      //  Referenced by: '<S247>/Constant'

  mpcParams mpcParams_Y0;              // Computed Parameter: mpcParams_Y0
                                          //  Referenced by: '<S44>/mpcParams'

  SL_Bus_nav_msgs_Odometry Constant_Value_g3;// Computed Parameter: Constant_Value_g3
                                                //  Referenced by: '<S12>/Constant'

  SL_Bus_nav_msgs_Odometry Constant_Value_f;// Computed Parameter: Constant_Value_f
                                               //  Referenced by: '<S109>/Constant'

  physicsConstants physicsConstants_Y0;
                                      // Computed Parameter: physicsConstants_Y0
                                         //  Referenced by: '<S44>/physicsConstants'

  SL_Bus_sensor_msgs_Imu Out1_Y0_no;   // Computed Parameter: Out1_Y0_no
                                          //  Referenced by: '<S41>/Out1'

  SL_Bus_sensor_msgs_Imu Constant_Value_i;// Computed Parameter: Constant_Value_i
                                             //  Referenced by: '<S38>/Constant'

  SL_Bus_sensor_msgs_Imu Out1_Y0_c;    // Computed Parameter: Out1_Y0_c
                                          //  Referenced by: '<S30>/Out1'

  SL_Bus_sensor_msgs_Imu Constant_Value_j;// Computed Parameter: Constant_Value_j
                                             //  Referenced by: '<S27>/Constant'

  struct_eJsqWOClzwG18rBvtrhWOG MPCparam_Y0;// Computed Parameter: MPCparam_Y0
                                               //  Referenced by: '<S69>/MPC param'

  SL_Bus_sonia_common_ros2_BodyVelocityDVL Out1_Y0_p;// Computed Parameter: Out1_Y0_p
                                                        //  Referenced by: '<S42>/Out1'

  SL_Bus_sonia_common_ros2_BodyVelocityDVL Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                               //  Referenced by: '<S39>/Constant'

  SL_Bus_sonia_common_ros2_BodyVelocityDVL Out1_Y0_g;// Computed Parameter: Out1_Y0_g
                                                        //  Referenced by: '<S31>/Out1'

  SL_Bus_sonia_common_ros2_BodyVelocityDVL Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                               //  Referenced by: '<S28>/Constant'

  struct_dhOFexlPAOq1XLxIBHN1J Output_Y0;// Computed Parameter: Output_Y0
                                            //  Referenced by: '<S1>/Output'

  SL_Bus_sonia_common_ros2_Pose Out1_Y0_d;// Computed Parameter: Out1_Y0_d
                                             //  Referenced by: '<S255>/Out1'

  SL_Bus_sonia_common_ros2_Pose Constant_Value_f4;// Computed Parameter: Constant_Value_f4
                                                     //  Referenced by: '<S252>/Constant'

  SL_Bus_geometry_msgs_Pose Out1_Y0_a; // Computed Parameter: Out1_Y0_a
                                          //  Referenced by: '<S64>/Out1'

  SL_Bus_geometry_msgs_Pose Constant_Value_ja;// Computed Parameter: Constant_Value_ja
                                                 //  Referenced by: '<S58>/Constant'

  struct_TOFpsJJYcOBczOpEd57stD DVLMeasurements_Y0;// Computed Parameter: DVLMeasurements_Y0
                                                      //  Referenced by: '<S177>/DVL Measurements'

  SL_Bus_geometry_msgs_Twist Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                          //  Referenced by: '<S246>/Out1'

  SL_Bus_geometry_msgs_Twist Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                 //  Referenced by: '<S245>/Constant'

  SL_Bus_sonia_common_ros2_KillStatus Out1_Y0_o;// Computed Parameter: Out1_Y0_o
                                                   //  Referenced by: '<S63>/Out1'

  SL_Bus_sonia_common_ros2_KillStatus Constant_Value_eb;// Computed Parameter: Constant_Value_eb
                                                           //  Referenced by: '<S57>/Constant'

  SL_Bus_std_msgs_Bool Constant_Value_c;// Computed Parameter: Constant_Value_c
                                           //  Referenced by: '<S10>/Constant'

  SL_Bus_std_msgs_Bool Out1_Y0_e;      // Computed Parameter: Out1_Y0_e
                                          //  Referenced by: '<S65>/Out1'

  SL_Bus_std_msgs_Bool Out1_Y0_dr;     // Computed Parameter: Out1_Y0_dr
                                          //  Referenced by: '<S66>/Out1'

  SL_Bus_std_msgs_Bool Out1_Y0_j;      // Computed Parameter: Out1_Y0_j
                                          //  Referenced by: '<S67>/Out1'

  SL_Bus_std_msgs_Bool Constant_Value_oy;// Computed Parameter: Constant_Value_oy
                                            //  Referenced by: '<S61>/Constant'

  SL_Bus_std_msgs_Bool Constant_Value_oc;// Computed Parameter: Constant_Value_oc
                                            //  Referenced by: '<S59>/Constant'

  SL_Bus_std_msgs_Bool Constant_Value_ha;// Computed Parameter: Constant_Value_ha
                                            //  Referenced by: '<S60>/Constant'

  SL_Bus_std_msgs_Float32 Out1_Y0_oo;  // Computed Parameter: Out1_Y0_oo
                                          //  Referenced by: '<S43>/Out1'

  SL_Bus_std_msgs_Float32 Constant_Value_d;// Computed Parameter: Constant_Value_d
                                              //  Referenced by: '<S40>/Constant'

  SL_Bus_std_msgs_Float32 Out1_Y0_bc;  // Computed Parameter: Out1_Y0_bc
                                          //  Referenced by: '<S32>/Out1'

  SL_Bus_std_msgs_Float32 Constant_Value_er;// Computed Parameter: Constant_Value_er
                                               //  Referenced by: '<S29>/Constant'

  SL_Bus_std_msgs_UInt8 Out1_Y0_fy;    // Computed Parameter: Out1_Y0_fy
                                          //  Referenced by: '<S62>/Out1'

  SL_Bus_std_msgs_UInt8 Constant_Value_dx;// Computed Parameter: Constant_Value_dx
                                             //  Referenced by: '<S56>/Constant'

  real_T Constant_Value_gj;            // Expression: InsertTimeStamp
                                          //  Referenced by: '<S13>/Constant'

  real_T Constant1_Value;              // Expression: SetFrameID
                                          //  Referenced by: '<S13>/Constant1'

  real_T Constant_Value_kf[36];        // Expression: zeros(1, 36)
                                          //  Referenced by: '<S9>/Constant'

  real_T thrust_Y0;                    // Computed Parameter: thrust_Y0
                                          //  Referenced by: '<S2>/thrust'

  real_T Constant_Value_e2[120];       // Expression: zeros(1,120)
                                          //  Referenced by: '<S21>/Constant'

  real_T Constant1_Value_h[115];       // Expression: zeros(1,115)
                                          //  Referenced by: '<S21>/Constant1'

  real_T Constant3_Value[120];         // Expression: zeros(1,120)
                                          //  Referenced by: '<S21>/Constant3'

  real_T Constant4_Value[120];         // Expression: zeros(1,120)
                                          //  Referenced by: '<S21>/Constant4'

  real_T y_Y0;                         // Computed Parameter: y_Y0
                                          //  Referenced by: '<S25>/y'

  real_T Constant_Value_a;             // Expression: 0
                                          //  Referenced by: '<S25>/Constant'

  real_T Constant1_Value_i;            // Expression: 0
                                          //  Referenced by: '<S25>/Constant1'

  real_T Constant_Value_l;             // Expression: InsertTimeStamp
                                          //  Referenced by: '<S110>/Constant'

  real_T Constant1_Value_l;            // Expression: SetFrameID
                                          //  Referenced by: '<S110>/Constant1'

  real_T Delay_InitialCondition[8];    // Expression: zeros(MPC.nu,1)
                                          //  Referenced by: '<S71>/Delay'

  real_T E_zero_Value[8];              // Expression: zeros(1,8)
                                          //  Referenced by: '<S76>/E_zero'

  real_T F_zero_Value[13];             // Expression: zeros(1,13)
                                          //  Referenced by: '<S76>/F_zero'

  real_T G_zero_Value;                 // Expression: zeros(1,1)
                                          //  Referenced by: '<S76>/G_zero'

  real_T Constant_Value_aa;            // Computed Parameter: Constant_Value_aa
                                          //  Referenced by: '<S79>/Constant'

  real_T LastPcov_InitialCondition[441];// Expression: lastPcov
                                           //  Referenced by: '<S79>/LastPcov'

  real_T extmv_zero_Value[8];          // Expression: zeros(8,1)
                                          //  Referenced by: '<S76>/ext.mv_zero'

  real_T extmv_scale_Gain[8];          // Expression: RMVscale
                                          //  Referenced by: '<S79>/ext.mv_scale'

  real_T last_mv_InitialCondition[8];  // Expression: lastu+uoff
                                          //  Referenced by: '<S79>/last_mv'

  real_T Constant_Value_o1[6];         // Expression: zeros(1,6)
                                          //  Referenced by: '<S71>/Constant'

  real_T Constant1_Value_g[2];         // Expression: zeros(1,2)
                                          //  Referenced by: '<S71>/Constant1'

  real_T ym_zero_Value[13];            // Expression: zeros(nym,1)
                                          //  Referenced by: '<S79>/ym_zero'

  real_T md_zero_Value;                // Expression: zeros(1,1)
                                          //  Referenced by: '<S76>/md_zero'

  real_T ymin_zero_Value[13];          // Expression: zeros(13,1)
                                          //  Referenced by: '<S76>/ymin_zero'

  real_T ymax_zero_Value[13];          // Expression: zeros(13,1)
                                          //  Referenced by: '<S76>/ymax_zero'

  real_T umin_scale4_Gain[8];      // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S79>/umin_scale4'

  real_T ymin_scale1_Gain[13];      // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S79>/ymin_scale1'

  real_T S_zero_Value;                 // Expression: zeros(1,1)
                                          //  Referenced by: '<S76>/S_zero'

  real_T ymin_scale2_Gain;         // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S79>/ymin_scale2'

  real_T switch_zero_Value;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S76>/switch_zero'

  real_T mvtarget_zero_Value[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S76>/mv.target_zero'

  real_T uref_scale_Gain[8];           // Expression: RMVscale
                                          //  Referenced by: '<S79>/uref_scale'

  real_T ecrwt_zero_Value;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S76>/ecr.wt_zero'

  real_T u_scale_Gain[8];              // Expression: MVscale
                                          //  Referenced by: '<S79>/u_scale'

  real_T PulseGenerator_Amp;           // Expression: 1
                                          //  Referenced by: '<S71>/Pulse Generator'

  real_T PulseGenerator_Period;        // Expression: 2
                                          //  Referenced by: '<S71>/Pulse Generator'

  real_T PulseGenerator_Duty;          // Expression: 1
                                          //  Referenced by: '<S71>/Pulse Generator'

  real_T PulseGenerator_PhaseDelay;    // Expression: 0
                                          //  Referenced by: '<S71>/Pulse Generator'

  real_T MATLABSystem_k;               // Expression: 40
                                          //  Referenced by: '<S73>/MATLAB System'

  real_T Constant1_Value_g0;           // Expression: 0
                                          //  Referenced by: '<S73>/Constant1'

  real_T TSamp_WtEt;                   // Computed Parameter: TSamp_WtEt
                                          //  Referenced by: '<S145>/TSamp'

  real_T E_zero_Value_a[8];            // Expression: zeros(1,8)
                                          //  Referenced by: '<S112>/E_zero'

  real_T F_zero_Value_h[13];           // Expression: zeros(1,13)
                                          //  Referenced by: '<S112>/F_zero'

  real_T G_zero_Value_l;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S112>/G_zero'

  real_T LastPcov_InitialCondition_l[441];// Expression: lastPcov
                                             //  Referenced by: '<S115>/LastPcov'

  real_T extmv_zero_Value_i[8];        // Expression: zeros(8,1)
                                          //  Referenced by: '<S112>/ext.mv_zero'

  real_T extmv_scale_Gain_m[8];        // Expression: RMVscale
                                          //  Referenced by: '<S115>/ext.mv_scale'

  real_T last_mv_InitialCondition_k[8];// Expression: lastu+uoff
                                          //  Referenced by: '<S115>/last_mv'

  real_T Constant2_Value[8];           // Expression: zeros(1,8)
                                          //  Referenced by: '<S72>/Constant2'

  real_T ym_zero_Value_a[13];          // Expression: zeros(nym,1)
                                          //  Referenced by: '<S115>/ym_zero'

  real_T md_zero_Value_l;              // Expression: zeros(1,1)
                                          //  Referenced by: '<S112>/md_zero'

  real_T ymin_zero_Value_e[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S112>/ymin_zero'

  real_T ymax_zero_Value_d[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S112>/ymax_zero'

  real_T umin_scale4_Gain_f[8];    // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S115>/umin_scale4'

  real_T ymin_scale1_Gain_p[13];    // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S115>/ymin_scale1'

  real_T S_zero_Value_m;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S112>/S_zero'

  real_T ymin_scale2_Gain_h;       // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S115>/ymin_scale2'

  real_T switch_zero_Value_m;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S112>/switch_zero'

  real_T mvtarget_zero_Value_c[8];     // Expression: zeros(8,1)
                                          //  Referenced by: '<S112>/mv.target_zero'

  real_T uref_scale_Gain_f[8];         // Expression: RMVscale
                                          //  Referenced by: '<S115>/uref_scale'

  real_T ecrwt_zero_Value_o;           // Expression: zeros(1,1)
                                          //  Referenced by: '<S112>/ecr.wt_zero'

  real_T Delay1_InitialCondition[88];  // Expression: zeros(11,8)
                                          //  Referenced by: '<S72>/Delay1'

  real_T Delay_InitialCondition_g[143];// Expression: repmat(MPC.Xi.',11,1)
                                          //  Referenced by: '<S72>/Delay'

  real_T Constant_Value_ce;            // Expression: MPC.Ts
                                          //  Referenced by: '<S72>/Constant'

  real_T Constant1_Value_gt;           // Expression: MPC.dts
                                          //  Referenced by: '<S72>/Constant1'

  real_T u_scale_Gain_o[8];            // Expression: MVscale
                                          //  Referenced by: '<S115>/u_scale'

  real_T useq_scale_Gain[88];          // Expression: MVscale(:,ones(1,p+1))'
                                          //  Referenced by: '<S115>/useq_scale'

  real_T useq_scale1_Gain[143];        // Expression: Yscale(:,ones(1,p+1))'
                                          //  Referenced by: '<S115>/useq_scale1'

  real_T PulseGenerator_Amp_a;         // Expression: 1
                                          //  Referenced by: '<S72>/Pulse Generator'

  real_T PulseGenerator_Period_d;      // Expression: 2
                                          //  Referenced by: '<S72>/Pulse Generator'

  real_T PulseGenerator_Duty_l;        // Expression: 1
                                          //  Referenced by: '<S72>/Pulse Generator'

  real_T PulseGenerator_PhaseDelay_l;  // Expression: 0
                                          //  Referenced by: '<S72>/Pulse Generator'

  real_T Delay_InitialCondition_a[8];  // Expression: zeros(MPC.nu,1)
                                          //  Referenced by: '<S75>/Delay'

  real_T md_zero_Value_j;              // Expression: zeros(1,1)
                                          //  Referenced by: '<S147>/md_zero'

  real_T mvtarget_zero_Value_f[8];     // Expression: zeros(8,1)
                                          //  Referenced by: '<S147>/mv.target_zero'

  real_T ymin_zero_Value_b[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S147>/y.min_zero'

  real_T ymax_zero_Value_e[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S147>/y.max_zero'

  real_T dmvmin_zero_Value[8];         // Expression: zeros(8,1)
                                          //  Referenced by: '<S147>/dmv.min_zero'

  real_T dmvmax_zero_Value[8];         // Expression: zeros(8,1)
                                          //  Referenced by: '<S147>/dmv.max_zero'

  real_T xmin_zero_Value[13];          // Expression: zeros(13,1)
                                          //  Referenced by: '<S147>/x.min_zero'

  real_T xmax_zero_Value[13];          // Expression: zeros(13,1)
                                          //  Referenced by: '<S147>/x.max_zero'

  real_T ecrwt_zero_Value_b;           // Expression: zeros(1,1)
                                          //  Referenced by: '<S147>/ecr.wt_zero'

  real_T params_zero_Value;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S147>/params_zero'

  real_T ones_Value[11];              // Expression: ones(PredictionHorizon+1,1)
                                         //  Referenced by: '<S149>/ones'

  real_T Constant1_Value_iz[9];        // Expression: 2:max(2,PredictionHorizon)
                                          //  Referenced by: '<S149>/Constant1'

  real_T Constant_Value_ld[9];
                 // Expression: min(3,PredictionHorizon+1):(PredictionHorizon+1)
                    //  Referenced by: '<S149>/Constant'

  real_T einit_zero_Value;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S147>/e.init_zero'

  real_T PulseGenerator_Amp_n;         // Expression: 1
                                          //  Referenced by: '<S75>/Pulse Generator'

  real_T PulseGenerator_Period_f;      // Expression: 20
                                          //  Referenced by: '<S75>/Pulse Generator'

  real_T PulseGenerator_Duty_c;        // Expression: 10
                                          //  Referenced by: '<S75>/Pulse Generator'

  real_T PulseGenerator_PhaseDelay_l5; // Expression: 0
                                          //  Referenced by: '<S75>/Pulse Generator'

  real_T Constant_Value_g3b[8];        // Expression: zeros(1,MPC.nu)
                                          //  Referenced by: '<S74>/Constant'

  real_T Constant2_Value_n;            // Expression: 0
                                          //  Referenced by: '<S74>/Constant2'

  real_T Quat_Y0;                      // Computed Parameter: Quat_Y0
                                          //  Referenced by: '<S205>/Quat'

  real_T u2_Gain;                      // Expression: 0.5
                                          //  Referenced by: '<S206>/1//2'

  real_T Constant_Value_iv;  // Expression: simulation.sensors.dvl.maxSpeedThres
                                //  Referenced by: '<S177>/Constant'

  real_T Constant_Value_ll;            // Expression: 0
                                          //  Referenced by: '<S202>/Constant'

  real_T Delay_InitialCondition_f;     // Expression: 1
                                          //  Referenced by: '<S202>/Delay'

  real_T Constant_Value_or;            // Expression: 0.5
                                          //  Referenced by: '<S208>/Constant'

  real_T Gain_Gain;                    // Expression: 2
                                          //  Referenced by: '<S208>/Gain'

  real_T Gain1_Gain;                   // Expression: 2
                                          //  Referenced by: '<S208>/Gain1'

  real_T Gain2_Gain;                   // Expression: 2
                                          //  Referenced by: '<S208>/Gain2'

  real_T Constant_Value_m;             // Expression: 0.5
                                          //  Referenced by: '<S209>/Constant'

  real_T Gain_Gain_g;                  // Expression: 2
                                          //  Referenced by: '<S209>/Gain'

  real_T Gain1_Gain_j;                 // Expression: 2
                                          //  Referenced by: '<S209>/Gain1'

  real_T Gain2_Gain_j;                 // Expression: 2
                                          //  Referenced by: '<S209>/Gain2'

  real_T Constant_Value_j5;            // Expression: 0.5
                                          //  Referenced by: '<S210>/Constant'

  real_T Gain_Gain_e;                  // Expression: 2
                                          //  Referenced by: '<S210>/Gain'

  real_T Gain1_Gain_e;                 // Expression: 2
                                          //  Referenced by: '<S210>/Gain1'

  real_T Gain2_Gain_h;                 // Expression: 2
                                          //  Referenced by: '<S210>/Gain2'

  real_T DepthMeasurements_Y0;       // Computed Parameter: DepthMeasurements_Y0
                                        //  Referenced by: '<S178>/Depth Measurements'

  real_T Constant_Value_b;             // Expression: 0.5
                                          //  Referenced by: '<S218>/Constant'

  real_T Gain_Gain_c;                  // Expression: 2
                                          //  Referenced by: '<S218>/Gain'

  real_T Gain1_Gain_p;                 // Expression: 2
                                          //  Referenced by: '<S218>/Gain1'

  real_T Gain2_Gain_e;                 // Expression: 2
                                          //  Referenced by: '<S218>/Gain2'

  real_T Constant_Value_le;            // Expression: 1
                                          //  Referenced by: '<S179>/Constant'

  real_T xhat_Y0;                      // Computed Parameter: xhat_Y0
                                          //  Referenced by: '<S179>/xhat'

  real_T Q_Value[169];                 // Expression: p.Q
                                          //  Referenced by: '<S221>/Q'

  real_T R3_Value;                     // Expression: p.R{3}
                                          //  Referenced by: '<S221>/R3'

  real_T MeasurementFcn3Inputs_Value;  // Expression: 1
                                          //  Referenced by: '<S221>/MeasurementFcn3Inputs'

  real_T R2_Value[9];                  // Expression: p.R{2}
                                          //  Referenced by: '<S221>/R2'

  real_T MeasurementFcn2Inputs_Value;  // Expression: 1
                                          //  Referenced by: '<S221>/MeasurementFcn2Inputs'

  real_T R1_Value[49];                 // Expression: p.R{1}
                                          //  Referenced by: '<S221>/R1'

  real_T MeasurementFcn1Inputs_Value;  // Expression: 0
                                          //  Referenced by: '<S221>/MeasurementFcn1Inputs'

  real_T Switch_Threshold;             // Expression: 0
                                          //  Referenced by: '<S179>/Switch'

  real_T DataStoreMemoryP_InitialValue[169];// Expression: p.InitialCovariance
                                               //  Referenced by: '<S221>/DataStoreMemory - P'

  real_T DataStoreMemoryx_InitialValue[13];// Expression: p.InitialState
                                              //  Referenced by: '<S221>/DataStoreMemory - x'

  real_T Constant_Value_l4[7];         // Expression: [0 0 0 1 0 0 0]
                                          //  Referenced by: '<S235>/Constant'

  real_T Constant1_Value_hu;           // Expression: MPC.p
                                          //  Referenced by: '<S235>/Constant1'

  real_T Out1_Y0_j3;                   // Computed Parameter: Out1_Y0_j3
                                          //  Referenced by: '<S249>/Out1'

  real_T MATLABSystem1_linearConvergence;// Expression: .25
                                            //  Referenced by: '<S238>/MATLAB System1'

  real_T MATLABSystem1_quaternionConverg;// Expression: .22
                                            //  Referenced by: '<S238>/MATLAB System1'

  real_T MATLABSystem1_TargetThreshold;// Expression: 2
                                          //  Referenced by: '<S238>/MATLAB System1'

  real_T linWpts_Y0;                   // Computed Parameter: linWpts_Y0
                                          //  Referenced by: '<S250>/linWpts'

  real_T RotWpts_Y0;                   // Computed Parameter: RotWpts_Y0
                                          //  Referenced by: '<S250>/RotWpts'

  real_T time_Y0;                      // Computed Parameter: time_Y0
                                          //  Referenced by: '<S250>/time'

  real_T target_Y0;                    // Computed Parameter: target_Y0
                                          //  Referenced by: '<S250>/target'

  real_T Constant_Value_j55;           // Expression: 0
                                          //  Referenced by: '<S250>/Constant'

  real_T PolynomialTrajectory_VelocityBo[6];// Expression: zeros( 3, 2 )
                                               //  Referenced by: '<S254>/Polynomial Trajectory'

  real_T Constant_Value_ht;            // Expression: 1
                                          //  Referenced by: '<S251>/Constant'

  real_T DiscreteTimeIntegrator_gainval;
                           // Computed Parameter: DiscreteTimeIntegrator_gainval
                              //  Referenced by: '<S251>/Discrete-Time Integrator'

  real_T DiscreteTimeIntegrator_IC;    // Expression: 0
                                          //  Referenced by: '<S251>/Discrete-Time Integrator'

  real_T Constant_Value_ao;            // Expression: 0
                                          //  Referenced by: '<S238>/Constant'

  real_T Constant_Value_mt[13];     // Expression: [0,0,0.3,1,0,0,0,0,0,0,0,0,0]
                                       //  Referenced by: '<S231>/Constant'

  real_T Constant1_Value_p;            // Expression: MPC.p
                                          //  Referenced by: '<S231>/Constant1'

  real_T Delay_InitialCondition_fy[8]; // Expression: [0,0,0,0,0,0,0,0]
                                          //  Referenced by: '<S181>/Delay'

  real_T Delay_InitialCondition_at;    // Expression: 0
                                          //  Referenced by: '<S45>/Delay'

  real_T Delay_InitialCondition_fl;    // Expression: 0
                                          //  Referenced by: '<S3>/Delay'

  real_T Gain_Gain_er;                 // Expression: -1
                                          //  Referenced by: '<S236>/Gain'

  real_T Merge_1_InitialOutput;     // Computed Parameter: Merge_1_InitialOutput
                                       //  Referenced by: '<S7>/Merge'

  real_T Merge_1_InitialOutput_i; // Computed Parameter: Merge_1_InitialOutput_i
                                     //  Referenced by: '<S68>/Merge'

  real_T Delay_InitialCondition_c;     // Expression: 0.0
                                          //  Referenced by: '<S70>/Delay'

  real_T Merge_3_InitialOutput;     // Computed Parameter: Merge_3_InitialOutput
                                       //  Referenced by: '<S68>/Merge'

  real_T Merge_4_InitialOutput;     // Computed Parameter: Merge_4_InitialOutput
                                       //  Referenced by: '<S7>/Merge'

  char_T StringConstant1_String[256];  // Expression: FrameID
                                          //  Referenced by: '<S13>/String Constant1'

  char_T StringConstant1_String_j[256];// Expression: FrameID
                                          //  Referenced by: '<S110>/String Constant1'

  int32_T FixedHorizonOptimizer_Ndis;  // Expression: Ndis
                                          //  Referenced by: '<S143>/FixedHorizonOptimizer'

  uint32_T Constant2_Value_l;          // Expression: uint32(MPC.nu)
                                          //  Referenced by: '<S21>/Constant2'

  uint32_T Constant5_Value;            // Expression: uint32(MPC.nx)
                                          //  Referenced by: '<S21>/Constant5'

  uint32_T Constant6_Value;            // Expression: uint32(MPC.nu)
                                          //  Referenced by: '<S21>/Constant6'

  uint32_T Constant7_Value;            // Expression: uint32(MPC.nu)
                                          //  Referenced by: '<S21>/Constant7'

  uint16_T mv_Y0;                      // Computed Parameter: mv_Y0
                                          //  Referenced by: '<S2>/mv'

  uint16_T Delay_InitialCondition_e[8];
                                 // Computed Parameter: Delay_InitialCondition_e
                                    //  Referenced by: '<S5>/Delay'

  boolean_T Memory_InitialCondition[226];// Expression: iA
                                            //  Referenced by: '<S79>/Memory'

  boolean_T Memory_InitialCondition_n[226];// Expression: iA
                                              //  Referenced by: '<S115>/Memory'

  boolean_T yBlockOrdering_Y0;         // Computed Parameter: yBlockOrdering_Y0
                                          //  Referenced by: '<S222>/yBlockOrdering'

  boolean_T yBlockOrdering_Y0_l;      // Computed Parameter: yBlockOrdering_Y0_l
                                         //  Referenced by: '<S223>/yBlockOrdering'

  boolean_T yBlockOrdering_Y0_h;      // Computed Parameter: yBlockOrdering_Y0_h
                                         //  Referenced by: '<S224>/yBlockOrdering'

  boolean_T BlockOrdering_Value;       // Expression: true()
                                          //  Referenced by: '<S221>/BlockOrdering'

  boolean_T Enable1_Value;             // Expression: true()
                                          //  Referenced by: '<S221>/Enable1'

  boolean_T Enable3_Value;             // Expression: true()
                                          //  Referenced by: '<S221>/Enable3'

  boolean_T Constant2_Value_h;         // Expression: false
                                          //  Referenced by: '<S235>/Constant2'

  boolean_T Constant3_Value_i;         // Expression: false
                                          //  Referenced by: '<S235>/Constant3'

  boolean_T Constant_Value_pl;         // Computed Parameter: Constant_Value_pl
                                          //  Referenced by: '<S241>/Constant'

  boolean_T Delay_InitialCondition_az;
                                // Computed Parameter: Delay_InitialCondition_az
                                   //  Referenced by: '<S238>/Delay'

  boolean_T Constant1_Value_is;        // Expression: false
                                          //  Referenced by: '<S238>/Constant1'

  boolean_T Constant2_Value_a;         // Expression: false
                                          //  Referenced by: '<S231>/Constant2'

  boolean_T Constant3_Value_n;         // Expression: false
                                          //  Referenced by: '<S231>/Constant3'

  boolean_T Merge_2_InitialOutput;  // Computed Parameter: Merge_2_InitialOutput
                                       //  Referenced by: '<S7>/Merge'

  boolean_T Merge_3_InitialOutput_i;
                                  // Computed Parameter: Merge_3_InitialOutput_i
                                     //  Referenced by: '<S7>/Merge'

  int8_T Constant_Value_m0;            // Expression: int8(0)
                                          //  Referenced by: '<S73>/Constant'

  int8_T Constant1_Value_j;            // Expression: int8(0)
                                          //  Referenced by: '<S74>/Constant1'

  int8_T Merge_2_InitialOutput_i; // Computed Parameter: Merge_2_InitialOutput_i
                                     //  Referenced by: '<S68>/Merge'

};

// Real-time Model Data Structure
struct tag_RTM_proc_control_T {
  const char_T * volatile errorStatus;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    struct {
      uint8_T TID[5];
    } TaskCounters;
  } Timing;
};

// Class declaration for model proc_control
class proc_control
{
  // public data and function members
 public:
  // Real-Time Model get method
  RT_MODEL_proc_control_T * getRTM();

  // model initialize function
  void initialize();

  // model step function
  void step();

  // model terminate function
  void terminate();

  // Constructor
  proc_control();

  // Destructor
  ~proc_control();

  // private data and function members
 private:
  // Block signals
  B_proc_control_T proc_control_B;

  // Block states
  DW_proc_control_T proc_control_DW;

  // Tunable parameters
  static P_proc_control_T proc_control_P;

  // Triggered events
  PrevZCX_proc_control_T proc_control_PrevZCX;

  // private member function(s) for subsystem '<S2>/MATLAB Function'
  static void proc_control_MATLABFunction(const uint16_T rtu_data[8], uint16_T
    *rty_m1, uint16_T *rty_m2, uint16_T *rty_m3, uint16_T *rty_m4, uint16_T
    *rty_m5, uint16_T *rty_m6, uint16_T *rty_m7, uint16_T *rty_m8);

  // private member function(s) for subsystem '<Root>'
  real_T proc_control_xnrm2_pr(int32_T n, const real_T x[140], int32_T ix0);
  void proc_control_qr(const real_T A[140], real_T Q[140], real_T R[49]);
  void proc_control_trisolve_p(const real_T A[49], real_T B[91]);
  void proc_control_trisolve_pr(const real_T A[49], real_T B[91]);
  real_T proc_control_xnrm2_pr3(int32_T n, const real_T x[260], int32_T ix0);
  void proc_control_qr_p(const real_T A[260], real_T Q[260], real_T R[169]);
  real_T proc_control_xnrm2_pr35(int32_T n, const real_T x[48], int32_T ix0);
  void proc_control_qr_pr(const real_T A[48], real_T Q[48], real_T R[9]);
  void proc_control_trisolve_pr3(const real_T A[9], real_T B[39]);
  void proc_control_trisolve_pr35(const real_T A[9], real_T B[39]);
  real_T proc_control_xnrm2_pr351(int32_T n, const real_T x[208], int32_T ix0);
  void proc_control_qr_pr3(const real_T A[208], real_T Q[208], real_T R[169]);
  real_T proc_control_xnrm2_pr351e(int32_T n, const real_T x[14], int32_T ix0);
  void EKFCorrectorAdditive_getMeasure(real_T Rs, const real_T x[13], const
    real_T S[169], real_T *zEstimated, real_T Pxy[13], real_T *Sy, real_T dHdx
    [13], real_T *Rsqrt);
  void proc_control_trisolve_pr351(real_T A, real_T B[13]);
  real_T proc_control_xnrm2_pr351ew(int32_T n, const real_T x[182], int32_T ix0);
  void proc_control_qr_pr35(const real_T A[182], real_T Q[182], real_T R[169]);
  void proc_control_mldivide_pr351(const real_T A[36], real_T B[48]);
  real_T proc_control_erf(real_T x);
  void proc_control_ft_3_pr(const real_T ct[1016], real_T out1[13]);
  void proc_control_ft_2_pr(const real_T ct[812], real_T out1[13]);
  void proc_control_ft_1_pr(const real_T ct[445], real_T out1[13]);
  void proc_con_AUVQuatPerturbedSimFcn(const real_T in1[13], const real_T in2[6],
    const real_T in4[38], real_T out1[13]);
  void proc_control_EkfNavStatesEq(real_T x[13], const real_T inputs[95]);
  real_T proc_control_xnrm2_pr351ewp(int32_T n, const real_T x[338], int32_T ix0);
  void proc_control_qr_pr351(const real_T A[338], real_T Q[338], real_T R[169]);
  void proc_contr_mpcManager_resetImpl(mpcManager_proc_control_T *b_this);
  void proc_control_expand_atan2(const real_T a_data[], const int32_T a_size[1],
    const real_T b_data[], const int32_T b_size[1], real_T c_data[], int32_T
    c_size[1]);
  void proc_control_binary_expand_op_1(real_T in1[3], const int32_T in2_size[1],
    const real_T in3_data[], const real_T in4_data[]);
  void pr_ProcPlannerManager_resetImpl(ProcPlannerManager_proc_contr_T *b_this);
  void proc_control_binary_expand_op_8(real_T in1[3], const int32_T in2_data[],
    const int32_T in2_size[1], const real_T in3_data[], const real_T in4_data[]);
  real_T proc_control_norm_pr3(const real_T x[3]);
  void pro_ProcPlannerManager_stepImpl(ProcPlannerManager_proc_contr_T *b_this,
    boolean_T isNew, const SL_Bus_geometry_msgs_Transform trajMsg_transforms[16],
    uint32_T trajMsg_transforms_SL_Info_Rece, const SL_Bus_geometry_msgs_Twist
    trajMsg_velocities[16], real_T reset, const real_T mesuredPose[13], real_T
    mpcParams_targetReached_linearT, real_T mpcParams_targetReached_angular,
    real_T mpcParams_targetReached_timeInT, real_T currentPose[130], boolean_T
    *isReached, boolean_T *isTrajDone, real_T initWpt[7]);
  void proc_control_binary_expand_op(real_T in1[3], const int32_T in2_size[1],
    const real_T in3_data[], const real_T in4_data[]);
  void proc__quaternion_parenReference(real_T obj_a, real_T obj_b, real_T obj_c,
    real_T obj_d, boolean_T varargin_1, real_T o_a_data[], int32_T o_a_size[2],
    real_T o_b_data[], int32_T o_b_size[2], real_T o_c_data[], int32_T o_c_size
    [2], real_T o_d_data[], int32_T o_d_size[2]);
  void proc_con_quaternion_parenAssign(quaternion_proc_control_T *obj, const
    real_T rhs_a_data[], const real_T rhs_b_data[], const real_T rhs_c_data[],
    const real_T rhs_d_data[], boolean_T varargin_1);
  quaternion_proc_control_T proc_contr_quaternionBase_slerp(real_T q1_a, real_T
    q1_b, real_T q1_c, real_T q1_d, real_T q2_a, real_T q2_b, real_T q2_c,
    real_T q2_d);
  quaternion_proc_control_T proc_con_quaternionBase_slerp_p(real_T q1_a, real_T
    q1_b, real_T q1_c, real_T q1_d, real_T q2_a, real_T q2_b, real_T q2_c,
    real_T q2_d);
  quaternion_proc_control_T proc_co_quaternionBase_slerp_pr(real_T q1_a, real_T
    q1_b, real_T q1_c, real_T q1_d, real_T q2_a, real_T q2_b, real_T q2_c,
    real_T q2_d, real_T t);
  void proc_contro_binary_expand_op_12(real_T in1_data[], int32_T in1_size[2],
    real_T in2, int32_T in3);
  void proc_control_binary_expand_op_9(real_T *in1, const int32_T in2_size[2],
    real_T in3, const real_T in4_data[], const int32_T in4_size[2]);
  void proc_control_quaternionBase_log(real_T q_a, real_T q_b, real_T q_c,
    real_T q_d, real_T *b_q_a, real_T *b_q_b, real_T *b_q_c, real_T *b_q_d);
  void proc_contro_generateCubicCoeffs(const real_T posPts[2], const real_T
    velPts[2], real_T finalTime, real_T coeffVec[4]);
  void pr_addFlatSegmentsToPPFormParts(const real_T oldbreaks[2], const real_T
    oldCoeffs[12], real_T newBreaks[4], real_T newCoefs[36]);
  void PolyTrajSys_updateStoredPPForms(robotics_slcore_internal_bl_p_T *obj,
    const real_T pp_breaks[4], const real_T pp_coefs[36]);
  void proc_control_ppval(const real_T pp_breaks[4], const real_T pp_coefs[36],
    real_T x, real_T v[3]);
  void proc_TrajectoryManager_stepImpl(TrajectoryManager_proc_contro_T *b_this,
    real_T reset, const real_T poses[13], const real_T target[7], const real_T
    x0[7], const real_T mesuredPose[13], real_T currentPose[130], boolean_T
    *isReached);
  void proc_contro_TrimPlant_resetImpl(TrimPlant_proc_control_T *b_this);
  void proc_control_eul2quat(const real_T eul[3], real_T q[4]);
  void proc_control_xgetrf_p(real_T A[36], int32_T ipiv[6], int32_T *info);
  void proc_control_mldivide_pr3(const real_T A[36], real_T B[48]);
  void proc_control_quatmultiply(const real_T q[4], const real_T r[4], real_T
    qout[4]);
  void proc_control_ft_6(const real_T ct[2166], real_T Anq[169]);
  void proc_control_ft_5(const real_T ct[1959], real_T Anq[169]);
  void proc_control_ft_4(const real_T ct[1640], real_T Anq[169]);
  void proc_control_ft_3(const real_T ct[1260], real_T Anq[169]);
  void proc_control_ft_2(const real_T ct[805], real_T Anq[169]);
  void proc_control_ft_1(const real_T ct[433], real_T Anq[169]);
  void proc_cont_AUVQuatJacobianMatrix(const real_T in1[13], const real_T in3[38],
    real_T Anq[169]);
  real_T proc_control_norm_p(const real_T x[169]);
  void proc_control_mpower(const real_T a[169], real_T b, real_T c[169]);
  real_T proc_control_log2(real_T x);
  void proc_control_padeApproximation(const real_T A[169], const real_T A2[169],
    const real_T A4[169], const real_T A6[169], int32_T m, real_T F[169]);
  void proc_control_recomputeBlockDiag(const real_T A[169], real_T F[169], const
    int32_T blockFormat[12]);
  real_T proc_control_xnrm2_p(int32_T n, const real_T x[169], int32_T ix0);
  void proc_control_xzsyhetrd(real_T A[169], real_T D[13], real_T E[12], real_T
    tau[12]);
  void proc_control_xzlascl(real_T cfrom, real_T cto, int32_T m, real_T A[13],
    int32_T iA0);
  void proc_control_xzlascl_p(real_T cfrom, real_T cto, int32_T m, real_T A[12],
    int32_T iA0);
  void proc_control_xzlartg(real_T f, real_T g, real_T *cs, real_T *sn, real_T
    *r);
  void proc_control_rotateRight_p(int32_T n, real_T z[169], int32_T iz0, const
    real_T cs[24], int32_T ic0, int32_T is0);
  void proc_control_xdlaev2(real_T a, real_T b, real_T c, real_T *rt1, real_T
    *rt2, real_T *cs1, real_T *sn1);
  void proc_control_rotateRight(int32_T n, real_T z[169], int32_T iz0, const
    real_T cs[24], int32_T ic0, int32_T is0);
  int32_T proc_control_xzsteqr(real_T d[13], real_T e[12], real_T z[169]);
  void proc_control_xsyheev(const real_T A[169], int32_T *info, real_T W[13],
    real_T b_A[169]);
  void proc_control_expm(real_T A[169], real_T F[169]);
  void proc_control_mldivide_pr35(const real_T A[36], real_T B[36]);
  void proc_control_ft_3_p(const real_T ct[1016], real_T out1[13]);
  void proc_control_ft_2_p(const real_T ct[804], real_T out1[13]);
  void proc_control_ft_1_p(const real_T ct[435], real_T out1[13]);
  void proc_control_AUVQuatSimFcn(const real_T in1[13], const real_T in3[38],
    real_T out1[13]);
  real_T proc_control_norm_pr(const real_T x[4]);
  void proc_control_TrimPlant_stepImpl(TrimPlant_proc_control_T *b_this, const
    real_T u[8], real_T y[13], real_T ref[130], real_T constMec_rho, real_T
    constMec_g, real_T constMec_mass, real_T constMec_volume, real_T
    constMec_sub_height, const real_T constMec_rg[3], const real_T constMec_rb[3],
    const real_T constMec_cdl[6], const real_T constMec_cdq[6], const real_T
    constMec_added_mass[6], const real_T constMec_I[9], const real_T
    constMec_thrusters[48], real_T A[169], real_T B[104], real_T C[169], real_T
    D[104], real_T U[8], real_T Y[13], real_T X[13], real_T DX[13], real_T Z[13]);
  void proc_control_kron(const int32_T b_A_size[1], real_T K_data[], int32_T
    K_size[2]);
  void proc_control_mtimes(const real_T b_A_data[], const int32_T b_A_size[2],
    const real_T b_B_data[], const int32_T b_B_size[2], real_T b_C_data[],
    int32_T b_C_size[2]);
  void proc_control_mpc_constraintcoef(const real_T b_A[441], const real_T Bu
    [168], const real_T Bv[21], const real_T b_C[273], const real_T Dv[13],
    const real_T Jm_data[], const int32_T Jm_size[2], real_T SuJm_data[],
    int32_T SuJm_size[2], real_T Sx_data[], int32_T Sx_size[2], real_T Su1_data[],
    int32_T Su1_size[2], real_T Hv_data[], int32_T Hv_size[2]);
  void proc_control_Mrows_reshape(boolean_T isMrows_data[], real_T
    Mlimfull_data[], real_T Vfull_data[], const boolean_T isMrows0[436], const
    real_T Mlimfull0[436], const real_T Vfull0[436], int32_T b_p);
  void proc_control_Mrows_reshape_h(boolean_T isMrows_data[], real_T
    Mlimfull_data[], real_T Vfull_data[], const boolean_T isMrows0[436], const
    real_T Mlimfull0[436], const real_T Vfull0[436], int32_T b_p, int32_T ioff);
  void proc_control_Mrows_reshape_hn(boolean_T isMrows_data[], real_T
    Mlimfull_data[], real_T Vfull_data[], const boolean_T isMrows0[436], const
    real_T Mlimfull0[436], const real_T Vfull0[436], int32_T b_p, int32_T ioff);
  void proc_control_Mrows_reshape_hny(boolean_T isMrows_data[], real_T
    Mlimfull_data[], real_T Vfull_data[], const boolean_T isMrows0[436], const
    real_T Mlimfull0[436], const real_T Vfull0[436], int32_T b_p, int32_T ioff);
  void proc_control_Mrows_reshape_hnyc(boolean_T isMrows_data[], real_T
    Mlimfull_data[], real_T Vfull_data[], const boolean_T isMrows0[436], const
    real_T Mlimfull0[436], const real_T Vfull0[436], int32_T b_p, int32_T ioff);
  void proc_contro_Mrows_reshape_hnycd(boolean_T isMrows_data[], real_T
    Mlimfull_data[], real_T Vfull_data[], const boolean_T isMrows0[436], const
    real_T Mlimfull0[436], const real_T Vfull0[436], int32_T b_p, int32_T ioff);
  int32_T proc_cont_combineVectorElements(const boolean_T x_data[], const
    int32_T x_size[1]);
  void proc_control_tril(real_T x_data[], const int32_T x_size[2]);
  void proc_control_eye(real_T b_I[64]);
  void proc_control_kron_b(const real_T b_A_data[], const int32_T b_A_size[2],
    const real_T b_B[64], real_T K_data[], int32_T K_size[2]);
  void proc_control_eye_f(int32_T varargin_1, real_T b_I_data[], int32_T
    b_I_size[2]);
  void proc_control_updateWeights(const real_T b_signal[13], real_T W[13]);
  void proc_control_updateWeights_c(const real_T b_signal[8], real_T W[8]);
  void proc_control_WtMult(const real_T W[8], const real_T M_data[], const
    int32_T M_size[2], real_T WM_data[], int32_T WM_size[2]);
  void proc_control_mtimes_a(const real_T b_A_data[], const int32_T b_A_size[2],
    const real_T b_B_data[], const int32_T b_B_size[2], real_T b_C_data[],
    int32_T b_C_size[2]);
  void proc_control_binary_expand_op_3(real_T in1_data[], int32_T in1_size[2],
    const real_T in2_data[], const int32_T in2_size[2], const real_T in3_data[],
    const int32_T in3_size[2], const real_T in4_data[], const int32_T in4_size[2],
    const real_T in5[8], const real_T in6_data[], const int32_T in6_size[2],
    const real_T in7_data[], const int32_T in7_size[2]);
  void proc_control_mtimes_af(const real_T b_A_data[], const int32_T b_A_size[2],
    const real_T b_B_data[], const int32_T b_B_size[2], real_T b_C_data[],
    int32_T b_C_size[2]);
  void proc_control_binary_expand_op_2(real_T in1_data[], int32_T in1_size[2],
    const real_T in2_data[], const int32_T in2_size[2], const real_T in3_data[],
    const int32_T in3_size[2], const real_T in4_data[], const int32_T in4_size[2],
    const real_T in5_data[], const int32_T in5_size[2]);
  void proc_contr_mpc_calculatehessian(const real_T b_Wy[13], const real_T b_Wu
    [8], const real_T b_Wdu[8], const real_T SuJm_data[], const int32_T
    SuJm_size[2], const real_T I2Jm_data[], const int32_T I2Jm_size[2], const
    real_T Jm_data[], const int32_T Jm_size[2], const real_T I1_data[], const
    int32_T I1_size[2], const real_T Su1_data[], const int32_T Su1_size[2],
    const real_T Sx_data[], const int32_T Sx_size[2], const real_T Hv_data[],
    const int32_T Hv_size[2], real_T b_H_data[], int32_T b_H_size[2], real_T
    Ku1_data[], int32_T Ku1_size[2], real_T Kut_data[], int32_T Kut_size[2],
    real_T Kx_data[], int32_T Kx_size[2], real_T Kv_data[], int32_T Kv_size[2],
    real_T Kr_data[], int32_T Kr_size[2]);
  int32_T proc_control_xpotrf(int32_T n, real_T b_A_data[], int32_T lda);
  void proc_control_diag(const real_T v_data[], const int32_T v_size[2], real_T
    d_data[], int32_T d_size[1]);
  real_T proc_control_minimum(const real_T x_data[], const int32_T x_size[1]);
  void proc_control_binary_expand_op_4(real_T in1_data[], int32_T in1_size[2],
    real_T in2, const int8_T in3_data[], const int32_T in3_size[2]);
  void proc_control_mpc_checkhessian(real_T b_H_data[], int32_T b_H_size[2],
    real_T L_data[], int32_T L_size[2], real_T *BadH);
  void proc_control_eye_f3(int32_T varargin_1, real_T b_I_data[], int32_T
    b_I_size[2]);
  void proc_control_trisolve(const real_T b_A_data[], const int32_T b_A_size[2],
    real_T b_B_data[], const int32_T b_B_size[2]);
  void proc_control_linsolve(const real_T b_A_data[], const int32_T b_A_size[2],
    const real_T b_B_data[], const int32_T b_B_size[2], real_T b_C_data[],
    int32_T b_C_size[2]);
  void proc_control_mtimes_afa(const coder::array<real_T, 2U> &b_A, const real_T
    b_B[21], coder::array<real_T, 1U> &b_C);
  void proc_control_mtimes_afai(const coder::array<real_T, 2U> &b_A, const
    real_T b_B[8], coder::array<real_T, 1U> &b_C);
  void proc_control_mtimes_afai0(const coder::array<real_T, 2U> &b_A, const
    coder::array<real_T, 1U> &b_B, coder::array<real_T, 1U> &b_C);
  void proc_control_binary_expand_op_7(coder::array<real_T, 1U> &in1, const
    coder::array<real_T, 1U> &in2, const coder::array<real_T, 2U> &in3, const
    real_T in4[21], const coder::array<real_T, 2U> &in5, const real_T in6[8],
    const coder::array<real_T, 2U> &in7, const coder::array<real_T, 1U> &in8);
  real_T proc_control_norm(const real_T x_data[], const int32_T x_size[1]);
  void proc_control_binary_expand_op_5(real_T in1_data[], int32_T in1_size[2],
    const coder::array<real_T, 2U> &in2, int32_T in3, const real_T in4_data[],
    const int32_T in4_size[1]);
  void proc_control_mtimes_afai05(const real_T b_A_data[], const int32_T
    b_A_size[2], const real_T b_B_data[], real_T b_C_data[], int32_T b_C_size[1]);
  real_T proc_control_xnrm2(int32_T n, const real_T x_data[], int32_T ix0);
  void proc_control_xgemv(int32_T b_m, int32_T n, const real_T b_A_data[],
    int32_T ia0, int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
  void proc_control_xgerc(int32_T b_m, int32_T n, real_T alpha1, int32_T ix0,
    const real_T y_data[], real_T b_A_data[], int32_T ia0, int32_T lda);
  void proc_control_xgeqrf(real_T b_A_data[], const int32_T b_A_size[2], real_T
    tau_data[], int32_T tau_size[1]);
  void proc_control_xorgqr(int32_T b_m, int32_T n, int32_T k, real_T b_A_data[],
    const int32_T b_A_size[2], int32_T lda, const real_T tau_data[]);
  real_T proc_control_KWIKfactor(const coder::array<real_T, 2U> &b_Ac, const
    coder::array<int32_T, 1U> &iC, int32_T nA, const real_T Linv_data[], const
    int32_T Linv_size[2], real_T RLinv_data[], const int32_T RLinv_size[2],
    real_T b_D_data[], const int32_T b_D_size[2], real_T b_H_data[], const
    int32_T b_H_size[2], int32_T n);
  void proc_control_binary_expand_op_6(real_T in1_data[], int32_T in1_size[1],
    real_T in2, const real_T in3_data[], const int32_T in3_size[1]);
  void proc_control_mpc_solveQP(const real_T xQP[21], int32_T nCon, int32_T
    b_degrees, const real_T Kx_data[], const real_T Kr_data[], const int32_T
    Kr_size[2], const coder::array<real_T, 1U> &rseq, const real_T Ku1_data[],
    const real_T old_u[8], const real_T Kv_data[], const int32_T Kv_size[2],
    const coder::array<real_T, 1U> &vseq, const real_T Kut_data[], const int32_T
    Kut_size[2], const real_T b_utarget_data[], const real_T Linv_data[], const
    int32_T Linv_size[2], const real_T Hinv_data[], const int32_T Hinv_size[2],
    const coder::array<real_T, 2U> &b_Ac, const coder::array<real_T, 1U> &Bc,
    const coder::array<boolean_T, 1U> &iA, real_T zopt_data[], int32_T
    zopt_size[1], real_T f_data[], int32_T f_size[1], real_T *status);
  void proc_contr_mpcblock_optimizerPM(const coder::array<real_T, 1U> &rseq,
    const coder::array<real_T, 1U> &vseq, const real_T umin[8], const real_T
    umax[8], const real_T x[21], const real_T old_u[8], const real_T Mlim0[226],
    const real_T utargetseq[80], int32_T b_p, int32_T moves, const real_T
    b_uoff[8], const real_T H0[81], const real_T Ac0[2034], const real_T ywt[13],
    const real_T uwt[8], const real_T duwt[8], const real_T b_A[441], const
    coder::array<real_T, 3U> &Bu, const coder::array<real_T, 3U> &Bv, const
    real_T b_C[273], const coder::array<real_T, 3U> &Dv, real_T u[8], real_T
    useq[88], real_T *status);
  boolean_T proc_control_isequal(const real_T varargin_1[3], const real_T
    varargin_2[3]);
  boolean_T proc_control_isequal_p(const real_T varargin_1[6], const real_T
    varargin_2[6]);
  real_T proc_control_norm_nt(const real_T x[169]);
  void proc_control_mpower_g(const real_T a[169], real_T b, real_T c[169]);
  real_T proc_control_log2_o(real_T x);
  void proc_contro_padeApproximation_b(const real_T A[169], const real_T A2[169],
    const real_T A4[169], const real_T A6[169], int32_T m, real_T F[169]);
  void proc_contr_recomputeBlockDiag_a(const real_T A[169], real_T F[169], const
    int32_T blockFormat[12]);
  real_T proc_control_xnrm2_h(int32_T n, const real_T x[169], int32_T ix0);
  void proc_control_xzsyhetrd_c(real_T A[169], real_T D[13], real_T E[12],
    real_T tau[12]);
  void proc_control_xzlascl_g(real_T cfrom, real_T cto, int32_T m, real_T A[13],
    int32_T iA0);
  void proc_control_xzlascl_gj(real_T cfrom, real_T cto, int32_T m, real_T A[12],
    int32_T iA0);
  void proc_control_xzlartg_c(real_T f, real_T g, real_T *cs, real_T *sn, real_T
    *r);
  void proc_control_rotateRight_nh(int32_T n, real_T z[169], int32_T iz0, const
    real_T cs[24], int32_T ic0, int32_T is0);
  void proc_control_xdlaev2_d(real_T a, real_T b, real_T c, real_T *rt1, real_T *
    rt2, real_T *cs1, real_T *sn1);
  void proc_control_rotateRight_n(int32_T n, real_T z[169], int32_T iz0, const
    real_T cs[24], int32_T ic0, int32_T is0);
  int32_T proc_control_xzsteqr_h(real_T d[13], real_T e[12], real_T z[169]);
  void proc_control_xsyheev_c(real_T A[169], int32_T *info, real_T W[13]);
  void proc_control_expm_l(real_T A[169], real_T F[169]);
  void proc_control_mldivide_jo(const real_T A[36], real_T B[36]);
  void proc_control_AUV8QuatSimFcn(const real_T in1[13], const real_T in2[8],
    real_T out1[13]);
  real_T proc_control_norm_nti(const real_T x[4]);
  void proc_control_mpc_plantupdate(const real_T a[169], real_T b[104], const
    real_T c[169], real_T b_A[441], real_T b_B[630], real_T b_C[273], const
    real_T b_D[390], const int32_T b_mvindex[8], const int32_T b_myindex[13],
    const real_T b_Uscale[8], const real_T b_Yscale[13], real_T Bu[168], real_T
    Bv[21], real_T Cm[273], real_T Dv[13], real_T Dvm[13], real_T QQ[441],
    real_T RR[169], real_T NN[273]);
  void proc_cont_mpc_constraintcoefLTV(const real_T b_A[4851], const real_T Bu
    [1848], const real_T Bv[231], const real_T b_C[3003], const real_T Dv[143],
    const real_T b_Jm[640], real_T b_SuJm[1040], real_T b_Sx[2730], real_T
    b_Su1[1040], real_T b_Hv[1430]);
  int32_T proc_control_xpotrf_f(real_T b_A[81]);
  real_T proc_control_minimum_l(const real_T x[9]);
  void proc_control_trisolve_g(const real_T b_A[81], real_T b_B[81]);
  real_T proc_control_norm_n(const real_T x[9]);
  real_T proc_control_maximum(const real_T x[9]);
  real_T proc_control_xnrm2_g(int32_T n, const real_T x[81], int32_T ix0);
  void proc_control_xgemv_f(int32_T b_m, int32_T n, const real_T b_A[81],
    int32_T ia0, const real_T x[81], int32_T ix0, real_T y[9]);
  void proc_control_xgerc_g(int32_T b_m, int32_T n, real_T alpha1, int32_T ix0,
    const real_T y[9], real_T b_A[81], int32_T ia0);
  void proc_control_KWIKfactor_k(const real_T b_Ac[2034], const int32_T iC[226],
    int32_T nA, const real_T b_Linv[81], real_T b_D[81], real_T b_H[81], int32_T
    n, real_T RLinv[81], real_T *Status);
  void proc_control_DropConstraint(int32_T kDrop, boolean_T iA[226], int32_T *nA,
    int32_T iC[226]);
  void proc_control_qpkwik(const real_T b_Linv[81], const real_T b_Hinv[81],
    const real_T f[9], const real_T b_Ac[2034], const real_T b[226], boolean_T
    iA[226], int32_T maxiter, real_T FeasTol, real_T x[9], real_T lambda[226],
    int32_T *status);
  void proc_control_mpcblock_optimizer(const real_T rseq[130], const real_T
    vseq[11], const real_T umin[8], const real_T umax[8], const real_T x[21],
    const real_T old_u[8], const boolean_T iA[226], const real_T b_Mlim[226],
    real_T b_Mx[4746], real_T b_Mu1[1808], real_T b_Mv[2486], const real_T
    b_utarget[80], const real_T b_uoff[8], real_T b_H[81], real_T b_Ac[2034],
    const real_T ywt[13], const real_T uwt[8], const real_T duwt[8], const
    real_T b_Jm[640], const real_T b_I1[640], const real_T b_A[4851], const
    real_T Bu[1848], const real_T Bv[231], const real_T b_C[3003], const real_T
    Dv[143], const int32_T b_Mrows[226], const real_T b_RMVscale[8], real_T u[8],
    real_T useq[88], real_T *status, boolean_T iAout[226]);
  void proc_control_isfinite(const real_T x[8], boolean_T b[8]);
  void proc_control_mtimes_e(const real_T A_data[], const int32_T A_size[2],
    real_T C_data[], int32_T C_size[2]);
  void proc_control_getUBounds(const real_T runtimedata_lastMV[8], const real_T
    runtimedata_MVMin[80], const real_T runtimedata_MVMax[80], const real_T
    runtimedata_MVRateMin[80], const real_T runtimedata_MVRateMax[80], real_T
    A_data[], int32_T A_size[2], real_T Bu_data[], int32_T Bu_size[1]);
  void proc_control_getXUe(const real_T z[139], const real_T x[13], real_T X[143],
    real_T U[88], real_T *e);
  void proc_con_AUV8QuatJacobianMatrix(const real_T in1[13], real_T Anqv[169]);
  void proc_control_stateEvolution(const real_T X[143], const real_T U[88],
    real_T c[130], real_T J[18070]);
  void proc_control_all(const boolean_T x[130], boolean_T y[13]);
  boolean_T proc_control_any(const boolean_T x[26]);
  void proc_control_reformJacobian(const real_T Jx_data[], const int32_T
    Jx_size[3], const real_T Jmv_data[], const real_T Je_data[], const int32_T
    Je_size[1], real_T Jc_data[], int32_T Jc_size[2]);
  void proc_control_outputBounds(const real_T runtimedata_OutputMin[130], const
    real_T runtimedata_OutputMax[130], const real_T X[143], real_T e, real_T
    c_data[], int32_T c_size[2], real_T Jc_data[], int32_T Jc_size[2]);
  void proc_control_c4_mpclib_anonFcn2(const real_T runtimedata_x[13], const
    real_T runtimedata_OutputMin[130], const real_T runtimedata_OutputMax[130],
    const real_T z[139], real_T varargout_1_data[], int32_T varargout_1_size[2],
    real_T varargout_2[130], real_T varargout_3_data[], int32_T
    varargout_3_size[2], real_T varargout_4[18070]);
  void proc_control_factoryConstruct(int32_T nVarMax, int32_T mConstrMax,
    int32_T mIneq, int32_T mNonlinIneq, s_KPwpEZDfdzkqudEdVwjGjF_proc_T *obj);
  void proc_cont_factoryConstruct_p52k(int32_T MaxVars, int32_T obj_grad_size[1],
    int32_T obj_Hx_size[1], boolean_T *obj_hasLinear, int32_T *obj_nvar, int32_T
    *obj_maxVar, real_T *obj_beta, real_T *obj_rho, int32_T *obj_objtype,
    int32_T *obj_prev_objtype, int32_T *obj_prev_nvar, boolean_T
    *obj_prev_hasLinear, real_T *obj_gammaScalar);
  void proc_con_factoryConstruct_p52kz(int32_T mIneqMax, int32_T nVarMax,
    int32_T mConstrMax, s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj);
  void computeObjectiveAndUserGradient(const s_xJmQKnCTzvv6aUzMZcIqsF_proc_T
    *obj_next_next_next_next_next_ne, const real_T x[139], real_T
    grad_workspace_data[], real_T *fval, int32_T *status);
  int32_T proc_contr_checkVectorNonFinite(int32_T N, const real_T vec_data[],
    int32_T iv0);
  int32_T proc_con_checkVectorNonFinite_a(const real_T vec[130]);
  int32_T computeConstraintsAndUserJacobi(int32_T
    obj_next_next_next_next_next_b_, const s_qYIvDqP9yRqtt40IDZ89JG_proc_T
    *obj_next_next_next_next_next_ne, const real_T x[139], real_T
    Cineq_workspace_data[], int32_T ineq0, real_T Ceq_workspace[130], real_T
    JacIneqTrans_workspace_data[], int32_T iJI_col, int32_T ldJI, real_T
    JacEqTrans_workspace_data[], int32_T ldJE);
  void evalObjAndConstrAndDerivatives(int32_T obj_next_next_next_next_next_b_,
    const s_qYIvDqP9yRqtt40IDZ89JG_proc_T *obj_next_next_next_next_next_ne,
    const s_xJmQKnCTzvv6aUzMZcIqsF_proc_T *obj_next_next_next_next_next__0,
    const real_T x[139], real_T grad_workspace_data[], real_T
    Cineq_workspace_data[], int32_T ineq0, real_T Ceq_workspace[130], real_T
    JacIneqTrans_workspace_data[], int32_T iJI_col, int32_T ldJI, real_T
    JacEqTrans_workspace_data[], int32_T ldJE, real_T *fval, int32_T *status);
  void proc_co_modifyOverheadPhaseOne_(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj);
  void proc_control_setProblemType(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj, int32_T
    PROBLEM_TYPE);
  void proc_control_initActiveSet(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj);
  void proc_contro_factoryConstruct_p5(int32_T maxRows, int32_T maxCols, int32_T
    *obj_ldq, int32_T obj_QR_size[2], real_T obj_Q_data[], int32_T obj_Q_size[2],
    int32_T obj_jpvt_data[], int32_T obj_jpvt_size[1], int32_T *obj_mrows,
    int32_T *obj_ncols, int32_T obj_tau_size[1], int32_T *obj_minRowCol,
    boolean_T *obj_usedPivoting);
  void proc_contr_factoryConstruct_p52(int32_T MaxDims, int32_T obj_FMat_size[2],
    int32_T *obj_ldm, int32_T *obj_ndims, int32_T *obj_info, real_T
    *obj_scaleFactor, boolean_T *obj_ConvexCheck, real_T *obj_regTol_, real_T
    *obj_workspace_, real_T *obj_workspace2_);
  void proc_control_computeGradLag(real_T workspace_data[], int32_T ldA, int32_T
    nVar, const real_T grad_data[], int32_T mIneq, const real_T AineqTrans_data[],
    const real_T AeqTrans_data[], const int32_T finiteFixed_data[], int32_T
    mFixed, const int32_T finiteLB_data[], int32_T mLB, const int32_T
    finiteUB_data[], int32_T mUB, const real_T lambda_data[]);
  real_T proc_con_computePrimalFeasError(const real_T x[139], int32_T mLinIneq,
    int32_T mNonlinIneq, const real_T cIneq_data[], const real_T cEq[130], const
    int32_T finiteLB_data[], int32_T mLB, const real_T lb[139], const int32_T
    finiteUB_data[], int32_T mUB);
  void proc_contr_computeDualFeasError(int32_T nVar, const real_T gradLag_data[],
    boolean_T *gradOK, real_T *val);
  void proc_control_saveJacobian(s_KPwpEZDfdzkqudEdVwjGjF_proc_T *obj, int32_T
    nVar, int32_T mIneq, const real_T JacCineqTrans_data[], int32_T ineqCol0,
    const real_T JacCeqTrans_data[], int32_T ldJ);
  real_T proc_control_computeComplError(const int32_T
    fscales_lineq_constraint_size[1], const int32_T
    fscales_cineq_constraint_size[1], const real_T xCurrent[139], int32_T mIneq,
    const real_T cIneq_data[], const int32_T finiteLB_data[], int32_T mLB, const
    real_T lb[139], const int32_T finiteUB_data[], int32_T mUB, const real_T
    lambda_data[], int32_T iL0);
  void proc_control_computeGradLag_l(real_T workspace_data[], int32_T ldA,
    int32_T nVar, const real_T grad_data[], int32_T mIneq, const real_T
    AineqTrans_data[], const real_T AeqTrans_data[], const int32_T
    finiteFixed_data[], int32_T mFixed, const int32_T finiteLB_data[], int32_T
    mLB, const int32_T finiteUB_data[], int32_T mUB, const real_T lambda_data[]);
  void proc_con_computeDualFeasError_n(int32_T nVar, const real_T gradLag_data[],
    boolean_T *gradOK, real_T *val);
  void proc_c_updateWorkingSetForNewQP(const real_T xk[139],
    s_PAtG1CW05sRYOWrqzwRQyC_proc_T *WorkingSet, int32_T mIneq, int32_T
    mNonlinIneq, const real_T cIneq_data[], const real_T cEq[130], int32_T mLB,
    const real_T lb[139], int32_T mUB, int32_T mFixed);
  void proc_control_xswap(int32_T n, real_T x_data[], int32_T ix0, int32_T iy0);
  real_T proc_control_xnrm2_a(int32_T n, const real_T x_data[], int32_T ix0);
  real_T proc_control_xzlarfg(int32_T n, real_T *alpha1, real_T x_data[],
    int32_T ix0);
  void proc_control_xgemv_j(int32_T m, int32_T n, const real_T A_data[], int32_T
    ia0, int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
  void proc_control_xgerc_a(int32_T m, int32_T n, real_T alpha1, int32_T ix0,
    const real_T y_data[], real_T A_data[], int32_T ia0, int32_T lda);
  void proc_control_xzlarf(int32_T m, int32_T n, int32_T iv0, real_T tau, real_T
    C_data[], int32_T ic0, int32_T ldc, real_T work_data[]);
  void proc_control_qrf(real_T A_data[], const int32_T A_size[2], int32_T m,
                        int32_T n, int32_T nfxd, real_T tau_data[]);
  void proc_control_qrpf(real_T A_data[], const int32_T A_size[2], int32_T m,
    int32_T n, int32_T nfxd, real_T tau_data[], int32_T jpvt_data[]);
  void proc_control_xgeqp3(real_T A_data[], const int32_T A_size[2], int32_T m,
    int32_T n, int32_T jpvt_data[], real_T tau_data[], int32_T tau_size[1]);
  void proc_control_factorQRE(s_o1KzuWoPqzc62zOgqamCNH_proc_T *obj, const real_T
    A_data[], int32_T mrows, int32_T ncols, int32_T ldA);
  void proc_control_xorgqr_l(int32_T m, int32_T n, int32_T k, real_T A_data[],
    const int32_T A_size[2], int32_T lda, const real_T tau_data[]);
  void proc_control_sortLambdaQP(real_T lambda_data[], int32_T
    WorkingSet_nActiveConstr, const int32_T WorkingSet_sizes[5], const int32_T
    WorkingSet_isActiveIdx[6], const int32_T WorkingSet_Wid_data[], const
    int32_T WorkingSet_Wlocalidx_data[], real_T workspace_data[]);
  void proc_control_test_exit(s7RdrPWkr8UPAUyTdDJkLaG_proc__T *Flags,
    s_z8miyzCNLMZx998HtZciUB_proc_T *memspace, sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, const int32_T fscales_lineq_constraint_size[1], const
    int32_T fscales_cineq_constraint_size[1], s_PAtG1CW05sRYOWrqzwRQyC_proc_T
    *WorkingSet, s_KPwpEZDfdzkqudEdVwjGjF_proc_T *TrialState,
    s_o1KzuWoPqzc62zOgqamCNH_proc_T *QRManager, const real_T lb[139]);
  boolean_T proc_control_BFGSUpdate(int32_T nvar, real_T Bk[19321], const real_T
    sk_data[], real_T yk_data[], real_T workspace_data[]);
  void proc_control_factorQRE_f(s_o1KzuWoPqzc62zOgqamCNH_proc_T *obj, int32_T
    mrows, int32_T ncols);
  void proc_control_countsort(int32_T x_data[], int32_T xLen, int32_T
    workspace_data[], int32_T xMin, int32_T xMax);
  void proc_control_removeConstr(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj, int32_T
    idx_global);
  int32_T proc_control_RemoveDependentEq_(s_z8miyzCNLMZx998HtZciUB_proc_T
    *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T *workingset,
    s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager);
  void proc_contr_RemoveDependentIneq_(s_PAtG1CW05sRYOWrqzwRQyC_proc_T
    *workingset, s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager,
    s_z8miyzCNLMZx998HtZciUB_proc_T *memspace);
  void proc_control_xgeqrf_e(real_T A_data[], const int32_T A_size[2], int32_T m,
    int32_T n, real_T tau_data[], int32_T tau_size[1]);
  void proc_control_factorQR_a(s_o1KzuWoPqzc62zOgqamCNH_proc_T *obj, const
    real_T A_data[], int32_T mrows, int32_T ncols, int32_T ldA);
  void proc_control_factorQR(s_o1KzuWoPqzc62zOgqamCNH_proc_T *obj, int32_T mrows,
    int32_T ncols);
  void proc_control_xgemv_jh(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], real_T y_data[]);
  real_T proc_con_maxConstraintViolation(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj,
    const real_T x_data[]);
  void proc_control_xgemv_jhn(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
  real_T proc_c_maxConstraintViolation_a(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj,
    const real_T x_data[], int32_T ix0);
  boolean_T proc_co_feasibleX0ForWorkingSet(real_T workspace_data[], const
    int32_T workspace_size[2], real_T xCurrent_data[],
    s_PAtG1CW05sRYOWrqzwRQyC_proc_T *workingset, s_o1KzuWoPqzc62zOgqamCNH_proc_T
    *qrmanager);
  void proc_con_RemoveDependentIneq__m(s_PAtG1CW05sRYOWrqzwRQyC_proc_T
    *workingset, s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager,
    s_z8miyzCNLMZx998HtZciUB_proc_T *memspace);
  void proc_control_xgemv_jhnw(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], real_T y_data[]);
  real_T proc__maxConstraintViolation_ah(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj,
    const real_T x_data[]);
  void proc_control_PresolveWorkingSet(s_KPwpEZDfdzkqudEdVwjGjF_proc_T *solution,
    s_z8miyzCNLMZx998HtZciUB_proc_T *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T
    *workingset, s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager);
  void proc_control_xgemv_jhnw4(int32_T m, int32_T n, const real_T A[19321],
    int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_contro_computeGrad_StoreHx(s_bsf2Fsale81D2LTDCKuKhG_proc_T *obj,
    const real_T H[19321], const real_T f_data[], const real_T x_data[]);
  real_T proc_contro_computeFval_ReuseHx(const s_bsf2Fsale81D2LTDCKuKhG_proc_T
    *obj, real_T workspace_data[], const real_T f_data[], const real_T x_data[]);
  void proc_control_xrotg(real_T *a, real_T *b, real_T *c, real_T *s);
  void proc_control_deleteColMoveEnd(s_o1KzuWoPqzc62zOgqamCNH_proc_T *obj,
    int32_T idx);
  boolean_T proc_control_strcmp(const char_T a[7]);
  void proc_control_xgemm(int32_T m, int32_T n, int32_T k, const real_T A[19321],
    int32_T lda, const real_T B_data[], int32_T ib0, int32_T ldb, real_T C_data[],
    int32_T ldc);
  void proc_control_xgemm_k(int32_T m, int32_T n, int32_T k, const real_T
    A_data[], int32_T ia0, int32_T lda, const real_T B_data[], int32_T ldb,
    real_T C_data[], int32_T ldc);
  void proc_control_fullColLDL2_(s_962gqykB8vLiRVqsLdGQIG_proc_T *obj, int32_T
    LD_offset, int32_T NColsRemain);
  void proc_control_partialColLDL3_(s_962gqykB8vLiRVqsLdGQIG_proc_T *obj,
    int32_T LD_offset, int32_T NColsRemain);
  int32_T proc_control_xpotrf_g(int32_T n, real_T A_data[], int32_T lda);
  void proc_control_xgemv_jhnw4q(int32_T m, int32_T n, const real_T A_data[],
    int32_T ia0, int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control_factor(s_962gqykB8vLiRVqsLdGQIG_proc_T *obj, const real_T A
    [19321], int32_T ndims, int32_T ldA);
  void proc_control_solve(const s_962gqykB8vLiRVqsLdGQIG_proc_T *obj, real_T
    rhs_data[]);
  void proc_control_factor_h(s_962gqykB8vLiRVqsLdGQIG_proc_T *obj, const real_T
    A[19321], int32_T ndims, int32_T ldA);
  void proc_control_solve_f(const s_962gqykB8vLiRVqsLdGQIG_proc_T *obj, real_T
    rhs_data[]);
  void proc_control_compute_deltax(const real_T H[19321],
    s_KPwpEZDfdzkqudEdVwjGjF_proc_T *solution, s_z8miyzCNLMZx998HtZciUB_proc_T
    *memspace, const s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager,
    s_962gqykB8vLiRVqsLdGQIG_proc_T *cholmanager, const
    s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective, boolean_T alwaysPositiveDef);
  real_T proc_control_xnrm2_ap(int32_T n, const real_T x_data[]);
  void proc_control_xgemv_jhnw4qt(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control_feasibleratiotest(const real_T solution_xstar_data[], const
    real_T solution_searchDir_data[], real_T workspace_data[], const int32_T
    workspace_size[2], int32_T workingset_nVar, int32_T workingset_ldA, const
    real_T workingset_Aineq_data[], const real_T workingset_bineq_data[], const
    real_T workingset_lb_data[], const int32_T workingset_indexLB_data[], const
    int32_T workingset_sizes[5], const int32_T workingset_isActiveIdx[6], const
    boolean_T workingset_isActiveConstr_data[], const int32_T
    workingset_nWConstr[5], boolean_T isPhaseOne, real_T *alpha, boolean_T
    *newBlocking, int32_T *constrType, int32_T *constrIdx);
  void proc_c_checkUnboundedOrIllPosed(s_KPwpEZDfdzkqudEdVwjGjF_proc_T *solution,
    const s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective);
  void proc_addBoundToActiveSetMatrix_(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj,
    int32_T TYPE, int32_T idx_local);
  void proc_control_addAineqConstr(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj, int32_T
    idx_local);
  void proc_checkStoppingAndUpdateFval(int32_T *activeSetChangeID, const real_T
    f_data[], s_KPwpEZDfdzkqudEdVwjGjF_proc_T *solution,
    s_z8miyzCNLMZx998HtZciUB_proc_T *memspace, const
    s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective, s_PAtG1CW05sRYOWrqzwRQyC_proc_T *
    workingset, s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager, real_T
    options_ObjectiveLimit, int32_T runTimeOptions_MaxIterations, boolean_T
    *updateFval);
  void proc_control_iterate(const real_T H[19321], const real_T f_data[],
    s_KPwpEZDfdzkqudEdVwjGjF_proc_T *solution, s_z8miyzCNLMZx998HtZciUB_proc_T
    *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T *workingset,
    s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager, s_962gqykB8vLiRVqsLdGQIG_proc_T *
    cholmanager, s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective, const char_T
    options_SolverName[7], real_T options_StepTolerance, real_T
    options_ObjectiveLimit, int32_T runTimeOptions_MaxIterations);
  void proc_control_linearForm_(boolean_T obj_hasLinear, int32_T obj_nvar,
    real_T workspace_data[], const real_T H[19321], const real_T f_data[], const
    real_T x_data[]);
  real_T proc_control_computeFval(const s_bsf2Fsale81D2LTDCKuKhG_proc_T *obj,
    real_T workspace_data[], const real_T H[19321], const real_T f_data[], const
    real_T x_data[]);
  void proc_control_phaseone(const real_T H[19321], const real_T f_data[],
    s_KPwpEZDfdzkqudEdVwjGjF_proc_T *solution, s_z8miyzCNLMZx998HtZciUB_proc_T
    *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T *workingset,
    s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager, s_962gqykB8vLiRVqsLdGQIG_proc_T *
    cholmanager, s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective,
    somzaGboVhDG7PNQS6E98jD_proc__T *options, const
    somzaGboVhDG7PNQS6E98jD_proc__T *runTimeOptions);
  void proc_control_driver_m(const real_T H[19321], const real_T f_data[],
    s_KPwpEZDfdzkqudEdVwjGjF_proc_T *solution, s_z8miyzCNLMZx998HtZciUB_proc_T
    *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T *workingset,
    s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager, s_962gqykB8vLiRVqsLdGQIG_proc_T *
    cholmanager, s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective,
    somzaGboVhDG7PNQS6E98jD_proc__T *options, somzaGboVhDG7PNQS6E98jD_proc__T
    *runTimeOptions);
  void proc_control_addAeqConstr(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj, int32_T
    idx_local);
  boolean_T proc_control_soc(const real_T Hessian[19321], const real_T
    grad_data[], s_KPwpEZDfdzkqudEdVwjGjF_proc_T *TrialState,
    s_z8miyzCNLMZx998HtZciUB_proc_T *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T
    *WorkingSet, s_o1KzuWoPqzc62zOgqamCNH_proc_T *QRManager,
    s_962gqykB8vLiRVqsLdGQIG_proc_T *CholManager,
    s_bsf2Fsale81D2LTDCKuKhG_proc_T *QPObjective, const
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions);
  void proc_control_normal(const real_T Hessian[19321], const real_T grad_data[],
    s_KPwpEZDfdzkqudEdVwjGjF_proc_T *TrialState, sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, s_z8miyzCNLMZx998HtZciUB_proc_T *memspace,
    s_PAtG1CW05sRYOWrqzwRQyC_proc_T *WorkingSet, s_o1KzuWoPqzc62zOgqamCNH_proc_T
    *QRManager, s_962gqykB8vLiRVqsLdGQIG_proc_T *CholManager,
    s_bsf2Fsale81D2LTDCKuKhG_proc_T *QPObjective, const
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions);
  void proc_control_relaxed(const real_T Hessian[19321], const real_T grad_data[],
    s_KPwpEZDfdzkqudEdVwjGjF_proc_T *TrialState, sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, s_z8miyzCNLMZx998HtZciUB_proc_T *memspace,
    s_PAtG1CW05sRYOWrqzwRQyC_proc_T *WorkingSet, s_o1KzuWoPqzc62zOgqamCNH_proc_T
    *QRManager, s_962gqykB8vLiRVqsLdGQIG_proc_T *CholManager,
    s_bsf2Fsale81D2LTDCKuKhG_proc_T *QPObjective,
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions);
  boolean_T proc_control_step_k(int32_T *STEP_TYPE, real_T Hessian[19321], const
    real_T lb[139], s_KPwpEZDfdzkqudEdVwjGjF_proc_T *TrialState,
    sG8JZ69axY52WWR6RKyApQC_proc__T *MeritFunction,
    s_z8miyzCNLMZx998HtZciUB_proc_T *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T
    *WorkingSet, s_o1KzuWoPqzc62zOgqamCNH_proc_T *QRManager,
    s_962gqykB8vLiRVqsLdGQIG_proc_T *CholManager,
    s_bsf2Fsale81D2LTDCKuKhG_proc_T *QPObjective,
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions);
  void proc_control_outputBounds_k(const real_T runtimedata_OutputMin[130],
    const real_T runtimedata_OutputMax[130], const real_T X[143], real_T e,
    real_T c_data[], int32_T c_size[2]);
  void proc_control_stateEvolution_f(const real_T X[143], const real_T U[88],
    real_T c[130]);
  void proc_contr_c4_mpclib_anonFcn2_n(const real_T runtimedata_x[13], const
    real_T runtimedata_OutputMin[130], const real_T runtimedata_OutputMax[130],
    const real_T z[139], real_T varargout_1_data[], int32_T varargout_1_size[2],
    real_T varargout_2[130]);
  void proc_control_evalObjAndConstr(int32_T obj_next_next_next_next_next_b_,
    const s_qYIvDqP9yRqtt40IDZ89JG_proc_T *obj_next_next_next_next_next_ne,
    const s_xJmQKnCTzvv6aUzMZcIqsF_proc_T *obj_next_next_next_next_next__0,
    const real_T x[139], real_T Cineq_workspace_data[], int32_T ineq0, real_T
    Ceq_workspace[130], real_T *fval, int32_T *status);
  void proc_con_computeLinearResiduals(const real_T x[139], int32_T nVar, real_T
    workspaceIneq_data[], const int32_T workspaceIneq_size[1], int32_T mLinIneq,
    const real_T AineqT_data[], const real_T bineq_data[], int32_T ldAi);
  real_T proc_control_computeMeritFcn(real_T obj_penaltyParam, real_T fval,
    const real_T Cineq_workspace_data[], int32_T mIneq, const real_T
    Ceq_workspace[130], boolean_T evalWellDefined);
  void proc_control_linesearch(boolean_T *evalWellDefined, const real_T
    bineq_data[], int32_T WorkingSet_nVar, int32_T WorkingSet_ldA, const real_T
    WorkingSet_Aineq_data[], s_KPwpEZDfdzkqudEdVwjGjF_proc_T *TrialState, real_T
    MeritFunction_penaltyParam, real_T MeritFunction_phi, real_T
    MeritFunction_phiPrimePlus, real_T MeritFunction_phiFullStep, int32_T
    FcnEvaluator_next_next_next_nex, const s_qYIvDqP9yRqtt40IDZ89JG_proc_T
    *FcnEvaluator_next_next_next_n_0, const s_xJmQKnCTzvv6aUzMZcIqsF_proc_T
    *FcnEvaluator_next_next_next_n_1, boolean_T socTaken, real_T *alpha, int32_T
    *exitflag);
  void proc_control_driver(const real_T bineq_data[], const real_T lb[139],
    s_KPwpEZDfdzkqudEdVwjGjF_proc_T *TrialState, sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, const coder_internal_stickyStruct_2_T *FcnEvaluator,
    s_z8miyzCNLMZx998HtZciUB_proc_T *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T
    *WorkingSet, s_o1KzuWoPqzc62zOgqamCNH_proc_T *QRManager,
    s_962gqykB8vLiRVqsLdGQIG_proc_T *CholManager,
    s_bsf2Fsale81D2LTDCKuKhG_proc_T *QPObjective, const int32_T
    fscales_lineq_constraint_size[1], const int32_T
    fscales_cineq_constraint_size[1], real_T Hessian[19321]);
  void proc_control_fmincon(const s_qYIvDqP9yRqtt40IDZ89JG_proc_T
    *fun_workspace_runtimedata, const sumhYdZsdukPgvAXm7nzHOD_proc__T
    *fun_workspace_userdata, const real_T x0[139], const real_T Aineq_data[],
    const real_T bineq_data[], const int32_T bineq_size[1], const real_T lb[139],
    const s_qYIvDqP9yRqtt40IDZ89JG_proc_T *nonlcon_workspace_runtimedata, const
    sumhYdZsdukPgvAXm7nzHOD_proc__T *nonlcon_workspace_userdata, real_T x[139],
    real_T *fval, real_T *exitflag, real_T *output_iterations, real_T
    *output_funcCount, char_T output_algorithm[3], real_T
    *output_constrviolation, real_T *output_stepsize, real_T
    *output_lssteplength, real_T *output_firstorderopt);
  void proc_contr_Subscriber_setupImpl(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_con_Subscriber_setupImpl_p(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_co_Subscriber_setupImpl_pr(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_c_Subscriber_setupImpl_pr3(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc__Subscriber_setupImpl_pr35(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_Subscriber_setupImpl_pr351(const ros_slros2_internal_block_Sub_T
    *obj);
  void pr_ROS2PubSubBase_setQOSProfile(rmw_qos_profile_t rmwProfile, real_T
    qosDepth, real_T qosDeadline, real_T qosLifespan, real_T qosLeaseDuration,
    boolean_T qosAvoidROSNamespaceConventions);
  void proc_contro_Publisher_setupImpl(const ros_slros2_internal_block_Pub_T
    *obj);
  void Subscriber_setupIm_pr351ewpk3k4(const ros_slros2_internal_block_Sub_T
    *obj);
  void Subscriber_setupI_pr351ewpk3k4u(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_cont_PolyTrajSys_setupImpl(robotics_slcore_internal_bl_p_T *obj);
  void proc_con_Subscriber_setupImpl_n(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_cont_Publisher_setupImpl_p(const ros_slros2_internal_block_Pub_T
    *obj);
  void proc_con_Publisher_setupImpl_pr(const ros_slros2_internal_block_Pub_T
    *obj);
  void proc_co_Publisher_setupImpl_pr3(const ros_slros2_internal_block_Pub_T
    *obj);
  void pro_Subscriber_setupImpl_pr351e(const ros_slros2_internal_block_Sub_T
    *obj);
  void Subscriber_setupImp_pr351ewpk3k(const ros_slros2_internal_block_Sub_T
    *obj);
  void pr_Subscriber_setupImpl_pr351ew(const ros_slros2_internal_block_Sub_T
    *obj);
  void p_Subscriber_setupImpl_pr351ewp(const ros_slros2_internal_block_Sub_T
    *obj);
  void Subscriber_setupImpl_pr351ewpk(const ros_slros2_internal_block_Sub_T *obj);
  void Subscriber_setupImpl_pr351ewpk3(const ros_slros2_internal_block_Sub_T
    *obj);
  void Subscriber_setup_pr351ewpk3k4u0(const ros_slros2_internal_block_Sub_T
    *obj);
  void Subscriber_setu_pr351ewpk3k4u0o(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_c_Publisher_setupImpl_pr35(const ros_slros2_internal_block_Pub_T
    *obj);

  // Real-Time Model
  RT_MODEL_proc_control_T proc_control_M;
};

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S34>/Data Type Duplicate' : Unused code path elimination
//  Block '<S36>/FixPt Data Type Duplicate2' : Unused code path elimination
//  Block '<S35>/Data Type Duplicate' : Unused code path elimination
//  Block '<S37>/FixPt Data Type Duplicate2' : Unused code path elimination
//  Block '<S47>/Display' : Unused code path elimination
//  Block '<S45>/Display' : Unused code path elimination
//  Block '<S68>/Display' : Unused code path elimination
//  Block '<S80>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S81>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S82>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S83>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S84>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S85>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S86>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S87>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S88>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S89>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S90>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S91>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S92>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S93>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S94>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S95>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S96>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S97>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S98>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S99>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S100>/Vector Dimension Check' : Unused code path elimination
//  Block '<S101>/Vector Dimension Check' : Unused code path elimination
//  Block '<S102>/Vector Dimension Check' : Unused code path elimination
//  Block '<S103>/Vector Dimension Check' : Unused code path elimination
//  Block '<S104>/Vector Dimension Check' : Unused code path elimination
//  Block '<S105>/Vector Dimension Check' : Unused code path elimination
//  Block '<S79>/last_x' : Unused code path elimination
//  Block '<S106>/Vector Dimension Check' : Unused code path elimination
//  Block '<S79>/useq_scale' : Unused code path elimination
//  Block '<S79>/useq_scale1' : Unused code path elimination
//  Block '<S115>/Constant' : Unused code path elimination
//  Block '<S115>/Floor' : Unused code path elimination
//  Block '<S115>/Floor1' : Unused code path elimination
//  Block '<S116>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S117>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S118>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S119>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S120>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S121>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S122>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S123>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S124>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S125>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S126>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S127>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S128>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S129>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S130>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S131>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S132>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S133>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S134>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S135>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S136>/Vector Dimension Check' : Unused code path elimination
//  Block '<S137>/Vector Dimension Check' : Unused code path elimination
//  Block '<S138>/Vector Dimension Check' : Unused code path elimination
//  Block '<S139>/Vector Dimension Check' : Unused code path elimination
//  Block '<S140>/Vector Dimension Check' : Unused code path elimination
//  Block '<S141>/Vector Dimension Check' : Unused code path elimination
//  Block '<S115>/Min' : Unused code path elimination
//  Block '<S115>/last_x' : Unused code path elimination
//  Block '<S142>/Vector Dimension Check' : Unused code path elimination
//  Block '<S112>/m_zero' : Unused code path elimination
//  Block '<S112>/p_zero' : Unused code path elimination
//  Block '<S145>/Data Type Duplicate' : Unused code path elimination
//  Block '<S150>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S151>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S152>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S153>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S154>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S155>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S156>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S157>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S158>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S159>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S160>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S161>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S162>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S163>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S164>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S165>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S166>/Vector Dimension Check' : Unused code path elimination
//  Block '<S167>/Vector Dimension Check' : Unused code path elimination
//  Block '<S168>/Vector Dimension Check' : Unused code path elimination
//  Block '<S169>/Vector Dimension Check' : Unused code path elimination
//  Block '<S147>/mv.init_zero' : Unused code path elimination
//  Block '<S147>/x.init_zero' : Unused code path elimination
//  Block '<S175>/Data Type Duplicate' : Unused code path elimination
//  Block '<S175>/Data Type Propagation' : Unused code path elimination
//  Block '<S176>/Constant' : Unused code path elimination
//  Block '<S176>/Discrete-Time Integrator' : Unused code path elimination
//  Block '<S190>/Product' : Unused code path elimination
//  Block '<S190>/Product1' : Unused code path elimination
//  Block '<S190>/Product2' : Unused code path elimination
//  Block '<S190>/Product3' : Unused code path elimination
//  Block '<S195>/Product' : Unused code path elimination
//  Block '<S195>/Product1' : Unused code path elimination
//  Block '<S195>/Product2' : Unused code path elimination
//  Block '<S195>/Product3' : Unused code path elimination
//  Block '<S195>/Sum' : Unused code path elimination
//  Block '<S194>/sqrt' : Unused code path elimination
//  Block '<S191>/Constant' : Unused code path elimination
//  Block '<S191>/Gain' : Unused code path elimination
//  Block '<S191>/Gain1' : Unused code path elimination
//  Block '<S191>/Gain2' : Unused code path elimination
//  Block '<S191>/Product' : Unused code path elimination
//  Block '<S191>/Product1' : Unused code path elimination
//  Block '<S191>/Product2' : Unused code path elimination
//  Block '<S191>/Product3' : Unused code path elimination
//  Block '<S191>/Product4' : Unused code path elimination
//  Block '<S191>/Product5' : Unused code path elimination
//  Block '<S191>/Product6' : Unused code path elimination
//  Block '<S191>/Product7' : Unused code path elimination
//  Block '<S191>/Product8' : Unused code path elimination
//  Block '<S191>/Sum' : Unused code path elimination
//  Block '<S191>/Sum1' : Unused code path elimination
//  Block '<S191>/Sum2' : Unused code path elimination
//  Block '<S191>/Sum3' : Unused code path elimination
//  Block '<S192>/Constant' : Unused code path elimination
//  Block '<S192>/Gain' : Unused code path elimination
//  Block '<S192>/Gain1' : Unused code path elimination
//  Block '<S192>/Gain2' : Unused code path elimination
//  Block '<S192>/Product' : Unused code path elimination
//  Block '<S192>/Product1' : Unused code path elimination
//  Block '<S192>/Product2' : Unused code path elimination
//  Block '<S192>/Product3' : Unused code path elimination
//  Block '<S192>/Product4' : Unused code path elimination
//  Block '<S192>/Product5' : Unused code path elimination
//  Block '<S192>/Product6' : Unused code path elimination
//  Block '<S192>/Product7' : Unused code path elimination
//  Block '<S192>/Product8' : Unused code path elimination
//  Block '<S192>/Sum' : Unused code path elimination
//  Block '<S192>/Sum1' : Unused code path elimination
//  Block '<S192>/Sum2' : Unused code path elimination
//  Block '<S192>/Sum3' : Unused code path elimination
//  Block '<S193>/Constant' : Unused code path elimination
//  Block '<S193>/Gain' : Unused code path elimination
//  Block '<S193>/Gain1' : Unused code path elimination
//  Block '<S193>/Gain2' : Unused code path elimination
//  Block '<S193>/Product' : Unused code path elimination
//  Block '<S193>/Product1' : Unused code path elimination
//  Block '<S193>/Product2' : Unused code path elimination
//  Block '<S193>/Product3' : Unused code path elimination
//  Block '<S193>/Product4' : Unused code path elimination
//  Block '<S193>/Product5' : Unused code path elimination
//  Block '<S193>/Product6' : Unused code path elimination
//  Block '<S193>/Product7' : Unused code path elimination
//  Block '<S193>/Product8' : Unused code path elimination
//  Block '<S193>/Sum' : Unused code path elimination
//  Block '<S193>/Sum1' : Unused code path elimination
//  Block '<S193>/Sum2' : Unused code path elimination
//  Block '<S193>/Sum3' : Unused code path elimination
//  Block '<S196>/Product' : Unused code path elimination
//  Block '<S196>/Product1' : Unused code path elimination
//  Block '<S196>/Product2' : Unused code path elimination
//  Block '<S196>/Product3' : Unused code path elimination
//  Block '<S201>/Product' : Unused code path elimination
//  Block '<S201>/Product1' : Unused code path elimination
//  Block '<S201>/Product2' : Unused code path elimination
//  Block '<S201>/Product3' : Unused code path elimination
//  Block '<S201>/Sum' : Unused code path elimination
//  Block '<S200>/sqrt' : Unused code path elimination
//  Block '<S197>/Constant' : Unused code path elimination
//  Block '<S197>/Gain' : Unused code path elimination
//  Block '<S197>/Gain1' : Unused code path elimination
//  Block '<S197>/Gain2' : Unused code path elimination
//  Block '<S197>/Product' : Unused code path elimination
//  Block '<S197>/Product1' : Unused code path elimination
//  Block '<S197>/Product2' : Unused code path elimination
//  Block '<S197>/Product3' : Unused code path elimination
//  Block '<S197>/Product4' : Unused code path elimination
//  Block '<S197>/Product5' : Unused code path elimination
//  Block '<S197>/Product6' : Unused code path elimination
//  Block '<S197>/Product7' : Unused code path elimination
//  Block '<S197>/Product8' : Unused code path elimination
//  Block '<S197>/Sum' : Unused code path elimination
//  Block '<S197>/Sum1' : Unused code path elimination
//  Block '<S197>/Sum2' : Unused code path elimination
//  Block '<S197>/Sum3' : Unused code path elimination
//  Block '<S198>/Constant' : Unused code path elimination
//  Block '<S198>/Gain' : Unused code path elimination
//  Block '<S198>/Gain1' : Unused code path elimination
//  Block '<S198>/Gain2' : Unused code path elimination
//  Block '<S198>/Product' : Unused code path elimination
//  Block '<S198>/Product1' : Unused code path elimination
//  Block '<S198>/Product2' : Unused code path elimination
//  Block '<S198>/Product3' : Unused code path elimination
//  Block '<S198>/Product4' : Unused code path elimination
//  Block '<S198>/Product5' : Unused code path elimination
//  Block '<S198>/Product6' : Unused code path elimination
//  Block '<S198>/Product7' : Unused code path elimination
//  Block '<S198>/Product8' : Unused code path elimination
//  Block '<S198>/Sum' : Unused code path elimination
//  Block '<S198>/Sum1' : Unused code path elimination
//  Block '<S198>/Sum2' : Unused code path elimination
//  Block '<S198>/Sum3' : Unused code path elimination
//  Block '<S199>/Constant' : Unused code path elimination
//  Block '<S199>/Gain' : Unused code path elimination
//  Block '<S199>/Gain1' : Unused code path elimination
//  Block '<S199>/Gain2' : Unused code path elimination
//  Block '<S199>/Product' : Unused code path elimination
//  Block '<S199>/Product1' : Unused code path elimination
//  Block '<S199>/Product2' : Unused code path elimination
//  Block '<S199>/Product3' : Unused code path elimination
//  Block '<S199>/Product4' : Unused code path elimination
//  Block '<S199>/Product5' : Unused code path elimination
//  Block '<S199>/Product6' : Unused code path elimination
//  Block '<S199>/Product7' : Unused code path elimination
//  Block '<S199>/Product8' : Unused code path elimination
//  Block '<S199>/Sum' : Unused code path elimination
//  Block '<S199>/Sum1' : Unused code path elimination
//  Block '<S199>/Sum2' : Unused code path elimination
//  Block '<S199>/Sum3' : Unused code path elimination
//  Block '<S176>/Sum' : Unused code path elimination
//  Block '<S177>/Scope' : Unused code path elimination
//  Block '<S178>/Discrete Transfer Fcn' : Unused code path elimination
//  Block '<S213>/Data Type Duplicate' : Unused code path elimination
//  Block '<S213>/Diff' : Unused code path elimination
//  Block '<S213>/TSamp' : Unused code path elimination
//  Block '<S213>/UD' : Unused code path elimination
//  Block '<S216>/Constant' : Unused code path elimination
//  Block '<S216>/Gain' : Unused code path elimination
//  Block '<S216>/Gain1' : Unused code path elimination
//  Block '<S216>/Gain2' : Unused code path elimination
//  Block '<S216>/Product' : Unused code path elimination
//  Block '<S216>/Product1' : Unused code path elimination
//  Block '<S216>/Product2' : Unused code path elimination
//  Block '<S216>/Product3' : Unused code path elimination
//  Block '<S216>/Product4' : Unused code path elimination
//  Block '<S216>/Product5' : Unused code path elimination
//  Block '<S216>/Product6' : Unused code path elimination
//  Block '<S216>/Product7' : Unused code path elimination
//  Block '<S216>/Product8' : Unused code path elimination
//  Block '<S216>/Sum' : Unused code path elimination
//  Block '<S216>/Sum1' : Unused code path elimination
//  Block '<S216>/Sum2' : Unused code path elimination
//  Block '<S216>/Sum3' : Unused code path elimination
//  Block '<S217>/Constant' : Unused code path elimination
//  Block '<S217>/Gain' : Unused code path elimination
//  Block '<S217>/Gain1' : Unused code path elimination
//  Block '<S217>/Gain2' : Unused code path elimination
//  Block '<S217>/Product' : Unused code path elimination
//  Block '<S217>/Product1' : Unused code path elimination
//  Block '<S217>/Product2' : Unused code path elimination
//  Block '<S217>/Product3' : Unused code path elimination
//  Block '<S217>/Product4' : Unused code path elimination
//  Block '<S217>/Product5' : Unused code path elimination
//  Block '<S217>/Product6' : Unused code path elimination
//  Block '<S217>/Product7' : Unused code path elimination
//  Block '<S217>/Product8' : Unused code path elimination
//  Block '<S217>/Sum' : Unused code path elimination
//  Block '<S217>/Sum1' : Unused code path elimination
//  Block '<S217>/Sum2' : Unused code path elimination
//  Block '<S217>/Sum3' : Unused code path elimination
//  Block '<S221>/checkMeasurementFcn1Signals' : Unused code path elimination
//  Block '<S221>/checkMeasurementFcn2Signals' : Unused code path elimination
//  Block '<S221>/checkMeasurementFcn3Signals' : Unused code path elimination
//  Block '<S221>/checkStateTransitionFcnSignals' : Unused code path elimination
//  Block '<S181>/Display' : Unused code path elimination
//  Block '<S182>/Scope' : Unused code path elimination
//  Block '<S182>/Scope1' : Unused code path elimination
//  Block '<S182>/Scope2' : Unused code path elimination
//  Block '<S182>/Scope3' : Unused code path elimination
//  Block '<S232>/Matrix Concatenate' : Unused code path elimination
//  Block '<S232>/Scope' : Unused code path elimination
//  Block '<S232>/Scope1' : Unused code path elimination
//  Block '<S232>/Scope2' : Unused code path elimination
//  Block '<S232>/Scope3' : Unused code path elimination
//  Block '<S232>/Selector' : Unused code path elimination
//  Block '<S232>/Selector1' : Unused code path elimination
//  Block '<S232>/Selector2' : Unused code path elimination
//  Block '<S232>/Selector3' : Unused code path elimination
//  Block '<S232>/Selector4' : Unused code path elimination
//  Block '<S232>/Sum' : Unused code path elimination
//  Block '<S232>/e angular rates' : Unused code path elimination
//  Block '<S232>/e position' : Unused code path elimination
//  Block '<S232>/e quaternion' : Unused code path elimination
//  Block '<S232>/e velocity' : Unused code path elimination
//  Block '<S236>/Scope' : Unused code path elimination
//  Block '<S250>/Display' : Unused code path elimination
//  Block '<S250>/Selector3' : Unused code path elimination
//  Block '<S238>/Scope' : Unused code path elimination
//  Block '<S253>/Constant1' : Unused code path elimination
//  Block '<S253>/Constant2' : Unused code path elimination
//  Block '<S253>/Constant3' : Unused code path elimination
//  Block '<S253>/Constant4' : Unused code path elimination
//  Block '<S253>/Constant5' : Unused code path elimination
//  Block '<S253>/Constant6' : Unused code path elimination
//  Block '<S253>/Frame' : Unused code path elimination
//  Block '<S253>/fine' : Unused code path elimination
//  Block '<S253>/speed' : Unused code path elimination
//  Block '<S253>/speed1' : Unused code path elimination
//  Block '<S21>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S3>/Zero-Order Hold' : Eliminated since input and output rates are identical
//  Block '<S79>/Reshape' : Reshape block reduction
//  Block '<S79>/Reshape1' : Reshape block reduction
//  Block '<S79>/Reshape2' : Reshape block reduction
//  Block '<S79>/Reshape3' : Reshape block reduction
//  Block '<S79>/Reshape4' : Reshape block reduction
//  Block '<S79>/Reshape5' : Reshape block reduction
//  Block '<S115>/Reshape' : Reshape block reduction
//  Block '<S115>/Reshape1' : Reshape block reduction
//  Block '<S115>/Reshape2' : Reshape block reduction
//  Block '<S115>/Reshape3' : Reshape block reduction
//  Block '<S115>/Reshape4' : Reshape block reduction
//  Block '<S115>/Reshape5' : Reshape block reduction
//  Block '<S148>/Reshape1' : Reshape block reduction
//  Block '<S148>/mo or x Conversion' : Eliminate redundant data type conversion
//  Block '<S148>/mo or x Conversion10' : Eliminate redundant data type conversion
//  Block '<S148>/mo or x Conversion11' : Eliminate redundant data type conversion
//  Block '<S148>/mo or x Conversion12' : Eliminate redundant data type conversion
//  Block '<S148>/mo or x Conversion16' : Eliminate redundant data type conversion
//  Block '<S148>/mo or x Conversion17' : Eliminate redundant data type conversion
//  Block '<S148>/mo or x Conversion18' : Eliminate redundant data type conversion
//  Block '<S148>/mo or x Conversion19' : Eliminate redundant data type conversion
//  Block '<S148>/mo or x Conversion2' : Eliminate redundant data type conversion
//  Block '<S148>/mo or x Conversion3' : Eliminate redundant data type conversion
//  Block '<S148>/mo or x Conversion4' : Eliminate redundant data type conversion
//  Block '<S148>/mo or x Conversion7' : Eliminate redundant data type conversion
//  Block '<S148>/mo or x Conversion8' : Eliminate redundant data type conversion
//  Block '<S148>/mo or x Conversion9' : Eliminate redundant data type conversion
//  Block '<S149>/reshape_mv' : Reshape block reduction
//  Block '<S221>/DataTypeConversion_Enable1' : Eliminate redundant data type conversion
//  Block '<S221>/DataTypeConversion_Enable3' : Eliminate redundant data type conversion
//  Block '<S221>/DataTypeConversion_Q' : Eliminate redundant data type conversion
//  Block '<S221>/DataTypeConversion_R1' : Eliminate redundant data type conversion
//  Block '<S221>/DataTypeConversion_R2' : Eliminate redundant data type conversion
//  Block '<S221>/DataTypeConversion_R3' : Eliminate redundant data type conversion
//  Block '<S221>/DataTypeConversion_uMeas1' : Eliminate redundant data type conversion
//  Block '<S221>/DataTypeConversion_uMeas2' : Eliminate redundant data type conversion
//  Block '<S221>/DataTypeConversion_uMeas3' : Eliminate redundant data type conversion
//  Block '<S221>/DataTypeConversion_y1' : Eliminate redundant data type conversion
//  Block '<S221>/DataTypeConversion_y2' : Eliminate redundant data type conversion
//  Block '<S221>/DataTypeConversion_y3' : Eliminate redundant data type conversion
//  Block '<S179>/Zero-Order Hold' : Eliminated since input and output rates are identical
//  Block '<S179>/Zero-Order Hold1' : Eliminated since input and output rates are identical
//  Block '<S181>/Reshape' : Reshape block reduction
//  Block '<S181>/Zero-Order Hold' : Eliminated since input and output rates are identical


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'proc_control'
//  '<S1>'   : 'proc_control/Enabled Subsystem'
//  '<S2>'   : 'proc_control/Enabled Subsystem1'
//  '<S3>'   : 'proc_control/ROS Input'
//  '<S4>'   : 'proc_control/Ros Command'
//  '<S5>'   : 'proc_control/Subsystem Controller'
//  '<S6>'   : 'proc_control/Subsystem ProcNav'
//  '<S7>'   : 'proc_control/Subsystem Trajectory'
//  '<S8>'   : 'proc_control/Enabled Subsystem/Send Sensor On'
//  '<S9>'   : 'proc_control/Enabled Subsystem/Send auv states'
//  '<S10>'  : 'proc_control/Enabled Subsystem/Send Sensor On/Blank Message'
//  '<S11>'  : 'proc_control/Enabled Subsystem/Send Sensor On/Publish'
//  '<S12>'  : 'proc_control/Enabled Subsystem/Send auv states/Blank Message'
//  '<S13>'  : 'proc_control/Enabled Subsystem/Send auv states/Header Assignment'
//  '<S14>'  : 'proc_control/Enabled Subsystem/Send auv states/MATLAB Function1'
//  '<S15>'  : 'proc_control/Enabled Subsystem/Send auv states/Publish'
//  '<S16>'  : 'proc_control/Enabled Subsystem/Send auv states/bus2mux'
//  '<S17>'  : 'proc_control/Enabled Subsystem1/MATLAB Function'
//  '<S18>'  : 'proc_control/Enabled Subsystem1/MATLAB Function1'
//  '<S19>'  : 'proc_control/Enabled Subsystem1/Publish'
//  '<S20>'  : 'proc_control/Enabled Subsystem1/Publish1'
//  '<S21>'  : 'proc_control/Enabled Subsystem1/Subsystem'
//  '<S22>'  : 'proc_control/Enabled Subsystem1/Subsystem/Blank Message'
//  '<S23>'  : 'proc_control/Enabled Subsystem1/Subsystem/Publish'
//  '<S24>'  : 'proc_control/ROS Input/AUV'
//  '<S25>'  : 'proc_control/ROS Input/Enabled Subsystem'
//  '<S26>'  : 'proc_control/ROS Input/Simulation'
//  '<S27>'  : 'proc_control/ROS Input/AUV/Subscribe'
//  '<S28>'  : 'proc_control/ROS Input/AUV/Subscribe1'
//  '<S29>'  : 'proc_control/ROS Input/AUV/Subscribe2'
//  '<S30>'  : 'proc_control/ROS Input/AUV/Subscribe/Enabled Subsystem'
//  '<S31>'  : 'proc_control/ROS Input/AUV/Subscribe1/Enabled Subsystem'
//  '<S32>'  : 'proc_control/ROS Input/AUV/Subscribe2/Enabled Subsystem'
//  '<S33>'  : 'proc_control/ROS Input/Enabled Subsystem/MATLAB Function'
//  '<S34>'  : 'proc_control/ROS Input/Enabled Subsystem/MinMax Running Resettable'
//  '<S35>'  : 'proc_control/ROS Input/Enabled Subsystem/MinMax Running Resettable1'
//  '<S36>'  : 'proc_control/ROS Input/Enabled Subsystem/MinMax Running Resettable/Subsystem'
//  '<S37>'  : 'proc_control/ROS Input/Enabled Subsystem/MinMax Running Resettable1/Subsystem'
//  '<S38>'  : 'proc_control/ROS Input/Simulation/Subscribe'
//  '<S39>'  : 'proc_control/ROS Input/Simulation/Subscribe1'
//  '<S40>'  : 'proc_control/ROS Input/Simulation/Subscribe2'
//  '<S41>'  : 'proc_control/ROS Input/Simulation/Subscribe/Enabled Subsystem'
//  '<S42>'  : 'proc_control/ROS Input/Simulation/Subscribe1/Enabled Subsystem'
//  '<S43>'  : 'proc_control/ROS Input/Simulation/Subscribe2/Enabled Subsystem'
//  '<S44>'  : 'proc_control/Ros Command/Get_ROS_param'
//  '<S45>'  : 'proc_control/Ros Command/Ros Command Manager'
//  '<S46>'  : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters'
//  '<S47>'  : 'proc_control/Ros Command/Get_ROS_param/Physics Parameters'
//  '<S48>'  : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains'
//  '<S49>'  : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters/targetReached Params'
//  '<S50>'  : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Default'
//  '<S51>'  : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 10'
//  '<S52>'  : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 11'
//  '<S53>'  : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 19'
//  '<S54>'  : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains No DVL'
//  '<S55>'  : 'proc_control/Ros Command/Get_ROS_param/Physics Parameters/MATLAB Function'
//  '<S56>'  : 'proc_control/Ros Command/Ros Command Manager/Subscribe'
//  '<S57>'  : 'proc_control/Ros Command/Ros Command Manager/Subscribe2'
//  '<S58>'  : 'proc_control/Ros Command/Ros Command Manager/Subscribe3'
//  '<S59>'  : 'proc_control/Ros Command/Ros Command Manager/Subscribe4'
//  '<S60>'  : 'proc_control/Ros Command/Ros Command Manager/Subscribe5'
//  '<S61>'  : 'proc_control/Ros Command/Ros Command Manager/Subscribe6'
//  '<S62>'  : 'proc_control/Ros Command/Ros Command Manager/Subscribe/Enabled Subsystem'
//  '<S63>'  : 'proc_control/Ros Command/Ros Command Manager/Subscribe2/Enabled Subsystem'
//  '<S64>'  : 'proc_control/Ros Command/Ros Command Manager/Subscribe3/Enabled Subsystem'
//  '<S65>'  : 'proc_control/Ros Command/Ros Command Manager/Subscribe4/Enabled Subsystem'
//  '<S66>'  : 'proc_control/Ros Command/Ros Command Manager/Subscribe5/Enabled Subsystem'
//  '<S67>'  : 'proc_control/Ros Command/Ros Command Manager/Subscribe6/Enabled Subsystem'
//  '<S68>'  : 'proc_control/Subsystem Controller/Controller List'
//  '<S69>'  : 'proc_control/Subsystem Controller/If Action Subsystem'
//  '<S70>'  : 'proc_control/Subsystem Controller/Post Traitement'
//  '<S71>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem'
//  '<S72>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1'
//  '<S73>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem2'
//  '<S74>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem3'
//  '<S75>'  : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)'
//  '<S76>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller'
//  '<S77>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Bus2Mux'
//  '<S78>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals'
//  '<S79>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC'
//  '<S80>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S81>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S82>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S83>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S84>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S85>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S86>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S87>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S88>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S89>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S90>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S91>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check'
//  '<S92>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S93>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S94>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S95>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S96>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S97>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S98>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S99>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S100>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S101>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S102>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S103>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Vector Signal Check'
//  '<S104>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S105>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S106>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/moorx'
//  '<S107>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/optimizer'
//  '<S108>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/optimizer/VariableHorizonOptimizer'
//  '<S109>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals/Blank Message'
//  '<S110>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals/Header Assignment'
//  '<S111>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals/Publish'
//  '<S112>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller'
//  '<S113>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Bus2Mux'
//  '<S114>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/MATLAB Function'
//  '<S115>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC'
//  '<S116>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S117>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S118>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S119>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S120>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S121>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S122>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S123>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S124>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S125>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S126>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S127>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check'
//  '<S128>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S129>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S130>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S131>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S132>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S133>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S134>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S135>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S136>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S137>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S138>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S139>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Vector Signal Check'
//  '<S140>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S141>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S142>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/moorx'
//  '<S143>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/optimizer'
//  '<S144>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/optimizer/FixedHorizonOptimizer'
//  '<S145>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem2/Discrete Derivative'
//  '<S146>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Bus2Mux1'
//  '<S147>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller'
//  '<S148>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC'
//  '<S149>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/xmvs_router'
//  '<S150>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check'
//  '<S151>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S152>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check10'
//  '<S153>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check11'
//  '<S154>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check12'
//  '<S155>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check13'
//  '<S156>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check14'
//  '<S157>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check15'
//  '<S158>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check16'
//  '<S159>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S160>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S161>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S162>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S163>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S164>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S165>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check9'
//  '<S166>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S167>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S168>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S169>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check11'
//  '<S170>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/NLMPC'
//  '<S171>' : 'proc_control/Subsystem Controller/If Action Subsystem/Subscribe'
//  '<S172>' : 'proc_control/Subsystem Controller/If Action Subsystem/Subscribe1'
//  '<S173>' : 'proc_control/Subsystem Controller/If Action Subsystem/Subscribe/Enabled Subsystem'
//  '<S174>' : 'proc_control/Subsystem Controller/If Action Subsystem/Subscribe1/Enabled Subsystem'
//  '<S175>' : 'proc_control/Subsystem Controller/Post Traitement/PSU Safe'
//  '<S176>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments'
//  '<S177>' : 'proc_control/Subsystem ProcNav/DVL Measurements'
//  '<S178>' : 'proc_control/Subsystem ProcNav/Depth Measurements'
//  '<S179>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem'
//  '<S180>' : 'proc_control/Subsystem ProcNav/Reset Logic'
//  '<S181>' : 'proc_control/Subsystem ProcNav/State function arguments'
//  '<S182>' : 'proc_control/Subsystem ProcNav/mux2Bus'
//  '<S183>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/MATLAB Function'
//  '<S184>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Conjugate'
//  '<S185>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse'
//  '<S186>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation'
//  '<S187>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1'
//  '<S188>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Conjugate'
//  '<S189>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Norm'
//  '<S190>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/Quaternion Normalize'
//  '<S191>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/V1'
//  '<S192>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/V2'
//  '<S193>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/V3'
//  '<S194>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S195>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S196>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize'
//  '<S197>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V1'
//  '<S198>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V2'
//  '<S199>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V3'
//  '<S200>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S201>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S202>' : 'proc_control/Subsystem ProcNav/DVL Measurements/DVL2Ship'
//  '<S203>' : 'proc_control/Subsystem ProcNav/DVL Measurements/MATLAB Function'
//  '<S204>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation'
//  '<S205>' : 'proc_control/Subsystem ProcNav/DVL Measurements/DVL2Ship/Enabled Subsystem'
//  '<S206>' : 'proc_control/Subsystem ProcNav/DVL Measurements/DVL2Ship/Enabled Subsystem/Rotation Angles to Quaternions'
//  '<S207>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/Quaternion Normalize'
//  '<S208>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/V1'
//  '<S209>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/V2'
//  '<S210>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/V3'
//  '<S211>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S212>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S213>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Discrete Derivative'
//  '<S214>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation'
//  '<S215>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/Quaternion Normalize'
//  '<S216>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/V1'
//  '<S217>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/V2'
//  '<S218>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/V3'
//  '<S219>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S220>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S221>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter'
//  '<S222>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Correct1'
//  '<S223>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Correct2'
//  '<S224>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Correct3'
//  '<S225>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Output'
//  '<S226>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Predict'
//  '<S227>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Output/MATLAB Function'
//  '<S228>' : 'proc_control/Subsystem ProcNav/mux2Bus/Quaternion Inverse'
//  '<S229>' : 'proc_control/Subsystem ProcNav/mux2Bus/Quaternion Inverse/Quaternion Conjugate'
//  '<S230>' : 'proc_control/Subsystem ProcNav/mux2Bus/Quaternion Inverse/Quaternion Norm'
//  '<S231>' : 'proc_control/Subsystem Trajectory/IDLE'
//  '<S232>' : 'proc_control/Subsystem Trajectory/Performance Graph'
//  '<S233>' : 'proc_control/Subsystem Trajectory/ProcPlanner Trajectory'
//  '<S234>' : 'proc_control/Subsystem Trajectory/Send Current Target'
//  '<S235>' : 'proc_control/Subsystem Trajectory/SpaceNav'
//  '<S236>' : 'proc_control/Subsystem Trajectory/Subsystem'
//  '<S237>' : 'proc_control/Subsystem Trajectory/Subsystem1'
//  '<S238>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only'
//  '<S239>' : 'proc_control/Subsystem Trajectory/IDLE/MATLAB Function'
//  '<S240>' : 'proc_control/Subsystem Trajectory/ProcPlanner Trajectory/Detect Rise Positive'
//  '<S241>' : 'proc_control/Subsystem Trajectory/ProcPlanner Trajectory/Detect Rise Positive/Positive'
//  '<S242>' : 'proc_control/Subsystem Trajectory/Send Current Target/MATLAB Function'
//  '<S243>' : 'proc_control/Subsystem Trajectory/Send Current Target/Publish'
//  '<S244>' : 'proc_control/Subsystem Trajectory/SpaceNav/MATLAB Function'
//  '<S245>' : 'proc_control/Subsystem Trajectory/Subsystem/Subscribe'
//  '<S246>' : 'proc_control/Subsystem Trajectory/Subsystem/Subscribe/Enabled Subsystem'
//  '<S247>' : 'proc_control/Subsystem Trajectory/Subsystem1/Subscribe'
//  '<S248>' : 'proc_control/Subsystem Trajectory/Subsystem1/Subscribe/Enabled Subsystem'
//  '<S249>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Enabled Subsystem'
//  '<S250>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Pre-traitement'
//  '<S251>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Resettable Subsystem'
//  '<S252>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Subscribe'
//  '<S253>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Subsystem'
//  '<S254>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Resettable Subsystem/Subsystem'
//  '<S255>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Subscribe/Enabled Subsystem'

#endif                                 // proc_control_h_

//
// File trailer for generated code.
//
// [EOF]
//
