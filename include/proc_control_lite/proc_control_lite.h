/*
 * proc_control_lite.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "proc_control_lite".
 *
 * Model version              : 1.15
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C++ source code generated on : Sun Jul 12 01:23:28 2026
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM 64-bit (LLP64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef proc_control_lite_h_
#define proc_control_lite_h_
#include <cmath>
#include <stdio.h>
#include <string.h>
#include <cstdio>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_nonfinite.h"
#include "slros2_initialize.h"
#include "proc_control_lite_types.h"
#include "rmw/qos_profiles.h"
#include "coder_array.h"
#include <string>

extern "C"
{

#include "rtGetInf.h"

}

extern "C"
{

#include "rtGetNaN.h"

}

#include "zero_crossing_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S35>/Enabled Subsystem' */
struct B_EnabledSubsystem_proc_contr_T {
  SL_Bus_std_msgs_Bool In1;            /* '<S41>/In1' */
};

/* Block signals for system '<S169>/Highpass Filter1' */
struct B_HighpassFilter1_proc_contro_T {
  real_T y;                            /* '<S169>/Highpass Filter1' */
};

/* Block states (default storage) for system '<S169>/Highpass Filter1' */
struct DW_HighpassFilter1_proc_contr_T {
  dsp_simulink_HighpassFilter_p_T obj; /* '<S169>/Highpass Filter1' */
  boolean_T objisempty;                /* '<S169>/Highpass Filter1' */
  boolean_T isInitialized;             /* '<S169>/Highpass Filter1' */
  boolean_T isInitialized_j;           /* '<S169>/Highpass Filter1' */
};

/* Block signals for system '<S169>/Lowpass Filter' */
struct B_LowpassFilter_proc_control__T {
  real_T x;                            /* '<S169>/Lowpass Filter' */
};

/* Block states (default storage) for system '<S169>/Lowpass Filter' */
struct DW_LowpassFilter_proc_control_T {
  dsp_simulink_LowpassFilter_pr_T obj; /* '<S169>/Lowpass Filter' */
  boolean_T objisempty;                /* '<S169>/Lowpass Filter' */
  boolean_T isInitialized;             /* '<S169>/Lowpass Filter' */
  boolean_T isInitialized_a;           /* '<S169>/Lowpass Filter' */
};

/* Block signals for system '<S169>/MATLAB Function3' */
struct B_MATLABFunction3_proc_contro_T {
  real_T y;                            /* '<S169>/MATLAB Function3' */
};

/* Block signals for system '<S169>/Moving Average' */
struct B_MovingAverage_proc_control__T {
  real_T csumrev[9];
  real_T MovingAverage;                /* '<S169>/Moving Average' */
};

/* Block states (default storage) for system '<S169>/Moving Average' */
struct DW_MovingAverage_proc_control_T {
  dsp_simulink_MovingAverage_pr_T obj; /* '<S169>/Moving Average' */
  boolean_T objisempty;                /* '<S169>/Moving Average' */
};

/* Block signals for system '<S169>/Moving Average1' */
struct B_MovingAverage1_proc_control_T {
  real_T y;                            /* '<S169>/Moving Average1' */
};

/* Block states (default storage) for system '<S169>/Moving Average1' */
struct DW_MovingAverage1_proc_contro_T {
  dsp_simulink_MovingAverage_e_T obj;  /* '<S169>/Moving Average1' */
  boolean_T objisempty;                /* '<S169>/Moving Average1' */
};

/* Block signals for system '<S181>/Moving Average' */
struct B_MovingAverage_proc_contro_c_T {
  real_T csumrev[49];
  real_T MovingAverage;                /* '<S181>/Moving Average' */
};

/* Block states (default storage) for system '<S181>/Moving Average' */
struct DW_MovingAverage_proc_contr_f_T {
  dsp_simulink_MovingAverage_e3_T obj; /* '<S181>/Moving Average' */
  boolean_T objisempty;                /* '<S181>/Moving Average' */
};

/* Block signals for system '<S300>/Enabled Subsystem' */
struct B_EnabledSubsystem_proc_con_e_T {
  SL_Bus_std_msgs_Float32 In1;         /* '<S304>/In1' */
};

/* Block signals for system '<S301>/Enabled Subsystem' */
struct B_EnabledSubsystem_proc_con_f_T {
  SL_Bus_sonia_common_ros2_BodyVelocityDVL In1;/* '<S305>/In1' */
};

/* Block signals for system '<S302>/Enabled Subsystem' */
struct B_EnabledSubsystem_proc_con_a_T {
  SL_Bus_sensor_msgs_Imu In1;          /* '<S306>/In1' */
};

/* Block signals (default storage) */
struct B_proc_control_lite_T {
  coder::array<uint16_T,1> b_Mrows;
  std::string Switch1_p;               /* '<S13>/Switch1' */
  std::string Switch1;                 /* '<S89>/Switch1' */
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
  coder::array<real_T,1> a__1;
  coder::array<real_T,1> cTol;
  coder::array<real_T,1> r8;
  coder::array<real_T,1> r9;
  coder::array<real_T,1> r10;
  coder::array<int32_T,1> iC;
  coder::array<boolean_T,1> r3;
  coder::array<boolean_T,1> b_iA;
  coder::array<real_T,3> Bu;
  coder::array<real_T,3> Bv;
  coder::array<real_T,3> Dv;
  s_WVbWSSvCeJzx5TXXa9L1l_proc__T TrialState;
  s_PAtG1CW05sRYOWrqzwRQyC_proc_T WorkingSet;
  s_PAtG1CW05sRYOWrqzwRQyC_proc_T b_obj;
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
  real_T Auf_data[25600];
  real_T tmp_data[20800];
  SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint In1;/* '<S260>/In1' */
  SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint rtb_SourceBlock_o2_kk;
  real_T unusedExpr[19321];
  real_T JacCeqTrans[18070];
  real_T JacEqTrans_tmp[18070];
  real_T Jx_c[16900];
  real_T Sx_data[12180];
  real_T Su_data[10400];
  real_T SuJm_data[10400];
  real_T y_data_b[10400];
  real_T varargin_2_data[10400];
  real_T a[10400];
  real_T Jmv[10400];
  real_T tmp_data_p[6561];
  real_T tmp_data_c[6561];
  real_T tmp_data_f[6561];
  real_T RLinv_data[6561];
  real_T b_D_data[6561];
  real_T b_H_data[6561];
  real_T b_H_data_g[6561];
  real_T b_H_data_g1[6561];
  real_T b_Linv_data[6561];
  real_T tmp_data_m[6561];
  real_T TL_data[6561];
  real_T Q_data[6561];
  real_T R_data[6561];
  real_T b_A_data[6561];
  real_T tmp_data_n[6561];
  real_T tmp_data_pp[6561];
  real_T tmp_data_l[6561];
  real_T in1_data[6561];
  real_T tmp_data_j[6400];
  real_T Jm_data[6400];
  real_T I2Jm_data[6400];
  real_T I3_data[6400];
  real_T varargin_4_data[6400];
  real_T varargin_6_data[6400];
  real_T tmp_data_d[6400];
  real_T Mv_aux_data[6380];
  real_T Mv_aux_data_g[6380];
  real_T b_A[4851];
  real_T o[4746];
  real_T Su1_data[4640];
  real_T AA[3969];
  coder_internal_stickyStruct_2_T FcnEvaluator;
  int8_T Au[25600];
  real_T b_C[3003];
  real_T Sx_data_l[2730];
  real_T b_Sx[2730];
  real_T tmp_data_dh[2560];
  real_T tmp_data_dy[2560];
  real_T dv[2486];
  real_T ct[2166];
  real_T varargin_2_data_l[2080];
  real_T h[2034];
  real_T ct_o[1959];
  real_T A[1859];                      /* '<S51>/MATLAB Function' */
  real_T C[1859];                      /* '<S51>/MATLAB Function' */
  real_T Bu_b[1848];
  real_T y_data_n[1829];
  real_T y_data_bs[1829];
  real_T work_data[1829];
  real_T work_data_l[1829];
  real_T vn1_data[1829];
  real_T vn2_data[1829];
  real_T work_data_h[1829];
  real_T b_data[1829];
  real_T y_data_bn[1829];
  real_T y_data_d[1829];
  real_T q[1808];
  real_T Kx_data[1680];
  real_T ct_e[1640];
  real_T Hv_data[1430];
  real_T varargin_1_data_b[1430];
  real_T b_Hv[1430];
  s_qYIvDqP9yRqtt40IDZ89JG_proc_T CostFcn_workspace_runtimedata;
  s_qYIvDqP9yRqtt40IDZ89JG_proc_T ConFcn_workspace_runtimedata;
  real_T ct_j[1260];
  real_T CovMat[1156];
  real_T B[1144];                      /* '<S51>/MATLAB Function' */
  real_T varargin_1_data_f[1040];
  real_T Su1_data_a[1040];
  real_T b_SuJm[1040];
  real_T b_Su1[1040];
  real_T WySuJm[1040];
  real_T Jmv_j[1040];
  real_T ct_jz[1016];
  real_T ct_o4[1016];
  real_T b_tmp[986];
  int8_T b_data_n[6561];
  real_T ct_i[812];
  real_T ct_oy[805];
  real_T ct_n[804];
  int8_T a_m[6400];
  real_T tmp_data_cz[640];
  real_T tmp_data_md[640];
  real_T I1_data[640];
  real_T Ku1_data[640];
  real_T I2Jm[640];
  real_T WuI2Jm[640];
  real_T WduJm[640];
  real_T tmp_data_m3[640];
  real_T tmp_data_ja[640];
  real_T b_B[630];
  real_T Mlimfull_data[580];
  real_T Vfull_data[580];
  real_T in4[445];
  real_T b_A_h[441];
  real_T AA_c[441];
  real_T Mlimfull0[436];
  real_T Vfull0[436];
  real_T in3[435];
  real_T in3_c[433];
  SL_Bus_std_msgs_Float64MultiArray In1_p;/* '<S153>/In1' */
  SL_Bus_std_msgs_Float64MultiArray rtb_SourceBlock_o2_k_p;
  SL_Bus_sonia_common_ros2_MpcInfo BusAssignment_p;/* '<S18>/Bus Assignment' */
  real_T dv1[400];
  real_T b_D[390];
  SL_Bus_sonia_common_ros2_MpcGains In1_j;/* '<S152>/In1' */
  SL_Bus_sonia_common_ros2_MpcGains rtb_SourceBlock_o2_h_a;
  real_T a__1_e[338];
  real_T rtb_P_a[338];
  real_T B_data_a[320];
  real_T b_Bu[320];
  real_T a__1_i[299];
  real_T rtb_P_l[299];
  real_T Nk[273];
  real_T b_C_o[273];
  real_T CA[273];
  real_T CA_o[273];
  real_T b_C_i[273];
  real_T Cineq_data[260];
  real_T b_data_f[260];
  real_T varargin_1_data_i[260];
  real_T b_c[260];
  real_T a__3_data[260];
  real_T varargin_1_data_ff[260];
  real_T b_c_g[260];
  real_T Je_data[260];
  sumhYdZsdukPgvAXm7nzHOD_proc__T expl_temp;
  real_T Bv_c[231];
  real_T a__1_o[230];
  real_T K[230];
  real_T b_Mlim_l[226];
  real_T Bc_m[226];
  real_T a__1_m[226];
  real_T cTol_c[226];
  real_T a__1_f[208];
  real_T rtb_P_p[208];
  real_T a__1_e1[182];
  real_T rtb_P_o[182];
  real_T A_h[169];
  real_T P[169];                       /* '<S238>/MATLAB Function' */
  real_T dv2[169];
  real_T Ac[169];
  real_T Ac_l[169];
  real_T A2[169];
  real_T A4[169];
  real_T A6[169];
  real_T T[169];
  real_T A4_h[169];
  real_T dv3[169];
  real_T a_me[169];
  real_T cBuffer[169];
  real_T aBuffer[169];
  real_T cBuffer_m[169];
  real_T cBuffer_h[169];
  real_T A2_c[169];
  real_T A4_k[169];
  real_T A6_p[169];
  real_T T_p[169];
  real_T A4_p[169];
  real_T dv4[169];
  real_T b_a[169];
  real_T cBuffer_a[169];
  real_T aBuffer_j[169];
  real_T cBuffer_e[169];
  real_T cBuffer_o[169];
  real_T Ak[169];
  real_T Ak1[169];
  real_T V[169];
  real_T A6_b[169];
  real_T V_a[169];
  real_T A6_g[169];
  real_T S[169];
  real_T b_Kx[168];
  int16_T s_data[580];
  real_T Dv_e[143];
  real_T Y[143];                       /* '<S51>/MATLAB Function' */
  real_T X[143];                       /* '<S51>/MATLAB Function' */
  real_T DX[143];                      /* '<S51>/MATLAB Function' */
  real_T CA_data[143];
  real_T X_f[143];
  real_T b_X[143];
  real_T X_h[143];
  real_T X_e[143];
  real_T X_c[143];
  real_T b_X_a[143];
  real_T b_X_d[143];
  real_T b_X_af[143];
  real_T z[139];
  real_T rtb_Selector_m_p[139];
  real_T dv5[139];
  real_T b_x[139];
  int32_T ineqRange_data[260];
  real_T K_m[130];
  real_T C_o[130];
  real_T y_n[130];                     /* '<S244>/MATLAB Function' */
  real_T Ceq[130];
  real_T c[130];
  real_T b_x_l[130];
  real_T gfX[130];
  real_T z_p[130];
  real_T VectorConcatenate[128];       /* '<S18>/Vector Concatenate' */
  real_T VectorConcatenate1[128];      /* '<S18>/Vector Concatenate1' */
  real_T VectorConcatenate2[128];      /* '<S18>/Vector Concatenate2' */
  real_T VectorConcatenate3[128];      /* '<S18>/Vector Concatenate3' */
  SL_Bus_nav_msgs_Odometry BusAssignment_g;/* '<S9>/Bus Assignment' */
  SL_Bus_nav_msgs_Odometry BusAssignment_k;/* '<S57>/Bus Assignment' */
  real_T Selector_m[117];              /* '<S128>/Selector' */
  int32_T iC_p[226];
  real_T dv6[104];
  real_T rtb_B_f[104];
  real_T Sum_i[104];
  real_T Bc_o[104];
  real_T b_Su1_k[104];
  real_T Sy[100];
  real_T R[100];
  real_T w_data[100];
  physicsConstants BusCreator;         /* '<S26>/Bus Creator' */
  real_T DataTypeConversion_uState[95];/* '<S233>/DataTypeConversion_uState' */
  real_T U[88];                        /* '<S51>/MATLAB Function' */
  real_T U_i[88];
  real_T b_U[88];
  real_T U_o[88];
  real_T b_Kv[88];
  real_T U_m[88];
  real_T U_c[88];
  real_T b_U_f[88];
  real_T Umv[88];
  real_T b_U_h[88];
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
  real_T R_p[81];
  real_T b_A_b[81];
  real_T r_data[81];
  real_T AcRow_data[81];
  real_T z_data[81];
  real_T tau_data[81];
  real_T b_Ac_data[81];
  real_T work_data_c[81];
  real_T tmp_data_nb[81];
  real_T work_data_i[81];
  real_T in1_data_m[81];
  int16_T ii_data[320];
  real_T b_utarget[80];
  real_T dv7[80];
  real_T utargetseq_data[80];
  real_T a_j[80];
  real_T gfU[80];
  real_T y_e[80];
  real_T y_data_m[80];
  real_T y_data_m0[80];
  boolean_T isMrows_data[580];
  real_T Selector1_h[72];              /* '<S128>/Selector1' */
  int16_T tmp_data_jg[260];
  int16_T tmp_data_fo[260];
  int32_T tmp_data_a[130];
  real_T dv8[64];
  real_T dv9[64];
  real_T y_tmp[64];
  real_T b_B_g[64];
  real_T b_Su1_n[64];
  real_T b_I1[64];
  SL_Bus_sensor_msgs_Imu Merge7;       /* '<S7>/Merge7' */
  SL_Bus_sensor_msgs_Imu r11;
  boolean_T isMrows0[436];
  real_T array_d[48];                  /* '<S26>/MATLAB Function' */
  real_T K_n[48];
  real_T Tm[48];
  real_T T_c[48];
  real_T Tm_f[48];
  real_T varargin_1[48];
  real_T constValues[41];
  boolean_T x_p[320];
  real_T b_dHdx[39];
  real_T K_p[39];
  real_T C_n[39];
  real_T C_k[39];
  real_T modCoeffs[36];
  real_T dv10[36];
  real_T constValues_n[36];
  real_T dv11[36];
  real_T b_this_o[36];
  real_T Ac_g[36];
  real_T inputs[36];
  real_T modCoeffs_c[36];
  real_T c_A[36];
  real_T c_A_c[36];
  real_T c_A_m[36];
  real_T b_A_j[36];
  boolean_T icf[260];
  boolean_T icf_k[260];
  int8_T Je[260];
  boolean_T bv[226];
  SL_Bus_sonia_common_ros2_BodyVelocityDVL r12;
  real_T coefsWithFlatStart[24];
  real_T work[24];
  real_T work_m[24];
  int8_T Ck[169];
  int8_T val[169];
  real_T b_xoff[21];
  real_T rtb_X_e_p[21];
  real_T Transpose_b[18];              /* '<S262>/Transpose' */
  real_T Opt[18];
  real_T Rhs[18];
  boolean_T bv1[130];
  boolean_T bv2[130];
  char_T cv[128];
  sG8JZ69axY52WWR6RKyApQC_proc__T MeritFunction;
  real_T M[14];
  int32_T icf_tmp[26];
  int32_T icf_tmp_d[26];
  real_T rtb_MATLABSystem_o10_g[13];
  real_T imvec[13];
  real_T z_c[13];
  real_T X_e_c[13];                    /* '<S50>/MATLAB System' */
  real_T dv12[13];
  real_T dv13[13];
  real_T CA_i[13];
  real_T x_dot_kk[13];
  real_T dv14[13];
  real_T w[13];
  real_T ic[13];
  real_T b_Wy[13];
  real_T w_d[13];
  real_T ic_g[13];
  real_T ix[13];
  real_T obj_next_next_next_next_next_ne[13];
  real_T gfX_l[13];
  real_T dv15[13];
  real_T ic_f[13];
  real_T dv16[13];
  real_T dv17[13];
  real_T ic_d[13];
  real_T dv18[13];
  real_T dv19[13];
  real_T imvec_j[13];
  real_T work_i[13];
  real_T work_h[13];
  real_T a_n[13];
  real_T b_tau[13];
  real_T work_o[13];
  real_T b_tau_c[13];
  real_T work_b[13];
  real_T b_tau_e[13];
  real_T work_d[13];
  real_T b_tau_i[13];
  real_T work_g[13];
  real_T tamp[13];
  real_T coefMat[12];
  real_T coefMat_n[12];
  real_T newSegmentCoeffs[12];
  real_T e[12];
  real_T tau[12];
  real_T e_l[12];
  real_T tau_c[12];
  real_T vseq_n[11];
  int8_T b[81];
  int32_T i_data[20];
  int32_T ii_data_p[20];
  boolean_T gb_data[80];
  boolean_T gb_data_d[80];
  real_T scale[10];
  real_T b_tau_o[10];
  real_T work_j[10];
  real_T twpt[9];
  real_T TmpSignalConversionAtMATL_d[9];/* '<S250>/Enabled Subsystem' */
  real_T twpt_c[9];
  real_T zopt[9];
  real_T varargin_1_h[9];
  real_T r_d[9];
  real_T z_c5[9];
  real_T tau_p[9];
  real_T work_p[9];
  real_T varargin_1_a[9];
  somzaGboVhDG7PNQS6E98jD_proc__T expl_temp_o;
  somzaGboVhDG7PNQS6E98jD_proc__T expl_temp_j;
  int8_T As[64];
  int8_T Au_tmp[64];
  int8_T Au_tmp_p[64];
  real_T mv[8];                        /* '<S127>/NLMPC' */
  real_T u_e[8];                       /* '<S86>/VariableHorizonOptimizer' */
  real_T dv20[8];
  real_T dv21[8];
  real_T umax_incr[8];
  real_T umin_incr[8];
  real_T umvk[8];
  real_T duk[8];
  real_T b_Wu[8];
  real_T b_Wdu[8];
  real_T iu[8];
  real_T umvk_o[8];
  real_T duk_l[8];
  real_T gfU_k[8];
  real_T ic_j[8];
  real_T c_f[8];
  real_T runtimedata_MVRateMin[8];
  SL_Bus_sonia_common_ros2_Pose rtb_SourceBlock_o2_n_c;
  SL_Bus_geometry_msgs_Pose BusAssignment;/* '<S246>/Bus Assignment' */
  SL_Bus_geometry_msgs_Pose ZeroOrderHold;/* '<S246>/Zero-Order Hold' */
  SL_Bus_geometry_msgs_Pose In1_g;     /* '<S44>/In1' */
  SL_Bus_geometry_msgs_Pose rtb_SourceBlock_o2_m_f;
  real_T TmpSignalConversionAtMATLAB[7];
  real_T mp[7];
  real_T y_nl[7];
  int32_T iv[13];
  int32_T icf_tmp_i[13];
  int32_T icf_tmp_l[13];
  int32_T icf_tmp_i3[13];
  int32_T icf_tmp_k[13];
  int32_T blockFormat[12];
  int32_T blockFormat_f[12];
  SL_Bus_geometry_msgs_Twist In1_l;    /* '<S258>/In1' */
  SL_Bus_geometry_msgs_Twist rtb_SourceBlock_o2_g_a;
  real_T ElementProduct[6];            /* '<S172>/Element Product' */
  real_T rtb_ElementProduct_d[6];
  real_T constValues_e[6];
  real_T constValues_eh[6];
  real_T dv22[6];
  real_T varargin_1_tmp[6];
  char_T b_zeroDelimTopic[35];
  char_T b_zeroDelimTopic_b[34];
  char_T b_zeroDelimTopic_a[34];
  char_T b_zeroDelimTopic_j[32];
  real_T n[4];
  real_T TmpSignalConversionAtSFunct[4];/* '<S156>/MATLAB Function' */
  real_T qt[4];
  real_T modBreaks[4];
  real_T qRel[4];
  real_T qRel_o[4];
  int32_T iv1[8];
  int32_T gfU_tmp[8];
  int32_T gfU_tmp_f[8];
  int32_T iv2[8];
  int32_T iv3[8];
  int32_T iv4[8];
  int32_T iv5[8];
  quaternion_proc_control_lite_T pnCorrected;
  quaternion_proc_control_lite_T expl_temp_i;
  quaternion_proc_control_lite_T expl_temp_f;
  char_T b_zeroDelimTopic_o[31];
  char_T b_zeroDelimTopic_l[31];
  char_T b_zeroDelimTopic_lu[30];
  int8_T UnknownIn[29];
  char_T b_zeroDelimTopic_g[29];
  char_T b_zeroDelimTopic_d[29];
  char_T b_zeroDelimTopic_dv[28];
  char_T b_zeroDelimTopic_jo[28];
  char_T b_zeroDelimTopic_f[28];
  char_T b_zeroDelimTopic_js[28];
  char_T b_zeroDelimTopic_h[27];
  char_T b_zeroDelimTopic_c[27];
  boolean_T icf_n[26];
  boolean_T icf_ki[26];
  char_T b_zeroDelimTopic_av[26];
  char_T b_zeroDelimTopic_fn[26];
  char_T b_zeroDelimTopic_jz[25];
  char_T b_zeroDelimTopic_k[25];
  char_T b_zeroDelimTopic_bn[25];
  char_T b_zeroDelimTopic_hm[24];
  char_T b_zeroDelimTopic_e[24];
  real_T Sum2_i[3];                    /* '<S169>/Sum2' */
  real_T sincos_o2[3];                 /* '<S218>/sincos' */
  real_T dv23[3];
  real_T Sum4[3];                      /* '<S169>/Sum4' */
  real_T dv24[3];
  real_T varargin_1_tmp_h[3];
  real_T target[3];
  real_T b_this_k[3];
  real_T b_tau_j[3];
  real_T work_oo[3];
  int32_T ipiv[6];
  int32_T ipiv_c[6];
  char_T b_zeroDelimTopic_hw[23];
  char_T b_zeroDelimTopic_i[23];
  char_T b_zeroDelimTopic_p[23];
  char_T b_zeroDelimTopic_f0[23];
  char_T b_zeroDelimTopic_ew[22];
  char_T b_zeroDelimTopic_n[21];
  char_T b_zeroDelimTopic_ho[21];
  boolean_T corr[20];
  char_T b_zeroDelimTopic_hp[20];
  char_T b_zeroDelimTopic_fnt[19];
  sJ4ih70VmKcvCeguWN0mNVF deadline;
  sJ4ih70VmKcvCeguWN0mNVF deadline_i;
  sJ4ih70VmKcvCeguWN0mNVF deadline_f;
  sJ4ih70VmKcvCeguWN0mNVF deadline_c;
  sJ4ih70VmKcvCeguWN0mNVF deadline_n;
  sJ4ih70VmKcvCeguWN0mNVF deadline_h;
  sJ4ih70VmKcvCeguWN0mNVF deadline_k;
  sJ4ih70VmKcvCeguWN0mNVF deadline_hz;
  sJ4ih70VmKcvCeguWN0mNVF deadline_b;
  sJ4ih70VmKcvCeguWN0mNVF deadline_o;
  sJ4ih70VmKcvCeguWN0mNVF deadline_nq;
  sJ4ih70VmKcvCeguWN0mNVF deadline_m;
  sJ4ih70VmKcvCeguWN0mNVF deadline_ku;
  sJ4ih70VmKcvCeguWN0mNVF deadline_j;
  sJ4ih70VmKcvCeguWN0mNVF deadline_hc;
  sJ4ih70VmKcvCeguWN0mNVF deadline_f2;
  sJ4ih70VmKcvCeguWN0mNVF deadline_d;
  sJ4ih70VmKcvCeguWN0mNVF deadline_l;
  sJ4ih70VmKcvCeguWN0mNVF deadline_kg;
  sJ4ih70VmKcvCeguWN0mNVF deadline_ic;
  sJ4ih70VmKcvCeguWN0mNVF deadline_h5;
  sJ4ih70VmKcvCeguWN0mNVF deadline_mg;
  sJ4ih70VmKcvCeguWN0mNVF deadline_g;
  sJ4ih70VmKcvCeguWN0mNVF deadline_lf;
  sJ4ih70VmKcvCeguWN0mNVF deadline_m4;
  sJ4ih70VmKcvCeguWN0mNVF deadline_nt;
  sJ4ih70VmKcvCeguWN0mNVF deadline_gv;
  sJ4ih70VmKcvCeguWN0mNVF deadline_dj;
  sJ4ih70VmKcvCeguWN0mNVF deadline_mq;
  char_T b_zeroDelimTopic_ft[16];
  sJ4ih70VmKcvCeguWN0mNVF deadline_gd;
  sJ4ih70VmKcvCeguWN0mNVF deadline_jc;
  SL_Bus_sonia_common_ros2_MotorPwm BusAssignment_p_c;/* '<S2>/Bus Assignment' */
  SL_Bus_sonia_common_ros2_MotorPwm BusAssignment1;/* '<S2>/Bus Assignment1' */
  real_T dv25[2];
  real_T dv26[2];
  real_T dv27[2];
  real_T obj[2];
  uint16_T current[8];                 /* '<S49>/N to A' */
  uint16_T pwm[8];                     /* '<S49>/n-D Lookup Table1' */
  uint8_T rows[13];
  uint8_T rows_o[13];
  int8_T b_ipiv[13];
  int8_T ipiv_a[13];
  boolean_T x_e[13];
  boolean_T x_m[13];
  boolean_T x_j[13];
  boolean_T x_g[13];
  int32_T Jx_size[3];
  int16_T WorkingSet_tmp[5];
  s7RdrPWkr8UPAUyTdDJkLaG_proc__T Flags;
  real_T Probe_o1;                     /* '<S160>/Probe' */
  real_T Probe_o2[2];                  /* '<S160>/Probe' */
  real_T Probe_o3;                     /* '<S160>/Probe' */
  real_T Probe_o4;                     /* '<S160>/Probe' */
  real_T Transpose[48];                /* '<S160>/Transpose' */
  real_T rotation[3];                  /* '<S169>/Sum1' */
  real_T Gain[3];                      /* '<S248>/Gain' */
  real_T Reference[130];               /* '<S6>/Merge' */
  real_T Constant3;                    /* '<S274>/Constant3' */
  real_T Reset;                        /* '<S296>/Reset' */
  real_T OutportBufferForOut6;         /* '<S274>/Constant3' */
  real_T y;                            /* '<S274>/MATLAB Function' */
  real_T MatrixConcatenate[2];         /* '<S262>/Matrix Concatenate' */
  real_T Selector[6];                  /* '<S262>/Selector' */
  real_T Selector1[8];                 /* '<S262>/Selector1' */
  real_T Selector4[7];                 /* '<S262>/Selector4' */
  real_T DataTypeConversion[6];        /* '<S261>/Data Type Conversion' */
  real_T DataTypeConversion1[2];       /* '<S261>/Data Type Conversion1' */
  real_T DataTypeConversion2;          /* '<S261>/Data Type Conversion2' */
  real_T DataStoreRead[13];            /* '<S238>/Data Store Read' */
  real_T zposition;                    /* '<S157>/Sum' */
  real_T Gain2;                        /* '<S220>/Gain2' */
  real_T Gain_l;                       /* '<S220>/Gain' */
  real_T Gain1;                        /* '<S220>/Gain1' */
  real_T Sum;                          /* '<S220>/Sum' */
  real_T Gain_o;                       /* '<S221>/Gain' */
  real_T Gain2_l;                      /* '<S221>/Gain2' */
  real_T Gain1_d;                      /* '<S221>/Gain1' */
  real_T Sum_n;                        /* '<S221>/Sum' */
  real_T Gain_d;                       /* '<S222>/Gain' */
  real_T Gain1_e;                      /* '<S222>/Gain1' */
  real_T Gain2_n;                      /* '<S222>/Gain2' */
  real_T Sum_l;                        /* '<S222>/Sum' */
  real_T enable;                       /* '<S156>/MATLAB Function' */
  real_T q0;                           /* '<S218>/q0' */
  real_T q1;                           /* '<S218>/q1' */
  real_T q2;                           /* '<S218>/q2' */
  real_T q3;                           /* '<S218>/q3' */
  real_T Sum_p;                        /* '<S206>/Sum' */
  real_T Sum_pn;                       /* '<S207>/Sum' */
  real_T Sum_nk;                       /* '<S205>/Sum' */
  real_T DiscreteTimeIntegrator_o[3];  /* '<S180>/Discrete-Time Integrator' */
  real_T x;                            /* '<S169>/Highpass Filter' */
  real_T ywt[13];                      /* '<S48>/MATLAB System' */
  real_T mvwt[8];                      /* '<S48>/MATLAB System' */
  real_T dmwwt[8];                     /* '<S48>/MATLAB System' */
  real_T p;                            /* '<S48>/MATLAB System' */
  real_T m;                            /* '<S48>/MATLAB System' */
  real_T mvmin[8];                     /* '<S48>/MATLAB System' */
  real_T mvmax[8];                     /* '<S48>/MATLAB System' */
  real_T p_h;                          /* '<S27>/Data Type Conversion' */
  real_T m_a;                          /* '<S27>/Data Type Conversion1' */
  real_T timeInTol;                    /* '<S28>/Time In Tolerance' */
  real_T linearTol;                    /* '<S28>/Linear Tolerance' */
  real_T angularTol;                   /* '<S28>/Angular Tolerance' */
  real_T tmin;                         /* '<S27>/T Min' */
  real_T tmax;                         /* '<S27>/T Max' */
  real_T MV[8];                        /* '<S33>/MATLAB System5' */
  real_T MV_c[8];                      /* '<S32>/MATLAB System5' */
  real_T OV[13];                       /* '<S32>/MATLAB System4' */
  real_T MVR[8];                       /* '<S32>/MATLAB System3' */
  real_T MV_l[8];                      /* '<S31>/MATLAB System5' */
  real_T OV_l[13];                     /* '<S31>/MATLAB System4' */
  real_T MVR_c[8];                     /* '<S31>/MATLAB System3' */
  real_T MV_j[8];                      /* '<S30>/MATLAB System5' */
  real_T OV_c[13];                     /* '<S30>/MATLAB System4' */
  real_T MVR_a[8];                     /* '<S30>/MATLAB System3' */
  real_T MV_p[8];                      /* '<S29>/MATLAB System4' */
  real_T OV_d[13];                     /* '<S29>/MATLAB System3' */
  real_T MVR_cn[8];                    /* '<S29>/MATLAB System1' */
  real_T WorldPosition[3];
                       /* '<S1>/BusConversion_InsertedFor_Output_at_inport_0' */
  real_T qS2W[4];      /* '<S1>/BusConversion_InsertedFor_Output_at_inport_0' */
  real_T qW2S[4];      /* '<S1>/BusConversion_InsertedFor_Output_at_inport_0' */
  real_T BodyVelocity[3];
                       /* '<S1>/BusConversion_InsertedFor_Output_at_inport_0' */
  real_T AngularRate[3];
                       /* '<S1>/BusConversion_InsertedFor_Output_at_inport_0' */
  real_T d;
  real_T scale_j;
  real_T absxk;
  real_T t;
  real_T sina;
  real_T sinb;
  real_T t32;
  real_T t33;
  real_T t34;
  real_T t40;
  real_T t41;
  real_T t42;
  real_T t43;
  real_T t55;
  real_T t59;
  real_T t61;
  real_T t68;
  real_T t60;
  real_T residue;
  real_T t9;
  real_T t10;
  real_T t11;
  real_T t12;
  real_T t13;
  real_T t16;
  real_T t19;
  real_T t20;
  real_T t24;
  real_T t52;
  real_T t70;
  real_T Divide3;                      /* '<S167>/Divide3' */
  real_T Sum_j;                        /* '<S243>/Sum' */
  real_T Product2_nyy;                 /* '<S243>/Product2' */
  real_T Product3_ly;                  /* '<S243>/Product3' */
  real_T Product3_mp;                  /* '<S194>/Product3' */
  real_T Sum_ks;                       /* '<S230>/Sum' */
  real_T Product2_cn;                  /* '<S194>/Product2' */
  real_T Product8_bq;                  /* '<S197>/Product8' */
  real_T Product1_hg;                  /* '<S219>/Product1' */
  real_T Product_o;                    /* '<S219>/Product' */
  real_T Product2_jt;                  /* '<S219>/Product2' */
  real_T Product3_h;                   /* '<S219>/Product3' */
  real_T Product1_g;                   /* '<S194>/Product1' */
  real_T Sum_ks_e;                     /* '<S230>/Sum' */
  real_T Product1_g_j;                 /* '<S194>/Product1' */
  real_T Product3_ly_j;                /* '<S243>/Product3' */
  real_T Product8_bq_g;                /* '<S197>/Product8' */
  real_T rtb_TSamp_idx_2;
  real_T rtb_Sum_m_idx_2;
  real_T rtb_TSamp_idx_1;
  real_T rtb_Sum_m_idx_1;
  real_T rtb_TSamp_idx_0;
  real_T rtb_Sum_m_idx_0;
  real_T Sum_k;                        /* '<S195>/Sum' */
  real_T Sum_p_tmp;
  real_T Sum_pn_tmp;
  real_T rtb_Sum2_i_tmp;
  real_T d_tmp;
  real_T rtb_Product1_g_tmp;
  real_T t35_tmp;
  real_T t36_tmp;
  real_T t37_tmp;
  real_T t70_tmp;
  real_T t24_tmp;
  real_T t32_tmp;
  real_T rtb_Sum_ks_tmp;
  real_T d_o;
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
  real_T CA_h;
  real_T bkj;
  real_T t5;
  real_T t6;
  real_T t14;
  real_T t15;
  real_T t16_c;
  real_T t17;
  real_T t18;
  real_T t19_a;
  real_T constMec_rg;
  real_T constMec_rg_l;
  real_T constMec_rg_j;
  real_T exptj;
  real_T d6_i;
  real_T eta1;
  real_T A4_m;
  real_T e_f;
  real_T ed2;
  real_T cBuffer_on;
  real_T b_c_i;
  real_T absxk_e;
  real_T t_j;
  real_T TrialState_lambdasqp;
  real_T phi_alpha;
  real_T fs;
  real_T e_o;
  real_T wtYerr;
  real_T umvk_f;
  real_T duk_m;
  real_T wtYerr_a;
  real_T e_h;
  real_T ic_o;
  real_T runtimedata_OutputMin;
  real_T normH;
  real_T s;
  real_T b_B_h;
  real_T WuI2Jm_j;
  real_T b_Jm;
  real_T rMin;
  real_T Xnorm0;
  real_T cMin;
  real_T cVal;
  real_T t_g;
  real_T beta1;
  real_T b_A_jz;
  real_T RLinv_l;
  real_T scale_k;
  real_T absxk_d;
  real_T t_n;
  real_T exptj_j;
  real_T d6_a;
  real_T eta1_h;
  real_T A4_i;
  real_T e_d;
  real_T ed2_b;
  real_T cBuffer_hj;
  real_T e_p;
  real_T ic_n;
  real_T runtimedata_OutputMin_j;
  real_T fs_o;
  real_T e_b;
  real_T wtYerr_j;
  real_T duk_e;
  real_T umvk_i;
  real_T wtYerr_n;
  real_T obj_next_next_next_next_next__i;
  real_T y_p;
  real_T sina_o;
  real_T sinb_m;
  real_T sinc;
  real_T cosa;
  real_T cosb;
  real_T cosc;
  real_T qt_idx_0;
  real_T qt_idx_1;
  real_T qt_idx_2;
  real_T inputs_o;
  real_T inputs_g;
  real_T inputs_e;
  real_T t20_i;
  real_T t22;
  real_T t23;
  real_T t24_g;
  real_T t27;
  real_T t28;
  real_T t29;
  real_T t30;
  real_T t31;
  real_T t32_g;
  real_T t36;
  real_T t37;
  real_T t38;
  real_T t40_g;
  real_T t41_g;
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
  real_T t122;
  real_T t123;
  real_T t83_tmp;
  real_T t84_tmp;
  real_T t85_tmp;
  real_T t86_tmp;
  real_T t87_tmp;
  real_T t88_tmp;
  real_T t95_tmp;
  real_T t96_tmp;
  real_T t83_tmp_tmp;
  real_T t85_tmp_tmp;
  real_T t99_tmp;
  real_T t100_tmp;
  real_T t103_tmp;
  real_T t104_tmp;
  real_T t111_tmp;
  real_T t114_tmp;
  real_T t118_tmp;
  real_T t122_tmp;
  real_T t84_tmp_tmp;
  real_T t87_tmp_tmp;
  real_T t86_tmp_tmp;
  real_T t88_tmp_tmp;
  real_T t99_tmp_tmp;
  real_T t100_tmp_tmp;
  real_T t95_tmp_tmp;
  real_T t96_tmp_tmp;
  real_T t114_tmp_tmp;
  real_T t111_tmp_tmp;
  real_T t118_tmp_tmp;
  real_T in4_tmp;
  real_T in4_tmp_k;
  real_T in4_tmp_d;
  real_T t122_tmp_tmp;
  real_T in4_tmp_kx;
  real_T in4_tmp_p;
  real_T in4_tmp_p5;
  real_T in4_tmp_m;
  real_T in4_tmp_kt;
  real_T in4_tmp_a;
  real_T in4_tmp_f;
  real_T t95_tmp_c;
  real_T t96_tmp_j;
  real_T t99_tmp_k;
  real_T t100_tmp_h;
  real_T t103_tmp_d;
  real_T t104_tmp_j;
  real_T t111_tmp_n;
  real_T t114_tmp_j;
  real_T t118_tmp_l;
  real_T t122_tmp_p;
  real_T in4_tmp_po;
  real_T in4_tmp_l;
  real_T in4_tmp_ld;
  real_T in4_tmp_h;
  real_T in4_tmp_c;
  real_T in4_tmp_g;
  real_T in4_tmp_e;
  real_T in4_tmp_n;
  real_T in4_tmp_fn;
  real_T in4_tmp_nl;
  real_T in4_tmp_e2;
  real_T in4_tmp_b;
  real_T in4_tmp_av;
  real_T in4_tmp_i;
  real_T in4_tmp_nq;
  real_T in4_tmp_fx;
  real_T in4_tmp_i4;
  real_T in4_tmp_k3;
  real_T in4_tmp_b0;
  real_T in4_tmp_da;
  real_T in4_tmp_hs;
  real_T in4_tmp_nlw;
  real_T in4_tmp_fj;
  real_T in4_tmp_ay;
  real_T in4_tmp_mu;
  real_T in4_tmp_gu;
  real_T in4_tmp_nh;
  real_T in4_tmp_ch;
  real_T in4_tmp_d4;
  real_T in4_tmp_ky;
  real_T in4_tmp_cl;
  real_T in4_tmp_j;
  real_T in4_tmp_mt;
  real_T in4_tmp_ie;
  real_T in4_tmp_bj;
  real_T in4_tmp_o;
  real_T in4_tmp_gs;
  real_T in4_tmp_ed;
  real_T in4_tmp_in;
  real_T in4_tmp_eb;
  real_T in4_tmp_is;
  real_T in4_tmp_m5;
  real_T in4_tmp_dl;
  real_T in4_tmp_j4;
  real_T in4_tmp_pe;
  real_T in4_tmp_b4;
  real_T in4_tmp_pn;
  real_T in4_tmp_nm;
  real_T t898;
  real_T t899;
  real_T t900;
  real_T t901;
  real_T t902;
  real_T t903;
  real_T t899_tmp;
  real_T t898_tmp;
  real_T t900_tmp;
  real_T ct_tmp;
  real_T t901_tmp;
  real_T t903_tmp;
  real_T ct_tmp_c;
  real_T t902_tmp;
  real_T ct_tmp_n;
  real_T ct_tmp_d;
  real_T ct_tmp_i;
  real_T ct_tmp_no;
  real_T ct_tmp_b;
  real_T ct_tmp_bt;
  real_T ct_tmp_j;
  real_T ct_tmp_n0;
  real_T ct_tmp_f;
  real_T ct_tmp_e;
  real_T t900_tmp_i;
  real_T t899_tmp_a;
  real_T t898_tmp_f;
  real_T t901_tmp_k;
  real_T t903_tmp_c;
  real_T t902_tmp_j;
  real_T ct_tmp_l;
  real_T ct_tmp_a;
  real_T ct_tmp_iy;
  real_T ct_tmp_o;
  real_T ct_tmp_tmp;
  real_T ct_tmp_tmp_b;
  real_T ct_tmp_tmp_a;
  real_T ct_tmp_tmp_aq;
  real_T ct_tmp_i0;
  real_T ct_tmp_iz;
  real_T ct_tmp_lg;
  real_T ct_tmp_o5;
  real_T ct_tmp_p;
  real_T ct_tmp_om;
  real_T ct_tmp_cm;
  real_T ct_tmp_oc;
  real_T ct_tmp_ol;
  real_T ct_tmp_h;
  real_T ct_tmp_tmp_i;
  real_T ct_tmp_g;
  real_T ct_tmp_c1;
  real_T ct_tmp_ok;
  real_T ct_tmp_g5;
  real_T ct_tmp_o2;
  real_T t1164;
  real_T t1165;
  real_T t1166;
  real_T t1466;
  real_T t1488;
  real_T t1489;
  real_T t1490;
  real_T t1491;
  real_T t1492;
  real_T t1493;
  real_T t519;
  real_T t554;
  real_T t1463;
  real_T t1464;
  real_T t1465;
  real_T t1524;
  real_T t1546;
  real_T t1526;
  real_T t1542;
  real_T t1546_tmp;
  real_T t1546_tmp_g;
  real_T t1543_tmp;
  real_T t1543_tmp_a;
  real_T t1542_tmp;
  real_T out1_tmp;
  real_T out1_tmp_g;
  real_T out1_tmp_b;
  real_T out1_tmp_k;
  real_T out1_tmp_c;
  real_T out1_tmp_j;
  real_T out1_tmp_a;
  real_T out1_tmp_d;
  real_T out1_tmp_cx;
  real_T out1_tmp_d0;
  real_T out1_tmp_a2;
  real_T out1_tmp_bo;
  real_T out1_tmp_gu;
  real_T out1_tmp_f;
  real_T out1_tmp_cg;
  real_T out1_tmp_p;
  real_T out1_tmp_at;
  real_T out1_tmp_n;
  real_T out1_tmp_h;
  real_T out1_tmp_m;
  real_T out1_tmp_f5;
  real_T out1_tmp_bw;
  real_T out1_tmp_e;
  real_T out1_tmp_nz;
  real_T out1_tmp_p4;
  real_T out1_tmp_i;
  real_T out1_tmp_js;
  real_T out1_tmp_l;
  real_T out1_tmp_ce;
  real_T out1_tmp_gr;
  real_T out1_tmp_c5;
  real_T out1_tmp_ly;
  real_T out1_tmp_ev;
  real_T out1_tmp_dt;
  real_T out1_tmp_my;
  real_T out1_tmp_fi;
  real_T out1_tmp_nl;
  real_T out1_tmp_o;
  real_T out1_tmp_en;
  real_T out1_tmp_mp;
  real_T out1_tmp_ch;
  real_T out1_tmp_g4;
  real_T out1_tmp_bn;
  real_T out1_tmp_po;
  real_T out1_tmp_p2;
  real_T out1_tmp_ap;
  real_T out1_tmp_fm;
  real_T out1_tmp_gr1;
  real_T out1_tmp_b0;
  real_T out1_tmp_kw;
  real_T out1_tmp_k1;
  real_T out1_tmp_bwc;
  real_T out1_tmp_ix;
  real_T out1_tmp_nj;
  real_T out1_tmp_hx;
  real_T out1_tmp_ni;
  real_T out1_tmp_mm;
  real_T out1_tmp_guo;
  real_T out1_tmp_jb;
  real_T out1_tmp_f0;
  real_T out1_tmp_ng;
  real_T out1_tmp_gt;
  real_T out1_tmp_d1;
  real_T out1_tmp_cj;
  real_T out1_tmp_myu;
  real_T out1_tmp_dk;
  real_T out1_tmp_n4;
  real_T out1_tmp_bwe;
  real_T out1_tmp_p2x;
  real_T out1_tmp_kg;
  real_T out1_tmp_cl;
  real_T out1_tmp_n2;
  real_T out1_tmp_nm;
  real_T out1_tmp_cd;
  real_T out1_tmp_tmp;
  real_T out1_tmp_tmp_d;
  real_T out1_tmp_tmp_n;
  real_T out1_tmp_guh;
  real_T out1_tmp_lx;
  real_T out1_tmp_ge;
  real_T out1_tmp_pv;
  real_T out1_tmp_ko;
  real_T out1_tmp_l1;
  real_T out1_tmp_bf;
  real_T out1_tmp_cxc;
  real_T out1_tmp_fb;
  real_T out1_tmp_oo;
  real_T out1_tmp_tmp_dd;
  real_T out1_tmp_tmp_l;
  real_T out1_tmp_tmp_ls;
  real_T out1_tmp_dr;
  real_T out1_tmp_ku;
  real_T out1_tmp_fo;
  real_T out1_tmp_p3;
  real_T out1_tmp_k1y;
  real_T out1_tmp_k4;
  real_T out1_tmp_iv;
  real_T out1_tmp_ew;
  real_T out1_tmp_ft;
  real_T out1_tmp_kx;
  real_T out1_tmp_ne;
  real_T out1_tmp_tmp_i;
  real_T out1_tmp_tmp_im;
  real_T out1_tmp_tmp_o;
  real_T out1_tmp_dn;
  real_T out1_tmp_iu;
  real_T out1_tmp_gy;
  real_T out1_tmp_cv;
  real_T out1_tmp_ee;
  real_T out1_tmp_a5;
  real_T out1_tmp_hq;
  real_T out1_tmp_ef;
  real_T out1_tmp_dw;
  real_T out1_tmp_g5;
  real_T out1_tmp_ev0;
  real_T out1_tmp_eq;
  real_T out1_tmp_gm;
  real_T out1_tmp_gk;
  real_T out1_tmp_dz;
  real_T out1_tmp_n1;
  real_T out1_tmp_p2p;
  real_T out1_tmp_bs;
  real_T out1_tmp_iw;
  real_T out1_tmp_bi;
  real_T out1_tmp_jv;
  real_T out1_tmp_gz;
  real_T out1_tmp_nly;
  real_T out1_tmp_p40;
  real_T out1_tmp_fbc;
  real_T out1_tmp_fs;
  real_T out1_tmp_tmp_a;
  real_T out1_tmp_tmp_g;
  real_T out1_tmp_ma;
  real_T out1_tmp_dv;
  real_T out1_tmp_efd;
  real_T out1_tmp_ey;
  real_T out1_tmp_dl;
  real_T out1_tmp_jbr;
  real_T out1_tmp_tmp_nx;
  real_T out1_tmp_tmp_j;
  real_T out1_tmp_tmp_p;
  real_T out1_tmp_aw;
  real_T out1_tmp_df;
  real_T out1_tmp_pz;
  real_T out1_tmp_d2;
  real_T out1_tmp_pq;
  real_T out1_tmp_fp;
  real_T out1_tmp_gen;
  real_T out1_tmp_dp;
  real_T out1_tmp_hg;
  real_T out1_tmp_ie;
  real_T out1_tmp_mz;
  real_T out1_tmp_cy;
  real_T out1_tmp_lv;
  real_T out1_tmp_pb;
  real_T out1_tmp_tmp_i1;
  real_T out1_tmp_tmp_b;
  real_T out1_tmp_tmp_gn;
  real_T out1_tmp_oq;
  real_T out1_tmp_b1;
  real_T out1_tmp_ewq;
  real_T out1_tmp_e1;
  real_T out1_tmp_lg;
  real_T out1_tmp_cf;
  real_T out1_tmp_e5;
  real_T out1_tmp_dwl;
  real_T out1_tmp_oe;
  real_T out1_tmp_lw;
  real_T out1_tmp_hga;
  real_T out1_tmp_ln;
  real_T out1_tmp_c5w;
  real_T out1_tmp_cxz;
  real_T out1_tmp_ag;
  real_T out1_tmp_i2;
  real_T out1_tmp_lt;
  real_T out1_tmp_iy;
  real_T out1_tmp_az;
  real_T out1_tmp_ixq;
  real_T out1_tmp_c3;
  real_T out1_tmp_mb;
  real_T out1_tmp_nn;
  real_T out1_tmp_chb;
  real_T out1_tmp_na;
  real_T out1_tmp_hk;
  real_T out1_tmp_iut;
  real_T out1_tmp_ef2;
  real_T out1_tmp_pc;
  real_T out1_tmp_kov;
  real_T out1_tmp_tmp_i3;
  real_T out1_tmp_tmp_nl;
  real_T out1_tmp_tmp_ob;
  real_T out1_tmp_lc;
  real_T out1_tmp_pr;
  real_T out1_tmp_br;
  real_T out1_tmp_fy;
  real_T out1_tmp_is;
  real_T out1_tmp_ci;
  real_T out1_tmp_gl;
  real_T out1_tmp_iuw;
  real_T out1_tmp_b11;
  real_T out1_tmp_nad;
  real_T out1_tmp_pn;
  real_T out1_tmp_oor;
  real_T out1_tmp_by;
  real_T out1_tmp_o1;
  real_T out1_tmp_cm;
  real_T out1_tmp_jc;
  real_T out1_tmp_ei;
  real_T out1_tmp_pw;
  real_T out1_tmp_np;
  real_T out1_tmp_oec;
  real_T out1_tmp_d5;
  real_T out1_tmp_gq;
  real_T out1_tmp_il;
  real_T out1_tmp_ih;
  real_T out1_tmp_cc;
  real_T out1_tmp_bv;
  real_T out1_tmp_gh;
  real_T out1_tmp_dfn;
  real_T out1_tmp_fn;
  real_T out1_tmp_j1;
  real_T out1_tmp_eqx;
  real_T out1_tmp_pc2;
  real_T out1_tmp_dd;
  real_T out1_tmp_fmm;
  real_T t1524_n;
  real_T t20_o;
  real_T t22_d;
  real_T t23_l;
  real_T t24_f;
  real_T t27_j;
  real_T t28_g;
  real_T t29_l;
  real_T t30_k;
  real_T t31_p;
  real_T t32_b;
  real_T t36_i;
  real_T t37_p;
  real_T t38_l;
  real_T t39;
  real_T t41_e;
  real_T t42_e;
  real_T t44;
  real_T t49_p;
  real_T t50;
  real_T t52_j;
  real_T t80;
  real_T t81;
  real_T t82;
  real_T t83_g;
  real_T t84_l;
  real_T t85_j;
  real_T t86_p;
  real_T t87_d;
  real_T t88_k;
  real_T t89_m;
  real_T t90_f;
  real_T t91_m;
  real_T t92_n;
  real_T t93_m;
  real_T t94_b;
  real_T t95_c;
  real_T t96_g;
  real_T t97_c;
  real_T t100_i;
  real_T t101;
  real_T t102;
  real_T t103_k;
  real_T t104_g;
  real_T t105_p;
  real_T t108_f;
  real_T t111_m;
  real_T t112;
  real_T t113;
  real_T t115_m;
  real_T t117;
  real_T t119;
  real_T t120_l;
  real_T t80_tmp;
  real_T t81_tmp;
  real_T t82_tmp;
  real_T t83_tmp_j;
  real_T t84_tmp_m;
  real_T t85_tmp_j;
  real_T t92_tmp;
  real_T t93_tmp;
  real_T t80_tmp_tmp;
  real_T t82_tmp_tmp;
  real_T t96_tmp_i;
  real_T t97_tmp;
  real_T t100_tmp_a;
  real_T t101_tmp;
  real_T t108_tmp;
  real_T t111_tmp_h;
  real_T t115_tmp;
  real_T t119_tmp;
  real_T t81_tmp_tmp;
  real_T t84_tmp_tmp_d;
  real_T t83_tmp_tmp_i;
  real_T t85_tmp_tmp_h;
  real_T t96_tmp_tmp_d;
  real_T t97_tmp_tmp;
  real_T t92_tmp_tmp;
  real_T t93_tmp_tmp;
  real_T t111_tmp_tmp_l;
  real_T t108_tmp_tmp;
  real_T t115_tmp_tmp;
  real_T in3_tmp;
  real_T in3_tmp_f;
  real_T in3_tmp_l;
  real_T t119_tmp_tmp;
  real_T in3_tmp_l3;
  real_T in3_tmp_f4;
  real_T in3_tmp_g;
  real_T in3_tmp_gz;
  real_T in3_tmp_a;
  real_T t92_tmp_d;
  real_T t96_tmp_b;
  real_T t100_tmp_d;
  real_T t119_tmp_f;
  real_T in3_tmp_as;
  real_T in3_tmp_m;
  real_T in3_tmp_i;
  real_T in3_tmp_ir;
  real_T in3_tmp_k;
  real_T in3_tmp_au;
  real_T in3_tmp_m2;
  real_T in3_tmp_c;
  real_T in3_tmp_b;
  real_T in3_tmp_kg;
  real_T in3_tmp_lr;
  real_T in3_tmp_n;
  real_T in3_tmp_p;
  real_T in3_tmp_f0;
  real_T in3_tmp_ko;
  real_T in3_tmp_e;
  real_T in3_tmp_na;
  real_T in3_tmp_o;
  real_T in3_tmp_ad;
  real_T in3_tmp_bi;
  real_T in3_tmp_ba;
  real_T in3_tmp_mg;
  real_T in3_tmp_mc;
  real_T in3_tmp_kw;
  real_T in3_tmp_mcj;
  real_T in3_tmp_h;
  real_T in3_tmp_i1;
  real_T in3_tmp_ct;
  real_T in3_tmp_ni;
  real_T in3_tmp_il;
  real_T in3_tmp_oc;
  real_T in3_tmp_hy;
  real_T in3_tmp_pj;
  real_T in3_tmp_go;
  real_T in3_tmp_cy;
  real_T in3_tmp_gn;
  real_T in3_tmp_bb;
  real_T in3_tmp_j;
  real_T in3_tmp_ha;
  real_T in3_tmp_d;
  real_T in3_tmp_oa;
  real_T in3_tmp_k2;
  real_T in3_tmp_jw;
  real_T in3_tmp_de;
  real_T in3_tmp_fs;
  real_T in3_tmp_aq;
  real_T in3_tmp_eg;
  real_T in3_tmp_ns;
  real_T in3_tmp_ob;
  real_T in3_tmp_dk;
  real_T in3_tmp_cu;
  real_T in3_tmp_mw;
  real_T in3_tmp_ocx;
  real_T in3_tmp_bc;
  real_T in3_tmp_ml;
  real_T in3_tmp_ii;
  real_T in3_tmp_ih;
  real_T in3_tmp_g5;
  real_T in3_tmp_mu;
  real_T t93_tmp_n;
  real_T t97_tmp_c;
  real_T t101_tmp_j;
  real_T t108_tmp_e;
  real_T t111_tmp_e;
  real_T t115_tmp_k;
  real_T t896;
  real_T t897;
  real_T t898_k;
  real_T t899_i;
  real_T t900_e;
  real_T t901_l;
  real_T t897_tmp;
  real_T t896_tmp;
  real_T t898_tmp_l;
  real_T ct_tmp_lc;
  real_T t899_tmp_o;
  real_T t901_tmp_i;
  real_T ct_tmp_e2;
  real_T t900_tmp_l;
  real_T ct_tmp_noc;
  real_T ct_tmp_eu;
  real_T ct_tmp_cu;
  real_T ct_tmp_ap;
  real_T ct_tmp_m;
  real_T ct_tmp_ck;
  real_T ct_tmp_fg;
  real_T ct_tmp_mj;
  real_T ct_tmp_k;
  real_T ct_tmp_bu;
  real_T t898_tmp_h;
  real_T t897_tmp_h;
  real_T t896_tmp_h;
  real_T t899_tmp_b;
  real_T t901_tmp_b;
  real_T t900_tmp_d;
  real_T ct_tmp_jd;
  real_T ct_tmp_dl;
  real_T ct_tmp_lo;
  real_T ct_tmp_jk;
  real_T ct_tmp_tmp_bi;
  real_T ct_tmp_tmp_f;
  real_T ct_tmp_tmp_p;
  real_T ct_tmp_tmp_l;
  real_T ct_tmp_l1;
  real_T ct_tmp_i5;
  real_T ct_tmp_okp;
  real_T ct_tmp_bv;
  real_T ct_tmp_it;
  real_T ct_tmp_gv;
  real_T ct_tmp_po;
  real_T ct_tmp_h5;
  real_T ct_tmp_dd;
  real_T ct_tmp_fb;
  real_T ct_tmp_tmp_fo;
  real_T ct_tmp_c1h;
  real_T ct_tmp_dk;
  real_T ct_tmp_ca;
  real_T ct_tmp_bc;
  real_T ct_tmp_pw;
  real_T t1162;
  real_T t1163;
  real_T t1164_h;
  real_T t1459;
  real_T t1483;
  real_T t1484;
  real_T t1485;
  real_T t1488_e;
  real_T t1489_l;
  real_T t1490_h;
  real_T t517;
  real_T t552;
  real_T t575;
  real_T ct_tmp_tmp_n;
  real_T t1456;
  real_T t1457;
  real_T t1458;
  real_T t1479;
  real_T t1499;
  real_T t1527;
  real_T t1533;
  real_T t1533_tmp;
  real_T t1533_tmp_k;
  real_T t1533_tmp_b;
  real_T out1_tmp_oy;
  real_T out1_tmp_nij;
  real_T out1_tmp_fij;
  real_T out1_tmp_grk;
  real_T out1_tmp_dm;
  real_T out1_tmp_d1g;
  real_T out1_tmp_eyj;
  real_T out1_tmp_cei;
  real_T out1_tmp_ar;
  real_T out1_tmp_hp;
  real_T out1_tmp_er;
  real_T out1_tmp_nei;
  real_T out1_tmp_hgs;
  real_T out1_tmp_oc;
  real_T out1_tmp_foh;
  real_T out1_tmp_k1c;
  real_T out1_tmp_ej;
  real_T out1_tmp_iwr;
  real_T out1_tmp_o3;
  real_T out1_tmp_jo;
  real_T out1_tmp_ky;
  real_T out1_tmp_ja;
  real_T out1_tmp_d03;
  real_T out1_tmp_gn;
  real_T out1_tmp_c5m;
  real_T out1_tmp_kh;
  real_T out1_tmp_jn;
  real_T out1_tmp_hc;
  real_T out1_tmp_cz;
  real_T out1_tmp_dh;
  real_T out1_tmp_ai;
  real_T out1_tmp_pu;
  real_T out1_tmp_fk;
  real_T out1_tmp_h2;
  real_T out1_tmp_j5;
  real_T out1_tmp_nr;
  real_T out1_tmp_o14;
  real_T out1_tmp_on;
  real_T out1_tmp_dvd;
  real_T out1_tmp_ac;
  real_T out1_tmp_kwn;
  real_T out1_tmp_ct;
  real_T out1_tmp_jy;
  real_T out1_tmp_bh;
  real_T out1_tmp_nc;
  real_T out1_tmp_dmd;
  real_T out1_tmp_hf;
  real_T out1_tmp_bfm;
  real_T out1_tmp_py;
  real_T out1_tmp_bp;
  real_T out1_tmp_px;
  real_T out1_tmp_nek;
  real_T out1_tmp_j2;
  real_T out1_tmp_bny;
  real_T out1_tmp_ny;
  real_T out1_tmp_bweh;
  real_T out1_tmp_jr;
  real_T out1_tmp_k0;
  real_T out1_tmp_dq;
  real_T out1_tmp_dj;
  real_T out1_tmp_o0;
  real_T out1_tmp_cfs;
  real_T out1_tmp_oz;
  real_T out1_tmp_aj;
  real_T out1_tmp_dqn;
  real_T out1_tmp_el;
  real_T out1_tmp_iz;
  real_T out1_tmp_bwn;
  real_T out1_tmp_an;
  real_T out1_tmp_kz;
  real_T out1_tmp_m2;
  real_T out1_tmp_jx;
  real_T out1_tmp_jm;
  real_T out1_tmp_kgj;
  real_T out1_tmp_kp;
  real_T out1_tmp_arp;
  real_T out1_tmp_kc;
  real_T out1_tmp_fo1;
  real_T out1_tmp_czb;
  real_T out1_tmp_ong;
  real_T out1_tmp_kv;
  real_T out1_tmp_p2d;
  real_T out1_tmp_f4;
  real_T out1_tmp_dx;
  real_T out1_tmp_eb;
  real_T out1_tmp_lf;
  real_T out1_tmp_ez;
  real_T out1_tmp_hv;
  real_T out1_tmp_tmp_gg;
  real_T out1_tmp_tmp_p5;
  real_T out1_tmp_tmp_nli;
  real_T out1_tmp_o2;
  real_T out1_tmp_lh;
  real_T out1_tmp_fz;
  real_T out1_tmp_h5;
  real_T out1_tmp_d4;
  real_T out1_tmp_mf;
  real_T out1_tmp_iya;
  real_T out1_tmp_j4;
  real_T out1_tmp_pa;
  real_T out1_tmp_db;
  real_T out1_tmp_jbb;
  real_T out1_tmp_kk;
  real_T out1_tmp_mc;
  real_T out1_tmp_do;
  real_T out1_tmp_pzl;
  real_T out1_tmp_ig;
  real_T out1_tmp_ged;
  real_T out1_tmp_efo;
  real_T out1_tmp_ha;
  real_T out1_tmp_gq5;
  real_T out1_tmp_cgl;
  real_T out1_tmp_a5c;
  real_T out1_tmp_fpc;
  real_T out1_tmp_ik;
  real_T out1_tmp_tmp_c;
  real_T out1_tmp_tmp_nr;
  real_T out1_tmp_tmp_c2;
  real_T out1_tmp_tmp_c4;
  real_T out1_tmp_tmp_ik;
  real_T out1_tmp_hu;
  real_T out1_tmp_ml;
  real_T out1_tmp_go;
  real_T out1_tmp_ox;
  real_T out1_tmp_ms;
  real_T out1_tmp_ex;
  real_T out1_tmp_ea;
  real_T out1_tmp_ilr;
  real_T out1_tmp_fw;
  real_T out1_tmp_hvb;
  real_T out1_tmp_in;
  real_T out1_tmp_pi;
  real_T out1_tmp_aa;
  real_T out1_tmp_fj;
  real_T out1_tmp_ddh;
  real_T out1_tmp_tmp_cu;
  real_T out1_tmp_tmp_j1;
  real_T out1_tmp_tmp_c3;
  real_T out1_tmp_nw;
  real_T out1_tmp_jf;
  real_T out1_tmp_ks;
  real_T out1_tmp_os;
  real_T out1_tmp_g2;
  real_T out1_tmp_ksm;
  real_T out1_tmp_j5b;
  real_T out1_tmp_px1;
  real_T out1_tmp_hw;
  real_T out1_tmp_nwp;
  real_T out1_tmp_bx;
  real_T out1_tmp_mt;
  real_T out1_tmp_kvt;
  real_T out1_tmp_b4;
  real_T out1_tmp_l1g;
  real_T out1_tmp_g5i;
  real_T out1_tmp_g23;
  real_T out1_tmp_n4p;
  real_T out1_tmp_c3d;
  real_T out1_tmp_eo;
  real_T out1_tmp_fbf;
  real_T out1_tmp_tmp_k;
  real_T out1_tmp_tmp_cc;
  real_T out1_tmp_tmp_dt;
  real_T out1_tmp_mzp;
  real_T out1_tmp_jce;
  real_T out1_tmp_cfl;
  real_T out1_tmp_d41;
  real_T out1_tmp_pd;
  real_T out1_tmp_ay;
  real_T out1_tmp_m0;
  real_T out1_tmp_nk;
  real_T out1_tmp_k5;
  real_T out1_tmp_pd3;
  real_T out1_tmp_kx5;
  real_T out1_tmp_gkm;
  real_T out1_tmp_hqs;
  real_T out1_tmp_ld;
  real_T out1_tmp_o0o;
  real_T out1_tmp_a22;
  real_T out1_tmp_n3;
  real_T out1_tmp_tmp_ov;
  real_T out1_tmp_tmp_da;
  real_T out1_tmp_tmp_h;
  real_T out1_tmp_h4;
  real_T out1_tmp_a0;
  real_T out1_tmp_kg3;
  real_T out1_tmp_jrp;
  real_T out1_tmp_dg;
  real_T out1_tmp_pe;
  real_T out1_tmp_dhd;
  real_T out1_tmp_byy;
  real_T out1_tmp_oa;
  real_T out1_tmp_j45;
  real_T out1_tmp_pcj;
  real_T out1_tmp_lj;
  real_T out1_tmp_cyw;
  real_T out1_tmp_mi;
  real_T out1_tmp_h50;
  real_T out1_tmp_awu;
  real_T out1_tmp_oqc;
  real_T out1_tmp_io;
  real_T out1_tmp_es;
  real_T out1_tmp_azw;
  real_T out1_tmp_eu;
  real_T out1_tmp_dz2;
  real_T out1_tmp_lvf;
  real_T out1_tmp_if;
  real_T out1_tmp_nkd;
  real_T out1_tmp_cfu;
  real_T out1_tmp_i4;
  real_T out1_tmp_d4s;
  real_T out1_tmp_b4j;
  real_T out1_tmp_atl;
  real_T out1_tmp_b5;
  real_T out1_tmp_nt;
  real_T out1_tmp_bil;
  real_T out1_tmp_pik;
  real_T out1_tmp_ihe;
  real_T out1_tmp_kf;
  real_T out1_tmp_cr;
  real_T out1_tmp_ncw;
  real_T out1_tmp_bpl;
  real_T out1_tmp_msx;
  real_T out1_tmp_mr;
  real_T out1_tmp_n2r;
  real_T out1_tmp_mze;
  real_T b_C_l;
  real_T t15_o;
  real_T t17_i;
  real_T t19_p;
  real_T t23_n;
  real_T t25;
  real_T t27_c;
  real_T t33_e;
  real_T t34_j;
  real_T t35;
  real_T t37_l;
  real_T t38_j;
  real_T t39_c;
  real_T t41_b;
  real_T t42_i;
  real_T t43_k;
  real_T t44_l;
  real_T t45;
  real_T t47;
  real_T t50_j;
  real_T t57;
  real_T t58;
  real_T t129;
  real_T t130;
  real_T t131;
  real_T t133;
  real_T t134;
  real_T t135;
  real_T in3_tmp_mq;
  real_T in3_tmp_jh;
  real_T in3_tmp_eu;
  real_T in3_tmp_dt;
  real_T in3_tmp_j4;
  real_T in3_tmp_k1;
  real_T in3_tmp_ocm;
  real_T in3_tmp_nc;
  real_T in3_tmp_bz;
  real_T in3_tmp_tmp;
  real_T in3_tmp_tmp_i;
  real_T in3_tmp_dm;
  real_T in3_tmp_dp;
  real_T in3_tmp_pa;
  real_T in3_tmp_es;
  real_T in3_tmp_ne;
  real_T in3_tmp_dz;
  real_T in3_tmp_md;
  real_T in3_tmp_gm;
  real_T in3_tmp_ij;
  real_T in3_tmp_km;
  real_T in3_tmp_tmp_im;
  real_T in3_tmp_tmp_m;
  real_T in3_tmp_tmp_j;
  real_T in3_tmp_tmp_a;
  real_T in3_tmp_tmp_iw;
  real_T in3_tmp_tmp_e;
  real_T in3_tmp_tmp_ik;
  real_T in3_tmp_tmp_h;
  real_T in3_tmp_mgj;
  real_T in3_tmp_a4;
  real_T in3_tmp_of;
  real_T in3_tmp_os;
  real_T in3_tmp_nt;
  real_T in3_tmp_k25;
  real_T in3_tmp_hn;
  real_T in3_tmp_d4;
  real_T in3_tmp_ae;
  real_T in3_tmp_hg;
  real_T in3_tmp_cc;
  real_T in3_tmp_bv;
  real_T in3_tmp_ch;
  real_T in3_tmp_gk;
  real_T in3_tmp_pjd;
  real_T in3_tmp_ib;
  real_T in3_tmp_tmp_jj;
  real_T in3_tmp_tmp_c;
  real_T in3_tmp_tmp_ce;
  real_T in3_tmp_tmp_f;
  real_T in3_tmp_tmp_d;
  real_T in3_tmp_tmp_n;
  real_T in3_tmp_tmp_b;
  real_T in3_tmp_tmp_f0;
  real_T in3_tmp_tmp_j1;
  real_T in3_tmp_tmp_hc;
  real_T in3_tmp_hgh;
  real_T in3_tmp_c2;
  real_T in3_tmp_gr;
  real_T in3_tmp_ej;
  real_T in3_tmp_eq;
  real_T in3_tmp_tmp_av;
  real_T in3_tmp_hz;
  real_T in3_tmp_gc;
  real_T in3_tmp_tmp_ak;
  real_T in3_tmp_tmp_g;
  real_T in3_tmp_tmp_tmp;
  real_T in3_tmp_tmp_o;
  real_T in3_tmp_tmp_akz;
  real_T in3_tmp_e3;
  real_T in3_tmp_tmp_ha;
  real_T in3_tmp_tmp_tmp_j;
  real_T in3_tmp_tmp_tmp_b;
  real_T in3_tmp_tmp_k;
  real_T in3_tmp_hq;
  real_T in3_tmp_dd;
  real_T in3_tmp_tmp_tmp_o;
  real_T in3_tmp_tmp_tmp_k;
  real_T in3_tmp_k0;
  real_T in3_tmp_on;
  real_T in3_tmp_do;
  real_T in3_tmp_lo;
  real_T in3_tmp_me;
  real_T in3_tmp_oi;
  real_T in3_tmp_at;
  real_T in3_tmp_i2;
  real_T in3_tmp_fi;
  real_T in3_tmp_as0;
  real_T in3_tmp_g1;
  real_T in3_tmp_k12;
  real_T in3_tmp_l3p;
  real_T in3_tmp_eu1;
  real_T in3_tmp_equ;
  real_T in3_tmp_ft;
  real_T in3_tmp_dw;
  real_T in3_tmp_bck;
  real_T in3_tmp_ol;
  real_T in3_tmp_py;
  real_T in3_tmp_lf;
  real_T in3_tmp_doq;
  real_T in3_tmp_lt;
  real_T in3_tmp_ad1;
  real_T in3_tmp_nk;
  real_T in3_tmp_es3;
  real_T in3_tmp_nf;
  real_T in3_tmp_hh;
  real_T in3_tmp_ah;
  real_T in3_tmp_b5;
  real_T in3_tmp_k5;
  real_T in3_tmp_aw;
  real_T in3_tmp_kmg;
  real_T in3_tmp_pai;
  real_T in3_tmp_o3;
  real_T in3_tmp_c4;
  real_T in3_tmp_kh;
  real_T ct_tmp_hs;
  real_T ct_tmp_bvc;
  real_T ct_tmp_ez;
  real_T ct_tmp_co;
  real_T ct_tmp_om3;
  real_T ct_tmp_ar;
  real_T ct_tmp_pe;
  real_T ct_tmp_ok5;
  real_T ct_tmp_l2;
  real_T ct_tmp_fr;
  real_T ct_tmp_pn;
  real_T ct_tmp_p5;
  real_T ct_tmp_br;
  real_T ct_tmp_k0;
  real_T ct_tmp_me;
  real_T ct_tmp_gk;
  real_T ct_tmp_b5;
  real_T ct_tmp_tmp_il;
  real_T ct_tmp_tmp_bs;
  real_T ct_tmp_tmp_h;
  real_T ct_tmp_tmp_d;
  real_T ct_tmp_tmp_f5;
  real_T ct_tmp_dkn;
  real_T ct_tmp_pp;
  real_T ct_tmp_gs;
  real_T ct_tmp_f3;
  real_T ct_tmp_o25;
  real_T ct_tmp_f4;
  real_T ct_tmp_o3;
  real_T ct_tmp_l0;
  real_T ct_tmp_e3;
  real_T ct_tmp_gn;
  real_T ct_tmp_ba;
  real_T ct_tmp_je;
  real_T ct_tmp_fp;
  real_T ct_tmp_cos;
  real_T ct_tmp_fo;
  real_T ct_tmp_bn;
  real_T ct_tmp_de;
  real_T ct_tmp_jm;
  real_T ct_tmp_oe;
  real_T ct_tmp_li;
  real_T ct_tmp_gj;
  real_T ct_tmp_mc;
  real_T ct_tmp_gh;
  real_T ct_tmp_an;
  real_T ct_tmp_ey;
  real_T ct_tmp_b0;
  real_T ct_tmp_ezf;
  real_T ct_tmp_mz;
  real_T ct_tmp_hz;
  real_T ct_tmp_br5;
  real_T ct_tmp_dm;
  real_T ct_tmp_oh;
  real_T ct_tmp_kk;
  real_T ct_tmp_mr;
  real_T ct_tmp_fj;
  real_T ct_tmp_ox;
  real_T ct_tmp_itv;
  real_T ct_tmp_ka;
  real_T ct_tmp_kg;
  real_T ct_tmp_n1;
  real_T ct_tmp_fq;
  real_T ct_tmp_mzs;
  real_T ct_tmp_ia;
  real_T ct_tmp_ii;
  real_T ct_tmp_bl;
  real_T ct_tmp_nt;
  real_T ct_tmp_ir;
  real_T ct_tmp_nj;
  real_T ct_tmp_m0;
  real_T ct_tmp_ppg;
  real_T ct_tmp_k1;
  real_T ct_tmp_p3;
  real_T ct_tmp_tmp_e;
  real_T ct_tmp_tmp_k;
  real_T ct_tmp_bro;
  real_T ct_tmp_lm;
  real_T ct_tmp_j1;
  real_T ct_tmp_jx;
  real_T ct_tmp_kz;
  real_T ct_tmp_pf;
  real_T ct_tmp_p3r;
  real_T ct_tmp_et;
  real_T ct_tmp_hl;
  real_T ct_tmp_i1;
  real_T ct_tmp_jdd;
  real_T ct_tmp_a2;
  real_T ct_tmp_jh;
  real_T ct_tmp_gc;
  real_T ct_tmp_njm;
  real_T ct_tmp_lmf;
  real_T ct_tmp_eq;
  real_T ct_tmp_cg;
  real_T ct_tmp_hy;
  real_T ct_tmp_o4;
  real_T ct_tmp_dz;
  real_T ct_tmp_df;
  real_T ct_tmp_j4;
  real_T ct_tmp_f2;
  real_T ct_tmp_k2;
  real_T ct_tmp_ne;
  real_T ct_tmp_nb;
  real_T ct_tmp_ic;
  real_T ct_tmp_e4;
  real_T ct_tmp_kj;
  real_T ct_tmp_k3;
  real_T ct_tmp_p0;
  real_T ct_tmp_kn;
  real_T ct_tmp_p1;
  real_T ct_tmp_py;
  real_T ct_tmp_bp;
  real_T ct_tmp_cc;
  real_T ct_tmp_deq;
  real_T ct_tmp_c0;
  real_T ct_tmp_ad;
  real_T ct_tmp_icn;
  real_T ct_tmp_du;
  real_T ct_tmp_foe;
  real_T ct_tmp_nee;
  real_T ct_tmp_gy;
  real_T ct_tmp_of;
  real_T ct_tmp_mi;
  real_T ct_tmp_hlr;
  real_T ct_tmp_eh;
  real_T ct_tmp_mw;
  real_T ct_tmp_im;
  real_T ct_tmp_h4;
  real_T ct_tmp_nm;
  real_T ct_tmp_ed;
  real_T ct_tmp_e4w;
  real_T ct_tmp_o1;
  real_T ct_tmp_oq;
  real_T ct_tmp_fra;
  real_T ct_tmp_mh;
  real_T ct_tmp_gf;
  real_T ct_tmp_ccn;
  real_T ct_tmp_kb;
  real_T ct_tmp_dd1;
  real_T ct_tmp_cmw;
  real_T ct_tmp_knj;
  real_T ct_tmp_kl;
  real_T ct_tmp_fw;
  real_T ct_tmp_gm;
  real_T ct_tmp_k35;
  real_T ct_tmp_nk;
  real_T ct_tmp_pna;
  real_T ct_tmp_e2n;
  real_T ct_tmp_l3;
  real_T ct_tmp_ak;
  real_T ct_tmp_e4t;
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
  real_T t3220;
  real_T t3221;
  real_T t3243;
  real_T t3244;
  real_T t3245;
  real_T t3247;
  real_T t3247_tmp;
  real_T t3247_tmp_g;
  real_T Anq_tmp;
  real_T Anq_tmp_tmp;
  real_T Anq_tmp_f;
  real_T Anq_tmp_e;
  real_T Anq_tmp_n;
  real_T Anq_tmp_m;
  real_T Anq_tmp_b;
  real_T Anq_tmp_nh;
  real_T Anq_tmp_tmp_c;
  real_T Anq_tmp_mk;
  real_T Anq_tmp_j;
  real_T Jmv_h;
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t5_c;
  real_T t6_m;
  real_T t7;
  real_T t8;
  real_T t9_n;
  real_T t10_e;
  real_T t11_c;
  real_T t12_b;
  real_T t13_p;
  real_T t17_ik;
  real_T t18_o;
  real_T t19_n;
  real_T t20_m;
  real_T t21;
  real_T t22_m;
  real_T t23_d;
  real_T t24_i;
  real_T t25_e;
  real_T t26;
  real_T t27_k;
  real_T t28_p;
  real_T t29_j;
  real_T t30_c;
  real_T t31_b;
  real_T t32_l;
  real_T t33_n;
  real_T t34_a;
  real_T t39_n;
  real_T t40_d;
  real_T t41_gw;
  real_T t42_f;
  real_T t43_g;
  real_T t44_la;
  real_T t45_l;
  real_T t55_o;
  real_T t56;
  real_T t57_k;
  real_T t58_g;
  real_T t59_k;
  real_T t61_j;
  real_T t62;
  real_T t65;
  real_T t68_k;
  real_T t35_g;
  real_T t36_h;
  real_T t37_m;
  real_T t27_tmp;
  real_T t31_tmp;
  real_T t24_tmp_k;
  real_T t32_tmp_c;
  real_T t25_tmp;
  real_T t29_tmp;
  real_T rMin_h;
  real_T Xnorm0_h;
  real_T cMin_d;
  real_T cVal_b;
  real_T t_p;
  real_T Linv;
  real_T atmp;
  real_T xnorm;
  real_T scale_c;
  real_T absxk_b;
  real_T t_l;
  real_T c_o;
  real_T x_d;
  real_T d_m;
  real_T s_n;
  real_T d_me;
  real_T s_i;
  real_T ic_ol;
  real_T t8_a;
  real_T t9_k;
  real_T t11_m;
  real_T t12_g;
  real_T t13_n;
  real_T t14_i;
  real_T t15_e;
  real_T t16_e;
  real_T t25_b;
  real_T t29_i;
  real_T t31_k;
  real_T t50_d;
  real_T t53;
  real_T t54;
  real_T t17_k;
  real_T t18_a;
  real_T t19_i;
  real_T t57_b;
  real_T t64;
  real_T t65_e;
  real_T t68_l;
  real_T t69;
  real_T t70_i;
  real_T t12_tmp;
  real_T t13_tmp;
  real_T t14_tmp;
  real_T t15_tmp;
  real_T out1_tmp_bq;
  real_T out1_tmp_elw;
  real_T out1_tmp_bb;
  real_T out1_tmp_ir;
  real_T out1_tmp_m1;
  real_T out1_tmp_l4;
  real_T out1_tmp_ool;
  real_T out1_tmp_nm1;
  real_T out1_tmp_in1;
  real_T epsilon;
  real_T beta1_o;
  real_T dHdx;
  real_T scale_m;
  real_T absxk_a;
  real_T t_c;
  real_T holdPoint;
  real_T anrm;
  real_T absx;
  real_T cfromc;
  real_T cfrom1;
  real_T cto1;
  real_T mul;
  real_T tst;
  real_T p_d;
  real_T r_g;
  real_T s_h;
  real_T c_b;
  real_T b_d;
  real_T b_s;
  real_T b_anorm;
  real_T e_c;
  real_T sm;
  real_T df;
  real_T adf;
  real_T tb;
  real_T ab;
  real_T acmx;
  real_T acmn;
  real_T b_a_h;
  real_T normH_f;
  real_T absx_n;
  real_T ssq;
  real_T c_d;
  real_T anrm_e;
  real_T absx_e;
  real_T ctoc;
  real_T cfrom1_p;
  real_T cto1_n;
  real_T mul_f;
  real_T tst_e;
  real_T p_k;
  real_T r_f;
  real_T s_k;
  real_T c_p;
  real_T b_h;
  real_T c_s;
  real_T anorm;
  real_T e_dc;
  real_T sm_d;
  real_T df_d;
  real_T adf_j;
  real_T tb_a;
  real_T ab_a;
  real_T acmx_a;
  real_T acmn_l;
  real_T a_i;
  real_T c_n;
  real_T q0_a;
  real_T q0_b;
  real_T q0_c;
  real_T q0_d;
  real_T qF_a;
  real_T qF_b;
  real_T qF_c;
  real_T qF_d;
  real_T linearScaling;
  real_T n_b;
  real_T dp;
  real_T ob;
  real_T oc;
  real_T od;
  real_T oa;
  real_T ob_h;
  real_T assign_temp_a_data;
  real_T assign_temp_b_data;
  real_T assign_temp_c_data;
  real_T assign_temp_d_data;
  real_T ob_tmp;
  real_T oc_tmp;
  real_T od_tmp;
  real_T h_idx_0;
  real_T b_idx_0;
  real_T dp_b;
  real_T n_a;
  real_T oa_b;
  real_T ob_l;
  real_T oc_h;
  real_T od_d;
  real_T oa_g;
  real_T ob_j;
  real_T assign_temp_a_data_m;
  real_T assign_temp_b_data_l;
  real_T assign_temp_c_data_o;
  real_T assign_temp_d_data_p;
  real_T ob_tmp_d;
  real_T oc_tmp_g;
  real_T od_tmp_m;
  real_T nrmGradInf;
  real_T nrmDirInf;
  real_T beta;
  real_T qpfvalQuadExcess;
  real_T smax;
  real_T s_o;
  real_T qpfvalQuadExcess_tmp;
  real_T maxConstr_new;
  real_T normDelta;
  real_T solution_lambda;
  real_T tempMaxConstr;
  real_T constrViolation_basicX;
  real_T temp;
  real_T smax_f;
  real_T s_ip;
  real_T vn1;
  real_T xnorm_d;
  real_T a_f;
  real_T scale_n;
  real_T absxk_dj;
  real_T t_cj;
  real_T temp_b;
  real_T smax_b;
  real_T s_hh;
  real_T temp_g;
  real_T smax_c;
  real_T s_d;
  real_T smax_a;
  real_T s_hs;
  real_T scale_cr;
  real_T absxk_c;
  real_T t_m;
  real_T b_atmp;
  real_T beta1_ok;
  real_T c_A_e;
  real_T scale_jq;
  real_T absxk_l;
  real_T t_nz;
  real_T b_atmp_e;
  real_T beta1_c;
  real_T c_A_j;
  real_T scale_my;
  real_T absxk_ef;
  real_T t_h;
  real_T b_atmp_c;
  real_T beta1_j;
  real_T c_A_a;
  real_T scale_d;
  real_T absxk_bb;
  real_T t_ck;
  real_T b_atmp_a;
  real_T beta1_i;
  real_T c_A_p;
  real_T scale_me;
  real_T absxk_b1;
  real_T t_e;
  real_T a_fm;
  real_T c_m;
  real_T tmp;
  real_T cosa_a;
  real_T cosc_o;
  real_T cosb_l;
  real_T f_idx_0;
  real_T b_c_p;
  real_T normDelta_d;
  real_T solution_lambda_b;
  real_T smax_d;
  real_T s_dc;
  real_T smax_e;
  real_T s_l;
  real_T y_k;
  real_T b_atmp_l;
  real_T beta1_jt;
  real_T c_A_h;
  real_T scale_kp;
  real_T absxk_e0;
  real_T t_gi;
  real_T t8_c;
  real_T t9_o;
  real_T t11_l;
  real_T t12_e;
  real_T t13_m;
  real_T t14_o;
  real_T t15_eh;
  real_T t16_m;
  real_T t25_j;
  real_T t29_h;
  real_T t31_n;
  real_T t50_jc;
  real_T t53_d;
  real_T t54_j;
  real_T t17_kq;
  real_T t18_b;
  real_T t19_l;
  real_T t57_j;
  real_T t64_n;
  real_T t65_g;
  real_T t68_d;
  real_T t69_o;
  real_T t70_a;
  real_T t12_tmp_e;
  real_T t13_tmp_o;
  real_T t14_tmp_i;
  real_T t15_tmp_b;
  real_T out1_tmp_aal;
  real_T bkj_j;
  real_T bkj_a;
  real_T penaltyParamTrial;
  real_T constrViolationEq;
  real_T constrViolationIneq;
  real_T TrialState_cIneq;
  real_T constrViolation;
  real_T tol;
  real_T maxDiag;
  real_T b_atmp_g;
  real_T tau_o;
  real_T c_a;
  real_T dp_c;
  real_T n_d;
  real_T oa_d;
  real_T ob_ld;
  real_T oc_d;
  real_T od_j;
  real_T oa_k;
  real_T ob_d;
  real_T assign_temp_a_data_c;
  real_T assign_temp_b_data_k;
  real_T assign_temp_c_data_p;
  real_T assign_temp_d_data_e;
  real_T ob_tmp_i;
  real_T oc_tmp_b;
  real_T od_tmp_i;
  real_T b_atmp_h;
  real_T beta1_d;
  real_T c_A_g;
  real_T scale_my5;
  real_T absxk_g;
  real_T t_h4;
  real_T c_c;
  real_T b_s_a;
  real_T b_temp;
  real_T roe;
  real_T absa;
  real_T absb;
  real_T scale_e;
  real_T ads;
  real_T bds;
  real_T nlpComplErrorTmp;
  real_T smax_i;
  real_T s_hl;
  real_T d37;
  real_T temp_k;
  real_T denomTol;
  real_T alphaTemp;
  real_T phaseOneCorrectionP;
  real_T ratio;
  real_T b_c_f;
  real_T c_l;
  real_T temp2;
  real_T taui;
  real_T xnorm_o;
  real_T tau_tmp;
  real_T scale_l;
  real_T absxk_dz;
  real_T t_a;
  real_T temp1;
  real_T taui_j;
  real_T xnorm_om;
  real_T tau_tmp_e;
  real_T scale_mm;
  real_T absxk_dq;
  real_T t_c5;
  real_T bkj_i;
  real_T ssq_k;
  real_T c_c5;
  real_T tempMaxConstr_f;
  real_T obj_maxConstrWorkspace;
  real_T c_j;
  real_T tol_i;
  real_T maxDiag_c;
  real_T tol_d;
  real_T qtb;
  real_T temp_a;
  real_T d38;
  real_T vnorm;
  real_T qnorm;
  real_T vscale_data;
  real_T l;
  real_T t_hb;
  real_T bb;
  real_T alpha1;
  real_T y_kc;
  real_T temp_ku;
  real_T s_n5;
  real_T temp_j;
  real_T b_c_b;
  real_T smax_es;
  real_T s_m;
  real_T CovMat_o;
  real_T obj_maxConstrWorkspace_k;
  real_T c_ak;
  real_T obj_maxConstrWorkspace_n;
  real_T c_p1;
  real_T sina_d;
  real_T sinb_a;
  real_T sinc_e;
  real_T cosa_m;
  real_T cosb_f;
  real_T cosc_h;
  real_T ctemp;
  real_T stemp;
  real_T temp_bs;
  real_T dotSY;
  real_T curvatureS;
  real_T temp_f;
  real_T delta;
  real_T expa;
  real_T sinchdelta;
  real_T A_l;
  real_T A_p;
  real_T delta_n;
  real_T expa_i;
  real_T sinchdelta_b;
  real_T A_e;
  real_T A_pr;
  real_T cfromc_o;
  real_T ctoc_f;
  real_T cfrom1_d;
  real_T cto1_i;
  real_T mul_i;
  real_T cfromc_h;
  real_T ctoc_fr;
  real_T cfrom1_h;
  real_T cto1_l;
  real_T mul_g;
  real_T cfromc_l;
  real_T ctoc_m;
  real_T cfrom1_n;
  real_T cto1_nv;
  real_T mul_l;
  real_T cfromc_p;
  real_T ctoc_l;
  real_T cfrom1_pg;
  real_T cto1_m;
  real_T mul_c;
  real_T evalPointVector_idx_0;
  real_T evalPointVector_idx_1;
  real_T evalPointVector_idx_2;
  real_T d39;
  real_T d40;
  real_T a_a;
  real_T b_g;
  real_T ctemp_c;
  real_T stemp_c;
  real_T temp_m;
  real_T ctemp_b;
  real_T stemp_e;
  real_T temp_bj;
  real_T ctemp_i;
  real_T stemp_l;
  real_T temp_d;
  real_T xloc;
  real_T v;
  real_T v_f;
  real_T v_g;
  real_T ssq_l;
  real_T c_om;
  real_T c_i;
  real_T temp_d0;
  real_T lbDelta;
  real_T lbLambda;
  real_T WorkingSet_beq;
  real_T scale_a;
  real_T absxk_o;
  real_T t_i;
  real_T B_m;
  real_T B_h;
  real_T temp_l;
  real_T b_B_a;
  real_T c_nl;
  real_T absx_j;
  real_T z_l;
  real_T s_g;
  real_T R_m;
  real_T d41;
  real_T d42;
  real_T constrViolationEq_d;
  real_T constrViolationIneq_l;
  real_T Cineq_workspace;
  real_T scale_dk;
  real_T absxk_j;
  real_T t_ju;
  real_T temp_fw;
  real_T scale_g;
  real_T absxk_n;
  real_T t_e1;
  real_T W;
  real_T temp_d5;
  real_T c_ay;
  real_T temp_h;
  real_T c_b5;
  real_T scale_i;
  real_T absxk_p;
  real_T t_b;
  real_T scale_my0;
  real_T absxk_ge;
  real_T t_k;
  real_T f1;
  real_T fs_g;
  real_T gs;
  real_T x_py;
  real_T f1_f;
  real_T fs_h;
  real_T gs_h;
  real_T s_b;
  real_T sr;
  real_T si;
  real_T tol_n;
  real_T posPts_idx_0;
  real_T posPts_idx_1;
  real_T x_eb;
  real_T allFinite_tmp;
  real_T x_l;
  real_T allFinite_tmp_j;
  real_T s_m4;
  real_T b_signal;
  real_T b_signal_i;
  real_T s_b3;
  real_T t_ev;
  real_T t_hw;
  real_T B_n;
  SL_Bus_std_msgs_UInt8 In1_m;         /* '<S42>/In1' */
  SL_Bus_std_msgs_Bool BusAssignment_j;/* '<S8>/Bus Assignment' */
  SL_Bus_std_msgs_Bool ZeroOrderHold_d;/* '<S8>/Zero-Order Hold' */
  SL_Bus_sonia_common_ros2_KillStatus In1_lz;/* '<S45>/In1' */
  int64_T b_value;
  boolean_T umax_incr_flag[8];
  boolean_T umin_incr_flag[8];
  boolean_T umax_incr_flag_g[8];
  boolean_T umin_incr_flag_i[8];
  boolean_T bv3[8];
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
  int32_T varargin_1_size_a[2];
  int32_T b_varargin_1_size[2];
  int32_T Jx_p[2];
  int32_T tmp_size_m[2];
  int32_T RLinv_size[2];
  int32_T b_D_size[2];
  int32_T b_H_size_k[2];
  int32_T AcRow_size[2];
  int32_T b_H_size_h[2];
  int32_T Q_size[2];
  int32_T b_A_size[2];
  int32_T idx[2];
  int32_T tmp_size_b[2];
  int32_T b_size_f[2];
  int32_T assign_temp_a_size[2];
  int32_T assign_temp_b_size[2];
  int32_T assign_temp_c_size[2];
  int32_T assign_temp_d_size[2];
  int32_T assign_temp_a_size_b[2];
  int32_T assign_temp_b_size_i[2];
  int32_T assign_temp_c_size_j[2];
  int32_T assign_temp_d_size_e[2];
  int32_T tmp_size_k[2];
  int32_T tmp_size_c[2];
  int32_T tmp_size_f[2];
  int32_T tmp_size_g[2];
  int32_T tmp_size_h[2];
  int32_T tmp_size_cp[2];
  int32_T tmp_size_l[2];
  int32_T tmp_size_j[2];
  int32_T tmp_size_n[2];
  int32_T tmp_size_f0[2];
  int32_T tmp_size_e[2];
  int32_T assign_temp_a_size_p[2];
  int32_T assign_temp_b_size_a[2];
  int32_T assign_temp_c_size_b[2];
  int32_T assign_temp_d_size_g[2];
  int32_T tmp_size_fk[2];
  int32_T tmp_size_ki[2];
  rmw_qos_profile_t qos_profile;
  int8_T b_ipiv_o[6];
  int8_T ipiv_g[6];
  boolean_T b_pd[4];
  int16_T Jx_n[2];
  int16_T varargin_2[2];
  int16_T Je_d[2];
  real32_T rtb_Merge2_data;
  int32_T base_index;
  int32_T ibmat;
  int32_T b_j;
  int32_T coffset;
  int32_T Ns;
  int32_T Ns_i;
  int32_T i;
  int32_T i_p;
  int32_T i_e;
  int32_T i_g;
  int32_T modCoeffs_tmp;
  int32_T pny;
  int32_T nmoves;
  int32_T TotalFreeMoves;
  int32_T j;
  int32_T ioff;
  int32_T b_j_g;
  int32_T i_a;
  int32_T pny_f;
  int32_T trueCount;
  int32_T b_Ac_g;
  int32_T loop_ub;
  int32_T nmoves_tmp;
  int32_T i_input_sizes_idx_1_tmp;
  int32_T s_size_idx_0;
  int32_T Mu_size_idx_0;
  int32_T Mv_aux_size_idx_0;
  int32_T i_i;
  int32_T loop_ub_c;
  int32_T i1;
  int32_T loop_ub_p;
  int32_T loop_ub_g;
  int32_T input_sizes_idx_0;
  int32_T b_input_sizes_idx_0;
  int32_T Sum_tmp;
  int32_T loop_ub_tmp;
  int32_T input_sizes_idx_0_tmp;
  int32_T mc;
  int32_T coffset_j;
  int32_T boffset;
  int32_T aoffset;
  int32_T j_n;
  int32_T i_n;
  int32_T k;
  int32_T b_i;
  int32_T b_jd;
  int32_T i2;
  int32_T b_i_j;
  int32_T i_h;
  int32_T b_i_p;
  int32_T b_k;
  int32_T b_I_tmp;
  int32_T b_I_tmp_p;
  int32_T j_l;
  int32_T b_k_d;
  int32_T eint;
  int32_T i_hs;
  int32_T i3;
  int32_T i4;
  int32_T i5;
  int32_T n_bw;
  int32_T nb;
  int32_T nbitson;
  int32_T n_l;
  int32_T i6;
  int32_T i7;
  int32_T i8;
  int32_T mLinIneq;
  int32_T mIneq;
  int32_T mConstrMax;
  int32_T maxDims;
  int32_T mNonlinIneq;
  int32_T k_g;
  int32_T ia;
  int32_T i_gk;
  int32_T WorkingSet_tmp_tmp;
  int32_T mFixed;
  int32_T mIneq_g;
  int32_T mLB;
  int32_T mUB;
  int32_T mConstr;
  int32_T mLinIneq_o;
  int32_T qpoptions_MaxIterations;
  int32_T k_k;
  int32_T n_p;
  int32_T ix_p;
  int32_T iy;
  int32_T b_ix;
  int32_T b_iy;
  int32_T d_ix;
  int32_T loop_ub_e;
  int32_T u1;
  int32_T nVar_tmp_tmp;
  int32_T n_tmp;
  int32_T iy_tmp;
  int32_T mLinIneq_k;
  int32_T k_n;
  int32_T b_tmp_e;
  int32_T yk;
  int32_T i_o;
  int32_T i_d;
  int32_T ineqRange_size_idx_1;
  int32_T i9;
  int32_T loop_ub_gj;
  int32_T loop_ub_d;
  int32_T k_m;
  int32_T i_j;
  int32_T icf_tmp_m;
  int32_T i2_d;
  int32_T ix_i;
  int32_T a_h;
  int32_T i_c;
  int32_T kidx;
  int32_T i2_f;
  int32_T Tries;
  int32_T i_gq;
  int32_T i10;
  int32_T kidx_k;
  int32_T nA;
  int32_T tmp_c;
  int32_T exponent;
  int32_T b_exponent;
  int32_T i_cg;
  int32_T iSave;
  int32_T iC_g;
  int32_T U_tmp;
  int32_T k_i;
  int32_T ii;
  int32_T knt;
  int32_T b_lastv;
  int32_T coltop;
  int32_T b_coltop;
  int32_T b_lastv_f;
  int32_T kend;
  int32_T k_h;
  int32_T e_j;
  int32_T e_i;
  int32_T b_s_e;
  int32_T i11;
  int32_T i12;
  int32_T i13;
  int32_T F_tmp;
  int32_T n_i;
  int32_T nb_f;
  int32_T nbitson_l;
  int32_T b_n;
  int32_T i14;
  int32_T i15;
  int32_T i16;
  int32_T row;
  int32_T col;
  int32_T col_end;
  int32_T idx_mat;
  int32_T i17;
  int32_T loop_ub_b;
  int32_T loop_ub_f;
  int32_T d_k;
  int32_T i_ir;
  int32_T icf_tmp_g;
  int32_T tmp_size_idx_0;
  int32_T i18;
  int32_T i19;
  int32_T loop_ub_px;
  int32_T loop_ub_m;
  int32_T loop_ub_m5;
  int32_T mc_p;
  int32_T coffset_jr;
  int32_T boffset_g;
  int32_T aoffset_j;
  int32_T bkj_f;
  int32_T j_d;
  int32_T i_ab;
  int32_T b_i_c;
  int32_T i20;
  int32_T idx_current;
  int32_T i_ck;
  int32_T i21;
  int32_T obj_next_next_next_next_next_ic;
  int32_T i22;
  int32_T i_e0;
  int32_T i_iu;
  int32_T b_i_b;
  int32_T i23;
  int32_T j_nb;
  int32_T i_m;
  int32_T i_if;
  int32_T i24;
  int32_T i25;
  int32_T b_Su1_tmp;
  int32_T AA_tmp;
  int32_T i_nz;
  int32_T i26;
  int32_T k_e;
  int32_T i27;
  int32_T Ak1_tmp;
  int32_T Jx_tmp;
  int32_T TotalFreeMoves_g;
  int32_T nA_j;
  int32_T kDrop;
  int32_T kNext;
  int32_T idx_a;
  int32_T loop_ub_i;
  int32_T b_Ac_c;
  int32_T b_m;
  int32_T b_n_l;
  int32_T i_j_h;
  int32_T iC_i;
  int32_T RLinv_idx_0_tmp;
  int32_T RLinv_idx_1_tmp;
  int32_T i_j_tmp;
  int32_T loop_ub_n;
  int32_T TL_size_idx_0;
  int32_T R_size_idx_0;
  int32_T minmana;
  int32_T minmn;
  int32_T ii_j;
  int32_T mmi;
  int32_T mmip1;
  int32_T ix0;
  int32_T knt_k;
  int32_T coltop_m;
  int32_T n_tmp_i;
  int32_T b_m_tmp;
  int32_T kend_p;
  int32_T k_h0;
  int32_T b_i_f;
  int32_T idx_l;
  int32_T i_ay;
  int32_T g_k;
  int32_T jj;
  int32_T jp1j;
  int32_T jBcol;
  int32_T kAcol;
  int32_T iy_f;
  int32_T jA;
  int32_T ijA;
  int32_T e_k;
  int32_T jj_c;
  int32_T ix_a;
  int32_T b_ix_n;
  int32_T iy_fu;
  int32_T e_kz;
  int32_T ijA_h;
  int32_T i_b;
  int32_T i28;
  int32_T i29;
  int32_T i30;
  int32_T b_j_i;
  int32_T lastv;
  int32_T i_or;
  int32_T i31;
  int32_T i32;
  int32_T e_i_g;
  int32_T itau;
  int32_T iaii;
  int32_T lastc;
  int32_T f;
  int32_T coltop_b;
  int32_T b_ia;
  int32_T jy;
  int32_T l1;
  int32_T m_ap;
  int32_T l_h;
  int32_T lsv;
  int32_T lend;
  int32_T lendsv;
  int32_T iscale;
  int32_T i_gx;
  int32_T b_anorm_tmp;
  int32_T n_tmp_d;
  int32_T sgn1;
  int32_T Tries_e;
  int32_T b_k_k;
  int32_T b_degrees_tmp;
  int32_T emlN_tmp;
  int32_T loop_ub_tmp_f;
  int32_T idxAjj;
  int32_T j_nw;
  int32_T ix_l;
  int32_T b_a5;
  int32_T d_mp;
  int32_T b_ix_b;
  int32_T b_iy_e;
  int32_T b_k_g;
  int32_T i33;
  int32_T b_b;
  int32_T itau_m;
  int32_T iaii_f;
  int32_T lastv_e;
  int32_T lastc_d;
  int32_T e_m;
  int32_T coltop_f;
  int32_T jy_h;
  int32_T jtot;
  int32_T l1_e;
  int32_T m_f;
  int32_T l_e;
  int32_T lsv_o;
  int32_T lend_j;
  int32_T lendsv_f;
  int32_T iscale_k;
  int32_T i_ny;
  int32_T iscale_tmp;
  int32_T sgn1_f;
  int32_T db;
  int32_T fb;
  int32_T ibcol;
  int32_T b_k_p;
  int32_T isMrows_tmp;
  int32_T db_tmp;
  int32_T hb_tmp;
  int32_T db_i;
  int32_T fb_k;
  int32_T ibcol_i;
  int32_T b_k_c;
  int32_T isMrows_tmp_b;
  int32_T db_tmp_k;
  int32_T hb_tmp_l;
  int32_T ia_b;
  int32_T i_mr;
  int32_T itau_b;
  int32_T lastv_l;
  int32_T lastc_g;
  int32_T coltop_p;
  int32_T b_ia_c;
  int32_T loop_ub_mn;
  int32_T iy_i;
  int32_T b_iy_a;
  int32_T b_dy;
  int32_T d_h;
  int32_T ia_e;
  int32_T i34;
  int32_T stride_0_0;
  int32_T stride_1_0;
  int32_T loop_ub_ba;
  int32_T i35;
  int32_T i36;
  int32_T loop_ub_tmp_c;
  int32_T nVar;
  int32_T k_c;
  int32_T idxStartIneq;
  int32_T idxEndIneq;
  int32_T idxStartIneq_tmp;
  int32_T nVarOrig;
  int32_T idx_max;
  int32_T ix_ie;
  int32_T mLBOrig;
  int32_T mFiniteLBOrig;
  int32_T mLBOrig_tmp;
  int32_T nVar_p;
  int32_T idx_lw;
  int32_T ixlast;
  int32_T PROBTYPE_ORIG;
  int32_T mConstr_n;
  int32_T idxStartIneq_o;
  int32_T idxEndIneq_f;
  int32_T nVar_tmp;
  int32_T idxStartIneq_tmp_a;
  int32_T activeSetChangeID;
  int32_T nVar_i;
  int32_T globalActiveConstrIdx;
  int32_T idxMinLambda;
  int32_T k_l;
  int32_T iQR0;
  int32_T g_h;
  int32_T nVar_k;
  int32_T mWConstr;
  int32_T nVar_n;
  int32_T rankQR;
  int32_T ldq;
  int32_T b_idx;
  int32_T jBcol_k;
  int32_T iAcol;
  int32_T ix_c;
  int32_T br;
  int32_T n_h;
  int32_T iQR0_m;
  int32_T b_n_f;
  int32_T temp_tmp;
  int32_T idx_g;
  int32_T ix0_d;
  int32_T iy0;
  int32_T b_c2;
  int32_T k_nj;
  int32_T minmn_n;
  int32_T nfxd;
  int32_T b_j_d;
  int32_T ma_tmp;
  int32_T ma;
  int32_T minmn_nl;
  int32_T ii_l;
  int32_T nmi;
  int32_T mmi_p;
  int32_T pvt;
  int32_T itemp;
  int32_T j_e;
  int32_T ii_tmp;
  int32_T knt_o;
  int32_T d_p;
  int32_T c_tmp;
  int32_T kend_i;
  int32_T k_d;
  int32_T b_info;
  int32_T ip;
  int32_T b_i_bt;
  int32_T b_j_b;
  int32_T kAcol_l;
  int32_T i37;
  int32_T i38;
  int32_T jj_b;
  int32_T jp1j_n;
  int32_T b_j_p;
  int32_T c_oh;
  int32_T ix_pl;
  int32_T k_hf;
  int32_T iy_o;
  int32_T b_info_b;
  int32_T ip_c;
  int32_T b_i_g;
  int32_T b_j_e;
  int32_T kAcol_o;
  int32_T i39;
  int32_T i40;
  int32_T i41;
  int32_T b_i_l;
  int32_T jj_o;
  int32_T jp1j_e;
  int32_T b_j_o;
  int32_T c_li;
  int32_T kAcol_o3;
  int32_T iy_a;
  int32_T jA_b;
  int32_T c_oy;
  int32_T jj_c1;
  int32_T b_j_f;
  int32_T ix_b;
  int32_T c_k;
  int32_T b_ix_l;
  int32_T iy_am;
  int32_T d_c;
  int32_T b_index;
  int32_T b_jcol;
  int32_T b_itilerow;
  int32_T b_index_a;
  int32_T b_jcol_n;
  int32_T itau_o;
  int32_T ii_a;
  int32_T ix0_l;
  int32_T knt_h;
  int32_T lastv_f;
  int32_T iac;
  int32_T ia_d;
  int32_T jA_n;
  int32_T i_gp;
  int32_T itau_p;
  int32_T ii_p;
  int32_T ix0_m;
  int32_T knt_p;
  int32_T lastv_d;
  int32_T iac_l;
  int32_T ia_bh;
  int32_T jA_e;
  int32_T i_gh;
  int32_T itau_c;
  int32_T ii_o;
  int32_T ix0_f;
  int32_T knt_ov;
  int32_T lastv_i;
  int32_T iac_d;
  int32_T ia_m;
  int32_T jA_o;
  int32_T i_oa;
  int32_T itau_e;
  int32_T ii_m;
  int32_T ix0_i;
  int32_T knt_o4;
  int32_T lastv_h;
  int32_T iac_lx;
  int32_T ia_j;
  int32_T jA_n5;
  int32_T i_j4;
  int32_T k_ie;
  int32_T b_k_n;
  int32_T tmp_l;
  int32_T tmp_ca;
  int32_T i42;
  int32_T tmp_idx_0_tmp;
  int32_T i43;
  int32_T nVar_f;
  int32_T mConstrMax_a;
  int32_T idxIneqOffset;
  int32_T idx_Aineq;
  int32_T idx_lower;
  int32_T nWIneq_old;
  int32_T nWLower_old;
  int32_T nWUpper_old;
  int32_T ix_pr;
  int32_T iy_m;
  int32_T l_p;
  int32_T idxStartIneq_m;
  int32_T idxStartIneq_tmp_h;
  int32_T activeSetChangeID_l;
  int32_T nVar_h;
  int32_T globalActiveConstrIdx_f;
  int32_T idxMinLambda_j;
  int32_T k_hu;
  int32_T iQR0_h;
  int32_T g_a;
  int32_T nVar_o;
  int32_T nullStartIdx;
  int32_T b_mNull;
  int32_T nullStart;
  int32_T c_mNull;
  int32_T b_jjA;
  int32_T d_ix_n;
  int32_T mNull_tmp;
  int32_T nullStartIdx_tmp;
  int32_T LDimSizeP1;
  int32_T A_maxDiag_idx;
  int32_T LD_diagOffset;
  int32_T ix_k;
  int32_T iy0_n;
  int32_T LDimSizeP1_e;
  int32_T subRows;
  int32_T LD_diagOffset_n;
  int32_T idx_b;
  int32_T k_a;
  int32_T b_idx_j;
  int32_T lda;
  int32_T ix_j;
  int32_T c_l4;
  int32_T lastColC;
  int32_T br_f;
  int32_T b_idx_tmp;
  int32_T itau_i;
  int32_T ii_b;
  int32_T ix0_c;
  int32_T knt_e;
  int32_T lastv_dv;
  int32_T iac_n;
  int32_T ia_l;
  int32_T jA_ov;
  int32_T i_av;
  int32_T coffset_ji;
  int32_T boffset_b;
  int32_T b_i_lo;
  int32_T e_hh;
  int32_T c_i_h;
  int32_T loop_ub_fx;
  int32_T c_kt;
  int32_T i44;
  int32_T i45;
  int32_T i46;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T aux_2_1;
  int32_T stride_0_0_f;
  int32_T stride_1_0_i;
  int32_T stride_2_0;
  int32_T stride_0_1;
  int32_T stride_1_1;
  int32_T stride_2_1;
  int32_T loop_ub_pg;
  int32_T loop_ub_d5;
  int32_T mc_o;
  int32_T coffset_g;
  int32_T boffset_n;
  int32_T j_g;
  int32_T i_j0;
  int32_T k_j;
  int32_T b_i_gh;
  int32_T b_jz;
  int32_T i47;
  int32_T b_cm;
  int32_T k_nm;
  int32_T b_df;
  int32_T idxStartIneq_k;
  int32_T idxEndIneq_i;
  int32_T idxStartIneq_tmp_d;
  int32_T nActiveConstr;
  int32_T nFixedConstr;
  int32_T nVar_j;
  int32_T nDepIneq;
  int32_T ix0_g;
  int32_T iy0_g;
  int32_T d_j;
  int32_T nVar_tmp_tmp_h;
  int32_T lda_o;
  int32_T ii_oi;
  int32_T mmi_k;
  int32_T i_ho;
  int32_T loop_ub_k;
  int32_T lastv_c;
  int32_T lastc_a;
  int32_T coltop_j;
  int32_T ia_a;
  int32_T iy_l;
  int32_T b_iy_b;
  int32_T b_hd;
  int32_T d_g;
  int32_T ia_lu;
  int32_T i48;
  int32_T stride_0_0_h;
  int32_T stride_1_0_g;
  int32_T stride_2_0_h;
  int32_T stride_3_0;
  int32_T loop_ub_kn;
  int32_T aoffset_p;
  int32_T i_no;
  int32_T k_j3;
  int32_T b_i_n;
  int32_T mc_tmp;
  int32_T itau_iz;
  int32_T ii_me;
  int32_T ix0_iq;
  int32_T knt_i;
  int32_T lastv_b;
  int32_T i_k;
  int32_T iac_lb;
  int32_T ia_f;
  int32_T jA_h;
  int32_T i_gl;
  int32_T endIdx;
  int32_T idxRotGCol;
  int32_T QRk0;
  int32_T e_hg;
  int32_T ix_l3;
  int32_T b_ix_p;
  int32_T b_temp_tmp;
  int32_T b_temp_tmp_k;
  int32_T nVar_c;
  int32_T mLambda;
  int32_T idx_max_j;
  int32_T ix_an;
  int32_T rankR;
  int32_T c_ix;
  int32_T iQR0_b;
  int32_T n_j;
  int32_T ia_fq;
  int32_T i_gf;
  int32_T itau_bw;
  int32_T c_oa;
  int32_T loop_ub_a;
  int32_T jA_p;
  int32_T j_li;
  int32_T b_ig;
  int32_T ldw;
  int32_T d_a;
  int32_T iyend;
  int32_T e_e;
  int32_T f_h;
  int32_T ia_c;
  int32_T d_tmp_b;
  int32_T b_e;
  int32_T b_iy_j;
  int32_T d_d;
  int32_T e_jt;
  int32_T y_tmp_b;
  int32_T iv_h;
  int32_T i_c5;
  int32_T knt_hn;
  int32_T b_ix_ns;
  int32_T b_iy_h;
  int32_T b_iy_tmp;
  int32_T tau_tmp_tmp;
  int32_T b_ix_tmp;
  int32_T temp2_tmp_tmp_tmp;
  int32_T kend_py;
  int32_T ia0;
  int32_T b_i_pf;
  int32_T knt_ow;
  int32_T k_id;
  int32_T b_tmp_k;
  int32_T temp1_tmp;
  int32_T tau_tmp_n;
  int32_T temp1_tmp_tmp_tmp;
  int32_T e_tmp;
  int32_T kend_b;
  int32_T i49;
  int32_T i50;
  int32_T aux_0_1_n;
  int32_T aux_1_1_j;
  int32_T stride_0_1_h;
  int32_T stride_1_1_k;
  int32_T loop_ub_i2;
  int32_T coffset_k;
  int32_T boffset_j;
  int32_T j_k;
  int32_T i_eo;
  int32_T k_b;
  int32_T b_i_pb;
  int32_T b_p0;
  int32_T i51;
  int32_T idx_lj;
  int32_T ix0_h;
  int32_T iy0_m;
  int32_T b_k_e;
  int32_T idxA1j;
  int32_T idxAjj_d;
  int32_T nmj;
  int32_T b_j_ix;
  int32_T iy_k;
  int32_T b_km;
  int32_T d_aq;
  int32_T ia_at;
  int32_T b_ix_f;
  int32_T b_iy_jv;
  int32_T idxFillStart;
  int32_T colOffsetATw;
  int32_T iAeq0;
  int32_T iATw0;
  int32_T idx_e;
  int32_T f_i;
  int32_T idxUpperExisting;
  int32_T offsetEq1;
  int32_T offsetEq2;
  int32_T colOffsetATw_g;
  int32_T colOffsetAineq;
  int32_T d_n;
  int32_T k_gm;
  int32_T d_tmp_ba;
  int32_T i52;
  int32_T idxEq;
  int32_T idx_bd;
  int32_T d_b;
  int32_T nVar_jv;
  int32_T b_o;
  int32_T idx_j;
  int32_T mIneq_i;
  int32_T b_nd;
  int32_T k_o;
  int32_T iy_d;
  int32_T b_k4;
  int32_T b_iy_g;
  int32_T d_o3;
  int32_T e_n;
  int32_T nActiveConstr_h;
  int32_T nFixedConstr_k;
  int32_T nVar_l;
  int32_T nDepIneq_b;
  int32_T ix0_fe;
  int32_T iy0_e;
  int32_T d_i;
  int32_T nVar_tmp_tmp_b;
  int32_T maxOffset;
  int32_T idxStart;
  int32_T idxEnd;
  int32_T idxFill;
  int32_T b_tmp_eb;
  int32_T nVar_oe;
  int32_T mWorkingFixed;
  int32_T mTotalWorkingEq;
  int32_T totalRank;
  int32_T ix_o;
  int32_T c_tmp_tmp;
  int32_T mTotalWorkingEq_tmp;
  int32_T k_a4;
  int32_T temp_tmp_h;
  int32_T i53;
  int32_T minszA;
  int32_T j_b;
  int32_T i_nu;
  int32_T nA_tmp;
  int32_T c_ng;
  int32_T n_hb;
  int32_T jBcol_b;
  int32_T kAcol_g;
  int32_T j_eq;
  int32_T b_k_eu;
  int32_T i_ep;
  int32_T y_m;
  int32_T i54;
  int32_T i55;
  int32_T trueCount_k;
  int32_T i_j01;
  int32_T i56;
  int32_T LDimSizeP1_b;
  int32_T LD_diagOffset_l;
  int32_T subMatrixDim;
  int32_T k_ju;
  int32_T b_k_m;
  int32_T jA_l;
  int32_T b_i0;
  int32_T ijA_o;
  int32_T idx_bf;
  int32_T idxRotGCol_m;
  int32_T iy_g;
  int32_T iyend_l;
  int32_T b_iy_p;
  int32_T ia_n;
  int32_T temp_tmp_f;
  int32_T nVar_o4;
  int32_T mLambda_j;
  int32_T idx_max_k;
  int32_T k_of;
  int32_T iL0;
  int32_T b_f;
  int32_T ix_ky;
  int32_T f_l;
  int32_T g_aq;
  int32_T i57;
  int32_T i58;
  int32_T i59;
  int32_T mIneq_m;
  int32_T f_g;
  int32_T k_mp;
  int32_T iy_n;
  int32_T b_ns;
  int32_T b_iy_j3;
  int32_T d_o5;
  int32_T e_cn;
  int32_T mIneq_l;
  int32_T f_lh;
  int32_T k_jx;
  int32_T iy_fc;
  int32_T b_bx;
  int32_T b_iy_bc;
  int32_T d_f;
  int32_T e_iu;
  int32_T j_kz;
  int32_T offsetj;
  int32_T offsetjp1;
  int32_T b_cs;
  int32_T b_j_c;
  int32_T temp_tmp_j;
  int32_T ix_ao;
  int32_T b_de;
  int32_T jy_i;
  int32_T b_ix_e;
  int32_T b_jA;
  int32_T i60;
  int32_T j_p;
  int32_T blockFormat_o;
  int32_T b_j_j;
  int32_T blockFormat_h;
  int32_T b_i_m;
  int32_T b_i_d;
  int32_T b_i_j0;
  int32_T b_i_jg;
  int32_T i61;
  int32_T idx_gu;
  int32_T ix0_ft;
  int32_T iy0_l;
  int32_T b_bxl;
  int32_T k_au;
  int32_T minmn_j;
  int32_T loop_ub_nn;
  int32_T offsetj_p;
  int32_T offsetjp1_o;
  int32_T j_a;
  int32_T i_hsg;
  int32_T temp_tmp_i;
  int32_T j_m;
  int32_T offsetj_h;
  int32_T offsetjp1_c;
  int32_T b_j_m;
  int32_T temp_tmp_k;
  int32_T offsetj_a;
  int32_T offsetjp1_e;
  int32_T j_j;
  int32_T b_i_fb;
  int32_T temp_tmp_m;
  int32_T ic0;
  int32_T low_i;
  int32_T jm1;
  int32_T idxAjj_e;
  int32_T j_pm;
  int32_T d_hg;
  int32_T b_iy_l;
  int32_T b_k_l;
  int32_T i62;
  int32_T i63;
  int32_T aux_0_1_c;
  int32_T aux_1_1_n;
  int32_T stride_0_0_fr;
  int32_T stride_1_0_h;
  int32_T stride_0_1_b;
  int32_T stride_1_1_g;
  int32_T loop_ub_o;
  int32_T loop_ub_h;
  int32_T b_idx_i;
  int32_T idxQR;
  int32_T b_gz;
  int32_T ia_i;
  int32_T jjA;
  int32_T b_ix_i;
  int32_T nActiveConstr_tmp_tmp;
  int32_T i_ph;
  int32_T ixlast_h;
  int32_T iy_lx;
  int32_T ix_g;
  int32_T b_iy_bk;
  int32_T b_gj;
  int32_T c_cy;
  int32_T ia_ce;
  int32_T i64;
  int32_T lastColC_e;
  int32_T br_p;
  int32_T ar;
  int32_T cr;
  int32_T b_at;
  int32_T ic_g4;
  int32_T c_fh;
  int32_T mLinIneq_p;
  int32_T iLineq0;
  int32_T idx_c;
  int32_T b_idx_m;
  int32_T nVar_m;
  int32_T iw0;
  int32_T iEq0;
  int32_T idx_a5;
  int32_T i_e2;
  int32_T ix0_is;
  int32_T n_i1;
  int32_T k_bu;
  int32_T jBcol_kk;
  int32_T k_en;
  int32_T kAcol_a;
  int32_T b_j_fy;
  int32_T b_k_o;
  int32_T i_l;
  int32_T jBcol_l;
  int32_T k_kk;
  int32_T kAcol_f;
  int32_T b_j_p4;
  int32_T b_k_e3;
  int32_T i_cu;
  int32_T jjA_d;
  int32_T ix_ii;
  int32_T b_j_f3;
  int32_T c_ot;
  int32_T b_i_o;
  int32_T n_tmp_p;
  int32_T lastColC_p;
  int32_T br_g;
  int32_T ar_g;
  int32_T cr_e;
  int32_T b_jq;
  int32_T ic_n2;
  int32_T c_bp;
  int32_T d_cs;
  int32_T jBcol_i;
  int32_T kAcol_h;
  int32_T j_dd;
  int32_T b_k_i;
  int32_T i_nx;
  int32_T b_B_tmp;
  int32_T beta1_ox;
  int32_T ix_ig;
  int32_T d_mo;
  int32_T e_pf;
  int32_T ia_k;
  int32_T i65;
  int32_T jBcol_kr;
  int32_T kAcol_hf;
  int32_T b_j_gz;
  int32_T k_ix;
  int32_T b_i_bz;
  int32_T jBcol_c;
  int32_T kAcol_k;
  int32_T b_j_ii;
  int32_T k_f;
  int32_T b_i_fy;
  int32_T idx_ba;
  int32_T kend_m;
  int32_T jA_j;
  int32_T j_h;
  int32_T i_hj;
  int32_T ix_d;
  int32_T n_tmp_a;
  int32_T k_h2;
  int32_T i66;
  int32_T loop_ub_o1;
  int32_T c_lb;
  int32_T unnamed_idx_1;
  int32_T kidx_n;
  int32_T c_g;
  int32_T b_j1;
  int32_T j2;
  int32_T d_mou;
  int32_T i1_j;
  int32_T i2_e;
  int32_T jA_d;
  int32_T j_c;
  int32_T b_jo;
  int32_T ijA_h0;
  int32_T k_l5;
  int32_T iy_aa;
  int32_T d_dl;
  int32_T e_iq;
  int32_T ix_h;
  int32_T b_iy_gq;
  int32_T b_gg;
  int32_T c_oz;
  int32_T ia_ey;
  int32_T i67;
  int32_T iCol;
  int32_T iCol_old;
  int32_T b_oh;
  int32_T idx_col;
  int32_T c_gj;
  int32_T k_ch;
  int32_T jA_g;
  int32_T j_f;
  int32_T b_gh;
  int32_T ijA_l;
  int32_T b_iy_f;
  int32_T b_n2;
  int32_T d_mg;
  int32_T ia_d5;
  int32_T iL0_b;
  int32_T i_g3;
  int32_T ix_jj;
  int32_T f_e;
  int32_T g_e;
  int32_T aoffset_n;
  int32_T b_kq;
  int32_T i_dr;
  int32_T b_i_gc;
  int32_T b_l;
  int32_T last;
  int32_T idx_cm;
  int32_T k_gw;
  int32_T i_kz;
  int32_T k_jz;
  int32_T b_m_tmp_k;
  int32_T kidx_g;
  int32_T j2_b;
  int32_T b_g1;
  int32_T i1_m;
  int32_T i2_i;
  int32_T minmn_m;
  int32_T i68;
  int32_T totalEq;
  int32_T iAeq0_i;
  int32_T iAw0;
  int32_T b_idx_l;
  int32_T i69;
  int32_T stride_0_1_d;
  int32_T stride_1_1_f;
  int32_T loop_ub_dp;
  int32_T iAineq0;
  int32_T iAw0_p;
  int32_T b_ev;
  int32_T idx_m;
  int32_T idx_lo;
  int32_T k_mb;
  int32_T idx_current_e;
  int32_T idx_end;
  int32_T aoffset_e;
  int32_T i_il;
  int32_T b_i_jf;
  int32_T mc_tmp_m;
  int32_T n_p1;
  int32_T iend;
  int32_T j_mt;
  int32_T i_lq;
  int32_T j_lf;
  int32_T i70;
  int32_T i71;
  int32_T loop_ub_tmp_k;
  int32_T j_dv;
  int32_T i72;
  int32_T i73;
  int32_T loop_ub_tmp_m;
  int32_T j_de;
  int32_T i74;
  int32_T i75;
  int32_T loop_ub_tmp_cu;
  int32_T maxRegVar;
  int32_T ixlast_n;
  int32_T maxRegVar_tmp;
  int32_T b_ga;
  int32_T idx_ll;
  int32_T mIneq_c;
  int32_T b_c3;
  int32_T idx_f;
  int32_T TYPE_tmp;
  int32_T colOffset;
  int32_T idx_bnd_local;
  int32_T b_m5;
  int32_T idx_bw;
  int32_T idx_current_p;
  int32_T mAll;
  int32_T currentMplier;
  int32_T idxOffset;
  int32_T j_ku;
  int32_T ct_a;
  int32_T ct_l;
  int32_T b_j_k;
  int32_T mIneq_f;
  int32_T idx_jr;
  int32_T b_i_a;
  int32_T i76;
  int32_T dlen;
  int32_T k_ly;
  int32_T k_fa;
  int32_T loop_ub_tmp_j;
  int32_T k_p;
  int32_T loop_ub_tmp_mz;
  int32_T k_jl;
  int32_T k_fac;
  int32_T vlen;
  int32_T k_kb;
  int32_T k_m1;
  int32_T k_hs;
  int32_T ijA_g;
  int32_T U_tmp_a;
  int32_T ret;
  int32_T i_m2;
  int32_T i77;
  uint32_T len;
  uint32_T b_q;
  uint32_T b_q_tmp;
  uint32_T u;
  SL_Bus_std_msgs_Float32 r13;
  int32_T B_size[1];
  int32_T isMrows_size[1];
  int32_T tmp_size_k0[1];
  int32_T tmp_size_bd[1];
  int32_T tmp_size_kj[1];
  int32_T Je_size[1];
  int32_T z_size[1];
  int32_T tau_size[1];
  int32_T tmp_size_gh[1];
  int32_T e_tmp_data[1];
  char_T expl_temp_l[3];
  int8_T d_input_sizes[2];
  int8_T e_input_sizes[2];
  int8_T f_input_sizes[2];
  int16_T b_Mrows_b;
  int16_T ixw;
  uint8_T input_sizes[2];
  uint8_T b_input_sizes[2];
  uint8_T c_input_sizes[2];
  uint8_T varargin_1_l[2];
  int8_T rtPrevAction;
  int8_T rtAction;
  int8_T f_input_sizes_idx_0;
  int8_T e_input_sizes_idx_0;
  int8_T d_input_sizes_idx_0;
  uint8_T mode;                        /* '<S24>/Data Type Conversion' */
  uint8_T ZeroOrderHold_b;             /* '<S3>/Zero-Order Hold' */
  int8_T MpcStatus;                    /* '<S47>/Merge' */
  uint8_T u1_i;
  boolean_T Merge8;                    /* '<S7>/Merge8' */
  boolean_T SourceBlock_o1;            /* '<S284>/SourceBlock' */
  boolean_T Reset_l;                   /* '<S294>/Reset' */
  boolean_T Reset_a;                   /* '<S295>/Reset' */
  boolean_T Reset_m;                   /* '<S297>/Reset' */
  boolean_T SourceBlock_o1_a;          /* '<S259>/SourceBlock' */
  boolean_T MATLABSystem_o3_d;         /* '<S235>/MATLAB System' */
  boolean_T isMpcAlive;                /* '<S49>/Data Type Conversion' */
  boolean_T thrustersStatus[8];        /* '<S48>/MATLAB System' */
  boolean_T SourceBlock_o1_k;          /* '<S40>/SourceBlock' */
  boolean_T SourceBlock_o1_e;          /* '<S39>/SourceBlock' */
  boolean_T SourceBlock_o1_a3;         /* '<S38>/SourceBlock' */
  boolean_T SourceBlock_o1_j;          /* '<S37>/SourceBlock' */
  boolean_T SourceBlock_o1_f;          /* '<S36>/SourceBlock' */
  boolean_T SourceBlock_o1_kn;         /* '<S35>/SourceBlock' */
  boolean_T b_value_n;
  boolean_T p_dr;
  boolean_T p_o;
  boolean_T Merge6;                    /* '<S7>/Merge6' */
  boolean_T NewDvlMsg;                 /* '<S7>/Merge5' */
  boolean_T newPressureMsg;            /* '<S7>/Merge3' */
  boolean_T isTrajDone;
  boolean_T b_dg;
  boolean_T empty_non_axis_sizes;
  SL_Bus_std_msgs_Bool r14;
  SL_Bus_std_msgs_Bool SourceBlock_o2_e5;/* '<S35>/SourceBlock' */
  SL_Bus_std_msgs_Bool BusAssignment_n;/* '<S280>/Bus Assignment' */
  SL_Bus_std_msgs_Bool BusAssignment_pu;/* '<S7>/Bus Assignment' */
  SL_Bus_std_msgs_Bool BusAssignment1_l;/* '<S7>/Bus Assignment1' */
  SL_Bus_std_msgs_Bool BusAssignment2; /* '<S7>/Bus Assignment2' */
  SL_Bus_std_msgs_Bool BusAssignment3; /* '<S7>/Bus Assignment3' */
  SL_Bus_std_msgs_Bool BusAssignment4; /* '<S7>/Bus Assignment4' */
  SL_Bus_std_msgs_UInt8 rtb_SourceBlock_o2_d_b;
  SL_Bus_sonia_common_ros2_KillStatus rtb_SourceBlock_o2_i_n;
  B_EnabledSubsystem_proc_contr_T EnabledSubsystem_gv;/* '<S284>/Enabled Subsystem' */
  B_EnabledSubsystem_proc_con_a_T EnabledSubsystem_gu;/* '<S283>/Enabled Subsystem' */
  B_EnabledSubsystem_proc_con_f_T EnabledSubsystem_b2;/* '<S282>/Enabled Subsystem' */
  B_EnabledSubsystem_proc_con_e_T EnabledSubsystem_gf;/* '<S281>/Enabled Subsystem' */
  B_EnabledSubsystem_proc_con_a_T EnabledSubsystem_k;/* '<S303>/Enabled Subsystem' */
  B_EnabledSubsystem_proc_con_a_T EnabledSubsystem_j;/* '<S302>/Enabled Subsystem' */
  B_EnabledSubsystem_proc_con_f_T EnabledSubsystem_l;/* '<S301>/Enabled Subsystem' */
  B_EnabledSubsystem_proc_con_e_T EnabledSubsystem_h;/* '<S300>/Enabled Subsystem' */
  B_MovingAverage_proc_contro_c_T MovingAverage2_p;/* '<S181>/Moving Average' */
  B_MovingAverage_proc_contro_c_T MovingAverage1_p;/* '<S181>/Moving Average' */
  B_MovingAverage_proc_contro_c_T MovingAverage_p;/* '<S181>/Moving Average' */
  B_MovingAverage1_proc_control_T MovingAverage8;/* '<S169>/Moving Average1' */
  B_MovingAverage1_proc_control_T MovingAverage7;/* '<S169>/Moving Average1' */
  B_MovingAverage1_proc_control_T MovingAverage6;/* '<S169>/Moving Average1' */
  B_MovingAverage_proc_control__T MovingAverage5;/* '<S169>/Moving Average' */
  B_MovingAverage_proc_control__T MovingAverage4;/* '<S169>/Moving Average' */
  B_MovingAverage1_proc_control_T MovingAverage3;/* '<S169>/Moving Average1' */
  B_MovingAverage1_proc_control_T MovingAverage2;/* '<S169>/Moving Average1' */
  B_MovingAverage1_proc_control_T MovingAverage1;/* '<S169>/Moving Average1' */
  B_MovingAverage_proc_control__T MovingAverage;/* '<S169>/Moving Average' */
  B_MATLABFunction3_proc_contro_T sf_MATLABFunction6;/* '<S169>/MATLAB Function6' */
  B_MATLABFunction3_proc_contro_T sf_MATLABFunction4;/* '<S169>/MATLAB Function4' */
  B_MATLABFunction3_proc_contro_T sf_MATLABFunction3;/* '<S169>/MATLAB Function3' */
  B_LowpassFilter_proc_control__T LowpassFilter2;/* '<S169>/Lowpass Filter' */
  B_LowpassFilter_proc_control__T LowpassFilter1;/* '<S169>/Lowpass Filter' */
  B_LowpassFilter_proc_control__T LowpassFilter;/* '<S169>/Lowpass Filter' */
  B_HighpassFilter1_proc_contro_T HighpassFilter2;/* '<S169>/Highpass Filter1' */
  B_HighpassFilter1_proc_contro_T HighpassFilter1;/* '<S169>/Highpass Filter1' */
  B_EnabledSubsystem_proc_contr_T EnabledSubsystem_i;/* '<S40>/Enabled Subsystem' */
  B_EnabledSubsystem_proc_contr_T EnabledSubsystem_b;/* '<S37>/Enabled Subsystem' */
  B_EnabledSubsystem_proc_contr_T EnabledSubsystem_o;/* '<S35>/Enabled Subsystem' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_proc_control_lite_T {
  TrajectoryManager_proc_contro_T obj; /* '<S250>/MATLAB System1' */
  ProcPlannerManager_proc_contr_T obj_l;/* '<S245>/MATLAB System' */
  mpcManager_proc_control_lite_T obj_k;/* '<S48>/MATLAB System' */
  TrimPlant_proc_control_lite_T obj_b; /* '<S50>/MATLAB System' */
  robotics_slcore_internal_bl_h_T obj_m;/* '<S266>/Polynomial Trajectory' */
  OpenLoopController_proc_contr_T obj_p;/* '<S52>/MATLAB System' */
  dsp_simulink_HighpassFilter_p_T obj_by;/* '<S169>/Highpass Filter' */
  robotics_slcore_internal_bloc_T obj_p3;/* '<S263>/Rotation Trajectory' */
  AddPose_proc_control_lite_T obj_f;   /* '<S250>/MATLAB System' */
  rosCommandManager_proc_contro_T obj_i;/* '<S24>/MATLAB System' */
  Vector2DoubleArray_proc_con_h_T obj_j;/* '<S32>/MATLAB System4' */
  Vector2DoubleArray_proc_con_h_T obj_jd;/* '<S31>/MATLAB System4' */
  Vector2DoubleArray_proc_con_h_T obj_jl;/* '<S30>/MATLAB System4' */
  Vector2DoubleArray_proc_con_h_T obj_c;/* '<S29>/MATLAB System3' */
  Vector2DoubleArray_proc__hpq2_T obj_lw;/* '<S26>/MATLAB System4' */
  Vector2DoubleArray_proc_contr_T obj_cp;/* '<S33>/MATLAB System5' */
  Vector2DoubleArray_proc_contr_T obj_a;/* '<S32>/MATLAB System5' */
  Vector2DoubleArray_proc_contr_T obj_j2;/* '<S32>/MATLAB System3' */
  Vector2DoubleArray_proc_contr_T obj_bs;/* '<S31>/MATLAB System5' */
  Vector2DoubleArray_proc_contr_T obj_p35;/* '<S31>/MATLAB System3' */
  Vector2DoubleArray_proc_contr_T obj_cl;/* '<S30>/MATLAB System5' */
  Vector2DoubleArray_proc_contr_T obj_ax;/* '<S30>/MATLAB System3' */
  Vector2DoubleArray_proc_contr_T obj_pg;/* '<S29>/MATLAB System4' */
  Vector2DoubleArray_proc_contr_T obj_o;/* '<S29>/MATLAB System1' */
  Vector2DoubleArray_proc_co_hp_T obj_d;/* '<S26>/MATLAB System3' */
  Vector2DoubleArray_proc_co_hp_T obj_li;/* '<S26>/MATLAB System2' */
  Vector2DoubleArray_proc_co_hp_T obj_n;/* '<S26>/MATLAB System1' */
  Vector2DoubleArray_proc_c_hpq_T obj_e;/* '<S26>/MATLAB System8' */
  Vector2DoubleArray_proc_c_hpq_T obj_k3;/* '<S26>/MATLAB System7' */
  Vector2DoubleArray_proc_c_hpq_T obj_o4;/* '<S26>/MATLAB System6' */
  Vector2DoubleArray_proc_c_hpq_T obj_bx;/* '<S26>/MATLAB System5' */
  Vector2DoubleArray_proc_c_hpq_T obj_jm;/* '<S26>/MATLAB System12' */
  Vector2DoubleArray_proc_c_hpq_T obj_n0;/* '<S26>/MATLAB System11' */
  ros_slros2_internal_block_Cur_T obj_o3;/* '<S89>/Current Time' */
  ros_slros2_internal_block_Cur_T obj_h;/* '<S13>/Current Time' */
  ros_slros2_internal_block_Get_T obj_ju;/* '<S26>/Volume' */
  ros_slros2_internal_block_Get_T obj_l4;/* '<S26>/Thrusters' */
  ros_slros2_internal_block_Get_T obj_e5;/* '<S26>/Sub Height' */
  ros_slros2_internal_block_Get_T obj_eu;/* '<S26>/Sonar Pose' */
  ros_slros2_internal_block_Get_T obj_pp;/* '<S26>/RHO' */
  ros_slros2_internal_block_Get_T obj_e1;/* '<S26>/RG' */
  ros_slros2_internal_block_Get_T obj_hd;/* '<S26>/RB' */
  ros_slros2_internal_block_Get_T obj_hn;/* '<S26>/I' */
  ros_slros2_internal_block_Get_T obj_c4;/* '<S26>/Hydro Pose' */
  ros_slros2_internal_block_Get_T obj_jq;/* '<S26>/Get Parameter2' */
  ros_slros2_internal_block_Get_T obj_axm;/* '<S26>/G' */
  ros_slros2_internal_block_Get_T obj_lq;/* '<S26>/Depth Pose' */
  ros_slros2_internal_block_Get_T obj_mh;/* '<S26>/DVL Rotation' */
  ros_slros2_internal_block_Get_T obj_jk;/* '<S26>/DVL Lost Override' */
  ros_slros2_internal_block_Get_T obj_kb;/* '<S26>/CDQ' */
  ros_slros2_internal_block_Get_T obj_fg;/* '<S26>/CDL' */
  ros_slros2_internal_block_Get_T obj_ps;/* '<S26>/Added Mass' */
  ros_slros2_internal_block_Get_T obj_do;/* '<S28>/Time In Tolerance' */
  ros_slros2_internal_block_Get_T obj_dc;/* '<S28>/Linear Tolerance' */
  ros_slros2_internal_block_Get_T obj_eug;/* '<S28>/Angular Tolerance' */
  ros_slros2_internal_block_Get_T obj_pu;/* '<S27>/T Min' */
  ros_slros2_internal_block_Get_T obj_cm;/* '<S27>/T Max' */
  ros_slros2_internal_block_Get_T obj_f0;/* '<S27>/P' */
  ros_slros2_internal_block_Get_T obj_dx;/* '<S27>/M' */
  ros_slros2_internal_block_Get_T obj_nb;/* '<S33>/MV' */
  ros_slros2_internal_block_Get_T obj_fs;/* '<S32>/OV' */
  ros_slros2_internal_block_Get_T obj_hq;/* '<S32>/MVR' */
  ros_slros2_internal_block_Get_T obj_pz;/* '<S32>/MV' */
  ros_slros2_internal_block_Get_T obj_nl;/* '<S31>/OV' */
  ros_slros2_internal_block_Get_T obj_as;/* '<S31>/MVR' */
  ros_slros2_internal_block_Get_T obj_nr;/* '<S31>/MV' */
  ros_slros2_internal_block_Get_T obj_j1;/* '<S30>/OV' */
  ros_slros2_internal_block_Get_T obj_pzf;/* '<S30>/MVR' */
  ros_slros2_internal_block_Get_T obj_f2;/* '<S30>/MV' */
  ros_slros2_internal_block_Get_T obj_fk;/* '<S29>/OV' */
  ros_slros2_internal_block_Get_T obj_bn;/* '<S29>/MVR' */
  ros_slros2_internal_block_Get_T obj_iw;/* '<S29>/MV' */
  ros_slros2_internal_block_Pub_T obj_fp;/* '<S299>/SinkBlock' */
  ros_slros2_internal_block_Pub_T obj_a0;/* '<S279>/SinkBlock' */
  ros_slros2_internal_block_Pub_T obj_al;/* '<S278>/SinkBlock' */
  ros_slros2_internal_block_Pub_T obj_dt;/* '<S277>/SinkBlock' */
  ros_slros2_internal_block_Pub_T obj_ks;/* '<S276>/SinkBlock' */
  ros_slros2_internal_block_Pub_T obj_cz;/* '<S275>/SinkBlock' */
  ros_slros2_internal_block_Pub_T obj_oe;/* '<S255>/SinkBlock' */
  ros_slros2_internal_block_Pub_T obj_ni;/* '<S90>/SinkBlock' */
  ros_slros2_internal_block_Pub_T obj_fd;/* '<S20>/SinkBlock' */
  ros_slros2_internal_block_Pub_T obj_oa;/* '<S19>/SinkBlock' */
  ros_slros2_internal_block_Pub_T obj_clf;/* '<S22>/SinkBlock' */
  ros_slros2_internal_block_Pub_T obj_ez;/* '<S15>/SinkBlock' */
  ros_slros2_internal_block_Pub_T obj_dv;/* '<S11>/SinkBlock' */
  ros_slros2_internal_block_Sub_T obj_bg;/* '<S284>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_i1;/* '<S283>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_ll;/* '<S282>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_cmo;/* '<S281>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_llj;/* '<S303>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_fj;/* '<S302>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_fu;/* '<S301>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_ln;/* '<S300>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_ha;/* '<S264>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_eh;/* '<S259>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_jb;/* '<S257>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_if;/* '<S151>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_no;/* '<S150>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_cg;/* '<S40>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_lt;/* '<S39>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_fw;/* '<S38>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_i3;/* '<S37>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_nf;/* '<S36>/SourceBlock' */
  ros_slros2_internal_block_Sub_T obj_ppy;/* '<S35>/SourceBlock' */
  real_T Delay_DSTATE[8];              /* '<S160>/Delay' */
  real_T UD_DSTATE[3];                 /* '<S173>/UD' */
  real_T Delay_DSTATE_g[10];           /* '<S5>/Delay' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<S263>/Discrete-Time Integrator' */
  real_T init;                         /* '<S250>/MATLAB System1' */
  real_T poseBuffer[78013];            /* '<S250>/MATLAB System1' */
  real_T generationNumber;             /* '<S250>/MATLAB System1' */
  real_T bufferCount;                  /* '<S250>/MATLAB System1' */
  real_T targetReachedCount;           /* '<S250>/MATLAB System1' */
  real_T initcond[7];                  /* '<S250>/MATLAB System' */
  real_T poseList[18];                 /* '<S250>/MATLAB System' */
  real_T i;                            /* '<S250>/MATLAB System' */
  real_T initialPose[7];               /* '<S245>/MATLAB System' */
  real_T targetReachedCount_p;         /* '<S245>/MATLAB System' */
  real_T bufferCount_f;                /* '<S245>/MATLAB System' */
  real_T poseBuffer_c[78000];          /* '<S245>/MATLAB System' */
  real_T Delay_DSTATE_i;               /* '<S214>/Delay' */
  real_T DiscreteTimeIntegrator_DSTATE_l[3];/* '<S180>/Discrete-Time Integrator' */
  real_T Delay_DSTATE_p;               /* '<S49>/Delay' */
  real_T gainsList[600];               /* '<S48>/MATLAB System' */
  real_T rosMVR[8];                    /* '<S48>/MATLAB System' */
  real_T rosMV[8];                     /* '<S48>/MATLAB System' */
  real_T rosOV[13];                    /* '<S48>/MATLAB System' */
  real_T currentFaultCount[8];         /* '<S48>/MATLAB System' */
  real_T init_b;                       /* '<S48>/MATLAB System' */
  real_T Delay_DSTATE_pp[8];           /* '<S54>/Delay' */
  real_T mv_Delay_DSTATE[88];          /* '<S128>/mv_Delay' */
  real_T x_Delay_DSTATE[143];          /* '<S128>/x_Delay' */
  real_T slack_delay_DSTATE;           /* '<S128>/slack_delay' */
  real_T last_mv_DSTATE[8];            /* '<S94>/last_mv' */
  real_T Delay1_DSTATE[88];            /* '<S51>/Delay1' */
  real_T UD_DSTATE_n[6];               /* '<S124>/UD' */
  real_T Delay_DSTATE_a[8];            /* '<S50>/Delay' */
  real_T last_mv_DSTATE_j[8];          /* '<S58>/last_mv' */
  real_T qkt[4];                       /* '<S50>/MATLAB System' */
  real_T xl[13];                       /* '<S50>/MATLAB System' */
  real_T qkm[4];                       /* '<S50>/MATLAB System' */
  real_T D[104];                       /* '<S50>/MATLAB System' */
  real_T Bc[104];                      /* '<S50>/MATLAB System' */
  real_T C[169];                       /* '<S50>/MATLAB System' */
  real_T constValues[38];              /* '<S50>/MATLAB System' */
  real_T m_notDryRun;                  /* '<S24>/MATLAB System' */
  real_T m_trajClear;                  /* '<S24>/MATLAB System' */
  real_T m_reset;                      /* '<S24>/MATLAB System' */
  real_T m_simulation;                 /* '<S24>/MATLAB System' */
  real_T m_killStatus;                 /* '<S24>/MATLAB System' */
  real_T m_mode;                       /* '<S24>/MATLAB System' */
  real_T m_initCond[7];                /* '<S24>/MATLAB System' */
  real_T lastValues[3];                /* '<S26>/MATLAB System8' */
  real_T lastMsg[400];                 /* '<S26>/MATLAB System8' */
  real_T lastValues_n[3];              /* '<S26>/MATLAB System7' */
  real_T lastMsg_a[400];               /* '<S26>/MATLAB System7' */
  real_T lastValues_d[3];              /* '<S26>/MATLAB System6' */
  real_T lastMsg_l[400];               /* '<S26>/MATLAB System6' */
  real_T lastValues_m[3];              /* '<S26>/MATLAB System5' */
  real_T lastMsg_k[400];               /* '<S26>/MATLAB System5' */
  real_T lastValues_h[9];              /* '<S26>/MATLAB System4' */
  real_T lastMsg_m[400];               /* '<S26>/MATLAB System4' */
  real_T lastValues_mz[6];             /* '<S26>/MATLAB System3' */
  real_T lastMsg_kw[400];              /* '<S26>/MATLAB System3' */
  real_T lastValues_j[6];              /* '<S26>/MATLAB System2' */
  real_T lastMsg_f[400];               /* '<S26>/MATLAB System2' */
  real_T lastValues_mi[3];             /* '<S26>/MATLAB System12' */
  real_T lastMsg_p[400];               /* '<S26>/MATLAB System12' */
  real_T lastValues_nb[3];             /* '<S26>/MATLAB System11' */
  real_T lastMsg_d[400];               /* '<S26>/MATLAB System11' */
  real_T lastValues_a[6];              /* '<S26>/MATLAB System1' */
  real_T lastMsg_i[400];               /* '<S26>/MATLAB System1' */
  real_T lastValues_p[8];              /* '<S33>/MATLAB System5' */
  real_T lastMsg_g[400];               /* '<S33>/MATLAB System5' */
  real_T lastValues_f[8];              /* '<S32>/MATLAB System5' */
  real_T lastMsg_fk[400];              /* '<S32>/MATLAB System5' */
  real_T lastValues_k[13];             /* '<S32>/MATLAB System4' */
  real_T lastMsg_h[400];               /* '<S32>/MATLAB System4' */
  real_T lastValues_px[8];             /* '<S32>/MATLAB System3' */
  real_T lastMsg_ar[400];              /* '<S32>/MATLAB System3' */
  real_T lastValues_o[8];              /* '<S31>/MATLAB System5' */
  real_T lastMsg_m4[400];              /* '<S31>/MATLAB System5' */
  real_T lastValues_po[13];            /* '<S31>/MATLAB System4' */
  real_T lastMsg_lq[400];              /* '<S31>/MATLAB System4' */
  real_T lastValues_c[8];              /* '<S31>/MATLAB System3' */
  real_T lastMsg_g4[400];              /* '<S31>/MATLAB System3' */
  real_T lastValues_hk[8];             /* '<S30>/MATLAB System5' */
  real_T lastMsg_aa[400];              /* '<S30>/MATLAB System5' */
  real_T lastValues_hh[13];            /* '<S30>/MATLAB System4' */
  real_T lastMsg_gp[400];              /* '<S30>/MATLAB System4' */
  real_T lastValues_fd[8];             /* '<S30>/MATLAB System3' */
  real_T lastMsg_kz[400];              /* '<S30>/MATLAB System3' */
  real_T lastValues_e[8];              /* '<S29>/MATLAB System4' */
  real_T lastMsg_k3[400];              /* '<S29>/MATLAB System4' */
  real_T lastValues_dr[13];            /* '<S29>/MATLAB System3' */
  real_T lastMsg_c[400];               /* '<S29>/MATLAB System3' */
  real_T lastValues_i[8];              /* '<S29>/MATLAB System1' */
  real_T lastMsg_b[400];               /* '<S29>/MATLAB System1' */
  real_T NextOutput;                   /* '<S169>/Random Number' */
  real_T NextOutput_g;                 /* '<S169>/Random Number1' */
  real_T NextOutput_c;                 /* '<S169>/Random Number2' */
  real_T NextOutput_gg;                /* '<S234>/Random Number1' */
  real_T NextOutput_f;                 /* '<S234>/Random Number' */
  real_T NextOutput_cu;                /* '<S234>/Random Number2' */
  real_T P[169];                       /* '<S233>/DataStoreMemory - P' */
  real_T x[13];                        /* '<S233>/DataStoreMemory - x' */
  int32_T clockTickCounter;            /* '<S54>/Pulse Generator' */
  int32_T clockTickCounter_n;          /* '<S51>/Pulse Generator' */
  int32_T clockTickCounter_f;          /* '<S50>/Pulse Generator' */
  uint32_T RandSeed;                   /* '<S169>/Random Number' */
  uint32_T RandSeed_o;                 /* '<S169>/Random Number1' */
  uint32_T RandSeed_m;                 /* '<S169>/Random Number2' */
  uint32_T RandSeed_d;                 /* '<S234>/Random Number1' */
  uint32_T RandSeed_g;                 /* '<S234>/Random Number' */
  uint32_T RandSeed_j;                 /* '<S234>/Random Number2' */
  uint32_T m_bpIndex[8];               /* '<S49>/N to A' */
  uint32_T m_bpIndex_o[8];             /* '<S49>/n-D Lookup Table1' */
  matlabshared_tracking_interna_T obj_km;/* '<S237>/MATLAB System' */
  matlabshared_tracking_interna_T obj_ce;/* '<S236>/MATLAB System' */
  matlabshared_tracking_interna_T obj_on;/* '<S235>/MATLAB System' */
  matlabshared_tracking_inter_h_T obj_ih;/* '<S239>/MATLAB System' */
  uint16_T Delay_DSTATE_m[8];          /* '<S4>/Delay' */
  boolean_T Delay_DSTATE_ga;           /* '<S250>/Delay' */
  boolean_T done;                      /* '<S250>/MATLAB System1' */
  boolean_T DelayInput1_DSTATE;        /* '<S252>/Delay Input1' */
  boolean_T init_d;                    /* '<S245>/MATLAB System' */
  boolean_T done_p;                    /* '<S245>/MATLAB System' */
  boolean_T isThrusterFault[8];        /* '<S48>/MATLAB System' */
  boolean_T init_j;                    /* '<S50>/MATLAB System' */
  int8_T If_ActiveSubsystem;           /* '<S3>/If' */
  int8_T SwitchCase_ActiveSubsystem;   /* '<S6>/Switch Case' */
  int8_T If_ActiveSubsystem_b;         /* '<S4>/If' */
  int8_T SwitchCase_ActiveSubsystem_p; /* '<S47>/Switch Case' */
  boolean_T icLoad;                    /* '<S5>/Delay' */
  boolean_T objisempty;                /* '<S284>/SourceBlock' */
  boolean_T objisempty_p;              /* '<S283>/SourceBlock' */
  boolean_T objisempty_i;              /* '<S282>/SourceBlock' */
  boolean_T objisempty_n;              /* '<S281>/SourceBlock' */
  boolean_T objisempty_k;              /* '<S303>/SourceBlock' */
  boolean_T objisempty_g;              /* '<S302>/SourceBlock' */
  boolean_T objisempty_e;              /* '<S301>/SourceBlock' */
  boolean_T objisempty_pt;             /* '<S300>/SourceBlock' */
  boolean_T objisempty_c;              /* '<S299>/SinkBlock' */
  boolean_T objisempty_d;              /* '<S279>/SinkBlock' */
  boolean_T objisempty_h;              /* '<S278>/SinkBlock' */
  boolean_T objisempty_nu;             /* '<S277>/SinkBlock' */
  boolean_T objisempty_ih;             /* '<S276>/SinkBlock' */
  boolean_T objisempty_f;              /* '<S275>/SinkBlock' */
  boolean_T objisempty_l;              /* '<S264>/SourceBlock' */
  boolean_T objisempty_j;              /* '<S266>/Polynomial Trajectory' */
  boolean_T objisempty_jc;             /* '<S263>/Rotation Trajectory' */
  boolean_T objisempty_b;              /* '<S250>/MATLAB System1' */
  boolean_T objisempty_dr;             /* '<S250>/MATLAB System' */
  boolean_T objisempty_g4;             /* '<S245>/MATLAB System' */
  boolean_T objisempty_d5;             /* '<S259>/SourceBlock' */
  boolean_T objisempty_ek;             /* '<S257>/SourceBlock' */
  boolean_T objisempty_c5;             /* '<S255>/SinkBlock' */
  boolean_T objisempty_h0;             /* '<S239>/MATLAB System' */
  boolean_T objisempty_gu;             /* '<S237>/MATLAB System' */
  boolean_T objisempty_cx;             /* '<S236>/MATLAB System' */
  boolean_T objisempty_m;              /* '<S235>/MATLAB System' */
  boolean_T objisempty_kv;             /* '<S169>/Highpass Filter' */
  boolean_T isInitialized;             /* '<S169>/Highpass Filter' */
  boolean_T isInitialized_i;           /* '<S169>/Highpass Filter' */
  boolean_T objisempty_ba;             /* '<S151>/SourceBlock' */
  boolean_T objisempty_a;              /* '<S150>/SourceBlock' */
  boolean_T objisempty_ei;             /* '<S48>/MATLAB System' */
  boolean_T icLoad_j;                  /* '<S128>/mv_Delay' */
  boolean_T icLoad_g;                  /* '<S128>/x_Delay' */
  boolean_T icLoad_o;                  /* '<S128>/slack_delay' */
  boolean_T Memory_PreviousInput_g[226];/* '<S94>/Memory' */
  boolean_T objisempty_bn;             /* '<S52>/MATLAB System' */
  boolean_T Memory_PreviousInput_lu[226];/* '<S58>/Memory' */
  boolean_T objisempty_bnj;            /* '<S90>/SinkBlock' */
  boolean_T objisempty_bj;             /* '<S89>/Current Time' */
  boolean_T objisempty_ko;             /* '<S50>/MATLAB System' */
  boolean_T objisempty_dh;             /* '<S40>/SourceBlock' */
  boolean_T objisempty_ig;             /* '<S39>/SourceBlock' */
  boolean_T objisempty_hg;             /* '<S38>/SourceBlock' */
  boolean_T objisempty_ed;             /* '<S37>/SourceBlock' */
  boolean_T objisempty_gn;             /* '<S36>/SourceBlock' */
  boolean_T objisempty_o;              /* '<S35>/SourceBlock' */
  boolean_T objisempty_bb;             /* '<S24>/MATLAB System' */
  boolean_T objisempty_az;             /* '<S26>/Volume' */
  boolean_T objisempty_cz;             /* '<S26>/Thrusters' */
  boolean_T objisempty_gnx;            /* '<S26>/Sub Height' */
  boolean_T objisempty_ac;             /* '<S26>/Sonar Pose' */
  boolean_T objisempty_fn;             /* '<S26>/RHO' */
  boolean_T objisempty_k5;             /* '<S26>/RG' */
  boolean_T objisempty_ml;             /* '<S26>/RB' */
  boolean_T objisempty_or;             /* '<S26>/MATLAB System8' */
  boolean_T objisempty_ch;             /* '<S26>/MATLAB System7' */
  boolean_T objisempty_k5p;            /* '<S26>/MATLAB System6' */
  boolean_T objisempty_ab;             /* '<S26>/MATLAB System5' */
  boolean_T objisempty_c1;             /* '<S26>/MATLAB System4' */
  boolean_T objisempty_no;             /* '<S26>/MATLAB System3' */
  boolean_T objisempty_jt;             /* '<S26>/MATLAB System2' */
  boolean_T objisempty_ex;             /* '<S26>/MATLAB System12' */
  boolean_T objisempty_bq;             /* '<S26>/MATLAB System11' */
  boolean_T objisempty_fz;             /* '<S26>/MATLAB System1' */
  boolean_T objisempty_nt;             /* '<S26>/I' */
  boolean_T objisempty_czj;            /* '<S26>/Hydro Pose' */
  boolean_T objisempty_nf;             /* '<S26>/Get Parameter2' */
  boolean_T objisempty_jk;             /* '<S26>/G' */
  boolean_T objisempty_fm;             /* '<S26>/Depth Pose' */
  boolean_T objisempty_a2;             /* '<S26>/DVL Rotation' */
  boolean_T objisempty_lm;             /* '<S26>/DVL Lost Override' */
  boolean_T objisempty_ey;             /* '<S26>/CDQ' */
  boolean_T objisempty_jo;             /* '<S26>/CDL' */
  boolean_T objisempty_mf;             /* '<S26>/Added Mass' */
  boolean_T objisempty_l0;             /* '<S28>/Time In Tolerance' */
  boolean_T objisempty_p5;             /* '<S28>/Linear Tolerance' */
  boolean_T objisempty_aw;             /* '<S28>/Angular Tolerance' */
  boolean_T objisempty_jti;            /* '<S27>/T Min' */
  boolean_T objisempty_drx;            /* '<S27>/T Max' */
  boolean_T objisempty_l1;             /* '<S27>/P' */
  boolean_T objisempty_hgn;            /* '<S27>/M' */
  boolean_T objisempty_po;             /* '<S33>/MV' */
  boolean_T objisempty_kg;             /* '<S33>/MATLAB System5' */
  boolean_T objisempty_gh;             /* '<S32>/OV' */
  boolean_T objisempty_kw;             /* '<S32>/MVR' */
  boolean_T objisempty_nq;             /* '<S32>/MV' */
  boolean_T objisempty_iw;             /* '<S32>/MATLAB System5' */
  boolean_T objisempty_go;             /* '<S32>/MATLAB System4' */
  boolean_T objisempty_hm;             /* '<S32>/MATLAB System3' */
  boolean_T objisempty_m0;             /* '<S31>/OV' */
  boolean_T objisempty_gx;             /* '<S31>/MVR' */
  boolean_T objisempty_lo;             /* '<S31>/MV' */
  boolean_T objisempty_i4;             /* '<S31>/MATLAB System5' */
  boolean_T objisempty_ez;             /* '<S31>/MATLAB System4' */
  boolean_T objisempty_dy;             /* '<S31>/MATLAB System3' */
  boolean_T objisempty_eg;             /* '<S30>/OV' */
  boolean_T objisempty_d5g;            /* '<S30>/MVR' */
  boolean_T objisempty_fk;             /* '<S30>/MV' */
  boolean_T objisempty_ce;             /* '<S30>/MATLAB System5' */
  boolean_T objisempty_jn;             /* '<S30>/MATLAB System4' */
  boolean_T objisempty_ci;             /* '<S30>/MATLAB System3' */
  boolean_T objisempty_nr;             /* '<S29>/OV' */
  boolean_T objisempty_hs;             /* '<S29>/MVR' */
  boolean_T objisempty_oh;             /* '<S29>/MV' */
  boolean_T objisempty_nj;             /* '<S29>/MATLAB System4' */
  boolean_T objisempty_hk;             /* '<S29>/MATLAB System3' */
  boolean_T objisempty_n1;             /* '<S29>/MATLAB System1' */
  boolean_T objisempty_db;             /* '<S20>/SinkBlock' */
  boolean_T objisempty_iwm;            /* '<S19>/SinkBlock' */
  boolean_T objisempty_as;             /* '<S22>/SinkBlock' */
  boolean_T objisempty_m0x;            /* '<S15>/SinkBlock' */
  boolean_T objisempty_jo4;            /* '<S13>/Current Time' */
  boolean_T objisempty_fg;             /* '<S11>/SinkBlock' */
  boolean_T EnabledSubsystem_MODE;     /* '<S5>/Enabled Subsystem' */
  boolean_T DVLMeasurements_MODE;      /* '<S5>/DVL Measurements' */
  boolean_T EnabledSubsystem1_MODE;    /* '<Root>/Enabled Subsystem1' */
  boolean_T EnabledSubsystem_MODE_j;   /* '<Root>/Enabled Subsystem' */
  DW_MovingAverage_proc_contr_f_T MovingAverage2_p;/* '<S181>/Moving Average' */
  DW_MovingAverage_proc_contr_f_T MovingAverage1_p;/* '<S181>/Moving Average' */
  DW_MovingAverage_proc_contr_f_T MovingAverage_p;/* '<S181>/Moving Average' */
  DW_MovingAverage1_proc_contro_T MovingAverage8;/* '<S169>/Moving Average1' */
  DW_MovingAverage1_proc_contro_T MovingAverage7;/* '<S169>/Moving Average1' */
  DW_MovingAverage1_proc_contro_T MovingAverage6;/* '<S169>/Moving Average1' */
  DW_MovingAverage_proc_control_T MovingAverage5;/* '<S169>/Moving Average' */
  DW_MovingAverage_proc_control_T MovingAverage4;/* '<S169>/Moving Average' */
  DW_MovingAverage1_proc_contro_T MovingAverage3;/* '<S169>/Moving Average1' */
  DW_MovingAverage1_proc_contro_T MovingAverage2;/* '<S169>/Moving Average1' */
  DW_MovingAverage1_proc_contro_T MovingAverage1;/* '<S169>/Moving Average1' */
  DW_MovingAverage_proc_control_T MovingAverage;/* '<S169>/Moving Average' */
  DW_LowpassFilter_proc_control_T LowpassFilter2;/* '<S169>/Lowpass Filter' */
  DW_LowpassFilter_proc_control_T LowpassFilter1;/* '<S169>/Lowpass Filter' */
  DW_LowpassFilter_proc_control_T LowpassFilter;/* '<S169>/Lowpass Filter' */
  DW_HighpassFilter1_proc_contr_T HighpassFilter2;/* '<S169>/Highpass Filter1' */
  DW_HighpassFilter1_proc_contr_T HighpassFilter1;/* '<S169>/Highpass Filter1' */
};

/* Zero-crossing (trigger) state */
struct PrevZCX_proc_control_lite_T {
  ZCSigState ResettableSubsystem_Reset_ZCE;/* '<S250>/Resettable Subsystem' */
};

/* Parameters for system: '<S35>/Enabled Subsystem' */
struct P_EnabledSubsystem_proc_contr_T_ {
  SL_Bus_std_msgs_Bool Out1_Y0;        /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S41>/Out1'
                                        */
};

/* Parameters for system: '<S300>/Enabled Subsystem' */
struct P_EnabledSubsystem_proc_con_p_T_ {
  SL_Bus_std_msgs_Float32 Out1_Y0;     /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S304>/Out1'
                                        */
};

/* Parameters for system: '<S301>/Enabled Subsystem' */
struct P_EnabledSubsystem_proc_co_pu_T_ {
  SL_Bus_sonia_common_ros2_BodyVelocityDVL Out1_Y0;/* Computed Parameter: Out1_Y0
                                                    * Referenced by: '<S305>/Out1'
                                                    */
};

/* Parameters for system: '<S302>/Enabled Subsystem' */
struct P_EnabledSubsystem_proc_con_m_T_ {
  SL_Bus_sensor_msgs_Imu Out1_Y0;      /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S306>/Out1'
                                        */
};

/* Parameters (default storage) */
struct P_proc_control_lite_T_ {
  struct_72FZU0bzvPLwZ2S2uz9PiD physics;/* Variable: physics
                                         * Referenced by: '<S52>/MATLAB System'
                                         */
  struct_x7JWpgYpPywnYpZFC6VmZH mode;  /* Variable: mode
                                        * Referenced by: '<S24>/MATLAB System'
                                        */
  real_T N[201];                       /* Variable: N
                                        * Referenced by:
                                        *   '<S49>/N to A'
                                        *   '<S49>/n-D Lookup Table1'
                                        */
  real_T binv[48];                     /* Variable: binv
                                        * Referenced by: '<S52>/MATLAB System'
                                        */
  struct_lestj3Cmqe3cAicxMA7epG config;/* Variable: config
                                        * Referenced by:
                                        *   '<S274>/Constant3'
                                        *   '<S234>/Constant3'
                                        *   '<S234>/Constant4'
                                        */
  uint16_T A[201];                     /* Variable: A
                                        * Referenced by: '<S49>/N to A'
                                        */
  uint16_T PWM[201];                   /* Variable: PWM
                                        * Referenced by: '<S49>/n-D Lookup Table1'
                                        */
  real_T DiscreteDerivative_ICPrevScaled;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScaled
                               * Referenced by: '<S124>/UD'
                               */
  real_T DiscreteDerivative_ICPrevScal_e;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScal_e
                               * Referenced by: '<S173>/UD'
                               */
  real_T MinMaxRunningResettable2_vinit;
                               /* Mask Parameter: MinMaxRunningResettable2_vinit
                                * Referenced by:
                                *   '<S296>/Initial Condition'
                                *   '<S296>/Memory'
                                */
  boolean_T DetectRisePositive_vinit;/* Mask Parameter: DetectRisePositive_vinit
                                      * Referenced by: '<S252>/Delay Input1'
                                      */
  boolean_T MinMaxRunningResettable_vinit;
                                /* Mask Parameter: MinMaxRunningResettable_vinit
                                 * Referenced by:
                                 *   '<S294>/Initial Condition'
                                 *   '<S294>/Memory'
                                 */
  boolean_T MinMaxRunningResettable1_vinit;
                               /* Mask Parameter: MinMaxRunningResettable1_vinit
                                * Referenced by:
                                *   '<S295>/Initial Condition'
                                *   '<S295>/Memory'
                                */
  boolean_T MinMaxRunningResettable3_vinit;
                               /* Mask Parameter: MinMaxRunningResettable3_vinit
                                * Referenced by:
                                *   '<S297>/Initial Condition'
                                *   '<S297>/Memory'
                                */
  SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint Out1_Y0;/* Computed Parameter: Out1_Y0
                                                               * Referenced by: '<S260>/Out1'
                                                               */
  SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint Constant_Value;/* Computed Parameter: Constant_Value
                                                                      * Referenced by: '<S259>/Constant'
                                                                      */
  SL_Bus_std_msgs_Float64MultiArray Out1_Y0_n;/* Computed Parameter: Out1_Y0_n
                                               * Referenced by: '<S153>/Out1'
                                               */
  SL_Bus_std_msgs_Float64MultiArray Constant_Value_j;/* Computed Parameter: Constant_Value_j
                                                      * Referenced by: '<S151>/Constant'
                                                      */
  SL_Bus_sonia_common_ros2_MpcInfo Constant_Value_k;/* Computed Parameter: Constant_Value_k
                                                     * Referenced by: '<S21>/Constant'
                                                     */
  SL_Bus_sonia_common_ros2_MpcGains Out1_Y0_b;/* Computed Parameter: Out1_Y0_b
                                               * Referenced by: '<S152>/Out1'
                                               */
  SL_Bus_sonia_common_ros2_MpcGains Constant_Value_h;/* Computed Parameter: Constant_Value_h
                                                      * Referenced by: '<S150>/Constant'
                                                      */
  mpcParams mpcParams_Y0;              /* Computed Parameter: mpcParams_Y0
                                        * Referenced by: '<S23>/mpcParams'
                                        */
  SL_Bus_nav_msgs_Odometry Constant_Value_g;/* Computed Parameter: Constant_Value_g
                                             * Referenced by: '<S12>/Constant'
                                             */
  SL_Bus_nav_msgs_Odometry Constant_Value_f;/* Computed Parameter: Constant_Value_f
                                             * Referenced by: '<S88>/Constant'
                                             */
  physicsConstants physicsConstants_Y0;
                                      /* Computed Parameter: physicsConstants_Y0
                                       * Referenced by: '<S23>/physicsConstants'
                                       */
  SL_Bus_sensor_msgs_Imu Constant_Value_p;/* Computed Parameter: Constant_Value_p
                                           * Referenced by: '<S302>/Constant'
                                           */
  SL_Bus_sensor_msgs_Imu Constant_Value_fw;/* Computed Parameter: Constant_Value_fw
                                            * Referenced by: '<S303>/Constant'
                                            */
  SL_Bus_sensor_msgs_Imu Constant_Value_n;/* Computed Parameter: Constant_Value_n
                                           * Referenced by: '<S283>/Constant'
                                           */
  SL_Bus_sensor_msgs_Imu Merge7_InitialOutput;
                                     /* Computed Parameter: Merge7_InitialOutput
                                      * Referenced by: '<S7>/Merge7'
                                      */
  struct_eJsqWOClzwG18rBvtrhWOG MPCparam_Y0;/* Computed Parameter: MPCparam_Y0
                                             * Referenced by: '<S48>/MPC param'
                                             */
  SL_Bus_sonia_common_ros2_BodyVelocityDVL Constant_Value_c;/* Computed Parameter: Constant_Value_c
                                                             * Referenced by: '<S301>/Constant'
                                                             */
  SL_Bus_sonia_common_ros2_BodyVelocityDVL Constant_Value_a;/* Computed Parameter: Constant_Value_a
                                                             * Referenced by: '<S282>/Constant'
                                                             */
  struct_dhOFexlPAOq1XLxIBHN1J Output_Y0;/* Computed Parameter: Output_Y0
                                          * Referenced by: '<S1>/Output'
                                          */
  SL_Bus_sonia_common_ros2_Pose Out1_Y0_d;/* Computed Parameter: Out1_Y0_d
                                           * Referenced by: '<S267>/Out1'
                                           */
  SL_Bus_sonia_common_ros2_Pose Constant_Value_f4;/* Computed Parameter: Constant_Value_f4
                                                   * Referenced by: '<S264>/Constant'
                                                   */
  SL_Bus_geometry_msgs_Pose Out1_Y0_a; /* Computed Parameter: Out1_Y0_a
                                        * Referenced by: '<S44>/Out1'
                                        */
  SL_Bus_geometry_msgs_Pose Constant_Value_ja;/* Computed Parameter: Constant_Value_ja
                                               * Referenced by: '<S38>/Constant'
                                               */
  SL_Bus_geometry_msgs_Pose Constant_Value_o;/* Computed Parameter: Constant_Value_o
                                              * Referenced by: '<S254>/Constant'
                                              */
  struct_TOFpsJJYcOBczOpEd57stD DVLMeasurements_Y0;/* Computed Parameter: DVLMeasurements_Y0
                                                    * Referenced by: '<S156>/DVL Measurements'
                                                    */
  SL_Bus_geometry_msgs_Twist Out1_Y0_f;/* Computed Parameter: Out1_Y0_f
                                        * Referenced by: '<S258>/Out1'
                                        */
  SL_Bus_geometry_msgs_Twist Constant_Value_oo;/* Computed Parameter: Constant_Value_oo
                                                * Referenced by: '<S257>/Constant'
                                                */
  SL_Bus_sonia_common_ros2_MotorPwm Constant_Value_ki;/* Computed Parameter: Constant_Value_ki
                                                       * Referenced by: '<S16>/Constant'
                                                       */
  SL_Bus_sonia_common_ros2_MotorPwm Constant_Value_m;/* Computed Parameter: Constant_Value_m
                                                      * Referenced by: '<S17>/Constant'
                                                      */
  SL_Bus_sonia_common_ros2_KillStatus Out1_Y0_o;/* Computed Parameter: Out1_Y0_o
                                                 * Referenced by: '<S45>/Out1'
                                                 */
  SL_Bus_sonia_common_ros2_KillStatus Constant_Value_e;/* Computed Parameter: Constant_Value_e
                                                        * Referenced by: '<S39>/Constant'
                                                        */
  SL_Bus_std_msgs_Bool Constant_Value_cc;/* Computed Parameter: Constant_Value_cc
                                          * Referenced by: '<S10>/Constant'
                                          */
  SL_Bus_std_msgs_Bool Constant_Value_ht;/* Computed Parameter: Constant_Value_ht
                                          * Referenced by: '<S298>/Constant'
                                          */
  SL_Bus_std_msgs_Bool Constant_Value_l;/* Computed Parameter: Constant_Value_l
                                         * Referenced by: '<S284>/Constant'
                                         */
  SL_Bus_std_msgs_Bool Constant_Value_oy;/* Computed Parameter: Constant_Value_oy
                                          * Referenced by: '<S37>/Constant'
                                          */
  SL_Bus_std_msgs_Bool Constant_Value_oc;/* Computed Parameter: Constant_Value_oc
                                          * Referenced by: '<S40>/Constant'
                                          */
  SL_Bus_std_msgs_Bool Constant_Value_ha;/* Computed Parameter: Constant_Value_ha
                                          * Referenced by: '<S35>/Constant'
                                          */
  SL_Bus_std_msgs_Bool Constant_Value_c0;/* Computed Parameter: Constant_Value_c0
                                          * Referenced by: '<S269>/Constant'
                                          */
  SL_Bus_std_msgs_Bool Constant_Value_oh;/* Computed Parameter: Constant_Value_oh
                                          * Referenced by: '<S270>/Constant'
                                          */
  SL_Bus_std_msgs_Bool Constant_Value_ps;/* Computed Parameter: Constant_Value_ps
                                          * Referenced by: '<S271>/Constant'
                                          */
  SL_Bus_std_msgs_Bool Constant_Value_b;/* Computed Parameter: Constant_Value_b
                                         * Referenced by: '<S272>/Constant'
                                         */
  SL_Bus_std_msgs_Bool Constant_Value_gi;/* Computed Parameter: Constant_Value_gi
                                          * Referenced by: '<S273>/Constant'
                                          */
  SL_Bus_std_msgs_Float32 Constant_Value_d;/* Computed Parameter: Constant_Value_d
                                            * Referenced by: '<S300>/Constant'
                                            */
  SL_Bus_std_msgs_Float32 Constant_Value_cf;/* Computed Parameter: Constant_Value_cf
                                             * Referenced by: '<S281>/Constant'
                                             */
  SL_Bus_std_msgs_UInt8 Out1_Y0_fy;    /* Computed Parameter: Out1_Y0_fy
                                        * Referenced by: '<S42>/Out1'
                                        */
  SL_Bus_std_msgs_UInt8 Constant_Value_dx;/* Computed Parameter: Constant_Value_dx
                                           * Referenced by: '<S36>/Constant'
                                           */
  real_T Constant_Value_gj;            /* Expression: InsertTimeStamp
                                        * Referenced by: '<S13>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: SetFrameID
                                        * Referenced by: '<S13>/Constant1'
                                        */
  real_T thrust_Y0;                    /* Computed Parameter: thrust_Y0
                                        * Referenced by: '<S2>/thrust'
                                        */
  real_T Constant_Value_e2[120];       /* Expression: zeros(1,120)
                                        * Referenced by: '<S18>/Constant'
                                        */
  real_T Constant1_Value_h[115];       /* Expression: zeros(1,115)
                                        * Referenced by: '<S18>/Constant1'
                                        */
  real_T Constant3_Value[120];         /* Expression: zeros(1,120)
                                        * Referenced by: '<S18>/Constant3'
                                        */
  real_T Constant4_Value[120];         /* Expression: zeros(1,120)
                                        * Referenced by: '<S18>/Constant4'
                                        */
  real_T Constant_Value_lq;            /* Expression: InsertTimeStamp
                                        * Referenced by: '<S89>/Constant'
                                        */
  real_T Constant1_Value_l;            /* Expression: SetFrameID
                                        * Referenced by: '<S89>/Constant1'
                                        */
  real_T Delay_InitialCondition[8];    /* Expression: zeros(MPC.nu,1)
                                        * Referenced by: '<S50>/Delay'
                                        */
  real_T E_zero_Value[8];              /* Expression: zeros(1,8)
                                        * Referenced by: '<S55>/E_zero'
                                        */
  real_T F_zero_Value[13];             /* Expression: zeros(1,13)
                                        * Referenced by: '<S55>/F_zero'
                                        */
  real_T G_zero_Value;                 /* Expression: zeros(1,1)
                                        * Referenced by: '<S55>/G_zero'
                                        */
  real_T Constant_Value_aa;            /* Computed Parameter: Constant_Value_aa
                                        * Referenced by: '<S58>/Constant'
                                        */
  real_T LastPcov_InitialCondition[441];/* Expression: lastPcov
                                         * Referenced by: '<S58>/LastPcov'
                                         */
  real_T extmv_zero_Value[8];          /* Expression: zeros(8,1)
                                        * Referenced by: '<S55>/ext.mv_zero'
                                        */
  real_T extmv_scale_Gain[8];          /* Expression: RMVscale
                                        * Referenced by: '<S58>/ext.mv_scale'
                                        */
  real_T last_mv_InitialCondition[8];  /* Expression: lastu+uoff
                                        * Referenced by: '<S58>/last_mv'
                                        */
  real_T Constant_Value_o1[6];         /* Expression: zeros(1,6)
                                        * Referenced by: '<S50>/Constant'
                                        */
  real_T Constant1_Value_g[2];         /* Expression: zeros(1,2)
                                        * Referenced by: '<S50>/Constant1'
                                        */
  real_T ym_zero_Value[13];            /* Expression: zeros(nym,1)
                                        * Referenced by: '<S58>/ym_zero'
                                        */
  real_T md_zero_Value;                /* Expression: zeros(1,1)
                                        * Referenced by: '<S55>/md_zero'
                                        */
  real_T ymin_zero_Value[13];          /* Expression: zeros(13,1)
                                        * Referenced by: '<S55>/ymin_zero'
                                        */
  real_T ymax_zero_Value[13];          /* Expression: zeros(13,1)
                                        * Referenced by: '<S55>/ymax_zero'
                                        */
  real_T umin_scale4_Gain[8];      /* Expression: MVscale(:,ones(1,max(nCC,1)))'
                                    * Referenced by: '<S58>/umin_scale4'
                                    */
  real_T ymin_scale1_Gain[13];      /* Expression: Yscale(:,ones(1,max(nCC,1)))'
                                     * Referenced by: '<S58>/ymin_scale1'
                                     */
  real_T S_zero_Value;                 /* Expression: zeros(1,1)
                                        * Referenced by: '<S55>/S_zero'
                                        */
  real_T ymin_scale2_Gain;         /* Expression: MDscale(:,ones(1,max(nCC,1)))'
                                    * Referenced by: '<S58>/ymin_scale2'
                                    */
  real_T switch_zero_Value;            /* Expression: zeros(1,1)
                                        * Referenced by: '<S55>/switch_zero'
                                        */
  real_T mvtarget_zero_Value[8];       /* Expression: zeros(8,1)
                                        * Referenced by: '<S55>/mv.target_zero'
                                        */
  real_T uref_scale_Gain[8];           /* Expression: RMVscale
                                        * Referenced by: '<S58>/uref_scale'
                                        */
  real_T ecrwt_zero_Value;             /* Expression: zeros(1,1)
                                        * Referenced by: '<S55>/ecr.wt_zero'
                                        */
  real_T u_scale_Gain[8];              /* Expression: MVscale
                                        * Referenced by: '<S58>/u_scale'
                                        */
  real_T PulseGenerator_Amp;           /* Expression: 1
                                        * Referenced by: '<S50>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period;        /* Expression: 2
                                        * Referenced by: '<S50>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty;          /* Expression: 1
                                        * Referenced by: '<S50>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay;    /* Expression: 0
                                        * Referenced by: '<S50>/Pulse Generator'
                                        */
  real_T MATLABSystem_k;               /* Expression: 40
                                        * Referenced by: '<S52>/MATLAB System'
                                        */
  real_T Constant1_Value_g0;           /* Expression: 0
                                        * Referenced by: '<S52>/Constant1'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S124>/TSamp'
                                        */
  real_T E_zero_Value_a[8];            /* Expression: zeros(1,8)
                                        * Referenced by: '<S91>/E_zero'
                                        */
  real_T F_zero_Value_h[13];           /* Expression: zeros(1,13)
                                        * Referenced by: '<S91>/F_zero'
                                        */
  real_T G_zero_Value_l;               /* Expression: zeros(1,1)
                                        * Referenced by: '<S91>/G_zero'
                                        */
  real_T LastPcov_InitialCondition_l[441];/* Expression: lastPcov
                                           * Referenced by: '<S94>/LastPcov'
                                           */
  real_T extmv_zero_Value_i[8];        /* Expression: zeros(8,1)
                                        * Referenced by: '<S91>/ext.mv_zero'
                                        */
  real_T extmv_scale_Gain_m[8];        /* Expression: RMVscale
                                        * Referenced by: '<S94>/ext.mv_scale'
                                        */
  real_T last_mv_InitialCondition_k[8];/* Expression: lastu+uoff
                                        * Referenced by: '<S94>/last_mv'
                                        */
  real_T Constant2_Value[8];           /* Expression: zeros(1,8)
                                        * Referenced by: '<S51>/Constant2'
                                        */
  real_T ym_zero_Value_a[13];          /* Expression: zeros(nym,1)
                                        * Referenced by: '<S94>/ym_zero'
                                        */
  real_T md_zero_Value_l;              /* Expression: zeros(1,1)
                                        * Referenced by: '<S91>/md_zero'
                                        */
  real_T ymin_zero_Value_e[13];        /* Expression: zeros(13,1)
                                        * Referenced by: '<S91>/ymin_zero'
                                        */
  real_T ymax_zero_Value_d[13];        /* Expression: zeros(13,1)
                                        * Referenced by: '<S91>/ymax_zero'
                                        */
  real_T umin_scale4_Gain_f[8];    /* Expression: MVscale(:,ones(1,max(nCC,1)))'
                                    * Referenced by: '<S94>/umin_scale4'
                                    */
  real_T ymin_scale1_Gain_p[13];    /* Expression: Yscale(:,ones(1,max(nCC,1)))'
                                     * Referenced by: '<S94>/ymin_scale1'
                                     */
  real_T S_zero_Value_m;               /* Expression: zeros(1,1)
                                        * Referenced by: '<S91>/S_zero'
                                        */
  real_T ymin_scale2_Gain_h;       /* Expression: MDscale(:,ones(1,max(nCC,1)))'
                                    * Referenced by: '<S94>/ymin_scale2'
                                    */
  real_T switch_zero_Value_m;          /* Expression: zeros(1,1)
                                        * Referenced by: '<S91>/switch_zero'
                                        */
  real_T mvtarget_zero_Value_c[8];     /* Expression: zeros(8,1)
                                        * Referenced by: '<S91>/mv.target_zero'
                                        */
  real_T uref_scale_Gain_f[8];         /* Expression: RMVscale
                                        * Referenced by: '<S94>/uref_scale'
                                        */
  real_T ecrwt_zero_Value_o;           /* Expression: zeros(1,1)
                                        * Referenced by: '<S91>/ecr.wt_zero'
                                        */
  real_T Delay1_InitialCondition[88];  /* Expression: zeros(11,8)
                                        * Referenced by: '<S51>/Delay1'
                                        */
  real_T Delay_InitialCondition_g[143];/* Expression: repmat(MPC.Xi.',11,1)
                                        * Referenced by: '<S51>/Delay'
                                        */
  real_T Constant_Value_ce;            /* Expression: MPC.Ts
                                        * Referenced by: '<S51>/Constant'
                                        */
  real_T Constant1_Value_gt;           /* Expression: MPC.dts
                                        * Referenced by: '<S51>/Constant1'
                                        */
  real_T u_scale_Gain_o[8];            /* Expression: MVscale
                                        * Referenced by: '<S94>/u_scale'
                                        */
  real_T useq_scale_Gain[88];          /* Expression: MVscale(:,ones(1,p+1))'
                                        * Referenced by: '<S94>/useq_scale'
                                        */
  real_T useq_scale1_Gain[143];        /* Expression: Yscale(:,ones(1,p+1))'
                                        * Referenced by: '<S94>/useq_scale1'
                                        */
  real_T PulseGenerator_Amp_a;         /* Expression: 1
                                        * Referenced by: '<S51>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period_d;      /* Expression: 2
                                        * Referenced by: '<S51>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty_l;        /* Expression: 1
                                        * Referenced by: '<S51>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay_l;  /* Expression: 0
                                        * Referenced by: '<S51>/Pulse Generator'
                                        */
  real_T Delay_InitialCondition_a[8];  /* Expression: zeros(MPC.nu,1)
                                        * Referenced by: '<S54>/Delay'
                                        */
  real_T md_zero_Value_j;              /* Expression: zeros(1,1)
                                        * Referenced by: '<S126>/md_zero'
                                        */
  real_T mvtarget_zero_Value_f[8];     /* Expression: zeros(8,1)
                                        * Referenced by: '<S126>/mv.target_zero'
                                        */
  real_T ymin_zero_Value_b[13];        /* Expression: zeros(13,1)
                                        * Referenced by: '<S126>/y.min_zero'
                                        */
  real_T ymax_zero_Value_e[13];        /* Expression: zeros(13,1)
                                        * Referenced by: '<S126>/y.max_zero'
                                        */
  real_T dmvmin_zero_Value[8];         /* Expression: zeros(8,1)
                                        * Referenced by: '<S126>/dmv.min_zero'
                                        */
  real_T dmvmax_zero_Value[8];         /* Expression: zeros(8,1)
                                        * Referenced by: '<S126>/dmv.max_zero'
                                        */
  real_T xmin_zero_Value[13];          /* Expression: zeros(13,1)
                                        * Referenced by: '<S126>/x.min_zero'
                                        */
  real_T xmax_zero_Value[13];          /* Expression: zeros(13,1)
                                        * Referenced by: '<S126>/x.max_zero'
                                        */
  real_T ecrwt_zero_Value_b;           /* Expression: zeros(1,1)
                                        * Referenced by: '<S126>/ecr.wt_zero'
                                        */
  real_T params_zero_Value;            /* Expression: zeros(1,1)
                                        * Referenced by: '<S126>/params_zero'
                                        */
  real_T ones_Value[11];              /* Expression: ones(PredictionHorizon+1,1)
                                       * Referenced by: '<S128>/ones'
                                       */
  real_T Constant1_Value_i[9];         /* Expression: 2:max(2,PredictionHorizon)
                                        * Referenced by: '<S128>/Constant1'
                                        */
  real_T Constant_Value_ld[9];
                 /* Expression: min(3,PredictionHorizon+1):(PredictionHorizon+1)
                  * Referenced by: '<S128>/Constant'
                  */
  real_T einit_zero_Value;             /* Expression: zeros(1,1)
                                        * Referenced by: '<S126>/e.init_zero'
                                        */
  real_T PulseGenerator_Amp_n;         /* Expression: 1
                                        * Referenced by: '<S54>/Pulse Generator'
                                        */
  real_T PulseGenerator_Period_f;      /* Expression: 20
                                        * Referenced by: '<S54>/Pulse Generator'
                                        */
  real_T PulseGenerator_Duty_c;        /* Expression: 10
                                        * Referenced by: '<S54>/Pulse Generator'
                                        */
  real_T PulseGenerator_PhaseDelay_l5; /* Expression: 0
                                        * Referenced by: '<S54>/Pulse Generator'
                                        */
  real_T Constant_Value_g3[8];         /* Expression: zeros(1,MPC.nu)
                                        * Referenced by: '<S53>/Constant'
                                        */
  real_T Constant2_Value_n;            /* Expression: 0
                                        * Referenced by: '<S53>/Constant2'
                                        */
  real_T Merge_1_InitialOutput;     /* Computed Parameter: Merge_1_InitialOutput
                                     * Referenced by: '<S47>/Merge'
                                     */
  real_T Merge_3_InitialOutput;     /* Computed Parameter: Merge_3_InitialOutput
                                     * Referenced by: '<S47>/Merge'
                                     */
  real_T Delay_InitialCondition_c;     /* Expression: 0.0
                                        * Referenced by: '<S49>/Delay'
                                        */
  real_T Out1_Y0_h;                    /* Computed Parameter: Out1_Y0_h
                                        * Referenced by: '<S180>/Out1'
                                        */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<S180>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_IC[3]; /* Expression: [0,0,0]
                                        * Referenced by: '<S180>/Discrete-Time Integrator'
                                        */
  real_T Out1_Y0_g;                    /* Computed Parameter: Out1_Y0_g
                                        * Referenced by: '<S181>/Out1'
                                        */
  real_T Gain_Gain;                    /* Expression: 2
                                        * Referenced by: '<S206>/Gain'
                                        */
  real_T Constant_Value_hf;            /* Expression: 0.5
                                        * Referenced by: '<S206>/Constant'
                                        */
  real_T Gain2_Gain;                   /* Expression: 2
                                        * Referenced by: '<S206>/Gain2'
                                        */
  real_T Gain1_Gain;                   /* Expression: 2
                                        * Referenced by: '<S206>/Gain1'
                                        */
  real_T Gain_Gain_m;                  /* Expression: 2
                                        * Referenced by: '<S207>/Gain'
                                        */
  real_T Gain1_Gain_i;                 /* Expression: 2
                                        * Referenced by: '<S207>/Gain1'
                                        */
  real_T Constant_Value_bs;            /* Expression: 0.5
                                        * Referenced by: '<S207>/Constant'
                                        */
  real_T Gain2_Gain_h;                 /* Expression: 2
                                        * Referenced by: '<S207>/Gain2'
                                        */
  real_T Constant_Value_nn;            /* Expression: 0.5
                                        * Referenced by: '<S205>/Constant'
                                        */
  real_T Gain2_Gain_m;                 /* Expression: 2
                                        * Referenced by: '<S205>/Gain2'
                                        */
  real_T Gain_Gain_c;                  /* Expression: 2
                                        * Referenced by: '<S205>/Gain'
                                        */
  real_T Gain1_Gain_e;                 /* Expression: 2
                                        * Referenced by: '<S205>/Gain1'
                                        */
  real_T Quat_Y0;                      /* Computed Parameter: Quat_Y0
                                        * Referenced by: '<S217>/Quat'
                                        */
  real_T u2_Gain;                      /* Expression: 0.5
                                        * Referenced by: '<S218>/1//2'
                                        */
  real_T Constant_Value_i;   /* Expression: simulation.sensors.dvl.maxSpeedThres
                              * Referenced by: '<S156>/Constant'
                              */
  real_T Delay_InitialCondition_f;     /* Expression: 1
                                        * Referenced by: '<S214>/Delay'
                                        */
  real_T Constant_Value_or;            /* Expression: 0.5
                                        * Referenced by: '<S220>/Constant'
                                        */
  real_T Gain2_Gain_n;                 /* Expression: 2
                                        * Referenced by: '<S220>/Gain2'
                                        */
  real_T Gain_Gain_g;                  /* Expression: 2
                                        * Referenced by: '<S220>/Gain'
                                        */
  real_T Gain1_Gain_o;                 /* Expression: 2
                                        * Referenced by: '<S220>/Gain1'
                                        */
  real_T Gain_Gain_gs;                 /* Expression: 2
                                        * Referenced by: '<S221>/Gain'
                                        */
  real_T Constant_Value_mz;            /* Expression: 0.5
                                        * Referenced by: '<S221>/Constant'
                                        */
  real_T Gain2_Gain_j;                 /* Expression: 2
                                        * Referenced by: '<S221>/Gain2'
                                        */
  real_T Gain1_Gain_j;                 /* Expression: 2
                                        * Referenced by: '<S221>/Gain1'
                                        */
  real_T Gain_Gain_e;                  /* Expression: 2
                                        * Referenced by: '<S222>/Gain'
                                        */
  real_T Gain1_Gain_ex;                /* Expression: 2
                                        * Referenced by: '<S222>/Gain1'
                                        */
  real_T Constant_Value_j5;            /* Expression: 0.5
                                        * Referenced by: '<S222>/Constant'
                                        */
  real_T Gain2_Gain_hu;                /* Expression: 2
                                        * Referenced by: '<S222>/Gain2'
                                        */
  real_T Constant_Value_ll;            /* Expression: 0
                                        * Referenced by: '<S214>/Constant'
                                        */
  real_T DepthMeasurements_Y0;       /* Computed Parameter: DepthMeasurements_Y0
                                      * Referenced by: '<S157>/Depth Measurements'
                                      */
  real_T Constant_Value_bc;            /* Expression: 0.5
                                        * Referenced by: '<S230>/Constant'
                                        */
  real_T Gain_Gain_ch;                 /* Expression: 2
                                        * Referenced by: '<S230>/Gain'
                                        */
  real_T Gain1_Gain_p;                 /* Expression: 2
                                        * Referenced by: '<S230>/Gain1'
                                        */
  real_T Gain2_Gain_e;                 /* Expression: 2
                                        * Referenced by: '<S230>/Gain2'
                                        */
  real_T Constant_Value_gx;            /* Expression: 0
                                        * Referenced by: '<S234>/Constant'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S234>/Switch'
                                        */
  real_T Constant1_Value_ih;           /* Expression: 0
                                        * Referenced by: '<S234>/Constant1'
                                        */
  real_T xhat_Y0;                      /* Computed Parameter: xhat_Y0
                                        * Referenced by: '<S158>/xhat'
                                        */
  real_T R3_Value;                     /* Expression: p.R{3}
                                        * Referenced by: '<S233>/R3'
                                        */
  real_T MeasurementFcn3Inputs_Value;  /* Expression: 1
                                        * Referenced by: '<S233>/MeasurementFcn3Inputs'
                                        */
  real_T RandomNumber1_Mean;           /* Expression: 0
                                        * Referenced by: '<S234>/Random Number1'
                                        */
  real_T RandomNumber1_StdDev;       /* Computed Parameter: RandomNumber1_StdDev
                                      * Referenced by: '<S234>/Random Number1'
                                      */
  real_T RandomNumber1_Seed;           /* Expression: 525886
                                        * Referenced by: '<S234>/Random Number1'
                                        */
  real_T RandomNumber_Mean;            /* Expression: 0
                                        * Referenced by: '<S234>/Random Number'
                                        */
  real_T RandomNumber_StdDev;         /* Computed Parameter: RandomNumber_StdDev
                                       * Referenced by: '<S234>/Random Number'
                                       */
  real_T RandomNumber_Seed;            /* Expression: 1
                                        * Referenced by: '<S234>/Random Number'
                                        */
  real_T RandomNumber2_Mean;           /* Expression: 0
                                        * Referenced by: '<S234>/Random Number2'
                                        */
  real_T RandomNumber2_StdDev;       /* Computed Parameter: RandomNumber2_StdDev
                                      * Referenced by: '<S234>/Random Number2'
                                      */
  real_T RandomNumber2_Seed;           /* Expression: 4
                                        * Referenced by: '<S234>/Random Number2'
                                        */
  real_T Switch2_Threshold;            /* Expression: 0
                                        * Referenced by: '<S234>/Switch2'
                                        */
  real_T R2_Value[9];                  /* Expression: p.R{2}
                                        * Referenced by: '<S233>/R2'
                                        */
  real_T MeasurementFcn2Inputs_Value;  /* Expression: 1
                                        * Referenced by: '<S233>/MeasurementFcn2Inputs'
                                        */
  real_T R1_Value[100];                /* Expression: p.R{1}
                                        * Referenced by: '<S233>/R1'
                                        */
  real_T MeasurementFcn1Inputs_Value;  /* Expression: 0
                                        * Referenced by: '<S233>/MeasurementFcn1Inputs'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<S234>/Switch1'
                                        */
  real_T Q_Value[169];                 /* Expression: p.Q
                                        * Referenced by: '<S233>/Q'
                                        */
  real_T DataStoreMemoryP_InitialValue[169];/* Expression: p.InitialCovariance
                                             * Referenced by: '<S233>/DataStoreMemory - P'
                                             */
  real_T DataStoreMemoryx_InitialValue[13];/* Expression: p.InitialState
                                            * Referenced by: '<S233>/DataStoreMemory - x'
                                            */
  real_T Constant_Value_l4[7];         /* Expression: [0 0 0 1 0 0 0]
                                        * Referenced by: '<S247>/Constant'
                                        */
  real_T Constant1_Value_hu;           /* Expression: MPC.p
                                        * Referenced by: '<S247>/Constant1'
                                        */
  real_T Out1_Y0_j;                    /* Computed Parameter: Out1_Y0_j
                                        * Referenced by: '<S261>/Out1'
                                        */
  real_T MATLABSystem1_linearConvergence;/* Expression: .25
                                          * Referenced by: '<S250>/MATLAB System1'
                                          */
  real_T MATLABSystem1_quaternionConverg;/* Expression: .22
                                          * Referenced by: '<S250>/MATLAB System1'
                                          */
  real_T MATLABSystem1_TargetThreshold;/* Expression: 2
                                        * Referenced by: '<S250>/MATLAB System1'
                                        */
  real_T linWpts_Y0;                   /* Computed Parameter: linWpts_Y0
                                        * Referenced by: '<S262>/linWpts'
                                        */
  real_T RotWpts_Y0;                   /* Computed Parameter: RotWpts_Y0
                                        * Referenced by: '<S262>/RotWpts'
                                        */
  real_T time_Y0;                      /* Computed Parameter: time_Y0
                                        * Referenced by: '<S262>/time'
                                        */
  real_T target_Y0;                    /* Computed Parameter: target_Y0
                                        * Referenced by: '<S262>/target'
                                        */
  real_T Constant_Value_j55;           /* Expression: 0
                                        * Referenced by: '<S262>/Constant'
                                        */
  real_T PolynomialTrajectory_VelocityBo[6];/* Expression: zeros( 3, 2 )
                                             * Referenced by: '<S266>/Polynomial Trajectory'
                                             */
  real_T Constant_Value_htb;           /* Expression: 1
                                        * Referenced by: '<S263>/Constant'
                                        */
  real_T DiscreteTimeIntegrator_gainva_g;
                          /* Computed Parameter: DiscreteTimeIntegrator_gainva_g
                           * Referenced by: '<S263>/Discrete-Time Integrator'
                           */
  real_T DiscreteTimeIntegrator_IC_j;  /* Expression: 0
                                        * Referenced by: '<S263>/Discrete-Time Integrator'
                                        */
  real_T Constant_Value_ao;            /* Expression: 0
                                        * Referenced by: '<S250>/Constant'
                                        */
  real_T Constant_Value_mt[13];     /* Expression: [0,0,0.3,1,0,0,0,0,0,0,0,0,0]
                                     * Referenced by: '<S244>/Constant'
                                     */
  real_T Constant1_Value_p;            /* Expression: MPC.p
                                        * Referenced by: '<S244>/Constant1'
                                        */
  real_T Constant5_Value;              /* Expression: 1
                                        * Referenced by: '<S274>/Constant5'
                                        */
  real_T y_Y0;                         /* Computed Parameter: y_Y0
                                        * Referenced by: '<S274>/y'
                                        */
  real_T zeden_Y0;                     /* Computed Parameter: zeden_Y0
                                        * Referenced by: '<S274>/zeden'
                                        */
  real_T Constant_Value_lo;            /* Expression: 0
                                        * Referenced by: '<S274>/Constant'
                                        */
  real_T Constant1_Value_it;           /* Expression: 0
                                        * Referenced by: '<S274>/Constant1'
                                        */
  real_T Constant2_Value_p;            /* Expression: 0
                                        * Referenced by: '<S274>/Constant2'
                                        */
  real_T Constant4_Value_n;            /* Expression: 0
                                        * Referenced by: '<S274>/Constant4'
                                        */
  real_T Delay_InitialCondition_fy[8]; /* Expression: [0,0,0,0,0,0,0,0]
                                        * Referenced by: '<S160>/Delay'
                                        */
  real_T Delay_InitialCondition_at;    /* Expression: 0
                                        * Referenced by: '<S24>/Delay'
                                        */
  real_T RandomNumber_Mean_b;          /* Expression: 0
                                        * Referenced by: '<S169>/Random Number'
                                        */
  real_T RandomNumber_StdDev_m;     /* Computed Parameter: RandomNumber_StdDev_m
                                     * Referenced by: '<S169>/Random Number'
                                     */
  real_T RandomNumber_Seed_m;          /* Expression: 1
                                        * Referenced by: '<S169>/Random Number'
                                        */
  real_T RandomNumber1_Mean_j;         /* Expression: 0
                                        * Referenced by: '<S169>/Random Number1'
                                        */
  real_T RandomNumber1_StdDev_a;   /* Computed Parameter: RandomNumber1_StdDev_a
                                    * Referenced by: '<S169>/Random Number1'
                                    */
  real_T RandomNumber1_Seed_h;         /* Expression: 525886
                                        * Referenced by: '<S169>/Random Number1'
                                        */
  real_T RandomNumber2_Mean_b;         /* Expression: 0
                                        * Referenced by: '<S169>/Random Number2'
                                        */
  real_T RandomNumber2_StdDev_g;   /* Computed Parameter: RandomNumber2_StdDev_g
                                    * Referenced by: '<S169>/Random Number2'
                                    */
  real_T RandomNumber2_Seed_i;         /* Expression: 4
                                        * Referenced by: '<S169>/Random Number2'
                                        */
  real_T Delay_InitialCondition_j;     /* Expression: 0
                                        * Referenced by: '<S7>/Delay'
                                        */
  real_T Constant_Value_lu;            /* Expression: 0.5
                                        * Referenced by: '<S183>/Constant'
                                        */
  real_T Gain2_Gain_g;                 /* Expression: 2
                                        * Referenced by: '<S183>/Gain2'
                                        */
  real_T Gain_Gain_cu;                 /* Expression: 2
                                        * Referenced by: '<S183>/Gain'
                                        */
  real_T Gain1_Gain_d;                 /* Expression: 2
                                        * Referenced by: '<S183>/Gain1'
                                        */
  real_T Gain_Gain_i;                  /* Expression: 2
                                        * Referenced by: '<S184>/Gain'
                                        */
  real_T Constant_Value_jk;            /* Expression: 0.5
                                        * Referenced by: '<S184>/Constant'
                                        */
  real_T Gain2_Gain_b;                 /* Expression: 2
                                        * Referenced by: '<S184>/Gain2'
                                        */
  real_T Gain1_Gain_k;                 /* Expression: 2
                                        * Referenced by: '<S184>/Gain1'
                                        */
  real_T Gain_Gain_ey;                 /* Expression: 2
                                        * Referenced by: '<S185>/Gain'
                                        */
  real_T Gain1_Gain_g;                 /* Expression: 2
                                        * Referenced by: '<S185>/Gain1'
                                        */
  real_T Constant_Value_j5r;           /* Expression: 0.5
                                        * Referenced by: '<S185>/Constant'
                                        */
  real_T Gain2_Gain_c;                 /* Expression: 2
                                        * Referenced by: '<S185>/Gain2'
                                        */
  real_T TSamp_WtEt_i;                 /* Computed Parameter: TSamp_WtEt_i
                                        * Referenced by: '<S173>/TSamp'
                                        */
  real_T Constant1_Value_f[3];         /* Expression: [0,0,-0.075]
                                        * Referenced by: '<S169>/Constant1'
                                        */
  real_T Constant_Value_i1;            /* Expression: 0.5
                                        * Referenced by: '<S189>/Constant'
                                        */
  real_T Gain2_Gain_a;                 /* Expression: 2
                                        * Referenced by: '<S189>/Gain2'
                                        */
  real_T Gain_Gain_cb;                 /* Expression: 2
                                        * Referenced by: '<S189>/Gain'
                                        */
  real_T Gain1_Gain_pe;                /* Expression: 2
                                        * Referenced by: '<S189>/Gain1'
                                        */
  real_T Gain_Gain_j;                  /* Expression: 2
                                        * Referenced by: '<S190>/Gain'
                                        */
  real_T Constant_Value_fi;            /* Expression: 0.5
                                        * Referenced by: '<S190>/Constant'
                                        */
  real_T Gain2_Gain_l;                 /* Expression: 2
                                        * Referenced by: '<S190>/Gain2'
                                        */
  real_T Gain1_Gain_b;                 /* Expression: 2
                                        * Referenced by: '<S190>/Gain1'
                                        */
  real_T Gain_Gain_a;                  /* Expression: 2
                                        * Referenced by: '<S191>/Gain'
                                        */
  real_T Gain1_Gain_p4;                /* Expression: 2
                                        * Referenced by: '<S191>/Gain1'
                                        */
  real_T Constant_Value_m5;            /* Expression: 0.5
                                        * Referenced by: '<S191>/Constant'
                                        */
  real_T Gain2_Gain_ec;                /* Expression: 2
                                        * Referenced by: '<S191>/Gain2'
                                        */
  real_T Constant_Value_fiw;           /* Expression: 0.5
                                        * Referenced by: '<S195>/Constant'
                                        */
  real_T Gain2_Gain_f;                 /* Expression: 2
                                        * Referenced by: '<S195>/Gain2'
                                        */
  real_T Gain_Gain_p;                  /* Expression: 2
                                        * Referenced by: '<S195>/Gain'
                                        */
  real_T Gain1_Gain_h;                 /* Expression: 2
                                        * Referenced by: '<S195>/Gain1'
                                        */
  real_T Gain_Gain_f;                  /* Expression: 2
                                        * Referenced by: '<S196>/Gain'
                                        */
  real_T Constant_Value_lc;            /* Expression: 0.5
                                        * Referenced by: '<S196>/Constant'
                                        */
  real_T Gain2_Gain_d;                 /* Expression: 2
                                        * Referenced by: '<S196>/Gain2'
                                        */
  real_T Gain1_Gain_l;                 /* Expression: 2
                                        * Referenced by: '<S196>/Gain1'
                                        */
  real_T Gain_Gain_gv;                 /* Expression: 2
                                        * Referenced by: '<S197>/Gain'
                                        */
  real_T Gain1_Gain_oz;                /* Expression: 2
                                        * Referenced by: '<S197>/Gain1'
                                        */
  real_T Constant_Value_fo;            /* Expression: 0.5
                                        * Referenced by: '<S197>/Constant'
                                        */
  real_T Gain2_Gain_o;                 /* Expression: 2
                                        * Referenced by: '<S197>/Gain2'
                                        */
  real_T Gain_Gain_er;                 /* Expression: -1
                                        * Referenced by: '<S248>/Gain'
                                        */
  real_T Merge_1_InitialOutput_i; /* Computed Parameter: Merge_1_InitialOutput_i
                                   * Referenced by: '<S6>/Merge'
                                   */
  real_T Gain3_Gain[4];                /* Expression: [1,-1,1,-1]
                                        * Referenced by: '<S155>/Gain3'
                                        */
  real_T Constant_Value_a4[8];         /* Expression: [0,0,0,0,0,0,0,0]
                                        * Referenced by: '<S160>/Constant'
                                        */
  real_T Merge_4_InitialOutput;     /* Computed Parameter: Merge_4_InitialOutput
                                     * Referenced by: '<S6>/Merge'
                                     */
  std::string StringConstant1_String;  /* Expression: FrameID
                                        * Referenced by: '<S13>/String Constant1'
                                        */
  std::string StringConstant1_String_j;/* Expression: FrameID
                                        * Referenced by: '<S89>/String Constant1'
                                        */
  int32_T FixedHorizonOptimizer_Ndis;  /* Expression: Ndis
                                        * Referenced by: '<S122>/FixedHorizonOptimizer'
                                        */
  uint32_T Constant2_Value_l;          /* Expression: uint32(MPC.nu)
                                        * Referenced by: '<S18>/Constant2'
                                        */
  uint32_T Constant5_Value_f;          /* Expression: uint32(MPC.nx)
                                        * Referenced by: '<S18>/Constant5'
                                        */
  uint32_T Constant6_Value;            /* Expression: uint32(MPC.nu)
                                        * Referenced by: '<S18>/Constant6'
                                        */
  uint32_T Constant7_Value;            /* Expression: uint32(MPC.nu)
                                        * Referenced by: '<S18>/Constant7'
                                        */
  uint16_T Delay_InitialCondition_e[8];
                                 /* Computed Parameter: Delay_InitialCondition_e
                                  * Referenced by: '<S4>/Delay'
                                  */
  boolean_T Memory_InitialCondition[226];/* Expression: iA
                                          * Referenced by: '<S58>/Memory'
                                          */
  boolean_T Memory_InitialCondition_n[226];/* Expression: iA
                                            * Referenced by: '<S94>/Memory'
                                            */
  boolean_T yBlockOrdering_Y0;         /* Computed Parameter: yBlockOrdering_Y0
                                        * Referenced by: '<S235>/yBlockOrdering'
                                        */
  boolean_T yBlockOrdering_Y0_m;      /* Computed Parameter: yBlockOrdering_Y0_m
                                       * Referenced by: '<S236>/yBlockOrdering'
                                       */
  boolean_T yBlockOrdering_Y0_d;      /* Computed Parameter: yBlockOrdering_Y0_d
                                       * Referenced by: '<S237>/yBlockOrdering'
                                       */
  boolean_T BlockOrdering_Value;       /* Expression: true()
                                        * Referenced by: '<S233>/BlockOrdering'
                                        */
  boolean_T Enable1_Value;             /* Expression: true()
                                        * Referenced by: '<S233>/Enable1'
                                        */
  boolean_T Enable3_Value;             /* Expression: true()
                                        * Referenced by: '<S233>/Enable3'
                                        */
  boolean_T Constant2_Value_h;         /* Expression: false
                                        * Referenced by: '<S247>/Constant2'
                                        */
  boolean_T Constant3_Value_i;         /* Expression: false
                                        * Referenced by: '<S247>/Constant3'
                                        */
  boolean_T Constant_Value_pl;         /* Computed Parameter: Constant_Value_pl
                                        * Referenced by: '<S253>/Constant'
                                        */
  boolean_T Delay_InitialCondition_az;
                                /* Computed Parameter: Delay_InitialCondition_az
                                 * Referenced by: '<S250>/Delay'
                                 */
  boolean_T Constant1_Value_is;        /* Expression: false
                                        * Referenced by: '<S250>/Constant1'
                                        */
  boolean_T Constant2_Value_a;         /* Expression: false
                                        * Referenced by: '<S244>/Constant2'
                                        */
  boolean_T Constant3_Value_n;         /* Expression: false
                                        * Referenced by: '<S244>/Constant3'
                                        */
  boolean_T dvlen_Y0;                  /* Computed Parameter: dvlen_Y0
                                        * Referenced by: '<S274>/dvlen'
                                        */
  boolean_T imuen_Y0;                  /* Computed Parameter: imuen_Y0
                                        * Referenced by: '<S274>/imuen'
                                        */
  boolean_T imuTared_Y0;               /* Computed Parameter: imuTared_Y0
                                        * Referenced by: '<S274>/imuTared'
                                        */
  boolean_T imu_tared_new_Y0;          /* Computed Parameter: imu_tared_new_Y0
                                        * Referenced by: '<S268>/imu_tared_new'
                                        */
  boolean_T Merge_2_InitialOutput;  /* Computed Parameter: Merge_2_InitialOutput
                                     * Referenced by: '<S6>/Merge'
                                     */
  boolean_T Merge_3_InitialOutput_i;
                                  /* Computed Parameter: Merge_3_InitialOutput_i
                                   * Referenced by: '<S6>/Merge'
                                   */
  boolean_T Merge8_InitialOutput;    /* Computed Parameter: Merge8_InitialOutput
                                      * Referenced by: '<S7>/Merge8'
                                      */
  int8_T Constant_Value_m0;            /* Expression: int8(0)
                                        * Referenced by: '<S52>/Constant'
                                        */
  int8_T Constant1_Value_j;            /* Expression: int8(0)
                                        * Referenced by: '<S53>/Constant1'
                                        */
  int8_T Merge_2_InitialOutput_i; /* Computed Parameter: Merge_2_InitialOutput_i
                                   * Referenced by: '<S47>/Merge'
                                   */
  P_EnabledSubsystem_proc_contr_T EnabledSubsystem_gv;/* '<S284>/Enabled Subsystem' */
  P_EnabledSubsystem_proc_con_m_T EnabledSubsystem_gu;/* '<S283>/Enabled Subsystem' */
  P_EnabledSubsystem_proc_co_pu_T EnabledSubsystem_b2;/* '<S282>/Enabled Subsystem' */
  P_EnabledSubsystem_proc_con_p_T EnabledSubsystem_gf;/* '<S281>/Enabled Subsystem' */
  P_EnabledSubsystem_proc_con_m_T EnabledSubsystem_k;/* '<S303>/Enabled Subsystem' */
  P_EnabledSubsystem_proc_con_m_T EnabledSubsystem_j;/* '<S302>/Enabled Subsystem' */
  P_EnabledSubsystem_proc_co_pu_T EnabledSubsystem_l;/* '<S301>/Enabled Subsystem' */
  P_EnabledSubsystem_proc_con_p_T EnabledSubsystem_h;/* '<S300>/Enabled Subsystem' */
  P_EnabledSubsystem_proc_contr_T EnabledSubsystem_i;/* '<S40>/Enabled Subsystem' */
  P_EnabledSubsystem_proc_contr_T EnabledSubsystem_b;/* '<S37>/Enabled Subsystem' */
  P_EnabledSubsystem_proc_contr_T EnabledSubsystem_o;/* '<S35>/Enabled Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_proc_control_lite_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8_T TID[5];
    } TaskCounters;
  } Timing;
};

/* Class declaration for model proc_control_lite */
class proc_control_lite final
{
  /* public data and function members */
 public:
  /* Copy Constructor */
  proc_control_lite(proc_control_lite const&) = delete;

  /* Assignment Operator */
  proc_control_lite& operator= (proc_control_lite const&) & = delete;

  /* Move Constructor */
  proc_control_lite(proc_control_lite &&) = delete;

  /* Move Assignment Operator */
  proc_control_lite& operator= (proc_control_lite &&) = delete;

  /* Real-Time Model get method */
  RT_MODEL_proc_control_lite_T * getRTM();
  void ModelPrevZCStateInit();

  /* model start function */
  void start();

  /* Initial conditions function */
  void initialize();

  /* model step function */
  void step();

  /* model terminate function */
  void terminate();

  /* Constructor */
  proc_control_lite();

  /* Destructor */
  ~proc_control_lite();

  /* private data and function members */
 private:
  /* Block signals */
  B_proc_control_lite_T proc_control_lite_B;

  /* Block states */
  DW_proc_control_lite_T proc_control_lite_DW;

  /* Tunable parameters */
  static P_proc_control_lite_T proc_control_lite_P;

  /* Triggered events */
  PrevZCX_proc_control_lite_T proc_control_lite_PrevZCX;

  /* private member function(s) for subsystem '<S35>/Enabled Subsystem'*/
  static void proc_cont_EnabledSubsystem_Init(B_EnabledSubsystem_proc_contr_T
    *localB, P_EnabledSubsystem_proc_contr_T *localP);
  static void proc_control_l_EnabledSubsystem(boolean_T rtu_Enable, const
    SL_Bus_std_msgs_Bool *rtu_In1, B_EnabledSubsystem_proc_contr_T *localB);

  /* private member function(s) for subsystem '<S169>/Highpass Filter1'*/
  static void proc_contr_HighpassFilter1_Init(DW_HighpassFilter1_proc_contr_T
    *localDW);
  static void proc_cont_HighpassFilter1_Start(DW_HighpassFilter1_proc_contr_T
    *localDW);
  static void proc_control_li_HighpassFilter1(real_T rtu_0,
    B_HighpassFilter1_proc_contro_T *localB, DW_HighpassFilter1_proc_contr_T
    *localDW);
  static void proc_contr_HighpassFilter1_Term(DW_HighpassFilter1_proc_contr_T
    *localDW);

  /* private member function(s) for subsystem '<S169>/Lowpass Filter'*/
  static void proc_control_LowpassFilter_Init(DW_LowpassFilter_proc_control_T
    *localDW);
  static void proc_contro_LowpassFilter_Start(DW_LowpassFilter_proc_control_T
    *localDW);
  static void proc_control_lite_LowpassFilter(real_T rtu_0,
    B_LowpassFilter_proc_control__T *localB, DW_LowpassFilter_proc_control_T
    *localDW);
  static void proc_control_LowpassFilter_Term(DW_LowpassFilter_proc_control_T
    *localDW);

  /* private member function(s) for subsystem '<S169>/MATLAB Function3'*/
  static void proc_control_li_MATLABFunction3(real_T rtu_u,
    B_MATLABFunction3_proc_contro_T *localB);

  /* private member function(s) for subsystem '<S169>/Moving Average'*/
  static void proc_control_MovingAverage_Init(DW_MovingAverage_proc_control_T
    *localDW);
  void proc_contro_MovingAverage_Start(DW_MovingAverage_proc_control_T *localDW);
  static void proc_control_lite_MovingAverage(real_T rtu_0,
    B_MovingAverage_proc_control__T *localB, DW_MovingAverage_proc_control_T
    *localDW);
  static void proc_control_MovingAverage_Term(DW_MovingAverage_proc_control_T
    *localDW);
  void proc_control_l_SystemCore_setup(dsp_simulink_MovingAverage_pr_T *obj);

  /* private member function(s) for subsystem '<S169>/Moving Average1'*/
  static void proc_contro_MovingAverage1_Init(DW_MovingAverage1_proc_contro_T
    *localDW);
  void proc_contr_MovingAverage1_Start(DW_MovingAverage1_proc_contro_T *localDW);
  static void proc_control_lit_MovingAverage1(real_T rtu_0,
    B_MovingAverage1_proc_control_T *localB, DW_MovingAverage1_proc_contro_T
    *localDW);
  static void proc_contro_MovingAverage1_Term(DW_MovingAverage1_proc_contro_T
    *localDW);
  void proc_control_SystemCore_setup_n(dsp_simulink_MovingAverage_e_T *obj);

  /* private member function(s) for subsystem '<S181>/Moving Average'*/
  static void proc_contr_MovingAverage_i_Init(DW_MovingAverage_proc_contr_f_T
    *localDW);
  void proc_cont_MovingAverage_p_Start(DW_MovingAverage_proc_contr_f_T *localDW);
  static void proc_control_li_MovingAverage_p(real_T rtu_0,
    B_MovingAverage_proc_contro_c_T *localB, DW_MovingAverage_proc_contr_f_T
    *localDW);
  static void proc_contr_MovingAverage_h_Term(DW_MovingAverage_proc_contr_f_T
    *localDW);
  void proc_contro_SystemCore_setup_n2(dsp_simulink_MovingAverage_e3_T *obj);

  /* private member function(s) for subsystem '<S300>/Enabled Subsystem'*/
  static void proc_co_EnabledSubsystem_n_Init(B_EnabledSubsystem_proc_con_e_T
    *localB, P_EnabledSubsystem_proc_con_p_T *localP);
  static void proc_control_EnabledSubsystem_h(boolean_T rtu_Enable, const
    SL_Bus_std_msgs_Float32 *rtu_In1, B_EnabledSubsystem_proc_con_e_T *localB);

  /* private member function(s) for subsystem '<S301>/Enabled Subsystem'*/
  static void proc_co_EnabledSubsystem_f_Init(B_EnabledSubsystem_proc_con_f_T
    *localB, P_EnabledSubsystem_proc_co_pu_T *localP);
  static void proc_control_EnabledSubsystem_l(boolean_T rtu_Enable, const
    SL_Bus_sonia_common_ros2_BodyVelocityDVL *rtu_In1,
    B_EnabledSubsystem_proc_con_f_T *localB);

  /* private member function(s) for subsystem '<S302>/Enabled Subsystem'*/
  static void proc_co_EnabledSubsystem_a_Init(B_EnabledSubsystem_proc_con_a_T
    *localB, P_EnabledSubsystem_proc_con_m_T *localP);
  static void proc_control_EnabledSubsystem_j(boolean_T rtu_Enable, const
    SL_Bus_sensor_msgs_Imu *rtu_In1, B_EnabledSubsystem_proc_con_a_T *localB);

  /* private member function(s) for subsystem '<Root>'*/
  void proc_con_Subscriber_setupImpl_h(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_co_Subscriber_setupImpl_hp(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc__Subscriber_setupImpl_hpq2(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_c_Subscriber_setupImpl_hpq(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_Subscriber_setupImpl_hpq2j(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_contr_Subscriber_setupImpl(const ros_slros2_internal_block_Sub_T
    *obj);
  void Subscriber_setupI_hpq2joyuiyotj(const ros_slros2_internal_block_Sub_T
    *obj);
  void Publisher_setupImpl_hpq2joyuiy(const ros_slros2_internal_block_Pub_T *obj);
  void Subscriber_setupIm_hpq2joyuiyot(const ros_slros2_internal_block_Sub_T
    *obj);
  void Subscriber_setupImp_hpq2joyuiyo(const ros_slros2_internal_block_Sub_T
    *obj);
  void Subscriber_setup_hpq2joyuiyotjy(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_con_Subscriber_setupImpl_c(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_con_Subscriber_setupImpl_e(const ros_slros2_internal_block_Sub_T
    *obj);
  void Subscriber_setu_hpq2joyuiyotjyq(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_con_Subscriber_setupImpl_g(const ros_slros2_internal_block_Sub_T
    *obj);
  void pr_ROS2PubSubBase_setQOSProfile(rmw_qos_profile_t rmwProfile, real_T
    qosDepth, real_T qosDeadline, real_T qosLifespan, real_T qosLeaseDuration,
    boolean_T qosAvoidROSNamespaceConventions);
  void proc_contro_Publisher_setupImpl(const ros_slros2_internal_block_Pub_T
    *obj);
  void p_Subscriber_setupImpl_hpq2joyu(const ros_slros2_internal_block_Sub_T
    *obj);
  void Subscriber_setupImpl_hpq2joyui(const ros_slros2_internal_block_Sub_T *obj);
  void Subscriber_setupImpl_hpq2joyuiy(const ros_slros2_internal_block_Sub_T
    *obj);
  real_T proc_control_lite_rt_powd_snf(real_T u0, real_T u1);
  void proc_contro_generateCubicCoeffs(const real_T posPts[2], const real_T
    velPts[2], real_T finalTime, real_T coeffVec[4]);
  void pr_addFlatSegmentsToPPFormParts(const real_T oldbreaks[2], const real_T
    oldCoeffs[12], real_T newBreaks[4], real_T newCoefs[36]);
  void PolyTrajSys_updateStoredPPForms(robotics_slcore_internal_bl_h_T *obj,
    const real_T pp_breaks[4], const real_T pp_coefs[36]);
  void proc_cont_PolyTrajSys_setupImpl(robotics_slcore_internal_bl_h_T *obj);
  void pro_Subscriber_setupImpl_hpq2jo(const ros_slros2_internal_block_Sub_T
    *obj);
  void pr_Subscriber_setupImpl_hpq2joy(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_cont_Publisher_setupImpl_h(const ros_slros2_internal_block_Pub_T
    *obj);
  void proc_con_Publisher_setupImpl_hp(const ros_slros2_internal_block_Pub_T
    *obj);
  void proc_co_Publisher_setupImpl_hpq(const ros_slros2_internal_block_Pub_T
    *obj);
  void proc_c_Publisher_setupImpl_hpq2(const ros_slros2_internal_block_Pub_T
    *obj);
  void proc__Publisher_setupImpl_hpq2j(const ros_slros2_internal_block_Pub_T
    *obj);
  void proc_Publisher_setupImpl_hpq2jo(const ros_slros2_internal_block_Pub_T
    *obj);
  void pro_Publisher_setupImpl_hpq2joy(const ros_slros2_internal_block_Pub_T
    *obj);
  void pr_Publisher_setupImpl_hpq2joyu(const ros_slros2_internal_block_Pub_T
    *obj);
  void p_Publisher_setupImpl_hpq2joyui(const ros_slros2_internal_block_Pub_T
    *obj);
  real_T proc_rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u);
  void proc_contr_mpcManager_resetImpl(mpcManager_proc_control_lite_T *b_this);
  void proc_contro_TrimPlant_resetImpl(TrimPlant_proc_control_lite_T *b_this);
  real_T proc_control_lite_xnrm2_hp(int32_T n, const real_T x[230], int32_T ix0);
  real_T proc_control_lite_rt_hypotd_snf(real_T u0, real_T u1);
  void proc_control_lite_qr(const real_T A[230], real_T Q[230], real_T R[100]);
  void proc_control_lite_trisolve_h(const real_T A[100], real_T B[130]);
  void proc_control_lite_trisolve_hp(const real_T A[100], real_T B[130]);
  real_T proc_control_lite_xnrm2_hpq(int32_T n, const real_T x[299], int32_T ix0);
  void proc_control_lite_qr_h(const real_T A[299], real_T Q[299], real_T R[169]);
  real_T proc_control_lite_xnrm2_hpq2(int32_T n, const real_T x[48], int32_T ix0);
  void proc_control_lite_qr_hp(const real_T A[48], real_T Q[48], real_T R[9]);
  void proc_control_lite_trisolve_hpq(const real_T A[9], real_T B[39]);
  void proc_control_lite_trisolve_hpq2(const real_T A[9], real_T B[39]);
  real_T proc_control_lite_xnrm2_hpq2j(int32_T n, const real_T x[208], int32_T
    ix0);
  void proc_control_lite_qr_hpq(const real_T A[208], real_T Q[208], real_T R[169]);
  real_T proc_control_lite_xnrm2_hpq2jo(int32_T n, const real_T x[14], int32_T
    ix0);
  void EKFCorrectorAdditive_getMeasure(real_T Rs, const real_T x[13], const
    real_T S[169], real_T *zEstimated, real_T Pxy[13], real_T *Sy, real_T dHdx
    [13], real_T *Rsqrt);
  void proc_control_lit_trisolve_hpq2j(real_T A, real_T B[13]);
  real_T proc_control_lite_xnrm2_hpq2joy(int32_T n, const real_T x[182], int32_T
    ix0);
  void proc_control_lite_qr_hpq2(const real_T A[182], real_T Q[182], real_T R
    [169]);
  void proc_control_lit_mldivide_hpq2j(const real_T A[36], real_T B[48]);
  real_T proc_control_lite_erf(real_T x);
  void proc_control_lite_ft_3_hp(const real_T ct[1016], real_T out1[13]);
  void proc_control_lite_ft_2_hp(const real_T ct[812], real_T out1[13]);
  void proc_control_lite_ft_1_hp(const real_T ct[445], real_T out1[13]);
  void proc_con_AUVQuatPerturbedSimFcn(const real_T in1[13], const real_T in2[6],
    const real_T in4[38], real_T out1[13]);
  void proc_control_lit_EkfNavStatesEq(real_T x[13], const real_T inputs[95]);
  real_T proc_control_lit_xnrm2_hpq2joyu(int32_T n, const real_T x[338], int32_T
    ix0);
  void proc_control_lite_qr_hpq2j(const real_T A[338], real_T Q[338], real_T R
    [169]);
  void pr_ProcPlannerManager_resetImpl(ProcPlannerManager_proc_contr_T *b_this);
  real_T proc_control_lite_rt_atan2d_snf(real_T u0, real_T u1);
  real_T proc_control_lite_norm_hpq(const real_T x[3]);
  void pro_ProcPlannerManager_stepImpl(ProcPlannerManager_proc_contr_T *b_this,
    boolean_T isNew, const SL_Bus_geometry_msgs_Transform trajMsg_transforms
    [1024], uint32_T trajMsg_transforms_SL_Info_Rece, const
    SL_Bus_geometry_msgs_Twist trajMsg_velocities[1024], real_T reset, const
    real_T mesuredPose[13], real_T mpcParams_targetReached_linearT, real_T
    mpcParams_targetReached_angular, real_T mpcParams_targetReached_timeInT,
    real_T currentPose[130], boolean_T *isReached, boolean_T *isTrajDone, real_T
    initWpt[7]);
  void proc__quaternion_parenReference(real_T obj_a, real_T obj_b, real_T obj_c,
    real_T obj_d, boolean_T varargin_1, real_T o_a_data[], int32_T o_a_size[2],
    real_T o_b_data[], int32_T o_b_size[2], real_T o_c_data[], int32_T o_c_size
    [2], real_T o_d_data[], int32_T o_d_size[2]);
  void proc_con_quaternion_parenAssign(quaternion_proc_control_lite_T *obj,
    const real_T rhs_a_data[], const int32_T rhs_a_size[2], const real_T
    rhs_b_data[], const int32_T rhs_b_size[2], const real_T rhs_c_data[], const
    int32_T rhs_c_size[2], const real_T rhs_d_data[], const int32_T rhs_d_size[2]);
  quaternion_proc_control_lite_T proc_contr_quaternionBase_slerp(real_T q1_a,
    real_T q1_b, real_T q1_c, real_T q1_d, real_T q2_a, real_T q2_b, real_T q2_c,
    real_T q2_d);
  quaternion_proc_control_lite_T proc_con_quaternionBase_slerp_h(real_T q1_a,
    real_T q1_b, real_T q1_c, real_T q1_d, real_T q2_a, real_T q2_b, real_T q2_c,
    real_T q2_d, real_T t);
  void proc_control_quaternionBase_log(real_T q_a, real_T q_b, real_T q_c,
    real_T q_d, real_T *b_q_a, real_T *b_q_b, real_T *b_q_c, real_T *b_q_d);
  void proc_contro_RotTrajSys_stepImpl(real_T evalTime, const real_T varargin_1
    [4], const real_T varargin_2[4], const real_T varargin_3[2], real_T R[4],
    real_T omega[3], real_T alpha[3]);
  void proc_control_lite_ppval(const real_T pp_breaks[4], const real_T pp_coefs
    [36], real_T x, real_T v[3]);
  void proc_TrajectoryManager_stepImpl(TrajectoryManager_proc_contro_T *b_this,
    real_T reset, const real_T poses[13], const real_T target[7], const real_T
    x0[7], const real_T mesuredPose[13], real_T currentPose[130], boolean_T
    *isReached);
  void proc_control_lite_eul2quat(const real_T eul[3], real_T q[4]);
  void proc_control_lite_xgetrf_h(real_T A[36], int32_T ipiv[6], int32_T *info);
  void proc_control_lite_mldivide_hpq(const real_T A[36], real_T B[48]);
  void proc_control_lite_quatmultiply(const real_T q[4], const real_T r[4],
    real_T qout[4]);
  void proc_control_lite_ft_6(const real_T ct[2166], real_T Anq[169]);
  void proc_control_lite_ft_5(const real_T ct[1959], real_T Anq[169]);
  void proc_control_lite_ft_4(const real_T ct[1640], real_T Anq[169]);
  void proc_control_lite_ft_3(const real_T ct[1260], real_T Anq[169]);
  void proc_control_lite_ft_2(const real_T ct[805], real_T Anq[169]);
  void proc_control_lite_ft_1(const real_T ct[433], real_T Anq[169]);
  void proc_cont_AUVQuatJacobianMatrix(const real_T in1[13], const real_T in3[38],
    real_T Anq[169]);
  real_T proc_control_lite_norm_h(const real_T x[169]);
  void proc_control_lite_mpower(const real_T a[169], real_T b, real_T c[169]);
  real_T proc_control_lite_log2(real_T x);
  void proc_control__padeApproximation(const real_T A[169], const real_T A2[169],
    const real_T A4[169], const real_T A6[169], int32_T m, real_T F[169]);
  void proc_control_recomputeBlockDiag(const real_T A[169], real_T F[169], const
    int32_T blockFormat[12]);
  real_T proc_control_lite_xnrm2_h(int32_T n, const real_T x[169], int32_T ix0);
  void proc_control_lite_xzsyhetrd(real_T A[169], real_T D[13], real_T E[12],
    real_T tau[12]);
  void proc_control_lite_xzlascl(real_T cfrom, real_T cto, int32_T m, real_T A
    [13], int32_T iA0);
  void proc_control_lite_xzlascl_h(real_T cfrom, real_T cto, int32_T m, real_T
    A[12], int32_T iA0);
  void proc_control_lite_xzlartg(real_T f, real_T g, real_T *cs, real_T *sn,
    real_T *r);
  void proc_control_lite_rotateRight_h(int32_T n, real_T z[169], int32_T iz0,
    const real_T cs[24], int32_T ic0, int32_T is0);
  void proc_control_lite_xdlaev2(real_T a, real_T b, real_T c, real_T *rt1,
    real_T *rt2, real_T *cs1, real_T *sn1);
  void proc_control_lite_rotateRight(int32_T n, real_T z[169], int32_T iz0,
    const real_T cs[24], int32_T ic0, int32_T is0);
  int32_T proc_control_lite_xzsteqr(real_T d[13], real_T e[12], real_T z[169]);
  void proc_control_lite_xsyheev(const real_T A[169], int32_T *info, real_T W[13],
    real_T b_A[169]);
  void proc_control_lite_expm(real_T A[169], real_T F[169]);
  void proc_control_lite_mldivide_hpq2(const real_T A[36], real_T B[36]);
  void proc_control_lite_ft_3_h(const real_T ct[1016], real_T out1[13]);
  void proc_control_lite_ft_2_h(const real_T ct[804], real_T out1[13]);
  void proc_control_lite_ft_1_h(const real_T ct[435], real_T out1[13]);
  void proc_control_lite_AUVQuatSimFcn(const real_T in1[13], const real_T in3[38],
    real_T out1[13]);
  real_T proc_control_lite_norm_hp(const real_T x[4]);
  void proc_control_TrimPlant_stepImpl(TrimPlant_proc_control_lite_T *b_this,
    const real_T u[8], real_T y[13], real_T ref[130], real_T constMec_rho,
    real_T constMec_g, real_T constMec_mass, real_T constMec_volume, real_T
    constMec_sub_height, const real_T constMec_rg[3], const real_T constMec_rb[3],
    const real_T constMec_cdl[6], const real_T constMec_cdq[6], const real_T
    constMec_added_mass[6], const real_T constMec_I[9], const real_T
    constMec_thrusters[48], real_T A[169], real_T B[104], real_T C[169], real_T
    D[104], real_T U[8], real_T Y[13], real_T X[13], real_T DX[13], real_T Z[13]);
  void proc_control_lite_kron(const int32_T b_A_size[1], real_T K_data[],
    int32_T K_size[2]);
  void proc_control_lite_mtimes(const real_T b_A_data[], const int32_T b_A_size
    [2], const real_T b_B_data[], const int32_T b_B_size[2], real_T b_C_data[],
    int32_T b_C_size[2]);
  void proc_control_mpc_constraintcoef(const real_T b_A[441], const real_T Bu
    [168], const real_T Bv[21], const real_T b_C[273], const real_T Dv[13],
    const real_T Jm_data[], const int32_T Jm_size[2], real_T SuJm_data[],
    int32_T SuJm_size[2], real_T Sx_data[], int32_T Sx_size[2], real_T Su1_data[],
    int32_T Su1_size[2], real_T Hv_data[], int32_T Hv_size[2]);
  void proc_control_lite_Mrows_reshape(boolean_T isMrows_data[], real_T
    Mlimfull_data[], real_T Vfull_data[], const boolean_T isMrows0[436], const
    real_T Mlimfull0[436], const real_T Vfull0[436], int32_T b_p);
  void proc_control_li_Mrows_reshape_h(boolean_T isMrows_data[], real_T
    Mlimfull_data[], real_T Vfull_data[], const boolean_T isMrows0[436], const
    real_T Mlimfull0[436], const real_T Vfull0[436], int32_T b_p, int32_T ioff);
  void proc_control_l_Mrows_reshape_hn(boolean_T isMrows_data[], real_T
    Mlimfull_data[], real_T Vfull_data[], const boolean_T isMrows0[436], const
    real_T Mlimfull0[436], const real_T Vfull0[436], int32_T b_p, int32_T ioff);
  void proc_control__Mrows_reshape_hny(boolean_T isMrows_data[], real_T
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
  void proc_control_lite_tril(real_T x_data[], const int32_T x_size[2]);
  void proc_control_lite_eye(real_T b_I[64]);
  void proc_control_lite_kron_b(const real_T b_A_data[], const int32_T b_A_size
    [2], const real_T b_B[64], real_T K_data[], int32_T K_size[2]);
  void proc_control_lite_eye_f(int32_T varargin_1, real_T b_I_data[], int32_T
    b_I_size[2]);
  void proc_con_updateWeights_iTeQU2p6(const real_T b_signal[13], real_T W[13]);
  void proc_con_updateWeights_WFpXHMT0(const real_T b_signal[8], real_T W[8]);
  void proc_control_lite_WtMult(const real_T W[8], const real_T M_data[], const
    int32_T M_size[2], real_T WM_data[], int32_T WM_size[2]);
  void proc_control_lite_mtimes_a(const real_T b_A_data[], const int32_T
    b_A_size[2], const real_T b_B_data[], const int32_T b_B_size[2], real_T
    b_C_data[], int32_T b_C_size[2]);
  void proc_control_binary_expand_op_1(real_T in1_data[], int32_T in1_size[2],
    const real_T in2_data[], const int32_T in2_size[2], const real_T in3_data[],
    const int32_T in3_size[2], const real_T in4_data[], const int32_T in4_size[2],
    const real_T in5[8], const real_T in6_data[], const int32_T in6_size[2],
    const real_T in7_data[], const int32_T in7_size[2]);
  void proc_control_lite_mtimes_af(const real_T b_A_data[], const int32_T
    b_A_size[2], const real_T b_B_data[], const int32_T b_B_size[2], real_T
    b_C_data[], int32_T b_C_size[2]);
  void proc_control_l_binary_expand_op(real_T in1_data[], int32_T in1_size[2],
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
  int32_T proc_control_lite_xpotrf(int32_T n, real_T b_A_data[], int32_T lda);
  void proc_control_lite_diag(const real_T v_data[], const int32_T v_size[2],
    real_T d_data[], int32_T d_size[1]);
  real_T proc_control_lite_minimum(const real_T x_data[], const int32_T x_size[1]);
  void proc_control_binary_expand_op_2(real_T in1_data[], int32_T in1_size[2],
    real_T in2, const int8_T in3_data[], const int32_T in3_size[2]);
  void proc_control_l_mpc_checkhessian(real_T b_H_data[], int32_T b_H_size[2],
    real_T L_data[], int32_T L_size[2], real_T *BadH);
  void proc_control_lite_eye_f3(int32_T varargin_1, real_T b_I_data[], int32_T
    b_I_size[2]);
  void proc_control_lite_trisolve(const real_T b_A_data[], const int32_T
    b_A_size[2], real_T b_B_data[], const int32_T b_B_size[2]);
  void proc_control_lite_linsolve(const real_T b_A_data[], const int32_T
    b_A_size[2], const real_T b_B_data[], const int32_T b_B_size[2], real_T
    b_C_data[], int32_T b_C_size[2]);
  void proc_control_lite_mtimes_afa(const coder::array<real_T, 2U> &b_A, const
    real_T b_B[21], coder::array<real_T, 1U> &b_C);
  void proc_control_lite_mtimes_afai(const coder::array<real_T, 2U> &b_A, const
    real_T b_B[8], coder::array<real_T, 1U> &b_C);
  void proc_control_lite_mtimes_afai0(const coder::array<real_T, 2U> &b_A, const
    coder::array<real_T, 1U> &b_B, coder::array<real_T, 1U> &b_C);
  void proc_control_binary_expand_op_5(coder::array<real_T, 1U> &in1, const
    coder::array<real_T, 1U> &in2, const coder::array<real_T, 2U> &in3, const
    real_T in4[21], const coder::array<real_T, 2U> &in5, const real_T in6[8],
    const coder::array<real_T, 2U> &in7, const coder::array<real_T, 1U> &in8);
  real_T proc_control_lite_norm(const real_T x_data[], const int32_T x_size[1]);
  void proc_control_binary_expand_op_3(real_T in1_data[], int32_T in1_size[2],
    const coder::array<real_T, 2U> &in2, int32_T in3, const real_T in4_data[],
    const int32_T in4_size[1]);
  void proc_control_lite_mtimes_afai05(const real_T b_A_data[], const int32_T
    b_A_size[2], const real_T b_B_data[], real_T b_C_data[], int32_T b_C_size[1]);
  real_T proc_control_lite_xnrm2(int32_T n, const real_T x_data[], int32_T ix0);
  void proc_control_lite_xgemv(int32_T b_m, int32_T n, const real_T b_A_data[],
    int32_T ia0, int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
  void proc_control_lite_xgerc(int32_T b_m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y_data[], real_T b_A_data[], int32_T ia0, int32_T lda);
  void proc_control_lite_xgeqrf(real_T b_A_data[], const int32_T b_A_size[2],
    real_T tau_data[], int32_T tau_size[1]);
  void proc_control_lite_xorgqr(int32_T b_m, int32_T n, int32_T k, real_T
    b_A_data[], const int32_T b_A_size[2], int32_T lda, const real_T tau_data[]);
  real_T proc_control_lite_KWIKfactor(const coder::array<real_T, 2U> &b_Ac,
    const coder::array<int32_T, 1U> &iC, int32_T nA, const real_T Linv_data[],
    const int32_T Linv_size[2], real_T RLinv_data[], const int32_T RLinv_size[2],
    real_T b_D_data[], const int32_T b_D_size[2], real_T b_H_data[], const
    int32_T b_H_size[2], int32_T n);
  void proc_control_binary_expand_op_4(real_T in1_data[], int32_T in1_size[1],
    real_T in2, const real_T in3_data[], const int32_T in3_size[1]);
  void proc_control_lite_mpc_solveQP(const real_T xQP[21], int32_T nCon, int32_T
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
  boolean_T proc_control_lite_isequal(const real_T varargin_1[3], const real_T
    varargin_2[3]);
  boolean_T proc_control_lite_isequal_h(const real_T varargin_1[6], const real_T
    varargin_2[6]);
  real_T proc_control_lite_norm_bB8YUzwT(const real_T x[169]);
  void proc_control_li_mpower_YOI12Z2i(const real_T a[169], real_T b, real_T c
    [169]);
  real_T proc_control_lite_log2_oa8AMOVy(real_T x);
  void proc_padeApproximation_Qbpaua2E(const real_T A[169], const real_T A2[169],
    const real_T A4[169], const real_T A6[169], int32_T m, real_T F[169]);
  void pro_recomputeBlockDiag_GI8hdgJN(const real_T A[169], real_T F[169], const
    int32_T blockFormat[12]);
  real_T proc_control_lit_xnrm2_31dkMRJd(int32_T n, const real_T x[169], int32_T
    ix0);
  void proc_control_xzsyhetrd_kiOuJvej(real_T A[169], real_T D[13], real_T E[12],
    real_T tau[12]);
  void proc_control_l_xzlascl_Nlhd5GaE(real_T cfrom, real_T cto, int32_T m,
    real_T A[13], int32_T iA0);
  void proc_control_l_xzlascl_01CBiMMh(real_T cfrom, real_T cto, int32_T m,
    real_T A[12], int32_T iA0);
  void proc_control_l_xzlartg_5opjPB6F(real_T f, real_T g, real_T *cs, real_T
    *sn, real_T *r);
  void proc_contr_rotateRight_ppseAKEY(int32_T n, real_T z[169], int32_T iz0,
    const real_T cs[24], int32_T ic0, int32_T is0);
  void proc_control_l_xdlaev2_vjOFz6O2(real_T a, real_T b, real_T c, real_T *rt1,
    real_T *rt2, real_T *cs1, real_T *sn1);
  void proc_contr_rotateRight_lMfCUnsH(int32_T n, real_T z[169], int32_T iz0,
    const real_T cs[24], int32_T ic0, int32_T is0);
  int32_T proc_control_l_xzsteqr_j8DfaNbg(real_T d[13], real_T e[12], real_T z
    [169]);
  void proc_control_l_xsyheev_I3eOIoIT(real_T A[169], int32_T *info, real_T W[13]);
  void proc_control_lite_expm_gzVvZTcz(real_T A[169], real_T F[169]);
  void proc_contro_mldivide_Bh63yZKV_b(const real_T A[36], real_T B[36]);
  void proc_co_AUV8QuatSimFcn_NbyAPIEY(const real_T in1[13], const real_T in2[8],
    real_T out1[13]);
  real_T proc_control_lite_norm_CJlXkGlN(const real_T x[4]);
  void proc_c_mpc_plantupdate_ug8bcwhf(const real_T a[169], real_T b[104], const
    real_T c[169], real_T b_A[441], real_T b_B[630], real_T b_C[273], const
    real_T b_D[390], const int32_T b_mvindex[8], const int32_T b_myindex[13],
    const real_T b_Uscale[8], const real_T b_Yscale[13], real_T Bu[168], real_T
    Bv[21], real_T Cm[273], real_T Dv[13], real_T Dvm[13], real_T QQ[441],
    real_T RR[169], real_T NN[273]);
  void mpc_constraintcoefLTV_LuSb5Vr_i(const real_T b_A[4851], const real_T Bu
    [1848], const real_T Bv[231], const real_T b_C[3003], const real_T Dv[143],
    const real_T b_Jm[640], real_T b_SuJm[1040], real_T b_Sx[2730], real_T
    b_Su1[1040], real_T b_Hv[1430]);
  int32_T proc_control_li_xpotrf_GAY9CXNB(real_T b_A[81]);
  real_T proc_control_l_minimum_FuPUSFQR(const real_T x[9]);
  void proc_control__trisolve_welyRBjd(const real_T b_A[81], real_T b_B[81]);
  real_T proc_control_lite_norm_dhDoLgVO(const real_T x[9]);
  real_T proc_control_l_maximum_6ril9Yjp(const real_T x[9]);
  real_T proc_control_lit_xnrm2_lhTkIDkT(int32_T n, const real_T x[81], int32_T
    ix0);
  void proc_control_lit_xgemv_zYrlt8Jf(int32_T b_m, int32_T n, const real_T b_A
    [81], int32_T ia0, const real_T x[81], int32_T ix0, real_T y[9]);
  void proc_control_lit_xgerc_vcdhhgKg(int32_T b_m, int32_T n, real_T alpha1,
    int32_T ix0, const real_T y[9], real_T b_A[81], int32_T ia0);
  void proc_contro_KWIKfactor_pQfokztF(const real_T b_Ac[2034], const int32_T
    iC[226], int32_T nA, const real_T b_Linv[81], real_T b_D[81], real_T b_H[81],
    int32_T n, real_T RLinv[81], real_T *Status);
  void proc_co_DropConstraint_9jcugUNq(int32_T kDrop, boolean_T iA[226], int32_T
    *nA, int32_T iC[226]);
  void proc_control_lite_qpkwik(const real_T b_Linv[81], const real_T b_Hinv[81],
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
  void proc_control__isfinite_tbtZO0of(const real_T x[8], boolean_T b[8]);
  void proc_control_lite_mtimes_e(const real_T A_data[], const int32_T A_size[2],
    real_T C_data[], int32_T C_size[2]);
  void proc_control_lite_getUBounds(const real_T runtimedata_lastMV[8], const
    real_T runtimedata_MVMin[80], const real_T runtimedata_MVMax[80], const
    real_T runtimedata_MVRateMin[80], const real_T runtimedata_MVRateMax[80],
    real_T A_data[], int32_T A_size[2], real_T Bu_data[], int32_T Bu_size[1]);
  void proc_control_li_getXUe_B5bFgDId(const real_T z[139], const real_T x[13],
    real_T X[143], real_T U[88], real_T *e);
  void AUV8QuatJacobianMatrix_BCzctS_g(const real_T in1[13], real_T Anqv[169]);
  void proc_co_stateEvolution_rCe9GJXz(const real_T X[143], const real_T U[88],
    real_T c[130], real_T J[18070]);
  void proc_control_lite_all_aWPrU3Xb(const boolean_T x[130], boolean_T y[13]);
  boolean_T proc_control_lite_any(const boolean_T x[26]);
  void proc_control_lit_reformJacobian(const real_T Jx_data[], const int32_T
    Jx_size[3], const real_T Jmv_data[], const real_T Je_data[], const int32_T
    Je_size[1], real_T Jc_data[], int32_T Jc_size[2]);
  void proc_control_lite_outputBounds(const real_T runtimedata_OutputMin[130],
    const real_T runtimedata_OutputMax[130], const real_T X[143], real_T e,
    real_T c_data[], int32_T c_size[2], real_T Jc_data[], int32_T Jc_size[2]);
  void proc_control_c4_mpclib_anonFcn2(const real_T runtimedata_x[13], const
    real_T runtimedata_OutputMin[130], const real_T runtimedata_OutputMax[130],
    const real_T z[139], real_T varargout_1_data[], int32_T varargout_1_size[2],
    real_T varargout_2[130], real_T varargout_3_data[], int32_T
    varargout_3_size[2], real_T varargout_4[18070]);
  void proc_control_l_factoryConstruct(int32_T nVarMax, int32_T mConstrMax,
    int32_T mIneq, int32_T mNonlinIneq, s_WVbWSSvCeJzx5TXXa9L1l_proc__T *obj);
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
  int32_T p_checkVectorNonFinite_2YVslTT4(const real_T vec[130]);
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
  void proc_control_lit_setProblemType(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj,
    int32_T PROBLEM_TYPE);
  void proc_control_lite_initActiveSet(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj);
  void proc_contro_factoryConstruct_p5(int32_T maxRows, int32_T maxCols, int32_T
    *obj_ldq, int32_T obj_QR_size[2], real_T obj_Q_data[], int32_T obj_Q_size[2],
    int32_T obj_jpvt_data[], int32_T obj_jpvt_size[1], int32_T *obj_mrows,
    int32_T *obj_ncols, int32_T obj_tau_size[1], int32_T *obj_minRowCol,
    boolean_T *obj_usedPivoting);
  void proc_contr_factoryConstruct_p52(int32_T MaxDims, int32_T obj_FMat_size[2],
    int32_T *obj_ldm, int32_T *obj_ndims, int32_T *obj_info, real_T
    *obj_scaleFactor, boolean_T *obj_ConvexCheck, real_T *obj_regTol_, real_T
    *obj_workspace_, real_T *obj_workspace2_);
  void proc_control_lit_computeGradLag(real_T workspace_data[], int32_T ldA,
    int32_T nVar, const real_T grad_data[], int32_T mIneq, const real_T
    AineqTrans_data[], const real_T AeqTrans_data[], const int32_T
    finiteFixed_data[], int32_T mFixed, const int32_T finiteLB_data[], int32_T
    mLB, const int32_T finiteUB_data[], int32_T mUB, const real_T lambda_data[]);
  real_T proc_con_computePrimalFeasError(const real_T x[139], int32_T mLinIneq,
    int32_T mNonlinIneq, const real_T cIneq_data[], const real_T cEq[130], const
    int32_T finiteLB_data[], int32_T mLB, const real_T lb[139], const int32_T
    finiteUB_data[], int32_T mUB);
  void proc_contr_computeDualFeasError(int32_T nVar, const real_T gradLag_data[],
    boolean_T *gradOK, real_T *val);
  void proc_control_lite_test_exit(sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, const s_PAtG1CW05sRYOWrqzwRQyC_proc_T *WorkingSet,
    s_WVbWSSvCeJzx5TXXa9L1l_proc__T *TrialState, const real_T lb[139], boolean_T
    *Flags_gradOK, boolean_T *Flags_fevalOK, boolean_T *Flags_done, boolean_T
    *Flags_stepAccepted, boolean_T *Flags_failedLineSearch, int32_T
    *Flags_stepType);
  void proc_control_lite_saveJacobian(s_WVbWSSvCeJzx5TXXa9L1l_proc__T *obj,
    int32_T nVar, int32_T mIneq, const real_T JacCineqTrans_data[], int32_T
    ineqCol0, const real_T JacCeqTrans_data[], int32_T ldJ);
  real_T proc_control__computeComplError(const int32_T
    fscales_lineq_constraint_size[1], const int32_T
    fscales_cineq_constraint_size[1], const real_T xCurrent[139], int32_T mIneq,
    const real_T cIneq_data[], const int32_T finiteLB_data[], int32_T mLB, const
    real_T lb[139], const int32_T finiteUB_data[], int32_T mUB, const real_T
    lambda_data[], int32_T iL0);
  void proc_control_l_computeGradLag_l(real_T workspace_data[], int32_T ldA,
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
  void proc_control_lite_xswap(int32_T n, real_T x_data[], int32_T ix0, int32_T
    iy0);
  real_T proc_control_lite_xnrm2_a(int32_T n, const real_T x_data[], int32_T ix0);
  real_T proc_control_lite_xzlarfg(int32_T n, real_T *alpha1, real_T x_data[],
    int32_T ix0);
  void proc_control_lite_xgemv_j(int32_T m, int32_T n, const real_T A_data[],
    int32_T ia0, int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
  void proc_control_lite_xgerc_a(int32_T m, int32_T n, real_T alpha1, int32_T
    ix0, const real_T y_data[], real_T A_data[], int32_T ia0, int32_T lda);
  void proc_control_lite_xzlarf(int32_T m, int32_T n, int32_T iv0, real_T tau,
    real_T C_data[], int32_T ic0, int32_T ldc, real_T work_data[]);
  void proc_control_lite_qrf(real_T A_data[], const int32_T A_size[2], int32_T m,
    int32_T n, int32_T nfxd, real_T tau_data[]);
  void proc_control_lite_qrpf(real_T A_data[], const int32_T A_size[2], int32_T
    m, int32_T n, int32_T nfxd, real_T tau_data[], int32_T jpvt_data[]);
  void proc_control_lite_xgeqp3(real_T A_data[], const int32_T A_size[2],
    int32_T m, int32_T n, int32_T jpvt_data[], real_T tau_data[], int32_T
    tau_size[1]);
  void proc_control_lite_factorQRE(s_o1KzuWoPqzc62zOgqamCNH_proc_T *obj, const
    real_T A_data[], int32_T mrows, int32_T ncols, int32_T ldA);
  void proc_control_lite_xorgqr_l(int32_T m, int32_T n, int32_T k, real_T
    A_data[], const int32_T A_size[2], int32_T lda, const real_T tau_data[]);
  void proc_control_lite_sortLambdaQP(real_T lambda_data[], int32_T
    WorkingSet_nActiveConstr, const int32_T WorkingSet_sizes[5], const int32_T
    WorkingSet_isActiveIdx[6], const int32_T WorkingSet_Wid_data[], const
    int32_T WorkingSet_Wlocalidx_data[], real_T workspace_data[]);
  void proc_control_lite_test_exit_d(s7RdrPWkr8UPAUyTdDJkLaG_proc__T *Flags,
    s_z8miyzCNLMZx998HtZciUB_proc_T *memspace, sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, const int32_T fscales_lineq_constraint_size[1], const
    int32_T fscales_cineq_constraint_size[1], s_PAtG1CW05sRYOWrqzwRQyC_proc_T
    *WorkingSet, s_WVbWSSvCeJzx5TXXa9L1l_proc__T *TrialState,
    s_o1KzuWoPqzc62zOgqamCNH_proc_T *QRManager, const real_T lb[139]);
  boolean_T proc_control_lite_BFGSUpdate(int32_T nvar, real_T Bk[19321], const
    real_T sk_data[], real_T yk_data[], real_T workspace_data[]);
  void proc_control_lite_factorQRE_f(s_o1KzuWoPqzc62zOgqamCNH_proc_T *obj,
    int32_T mrows, int32_T ncols);
  void proc_control_lite_countsort(int32_T x_data[], int32_T xLen, int32_T
    workspace_data[], int32_T xMin, int32_T xMax);
  void proc_control_lite_removeConstr(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj,
    int32_T idx_global);
  int32_T proc_control_RemoveDependentEq_(s_z8miyzCNLMZx998HtZciUB_proc_T
    *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T *workingset,
    s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager);
  void proc_contr_RemoveDependentIneq_(s_PAtG1CW05sRYOWrqzwRQyC_proc_T
    *workingset, s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager,
    s_z8miyzCNLMZx998HtZciUB_proc_T *memspace);
  int32_T proc_control_lite_rank(const real_T qrmanager_QR_data[], const int32_T
    qrmanager_QR_size[2], int32_T qrmanager_mrows, int32_T qrmanager_ncols);
  void proc_control_lite_xgemv_jh(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], real_T y_data[]);
  real_T proc_c_maxConstraintViolation_a(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj,
    const real_T x_data[]);
  void proc_control_lite_xgemv_jhn(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], int32_T ix0, real_T y_data[]);
  real_T proc__maxConstraintViolation_ah(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj,
    const real_T x_data[], int32_T ix0);
  boolean_T proc_co_feasibleX0ForWorkingSet(real_T workspace_data[], const
    int32_T workspace_size[2], real_T xCurrent_data[],
    s_PAtG1CW05sRYOWrqzwRQyC_proc_T *workingset, s_o1KzuWoPqzc62zOgqamCNH_proc_T
    *qrmanager);
  void proc_con_RemoveDependentIneq__m(s_PAtG1CW05sRYOWrqzwRQyC_proc_T
    *workingset, s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager,
    s_z8miyzCNLMZx998HtZciUB_proc_T *memspace);
  void proc_control_lite_xgemv_jhnw(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], real_T y_data[]);
  real_T maxConstraintViolation_AMats_no(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj,
    const real_T x_data[]);
  real_T maxConstraintViolation_AMats_re(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj,
    const real_T x_data[]);
  real_T proc_maxConstraintViolation_ahy(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj,
    const real_T x_data[]);
  void proc_control_PresolveWorkingSet(s_WVbWSSvCeJzx5TXXa9L1l_proc__T *solution,
    s_z8miyzCNLMZx998HtZciUB_proc_T *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T
    *workingset, s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager);
  void proc_control_lite_xgemv_jhnw4(int32_T m, int32_T n, const real_T A[19321],
    int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_contro_computeGrad_StoreHx(s_bsf2Fsale81D2LTDCKuKhG_proc_T *obj,
    const real_T H[19321], const real_T f_data[], const real_T x_data[]);
  real_T proc_contro_computeFval_ReuseHx(const s_bsf2Fsale81D2LTDCKuKhG_proc_T
    *obj, real_T workspace_data[], const real_T f_data[], const real_T x_data[]);
  void proc_control_lite_xgeqrf_e(real_T A_data[], const int32_T A_size[2],
    int32_T m, int32_T n, real_T tau_data[], int32_T tau_size[1]);
  void proc_control_lite_factorQR(s_o1KzuWoPqzc62zOgqamCNH_proc_T *obj, const
    real_T A_data[], int32_T mrows, int32_T ncols, int32_T ldA);
  void proc_control_lit_xrotg_QLPrMQ5c(real_T *a, real_T *b, real_T *c, real_T
    *s);
  void proc_control__squareQ_appendCol(s_o1KzuWoPqzc62zOgqamCNH_proc_T *obj,
    const real_T vec_data[], int32_T iv0);
  void proc_control_l_deleteColMoveEnd(s_o1KzuWoPqzc62zOgqamCNH_proc_T *obj,
    int32_T idx);
  boolean_T proc_control_lite_strcmp(const char_T a[7]);
  void proc_control_lite_xgemm(int32_T m, int32_T n, int32_T k, const real_T A
    [19321], int32_T lda, const real_T B_data[], int32_T ib0, int32_T ldb,
    real_T C_data[], int32_T ldc);
  void proc_control_lite_xgemm_k(int32_T m, int32_T n, int32_T k, const real_T
    A_data[], int32_T ia0, int32_T lda, const real_T B_data[], int32_T ldb,
    real_T C_data[], int32_T ldc);
  void proc_control_lite_fullColLDL2_(s_962gqykB8vLiRVqsLdGQIG_proc_T *obj,
    int32_T LD_offset, int32_T NColsRemain);
  void proc_control_li_partialColLDL3_(s_962gqykB8vLiRVqsLdGQIG_proc_T *obj,
    int32_T LD_offset, int32_T NColsRemain);
  int32_T proc_control_lite_xpotrf_g(int32_T n, real_T A_data[], int32_T lda);
  void proc_control_lite_xgemv_jhnw4q(int32_T m, int32_T n, const real_T A_data[],
    int32_T ia0, int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control_lite_factor_h(s_962gqykB8vLiRVqsLdGQIG_proc_T *obj, const
    real_T A[19321], int32_T ndims, int32_T ldA);
  void proc_control_lite_factor(s_962gqykB8vLiRVqsLdGQIG_proc_T *obj, const
    real_T A[19321], int32_T ndims, int32_T ldA);
  void proc_control_lite_solve_f(const s_962gqykB8vLiRVqsLdGQIG_proc_T *obj,
    real_T rhs_data[]);
  void proc_control_lite_solve(const s_962gqykB8vLiRVqsLdGQIG_proc_T *obj,
    real_T rhs_data[]);
  void proc_control_lit_compute_deltax(const real_T H[19321],
    s_WVbWSSvCeJzx5TXXa9L1l_proc__T *solution, s_z8miyzCNLMZx998HtZciUB_proc_T
    *memspace, const s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager,
    s_962gqykB8vLiRVqsLdGQIG_proc_T *cholmanager, const
    s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective, boolean_T alwaysPositiveDef);
  real_T proc_control_lite_xnrm2_ap(int32_T n, const real_T x_data[]);
  void proc_control_lite_xgemv_jhnw4qt(int32_T m, int32_T n, const real_T
    A_data[], int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_control__feasibleratiotest(const real_T solution_xstar_data[], const
    real_T solution_searchDir_data[], real_T workspace_data[], const int32_T
    workspace_size[2], int32_T workingset_nVar, int32_T workingset_ldA, const
    real_T workingset_Aineq_data[], const real_T workingset_bineq_data[], const
    real_T workingset_lb_data[], const int32_T workingset_indexLB_data[], const
    int32_T workingset_sizes[5], const int32_T workingset_isActiveIdx[6], const
    boolean_T workingset_isActiveConstr_data[], const int32_T
    workingset_nWConstr[5], boolean_T isPhaseOne, real_T *alpha, boolean_T
    *newBlocking, int32_T *constrType, int32_T *constrIdx);
  void proc_c_checkUnboundedOrIllPosed(s_WVbWSSvCeJzx5TXXa9L1l_proc__T *solution,
    const s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective);
  void proc_addBoundToActiveSetMatrix_(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj,
    int32_T TYPE, int32_T idx_local);
  void proc_control_lit_addAineqConstr(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj,
    int32_T idx_local);
  void proc_control_lit_compute_lambda(real_T workspace_data[],
    s_WVbWSSvCeJzx5TXXa9L1l_proc__T *solution, const
    s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective, const
    s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager);
  void proc_checkStoppingAndUpdateFval(int32_T *activeSetChangeID, const real_T
    f_data[], s_WVbWSSvCeJzx5TXXa9L1l_proc__T *solution,
    s_z8miyzCNLMZx998HtZciUB_proc_T *memspace, const
    s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective, s_PAtG1CW05sRYOWrqzwRQyC_proc_T *
    workingset, s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager, int32_T
    runTimeOptions_MaxIterations, const boolean_T *updateFval);
  void proc_control_lite_iterate(const real_T H[19321], const real_T f_data[],
    s_WVbWSSvCeJzx5TXXa9L1l_proc__T *solution, s_z8miyzCNLMZx998HtZciUB_proc_T
    *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T *workingset,
    s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager, s_962gqykB8vLiRVqsLdGQIG_proc_T *
    cholmanager, s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective, const char_T
    options_SolverName[7], int32_T runTimeOptions_MaxIterations);
  void proc_control_lite_phaseone(const real_T H[19321], const real_T f_data[],
    s_WVbWSSvCeJzx5TXXa9L1l_proc__T *solution, s_z8miyzCNLMZx998HtZciUB_proc_T
    *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T *workingset,
    s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager, s_962gqykB8vLiRVqsLdGQIG_proc_T *
    cholmanager, s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective, const char_T
    options_SolverName[7], const somzaGboVhDG7PNQS6E98jD_proc__T *runTimeOptions);
  void pr_checkStoppingAndUpdateFval_h(int32_T *activeSetChangeID,
    s_WVbWSSvCeJzx5TXXa9L1l_proc__T *solution, s_z8miyzCNLMZx998HtZciUB_proc_T
    *memspace, const s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective,
    s_PAtG1CW05sRYOWrqzwRQyC_proc_T *workingset, s_o1KzuWoPqzc62zOgqamCNH_proc_T
    *qrmanager, int32_T runTimeOptions_MaxIterations, boolean_T *updateFval);
  void proc_control_lite_iterate_n(const real_T H[19321], const real_T f_data[],
    s_WVbWSSvCeJzx5TXXa9L1l_proc__T *solution, s_z8miyzCNLMZx998HtZciUB_proc_T
    *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T *workingset,
    s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager, s_962gqykB8vLiRVqsLdGQIG_proc_T *
    cholmanager, s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective, const char_T
    options_SolverName[7], int32_T runTimeOptions_MaxIterations);
  void proc_control_lite_linearForm_(boolean_T obj_hasLinear, int32_T obj_nvar,
    real_T workspace_data[], const real_T H[19321], const real_T f_data[], const
    real_T x_data[]);
  void proc_control_lite_driver_m(const real_T H[19321], const real_T f_data[],
    s_WVbWSSvCeJzx5TXXa9L1l_proc__T *solution, s_z8miyzCNLMZx998HtZciUB_proc_T
    *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T *workingset,
    s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager, s_962gqykB8vLiRVqsLdGQIG_proc_T *
    cholmanager, s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective, const
    somzaGboVhDG7PNQS6E98jD_proc__T *options, const
    somzaGboVhDG7PNQS6E98jD_proc__T *runTimeOptions);
  void proc_control_lite_addAeqConstr(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj,
    int32_T idx_local);
  boolean_T proc_control_lite_soc(const real_T Hessian[19321], const real_T
    grad_data[], s_WVbWSSvCeJzx5TXXa9L1l_proc__T *TrialState,
    s_z8miyzCNLMZx998HtZciUB_proc_T *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T
    *WorkingSet, s_o1KzuWoPqzc62zOgqamCNH_proc_T *QRManager,
    s_962gqykB8vLiRVqsLdGQIG_proc_T *CholManager,
    s_bsf2Fsale81D2LTDCKuKhG_proc_T *QPObjective, const
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions);
  real_T proc_con_maxConstraintViolation(const s_PAtG1CW05sRYOWrqzwRQyC_proc_T
    *obj, const real_T x_data[]);
  void proc_control_lite_normal(const real_T Hessian[19321], const real_T
    grad_data[], s_WVbWSSvCeJzx5TXXa9L1l_proc__T *TrialState,
    sG8JZ69axY52WWR6RKyApQC_proc__T *MeritFunction,
    s_z8miyzCNLMZx998HtZciUB_proc_T *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T
    *WorkingSet, s_o1KzuWoPqzc62zOgqamCNH_proc_T *QRManager,
    s_962gqykB8vLiRVqsLdGQIG_proc_T *CholManager,
    s_bsf2Fsale81D2LTDCKuKhG_proc_T *QPObjective, const
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions, s7RdrPWkr8UPAUyTdDJkLaG_proc__T *
    stepFlags);
  void proc_control_lite_relaxed(const real_T Hessian[19321], const real_T
    grad_data[], s_WVbWSSvCeJzx5TXXa9L1l_proc__T *TrialState,
    sG8JZ69axY52WWR6RKyApQC_proc__T *MeritFunction,
    s_z8miyzCNLMZx998HtZciUB_proc_T *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T
    *WorkingSet, s_o1KzuWoPqzc62zOgqamCNH_proc_T *QRManager,
    s_962gqykB8vLiRVqsLdGQIG_proc_T *CholManager,
    s_bsf2Fsale81D2LTDCKuKhG_proc_T *QPObjective,
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions);
  void proc_control_lite_step_k(s7RdrPWkr8UPAUyTdDJkLaG_proc__T *stepFlags,
    real_T Hessian[19321], const real_T lb[139], s_WVbWSSvCeJzx5TXXa9L1l_proc__T
    *TrialState, sG8JZ69axY52WWR6RKyApQC_proc__T *MeritFunction,
    s_z8miyzCNLMZx998HtZciUB_proc_T *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T
    *WorkingSet, s_o1KzuWoPqzc62zOgqamCNH_proc_T *QRManager,
    s_962gqykB8vLiRVqsLdGQIG_proc_T *CholManager,
    s_bsf2Fsale81D2LTDCKuKhG_proc_T *QPObjective,
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions);
  void proc_control_lit_outputBounds_k(const real_T runtimedata_OutputMin[130],
    const real_T runtimedata_OutputMax[130], const real_T X[143], real_T e,
    real_T c_data[], int32_T c_size[2]);
  void proc_co_stateEvolution_xoOgQHOe(const real_T X[143], const real_T U[88],
    real_T c[130]);
  void proc_contr_c4_mpclib_anonFcn2_n(const real_T runtimedata_x[13], const
    real_T runtimedata_OutputMin[130], const real_T runtimedata_OutputMax[130],
    const real_T z[139], real_T varargout_1_data[], int32_T varargout_1_size[2],
    real_T varargout_2[130]);
  void proc_control_l_evalObjAndConstr(int32_T obj_next_next_next_next_next_b_,
    const s_qYIvDqP9yRqtt40IDZ89JG_proc_T *obj_next_next_next_next_next_ne,
    const s_xJmQKnCTzvv6aUzMZcIqsF_proc_T *obj_next_next_next_next_next__0,
    const real_T x[139], real_T Cineq_workspace_data[], int32_T ineq0, real_T
    Ceq_workspace[130], real_T *fval, int32_T *status);
  void proc_con_computeLinearResiduals(const real_T x[139], int32_T nVar, real_T
    workspaceIneq_data[], const int32_T workspaceIneq_size[1], int32_T mLinIneq,
    const real_T AineqT_data[], const real_T bineq_data[], int32_T ldAi);
  real_T proc_control_li_computeMeritFcn(real_T obj_penaltyParam, real_T fval,
    const real_T Cineq_workspace_data[], int32_T mIneq, const real_T
    Ceq_workspace[130], boolean_T evalWellDefined);
  void proc_control_lite_linesearch(boolean_T *evalWellDefined, const real_T
    bineq_data[], int32_T WorkingSet_nVar, int32_T WorkingSet_ldA, const real_T
    WorkingSet_Aineq_data[], s_WVbWSSvCeJzx5TXXa9L1l_proc__T *TrialState, real_T
    MeritFunction_penaltyParam, real_T MeritFunction_phi, real_T
    MeritFunction_phiPrimePlus, real_T MeritFunction_phiFullStep, int32_T
    FcnEvaluator_next_next_next_nex, const s_qYIvDqP9yRqtt40IDZ89JG_proc_T
    *FcnEvaluator_next_next_next_n_0, const s_xJmQKnCTzvv6aUzMZcIqsF_proc_T
    *FcnEvaluator_next_next_next_n_1, boolean_T socTaken, real_T *alpha, int32_T
    *exitflag);
  void proc_control_lite_driver(const real_T bineq_data[], const real_T lb[139],
    s_WVbWSSvCeJzx5TXXa9L1l_proc__T *TrialState, sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, const coder_internal_stickyStruct_2_T *FcnEvaluator,
    s_z8miyzCNLMZx998HtZciUB_proc_T *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T
    *WorkingSet, s_o1KzuWoPqzc62zOgqamCNH_proc_T *QRManager,
    s_962gqykB8vLiRVqsLdGQIG_proc_T *CholManager,
    s_bsf2Fsale81D2LTDCKuKhG_proc_T *QPObjective, const int32_T
    fscales_lineq_constraint_size[1], const int32_T
    fscales_cineq_constraint_size[1], real_T Hessian[19321]);
  void proc_control_lite_fmincon(const s_qYIvDqP9yRqtt40IDZ89JG_proc_T
    *fun_workspace_runtimedata, const sumhYdZsdukPgvAXm7nzHOD_proc__T
    *fun_workspace_userdata, const real_T x0[139], const real_T Aineq_data[],
    const real_T bineq_data[], const int32_T bineq_size[1], const real_T lb[139],
    const s_qYIvDqP9yRqtt40IDZ89JG_proc_T *nonlcon_workspace_runtimedata, real_T
    x[139], real_T *fval, real_T *exitflag, real_T *output_iterations, real_T
    *output_funcCount, char_T output_algorithm[3], real_T
    *output_constrviolation, real_T *output_stepsize, real_T
    *output_lssteplength, real_T *output_firstorderopt);

  /* Real-Time Model */
  RT_MODEL_proc_control_lite_T proc_control_lite_M;
};

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S47>/Display' : Unused code path elimination
 * Block '<S59>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S60>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S61>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S62>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S63>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S64>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S65>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S66>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S67>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S68>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S69>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S70>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S71>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S72>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S73>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S74>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S75>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S76>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S77>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S78>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S79>/Vector Dimension Check' : Unused code path elimination
 * Block '<S80>/Vector Dimension Check' : Unused code path elimination
 * Block '<S81>/Vector Dimension Check' : Unused code path elimination
 * Block '<S82>/Vector Dimension Check' : Unused code path elimination
 * Block '<S83>/Vector Dimension Check' : Unused code path elimination
 * Block '<S84>/Vector Dimension Check' : Unused code path elimination
 * Block '<S58>/last_x' : Unused code path elimination
 * Block '<S85>/Vector Dimension Check' : Unused code path elimination
 * Block '<S58>/useq_scale' : Unused code path elimination
 * Block '<S58>/useq_scale1' : Unused code path elimination
 * Block '<S94>/Constant' : Unused code path elimination
 * Block '<S94>/Floor' : Unused code path elimination
 * Block '<S94>/Floor1' : Unused code path elimination
 * Block '<S95>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S96>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S97>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S98>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S99>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S100>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S101>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S102>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S103>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S104>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S105>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S106>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S107>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S108>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S109>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S110>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S111>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S112>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S113>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S114>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S115>/Vector Dimension Check' : Unused code path elimination
 * Block '<S116>/Vector Dimension Check' : Unused code path elimination
 * Block '<S117>/Vector Dimension Check' : Unused code path elimination
 * Block '<S118>/Vector Dimension Check' : Unused code path elimination
 * Block '<S119>/Vector Dimension Check' : Unused code path elimination
 * Block '<S120>/Vector Dimension Check' : Unused code path elimination
 * Block '<S94>/Min' : Unused code path elimination
 * Block '<S94>/last_x' : Unused code path elimination
 * Block '<S121>/Vector Dimension Check' : Unused code path elimination
 * Block '<S91>/m_zero' : Unused code path elimination
 * Block '<S91>/p_zero' : Unused code path elimination
 * Block '<S124>/Data Type Duplicate' : Unused code path elimination
 * Block '<S129>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S130>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S131>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S132>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S133>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S134>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S135>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S136>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S137>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S138>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S139>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S140>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S141>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S142>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S143>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S144>/Matrix Dimension Check' : Unused code path elimination
 * Block '<S145>/Vector Dimension Check' : Unused code path elimination
 * Block '<S146>/Vector Dimension Check' : Unused code path elimination
 * Block '<S147>/Vector Dimension Check' : Unused code path elimination
 * Block '<S148>/Vector Dimension Check' : Unused code path elimination
 * Block '<S126>/mv.init_zero' : Unused code path elimination
 * Block '<S126>/x.init_zero' : Unused code path elimination
 * Block '<S154>/Data Type Duplicate' : Unused code path elimination
 * Block '<S154>/Data Type Propagation' : Unused code path elimination
 * Block '<S173>/Data Type Duplicate' : Unused code path elimination
 * Block '<S155>/Gain1' : Unused code path elimination
 * Block '<S155>/Gain2' : Unused code path elimination
 * Block '<S166>/Unary Minus' : Unused code path elimination
 * Block '<S166>/Unary Minus1' : Unused code path elimination
 * Block '<S166>/Unary Minus2' : Unused code path elimination
 * Block '<S168>/Divide' : Unused code path elimination
 * Block '<S168>/Divide1' : Unused code path elimination
 * Block '<S168>/Divide2' : Unused code path elimination
 * Block '<S168>/Divide3' : Unused code path elimination
 * Block '<S212>/Unary Minus' : Unused code path elimination
 * Block '<S212>/Unary Minus1' : Unused code path elimination
 * Block '<S212>/Unary Minus2' : Unused code path elimination
 * Block '<S213>/Product' : Unused code path elimination
 * Block '<S213>/Product1' : Unused code path elimination
 * Block '<S213>/Product2' : Unused code path elimination
 * Block '<S213>/Product3' : Unused code path elimination
 * Block '<S213>/Sum' : Unused code path elimination
 * Block '<S157>/Discrete Transfer Fcn' : Unused code path elimination
 * Block '<S225>/Data Type Duplicate' : Unused code path elimination
 * Block '<S225>/Diff' : Unused code path elimination
 * Block '<S225>/TSamp' : Unused code path elimination
 * Block '<S225>/UD' : Unused code path elimination
 * Block '<S228>/Constant' : Unused code path elimination
 * Block '<S228>/Gain' : Unused code path elimination
 * Block '<S228>/Gain1' : Unused code path elimination
 * Block '<S228>/Gain2' : Unused code path elimination
 * Block '<S228>/Product' : Unused code path elimination
 * Block '<S228>/Product1' : Unused code path elimination
 * Block '<S228>/Product2' : Unused code path elimination
 * Block '<S228>/Product3' : Unused code path elimination
 * Block '<S228>/Product4' : Unused code path elimination
 * Block '<S228>/Product5' : Unused code path elimination
 * Block '<S228>/Product6' : Unused code path elimination
 * Block '<S228>/Product7' : Unused code path elimination
 * Block '<S228>/Product8' : Unused code path elimination
 * Block '<S228>/Sum' : Unused code path elimination
 * Block '<S228>/Sum1' : Unused code path elimination
 * Block '<S228>/Sum2' : Unused code path elimination
 * Block '<S228>/Sum3' : Unused code path elimination
 * Block '<S229>/Constant' : Unused code path elimination
 * Block '<S229>/Gain' : Unused code path elimination
 * Block '<S229>/Gain1' : Unused code path elimination
 * Block '<S229>/Gain2' : Unused code path elimination
 * Block '<S229>/Product' : Unused code path elimination
 * Block '<S229>/Product1' : Unused code path elimination
 * Block '<S229>/Product2' : Unused code path elimination
 * Block '<S229>/Product3' : Unused code path elimination
 * Block '<S229>/Product4' : Unused code path elimination
 * Block '<S229>/Product5' : Unused code path elimination
 * Block '<S229>/Product6' : Unused code path elimination
 * Block '<S229>/Product7' : Unused code path elimination
 * Block '<S229>/Product8' : Unused code path elimination
 * Block '<S229>/Sum' : Unused code path elimination
 * Block '<S229>/Sum1' : Unused code path elimination
 * Block '<S229>/Sum2' : Unused code path elimination
 * Block '<S229>/Sum3' : Unused code path elimination
 * Block '<S233>/checkMeasurementFcn1Signals' : Unused code path elimination
 * Block '<S233>/checkMeasurementFcn2Signals' : Unused code path elimination
 * Block '<S233>/checkMeasurementFcn3Signals' : Unused code path elimination
 * Block '<S233>/checkStateTransitionFcnSignals' : Unused code path elimination
 * Block '<S160>/Display' : Unused code path elimination
 * Block '<S262>/Display' : Unused code path elimination
 * Block '<S262>/Selector3' : Unused code path elimination
 * Block '<S265>/Constant1' : Unused code path elimination
 * Block '<S265>/Constant2' : Unused code path elimination
 * Block '<S265>/Constant3' : Unused code path elimination
 * Block '<S265>/Constant4' : Unused code path elimination
 * Block '<S265>/Constant5' : Unused code path elimination
 * Block '<S265>/Constant6' : Unused code path elimination
 * Block '<S265>/Frame' : Unused code path elimination
 * Block '<S265>/fine' : Unused code path elimination
 * Block '<S265>/speed' : Unused code path elimination
 * Block '<S265>/speed1' : Unused code path elimination
 * Block '<S290>/Data Type Duplicate' : Unused code path elimination
 * Block '<S294>/FixPt Data Type Duplicate2' : Unused code path elimination
 * Block '<S291>/Data Type Duplicate' : Unused code path elimination
 * Block '<S295>/FixPt Data Type Duplicate2' : Unused code path elimination
 * Block '<S292>/Data Type Duplicate' : Unused code path elimination
 * Block '<S296>/FixPt Data Type Duplicate2' : Unused code path elimination
 * Block '<S293>/Data Type Duplicate' : Unused code path elimination
 * Block '<S297>/FixPt Data Type Duplicate2' : Unused code path elimination
 * Block '<S58>/Reshape' : Reshape block reduction
 * Block '<S58>/Reshape1' : Reshape block reduction
 * Block '<S58>/Reshape2' : Reshape block reduction
 * Block '<S58>/Reshape3' : Reshape block reduction
 * Block '<S58>/Reshape4' : Reshape block reduction
 * Block '<S58>/Reshape5' : Reshape block reduction
 * Block '<S94>/Reshape' : Reshape block reduction
 * Block '<S94>/Reshape1' : Reshape block reduction
 * Block '<S94>/Reshape2' : Reshape block reduction
 * Block '<S94>/Reshape3' : Reshape block reduction
 * Block '<S94>/Reshape4' : Reshape block reduction
 * Block '<S94>/Reshape5' : Reshape block reduction
 * Block '<S127>/Reshape1' : Reshape block reduction
 * Block '<S127>/mo or x Conversion' : Eliminate redundant data type conversion
 * Block '<S127>/mo or x Conversion10' : Eliminate redundant data type conversion
 * Block '<S127>/mo or x Conversion11' : Eliminate redundant data type conversion
 * Block '<S127>/mo or x Conversion12' : Eliminate redundant data type conversion
 * Block '<S127>/mo or x Conversion13' : Eliminate redundant data type conversion
 * Block '<S127>/mo or x Conversion14' : Eliminate redundant data type conversion
 * Block '<S127>/mo or x Conversion15' : Eliminate redundant data type conversion
 * Block '<S127>/mo or x Conversion16' : Eliminate redundant data type conversion
 * Block '<S127>/mo or x Conversion17' : Eliminate redundant data type conversion
 * Block '<S127>/mo or x Conversion18' : Eliminate redundant data type conversion
 * Block '<S127>/mo or x Conversion19' : Eliminate redundant data type conversion
 * Block '<S127>/mo or x Conversion2' : Eliminate redundant data type conversion
 * Block '<S127>/mo or x Conversion3' : Eliminate redundant data type conversion
 * Block '<S127>/mo or x Conversion4' : Eliminate redundant data type conversion
 * Block '<S127>/mo or x Conversion5' : Eliminate redundant data type conversion
 * Block '<S127>/mo or x Conversion6' : Eliminate redundant data type conversion
 * Block '<S127>/mo or x Conversion7' : Eliminate redundant data type conversion
 * Block '<S127>/mo or x Conversion8' : Eliminate redundant data type conversion
 * Block '<S127>/mo or x Conversion9' : Eliminate redundant data type conversion
 * Block '<S128>/reshape_mv' : Reshape block reduction
 * Block '<S169>/Rate Transition' : Eliminated since input and output rates are identical
 * Block '<S169>/Rate Transition1' : Eliminated since input and output rates are identical
 * Block '<S233>/DataTypeConversion_Enable1' : Eliminate redundant data type conversion
 * Block '<S233>/DataTypeConversion_Enable3' : Eliminate redundant data type conversion
 * Block '<S233>/DataTypeConversion_Q' : Eliminate redundant data type conversion
 * Block '<S233>/DataTypeConversion_R1' : Eliminate redundant data type conversion
 * Block '<S233>/DataTypeConversion_R2' : Eliminate redundant data type conversion
 * Block '<S233>/DataTypeConversion_R3' : Eliminate redundant data type conversion
 * Block '<S233>/DataTypeConversion_uMeas1' : Eliminate redundant data type conversion
 * Block '<S233>/DataTypeConversion_uMeas2' : Eliminate redundant data type conversion
 * Block '<S233>/DataTypeConversion_uMeas3' : Eliminate redundant data type conversion
 * Block '<S233>/DataTypeConversion_y1' : Eliminate redundant data type conversion
 * Block '<S233>/DataTypeConversion_y2' : Eliminate redundant data type conversion
 * Block '<S233>/DataTypeConversion_y3' : Eliminate redundant data type conversion
 * Block '<S234>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S158>/Zero-Order Hold1' : Eliminated since input and output rates are identical
 * Block '<S160>/Reshape' : Reshape block reduction
 * Block '<S160>/Zero-Order Hold' : Eliminated since input and output rates are identical
 * Block '<S7>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S7>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S7>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S7>/Zero-Order Hold' : Eliminated since input and output rates are identical
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'proc_control_lite'
 * '<S1>'   : 'proc_control_lite/Enabled Subsystem'
 * '<S2>'   : 'proc_control_lite/Enabled Subsystem1'
 * '<S3>'   : 'proc_control_lite/Ros Command'
 * '<S4>'   : 'proc_control_lite/Subsystem Controller'
 * '<S5>'   : 'proc_control_lite/Subsystem ProcNav'
 * '<S6>'   : 'proc_control_lite/Subsystem Trajectory'
 * '<S7>'   : 'proc_control_lite/proc_nav_ros_input_lite1'
 * '<S8>'   : 'proc_control_lite/Enabled Subsystem/Send Sensor On'
 * '<S9>'   : 'proc_control_lite/Enabled Subsystem/Send auv states'
 * '<S10>'  : 'proc_control_lite/Enabled Subsystem/Send Sensor On/Blank Message'
 * '<S11>'  : 'proc_control_lite/Enabled Subsystem/Send Sensor On/proc_control sensor_on'
 * '<S12>'  : 'proc_control_lite/Enabled Subsystem/Send auv states/Blank Message'
 * '<S13>'  : 'proc_control_lite/Enabled Subsystem/Send auv states/Header Assignment'
 * '<S14>'  : 'proc_control_lite/Enabled Subsystem/Send auv states/bus2mux'
 * '<S15>'  : 'proc_control_lite/Enabled Subsystem/Send auv states/proc_nav auv_states'
 * '<S16>'  : 'proc_control_lite/Enabled Subsystem1/Blank Message'
 * '<S17>'  : 'proc_control_lite/Enabled Subsystem1/Blank Message1'
 * '<S18>'  : 'proc_control_lite/Enabled Subsystem1/Subsystem'
 * '<S19>'  : 'proc_control_lite/Enabled Subsystem1/provider_thruster thruster_pwm'
 * '<S20>'  : 'proc_control_lite/Enabled Subsystem1/telemetry thruster_newton'
 * '<S21>'  : 'proc_control_lite/Enabled Subsystem1/Subsystem/Blank Message'
 * '<S22>'  : 'proc_control_lite/Enabled Subsystem1/Subsystem/proc_control controller_info'
 * '<S23>'  : 'proc_control_lite/Ros Command/Get_ROS_param'
 * '<S24>'  : 'proc_control_lite/Ros Command/Ros Command Manager'
 * '<S25>'  : 'proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters'
 * '<S26>'  : 'proc_control_lite/Ros Command/Get_ROS_param/Physics Constants'
 * '<S27>'  : 'proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains'
 * '<S28>'  : 'proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/targetReached Params'
 * '<S29>'  : 'proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Default'
 * '<S30>'  : 'proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 10'
 * '<S31>'  : 'proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 11'
 * '<S32>'  : 'proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 19'
 * '<S33>'  : 'proc_control_lite/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains No DVL'
 * '<S34>'  : 'proc_control_lite/Ros Command/Get_ROS_param/Physics Constants/MATLAB Function'
 * '<S35>'  : 'proc_control_lite/Ros Command/Ros Command Manager/proc_control reset_trajectory'
 * '<S36>'  : 'proc_control_lite/Ros Command/Ros Command Manager/proc_control set_mode'
 * '<S37>'  : 'proc_control_lite/Ros Command/Ros Command Manager/proc_nav reset_pos'
 * '<S38>'  : 'proc_control_lite/Ros Command/Ros Command Manager/proc_simulation start_simulation'
 * '<S39>'  : 'proc_control_lite/Ros Command/Ros Command Manager/provider_rs485 kill_status'
 * '<S40>'  : 'proc_control_lite/Ros Command/Ros Command Manager/telemetry dryrun'
 * '<S41>'  : 'proc_control_lite/Ros Command/Ros Command Manager/proc_control reset_trajectory/Enabled Subsystem'
 * '<S42>'  : 'proc_control_lite/Ros Command/Ros Command Manager/proc_control set_mode/Enabled Subsystem'
 * '<S43>'  : 'proc_control_lite/Ros Command/Ros Command Manager/proc_nav reset_pos/Enabled Subsystem'
 * '<S44>'  : 'proc_control_lite/Ros Command/Ros Command Manager/proc_simulation start_simulation/Enabled Subsystem'
 * '<S45>'  : 'proc_control_lite/Ros Command/Ros Command Manager/provider_rs485 kill_status/Enabled Subsystem'
 * '<S46>'  : 'proc_control_lite/Ros Command/Ros Command Manager/telemetry dryrun/Enabled Subsystem'
 * '<S47>'  : 'proc_control_lite/Subsystem Controller/Controller List'
 * '<S48>'  : 'proc_control_lite/Subsystem Controller/If Action Subsystem'
 * '<S49>'  : 'proc_control_lite/Subsystem Controller/Post Traitement'
 * '<S50>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem'
 * '<S51>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1'
 * '<S52>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem2'
 * '<S53>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem3'
 * '<S54>'  : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)'
 * '<S55>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller'
 * '<S56>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Bus2Mux'
 * '<S57>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals'
 * '<S58>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC'
 * '<S59>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check'
 * '<S60>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check A'
 * '<S61>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check B'
 * '<S62>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check C'
 * '<S63>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check D'
 * '<S64>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check DX'
 * '<S65>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check U'
 * '<S66>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check X'
 * '<S67>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check Y'
 * '<S68>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check1'
 * '<S69>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check2'
 * '<S70>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check'
 * '<S71>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check1'
 * '<S72>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check2'
 * '<S73>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check3'
 * '<S74>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check4'
 * '<S75>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check5'
 * '<S76>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check6'
 * '<S77>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check7'
 * '<S78>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check8'
 * '<S79>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Scalar Signal Check'
 * '<S80>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Scalar Signal Check1'
 * '<S81>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Scalar Signal Check2'
 * '<S82>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Vector Signal Check'
 * '<S83>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Vector Signal Check1'
 * '<S84>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Vector Signal Check6'
 * '<S85>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/moorx'
 * '<S86>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/optimizer'
 * '<S87>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/optimizer/VariableHorizonOptimizer'
 * '<S88>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals/Blank Message'
 * '<S89>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals/Header Assignment'
 * '<S90>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals/Publish'
 * '<S91>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller'
 * '<S92>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Bus2Mux'
 * '<S93>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/MATLAB Function'
 * '<S94>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC'
 * '<S95>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check'
 * '<S96>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check A'
 * '<S97>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check B'
 * '<S98>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check C'
 * '<S99>'  : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check D'
 * '<S100>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check DX'
 * '<S101>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check U'
 * '<S102>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check X'
 * '<S103>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check Y'
 * '<S104>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check1'
 * '<S105>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check2'
 * '<S106>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check'
 * '<S107>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check1'
 * '<S108>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check2'
 * '<S109>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check3'
 * '<S110>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check4'
 * '<S111>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check5'
 * '<S112>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check6'
 * '<S113>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check7'
 * '<S114>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check8'
 * '<S115>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Scalar Signal Check'
 * '<S116>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Scalar Signal Check1'
 * '<S117>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Scalar Signal Check2'
 * '<S118>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Vector Signal Check'
 * '<S119>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Vector Signal Check1'
 * '<S120>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Vector Signal Check6'
 * '<S121>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/moorx'
 * '<S122>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/optimizer'
 * '<S123>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/optimizer/FixedHorizonOptimizer'
 * '<S124>' : 'proc_control_lite/Subsystem Controller/Controller List/If Action Subsystem2/Discrete Derivative'
 * '<S125>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Bus2Mux1'
 * '<S126>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller'
 * '<S127>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC'
 * '<S128>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/xmvs_router'
 * '<S129>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check'
 * '<S130>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check1'
 * '<S131>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check10'
 * '<S132>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check11'
 * '<S133>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check12'
 * '<S134>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check13'
 * '<S135>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check14'
 * '<S136>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check15'
 * '<S137>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check16'
 * '<S138>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check3'
 * '<S139>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check4'
 * '<S140>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check5'
 * '<S141>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check6'
 * '<S142>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check7'
 * '<S143>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check8'
 * '<S144>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check9'
 * '<S145>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check1'
 * '<S146>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check2'
 * '<S147>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check1'
 * '<S148>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check11'
 * '<S149>' : 'proc_control_lite/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/NLMPC'
 * '<S150>' : 'proc_control_lite/Subsystem Controller/If Action Subsystem/Subscribe'
 * '<S151>' : 'proc_control_lite/Subsystem Controller/If Action Subsystem/Subscribe1'
 * '<S152>' : 'proc_control_lite/Subsystem Controller/If Action Subsystem/Subscribe/Enabled Subsystem'
 * '<S153>' : 'proc_control_lite/Subsystem Controller/If Action Subsystem/Subscribe1/Enabled Subsystem'
 * '<S154>' : 'proc_control_lite/Subsystem Controller/Post Traitement/PSU Safe'
 * '<S155>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments'
 * '<S156>' : 'proc_control_lite/Subsystem ProcNav/DVL Measurements'
 * '<S157>' : 'proc_control_lite/Subsystem ProcNav/Depth Measurements'
 * '<S158>' : 'proc_control_lite/Subsystem ProcNav/Enabled Subsystem'
 * '<S159>' : 'proc_control_lite/Subsystem ProcNav/Reset Logic'
 * '<S160>' : 'proc_control_lite/Subsystem ProcNav/State function arguments'
 * '<S161>' : 'proc_control_lite/Subsystem ProcNav/mux2Bus'
 * '<S162>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity'
 * '<S163>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/MATLAB Function'
 * '<S164>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/MATLAB Function1'
 * '<S165>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Conjugate'
 * '<S166>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Conjugate1'
 * '<S167>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse'
 * '<S168>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse1'
 * '<S169>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode'
 * '<S170>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Cross Product'
 * '<S171>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Cross Product1'
 * '<S172>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Cross Product2'
 * '<S173>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Discrete Derivative'
 * '<S174>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/MATLAB Function3'
 * '<S175>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/MATLAB Function4'
 * '<S176>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/MATLAB Function6'
 * '<S177>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation'
 * '<S178>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation1'
 * '<S179>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation2'
 * '<S180>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem'
 * '<S181>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem1'
 * '<S182>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation/Quaternion Normalize'
 * '<S183>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation/V1'
 * '<S184>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation/V2'
 * '<S185>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation/V3'
 * '<S186>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
 * '<S187>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S188>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation1/Quaternion Normalize'
 * '<S189>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation1/V1'
 * '<S190>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation1/V2'
 * '<S191>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation1/V3'
 * '<S192>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
 * '<S193>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S194>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation2/Quaternion Normalize'
 * '<S195>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation2/V1'
 * '<S196>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation2/V2'
 * '<S197>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation2/V3'
 * '<S198>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus'
 * '<S199>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S200>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem1/Quaternion Inverse'
 * '<S201>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem1/Quaternion Rotation'
 * '<S202>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem1/Quaternion Inverse/Quaternion Conjugate'
 * '<S203>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem1/Quaternion Inverse/Quaternion Norm'
 * '<S204>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem1/Quaternion Rotation/Quaternion Normalize'
 * '<S205>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem1/Quaternion Rotation/V1'
 * '<S206>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem1/Quaternion Rotation/V2'
 * '<S207>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem1/Quaternion Rotation/V3'
 * '<S208>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
 * '<S209>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S210>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Conjugate'
 * '<S211>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Norm'
 * '<S212>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse1/Quaternion Conjugate'
 * '<S213>' : 'proc_control_lite/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse1/Quaternion Norm'
 * '<S214>' : 'proc_control_lite/Subsystem ProcNav/DVL Measurements/DVL2Ship'
 * '<S215>' : 'proc_control_lite/Subsystem ProcNav/DVL Measurements/MATLAB Function'
 * '<S216>' : 'proc_control_lite/Subsystem ProcNav/DVL Measurements/Quaternion Rotation'
 * '<S217>' : 'proc_control_lite/Subsystem ProcNav/DVL Measurements/DVL2Ship/Enabled Subsystem'
 * '<S218>' : 'proc_control_lite/Subsystem ProcNav/DVL Measurements/DVL2Ship/Enabled Subsystem/Rotation Angles to Quaternions'
 * '<S219>' : 'proc_control_lite/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/Quaternion Normalize'
 * '<S220>' : 'proc_control_lite/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/V1'
 * '<S221>' : 'proc_control_lite/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/V2'
 * '<S222>' : 'proc_control_lite/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/V3'
 * '<S223>' : 'proc_control_lite/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
 * '<S224>' : 'proc_control_lite/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S225>' : 'proc_control_lite/Subsystem ProcNav/Depth Measurements/Discrete Derivative'
 * '<S226>' : 'proc_control_lite/Subsystem ProcNav/Depth Measurements/Quaternion Rotation'
 * '<S227>' : 'proc_control_lite/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/Quaternion Normalize'
 * '<S228>' : 'proc_control_lite/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/V1'
 * '<S229>' : 'proc_control_lite/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/V2'
 * '<S230>' : 'proc_control_lite/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/V3'
 * '<S231>' : 'proc_control_lite/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
 * '<S232>' : 'proc_control_lite/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
 * '<S233>' : 'proc_control_lite/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter2'
 * '<S234>' : 'proc_control_lite/Subsystem ProcNav/Enabled Subsystem/Subsystem'
 * '<S235>' : 'proc_control_lite/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter2/Correct1'
 * '<S236>' : 'proc_control_lite/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter2/Correct2'
 * '<S237>' : 'proc_control_lite/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter2/Correct3'
 * '<S238>' : 'proc_control_lite/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter2/Output'
 * '<S239>' : 'proc_control_lite/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter2/Predict'
 * '<S240>' : 'proc_control_lite/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter2/Output/MATLAB Function'
 * '<S241>' : 'proc_control_lite/Subsystem ProcNav/mux2Bus/Quaternion Inverse'
 * '<S242>' : 'proc_control_lite/Subsystem ProcNav/mux2Bus/Quaternion Inverse/Quaternion Conjugate'
 * '<S243>' : 'proc_control_lite/Subsystem ProcNav/mux2Bus/Quaternion Inverse/Quaternion Norm'
 * '<S244>' : 'proc_control_lite/Subsystem Trajectory/IDLE'
 * '<S245>' : 'proc_control_lite/Subsystem Trajectory/ProcPlanner Trajectory'
 * '<S246>' : 'proc_control_lite/Subsystem Trajectory/Send Current Target'
 * '<S247>' : 'proc_control_lite/Subsystem Trajectory/SpaceNav'
 * '<S248>' : 'proc_control_lite/Subsystem Trajectory/Subsystem'
 * '<S249>' : 'proc_control_lite/Subsystem Trajectory/Subsystem1'
 * '<S250>' : 'proc_control_lite/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only'
 * '<S251>' : 'proc_control_lite/Subsystem Trajectory/IDLE/MATLAB Function'
 * '<S252>' : 'proc_control_lite/Subsystem Trajectory/ProcPlanner Trajectory/Detect Rise Positive'
 * '<S253>' : 'proc_control_lite/Subsystem Trajectory/ProcPlanner Trajectory/Detect Rise Positive/Positive'
 * '<S254>' : 'proc_control_lite/Subsystem Trajectory/Send Current Target/Blank Message'
 * '<S255>' : 'proc_control_lite/Subsystem Trajectory/Send Current Target/Publish'
 * '<S256>' : 'proc_control_lite/Subsystem Trajectory/SpaceNav/MATLAB Function'
 * '<S257>' : 'proc_control_lite/Subsystem Trajectory/Subsystem/Subscribe'
 * '<S258>' : 'proc_control_lite/Subsystem Trajectory/Subsystem/Subscribe/Enabled Subsystem'
 * '<S259>' : 'proc_control_lite/Subsystem Trajectory/Subsystem1/Subscribe'
 * '<S260>' : 'proc_control_lite/Subsystem Trajectory/Subsystem1/Subscribe/Enabled Subsystem'
 * '<S261>' : 'proc_control_lite/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Enabled Subsystem'
 * '<S262>' : 'proc_control_lite/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Pre-traitement'
 * '<S263>' : 'proc_control_lite/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Resettable Subsystem'
 * '<S264>' : 'proc_control_lite/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Subscribe'
 * '<S265>' : 'proc_control_lite/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Subsystem'
 * '<S266>' : 'proc_control_lite/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Resettable Subsystem/Subsystem'
 * '<S267>' : 'proc_control_lite/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Subscribe/Enabled Subsystem'
 * '<S268>' : 'proc_control_lite/proc_nav_ros_input_lite1/AUV'
 * '<S269>' : 'proc_control_lite/proc_nav_ros_input_lite1/Blank Message'
 * '<S270>' : 'proc_control_lite/proc_nav_ros_input_lite1/Blank Message1'
 * '<S271>' : 'proc_control_lite/proc_nav_ros_input_lite1/Blank Message2'
 * '<S272>' : 'proc_control_lite/proc_nav_ros_input_lite1/Blank Message3'
 * '<S273>' : 'proc_control_lite/proc_nav_ros_input_lite1/Blank Message4'
 * '<S274>' : 'proc_control_lite/proc_nav_ros_input_lite1/Enabled Subsystem1'
 * '<S275>' : 'proc_control_lite/proc_nav_ros_input_lite1/Publish'
 * '<S276>' : 'proc_control_lite/proc_nav_ros_input_lite1/Publish1'
 * '<S277>' : 'proc_control_lite/proc_nav_ros_input_lite1/Publish2'
 * '<S278>' : 'proc_control_lite/proc_nav_ros_input_lite1/Publish3'
 * '<S279>' : 'proc_control_lite/proc_nav_ros_input_lite1/Publish4'
 * '<S280>' : 'proc_control_lite/proc_nav_ros_input_lite1/Simulation'
 * '<S281>' : 'proc_control_lite/proc_nav_ros_input_lite1/AUV/provider_depth depth'
 * '<S282>' : 'proc_control_lite/proc_nav_ros_input_lite1/AUV/provider_dvl dvl_velocity'
 * '<S283>' : 'proc_control_lite/proc_nav_ros_input_lite1/AUV/provider_imu imu_info'
 * '<S284>' : 'proc_control_lite/proc_nav_ros_input_lite1/AUV/provider_imu imu_info2'
 * '<S285>' : 'proc_control_lite/proc_nav_ros_input_lite1/AUV/provider_depth depth/Enabled Subsystem'
 * '<S286>' : 'proc_control_lite/proc_nav_ros_input_lite1/AUV/provider_dvl dvl_velocity/Enabled Subsystem'
 * '<S287>' : 'proc_control_lite/proc_nav_ros_input_lite1/AUV/provider_imu imu_info/Enabled Subsystem'
 * '<S288>' : 'proc_control_lite/proc_nav_ros_input_lite1/AUV/provider_imu imu_info2/Enabled Subsystem'
 * '<S289>' : 'proc_control_lite/proc_nav_ros_input_lite1/Enabled Subsystem1/MATLAB Function'
 * '<S290>' : 'proc_control_lite/proc_nav_ros_input_lite1/Enabled Subsystem1/MinMax Running Resettable'
 * '<S291>' : 'proc_control_lite/proc_nav_ros_input_lite1/Enabled Subsystem1/MinMax Running Resettable1'
 * '<S292>' : 'proc_control_lite/proc_nav_ros_input_lite1/Enabled Subsystem1/MinMax Running Resettable2'
 * '<S293>' : 'proc_control_lite/proc_nav_ros_input_lite1/Enabled Subsystem1/MinMax Running Resettable3'
 * '<S294>' : 'proc_control_lite/proc_nav_ros_input_lite1/Enabled Subsystem1/MinMax Running Resettable/Subsystem'
 * '<S295>' : 'proc_control_lite/proc_nav_ros_input_lite1/Enabled Subsystem1/MinMax Running Resettable1/Subsystem'
 * '<S296>' : 'proc_control_lite/proc_nav_ros_input_lite1/Enabled Subsystem1/MinMax Running Resettable2/Subsystem'
 * '<S297>' : 'proc_control_lite/proc_nav_ros_input_lite1/Enabled Subsystem1/MinMax Running Resettable3/Subsystem'
 * '<S298>' : 'proc_control_lite/proc_nav_ros_input_lite1/Simulation/Blank Message'
 * '<S299>' : 'proc_control_lite/proc_nav_ros_input_lite1/Simulation/Publish'
 * '<S300>' : 'proc_control_lite/proc_nav_ros_input_lite1/Simulation/proc_simulation depth'
 * '<S301>' : 'proc_control_lite/proc_nav_ros_input_lite1/Simulation/proc_simulation dvl_velocity'
 * '<S302>' : 'proc_control_lite/proc_nav_ros_input_lite1/Simulation/proc_simulation imu_info'
 * '<S303>' : 'proc_control_lite/proc_nav_ros_input_lite1/Simulation/provider_imu imu_info1'
 * '<S304>' : 'proc_control_lite/proc_nav_ros_input_lite1/Simulation/proc_simulation depth/Enabled Subsystem'
 * '<S305>' : 'proc_control_lite/proc_nav_ros_input_lite1/Simulation/proc_simulation dvl_velocity/Enabled Subsystem'
 * '<S306>' : 'proc_control_lite/proc_nav_ros_input_lite1/Simulation/proc_simulation imu_info/Enabled Subsystem'
 * '<S307>' : 'proc_control_lite/proc_nav_ros_input_lite1/Simulation/provider_imu imu_info1/Enabled Subsystem'
 */
#endif                                 /* proc_control_lite_h_ */
