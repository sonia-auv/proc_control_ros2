//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: proc_control.h
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 3.184
// Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
// C/C++ source code generated on : Fri Jul 10 18:59:51 2026
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM 64-bit (LLP64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef proc_control_h_
#define proc_control_h_
#include <cmath>
#include <stdio.h>
#include <string.h>
#include <cstdio>
#include "rtwtypes.h"
#include "rt_nonfinite.h"
#include "slros2_initialize.h"
#include "proc_control_types.h"
#include "rmw/qos_profiles.h"
#include "coder_array.h"
#include <string>
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include "zero_crossing_types.h"

// Class declaration for model proc_control
class proc_control final
{
  // public data and function members
 public:
  // Block signals for system '<S71>/SinkBlock'
  struct B_SinkBlock_proc_control_T {
    char_T b_zeroDelimTopic[25];
  };

  // Block states (default storage) for system '<S71>/SinkBlock'
  struct DW_SinkBlock_proc_control_T {
    ros_slros2_internal_block_Pub_T obj;// '<S71>/SinkBlock'
    boolean_T objisempty;              // '<S71>/SinkBlock'
  };

  // Block signals for system '<S212>/Highpass Filter1'
  struct B_HighpassFilter1_proc_contro_T {
    real_T y;                          // '<S212>/Highpass Filter1'
  };

  // Block states (default storage) for system '<S212>/Highpass Filter1'
  struct DW_HighpassFilter1_proc_contr_T {
    dsp_simulink_HighpassFilter_p_T obj;// '<S212>/Highpass Filter1'
    boolean_T objisempty;              // '<S212>/Highpass Filter1'
    boolean_T isInitialized;           // '<S212>/Highpass Filter1'
    boolean_T isInitialized_j;         // '<S212>/Highpass Filter1'
  };

  // Block signals for system '<S212>/Lowpass Filter'
  struct B_LowpassFilter_proc_control_T {
    real_T x;                          // '<S212>/Lowpass Filter'
  };

  // Block states (default storage) for system '<S212>/Lowpass Filter'
  struct DW_LowpassFilter_proc_control_T {
    dsp_simulink_LowpassFilter_pr_T obj;// '<S212>/Lowpass Filter'
    boolean_T objisempty;              // '<S212>/Lowpass Filter'
    boolean_T isInitialized;           // '<S212>/Lowpass Filter'
    boolean_T isInitialized_a;         // '<S212>/Lowpass Filter'
  };

  // Block signals for system '<S212>/Moving Average'
  struct B_MovingAverage_proc_control_T {
    real_T csumrev[9];
    real_T MovingAverage;              // '<S212>/Moving Average'
  };

  // Block states (default storage) for system '<S212>/Moving Average'
  struct DW_MovingAverage_proc_control_T {
    dsp_simulink_MovingAverage_pr_T obj;// '<S212>/Moving Average'
    boolean_T objisempty;              // '<S212>/Moving Average'
  };

  // Block signals for system '<S212>/Moving Average1'
  struct B_MovingAverage1_proc_control_T {
    real_T y;                          // '<S212>/Moving Average1'
  };

  // Block states (default storage) for system '<S212>/Moving Average1'
  struct DW_MovingAverage1_proc_contro_T {
    dsp_simulink_MovingAverage_e_T obj;// '<S212>/Moving Average1'
    boolean_T objisempty;              // '<S212>/Moving Average1'
  };

  // Block signals for system '<S224>/Moving Average'
  struct B_MovingAverage_proc_contro_c_T {
    real_T csumrev[49];
    real_T MovingAverage;              // '<S224>/Moving Average'
  };

  // Block states (default storage) for system '<S224>/Moving Average'
  struct DW_MovingAverage_proc_contr_f_T {
    dsp_simulink_MovingAverage_e3_T obj;// '<S224>/Moving Average'
    boolean_T objisempty;              // '<S224>/Moving Average'
  };

  // Block signals (default storage)
  struct B_proc_control_T {
    coder::array<uint16_T,1> b_Mrows;
    std::string Switch1_p;             // '<S14>/Switch1'
    std::string Switch1;               // '<S132>/Switch1'
    coder::array<real_T,1> rseq;
    coder::array<real_T,1> vseq;
    coder::array<real_T,1> b_Mlim;
    coder::array<real_T,1> Bc;
    coder::array<real_T,1> b_Mlim_m;
    coder::array<real_T,1> b_Mu1_c;
    coder::array<real_T,1> a__1;
    coder::array<real_T,1> cTol;
    coder::array<real_T,1> in3;
    coder::array<real_T,1> in5;
    coder::array<real_T,1> in7;
    coder::array<real_T,2> b_Ac;
    coder::array<real_T,2> b_Mx;
    coder::array<real_T,2> b_Mu1;
    coder::array<real_T,2> b_Mv;
    coder::array<int32_T,1> iC;
    coder::array<boolean_T,1> r;
    coder::array<boolean_T,1> b_iA;
    coder::array<real_T,3> Bu;
    coder::array<real_T,3> Bv;
    coder::array<real_T,3> Dv;
    s_WVbWSSvCeJzx5TXXa9L1l_proc__T TrialState;
    s_PAtG1CW05sRYOWrqzwRQyC_proc_T WorkingSet;
    s_PAtG1CW05sRYOWrqzwRQyC_proc_T b_obj;
    s_PAtG1CW05sRYOWrqzwRQyC_proc_T b_WorkingSet;
    s_o1KzuWoPqzc62zOgqamCNH_proc_T QRManager;
    s_z8miyzCNLMZx998HtZciUB_proc_T memspace;
    s_bsf2Fsale81D2LTDCKuKhG_proc_T QPObjective;
    s_962gqykB8vLiRVqsLdGQIG_proc_T CholManager;
    real_T y_data[3345241];
    real_T B_data[1792420];
    real_T b_this[78013];
    real_T b_this_k[78000];
    real_T A_data[67520];
    real_T Mu_data[46400];
    real_T Mu_data_c[46400];
    real_T JacCineqTrans_data[36140];
    real_T b_varargin_1_data[36140];
    real_T a__4_data[36140];
    real_T Jx[33800];
    real_T Jx_data[33800];
    real_T varargin_1_data[33800];
    real_T tmp_data[20800];
    SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint In1;// '<S303>/In1'
    SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint rtb_SourceBlock_o2_b;
    real_T unusedExpr[19321];
    real_T JacCeqTrans[18070];
    real_T JacEqTrans_tmp[18070];
    real_T Jx_p[16900];
    real_T Sx_data[12180];
    real_T Su_data[10400];
    real_T SuJm_data[10400];
    real_T y_data_c[10400];
    real_T varargin_2_data[10400];
    real_T a[10400];
    real_T Jmv[10400];
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
    real_T in1_data[6561];
    real_T SuJm_data_m[6400];
    real_T Jm_data[6400];
    real_T tmp_data_n[6400];
    real_T Jm_data_p[6400];
    real_T I2Jm_data[6400];
    real_T I3_data[6400];
    real_T varargin_4_data[6400];
    real_T varargin_6_data[6400];
    real_T in2_data[6400];
    real_T in4_data[6400];
    real_T in6_data[6400];
    real_T Mv_aux_data[6380];
    real_T Mv_aux_data_l[6380];
    real_T b_A[4851];
    real_T v[4746];
    real_T Su1_data[4640];
    real_T AA[3969];
    coder_internal_stickyStruct_2_T FcnEvaluator;
    int8_T Au[25600];
    int8_T Auf_data[25600];
    real_T b_C[3003];
    real_T Sx_data_j[2730];
    real_T c_Sx[2730];
    real_T Auf_data_d[2560];
    real_T dv[2486];
    real_T ct[2166];
    real_T Jmv_data[2080];
    real_T Jmv_data_g[2080];
    real_T h[2034];
    real_T ct_l[1959];
    real_T A[1859];                    // '<S94>/MATLAB Function'
    real_T C[1859];                    // '<S94>/MATLAB Function'
    real_T Bu_d[1848];
    real_T y_data_d[1829];
    real_T y_data_l[1829];
    real_T work_data[1829];
    real_T work_data_o[1829];
    real_T vn1_data[1829];
    real_T vn2_data[1829];
    real_T work_data_b[1829];
    real_T b_data[1829];
    real_T y_data_n[1829];
    real_T y_data_b[1829];
    real_T w[1808];
    real_T Kx_data[1680];
    real_T ct_ln[1640];
    real_T Hv_data[1430];
    real_T varargin_1_data_h[1430];
    real_T c_Hv[1430];
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T CostFcn_workspace_runtimedata;
    s_qYIvDqP9yRqtt40IDZ89JG_proc_T ConFcn_workspace_runtimedata;
    real_T ct_b[1260];
    real_T CovMat[1156];
    real_T B[1144];                    // '<S94>/MATLAB Function'
    real_T varargin_1_data_d[1040];
    real_T Su1_data_e[1040];
    real_T c_SuJm[1040];
    real_T c_Su1[1040];
    real_T WySuJm[1040];
    real_T Jmv_b[1040];
    real_T dv1[1040];
    real_T ct_j[1016];
    real_T ct_f[1016];
    real_T b_tmp[986];
    real_T Kv_data[880];
    int8_T b_data_a[6561];
    real_T ct_ju[812];
    real_T ct_jz[805];
    real_T ct_o[804];
    int8_T a_n[6400];
    real_T Su1_data_i[640];
    real_T I1_data[640];
    real_T I1_data_o[640];
    real_T Ku1_data[640];
    real_T I2Jm[640];
    real_T WuI2Jm[640];
    real_T WduJm[640];
    real_T in2_data_n[640];
    real_T in4_data_m[640];
    real_T b_B[630];
    real_T Mlimfull_data[580];
    real_T Vfull_data[580];
    real_T in4[445];
    real_T b_A_c[441];
    real_T AA_m[441];
    real_T Mlimfull0[436];
    real_T Vfull0[436];
    real_T in3_m[435];
    real_T in3_j[433];
    SL_Bus_std_msgs_Float64MultiArray In1_p;// '<S196>/In1'
    SL_Bus_std_msgs_Float64MultiArray rtb_SourceBlock_o2_k_h;
    SL_Bus_sonia_common_ros2_MpcInfo BusAssignment;// '<S19>/Bus Assignment'
    real_T dv2[400];
    real_T b_D[390];
    SL_Bus_sonia_common_ros2_MpcGains In1_j;// '<S195>/In1'
    SL_Bus_sonia_common_ros2_MpcGains rtb_SourceBlock_o2_h_c;
    real_T M[338];
    real_T B_data_c[320];
    real_T b_Bu[320];
    real_T M_p[299];
    real_T Nk[273];
    real_T b_C_p[273];
    real_T CA[273];
    real_T CA_a[273];
    real_T b_C_e[273];
    real_T Cineq_data[260];
    real_T b_data_ax[260];
    real_T varargin_1_data_a[260];
    real_T b_c[260];
    real_T a__3_data[260];
    real_T varargin_1_data_i[260];
    real_T b_c_l[260];
    real_T Je_data[260];
    sumhYdZsdukPgvAXm7nzHOD_proc__T expl_temp;
    real_T Bv_o[231];
    real_T M_o[230];
    real_T b_Mlim_i[226];
    real_T Bc_f[226];
    real_T b_Mlim_iz[226];
    real_T b_Mu1_f[226];
    real_T cTol_g[226];
    real_T M_c[208];
    real_T M_o3[182];
    real_T A_l[169];
    real_T dv3[169];
    real_T dv4[169];
    real_T Ac[169];
    real_T Ac_m[169];
    real_T A2[169];
    real_T A4[169];
    real_T A6[169];
    real_T T[169];
    real_T A4_m[169];
    real_T dv5[169];
    real_T a_c[169];
    real_T cBuffer[169];
    real_T aBuffer[169];
    real_T cBuffer_f[169];
    real_T cBuffer_p[169];
    real_T A2_e[169];
    real_T A4_o[169];
    real_T A6_h[169];
    real_T T_l[169];
    real_T A4_h[169];
    real_T dv6[169];
    real_T b_a[169];
    real_T cBuffer_m[169];
    real_T aBuffer_m[169];
    real_T cBuffer_h[169];
    real_T cBuffer_c[169];
    real_T Ak[169];
    real_T Ak1[169];
    real_T b_R[169];
    real_T b_R_k[169];
    real_T b_R_p[169];
    real_T b_R_px[169];
    real_T y_tmp[169];
    real_T S[169];
    real_T V[169];
    real_T A6_p[169];
    real_T V_a[169];
    real_T A6_j[169];
    real_T c_Kx[168];
    int16_T s_data[580];
    real_T Dv_e[143];
    real_T Y[143];                     // '<S94>/MATLAB Function'
    real_T X[143];                     // '<S94>/MATLAB Function'
    real_T DX[143];                    // '<S94>/MATLAB Function'
    real_T CA_data[143];
    real_T X_o[143];
    real_T b_X[143];
    real_T X_b[143];
    real_T X_a[143];
    real_T X_g[143];
    real_T b_X_e[143];
    real_T b_X_f[143];
    real_T b_X_h[143];
    real_T z[139];
    real_T rtb_Selector_m_e[139];
    real_T dv7[139];
    real_T b_x[139];
    int32_T ineqRange_data[260];
    real_T b_dHdx[130];
    real_T K[130];
    real_T C_c[130];
    real_T Ceq[130];
    real_T c[130];
    real_T b_x_a[130];
    real_T gfX[130];
    real_T z_d[130];
    real_T VectorConcatenate[128];     // '<S19>/Vector Concatenate'
    real_T VectorConcatenate1[128];    // '<S19>/Vector Concatenate1'
    real_T VectorConcatenate2[128];    // '<S19>/Vector Concatenate2'
    real_T VectorConcatenate3[128];    // '<S19>/Vector Concatenate3'
    SL_Bus_nav_msgs_Odometry BusAssignment_g;// '<S10>/Bus Assignment'
    SL_Bus_nav_msgs_Odometry BusAssignment_k;// '<S100>/Bus Assignment'
    real_T Selector_m[117];            // '<S171>/Selector'
    int32_T iC_a[226];
    real_T dv8[104];
    real_T rtb_B_p[104];
    real_T Sum_m[104];
    real_T Bc_o[104];
    real_T b_C_n[104];
    real_T Sy[100];
    real_T Sy_l[100];
    real_T bb_data[100];
    real_T b_R_pe[100];
    physicsConstants BusCreator;       // '<S27>/Bus Creator'
    real_T DataTypeConversion_uState[95];// '<S276>/DataTypeConversion_uState'
    real_T U[88];                      // '<S94>/MATLAB Function'
    real_T c_Kv[88];
    real_T U_p[88];
    real_T b_U[88];
    real_T U_f[88];
    real_T U_i[88];
    real_T U_o[88];
    real_T b_U_k[88];
    real_T Umv[88];
    real_T b_U_i[88];
    real_T b_U_o[88];
    real_T g[81];
    real_T L[81];
    real_T RLinv[81];
    real_T b_D_m[81];
    real_T b_H[81];
    real_T U_c[81];
    real_T TL[81];
    real_T R[81];
    real_T b_A_f[81];
    real_T zopt_data[81];
    real_T f_data[81];
    real_T r_data[81];
    real_T z_data[81];
    real_T x_data[81];
    real_T Linv_data[81];
    real_T work_data_h[81];
    real_T tmp_data_m[81];
    real_T work_data_a[81];
    real_T in1_data_k[81];
    int16_T ii_data[320];
    real_T b_utarget[80];
    real_T dv9[80];
    real_T a_p[80];
    real_T b_I1[80];
    real_T a_b[80];
    real_T utargetseq_data[80];
    real_T gfU[80];
    real_T y_c[80];
    real_T y_data_nb[80];
    real_T y_data_i[80];
    boolean_T isMrows_data[580];
    real_T Selector1_h[72];            // '<S171>/Selector1'
    int16_T tmp_data_my[260];
    int16_T tmp_data_j[260];
    int32_T tmp_data_e[130];
    real_T dv10[64];
    real_T dv11[64];
    real_T b_B_m[64];
    real_T b_Jm[64];
    real_T b_I1_m[64];
    real_T y_tmp_j[64];
    SL_Bus_sensor_msgs_Imu In1_e;      // '<S58>/In1'
    SL_Bus_sensor_msgs_Imu In1_g;      // '<S88>/In1'
    SL_Bus_sensor_msgs_Imu rtb_SourceBlock_o2_n_f;
    boolean_T isMrows0[436];
    real_T array_a[48];                // '<S27>/MATLAB Function'
    real_T Tm[48];
    real_T T_g[48];
    real_T Tm_n[48];
    real_T varargin_1[48];
    real_T M_d[48];
    real_T constValues[41];
    boolean_T x[320];
    real_T b_dHdx_n[39];
    real_T K_c[39];
    real_T C_f[39];
    real_T S_p[39];
    real_T modCoeffs[36];
    real_T dv12[36];
    real_T constValues_p[36];
    real_T dv13[36];
    real_T b_this_n[36];
    real_T Ac_k[36];
    real_T inputs[36];
    real_T modCoeffs_n[36];
    real_T c_A[36];
    real_T c_A_o[36];
    real_T c_A_g[36];
    real_T b_A_cq[36];
    boolean_T icf[260];
    boolean_T icf_c[260];
    int8_T Je[260];
    boolean_T bv[226];
    SL_Bus_sonia_common_ros2_BodyVelocityDVL In1_mz;// '<S57>/In1'
    SL_Bus_sonia_common_ros2_BodyVelocityDVL In1_iq;// '<S87>/In1'
    SL_Bus_sonia_common_ros2_BodyVelocityDVL rtb_SourceBlock_o2_p_m;
    real_T coefsWithFlatStart[24];
    real_T work[24];
    real_T work_j[24];
    int8_T Ck[169];
    int8_T val[169];
    real_T b_xoff[21];
    real_T rtb_X_e_k[21];
    real_T Transpose_b[18];            // '<S305>/Transpose'
    real_T Opt[18];
    real_T Rhs[18];
    boolean_T bv1[130];
    boolean_T bv2[130];
    char_T cv[128];
    sG8JZ69axY52WWR6RKyApQC_proc__T MeritFunction;
    real_T M_m[14];
    int32_T icf_tmp[26];
    int32_T icf_tmp_p[26];
    real_T rtb_MATLABSystem_o10_d[13];
    real_T imvec[13];
    real_T z_g[13];
    real_T X_e[13];                    // '<S93>/MATLAB System'
    real_T DataStoreRead[13];
    real_T c_Wy[13];
    real_T cb[13];
    real_T b_C_c[13];
    real_T x_dot_kk[13];
    real_T dv14[13];
    real_T w_c[13];
    real_T ic[13];
    real_T w_i[13];
    real_T ic_d[13];
    real_T icf_tmp_g[13];
    real_T ix[13];
    real_T obj_next_next_next_next_next_ne[13];
    real_T gfX_l[13];
    real_T dv15[13];
    real_T b_C_f[13];
    real_T ic_db[13];
    real_T dv16[13];
    real_T dv17[13];
    real_T b_tau[13];
    real_T work_jr[13];
    real_T b_tau_i[13];
    real_T work_h[13];
    real_T b_tau_n[13];
    real_T work_o[13];
    real_T b_tau_c[13];
    real_T work_b[13];
    real_T imvec_e[13];
    real_T ic_dd[13];
    real_T dv18[13];
    real_T dv19[13];
    real_T work_i[13];
    real_T work_g[13];
    real_T a_nn[13];
    real_T tamp[13];
    real_T coefMat[12];
    real_T coefMat_l[12];
    real_T newSegmentCoeffs[12];
    real_T e[12];
    real_T tau[12];
    real_T e_c[12];
    real_T tau_n[12];
    real_T vseq_p[11];
    int8_T b[81];
    int32_T i_data[20];
    int32_T ii_data_d[20];
    boolean_T gb_data[80];
    boolean_T gb_data_o[80];
    real_T d[10];
    real_T b_tau_j[10];
    real_T work_c[10];
    Vector2DoubleArray_proc__pr35_T obj_lw;
    real_T twpt[9];
    real_T TmpSignalConversionAtMATL_d[9];// '<S293>/Enabled Subsystem'
    real_T zopt[9];
    real_T varargin_1_h[9];
    real_T r_d[9];
    real_T z_c[9];
    real_T tau_p[9];
    real_T work_p[9];
    real_T varargin_1_a[9];
    real_T b_R_o[9];
    somzaGboVhDG7PNQS6E98jD_proc__T expl_temp_j;
    somzaGboVhDG7PNQS6E98jD_proc__T expl_temp_p;
    int8_T As[64];
    int8_T Au_tmp[64];
    int8_T Au_tmp_o[64];
    real_T mv[8];                      // '<S170>/NLMPC'
    real_T u_e[8];                     // '<S129>/VariableHorizonOptimizer'
    real_T dv20[8];
    real_T dv21[8];
    real_T c_Wu[8];
    real_T c_Wdu[8];
    real_T umax_incr[8];
    real_T umin_incr[8];
    real_T umvk[8];
    real_T duk[8];
    real_T iu[8];
    real_T umvk_l[8];
    real_T duk_k[8];
    real_T gfU_j[8];
    real_T ic_f[8];
    real_T c_c[8];
    real_T runtimedata_MVRateMin[8];
    SL_Bus_sonia_common_ros2_Pose rtb_SourceBlock_o2_ne_f;
    SL_Bus_geometry_msgs_Pose In1_gs;  // '<S45>/In1'
    SL_Bus_geometry_msgs_Pose rtb_SourceBlock_o2_m_n;
    SL_Bus_geometry_msgs_Pose BusAssignment_i;
    real_T TmpSignalConversionAtMATLAB[7];
    real_T mp[7];
    real_T y_l[7];
    int32_T iv[13];
    int32_T icf_tmp_i[13];
    int32_T icf_tmp_k[13];
    int32_T icf_tmp_f[13];
    int32_T icf_tmp_a[13];
    sttYSJM5GCi2c1Eu0R50efC_proc__T Out;
    Vector2DoubleArray_proc_co_pr_T obj_n;
    Vector2DoubleArray_proc_co_pr_T obj_li;
    Vector2DoubleArray_proc_co_pr_T obj_d;
    int32_T blockFormat[12];
    int32_T blockFormat_d[12];
    SL_Bus_geometry_msgs_Twist In1_l;  // '<S301>/In1'
    SL_Bus_geometry_msgs_Twist rtb_SourceBlock_o2_gd_e;
    real_T ElementProduct[6];          // '<S215>/Element Product'
    real_T rtb_ElementProduct_e[6];
    real_T constValues_b[6];
    real_T constValues_a[6];
    real_T constValues_i[6];
    real_T dv22[6];
    real_T varargin_1_tmp[6];
    char_T b_zeroDelimTopic[35];
    char_T b_zeroDelimTopic_f[34];
    char_T b_zeroDelimTopic_j[34];
    char_T b_zeroDelimTopic_o[32];
    real_T n[4];
    real_T TmpSignalConversionAtSFunct[4];// '<S199>/MATLAB Function'
    real_T qt[4];
    real_T modBreaks[4];
    real_T evalPointVector[4];
    real_T qRel[4];
    real_T qRel_l[4];
    int32_T iv1[8];
    int32_T gfU_tmp[8];
    int32_T gfU_tmp_l[8];
    int32_T iv2[8];
    int32_T iv3[8];
    int32_T iv4[8];
    int32_T iv5[8];
    quaternion_proc_control_T pnCorrected;
    quaternion_proc_control_T expl_temp_o;
    quaternion_proc_control_T expl_temp_f;
    char_T b_zeroDelimTopic_g[31];
    char_T b_zeroDelimTopic_d[31];
    char_T b_zeroDelimTopic_dv[30];
    char_T b_zeroDelimTopic_jo[29];
    char_T b_zeroDelimTopic_f1[29];
    int8_T UnknownIn[29];
    char_T b_zeroDelimTopic_js[28];
    char_T b_zeroDelimTopic_h[28];
    char_T b_zeroDelimTopic_c[28];
    char_T b_zeroDelimTopic_n[27];
    char_T b_zeroDelimTopic_k[27];
    boolean_T icf_a[26];
    boolean_T icf_f[26];
    char_T b_zeroDelimTopic_jz[26];
    char_T b_zeroDelimTopic_kl[26];
    char_T b_zeroDelimTopic_b[25];
    char_T b_zeroDelimTopic_hm[25];
    Vector2DoubleArray_proc_c_pr3_T obj_n0;
    Vector2DoubleArray_proc_c_pr3_T obj_jm;
    Vector2DoubleArray_proc_c_pr3_T obj_bx;
    Vector2DoubleArray_proc_c_pr3_T obj_o4;
    Vector2DoubleArray_proc_c_pr3_T obj_k3;
    char_T b_zeroDelimTopic_e[24];
    char_T b_zeroDelimTopic_hn[24];
    char_T b_zeroDelimTopic_ku[24];
    real_T BodyVelocity[3];
                         // '<S1>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T AngularRate[3];
                         // '<S1>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T Sum2_i[3];                  // '<S212>/Sum2'
    real_T sincos_o2[3];               // '<S261>/sincos'
    real_T dv23[3];
    real_T dv24[3];
    real_T varargin_1_tmp_j[3];
    real_T b_tau_o[3];
    real_T work_cs[3];
    real_T target[3];
    real_T b_this_h[3];
    int32_T ipiv[6];
    int32_T ipiv_i[6];
    char_T b_zeroDelimTopic_p[23];
    char_T b_zeroDelimTopic_f0[23];
    char_T b_zeroDelimTopic_ew[23];
    char_T b_zeroDelimTopic_nh[23];
    char_T b_zeroDelimTopic_ho[23];
    char_T b_zeroDelimTopic_hp[22];
    char_T b_zeroDelimTopic_fn[21];
    boolean_T corr[20];
    char_T b_zeroDelimTopic_i[20];
    char_T b_zeroDelimTopic_f4[19];
    sJ4ih70VmKcvCeguWN0mNVF deadline;
    sJ4ih70VmKcvCeguWN0mNVF lifespan;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration;
    sJ4ih70VmKcvCeguWN0mNVF deadline_c;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_n;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_h;
    sJ4ih70VmKcvCeguWN0mNVF deadline_k;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_h;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_b;
    sJ4ih70VmKcvCeguWN0mNVF deadline_o;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_nq;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_m;
    sJ4ih70VmKcvCeguWN0mNVF deadline_ku;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_j;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_hc;
    sJ4ih70VmKcvCeguWN0mNVF deadline_f;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_d;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_l;
    sJ4ih70VmKcvCeguWN0mNVF deadline_kg;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_i;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_h5;
    sJ4ih70VmKcvCeguWN0mNVF deadline_m;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_g;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_lf;
    sJ4ih70VmKcvCeguWN0mNVF deadline_m4;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_nt;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_g;
    sJ4ih70VmKcvCeguWN0mNVF deadline_d;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_m;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_f;
    sJ4ih70VmKcvCeguWN0mNVF deadline_g;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_jc;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_c;
    sJ4ih70VmKcvCeguWN0mNVF deadline_e;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_mx;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_o;
    sJ4ih70VmKcvCeguWN0mNVF deadline_a;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_ji;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_ga;
    sJ4ih70VmKcvCeguWN0mNVF deadline_j;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_e;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_j;
    sJ4ih70VmKcvCeguWN0mNVF deadline_jb;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_gi;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_om;
    sJ4ih70VmKcvCeguWN0mNVF deadline_h;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_c;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_a;
    sJ4ih70VmKcvCeguWN0mNVF deadline_l;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_jcs;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_i;
    sJ4ih70VmKcvCeguWN0mNVF deadline_mi;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_f;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_on;
    sJ4ih70VmKcvCeguWN0mNVF deadline_i;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_e0;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_j0;
    sJ4ih70VmKcvCeguWN0mNVF deadline_o4;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_fr;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_m3;
    sJ4ih70VmKcvCeguWN0mNVF deadline_ax;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_hi;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_oc;
    sJ4ih70VmKcvCeguWN0mNVF deadline_hn;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_j3;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_g3;
    sJ4ih70VmKcvCeguWN0mNVF deadline_jz;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_l;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_k;
    sJ4ih70VmKcvCeguWN0mNVF deadline_dr;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_np;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_j5;
    sJ4ih70VmKcvCeguWN0mNVF deadline_a3;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_hz;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_iq;
    sJ4ih70VmKcvCeguWN0mNVF deadline_dn;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_b;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_hj;
    sJ4ih70VmKcvCeguWN0mNVF deadline_p;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_nk;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_jz;
    sJ4ih70VmKcvCeguWN0mNVF deadline_ot;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_bj;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_jk;
    char_T b_zeroDelimTopic_eq[16];
    sJ4ih70VmKcvCeguWN0mNVF deadline_i4;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_ng;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_ie;
    sJ4ih70VmKcvCeguWN0mNVF deadline_p3;
    sJ4ih70VmKcvCeguWN0mNVF lifespan_o;
    sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration_mz;
    SL_Bus_sonia_common_ros2_MotorPwm BusAssignment_p;// '<S2>/Bus Assignment'
    SL_Bus_sonia_common_ros2_MotorPwm BusAssignment1;// '<S2>/Bus Assignment1'
    real_T dv25[2];
    real_T dv26[2];
    real_T dv27[2];
    real_T obj[2];
    uint16_T current[8];               // '<S92>/N to A'
    uint16_T pwm[8];                   // '<S92>/n-D Lookup Table1'
    uint8_T rows[13];
    int8_T e_o[13];
    uint8_T rows_i[13];
    int8_T b_ipiv[13];
    int8_T ipiv_g[13];
    boolean_T x_g[13];
    boolean_T x_e[13];
    boolean_T x_ge[13];
    boolean_T x_gb[13];
    int32_T Jx_size[3];
    int16_T WorkingSet_tmp[5];
    s7RdrPWkr8UPAUyTdDJkLaG_proc__T Flags;
    real_T Probe_o1;                   // '<S203>/Probe'
    real_T Delay[8];                   // '<S203>/Delay'
    real_T Transpose[48];              // '<S203>/Transpose'
    real_T Gain[3];                    // '<S291>/Gain'
    real_T MatrixConcatenate[2];       // '<S305>/Matrix Concatenate'
    real_T Selector[6];                // '<S305>/Selector'
    real_T Selector1[8];               // '<S305>/Selector1'
    real_T Selector4[7];               // '<S305>/Selector4'
    real_T DataTypeConversion[6];      // '<S304>/Data Type Conversion'
    real_T DataTypeConversion1[2];     // '<S304>/Data Type Conversion1'
    real_T DataTypeConversion2;        // '<S304>/Data Type Conversion2'
    real_T zposition;                  // '<S200>/Sum'
    real_T Gain_l;                     // '<S263>/Gain'
    real_T Gain1;                      // '<S263>/Gain1'
    real_T Gain2;                      // '<S263>/Gain2'
    real_T Sum;                        // '<S263>/Sum'
    real_T Gain_o;                     // '<S264>/Gain'
    real_T Gain1_d;                    // '<S264>/Gain1'
    real_T Gain2_l;                    // '<S264>/Gain2'
    real_T Sum_n;                      // '<S264>/Sum'
    real_T Gain_d;                     // '<S265>/Gain'
    real_T Gain1_e;                    // '<S265>/Gain1'
    real_T Gain2_n;                    // '<S265>/Gain2'
    real_T Sum_l;                      // '<S265>/Sum'
    real_T enable;                     // '<S199>/MATLAB Function'
    real_T q0;                         // '<S261>/q0'
    real_T q1;                         // '<S261>/q1'
    real_T q2;                         // '<S261>/q2'
    real_T q3;                         // '<S261>/q3'
    real_T DiscreteTimeIntegrator_o[3];// '<S223>/Discrete-Time Integrator'
    real_T ywt[13];                    // '<S91>/MATLAB System'
    real_T mvwt[8];                    // '<S91>/MATLAB System'
    real_T dmwwt[8];                   // '<S91>/MATLAB System'
    real_T p;                          // '<S91>/MATLAB System'
    real_T m;                          // '<S91>/MATLAB System'
    real_T mvmin[8];                   // '<S91>/MATLAB System'
    real_T mvmax[8];                   // '<S91>/MATLAB System'
    real_T y;                          // '<S49>/MATLAB Function'
    real_T p_h;                        // '<S28>/Data Type Conversion'
    real_T m_a;                        // '<S28>/Data Type Conversion1'
    real_T timeInTol;                  // '<S29>/Time In Tolerance'
    real_T linearTol;                  // '<S29>/Linear Tolerance'
    real_T angularTol;                 // '<S29>/Angular Tolerance'
    real_T tmin;                       // '<S28>/T Min'
    real_T tmax;                       // '<S28>/T Max'
    real_T MV[8];                      // '<S34>/MATLAB System5'
    real_T MV_c[8];                    // '<S33>/MATLAB System5'
    real_T OV[13];                     // '<S33>/MATLAB System4'
    real_T MVR[8];                     // '<S33>/MATLAB System3'
    real_T MV_l[8];                    // '<S32>/MATLAB System5'
    real_T OV_l[13];                   // '<S32>/MATLAB System4'
    real_T MVR_c[8];                   // '<S32>/MATLAB System3'
    real_T MV_j[8];                    // '<S31>/MATLAB System5'
    real_T OV_c[13];                   // '<S31>/MATLAB System4'
    real_T MVR_a[8];                   // '<S31>/MATLAB System3'
    real_T MV_p[8];                    // '<S30>/MATLAB System4'
    real_T OV_d[13];                   // '<S30>/MATLAB System3'
    real_T MVR_cn[8];                  // '<S30>/MATLAB System1'
    real_T BufferToMakeInportVirtual_Inser[8];
    real_T WorldPosition[3];
                         // '<S1>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T qS2W[4];      // '<S1>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T d_f;
    real_T scale;
    real_T absxk;
    real_T t;
    real_T sina;
    real_T sinb;
    real_T t33;
    real_T t34;
    real_T t41;
    real_T t42;
    real_T t43;
    real_T t44;
    real_T t45;
    real_T t55;
    real_T t59;
    real_T t61;
    real_T t68;
    real_T t35;
    real_T t36;
    real_T t37;
    real_T residue;
    real_T t9;
    real_T t10;
    real_T t11;
    real_T t12;
    real_T t13;
    real_T t19;
    real_T t20;
    real_T t24;
    real_T Product1_g;                 // '<S237>/Product1'
    real_T Sum_j;                      // '<S286>/Sum'
    real_T Product2_nyy;               // '<S286>/Product2'
    real_T Product3_ly;                // '<S286>/Product3'
    real_T Product3_mp;                // '<S237>/Product3'
    real_T Sum_ks;                     // '<S273>/Sum'
    real_T Product2_cn;                // '<S237>/Product2'
    real_T Product8_bq;                // '<S240>/Product8'
    real_T Product3_h;                 // '<S262>/Product3'
    real_T Product1_hg;                // '<S262>/Product1'
    real_T Product2_jt;                // '<S262>/Product2'
    real_T Product_o;                  // '<S262>/Product'
    real_T Product1_g_n;               // '<S237>/Product1'
    real_T Sum_ks_e;                   // '<S273>/Sum'
    real_T Product1_g_b;               // '<S237>/Product1'
    real_T Product3_ly_a;              // '<S286>/Product3'
    real_T Product8_bq_i;              // '<S240>/Product8'
    real_T rtb_TSamp_idx_2;
    real_T rtb_Sum_m_idx_2;
    real_T rtb_TSamp_idx_1;
    real_T rtb_Sum_m_idx_1;
    real_T rtb_TSamp_idx_0;
    real_T rtb_Sum_m_idx_0;
    real_T Sum_k;                      // '<S238>/Sum'
    real_T rtb_Sum2_i_tmp;
    real_T rtb_Sum2_i_tmp_n;
    real_T rtb_Sum2_i_tmp_f;
    real_T rtb_Sum2_i_tmp_i;
    real_T rtb_Sum2_i_tmp_k;
    real_T rtb_Sum2_i_tmp_b;
    real_T rtb_Sum2_i_tmp_d;
    real_T rtb_Sum2_i_tmp_h;
    real_T rtb_Sum_k_tmp;
    real_T rtb_Product2_cn_tmp;
    real_T scale_tmp;
    real_T rtb_Product8_bq_tmp;
    real_T t24_tmp;
    real_T t_tmp;
    real_T d_n;
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
    real_T normH;
    real_T s;
    real_T b_B_f;
    real_T c_Kv_a;
    real_T WuI2Jm_m;
    real_T rMin;
    real_T Xnorm0;
    real_T cMin;
    real_T cVal;
    real_T t_g;
    real_T atmp;
    real_T xnorm;
    real_T b_A_n;
    real_T scale_c;
    real_T absxk_d;
    real_T t_k;
    real_T BadH;
    real_T b_p;
    real_T pny1;
    real_T d27;
    real_T t5;
    real_T t6;
    real_T t14;
    real_T t15;
    real_T t16;
    real_T t17;
    real_T t18;
    real_T t19_c;
    real_T constMec_rg;
    real_T constMec_rg_j;
    real_T constMec_rg_m;
    real_T exptj;
    real_T d6_i;
    real_T eta1;
    real_T u;
    real_T e_b;
    real_T ed2;
    real_T d28;
    real_T b_c_o;
    real_T scale_g;
    real_T absxk_e;
    real_T t_i;
    real_T TrialState_lambdasqp;
    real_T phi_alpha;
    real_T fs;
    real_T e_e;
    real_T wtYerr;
    real_T umvk_i;
    real_T duk_m;
    real_T wtYerr_d;
    real_T e_j;
    real_T ic_p;
    real_T runtimedata_OutputMin;
    real_T exptj_b;
    real_T d6_p;
    real_T eta1_n;
    real_T A_c;
    real_T e_n;
    real_T ed2_d;
    real_T d29;
    real_T e_i;
    real_T ic_n;
    real_T runtimedata_OutputMin_b;
    real_T d30;
    real_T fs_b;
    real_T e_jk;
    real_T wtYerr_n;
    real_T duk_f;
    real_T umvk_e;
    real_T wtYerr_i;
    real_T obj_next_next_next_next_next__a;
    real_T d31;
    real_T sina_f;
    real_T sinb_k;
    real_T sinc;
    real_T cosa;
    real_T cosb;
    real_T cosc;
    real_T qt_idx_0;
    real_T qt_idx_1;
    real_T qt_idx_2;
    real_T inputs_c;
    real_T inputs_j;
    real_T inputs_l;
    real_T t20_a;
    real_T t22;
    real_T t23;
    real_T t24_i;
    real_T t27;
    real_T t28;
    real_T t29;
    real_T t30;
    real_T t31;
    real_T t32;
    real_T t36_o;
    real_T t37_b;
    real_T t38;
    real_T t40;
    real_T t41_a;
    real_T t43_a;
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
    real_T in4_tmp_i;
    real_T in4_tmp_iz;
    real_T t122_tmp_tmp;
    real_T in4_tmp_l;
    real_T in4_tmp_o;
    real_T in4_tmp_p;
    real_T in4_tmp_om;
    real_T in4_tmp_c;
    real_T in4_tmp_oc;
    real_T in4_tmp_ol;
    real_T t95_tmp_h;
    real_T t96_tmp_i;
    real_T t99_tmp_g;
    real_T t100_tmp_c;
    real_T t103_tmp_o;
    real_T t104_tmp_g;
    real_T t111_tmp_o;
    real_T t114_tmp_g;
    real_T t118_tmp_a;
    real_T t122_tmp_g;
    real_T in4_tmp_b;
    real_T in4_tmp_k;
    real_T in4_tmp_ca;
    real_T in4_tmp_j;
    real_T in4_tmp_a;
    real_T in4_tmp_d;
    real_T in4_tmp_cx;
    real_T in4_tmp_d0;
    real_T in4_tmp_a2;
    real_T in4_tmp_bo;
    real_T in4_tmp_g;
    real_T in4_tmp_f;
    real_T in4_tmp_cg;
    real_T in4_tmp_pn;
    real_T in4_tmp_at;
    real_T in4_tmp_n;
    real_T in4_tmp_h;
    real_T in4_tmp_m;
    real_T in4_tmp_f5;
    real_T in4_tmp_bw;
    real_T in4_tmp_e;
    real_T in4_tmp_nz;
    real_T in4_tmp_p4;
    real_T in4_tmp_ih;
    real_T in4_tmp_js;
    real_T in4_tmp_lj;
    real_T in4_tmp_ce;
    real_T in4_tmp_gr;
    real_T in4_tmp_c5;
    real_T in4_tmp_ly;
    real_T in4_tmp_ev;
    real_T in4_tmp_dt;
    real_T in4_tmp_my;
    real_T in4_tmp_fi;
    real_T in4_tmp_nl;
    real_T in4_tmp_oi;
    real_T in4_tmp_en;
    real_T in4_tmp_mp;
    real_T in4_tmp_ch;
    real_T in4_tmp_g4;
    real_T in4_tmp_bn;
    real_T in4_tmp_po;
    real_T in4_tmp_p2;
    real_T in4_tmp_ap;
    real_T in4_tmp_fm;
    real_T in4_tmp_gr1;
    real_T in4_tmp_b0;
    real_T in4_tmp_kw;
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
    real_T ct_tmp_k;
    real_T t902_tmp;
    real_T ct_tmp_b;
    real_T ct_tmp_i;
    real_T ct_tmp_n;
    real_T ct_tmp_h;
    real_T ct_tmp_ni;
    real_T ct_tmp_m;
    real_T ct_tmp_g;
    real_T ct_tmp_j;
    real_T ct_tmp_f;
    real_T ct_tmp_ng;
    real_T t900_tmp_g;
    real_T t899_tmp_d;
    real_T t898_tmp_c;
    real_T t901_tmp_m;
    real_T t903_tmp_d;
    real_T t902_tmp_n;
    real_T ct_tmp_bw;
    real_T ct_tmp_p;
    real_T ct_tmp_kg;
    real_T ct_tmp_c;
    real_T ct_tmp_tmp;
    real_T ct_tmp_tmp_n;
    real_T ct_tmp_tmp_nm;
    real_T ct_tmp_tmp_c;
    real_T ct_tmp_d;
    real_T ct_tmp_nq;
    real_T ct_tmp_gu;
    real_T ct_tmp_l;
    real_T ct_tmp_ge;
    real_T ct_tmp_pv;
    real_T ct_tmp_ko;
    real_T ct_tmp_l1;
    real_T ct_tmp_bf;
    real_T ct_tmp_cx;
    real_T ct_tmp_tmp_f;
    real_T ct_tmp_o;
    real_T ct_tmp_dd;
    real_T ct_tmp_ld;
    real_T ct_tmp_ls;
    real_T ct_tmp_dr;
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
    real_T t1546_tmp_k;
    real_T t1543_tmp;
    real_T t1543_tmp_f;
    real_T t1542_tmp;
    real_T out1_tmp;
    real_T out1_tmp_p;
    real_T out1_tmp_k;
    real_T out1_tmp_k4;
    real_T out1_tmp_i;
    real_T out1_tmp_e;
    real_T out1_tmp_f;
    real_T out1_tmp_kx;
    real_T out1_tmp_n;
    real_T out1_tmp_it;
    real_T out1_tmp_im;
    real_T out1_tmp_o;
    real_T out1_tmp_d;
    real_T out1_tmp_iu;
    real_T out1_tmp_g;
    real_T out1_tmp_c;
    real_T out1_tmp_ee;
    real_T out1_tmp_a;
    real_T out1_tmp_h;
    real_T out1_tmp_ef;
    real_T out1_tmp_dw;
    real_T out1_tmp_g5;
    real_T out1_tmp_ev;
    real_T out1_tmp_eq;
    real_T out1_tmp_gm;
    real_T out1_tmp_gk;
    real_T out1_tmp_dz;
    real_T out1_tmp_n1;
    real_T out1_tmp_p2;
    real_T out1_tmp_b;
    real_T out1_tmp_iw;
    real_T out1_tmp_bi;
    real_T out1_tmp_j;
    real_T out1_tmp_gz;
    real_T out1_tmp_nl;
    real_T out1_tmp_p4;
    real_T out1_tmp_fb;
    real_T out1_tmp_fs;
    real_T out1_tmp_aa;
    real_T out1_tmp_g3;
    real_T out1_tmp_m;
    real_T out1_tmp_dv;
    real_T out1_tmp_efd;
    real_T out1_tmp_ey;
    real_T out1_tmp_dl;
    real_T out1_tmp_jb;
    real_T out1_tmp_nx;
    real_T out1_tmp_ju;
    real_T out1_tmp_pm;
    real_T out1_tmp_aw;
    real_T out1_tmp_df;
    real_T out1_tmp_pz;
    real_T out1_tmp_d2;
    real_T out1_tmp_pq;
    real_T out1_tmp_fp;
    real_T out1_tmp_ge;
    real_T out1_tmp_dp;
    real_T out1_tmp_hg;
    real_T out1_tmp_ie;
    real_T out1_tmp_mz;
    real_T out1_tmp_cy;
    real_T out1_tmp_l;
    real_T out1_tmp_pb;
    real_T out1_tmp_i1;
    real_T out1_tmp_b3;
    real_T out1_tmp_gn;
    real_T out1_tmp_oq;
    real_T out1_tmp_b1;
    real_T out1_tmp_ew;
    real_T out1_tmp_e1;
    real_T out1_tmp_lg;
    real_T out1_tmp_cf;
    real_T out1_tmp_e5;
    real_T out1_tmp_dwl;
    real_T out1_tmp_tmp;
    real_T out1_tmp_tmp_o;
    real_T out1_tmp_tmp_l;
    real_T out1_tmp_hga;
    real_T out1_tmp_ln;
    real_T out1_tmp_c5;
    real_T out1_tmp_cx;
    real_T out1_tmp_ag;
    real_T out1_tmp_i2;
    real_T out1_tmp_lt;
    real_T out1_tmp_iy;
    real_T out1_tmp_az;
    real_T out1_tmp_ix;
    real_T out1_tmp_tmp_c;
    real_T out1_tmp_tmp_m;
    real_T out1_tmp_tmp_n;
    real_T out1_tmp_ch;
    real_T out1_tmp_na;
    real_T out1_tmp_hk;
    real_T out1_tmp_iut;
    real_T out1_tmp_ef2;
    real_T out1_tmp_pc;
    real_T out1_tmp_ko;
    real_T out1_tmp_i3;
    real_T out1_tmp_nlp;
    real_T out1_tmp_ob;
    real_T out1_tmp_lc;
    real_T out1_tmp_tmp_p;
    real_T out1_tmp_tmp_b;
    real_T out1_tmp_tmp_f;
    real_T out1_tmp_is;
    real_T out1_tmp_ci;
    real_T out1_tmp_gl;
    real_T out1_tmp_iuw;
    real_T out1_tmp_b11;
    real_T out1_tmp_nad;
    real_T out1_tmp_pn;
    real_T out1_tmp_oo;
    real_T out1_tmp_by;
    real_T out1_tmp_o1;
    real_T out1_tmp_cm;
    real_T out1_tmp_jc;
    real_T out1_tmp_ei;
    real_T out1_tmp_pw;
    real_T out1_tmp_np;
    real_T out1_tmp_oe;
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
    real_T out1_tmp_tmp_e;
    real_T out1_tmp_tmp_pc;
    real_T out1_tmp_dd;
    real_T out1_tmp_fm;
    real_T out1_tmp_n5;
    real_T out1_tmp_o5;
    real_T out1_tmp_du;
    real_T out1_tmp_lm;
    real_T out1_tmp_tmp_fu;
    real_T out1_tmp_tmp_j;
    real_T out1_tmp_tmp_g;
    real_T out1_tmp_ltq;
    real_T out1_tmp_kt;
    real_T out1_tmp_px;
    real_T out1_tmp_bu;
    real_T out1_tmp_i3s;
    real_T out1_tmp_pme;
    real_T out1_tmp_lb;
    real_T out1_tmp_ea;
    real_T out1_tmp_es;
    real_T out1_tmp_pn5;
    real_T out1_tmp_jg;
    real_T out1_tmp_gy;
    real_T out1_tmp_le;
    real_T out1_tmp_jo;
    real_T out1_tmp_tmp_pk;
    real_T out1_tmp_tmp_d;
    real_T out1_tmp_tmp_k;
    real_T out1_tmp_m0;
    real_T out1_tmp_fv;
    real_T out1_tmp_m4;
    real_T out1_tmp_nf;
    real_T out1_tmp_mi;
    real_T out1_tmp_b0;
    real_T out1_tmp_ccz;
    real_T out1_tmp_gw;
    real_T out1_tmp_ck;
    real_T out1_tmp_iz;
    real_T out1_tmp_kv;
    real_T out1_tmp_go;
    real_T out1_tmp_pd;
    real_T out1_tmp_fd;
    real_T out1_tmp_mo;
    real_T out1_tmp_my;
    real_T out1_tmp_lbl;
    real_T out1_tmp_jon;
    real_T out1_tmp_m5;
    real_T out1_tmp_j4;
    real_T out1_tmp_ii;
    real_T out1_tmp_am;
    real_T out1_tmp_hv;
    real_T out1_tmp_ddu;
    real_T out1_tmp_i2p;
    real_T out1_tmp_hr;
    real_T out1_tmp_dj;
    real_T out1_tmp_lb5;
    real_T out1_tmp_f3;
    real_T out1_tmp_lts;
    real_T out1_tmp_tmp_l3;
    real_T out1_tmp_tmp_f4;
    real_T out1_tmp_tmp_gy;
    real_T out1_tmp_gzg;
    real_T out1_tmp_av;
    real_T out1_tmp_du1;
    real_T out1_tmp_bc;
    real_T out1_tmp_dg;
    real_T out1_tmp_fvc;
    real_T out1_tmp_as;
    real_T out1_tmp_mq;
    real_T out1_tmp_ied;
    real_T out1_tmp_ir;
    real_T out1_tmp_kq;
    real_T out1_tmp_au;
    real_T out1_tmp_m2;
    real_T out1_tmp_ce;
    real_T out1_tmp_bo;
    real_T out1_tmp_kg;
    real_T out1_tmp_lr;
    real_T out1_tmp_nz;
    real_T out1_tmp_pp;
    real_T out1_tmp_f0;
    real_T out1_tmp_ko5;
    real_T out1_tmp_en;
    real_T out1_tmp_nadk;
    real_T out1_tmp_ol;
    real_T out1_tmp_ad;
    real_T out1_tmp_bic;
    real_T out1_tmp_ba;
    real_T out1_tmp_mg;
    real_T out1_tmp_mc;
    real_T out1_tmp_kw;
    real_T out1_tmp_mcj;
    real_T out1_tmp_hkh;
    real_T out1_tmp_i15;
    real_T out1_tmp_ct;
    real_T t1524_n;
    real_T t20_i;
    real_T t22_o;
    real_T t23_h;
    real_T t24_p;
    real_T t27_g;
    real_T t28_c;
    real_T t29_g;
    real_T t30_b;
    real_T t31_j;
    real_T t32_h;
    real_T t36_d;
    real_T t37_o;
    real_T t38_k;
    real_T t39;
    real_T t41_j;
    real_T t42_d;
    real_T t44_f;
    real_T t49_a;
    real_T t50;
    real_T t52;
    real_T t80;
    real_T t81;
    real_T t82;
    real_T t83_e;
    real_T t84_n;
    real_T t85_o;
    real_T t86_d;
    real_T t87_c;
    real_T t88_m;
    real_T t89_o;
    real_T t90_b;
    real_T t91_m;
    real_T t92_i;
    real_T t93_i;
    real_T t94_g;
    real_T t95_m;
    real_T t96_n;
    real_T t97_c;
    real_T t100_j;
    real_T t101;
    real_T t102;
    real_T t103_e;
    real_T t104_e;
    real_T t105_k;
    real_T t108_k;
    real_T t111_i;
    real_T t112;
    real_T t113;
    real_T t115_e;
    real_T t117;
    real_T t119;
    real_T t120_l;
    real_T t80_tmp;
    real_T t81_tmp;
    real_T t82_tmp;
    real_T t83_tmp_l;
    real_T t84_tmp_l;
    real_T t85_tmp_o;
    real_T t92_tmp;
    real_T t93_tmp;
    real_T t80_tmp_tmp;
    real_T t82_tmp_tmp;
    real_T t96_tmp_i5;
    real_T t97_tmp;
    real_T t100_tmp_e;
    real_T t101_tmp;
    real_T t108_tmp;
    real_T t111_tmp_l;
    real_T t115_tmp;
    real_T t119_tmp;
    real_T t81_tmp_tmp;
    real_T t84_tmp_tmp_n;
    real_T t83_tmp_tmp_e;
    real_T t85_tmp_tmp_c;
    real_T t96_tmp_tmp_a;
    real_T t97_tmp_tmp;
    real_T t92_tmp_tmp;
    real_T t93_tmp_tmp;
    real_T t111_tmp_tmp_m;
    real_T t108_tmp_tmp;
    real_T t115_tmp_tmp;
    real_T in3_tmp;
    real_T in3_tmp_c;
    real_T in3_tmp_f;
    real_T t119_tmp_tmp;
    real_T in3_tmp_m;
    real_T in3_tmp_k;
    real_T in3_tmp_b;
    real_T in3_tmp_h;
    real_T in3_tmp_hc;
    real_T t92_tmp_h;
    real_T t96_tmp_b;
    real_T t100_tmp_b;
    real_T t119_tmp_d;
    real_T in3_tmp_j;
    real_T in3_tmp_d;
    real_T in3_tmp_l;
    real_T in3_tmp_jk;
    real_T in3_tmp_bi;
    real_T in3_tmp_f2;
    real_T in3_tmp_p;
    real_T in3_tmp_lr;
    real_T in3_tmp_l1;
    real_T in3_tmp_i;
    real_T in3_tmp_o;
    real_T in3_tmp_bv;
    real_T in3_tmp_it;
    real_T in3_tmp_g;
    real_T in3_tmp_po;
    real_T in3_tmp_h5;
    real_T in3_tmp_dd;
    real_T in3_tmp_fb;
    real_T in3_tmp_fo;
    real_T in3_tmp_c1;
    real_T in3_tmp_dk;
    real_T in3_tmp_ca;
    real_T in3_tmp_bc;
    real_T in3_tmp_pw;
    real_T in3_tmp_hh;
    real_T in3_tmp_e;
    real_T in3_tmp_lb;
    real_T in3_tmp_hg;
    real_T in3_tmp_n;
    real_T in3_tmp_kr;
    real_T in3_tmp_bt;
    real_T in3_tmp_oy;
    real_T in3_tmp_ni;
    real_T in3_tmp_fi;
    real_T in3_tmp_gr;
    real_T in3_tmp_dm;
    real_T in3_tmp_d1;
    real_T in3_tmp_ey;
    real_T in3_tmp_ce;
    real_T in3_tmp_a;
    real_T in3_tmp_hp;
    real_T in3_tmp_er;
    real_T in3_tmp_ne;
    real_T in3_tmp_hgs;
    real_T in3_tmp_oc;
    real_T in3_tmp_foh;
    real_T in3_tmp_k1;
    real_T in3_tmp_ej;
    real_T in3_tmp_iw;
    real_T in3_tmp_o3;
    real_T in3_tmp_jo;
    real_T in3_tmp_ky;
    real_T in3_tmp_ja;
    real_T in3_tmp_d0;
    real_T in3_tmp_gn;
    real_T in3_tmp_c5;
    real_T in3_tmp_kh;
    real_T in3_tmp_jn;
    real_T in3_tmp_hcu;
    real_T t93_tmp_c;
    real_T t97_tmp_d;
    real_T t101_tmp_a;
    real_T t108_tmp_p;
    real_T t111_tmp_f;
    real_T t115_tmp_h;
    real_T t896;
    real_T t897;
    real_T t898_j;
    real_T t899_n;
    real_T t900_o;
    real_T t901_o;
    real_T t897_tmp;
    real_T t896_tmp;
    real_T t898_tmp_d;
    real_T ct_tmp_a;
    real_T t899_tmp_k;
    real_T t901_tmp_c;
    real_T ct_tmp_jy;
    real_T t900_tmp_b;
    real_T ct_tmp_nc;
    real_T ct_tmp_dm;
    real_T ct_tmp_hf;
    real_T ct_tmp_bfm;
    real_T ct_tmp_py;
    real_T ct_tmp_bp;
    real_T ct_tmp_px;
    real_T ct_tmp_ne;
    real_T ct_tmp_j2;
    real_T ct_tmp_bn;
    real_T t898_tmp_n;
    real_T t897_tmp_b;
    real_T t896_tmp_j;
    real_T t899_tmp_k0;
    real_T t901_tmp_d;
    real_T t900_tmp_d;
    real_T ct_tmp_o0;
    real_T ct_tmp_cf;
    real_T ct_tmp_oz;
    real_T ct_tmp_aj;
    real_T ct_tmp_tmp_d;
    real_T ct_tmp_tmp_e;
    real_T ct_tmp_tmp_i;
    real_T ct_tmp_tmp_b;
    real_T ct_tmp_an;
    real_T ct_tmp_kz;
    real_T ct_tmp_m2;
    real_T ct_tmp_jx;
    real_T ct_tmp_jm;
    real_T ct_tmp_kgj;
    real_T ct_tmp_kp;
    real_T ct_tmp_ar;
    real_T ct_tmp_kc;
    real_T ct_tmp_fo;
    real_T ct_tmp_tmp_cz;
    real_T ct_tmp_on;
    real_T ct_tmp_kv;
    real_T ct_tmp_p2;
    real_T ct_tmp_f4;
    real_T ct_tmp_dx;
    real_T t1162;
    real_T t1163;
    real_T t1164_e;
    real_T t1459;
    real_T t1483;
    real_T t1484;
    real_T t1485;
    real_T t1488_l;
    real_T t1489_e;
    real_T t1490_h;
    real_T t517;
    real_T t552;
    real_T t575;
    real_T ct_tmp_tmp_g;
    real_T t1456;
    real_T t1457;
    real_T t1458;
    real_T t1479;
    real_T t1499;
    real_T t1527;
    real_T t1533;
    real_T t1533_tmp;
    real_T t1533_tmp_p;
    real_T t1533_tmp_n;
    real_T out1_tmp_o2;
    real_T out1_tmp_lh;
    real_T out1_tmp_fz;
    real_T out1_tmp_h5;
    real_T out1_tmp_d4;
    real_T out1_tmp_mf;
    real_T out1_tmp_iya;
    real_T out1_tmp_j4j;
    real_T out1_tmp_pa;
    real_T out1_tmp_db;
    real_T out1_tmp_jbb;
    real_T out1_tmp_kk;
    real_T out1_tmp_mc5;
    real_T out1_tmp_do;
    real_T out1_tmp_pzl;
    real_T out1_tmp_ig;
    real_T out1_tmp_ged;
    real_T out1_tmp_efo;
    real_T out1_tmp_ha;
    real_T out1_tmp_gq5;
    real_T out1_tmp_cg;
    real_T out1_tmp_a5;
    real_T out1_tmp_fpc;
    real_T out1_tmp_ik;
    real_T out1_tmp_c1;
    real_T out1_tmp_nr;
    real_T out1_tmp_c2;
    real_T out1_tmp_c4;
    real_T out1_tmp_ikw;
    real_T out1_tmp_hu;
    real_T out1_tmp_ml;
    real_T out1_tmp_gol;
    real_T out1_tmp_ox;
    real_T out1_tmp_ms;
    real_T out1_tmp_ex;
    real_T out1_tmp_ean;
    real_T out1_tmp_ilr;
    real_T out1_tmp_fw;
    real_T out1_tmp_hvb;
    real_T out1_tmp_in;
    real_T out1_tmp_pi;
    real_T out1_tmp_aaa;
    real_T out1_tmp_fj;
    real_T out1_tmp_ddh;
    real_T out1_tmp_cu;
    real_T out1_tmp_j1k;
    real_T out1_tmp_c3;
    real_T out1_tmp_nw;
    real_T out1_tmp_jf;
    real_T out1_tmp_ks;
    real_T out1_tmp_os;
    real_T out1_tmp_g2;
    real_T out1_tmp_ksm;
    real_T out1_tmp_j5;
    real_T out1_tmp_px1;
    real_T out1_tmp_hw;
    real_T out1_tmp_nwp;
    real_T out1_tmp_bx;
    real_T out1_tmp_mt;
    real_T out1_tmp_kvt;
    real_T out1_tmp_b4;
    real_T out1_tmp_l1;
    real_T out1_tmp_g5i;
    real_T out1_tmp_g23;
    real_T out1_tmp_n4;
    real_T out1_tmp_c3d;
    real_T out1_tmp_eo;
    real_T out1_tmp_fbf;
    real_T out1_tmp_k4t;
    real_T out1_tmp_cch;
    real_T out1_tmp_dt;
    real_T out1_tmp_mzp;
    real_T out1_tmp_jce;
    real_T out1_tmp_cfl;
    real_T out1_tmp_d41;
    real_T out1_tmp_pdk;
    real_T out1_tmp_ay;
    real_T out1_tmp_m0c;
    real_T out1_tmp_nk;
    real_T out1_tmp_k5;
    real_T out1_tmp_pd3;
    real_T out1_tmp_kx5;
    real_T out1_tmp_gkm;
    real_T out1_tmp_hq;
    real_T out1_tmp_ld;
    real_T out1_tmp_o0;
    real_T out1_tmp_a2;
    real_T out1_tmp_n3;
    real_T out1_tmp_tmp_ov;
    real_T out1_tmp_tmp_da;
    real_T out1_tmp_tmp_h;
    real_T out1_tmp_h4;
    real_T out1_tmp_a0;
    real_T out1_tmp_kg3;
    real_T out1_tmp_jr;
    real_T out1_tmp_dgu;
    real_T out1_tmp_pe;
    real_T out1_tmp_dh;
    real_T out1_tmp_byy;
    real_T out1_tmp_oa;
    real_T out1_tmp_j45;
    real_T out1_tmp_pcj;
    real_T out1_tmp_lj;
    real_T out1_tmp_cyw;
    real_T out1_tmp_min;
    real_T out1_tmp_h50;
    real_T out1_tmp_awu;
    real_T out1_tmp_oqc;
    real_T out1_tmp_io;
    real_T out1_tmp_esa;
    real_T out1_tmp_azw;
    real_T out1_tmp_eu;
    real_T out1_tmp_dz2;
    real_T out1_tmp_lv;
    real_T out1_tmp_if;
    real_T out1_tmp_tmp_nk;
    real_T out1_tmp_tmp_cf;
    real_T out1_tmp_tmp_i;
    real_T out1_tmp_tmp_d4;
    real_T out1_tmp_tmp_b4;
    real_T out1_tmp_at;
    real_T out1_tmp_b5;
    real_T out1_tmp_nt;
    real_T out1_tmp_bil;
    real_T out1_tmp_pik;
    real_T out1_tmp_ihe;
    real_T out1_tmp_kf;
    real_T out1_tmp_cr;
    real_T out1_tmp_nc;
    real_T out1_tmp_bp;
    real_T out1_tmp_msx;
    real_T out1_tmp_mr;
    real_T out1_tmp_n2;
    real_T out1_tmp_mze;
    real_T out1_tmp_lv4;
    real_T out1_tmp_tmp_o0;
    real_T out1_tmp_tmp_ix;
    real_T out1_tmp_tmp_p4;
    real_T out1_tmp_nm;
    real_T out1_tmp_c0;
    real_T out1_tmp_et;
    real_T out1_tmp_jv;
    real_T out1_tmp_l2;
    real_T out1_tmp_jt;
    real_T out1_tmp_c3v;
    real_T out1_tmp_bd;
    real_T out1_tmp_i0;
    real_T out1_tmp_kz;
    real_T out1_tmp_lo;
    real_T out1_tmp_j2;
    real_T out1_tmp_mqi;
    real_T out1_tmp_jh;
    real_T out1_tmp_euk;
    real_T out1_tmp_dt4;
    real_T out1_tmp_j4n;
    real_T out1_tmp_k1;
    real_T out1_tmp_oc;
    real_T out1_tmp_nc4;
    real_T out1_tmp_bz;
    real_T out1_tmp_tmp_ih;
    real_T out1_tmp_tmp_dm;
    real_T out1_tmp_tmp_dp;
    real_T out1_tmp_pai;
    real_T out1_tmp_esz;
    real_T out1_tmp_ne;
    real_T out1_tmp_dzj;
    real_T out1_tmp_md;
    real_T out1_tmp_gmp;
    real_T out1_tmp_ij;
    real_T out1_tmp_km;
    real_T out1_tmp_imi;
    real_T out1_tmp_mc1;
    real_T out1_tmp_jm;
    real_T out1_tmp_ap;
    real_T out1_tmp_iwk;
    real_T out1_tmp_ec;
    real_T out1_tmp_ikj;
    real_T out1_tmp_hvm;
    real_T out1_tmp_mgj;
    real_T out1_tmp_tmp_a;
    real_T out1_tmp_tmp_of;
    real_T out1_tmp_tmp_os;
    real_T out1_tmp_nt0;
    real_T out1_tmp_k2;
    real_T out1_tmp_hn;
    real_T out1_tmp_d4y;
    real_T out1_tmp_ae;
    real_T out1_tmp_hgc;
    real_T out1_tmp_ccm;
    real_T out1_tmp_bvr;
    real_T out1_tmp_ch5;
    real_T out1_tmp_gk1;
    real_T out1_tmp_pj;
    real_T out1_tmp_ib;
    real_T out1_tmp_jj;
    real_T out1_tmp_cee;
    real_T out1_tmp_ceq;
    real_T out1_tmp_fe;
    real_T out1_tmp_dy;
    real_T out1_tmp_nrd;
    real_T out1_tmp_br;
    real_T out1_tmp_f0v;
    real_T out1_tmp_j1km;
    real_T out1_tmp_hc;
    real_T out1_tmp_hgh;
    real_T out1_tmp_c2o;
    real_T out1_tmp_gr;
    real_T out1_tmp_ej;
    real_T out1_tmp_eq5;
    real_T out1_tmp_avz;
    real_T out1_tmp_hz;
    real_T out1_tmp_gc;
    real_T out1_tmp_ak;
    real_T out1_tmp_gu;
    real_T out1_tmp_oav;
    real_T out1_tmp_akz;
    real_T out1_tmp_e3;
    real_T out1_tmp_haj;
    real_T out1_tmp_jx;
    real_T out1_tmp_bq;
    real_T out1_tmp_kqx;
    real_T out1_tmp_hqe;
    real_T out1_tmp_ddt;
    real_T out1_tmp_oh;
    real_T out1_tmp_ku;
    real_T out1_tmp_k0;
    real_T d32;
    real_T t15_o;
    real_T t17_d;
    real_T t19_l;
    real_T t23_m;
    real_T t25;
    real_T t27_o;
    real_T t33_a;
    real_T t34_i;
    real_T t35_f;
    real_T t37_a;
    real_T t38_g;
    real_T t39_k;
    real_T t41_l;
    real_T t42_e;
    real_T t43_e;
    real_T t44_ft;
    real_T t45_d;
    real_T t47;
    real_T t50_b;
    real_T t57;
    real_T t58;
    real_T t129;
    real_T t130;
    real_T t131;
    real_T t133;
    real_T t134;
    real_T t135;
    real_T in3_tmp_ol;
    real_T in3_tmp_py;
    real_T in3_tmp_lf;
    real_T in3_tmp_do;
    real_T in3_tmp_lt;
    real_T in3_tmp_ad;
    real_T in3_tmp_nk;
    real_T in3_tmp_es;
    real_T in3_tmp_nf;
    real_T in3_tmp_tmp;
    real_T in3_tmp_tmp_h;
    real_T in3_tmp_ah;
    real_T in3_tmp_b5;
    real_T in3_tmp_k5;
    real_T in3_tmp_aw;
    real_T in3_tmp_km;
    real_T in3_tmp_pa;
    real_T in3_tmp_o34;
    real_T in3_tmp_c4;
    real_T in3_tmp_khq;
    real_T in3_tmp_hs;
    real_T in3_tmp_tmp_b;
    real_T in3_tmp_tmp_e;
    real_T in3_tmp_tmp_c;
    real_T in3_tmp_tmp_o;
    real_T in3_tmp_tmp_a;
    real_T in3_tmp_tmp_p;
    real_T in3_tmp_tmp_ok;
    real_T in3_tmp_tmp_l;
    real_T in3_tmp_fr;
    real_T in3_tmp_pn;
    real_T in3_tmp_p5;
    real_T in3_tmp_br;
    real_T in3_tmp_k0;
    real_T in3_tmp_me;
    real_T in3_tmp_gk;
    real_T in3_tmp_b5t;
    real_T in3_tmp_il;
    real_T in3_tmp_bs;
    real_T in3_tmp_h2;
    real_T in3_tmp_df;
    real_T in3_tmp_f5;
    real_T in3_tmp_dkn;
    real_T in3_tmp_pp;
    real_T in3_tmp_gs;
    real_T in3_tmp_tmp_f;
    real_T in3_tmp_tmp_o2;
    real_T in3_tmp_tmp_f4;
    real_T in3_tmp_tmp_o3;
    real_T in3_tmp_tmp_l0;
    real_T in3_tmp_tmp_e3;
    real_T in3_tmp_tmp_g;
    real_T in3_tmp_tmp_ba;
    real_T in3_tmp_tmp_j;
    real_T in3_tmp_tmp_fp;
    real_T in3_tmp_co;
    real_T in3_tmp_fof;
    real_T in3_tmp_bn;
    real_T in3_tmp_de;
    real_T in3_tmp_jm;
    real_T in3_tmp_tmp_oe;
    real_T in3_tmp_li;
    real_T in3_tmp_gj;
    real_T in3_tmp_tmp_m;
    real_T in3_tmp_tmp_gh;
    real_T in3_tmp_tmp_tmp;
    real_T in3_tmp_tmp_an;
    real_T in3_tmp_tmp_ey;
    real_T in3_tmp_b0;
    real_T in3_tmp_tmp_ez;
    real_T in3_tmp_tmp_tmp_m;
    real_T in3_tmp_tmp_tmp_h;
    real_T in3_tmp_tmp_br;
    real_T in3_tmp_dmg;
    real_T in3_tmp_oh;
    real_T in3_tmp_tmp_tmp_k;
    real_T in3_tmp_tmp_tmp_mr;
    real_T in3_tmp_fj;
    real_T in3_tmp_ox;
    real_T in3_tmp_itv;
    real_T in3_tmp_ka;
    real_T in3_tmp_kg;
    real_T in3_tmp_n1;
    real_T in3_tmp_fq;
    real_T in3_tmp_mz;
    real_T in3_tmp_ia;
    real_T in3_tmp_ii;
    real_T in3_tmp_bl;
    real_T in3_tmp_nt;
    real_T in3_tmp_ir;
    real_T in3_tmp_nj;
    real_T in3_tmp_m0;
    real_T in3_tmp_ppg;
    real_T in3_tmp_k1e;
    real_T in3_tmp_p3;
    real_T in3_tmp_eq;
    real_T in3_tmp_k2;
    real_T in3_tmp_bro;
    real_T in3_tmp_lm;
    real_T in3_tmp_j1;
    real_T in3_tmp_jx;
    real_T in3_tmp_kz;
    real_T in3_tmp_pf;
    real_T in3_tmp_p3r;
    real_T in3_tmp_et;
    real_T in3_tmp_hl;
    real_T in3_tmp_i1;
    real_T in3_tmp_jd;
    real_T in3_tmp_a2;
    real_T in3_tmp_jh;
    real_T in3_tmp_gc;
    real_T in3_tmp_njm;
    real_T in3_tmp_lmf;
    real_T in3_tmp_eq1;
    real_T ct_tmp_cg;
    real_T ct_tmp_hy;
    real_T ct_tmp_o4;
    real_T ct_tmp_dz;
    real_T ct_tmp_df;
    real_T ct_tmp_j4;
    real_T ct_tmp_f2;
    real_T ct_tmp_k2;
    real_T ct_tmp_nex;
    real_T ct_tmp_nb;
    real_T ct_tmp_ic;
    real_T ct_tmp_e;
    real_T ct_tmp_kj;
    real_T ct_tmp_k3;
    real_T ct_tmp_p0;
    real_T ct_tmp_kn;
    real_T ct_tmp_p1;
    real_T ct_tmp_tmp_p;
    real_T ct_tmp_tmp_bp;
    real_T ct_tmp_tmp_cc;
    real_T ct_tmp_tmp_de;
    real_T ct_tmp_tmp_c0;
    real_T ct_tmp_ad;
    real_T ct_tmp_icn;
    real_T ct_tmp_du;
    real_T ct_tmp_foe;
    real_T ct_tmp_nee;
    real_T ct_tmp_gy;
    real_T ct_tmp_of;
    real_T ct_tmp_mi;
    real_T ct_tmp_hl;
    real_T ct_tmp_eh;
    real_T ct_tmp_mw;
    real_T ct_tmp_im;
    real_T ct_tmp_h4;
    real_T ct_tmp_nm;
    real_T ct_tmp_ed;
    real_T ct_tmp_e4;
    real_T ct_tmp_o1;
    real_T ct_tmp_oq;
    real_T ct_tmp_fr;
    real_T ct_tmp_mh;
    real_T ct_tmp_gf;
    real_T ct_tmp_cc;
    real_T ct_tmp_kb;
    real_T ct_tmp_dd1;
    real_T ct_tmp_cm;
    real_T ct_tmp_knj;
    real_T ct_tmp_kl;
    real_T ct_tmp_fw;
    real_T ct_tmp_gm;
    real_T ct_tmp_k35;
    real_T ct_tmp_nk;
    real_T ct_tmp_pn;
    real_T ct_tmp_e2;
    real_T ct_tmp_l3;
    real_T ct_tmp_ak;
    real_T ct_tmp_e4t;
    real_T ct_tmp_g4;
    real_T ct_tmp_fp;
    real_T ct_tmp_ei;
    real_T ct_tmp_nu;
    real_T ct_tmp_mz;
    real_T ct_tmp_bwf;
    real_T ct_tmp_nh;
    real_T ct_tmp_c4;
    real_T ct_tmp_mk;
    real_T ct_tmp_js;
    real_T ct_tmp_hu;
    real_T ct_tmp_ct;
    real_T ct_tmp_mq;
    real_T ct_tmp_nbb;
    real_T ct_tmp_ef;
    real_T ct_tmp_ce;
    real_T ct_tmp_tmp_bf;
    real_T ct_tmp_tmp_py;
    real_T ct_tmp_ik;
    real_T ct_tmp_oh;
    real_T ct_tmp_n3;
    real_T ct_tmp_me;
    real_T ct_tmp_m4;
    real_T ct_tmp_dt;
    real_T ct_tmp_ic2;
    real_T ct_tmp_e1;
    real_T ct_tmp_kb0;
    real_T ct_tmp_pyr;
    real_T ct_tmp_j3;
    real_T ct_tmp_cq;
    real_T ct_tmp_b2;
    real_T ct_tmp_lv;
    real_T ct_tmp_nx;
    real_T ct_tmp_al;
    real_T ct_tmp_nd;
    real_T ct_tmp_dy;
    real_T ct_tmp_gw;
    real_T ct_tmp_f1;
    real_T ct_tmp_gg;
    real_T ct_tmp_la;
    real_T ct_tmp_laf;
    real_T ct_tmp_or;
    real_T ct_tmp_kh;
    real_T ct_tmp_g1;
    real_T ct_tmp_klx;
    real_T ct_tmp_jc;
    real_T ct_tmp_kt;
    real_T ct_tmp_g1b;
    real_T ct_tmp_h0;
    real_T ct_tmp_me2;
    real_T ct_tmp_kr;
    real_T ct_tmp_cz;
    real_T ct_tmp_huh;
    real_T ct_tmp_hi;
    real_T ct_tmp_dl;
    real_T ct_tmp_bl;
    real_T ct_tmp_pr;
    real_T ct_tmp_cs;
    real_T ct_tmp_b5;
    real_T ct_tmp_lt;
    real_T ct_tmp_oy;
    real_T ct_tmp_ddo;
    real_T ct_tmp_mwc;
    real_T ct_tmp_nr;
    real_T ct_tmp_me3;
    real_T ct_tmp_in;
    real_T ct_tmp_ol;
    real_T ct_tmp_ajs;
    real_T ct_tmp_kd;
    real_T ct_tmp_mi5;
    real_T ct_tmp_gp;
    real_T ct_tmp_nl;
    real_T ct_tmp_ic5;
    real_T ct_tmp_ev;
    real_T ct_tmp_e0;
    real_T ct_tmp_bx;
    real_T ct_tmp_iv;
    real_T ct_tmp_khq;
    real_T ct_tmp_dk;
    real_T ct_tmp_ke;
    real_T ct_tmp_az;
    real_T ct_tmp_if;
    real_T ct_tmp_bs;
    real_T ct_tmp_e5;
    real_T ct_tmp_lp;
    real_T ct_tmp_iq;
    real_T ct_tmp_bq;
    real_T ct_tmp_el;
    real_T ct_tmp_bb;
    real_T ct_tmp_ir;
    real_T ct_tmp_m1;
    real_T ct_tmp_l4;
    real_T ct_tmp_oo;
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
    real_T t3247_tmp_n;
    real_T Anq_tmp;
    real_T Anq_tmp_tmp;
    real_T Anq_tmp_i;
    real_T Anq_tmp_o;
    real_T Anq_tmp_m;
    real_T Anq_tmp_a;
    real_T Anq_tmp_c;
    real_T Anq_tmp_d;
    real_T Anq_tmp_tmp_g;
    real_T Anq_tmp_h;
    real_T Anq_tmp_b;
    real_T Anq_tmp_ds;
    real_T t2;
    real_T t3;
    real_T t4;
    real_T t5_c;
    real_T t6_h;
    real_T t7;
    real_T t8;
    real_T t9_f;
    real_T t10_n;
    real_T t11_d;
    real_T t12_e;
    real_T t13_e;
    real_T t17_p;
    real_T t18_n;
    real_T t19_f;
    real_T t20_e;
    real_T t21;
    real_T t22_k;
    real_T t23_f;
    real_T t24_k;
    real_T t25_p;
    real_T t26;
    real_T t27_h;
    real_T t28_d;
    real_T t29_d;
    real_T t30_d;
    real_T t31_j5;
    real_T t32_a;
    real_T t33_al;
    real_T t34_a;
    real_T t39_l;
    real_T t40_i;
    real_T t41_n;
    real_T t42_b;
    real_T t43_h;
    real_T t44_b;
    real_T t45_a;
    real_T t55_b;
    real_T t56;
    real_T t57_l;
    real_T t58_h;
    real_T t59_d;
    real_T t61_g;
    real_T t62;
    real_T t65;
    real_T t68_j;
    real_T t35_m;
    real_T t36_l;
    real_T t37_oe;
    real_T t27_tmp;
    real_T t31_tmp;
    real_T t24_tmp_p;
    real_T t32_tmp;
    real_T t25_tmp;
    real_T t29_tmp;
    real_T b_atmp;
    real_T xnorm_d;
    real_T M_g;
    real_T scale_m;
    real_T absxk_o;
    real_T t_f;
    real_T c_i;
    real_T x_d;
    real_T b_atmp_f;
    real_T xnorm_n;
    real_T M_dj;
    real_T scale_cj;
    real_T absxk_b;
    real_T t_b;
    real_T rMin_h;
    real_T Xnorm0_g;
    real_T cMin_c;
    real_T cVal_d;
    real_T t_a;
    real_T Linv;
    real_T atmp_h;
    real_T xnorm_c;
    real_T scale_cf;
    real_T absxk_m;
    real_T t_o;
    real_T b_atmp_e;
    real_T xnorm_j;
    real_T M_l;
    real_T scale_n;
    real_T absxk_en;
    real_T t_c;
    real_T b_atmp_j;
    real_T xnorm_m;
    real_T M_e;
    real_T scale_h;
    real_T absxk_c;
    real_T t_j;
    real_T epsilon;
    real_T scale_a;
    real_T absxk_do;
    real_T t_bb;
    real_T b_atmp_c;
    real_T xnorm_a;
    real_T M_i;
    real_T scale_p;
    real_T absxk_me;
    real_T t_b1;
    real_T d_e;
    real_T s_f;
    real_T d_m;
    real_T s_a;
    real_T ic_o;
    real_T t8_l;
    real_T t9_p;
    real_T t11_dm;
    real_T t12_b;
    real_T t13_d;
    real_T t14_d;
    real_T t15_e;
    real_T t16_l;
    real_T t25_k;
    real_T t29_l;
    real_T t31_jt;
    real_T t50_h;
    real_T t53;
    real_T t54;
    real_T t17_k;
    real_T t18_e;
    real_T t19_g;
    real_T t57_c;
    real_T t64;
    real_T t65_o;
    real_T t68_l;
    real_T t69;
    real_T t70;
    real_T t12_tmp;
    real_T t13_tmp;
    real_T t14_tmp;
    real_T t15_tmp;
    real_T out1_tmp_ejk;
    real_T out1_tmp_me;
    real_T out1_tmp_o15;
    real_T out1_tmp_eh;
    real_T out1_tmp_mrk;
    real_T out1_tmp_jol;
    real_T out1_tmp_hj;
    real_T out1_tmp_nag;
    real_T out1_tmp_jcq;
    real_T out1_tmp_dx;
    real_T out1_tmp_jxr;
    real_T out1_tmp_kqm;
    real_T out1_tmp_bk;
    real_T holdPoint;
    real_T d33;
    real_T newSegmentCoeffs_l;
    real_T newSegmentCoeffs_j;
    real_T d34;
    real_T d35;
    real_T b_atmp_n;
    real_T xnorm_g;
    real_T M_do;
    real_T scale_o;
    real_T absxk_a;
    real_T t_e;
    real_T anrm;
    real_T absx;
    real_T cfromc;
    real_T cfrom1;
    real_T cto1;
    real_T mul;
    real_T tst;
    real_T p_o;
    real_T r_i;
    real_T s_b;
    real_T c_a;
    real_T b_j;
    real_T b_s;
    real_T b_anorm;
    real_T e_a;
    real_T sm;
    real_T df;
    real_T adf;
    real_T tb;
    real_T ab;
    real_T acmx;
    real_T acmn;
    real_T b_a_g;
    real_T anrm_o;
    real_T absx_a;
    real_T ctoc;
    real_T cfrom1_c;
    real_T cto1_d;
    real_T mul_d;
    real_T tst_l;
    real_T p_d;
    real_T r_j;
    real_T s_k;
    real_T c_d;
    real_T b_ce;
    real_T c_s;
    real_T anorm;
    real_T e_k;
    real_T sm_p;
    real_T df_e;
    real_T adf_i;
    real_T tb_b;
    real_T ab_i;
    real_T acmx_h;
    real_T acmn_d;
    real_T a_g;
    real_T normH_m;
    real_T absx_g;
    real_T ssq;
    real_T c_h;
    real_T c_ao;
    real_T qF_b;
    real_T qF_c;
    real_T linearScaling;
    real_T n_e;
    real_T q1normed_a;
    real_T q1normed_b;
    real_T q1normed_c;
    real_T q1normed_d;
    real_T a2;
    real_T b2;
    real_T c2;
    real_T dp;
    real_T theta0;
    real_T sinv;
    real_T sin1;
    real_T oa;
    real_T oa_i;
    real_T ob;
    real_T oc;
    real_T od;
    real_T assign_temp_a_data;
    real_T assign_temp_b_data;
    real_T assign_temp_c_data;
    real_T assign_temp_d_data;
    real_T b_idx_0;
    real_T h_idx_0;
    real_T q1normed_a_h;
    real_T q1normed_b_k;
    real_T q1normed_c_f;
    real_T q1normed_d_l;
    real_T n_o;
    real_T a2_l;
    real_T b2_d;
    real_T c2_a;
    real_T dp_j;
    real_T theta0_o;
    real_T sinv_e;
    real_T sin1_m;
    real_T assign_temp_a_data_d;
    real_T assign_temp_b_data_c;
    real_T assign_temp_c_data_i;
    real_T assign_temp_d_data_k;
    real_T c_idx_0;
    real_T nrmGradInf;
    real_T nrmDirInf;
    real_T beta;
    real_T qpfvalQuadExcess;
    real_T smax;
    real_T s_c;
    real_T TrialState_cIneq;
    real_T maxConstr_new;
    real_T normDelta;
    real_T solution_lambda;
    real_T tempMaxConstr;
    real_T constrViolation_basicX;
    real_T temp;
    real_T smax_f;
    real_T s_j;
    real_T vn1;
    real_T xnorm_i;
    real_T a_c3;
    real_T scale_d;
    real_T absxk_ai;
    real_T t_h;
    real_T temp_k;
    real_T smax_k;
    real_T s_n;
    real_T temp_j;
    real_T smax_b;
    real_T s_e;
    real_T smax_m;
    real_T s_o;
    real_T scale_k;
    real_T absxk_ak;
    real_T t_n;
    real_T a_p1;
    real_T c_dq;
    real_T tmp;
    real_T cosa_a;
    real_T cosc_e;
    real_T cosb_m;
    real_T f_idx_0;
    real_T t8_f;
    real_T t9_h;
    real_T t11_b;
    real_T t12_f;
    real_T t13_l;
    real_T t14_p;
    real_T t15_n;
    real_T t16_i;
    real_T t25_b;
    real_T t29_e;
    real_T t31_p;
    real_T t50_o;
    real_T t53_f;
    real_T t54_d;
    real_T t17_i;
    real_T t18_i;
    real_T t19_h;
    real_T t57_f;
    real_T t64_h;
    real_T t65_l;
    real_T t68_g;
    real_T t69_l;
    real_T t70_m;
    real_T t12_tmp_n;
    real_T t13_tmp_n;
    real_T t14_tmp_l;
    real_T t15_tmp_p;
    real_T out1_tmp_lng;
    real_T out1_tmp_pg;
    real_T out1_tmp_mrz;
    real_T out1_tmp_ckw;
    real_T out1_tmp_azn;
    real_T b_c_g;
    real_T normDelta_c;
    real_T solution_lambda_c;
    real_T smax_m0;
    real_T s_bu;
    real_T smax_e;
    real_T s_bj;
    real_T y_i;
    real_T penaltyParamTrial;
    real_T constrViolationEq;
    real_T constrViolationIneq;
    real_T TrialState_cIneq_l;
    real_T constrViolation;
    real_T tol;
    real_T maxDiag;
    real_T b_atmp_d;
    real_T tau_f;
    real_T c_g;
    real_T q1normed_a_l;
    real_T q1normed_b_o;
    real_T q1normed_c_i;
    real_T q1normed_d_d;
    real_T n_a;
    real_T a2_o;
    real_T b2_i;
    real_T c2_m;
    real_T dp_h;
    real_T theta0_l;
    real_T sinv_a;
    real_T assign_temp_a_data_n;
    real_T assign_temp_b_data_j;
    real_T assign_temp_c_data_l;
    real_T assign_temp_d_data_g;
    real_T b_Wy;
    real_T d36;
    real_T W;
    real_T d37;
    real_T c_c_m;
    real_T b_s_d;
    real_T b_temp;
    real_T roe;
    real_T absa;
    real_T absb;
    real_T scale_l;
    real_T ads;
    real_T bds;
    real_T nlpComplErrorTmp;
    real_T smax_d;
    real_T s_jx;
    real_T d38;
    real_T temp_ju;
    real_T temp2;
    real_T taui;
    real_T xnorm_f;
    real_T tau_tmp;
    real_T scale_ge;
    real_T absxk_n;
    real_T t_e1;
    real_T temp1;
    real_T taui_d;
    real_T xnorm_ay;
    real_T tau_tmp_h;
    real_T scale_b;
    real_T absxk_i;
    real_T t_p;
    real_T denomTol;
    real_T alphaTemp;
    real_T phaseOneCorrectionP;
    real_T ratio;
    real_T b_c_b;
    real_T c_m;
    real_T vnorm;
    real_T qnorm;
    real_T vscale_data;
    real_T l;
    real_T t_ge;
    real_T bb;
    real_T ssq_k;
    real_T c_gs;
    real_T tempMaxConstr_p;
    real_T obj_maxConstrWorkspace;
    real_T c_f;
    real_T tol_h;
    real_T maxDiag_h;
    real_T tol_b;
    real_T qtb;
    real_T temp_n;
    real_T d39;
    real_T input;
    real_T sec;
    real_T alpha1;
    real_T y_e;
    real_T temp_l;
    real_T s_jl;
    real_T temp_m;
    real_T b_c_i;
    real_T smax_b3;
    real_T s_ev;
    real_T d40;
    real_T sina_h;
    real_T sinb_n;
    real_T sinc_g;
    real_T cosa_i;
    real_T cosb_a;
    real_T cosc_p;
    real_T q_tmp;
    real_T ctemp;
    real_T stemp;
    real_T temp_mj;
    real_T obj_maxConstrWorkspace_k;
    real_T c_he;
    real_T obj_maxConstrWorkspace_b;
    real_T c_fp;
    real_T delta;
    real_T expa;
    real_T sinchdelta;
    real_T A_b;
    real_T A_i;
    real_T delta_j;
    real_T expa_e;
    real_T sinchdelta_k;
    real_T A_cm;
    real_T A_f;
    real_T dotSY;
    real_T curvatureS;
    real_T temp_g;
    real_T cfromc_h;
    real_T ctoc_c;
    real_T cfrom1_l;
    real_T cto1_j;
    real_T mul_n;
    real_T cfromc_f;
    real_T ctoc_e;
    real_T cfrom1_p;
    real_T cto1_a;
    real_T mul_b;
    real_T cfromc_g;
    real_T ctoc_f;
    real_T cfrom1_k;
    real_T cto1_o;
    real_T mul_g;
    real_T cfromc_p;
    real_T ctoc_n;
    real_T cfrom1_d;
    real_T cto1_i;
    real_T mul_p;
    real_T ctemp_e;
    real_T stemp_g;
    real_T temp_gk;
    real_T ctemp_a;
    real_T stemp_f;
    real_T temp_g3;
    real_T ctemp_i;
    real_T stemp_c;
    real_T temp_p;
    real_T a_gv;
    real_T b_jj;
    real_T xloc;
    real_T v_n;
    real_T v_nv;
    real_T v_j;
    real_T ssq_j;
    real_T c_hz;
    real_T c_p;
    real_T temp_pp;
    real_T B_l;
    real_T B_d;
    real_T d41;
    real_T lbDelta;
    real_T lbLambda;
    real_T WorkingSet_beq;
    real_T scale_hs;
    real_T absxk_bw;
    real_T t_l;
    real_T temp_gy;
    real_T b_B_g;
    real_T absx_gr;
    real_T z_o;
    real_T s_k0;
    real_T R_p;
    real_T d42;
    real_T d43;
    real_T c_pn;
    real_T constrViolationEq_e;
    real_T constrViolationIneq_k;
    real_T Cineq_workspace;
    real_T scale_ns;
    real_T absxk_es;
    real_T t_ot;
    real_T temp_d;
    real_T scale_gj;
    real_T absxk_dl;
    real_T t_m;
    real_T temp_juz;
    real_T c_mp;
    real_T temp_d0;
    real_T c_ij;
    real_T scale_hq;
    real_T absxk_ce;
    real_T t_fy;
    real_T scale_gq;
    real_T absxk_k;
    real_T t_cn;
    real_T f1;
    real_T fs_c;
    real_T gs;
    real_T f1_g;
    real_T fs_f;
    real_T gs_h;
    real_T posPts_idx_0;
    real_T posPts_idx_1;
    real_T coeffVec_tmp;
    real_T sr;
    real_T si;
    real_T x_ee;
    real_T tol_i;
    real_T x_f;
    real_T allFinite_tmp;
    real_T x_l;
    real_T s_bk;
    real_T s_f0;
    real_T allFinite_tmp_i;
    real_T b_signal;
    real_T b_signal_g;
    real_T t_px;
    real_T t_ms;
    real_T B_m;
    SL_Bus_std_msgs_UInt8 In1_me;      // '<S43>/In1'
    SL_Bus_std_msgs_Float32 In1_b;     // '<S56>/In1'
    SL_Bus_std_msgs_Float32 In1_hb;    // '<S86>/In1'
    SL_Bus_std_msgs_Bool In1_gf;       // '<S47>/In1'
    SL_Bus_sonia_common_ros2_KillStatus In1_lz;// '<S46>/In1'
    int64_T b_value;
    boolean_T umax_incr_flag[8];
    boolean_T umin_incr_flag[8];
    boolean_T umax_incr_flag_p[8];
    boolean_T umin_incr_flag_j[8];
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
    int32_T Kx_size[2];
    int32_T Kv_size[2];
    int32_T y_size[2];
    int32_T varargin_2_size[2];
    int32_T varargin_4_size[2];
    int32_T bb_size[2];
    int32_T Cineq_size[2];
    int32_T JacCineqTrans_size[2];
    int32_T b_size[2];
    int32_T varargin_1_size[2];
    int32_T a__3_size[2];
    int32_T a__4_size[2];
    int32_T varargin_1_size_g[2];
    int32_T b_varargin_1_size[2];
    int32_T RLinv_size[2];
    int32_T b_D_size[2];
    int32_T b_H_size_j[2];
    int32_T x_size[2];
    int32_T Q_size[2];
    int32_T b_A_size[2];
    int32_T b_size_f[2];
    int32_T assign_temp_a_size[2];
    int32_T assign_temp_b_size[2];
    int32_T assign_temp_c_size[2];
    int32_T assign_temp_d_size[2];
    int32_T assign_temp_a_size_d[2];
    int32_T assign_temp_b_size_a[2];
    int32_T assign_temp_c_size_c[2];
    int32_T assign_temp_d_size_c[2];
    int32_T assign_temp_a_size_i[2];
    int32_T assign_temp_b_size_e[2];
    int32_T assign_temp_c_size_i[2];
    int32_T assign_temp_d_size_b[2];
    int32_T tmp_size[2];
    int32_T in6_size[2];
    int32_T vscale_size[2];
    int32_T e_size[2];
    rmw_qos_profile_t qos_profile;
    rmw_qos_profile_t qos_profile_g;
    rmw_qos_profile_t qos_profile_c;
    rmw_qos_profile_t qos_profile_k;
    rmw_qos_profile_t qos_profile_d;
    rmw_qos_profile_t qos_profile_kx;
    rmw_qos_profile_t qos_profile_p;
    rmw_qos_profile_t qos_profile_p5;
    rmw_qos_profile_t qos_profile_m;
    rmw_qos_profile_t qos_profile_kt;
    rmw_qos_profile_t qos_profile_a;
    rmw_qos_profile_t qos_profile_f;
    rmw_qos_profile_t qos_profile_ci;
    rmw_qos_profile_t qos_profile_j;
    rmw_qos_profile_t qos_profile_kb;
    rmw_qos_profile_t qos_profile_h;
    rmw_qos_profile_t qos_profile_d1;
    rmw_qos_profile_t qos_profile_j1;
    rmw_qos_profile_t qos_profile_n;
    rmw_qos_profile_t qos_profile_j0;
    rmw_qos_profile_t qos_profile_l;
    rmw_qos_profile_t qos_profile_ph;
    rmw_qos_profile_t qos_profile_po;
    rmw_qos_profile_t qos_profile_ly;
    rmw_qos_profile_t qos_profile_ld;
    rmw_qos_profile_t qos_profile_hb;
    rmw_qos_profile_t qos_profile_cg;
    rmw_qos_profile_t qos_profile_g0;
    rmw_qos_profile_t qos_profile_e;
    rmw_qos_profile_t qos_profile_n3;
    int8_T b_ipiv_n[6];
    int8_T ipiv_m[6];
    boolean_T b_i[4];
    int16_T sizes[2];
    int16_T sizes_n[2];
    int16_T Jx_e[2];
    int16_T iv6[2];
    int16_T Jx_g[2];
    int16_T idx[2];
    real32_T rtb_Merge2_data;
    int32_T base_index;
    int32_T ibmat;
    int32_T b_j_j;
    int32_T Ns;
    int32_T i;
    int32_T b_i_a;
    int32_T ibmat_i;
    int32_T ibmat_c;
    int32_T ibmat_l;
    int32_T K_tmp;
    int32_T modCoeffs_tmp;
    int32_T kidx;
    int32_T i2;
    int32_T Tries;
    int32_T i_h;
    int32_T i_i;
    int32_T kidx_n;
    int32_T b_H_tmp;
    int32_T nA;
    int32_T tmp_j;
    int32_T exponent;
    int32_T b_exponent;
    int32_T i_k;
    int32_T iSave;
    int32_T iC_m;
    int32_T U_tmp;
    int32_T k_i;
    int32_T ii;
    int32_T knt;
    int32_T b_lastv;
    int32_T coltop;
    int32_T b_coltop;
    int32_T b_lastv_i;
    int32_T kend;
    int32_T k;
    int32_T pny;
    int32_T pnu;
    int32_T nmoves;
    int32_T TotalFreeMoves;
    int32_T j;
    int32_T ioff;
    int32_T b_j_p;
    int32_T i_h0;
    int32_T end;
    int32_T loop_ub;
    int32_T loop_ub_f;
    int32_T i_input_sizes_idx_1;
    int32_T nmoves_tmp;
    int32_T s_size_idx_0;
    int32_T Mu_size_idx_1;
    int32_T y_data_tmp;
    int32_T i_l;
    int32_T Su_size_idx_0;
    int32_T loop_ub_a;
    int32_T i1;
    int32_T loop_ub_fn;
    int32_T loop_ub_c;
    int32_T input_sizes_idx_0;
    int32_T b_input_sizes_idx_0;
    int32_T CA_tmp;
    int32_T Sum_tmp;
    int32_T loop_ub_am;
    int32_T varargin_1_n;
    int32_T b_i_f;
    int32_T i_kz;
    int32_T b_i_h;
    int32_T b_k;
    int32_T b_I_tmp;
    int32_T b_I_tmp_b;
    int32_T j_i;
    int32_T b_k_o;
    int32_T eint;
    int32_T i_g;
    int32_T i2_b;
    int32_T A2_tmp;
    int32_T A4_tmp;
    int32_T A6_tmp;
    int32_T n_ap;
    int32_T nb;
    int32_T nbitson;
    int32_T n_h;
    int32_T i3;
    int32_T i4;
    int32_T c_tmp;
    int32_T mLinIneq;
    int32_T mIneq;
    int32_T mConstrMax;
    int32_T maxDims;
    int32_T mNonlinIneq;
    int32_T k_g;
    int32_T ia;
    int32_T i_d;
    int32_T WorkingSet_tmp_tmp;
    int32_T nVar;
    int32_T mFixed;
    int32_T mIneq_e;
    int32_T mLB;
    int32_T mUB;
    int32_T mConstr;
    int32_T mLinIneq_k;
    int32_T qpoptions_MaxIterations;
    int32_T k_f;
    int32_T n_n;
    int32_T ix_l;
    int32_T iy;
    int32_T b_ix;
    int32_T b_iy;
    int32_T d_ix;
    int32_T loop_ub_a5;
    int32_T u1;
    int32_T mLinIneq_m;
    int32_T b_b;
    int32_T k_e;
    int32_T yk;
    int32_T i_gv;
    int32_T i_b;
    int32_T ineqRange_size_idx_1;
    int32_T i5;
    int32_T loop_ub_m;
    int32_T varargout_1_size_tmp;
    int32_T k_f1;
    int32_T i_e;
    int32_T icf_tmp_d;
    int32_T i2_m;
    int32_T ix_f;
    int32_T a_h;
    int32_T i_eo;
    int32_T e_j_f;
    int32_T e_i_e;
    int32_T b_s_o;
    int32_T i6;
    int32_T A2_tmp_j;
    int32_T i7;
    int32_T A4_tmp_f;
    int32_T A6_tmp_k;
    int32_T n_ny;
    int32_T nb_f;
    int32_T nbitson_p;
    int32_T b_n;
    int32_T i8;
    int32_T i9;
    int32_T c_tmp_i;
    int32_T row;
    int32_T col;
    int32_T col_end;
    int32_T idx_mat;
    int32_T i10;
    int32_T loop_ub_k;
    int32_T varargout_1_size_tmp_i;
    int32_T d_k;
    int32_T i_c;
    int32_T icf_tmp_b;
    int32_T tmp_size_idx_0;
    int32_T i11;
    int32_T i12;
    int32_T loop_ub_k3;
    int32_T loop_ub_l;
    int32_T Jmv_size_idx_0;
    int32_T Jmv_data_tmp;
    int32_T idx_current;
    int32_T i_by;
    int32_T i13;
    int32_T obj_next_next_next_next_next__m;
    int32_T i14;
    int32_T i_bk;
    int32_T i_l3;
    int32_T b_i_g;
    int32_T i15;
    int32_T i16;
    int32_T j_p;
    int32_T i_cq;
    int32_T i_m;
    int32_T j_ik;
    int32_T i17;
    int32_T i18;
    int32_T b_C_tmp;
    int32_T b_Su1_tmp;
    int32_T i_a;
    int32_T k_d;
    int32_T Ak1_tmp;
    int32_T Jx_tmp;
    int32_T c_tmp_h;
    int32_T ii_e;
    int32_T knt_b;
    int32_T lastv;
    int32_T lastc;
    int32_T iac;
    int32_T d_c;
    int32_T jA;
    int32_T i_cb;
    int32_T i_ie;
    int32_T kend_p;
    int32_T b_i_l;
    int32_T idx_n;
    int32_T i_o;
    int32_T i19;
    int32_T i20;
    int32_T idx_f;
    int32_T Auf_data_tmp;
    int32_T ii_a;
    int32_T b_i_i;
    int32_T knt_l;
    int32_T lastv_h;
    int32_T lastc_k;
    int32_T iac_n;
    int32_T d_kz;
    int32_T jA_c;
    int32_T i_hd;
    int32_T kend_m;
    int32_T TotalFreeMoves_f;
    int32_T nA_g;
    int32_T kDrop;
    int32_T kNext;
    int32_T idx_d;
    int32_T b_Ac_c;
    int32_T loop_ub_n;
    int32_T b_H_size_idx_0;
    int32_T b_m;
    int32_T b_n_n;
    int32_T i_j;
    int32_T iC_d;
    int32_T loop_ub_nl;
    int32_T RLinv_idx_0;
    int32_T RLinv_idx_1;
    int32_T Linv_l;
    int32_T TL_size_idx_0;
    int32_T b_m_p;
    int32_T n_e5;
    int32_T minmana;
    int32_T minmn;
    int32_T ii_o;
    int32_T mmi;
    int32_T mmip1;
    int32_T ix0;
    int32_T knt_p;
    int32_T coltop_i;
    int32_T kend_d;
    int32_T k_b;
    int32_T ii_b;
    int32_T knt_lz;
    int32_T lastv_b;
    int32_T lastc_n;
    int32_T iac_p;
    int32_T d_o;
    int32_T jA_p;
    int32_T i_hf;
    int32_T i_o1;
    int32_T kend_b;
    int32_T ii_c;
    int32_T knt_g;
    int32_T lastv_e;
    int32_T lastc_o;
    int32_T iac_l;
    int32_T d_oa;
    int32_T jA_e;
    int32_T i_ot;
    int32_T i_li;
    int32_T kend_o;
    int32_T knt_a;
    int32_T i_bd;
    int32_T y_tmp_tmp;
    int32_T S_tmp;
    int32_T kend_oy;
    int32_T ii_c1;
    int32_T b_i_ff;
    int32_T knt_br;
    int32_T lastv_l;
    int32_T lastc_a;
    int32_T iac_c;
    int32_T d_a;
    int32_T jA_n;
    int32_T i_ol;
    int32_T kend_a;
    int32_T g_k;
    int32_T jj;
    int32_T jp1j;
    int32_T jBcol;
    int32_T kAcol;
    int32_T iy_l;
    int32_T jA_h;
    int32_T ijA;
    int32_T e_k_f;
    int32_T jj_d;
    int32_T ix_n;
    int32_T k_k;
    int32_T b_ix_g;
    int32_T iy_p;
    int32_T ijA_p;
    int32_T i_mp;
    int32_T i21;
    int32_T i22;
    int32_T i23;
    int32_T i_p;
    int32_T i24;
    int32_T b_j_d;
    int32_T i25;
    int32_T i26;
    int32_T ii_l;
    int32_T knt_bh;
    int32_T lastv_ed;
    int32_T lastc_g;
    int32_T iac_ch;
    int32_T d_of;
    int32_T jA_f;
    int32_T i_ov;
    int32_T i_i4;
    int32_T kend_dc;
    int32_T e_i_m;
    int32_T itau;
    int32_T iaii;
    int32_T lastc_o3;
    int32_T f;
    int32_T coltop_o;
    int32_T b_ia;
    int32_T jy;
    int32_T l1;
    int32_T m_e;
    int32_T l_m;
    int32_T lsv;
    int32_T lend;
    int32_T lendsv;
    int32_T iscale;
    int32_T i_is;
    int32_T b_anorm_tmp;
    int32_T n_tmp;
    int32_T sgn1;
    int32_T sgn2;
    int32_T b_o;
    int32_T itau_h;
    int32_T iaii_l;
    int32_T lastv_j;
    int32_T lastc_n5;
    int32_T e_j4;
    int32_T coltop_ie;
    int32_T jy_n;
    int32_T jtot;
    int32_T l1_l;
    int32_T m_c;
    int32_T l_f;
    int32_T lsv_a;
    int32_T lend_p;
    int32_T lendsv_m;
    int32_T iscale_p;
    int32_T i_mm;
    int32_T iscale_tmp;
    int32_T sgn1_h;
    int32_T sgn2_l;
    int32_T b_degrees;
    int32_T emlN;
    int32_T Tries_h;
    int32_T b_k_f;
    int32_T loop_ub_j;
    int32_T idxAjj;
    int32_T j_h;
    int32_T ix_h;
    int32_T b_av;
    int32_T d_o4;
    int32_T b_ix_n;
    int32_T b_iy_k;
    int32_T b_k_n;
    int32_T i27;
    int32_T db;
    int32_T fb;
    int32_T ibcol;
    int32_T hb;
    int32_T b_k_e;
    int32_T isMrows_tmp;
    int32_T db_tmp;
    int32_T db_n;
    int32_T fb_b;
    int32_T ibcol_a;
    int32_T hb_j;
    int32_T b_k_j;
    int32_T isMrows_tmp_l;
    int32_T db_tmp_f;
    int32_T ia_i;
    int32_T i_bx;
    int32_T itau_c;
    int32_T ic0;
    int32_T lastv_ed2;
    int32_T lastc_d;
    int32_T coltop_n;
    int32_T b_ia_l;
    int32_T iy_o;
    int32_T b_iy_a;
    int32_T b_ji;
    int32_T d_b;
    int32_T ia_l;
    int32_T i28;
    int32_T stride_0_0;
    int32_T stride_1_0;
    int32_T loop_ub_h;
    int32_T loop_ub_hm;
    int32_T i29;
    int32_T i30;
    int32_T trueCount;
    int32_T i_f;
    int32_T nVar_k;
    int32_T k_fg;
    int32_T idxStartIneq;
    int32_T idxEndIneq;
    int32_T loop_ub_i;
    int32_T nVarOrig;
    int32_T idx_max;
    int32_T ix_p;
    int32_T mLBOrig;
    int32_T mFiniteLBOrig;
    int32_T i31;
    int32_T nVar_d;
    int32_T idx_o;
    int32_T ixlast;
    int32_T PROBTYPE_ORIG;
    int32_T nVar_g;
    int32_T nVarP1;
    int32_T mConstr_n;
    int32_T idxStartIneq_g;
    int32_T idxEndIneq_j;
    int32_T activeSetChangeID;
    int32_T nVar_j;
    int32_T globalActiveConstrIdx;
    int32_T idxMinLambda;
    int32_T k_gh;
    int32_T iQR0;
    int32_T g_j;
    int32_T nVar_c;
    int32_T mWConstr;
    int32_T nVar_n;
    int32_T rankQR;
    int32_T ldq;
    int32_T b_idx;
    int32_T jBcol_d;
    int32_T iAcol;
    int32_T ix_k;
    int32_T br;
    int32_T n_i;
    int32_T iQR0_d;
    int32_T b_n_j;
    int32_T ldq_tmp;
    int32_T idx_g;
    int32_T ix0_g;
    int32_T iy0;
    int32_T b_je;
    int32_T k_h;
    int32_T ma;
    int32_T minmana_o;
    int32_T minmn_o;
    int32_T nfxd;
    int32_T ma_k;
    int32_T minmn_h;
    int32_T ii_k;
    int32_T nmi;
    int32_T mmi_c;
    int32_T pvt;
    int32_T itemp;
    int32_T j_a;
    int32_T ii_tmp;
    int32_T knt_j;
    int32_T c_ag;
    int32_T d_l;
    int32_T kend_bl;
    int32_T k_hd;
    int32_T b_info;
    int32_T ip;
    int32_T b_i_gs;
    int32_T b_j_l;
    int32_T kAcol_h;
    int32_T i32;
    int32_T i33;
    int32_T jj_g;
    int32_T jp1j_h;
    int32_T b_j_k;
    int32_T c_py;
    int32_T ix_no;
    int32_T k_j;
    int32_T iy_n;
    int32_T d_i;
    int32_T b_info_m;
    int32_T ip_i;
    int32_T b_i_iy;
    int32_T b_j_b;
    int32_T kAcol_k;
    int32_T i34;
    int32_T i35;
    int32_T b_i_lb;
    int32_T jj_f;
    int32_T jp1j_hd;
    int32_T b_j_g;
    int32_T c_hg;
    int32_T kAcol_l;
    int32_T iy_pg;
    int32_T jA_k;
    int32_T c_ch;
    int32_T jj_j;
    int32_T b_j_a;
    int32_T ix_b;
    int32_T c_k;
    int32_T b_ix_j;
    int32_T iy_f;
    int32_T d_g;
    int32_T b_index;
    int32_T b_jcol;
    int32_T b_itilerow;
    int32_T b_index_b;
    int32_T b_jcol_o;
    int32_T k_a;
    int32_T b_k_p;
    int32_T tmp_l;
    int32_T tmp_i;
    int32_T i36;
    int32_T tmp_idx_0;
    int32_T i37;
    int32_T nVar_a;
    int32_T mConstrMax_e;
    int32_T idxIneqOffset;
    int32_T idx_Aineq;
    int32_T idx_lower;
    int32_T nWIneq_old;
    int32_T nWLower_old;
    int32_T nWUpper_old;
    int32_T ix_h0;
    int32_T iy_c;
    int32_T l_b;
    int32_T idxStartIneq_e;
    int32_T activeSetChangeID_j;
    int32_T nVar_du;
    int32_T globalActiveConstrIdx_j;
    int32_T idxMinLambda_b;
    int32_T k_h2;
    int32_T iQR0_c;
    int32_T g_h;
    int32_T nVar_ns;
    int32_T mNull;
    int32_T nullStartIdx;
    int32_T b_mNull;
    int32_T nullStart;
    int32_T nVars;
    int32_T c_mNull;
    int32_T b_jjA;
    int32_T d_ix_h;
    int32_T LDimSizeP1;
    int32_T A_maxDiag_idx;
    int32_T LD_diagOffset;
    int32_T ix_py;
    int32_T iy0_p;
    int32_T LDimSizeP1_o;
    int32_T subRows;
    int32_T LD_diagOffset_i;
    int32_T idx_k;
    int32_T k_n;
    int32_T b_idx_b;
    int32_T c_idx;
    int32_T ix_nx;
    int32_T c_j;
    int32_T lastColC;
    int32_T br_h;
    int32_T u1_k;
    int32_T b_i2;
    int32_T k_kl;
    int32_T b_j2;
    int32_T idxStartIneq_k;
    int32_T idxEndIneq_e;
    int32_T nActiveConstr;
    int32_T nFixedConstr;
    int32_T nVar_b;
    int32_T nDepIneq;
    int32_T b_pb;
    int32_T ix0_p;
    int32_T iy0_l;
    int32_T d_h;
    int32_T lda;
    int32_T ii_m;
    int32_T mmi_e;
    int32_T i_dv;
    int32_T loop_ub_ix;
    int32_T lastv_k;
    int32_T lastc_km;
    int32_T coltop_a;
    int32_T ia_a;
    int32_T iy_f2;
    int32_T b_iy_j;
    int32_T b_e;
    int32_T d_ig;
    int32_T ia_g;
    int32_T trueCount_n;
    int32_T trueCount_g;
    int32_T i_ba;
    int32_T i38;
    int32_T loop_ub_b;
    int32_T c_b;
    int32_T unnamed_idx_1;
    int32_T SuJm_size_idx_0;
    int32_T Jm_size_idx_0;
    int32_T Kr_data_tmp;
    int32_T loop_ub_tmp;
    int32_T i39;
    int32_T i40;
    int32_T loop_ub_jv;
    int32_T aux_0_1;
    int32_T aux_1_1;
    int32_T aux_2_1;
    int32_T stride_0_0_o;
    int32_T stride_1_0_j;
    int32_T stride_2_0;
    int32_T stride_1_1;
    int32_T stride_2_1;
    int32_T loop_ub_i4;
    int32_T loop_ub_nd;
    int32_T in2_size_idx_0;
    int32_T in4_size_idx_0;
    int32_T i41;
    int32_T loop_ub_o;
    int32_T c_dg;
    int32_T unnamed_idx_1_k;
    int32_T WM_data_tmp;
    int32_T i42;
    int32_T stride_0_0_g;
    int32_T stride_1_0_o;
    int32_T stride_2_0_n;
    int32_T stride_3_0;
    int32_T loop_ub_hc;
    int32_T i_km;
    int32_T endIdx;
    int32_T idxRotGCol;
    int32_T QRk0;
    int32_T e_l;
    int32_T ix_bw;
    int32_T b_ix_f;
    int32_T c_ix;
    int32_T b_temp_tmp;
    int32_T b_temp_tmp_e;
    int32_T nVar_i;
    int32_T mLambda;
    int32_T idx_max_b;
    int32_T ix_e;
    int32_T rankR;
    int32_T c_ix_o;
    int32_T iQR0_o;
    int32_T n_a4;
    int32_T ia_h;
    int32_T i_bo;
    int32_T itau_n;
    int32_T d_ng;
    int32_T b_k_h;
    int32_T jA_b;
    int32_T j_g;
    int32_T b_eq;
    int32_T iv_e;
    int32_T i_ep;
    int32_T knt_m;
    int32_T b_ix_k;
    int32_T b_iy_j0;
    int32_T xnorm_tmp;
    int32_T tau_tmp_b;
    int32_T tau_tmp_tmp;
    int32_T temp2_tmp_tmp;
    int32_T kend_l;
    int32_T k_ju;
    int32_T ia0;
    int32_T b_i_m;
    int32_T e_l1;
    int32_T knt_i;
    int32_T b_oq;
    int32_T k_bf;
    int32_T temp1_tmp;
    int32_T tau_tmp_m;
    int32_T temp1_tmp_tmp;
    int32_T kend_g;
    int32_T k_l;
    int32_T ldw;
    int32_T d_p;
    int32_T iyend;
    int32_T e_n1;
    int32_T f_f;
    int32_T ia_o;
    int32_T d_tmp;
    int32_T b_jw;
    int32_T b_iy_kl;
    int32_T d_ofv;
    int32_T e_f;
    int32_T ia_k;
    int32_T trueCount_l;
    int32_T i_aq;
    int32_T i43;
    int32_T vscale_data_tmp;
    int32_T i44;
    int32_T loop_ub_ma;
    int32_T idxFillStart;
    int32_T colOffsetATw;
    int32_T iAeq0;
    int32_T iATw0;
    int32_T idx_gm;
    int32_T f_m;
    int32_T idxUpperExisting;
    int32_T offsetEq1;
    int32_T offsetEq2;
    int32_T colOffsetATw_n;
    int32_T colOffsetAineq;
    int32_T idx_col;
    int32_T d_ns;
    int32_T k_j3;
    int32_T d_tmp_o;
    int32_T i45;
    int32_T idxEq;
    int32_T idx_c;
    int32_T d_lg;
    int32_T idx_l;
    int32_T ix0_j;
    int32_T iy0_f;
    int32_T b_k_b;
    int32_T idxA1j;
    int32_T idxAjj_b;
    int32_T nmj;
    int32_T b_j_f;
    int32_T iy_i;
    int32_T b_kz;
    int32_T d_cs;
    int32_T ia_c;
    int32_T b_ix_jz;
    int32_T b_iy_ao;
    int32_T nVar_de;
    int32_T b_ic;
    int32_T idx_e;
    int32_T mIneq_p;
    int32_T b_oj;
    int32_T k_jc;
    int32_T iy_h;
    int32_T b_mq;
    int32_T b_iy_d;
    int32_T d_j;
    int32_T e_jg;
    int32_T nActiveConstr_g;
    int32_T nFixedConstr_f;
    int32_T nVar_l;
    int32_T nDepIneq_b;
    int32_T b_au;
    int32_T ix0_jk;
    int32_T iy0_n;
    int32_T d_pw;
    int32_T maxOffset;
    int32_T idxStart;
    int32_T idxEnd;
    int32_T b_o3;
    int32_T idxFill;
    int32_T nVar_au;
    int32_T mWorkingFixed;
    int32_T mTotalWorkingEq;
    int32_T idx_col_h;
    int32_T totalRank;
    int32_T ix_i;
    int32_T c_tmp_m;
    int32_T k_hg;
    int32_T temp_tmp;
    int32_T i46;
    int32_T nA_c;
    int32_T minszA;
    int32_T j_m;
    int32_T i_ki;
    int32_T c_a5;
    int32_T n_ey;
    int32_T jBcol_j;
    int32_T kAcol_f;
    int32_T j_mp;
    int32_T b_k_e4;
    int32_T i_pm;
    int32_T y_h;
    int32_T i47;
    int32_T i48;
    int32_T LDimSizeP1_l;
    int32_T LD_diagOffset_l;
    int32_T subMatrixDim;
    int32_T k_c;
    int32_T b_k_nf;
    int32_T jA_fr;
    int32_T b_h;
    int32_T ijA_b;
    int32_T idx_go;
    int32_T idxRotGCol_o;
    int32_T iy_h4;
    int32_T iyend_i;
    int32_T b_iy_g;
    int32_T ia_i1;
    int32_T temp_tmp_i;
    int32_T nVar_p;
    int32_T mLambda_h;
    int32_T idx_max_l;
    int32_T k_g2;
    int32_T iL0;
    int32_T b_bk;
    int32_T ix_g;
    int32_T f_c;
    int32_T g_c;
    int32_T i49;
    int32_T i50;
    int32_T i51;
    int32_T b_tmp_e;
    int32_T j_pt;
    int32_T offsetj;
    int32_T offsetjp1;
    int32_T b_at;
    int32_T b_j_g4;
    int32_T temp_tmp_f;
    int32_T i52;
    int32_T mIneq_pq;
    int32_T f_c0;
    int32_T k_m;
    int32_T iy_m;
    int32_T b_a5;
    int32_T b_iy_e;
    int32_T d_is;
    int32_T e_i1;
    int32_T mIneq_b;
    int32_T f_k;
    int32_T k_en;
    int32_T iy_a;
    int32_T b_f;
    int32_T b_iy_o;
    int32_T d_l2;
    int32_T e_lz;
    int32_T j_k;
    int32_T A_tmp;
    int32_T b_j_f1;
    int32_T blockFormat_p;
    int32_T ix_e3;
    int32_T b_cu;
    int32_T jy_d;
    int32_T b_ix_i;
    int32_T b_jA;
    int32_T i53;
    int32_T b_i_f3;
    int32_T i54;
    int32_T b_i_o;
    int32_T i55;
    int32_T b_i_oh;
    int32_T i56;
    int32_T b_i_p;
    int32_T i57;
    int32_T offsetj_p;
    int32_T offsetjp1_g;
    int32_T j_gq;
    int32_T i_em;
    int32_T temp_tmp_j;
    int32_T i58;
    int32_T j_n;
    int32_T offsetj_b;
    int32_T offsetjp1_c;
    int32_T b_j_i;
    int32_T temp_tmp_h;
    int32_T i59;
    int32_T offsetj_d;
    int32_T offsetjp1_i;
    int32_T j_nx;
    int32_T b_i_ox;
    int32_T temp_tmp_ig;
    int32_T i60;
    int32_T idx_m;
    int32_T ix0_pf;
    int32_T iy0_k;
    int32_T b_kr;
    int32_T k_hf;
    int32_T minmana_g;
    int32_T minmn_i;
    int32_T ic0_b;
    int32_T low_i;
    int32_T low_ip1;
    int32_T jm1;
    int32_T idxAjj_c;
    int32_T j_ki;
    int32_T d_ii;
    int32_T b_iy_f;
    int32_T b_k_fy;
    int32_T i61;
    int32_T i62;
    int32_T aux_0_1_b;
    int32_T aux_1_1_m;
    int32_T stride_0_0_j;
    int32_T stride_1_0_h;
    int32_T stride_0_1;
    int32_T stride_1_1_h;
    int32_T loop_ub_d;
    int32_T loop_ub_aw;
    int32_T nActiveConstr_h;
    int32_T b_idx_o;
    int32_T idxQR;
    int32_T b_l;
    int32_T ia_n;
    int32_T jjA;
    int32_T b_ix_go;
    int32_T i_mo;
    int32_T ixlast_j;
    int32_T iy_e;
    int32_T ix_d;
    int32_T b_iy_c;
    int32_T b_jo;
    int32_T c_h0;
    int32_T ia_l5;
    int32_T i63;
    int32_T lastColC_a;
    int32_T br_d;
    int32_T ar;
    int32_T cr;
    int32_T b_iq;
    int32_T ic_h;
    int32_T c_gq;
    int32_T jBcol_g;
    int32_T k_o;
    int32_T kAcol_e;
    int32_T b_j_o;
    int32_T b_k_g;
    int32_T i_ch;
    int32_T B_tmp;
    int32_T jBcol_gk;
    int32_T k_f1e;
    int32_T kAcol_g;
    int32_T b_j_ld;
    int32_T b_k_fw;
    int32_T i_n;
    int32_T B_tmp_m;
    int32_T i64;
    int32_T i65;
    int32_T aux_0_1_d;
    int32_T aux_1_1_b;
    int32_T stride_0_1_g;
    int32_T stride_1_1_j;
    int32_T loop_ub_e;
    int32_T mLinIneq_e;
    int32_T iLineq0;
    int32_T idx_n0;
    int32_T b_idx_k;
    int32_T nVar_dr;
    int32_T iw0;
    int32_T iEq0;
    int32_T idx_gc;
    int32_T i_lo;
    int32_T ix0_c;
    int32_T n_g;
    int32_T k_kz;
    int32_T n_j;
    int32_T jjA_k;
    int32_T ix_gx;
    int32_T b_j_bj;
    int32_T c_g1;
    int32_T b_i_mq;
    int32_T lastColC_i;
    int32_T br_m;
    int32_T ar_i;
    int32_T cr_l;
    int32_T b_d;
    int32_T ic_fk;
    int32_T c_dp;
    int32_T d_ps;
    int32_T jBcol_e;
    int32_T kAcol_m;
    int32_T j_l;
    int32_T b_k_m;
    int32_T i_er;
    int32_T b_B_tmp;
    int32_T jBcol_ea;
    int32_T kAcol_i;
    int32_T b_j_jf;
    int32_T k_m2;
    int32_T b_i_p1;
    int32_T i66;
    int32_T jBcol_m;
    int32_T kAcol_lq;
    int32_T b_j_lf;
    int32_T k_kza;
    int32_T b_i_d;
    int32_T i67;
    int32_T beta1;
    int32_T ix_m;
    int32_T d_d;
    int32_T e_cu;
    int32_T ia_nx;
    int32_T i68;
    int32_T idx_ga;
    int32_T kend_ll;
    int32_T n_c;
    int32_T jA_c3;
    int32_T j_f;
    int32_T i_m5;
    int32_T ix_bwt;
    int32_T k_p;
    int32_T kidx_k;
    int32_T c_ah;
    int32_T b_j1;
    int32_T j2;
    int32_T d_lw;
    int32_T i1_k;
    int32_T i2_f;
    int32_T jA_j;
    int32_T j_aq;
    int32_T b_ly;
    int32_T ijA_f;
    int32_T k_jp;
    int32_T iy_pn;
    int32_T d_mz;
    int32_T e_jl;
    int32_T ix_fa;
    int32_T b_iy_kb;
    int32_T b_m1;
    int32_T c_hs;
    int32_T ia_gj;
    int32_T i69;
    int32_T iCol;
    int32_T iCol_old;
    int32_T b_ab;
    int32_T idx_col_m;
    int32_T c_k0;
    int32_T k_bd;
    int32_T jA_kj;
    int32_T j_gh;
    int32_T b_l2;
    int32_T ijA_bv;
    int32_T b_iy_l;
    int32_T b_ir;
    int32_T d_na;
    int32_T ia_d;
    int32_T iL0_o;
    int32_T i_dg;
    int32_T ix_bu;
    int32_T f_n;
    int32_T g_a;
    int32_T last;
    int32_T idx_a;
    int32_T k_p5;
    int32_T kidx_b;
    int32_T j2_g;
    int32_T b_lh;
    int32_T i1_g;
    int32_T i2_mk;
    int32_T minmn_a;
    int32_T i70;
    int32_T totalEq;
    int32_T iAeq0_e;
    int32_T iAw0;
    int32_T c_di;
    int32_T i71;
    int32_T stride_0_1_m;
    int32_T stride_1_1_o;
    int32_T loop_ub_ii;
    int32_T iAineq0;
    int32_T iAw0_n;
    int32_T b_ia5;
    int32_T idx_kw;
    int32_T idx_c4;
    int32_T k_ghb;
    int32_T idx_current_c;
    int32_T idx_end;
    int32_T n_b;
    int32_T iend;
    int32_T j_lj;
    int32_T i_mb;
    int32_T j_d;
    int32_T loop_ub_bj;
    int32_T i72;
    int32_T i73;
    int32_T j_j;
    int32_T loop_ub_ft;
    int32_T i74;
    int32_T i75;
    int32_T j_it;
    int32_T loop_ub_j3;
    int32_T i76;
    int32_T i77;
    int32_T b_i_n;
    int32_T i78;
    int32_T b_i_hn;
    int32_T maxRegVar;
    int32_T ixlast_o;
    int32_T c_ixlast;
    int32_T b_o2;
    int32_T idx_g5;
    int32_T mIneq_c;
    int32_T TYPE;
    int32_T b_ce1;
    int32_T idx_i;
    int32_T colOffset;
    int32_T idx_bnd_local;
    int32_T b_l4;
    int32_T idx_fm;
    int32_T j_o;
    int32_T b_j_e;
    int32_T idx_current_j;
    int32_T mAll;
    int32_T currentMplier;
    int32_T idxOffset;
    int32_T ct_i;
    int32_T ct_jl;
    int32_T mIneq_j;
    int32_T idx_cj;
    int32_T dlen;
    int32_T k_jpg;
    int32_T k_kk;
    int32_T loop_ub_o2;
    int32_T k_nh;
    int32_T loop_ub_bw;
    int32_T k_iv;
    int32_T k_bs;
    int32_T vlen;
    int32_T k_ch;
    int32_T k_ge;
    int32_T ijA_e;
    int32_T ret;
    int32_T k_at;
    int32_T i_f4;
    int32_T U_tmp_p;
    int32_T i79;
    uint32_T len;
    uint32_T b_q;
    uint32_T b_q_tmp;
    uint32_T u_o;
    uint32_T r_l;
    uint32_T t_iq;
    uint32_T lo;
    SL_Bus_std_msgs_Float32 rtb_SourceBlock_o2_pk_j;
    int32_T B_size[1];
    int32_T isMrows_size[1];
    int32_T tmp_size_k[1];
    int32_T tmp_size_e[1];
    int32_T tmp_size_i[1];
    int32_T Je_size[1];
    int32_T z_size[1];
    int32_T Linv_size[1];
    int32_T tmp_size_j[1];
    int32_T e_data[1];
    int8_T empty_non_axis_sizes[2];
    int8_T empty_non_axis_sizes_a[2];
    int8_T empty_non_axis_sizes_f[2];
    int8_T empty_non_axis_sizes_h[2];
    int16_T b_Mrows_f;
    int16_T ixw;
    int16_T WorkingSet_tmp_h;
    int16_T i80;
    int16_T ixw_l;
    uint8_T empty_non_axis_sizes_g[2];
    uint8_T empty_non_axis_sizes_j[2];
    uint8_T varargin_1_hj[2];
    int8_T MpcStatus;                  // '<S90>/Merge'
    int8_T rtPrevAction;
    int8_T rtAction;
    boolean_T SourceBlock_o1;          // '<S302>/SourceBlock'
    boolean_T MATLABSystem_o3_k;       // '<S278>/MATLAB System'
    boolean_T isMpcAlive;              // '<S92>/Data Type Conversion'
    boolean_T thrustersStatus[8];      // '<S91>/MATLAB System'
    boolean_T SourceBlock_o1_j;        // '<S55>/SourceBlock'
    boolean_T SourceBlock_o1_k;        // '<S41>/SourceBlock'
    boolean_T SourceBlock_o1_e;        // '<S40>/SourceBlock'
    boolean_T SourceBlock_o1_a;        // '<S39>/SourceBlock'
    boolean_T SourceBlock_o1_j0;       // '<S38>/SourceBlock'
    boolean_T SourceBlock_o1_f;        // '<S37>/SourceBlock'
    boolean_T SourceBlock_o1_kn;       // '<S36>/SourceBlock'
    boolean_T b_value_g;
    boolean_T Merge6;                  // '<S4>/Merge6'
    boolean_T newPressureMsg;          // '<S4>/Merge3'
    boolean_T Merge8;                  // '<S4>/Merge8'
    boolean_T Reset;                   // '<S76>/Reset'
    boolean_T Reset_g;                 // '<S79>/Reset'
    SL_Bus_std_msgs_Bool rtb_SourceBlock_o2_my_c;
    SL_Bus_std_msgs_Bool BusAssignment_e;// '<S50>/Bus Assignment'
    SL_Bus_std_msgs_Bool BusAssignment_gy;// '<S49>/Bus Assignment'
    SL_Bus_std_msgs_Bool BusAssignment1_a;// '<S49>/Bus Assignment1'
    SL_Bus_std_msgs_Bool BusAssignment2;// '<S49>/Bus Assignment2'
    SL_Bus_std_msgs_Bool BusAssignment3;// '<S49>/Bus Assignment3'
    SL_Bus_std_msgs_Bool BusAssignment4;// '<S49>/Bus Assignment4'
    SL_Bus_std_msgs_Bool BusAssignment_j;
    SL_Bus_std_msgs_UInt8 rtb_SourceBlock_o2_d_h;
    SL_Bus_sonia_common_ros2_KillStatus rtb_SourceBlock_o2_i_f;
    B_MovingAverage_proc_contro_c_T MovingAverage2_p;// '<S224>/Moving Average'
    B_MovingAverage_proc_contro_c_T MovingAverage1_p;// '<S224>/Moving Average'
    B_MovingAverage_proc_contro_c_T MovingAverage_p;// '<S224>/Moving Average'
    B_MovingAverage1_proc_control_T MovingAverage8;// '<S212>/Moving Average1'
    B_MovingAverage1_proc_control_T MovingAverage7;// '<S212>/Moving Average1'
    B_MovingAverage1_proc_control_T MovingAverage6;// '<S212>/Moving Average1'
    B_MovingAverage_proc_control_T MovingAverage5;// '<S212>/Moving Average'
    B_MovingAverage_proc_control_T MovingAverage4;// '<S212>/Moving Average'
    B_MovingAverage1_proc_control_T MovingAverage3;// '<S212>/Moving Average1'
    B_MovingAverage1_proc_control_T MovingAverage2;// '<S212>/Moving Average1'
    B_MovingAverage1_proc_control_T MovingAverage1;// '<S212>/Moving Average1'
    B_MovingAverage_proc_control_T MovingAverage;// '<S212>/Moving Average'
    B_LowpassFilter_proc_control_T LowpassFilter2;// '<S212>/Lowpass Filter'
    B_LowpassFilter_proc_control_T LowpassFilter1;// '<S212>/Lowpass Filter'
    B_LowpassFilter_proc_control_T LowpassFilter;// '<S212>/Lowpass Filter'
    B_HighpassFilter1_proc_contro_T HighpassFilter2;// '<S212>/Highpass Filter1' 
    B_HighpassFilter1_proc_contro_T HighpassFilter1;// '<S212>/Highpass Filter1' 
    B_SinkBlock_proc_control_T SinkBlock_df;// '<S71>/SinkBlock'
    B_SinkBlock_proc_control_T SinkBlock_m;// '<S71>/SinkBlock'
  };

  // Block states (default storage) for system '<Root>'
  struct DW_proc_control_T {
    TrajectoryManager_proc_contro_T obj;// '<S293>/MATLAB System1'
    ProcPlannerManager_proc_contr_T obj_l;// '<S288>/MATLAB System'
    mpcManager_proc_control_T obj_k;   // '<S91>/MATLAB System'
    TrimPlant_proc_control_T obj_b;    // '<S93>/MATLAB System'
    robotics_slcore_internal_bl_p_T obj_m;// '<S309>/Polynomial Trajectory'
    OpenLoopController_proc_contr_T obj_p;// '<S95>/MATLAB System'
    dsp_simulink_HighpassFilter_p_T obj_by;// '<S212>/Highpass Filter'
    robotics_slcore_internal_bloc_T obj_p3;// '<S306>/Rotation Trajectory'
    AddPose_proc_control_T obj_f;      // '<S293>/MATLAB System'
    rosCommandManager_proc_contro_T obj_i;// '<S25>/MATLAB System'
    ros_slros2_internal_block_Cur_T obj_o3;// '<S132>/Current Time'
    ros_slros2_internal_block_Cur_T obj_h;// '<S14>/Current Time'
    ros_slros2_internal_block_Get_T obj_ju;// '<S27>/Volume'
    ros_slros2_internal_block_Get_T obj_l4;// '<S27>/Thrusters'
    ros_slros2_internal_block_Get_T obj_e5;// '<S27>/Sub Height'
    ros_slros2_internal_block_Get_T obj_eu;// '<S27>/Sonar Pose'
    ros_slros2_internal_block_Get_T obj_pp;// '<S27>/RHO'
    ros_slros2_internal_block_Get_T obj_e1;// '<S27>/RG'
    ros_slros2_internal_block_Get_T obj_hd;// '<S27>/RB'
    ros_slros2_internal_block_Get_T obj_hn;// '<S27>/I'
    ros_slros2_internal_block_Get_T obj_c4;// '<S27>/Hydro Pose'
    ros_slros2_internal_block_Get_T obj_jq;// '<S27>/Get Parameter2'
    ros_slros2_internal_block_Get_T obj_axm;// '<S27>/G'
    ros_slros2_internal_block_Get_T obj_lq;// '<S27>/Depth Pose'
    ros_slros2_internal_block_Get_T obj_mh;// '<S27>/DVL Rotation'
    ros_slros2_internal_block_Get_T obj_jk;// '<S27>/DVL Lost Override'
    ros_slros2_internal_block_Get_T obj_kb;// '<S27>/CDQ'
    ros_slros2_internal_block_Get_T obj_fg;// '<S27>/CDL'
    ros_slros2_internal_block_Get_T obj_ps;// '<S27>/Added Mass'
    ros_slros2_internal_block_Get_T obj_do;// '<S29>/Time In Tolerance'
    ros_slros2_internal_block_Get_T obj_dc;// '<S29>/Linear Tolerance'
    ros_slros2_internal_block_Get_T obj_eug;// '<S29>/Angular Tolerance'
    ros_slros2_internal_block_Get_T obj_pu;// '<S28>/T Min'
    ros_slros2_internal_block_Get_T obj_cm;// '<S28>/T Max'
    ros_slros2_internal_block_Get_T obj_f0;// '<S28>/P'
    ros_slros2_internal_block_Get_T obj_dx;// '<S28>/M'
    ros_slros2_internal_block_Get_T obj_nb;// '<S34>/MV'
    ros_slros2_internal_block_Get_T obj_fs;// '<S33>/OV'
    ros_slros2_internal_block_Get_T obj_hq;// '<S33>/MVR'
    ros_slros2_internal_block_Get_T obj_pz;// '<S33>/MV'
    ros_slros2_internal_block_Get_T obj_nl;// '<S32>/OV'
    ros_slros2_internal_block_Get_T obj_as;// '<S32>/MVR'
    ros_slros2_internal_block_Get_T obj_nr;// '<S32>/MV'
    ros_slros2_internal_block_Get_T obj_j1;// '<S31>/OV'
    ros_slros2_internal_block_Get_T obj_pzf;// '<S31>/MVR'
    ros_slros2_internal_block_Get_T obj_f2;// '<S31>/MV'
    ros_slros2_internal_block_Get_T obj_fk;// '<S30>/OV'
    ros_slros2_internal_block_Get_T obj_bn;// '<S30>/MVR'
    ros_slros2_internal_block_Get_T obj_iw;// '<S30>/MV'
    ros_slros2_internal_block_Pub_T obj_oe;// '<S298>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_ni;// '<S133>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_g;// '<S81>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_km;// '<S74>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_hu;// '<S73>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_dos;// '<S72>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_fd;// '<S21>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_oa;// '<S20>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_clf;// '<S23>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_ez;// '<S16>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_dv;// '<S12>/SinkBlock'
    ros_slros2_internal_block_Sub_T obj_ha;// '<S307>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_eh;// '<S302>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_jb;// '<S300>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_if;// '<S194>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_no;// '<S193>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_p5;// '<S55>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_kr;// '<S54>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_du;// '<S53>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_n5;// '<S52>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_ak;// '<S51>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_hr;// '<S85>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_fe;// '<S84>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_fka;// '<S83>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_na;// '<S82>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_cg;// '<S41>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_lt;// '<S40>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_fw;// '<S39>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_i3;// '<S38>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_nf;// '<S37>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_ppy;// '<S36>/SourceBlock'
    real_T Delay_DSTATE[8];            // '<S203>/Delay'
    real_T Delay_DSTATE_j;             // '<S25>/Delay'
    real_T Delay_DSTATE_m;             // '<S4>/Delay'
    real_T UD_DSTATE[3];               // '<S216>/UD'
    real_T DiscreteTimeIntegrator_DSTATE;// '<S306>/Discrete-Time Integrator'
    real_T Delay_DSTATE_i;             // '<S257>/Delay'
    real_T DiscreteTimeIntegrator_DSTATE_l[3];// '<S223>/Discrete-Time Integrator' 
    real_T Delay_DSTATE_p;             // '<S92>/Delay'
    real_T Delay_DSTATE_pp[8];         // '<S97>/Delay'
    real_T mv_Delay_DSTATE[88];        // '<S171>/mv_Delay'
    real_T x_Delay_DSTATE[143];        // '<S171>/x_Delay'
    real_T slack_delay_DSTATE;         // '<S171>/slack_delay'
    real_T last_mv_DSTATE[8];          // '<S137>/last_mv'
    real_T Delay1_DSTATE[88];          // '<S94>/Delay1'
    real_T UD_DSTATE_n[6];             // '<S167>/UD'
    real_T Delay_DSTATE_a[8];          // '<S93>/Delay'
    real_T last_mv_DSTATE_j[8];        // '<S101>/last_mv'
    real_T lastMsg[400];               // '<S27>/MATLAB System8'
    real_T lastMsg_a[400];             // '<S27>/MATLAB System7'
    real_T lastMsg_l[400];             // '<S27>/MATLAB System6'
    real_T lastMsg_k[400];             // '<S27>/MATLAB System5'
    real_T lastMsg_m[400];             // '<S27>/MATLAB System4'
    real_T lastMsg_kw[400];            // '<S27>/MATLAB System3'
    real_T lastMsg_f[400];             // '<S27>/MATLAB System2'
    real_T lastMsg_p[400];             // '<S27>/MATLAB System12'
    real_T lastMsg_d[400];             // '<S27>/MATLAB System11'
    real_T lastMsg_i[400];             // '<S27>/MATLAB System1'
    real_T lastMsg_g[400];             // '<S34>/MATLAB System5'
    real_T lastMsg_fk[400];            // '<S33>/MATLAB System5'
    real_T lastMsg_h[400];             // '<S33>/MATLAB System4'
    real_T lastMsg_ar[400];            // '<S33>/MATLAB System3'
    real_T lastMsg_m4[400];            // '<S32>/MATLAB System5'
    real_T lastMsg_lq[400];            // '<S32>/MATLAB System4'
    real_T lastMsg_g4[400];            // '<S32>/MATLAB System3'
    real_T lastMsg_aa[400];            // '<S31>/MATLAB System5'
    real_T lastMsg_gp[400];            // '<S31>/MATLAB System4'
    real_T lastMsg_kz[400];            // '<S31>/MATLAB System3'
    real_T lastMsg_k3[400];            // '<S30>/MATLAB System4'
    real_T lastMsg_c[400];             // '<S30>/MATLAB System3'
    real_T lastMsg_b[400];             // '<S30>/MATLAB System1'
    real_T NextOutput;                 // '<S212>/Random Number'
    real_T NextOutput_g;               // '<S212>/Random Number1'
    real_T NextOutput_c;               // '<S212>/Random Number2'
    real_T P[169];                     // '<S276>/DataStoreMemory - P'
    real_T x[13];                      // '<S276>/DataStoreMemory - x'
    int32_T clockTickCounter;          // '<S97>/Pulse Generator'
    int32_T clockTickCounter_n;        // '<S94>/Pulse Generator'
    int32_T clockTickCounter_f;        // '<S93>/Pulse Generator'
    uint32_T RandSeed;                 // '<S212>/Random Number'
    uint32_T RandSeed_o;               // '<S212>/Random Number1'
    uint32_T RandSeed_m;               // '<S212>/Random Number2'
    uint32_T m_bpIndex[8];             // '<S92>/N to A'
    uint32_T m_bpIndex_o[8];           // '<S92>/n-D Lookup Table1'
    uint16_T Delay_DSTATE_m0[8];       // '<S6>/Delay'
    boolean_T Delay_DSTATE_g;          // '<S293>/Delay'
    boolean_T DelayInput1_DSTATE;      // '<S295>/Delay Input1'
    int8_T If_ActiveSubsystem;         // '<S3>/If'
    int8_T SwitchCase_ActiveSubsystem; // '<S8>/Switch Case'
    int8_T If_ActiveSubsystem_b;       // '<S6>/If'
    int8_T SwitchCase_ActiveSubsystem_p;// '<S90>/Switch Case'
    boolean_T isInitialized;           // '<S212>/Highpass Filter'
    boolean_T isInitialized_i;         // '<S212>/Highpass Filter'
    boolean_T icLoad;                  // '<S171>/mv_Delay'
    boolean_T icLoad_g;                // '<S171>/x_Delay'
    boolean_T icLoad_o;                // '<S171>/slack_delay'
    boolean_T Memory_PreviousInput[226];// '<S137>/Memory'
    boolean_T Memory_PreviousInput_l[226];// '<S101>/Memory'
    boolean_T Memory_PreviousInput_n;  // '<S76>/Memory'
    boolean_T Memory_PreviousInput_m;  // '<S77>/Memory'
    boolean_T Memory_PreviousInput_o;  // '<S78>/Memory'
    boolean_T Memory_PreviousInput_a;  // '<S79>/Memory'
    DW_MovingAverage_proc_contr_f_T MovingAverage2_p;// '<S224>/Moving Average'
    DW_MovingAverage_proc_contr_f_T MovingAverage1_p;// '<S224>/Moving Average'
    DW_MovingAverage_proc_contr_f_T MovingAverage_p;// '<S224>/Moving Average'
    DW_MovingAverage1_proc_contro_T MovingAverage8;// '<S212>/Moving Average1'
    DW_MovingAverage1_proc_contro_T MovingAverage7;// '<S212>/Moving Average1'
    DW_MovingAverage1_proc_contro_T MovingAverage6;// '<S212>/Moving Average1'
    DW_MovingAverage_proc_control_T MovingAverage5;// '<S212>/Moving Average'
    DW_MovingAverage_proc_control_T MovingAverage4;// '<S212>/Moving Average'
    DW_MovingAverage1_proc_contro_T MovingAverage3;// '<S212>/Moving Average1'
    DW_MovingAverage1_proc_contro_T MovingAverage2;// '<S212>/Moving Average1'
    DW_MovingAverage1_proc_contro_T MovingAverage1;// '<S212>/Moving Average1'
    DW_MovingAverage_proc_control_T MovingAverage;// '<S212>/Moving Average'
    DW_LowpassFilter_proc_control_T LowpassFilter2;// '<S212>/Lowpass Filter'
    DW_LowpassFilter_proc_control_T LowpassFilter1;// '<S212>/Lowpass Filter'
    DW_LowpassFilter_proc_control_T LowpassFilter;// '<S212>/Lowpass Filter'
    DW_HighpassFilter1_proc_contr_T HighpassFilter2;// '<S212>/Highpass Filter1' 
    DW_HighpassFilter1_proc_contr_T HighpassFilter1;// '<S212>/Highpass Filter1' 
    DW_SinkBlock_proc_control_T SinkBlock_df;// '<S71>/SinkBlock'
    DW_SinkBlock_proc_control_T SinkBlock_m;// '<S71>/SinkBlock'
  };

  // Zero-crossing (trigger) state
  struct PrevZCX_proc_control_T {
    ZCSigState ResettableSubsystem_Reset_ZCE;// '<S293>/Resettable Subsystem'
  };

  // Parameters (default storage)
  struct P_proc_control_T {
    struct_72FZU0bzvPLwZ2S2uz9PiD physics;// Variable: physics
                                             //  Referenced by: '<S95>/MATLAB System'

    struct_x7JWpgYpPywnYpZFC6VmZH mode;// Variable: mode
                                          //  Referenced by: '<S25>/MATLAB System'

    real_T N[201];                     // Variable: N
                                          //  Referenced by:
                                          //    '<S92>/N to A'
                                          //    '<S92>/n-D Lookup Table1'

    real_T binv[48];                   // Variable: binv
                                          //  Referenced by: '<S95>/MATLAB System'

    struct_lestj3Cmqe3cAicxMA7epG config;// Variable: config
                                            //  Referenced by:
                                            //    '<S49>/Constant3'
                                            //    '<S277>/Constant3'

    uint16_T A[201];                   // Variable: A
                                          //  Referenced by: '<S92>/N to A'

    uint16_T PWM[201];                 // Variable: PWM
                                          //  Referenced by: '<S92>/n-D Lookup Table1'

    real_T DiscreteDerivative_ICPrevScaled;
                              // Mask Parameter: DiscreteDerivative_ICPrevScaled
                                 //  Referenced by: '<S167>/UD'

    real_T DiscreteDerivative_ICPrevScal_e;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_e
                                 //  Referenced by: '<S216>/UD'

    boolean_T MinMaxRunningResettable_vinit;
                                // Mask Parameter: MinMaxRunningResettable_vinit
                                   //  Referenced by:
                                   //    '<S76>/Initial Condition'
                                   //    '<S76>/Memory'

    boolean_T MinMaxRunningResettable1_vinit;
                               // Mask Parameter: MinMaxRunningResettable1_vinit
                                  //  Referenced by:
                                  //    '<S77>/Initial Condition'
                                  //    '<S77>/Memory'

    boolean_T MinMaxRunningResettable2_vinit;
                               // Mask Parameter: MinMaxRunningResettable2_vinit
                                  //  Referenced by:
                                  //    '<S78>/Initial Condition'
                                  //    '<S78>/Memory'

    boolean_T MinMaxRunningResettable3_vinit;
                               // Mask Parameter: MinMaxRunningResettable3_vinit
                                  //  Referenced by:
                                  //    '<S79>/Initial Condition'
                                  //    '<S79>/Memory'

    boolean_T DetectRisePositive_vinit;
                                     // Mask Parameter: DetectRisePositive_vinit
                                        //  Referenced by: '<S295>/Delay Input1'

    SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint Out1_Y0;// Computed Parameter: Out1_Y0
                                                                   //  Referenced by: '<S303>/Out1'

    SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S302>/Constant'

    SL_Bus_std_msgs_Float64MultiArray Out1_Y0_n;// Computed Parameter: Out1_Y0_n
                                                   //  Referenced by: '<S196>/Out1'

    SL_Bus_std_msgs_Float64MultiArray Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                          //  Referenced by: '<S194>/Constant'

    SL_Bus_sonia_common_ros2_MpcInfo Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                         //  Referenced by: '<S22>/Constant'

    SL_Bus_sonia_common_ros2_MpcGains Out1_Y0_b;// Computed Parameter: Out1_Y0_b
                                                   //  Referenced by: '<S195>/Out1'

    SL_Bus_sonia_common_ros2_MpcGains Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                          //  Referenced by: '<S193>/Constant'

    mpcParams mpcParams_Y0;            // Computed Parameter: mpcParams_Y0
                                          //  Referenced by: '<S24>/mpcParams'

    SL_Bus_nav_msgs_Odometry Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                 //  Referenced by: '<S13>/Constant'

    SL_Bus_nav_msgs_Odometry Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                 //  Referenced by: '<S131>/Constant'

    physicsConstants physicsConstants_Y0;
                                      // Computed Parameter: physicsConstants_Y0
                                         //  Referenced by: '<S24>/physicsConstants'

    SL_Bus_sensor_msgs_Imu Out1_Y0_no; // Computed Parameter: Out1_Y0_no
                                          //  Referenced by: '<S88>/Out1'

    SL_Bus_sensor_msgs_Imu Out1_Y0_h;  // Computed Parameter: Out1_Y0_h
                                          //  Referenced by: '<S89>/Out1'

    SL_Bus_sensor_msgs_Imu Constant_Value_i;// Computed Parameter: Constant_Value_i
                                               //  Referenced by: '<S84>/Constant'

    SL_Bus_sensor_msgs_Imu Constant_Value_d;// Computed Parameter: Constant_Value_d
                                               //  Referenced by: '<S85>/Constant'

    SL_Bus_sensor_msgs_Imu Out1_Y0_c;  // Computed Parameter: Out1_Y0_c
                                          //  Referenced by: '<S58>/Out1'

    SL_Bus_sensor_msgs_Imu Out1_Y0_cn; // Computed Parameter: Out1_Y0_cn
                                          //  Referenced by: '<S59>/Out1'

    SL_Bus_sensor_msgs_Imu Constant_Value_jf;// Computed Parameter: Constant_Value_jf
                                                //  Referenced by: '<S53>/Constant'

    SL_Bus_sensor_msgs_Imu Constant_Value_c;// Computed Parameter: Constant_Value_c
                                               //  Referenced by: '<S54>/Constant'

    struct_eJsqWOClzwG18rBvtrhWOG MPCparam_Y0;// Computed Parameter: MPCparam_Y0
                                                 //  Referenced by: '<S91>/MPC param'

    SL_Bus_sonia_common_ros2_BodyVelocityDVL Out1_Y0_p;// Computed Parameter: Out1_Y0_p
                                                          //  Referenced by: '<S87>/Out1'

    SL_Bus_sonia_common_ros2_BodyVelocityDVL Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                                 //  Referenced by: '<S83>/Constant'

    SL_Bus_sonia_common_ros2_BodyVelocityDVL Out1_Y0_g;// Computed Parameter: Out1_Y0_g
                                                          //  Referenced by: '<S57>/Out1'

    SL_Bus_sonia_common_ros2_BodyVelocityDVL Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                                 //  Referenced by: '<S52>/Constant'

    struct_dhOFexlPAOq1XLxIBHN1J Output_Y0;// Computed Parameter: Output_Y0
                                              //  Referenced by: '<S1>/Output'

    SL_Bus_sonia_common_ros2_Pose Out1_Y0_d;// Computed Parameter: Out1_Y0_d
                                               //  Referenced by: '<S310>/Out1'

    SL_Bus_sonia_common_ros2_Pose Constant_Value_f4;// Computed Parameter: Constant_Value_f4
                                                       //  Referenced by: '<S307>/Constant'

    SL_Bus_geometry_msgs_Pose Out1_Y0_a;// Computed Parameter: Out1_Y0_a
                                           //  Referenced by: '<S45>/Out1'

    SL_Bus_geometry_msgs_Pose Constant_Value_ja;// Computed Parameter: Constant_Value_ja
                                                   //  Referenced by: '<S39>/Constant'

    SL_Bus_geometry_msgs_Pose Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                  //  Referenced by: '<S297>/Constant'

    struct_TOFpsJJYcOBczOpEd57stD DVLMeasurements_Y0;// Computed Parameter: DVLMeasurements_Y0
                                                        //  Referenced by: '<S199>/DVL Measurements'

    SL_Bus_geometry_msgs_Twist Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                            //  Referenced by: '<S301>/Out1'

    SL_Bus_geometry_msgs_Twist Constant_Value_oo;// Computed Parameter: Constant_Value_oo
                                                    //  Referenced by: '<S300>/Constant'

    SL_Bus_sonia_common_ros2_MotorPwm Constant_Value_ki;// Computed Parameter: Constant_Value_ki
                                                           //  Referenced by: '<S17>/Constant'

    SL_Bus_sonia_common_ros2_MotorPwm Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                          //  Referenced by: '<S18>/Constant'

    SL_Bus_sonia_common_ros2_KillStatus Out1_Y0_o;// Computed Parameter: Out1_Y0_o
                                                     //  Referenced by: '<S46>/Out1'

    SL_Bus_sonia_common_ros2_KillStatus Constant_Value_eb;// Computed Parameter: Constant_Value_eb
                                                             //  Referenced by: '<S40>/Constant'

    SL_Bus_std_msgs_Bool Constant_Value_cc;// Computed Parameter: Constant_Value_cc
                                              //  Referenced by: '<S11>/Constant'

    SL_Bus_std_msgs_Bool Out1_Y0_dr;   // Computed Parameter: Out1_Y0_dr
                                          //  Referenced by: '<S42>/Out1'

    SL_Bus_std_msgs_Bool Out1_Y0_j;    // Computed Parameter: Out1_Y0_j
                                          //  Referenced by: '<S44>/Out1'

    SL_Bus_std_msgs_Bool Out1_Y0_e;    // Computed Parameter: Out1_Y0_e
                                          //  Referenced by: '<S47>/Out1'

    SL_Bus_std_msgs_Bool Constant_Value_gj;// Computed Parameter: Constant_Value_gj
                                              //  Referenced by: '<S61>/Constant'

    SL_Bus_std_msgs_Bool Constant_Value_n;// Computed Parameter: Constant_Value_n
                                             //  Referenced by: '<S62>/Constant'

    SL_Bus_std_msgs_Bool Constant_Value_ht;// Computed Parameter: Constant_Value_ht
                                              //  Referenced by: '<S63>/Constant'

    SL_Bus_std_msgs_Bool Constant_Value_ne;// Computed Parameter: Constant_Value_ne
                                              //  Referenced by: '<S64>/Constant'

    SL_Bus_std_msgs_Bool Constant_Value_b;// Computed Parameter: Constant_Value_b
                                             //  Referenced by: '<S65>/Constant'

    SL_Bus_std_msgs_Bool Constant_Value_bj;// Computed Parameter: Constant_Value_bj
                                              //  Referenced by: '<S80>/Constant'

    SL_Bus_std_msgs_Bool Out1_Y0_aw;   // Computed Parameter: Out1_Y0_aw
                                          //  Referenced by: '<S60>/Out1'

    SL_Bus_std_msgs_Bool Constant_Value_a;// Computed Parameter: Constant_Value_a
                                             //  Referenced by: '<S55>/Constant'

    SL_Bus_std_msgs_Bool Constant_Value_oy;// Computed Parameter: Constant_Value_oy
                                              //  Referenced by: '<S38>/Constant'

    SL_Bus_std_msgs_Bool Constant_Value_oc;// Computed Parameter: Constant_Value_oc
                                              //  Referenced by: '<S41>/Constant'

    SL_Bus_std_msgs_Bool Constant_Value_ha;// Computed Parameter: Constant_Value_ha
                                              //  Referenced by: '<S36>/Constant'

    SL_Bus_std_msgs_Float32 Out1_Y0_oo;// Computed Parameter: Out1_Y0_oo
                                          //  Referenced by: '<S86>/Out1'

    SL_Bus_std_msgs_Float32 Constant_Value_dh;// Computed Parameter: Constant_Value_dh
                                                 //  Referenced by: '<S82>/Constant'

    SL_Bus_std_msgs_Float32 Out1_Y0_bc;// Computed Parameter: Out1_Y0_bc
                                          //  Referenced by: '<S56>/Out1'

    SL_Bus_std_msgs_Float32 Constant_Value_er;// Computed Parameter: Constant_Value_er
                                                 //  Referenced by: '<S51>/Constant'

    SL_Bus_std_msgs_UInt8 Out1_Y0_fy;  // Computed Parameter: Out1_Y0_fy
                                          //  Referenced by: '<S43>/Out1'

    SL_Bus_std_msgs_UInt8 Constant_Value_dx;// Computed Parameter: Constant_Value_dx
                                               //  Referenced by: '<S37>/Constant'

    real_T Constant_Value_gjp;         // Expression: InsertTimeStamp
                                          //  Referenced by: '<S14>/Constant'

    real_T Constant1_Value;            // Expression: SetFrameID
                                          //  Referenced by: '<S14>/Constant1'

    real_T thrust_Y0;                  // Computed Parameter: thrust_Y0
                                          //  Referenced by: '<S2>/thrust'

    real_T Constant_Value_e2[120];     // Expression: zeros(1,120)
                                          //  Referenced by: '<S19>/Constant'

    real_T Constant1_Value_h[115];     // Expression: zeros(1,115)
                                          //  Referenced by: '<S19>/Constant1'

    real_T Constant3_Value[120];       // Expression: zeros(1,120)
                                          //  Referenced by: '<S19>/Constant3'

    real_T Constant4_Value[120];       // Expression: zeros(1,120)
                                          //  Referenced by: '<S19>/Constant4'

    real_T y_Y0;                       // Computed Parameter: y_Y0
                                          //  Referenced by: '<S49>/y'

    real_T Constant_Value_g0;          // Expression: 0
                                          //  Referenced by: '<S49>/Constant'

    real_T Constant1_Value_f;          // Expression: 0
                                          //  Referenced by: '<S49>/Constant1'

    real_T Constant2_Value;            // Expression: 0
                                          //  Referenced by: '<S49>/Constant2'

    real_T Constant4_Value_l;          // Expression: 0
                                          //  Referenced by: '<S49>/Constant4'

    real_T Constant_Value_l;           // Expression: InsertTimeStamp
                                          //  Referenced by: '<S132>/Constant'

    real_T Constant1_Value_l;          // Expression: SetFrameID
                                          //  Referenced by: '<S132>/Constant1'

    real_T Delay_InitialCondition[8];  // Expression: zeros(MPC.nu,1)
                                          //  Referenced by: '<S93>/Delay'

    real_T E_zero_Value[8];            // Expression: zeros(1,8)
                                          //  Referenced by: '<S98>/E_zero'

    real_T F_zero_Value[13];           // Expression: zeros(1,13)
                                          //  Referenced by: '<S98>/F_zero'

    real_T G_zero_Value;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S98>/G_zero'

    real_T Constant_Value_aa;          // Computed Parameter: Constant_Value_aa
                                          //  Referenced by: '<S101>/Constant'

    real_T LastPcov_InitialCondition[441];// Expression: lastPcov
                                             //  Referenced by: '<S101>/LastPcov'

    real_T extmv_zero_Value[8];        // Expression: zeros(8,1)
                                          //  Referenced by: '<S98>/ext.mv_zero'

    real_T extmv_scale_Gain[8];        // Expression: RMVscale
                                          //  Referenced by: '<S101>/ext.mv_scale'

    real_T last_mv_InitialCondition[8];// Expression: lastu+uoff
                                          //  Referenced by: '<S101>/last_mv'

    real_T Constant_Value_o1[6];       // Expression: zeros(1,6)
                                          //  Referenced by: '<S93>/Constant'

    real_T Constant1_Value_g[2];       // Expression: zeros(1,2)
                                          //  Referenced by: '<S93>/Constant1'

    real_T ym_zero_Value[13];          // Expression: zeros(nym,1)
                                          //  Referenced by: '<S101>/ym_zero'

    real_T md_zero_Value;              // Expression: zeros(1,1)
                                          //  Referenced by: '<S98>/md_zero'

    real_T ymin_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S98>/ymin_zero'

    real_T ymax_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S98>/ymax_zero'

    real_T umin_scale4_Gain[8];    // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S101>/umin_scale4'

    real_T ymin_scale1_Gain[13];    // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S101>/ymin_scale1'

    real_T S_zero_Value;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S98>/S_zero'

    real_T ymin_scale2_Gain;       // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S101>/ymin_scale2'

    real_T switch_zero_Value;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S98>/switch_zero'

    real_T mvtarget_zero_Value[8];     // Expression: zeros(8,1)
                                          //  Referenced by: '<S98>/mv.target_zero'

    real_T uref_scale_Gain[8];         // Expression: RMVscale
                                          //  Referenced by: '<S101>/uref_scale'

    real_T ecrwt_zero_Value;           // Expression: zeros(1,1)
                                          //  Referenced by: '<S98>/ecr.wt_zero'

    real_T u_scale_Gain[8];            // Expression: MVscale
                                          //  Referenced by: '<S101>/u_scale'

    real_T PulseGenerator_Amp;         // Expression: 1
                                          //  Referenced by: '<S93>/Pulse Generator'

    real_T PulseGenerator_Period;      // Expression: 2
                                          //  Referenced by: '<S93>/Pulse Generator'

    real_T PulseGenerator_Duty;        // Expression: 1
                                          //  Referenced by: '<S93>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay;  // Expression: 0
                                          //  Referenced by: '<S93>/Pulse Generator'

    real_T MATLABSystem_k;             // Expression: 40
                                          //  Referenced by: '<S95>/MATLAB System'

    real_T Constant1_Value_g0;         // Expression: 0
                                          //  Referenced by: '<S95>/Constant1'

    real_T TSamp_WtEt;                 // Computed Parameter: TSamp_WtEt
                                          //  Referenced by: '<S167>/TSamp'

    real_T E_zero_Value_a[8];          // Expression: zeros(1,8)
                                          //  Referenced by: '<S134>/E_zero'

    real_T F_zero_Value_h[13];         // Expression: zeros(1,13)
                                          //  Referenced by: '<S134>/F_zero'

    real_T G_zero_Value_l;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S134>/G_zero'

    real_T LastPcov_InitialCondition_l[441];// Expression: lastPcov
                                               //  Referenced by: '<S137>/LastPcov'

    real_T extmv_zero_Value_i[8];      // Expression: zeros(8,1)
                                          //  Referenced by: '<S134>/ext.mv_zero'

    real_T extmv_scale_Gain_m[8];      // Expression: RMVscale
                                          //  Referenced by: '<S137>/ext.mv_scale'

    real_T last_mv_InitialCondition_k[8];// Expression: lastu+uoff
                                            //  Referenced by: '<S137>/last_mv'

    real_T Constant2_Value_p[8];       // Expression: zeros(1,8)
                                          //  Referenced by: '<S94>/Constant2'

    real_T ym_zero_Value_a[13];        // Expression: zeros(nym,1)
                                          //  Referenced by: '<S137>/ym_zero'

    real_T md_zero_Value_l;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S134>/md_zero'

    real_T ymin_zero_Value_e[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S134>/ymin_zero'

    real_T ymax_zero_Value_d[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S134>/ymax_zero'

    real_T umin_scale4_Gain_f[8];  // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S137>/umin_scale4'

    real_T ymin_scale1_Gain_p[13];  // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S137>/ymin_scale1'

    real_T S_zero_Value_m;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S134>/S_zero'

    real_T ymin_scale2_Gain_h;     // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S137>/ymin_scale2'

    real_T switch_zero_Value_m;        // Expression: zeros(1,1)
                                          //  Referenced by: '<S134>/switch_zero'

    real_T mvtarget_zero_Value_c[8];   // Expression: zeros(8,1)
                                          //  Referenced by: '<S134>/mv.target_zero'

    real_T uref_scale_Gain_f[8];       // Expression: RMVscale
                                          //  Referenced by: '<S137>/uref_scale'

    real_T ecrwt_zero_Value_o;         // Expression: zeros(1,1)
                                          //  Referenced by: '<S134>/ecr.wt_zero'

    real_T Delay1_InitialCondition[88];// Expression: zeros(11,8)
                                          //  Referenced by: '<S94>/Delay1'

    real_T Delay_InitialCondition_g[143];// Expression: repmat(MPC.Xi.',11,1)
                                            //  Referenced by: '<S94>/Delay'

    real_T Constant_Value_ce;          // Expression: MPC.Ts
                                          //  Referenced by: '<S94>/Constant'

    real_T Constant1_Value_gt;         // Expression: MPC.dts
                                          //  Referenced by: '<S94>/Constant1'

    real_T u_scale_Gain_o[8];          // Expression: MVscale
                                          //  Referenced by: '<S137>/u_scale'

    real_T useq_scale_Gain[88];        // Expression: MVscale(:,ones(1,p+1))'
                                          //  Referenced by: '<S137>/useq_scale'

    real_T useq_scale1_Gain[143];      // Expression: Yscale(:,ones(1,p+1))'
                                          //  Referenced by: '<S137>/useq_scale1'

    real_T PulseGenerator_Amp_a;       // Expression: 1
                                          //  Referenced by: '<S94>/Pulse Generator'

    real_T PulseGenerator_Period_d;    // Expression: 2
                                          //  Referenced by: '<S94>/Pulse Generator'

    real_T PulseGenerator_Duty_l;      // Expression: 1
                                          //  Referenced by: '<S94>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay_l;// Expression: 0
                                          //  Referenced by: '<S94>/Pulse Generator'

    real_T Delay_InitialCondition_a[8];// Expression: zeros(MPC.nu,1)
                                          //  Referenced by: '<S97>/Delay'

    real_T md_zero_Value_j;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S169>/md_zero'

    real_T mvtarget_zero_Value_f[8];   // Expression: zeros(8,1)
                                          //  Referenced by: '<S169>/mv.target_zero'

    real_T ymin_zero_Value_b[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S169>/y.min_zero'

    real_T ymax_zero_Value_e[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S169>/y.max_zero'

    real_T dmvmin_zero_Value[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S169>/dmv.min_zero'

    real_T dmvmax_zero_Value[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S169>/dmv.max_zero'

    real_T xmin_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S169>/x.min_zero'

    real_T xmax_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S169>/x.max_zero'

    real_T ecrwt_zero_Value_b;         // Expression: zeros(1,1)
                                          //  Referenced by: '<S169>/ecr.wt_zero'

    real_T params_zero_Value;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S169>/params_zero'

    real_T ones_Value[11];            // Expression: ones(PredictionHorizon+1,1)
                                         //  Referenced by: '<S171>/ones'

    real_T Constant1_Value_i[9];       // Expression: 2:max(2,PredictionHorizon)
                                          //  Referenced by: '<S171>/Constant1'

    real_T Constant_Value_ld[9];
                 // Expression: min(3,PredictionHorizon+1):(PredictionHorizon+1)
                    //  Referenced by: '<S171>/Constant'

    real_T einit_zero_Value;           // Expression: zeros(1,1)
                                          //  Referenced by: '<S169>/e.init_zero'

    real_T PulseGenerator_Amp_n;       // Expression: 1
                                          //  Referenced by: '<S97>/Pulse Generator'

    real_T PulseGenerator_Period_f;    // Expression: 20
                                          //  Referenced by: '<S97>/Pulse Generator'

    real_T PulseGenerator_Duty_c;      // Expression: 10
                                          //  Referenced by: '<S97>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay_l5;// Expression: 0
                                           //  Referenced by: '<S97>/Pulse Generator'

    real_T Constant_Value_g3[8];       // Expression: zeros(1,MPC.nu)
                                          //  Referenced by: '<S96>/Constant'

    real_T Constant2_Value_n;          // Expression: 0
                                          //  Referenced by: '<S96>/Constant2'

    real_T Merge_1_InitialOutput;   // Computed Parameter: Merge_1_InitialOutput
                                       //  Referenced by: '<S90>/Merge'

    real_T Merge_3_InitialOutput;   // Computed Parameter: Merge_3_InitialOutput
                                       //  Referenced by: '<S90>/Merge'

    real_T Delay_InitialCondition_c;   // Expression: 0.0
                                          //  Referenced by: '<S92>/Delay'

    real_T Out1_Y0_h5;                 // Computed Parameter: Out1_Y0_h5
                                          //  Referenced by: '<S223>/Out1'

    real_T DiscreteTimeIntegrator_gainval;
                           // Computed Parameter: DiscreteTimeIntegrator_gainval
                              //  Referenced by: '<S223>/Discrete-Time Integrator'

    real_T DiscreteTimeIntegrator_IC[3];// Expression: [0,0,0]
                                           //  Referenced by: '<S223>/Discrete-Time Integrator'

    real_T Out1_Y0_g4;                 // Computed Parameter: Out1_Y0_g4
                                          //  Referenced by: '<S224>/Out1'

    real_T Gain_Gain;                  // Expression: 2
                                          //  Referenced by: '<S249>/Gain'

    real_T Constant_Value_hf;          // Expression: 0.5
                                          //  Referenced by: '<S249>/Constant'

    real_T Gain2_Gain;                 // Expression: 2
                                          //  Referenced by: '<S249>/Gain2'

    real_T Gain1_Gain;                 // Expression: 2
                                          //  Referenced by: '<S249>/Gain1'

    real_T Gain_Gain_m;                // Expression: 2
                                          //  Referenced by: '<S250>/Gain'

    real_T Gain1_Gain_i;               // Expression: 2
                                          //  Referenced by: '<S250>/Gain1'

    real_T Constant_Value_bs;          // Expression: 0.5
                                          //  Referenced by: '<S250>/Constant'

    real_T Gain2_Gain_h;               // Expression: 2
                                          //  Referenced by: '<S250>/Gain2'

    real_T Constant_Value_nn;          // Expression: 0.5
                                          //  Referenced by: '<S248>/Constant'

    real_T Gain2_Gain_m;               // Expression: 2
                                          //  Referenced by: '<S248>/Gain2'

    real_T Gain_Gain_c;                // Expression: 2
                                          //  Referenced by: '<S248>/Gain'

    real_T Gain1_Gain_e;               // Expression: 2
                                          //  Referenced by: '<S248>/Gain1'

    real_T Quat_Y0;                    // Computed Parameter: Quat_Y0
                                          //  Referenced by: '<S260>/Quat'

    real_T u2_Gain;                    // Expression: 0.5
                                          //  Referenced by: '<S261>/1//2'

    real_T Constant_Value_iv;// Expression: simulation.sensors.dvl.maxSpeedThres
                                //  Referenced by: '<S199>/Constant'

    real_T Constant_Value_ll;          // Expression: 0
                                          //  Referenced by: '<S257>/Constant'

    real_T Delay_InitialCondition_f;   // Expression: 1
                                          //  Referenced by: '<S257>/Delay'

    real_T Constant_Value_or;          // Expression: 0.5
                                          //  Referenced by: '<S263>/Constant'

    real_T Gain_Gain_g;                // Expression: 2
                                          //  Referenced by: '<S263>/Gain'

    real_T Gain1_Gain_o;               // Expression: 2
                                          //  Referenced by: '<S263>/Gain1'

    real_T Gain2_Gain_n;               // Expression: 2
                                          //  Referenced by: '<S263>/Gain2'

    real_T Constant_Value_mz;          // Expression: 0.5
                                          //  Referenced by: '<S264>/Constant'

    real_T Gain_Gain_gs;               // Expression: 2
                                          //  Referenced by: '<S264>/Gain'

    real_T Gain1_Gain_j;               // Expression: 2
                                          //  Referenced by: '<S264>/Gain1'

    real_T Gain2_Gain_j;               // Expression: 2
                                          //  Referenced by: '<S264>/Gain2'

    real_T Constant_Value_j5;          // Expression: 0.5
                                          //  Referenced by: '<S265>/Constant'

    real_T Gain_Gain_e;                // Expression: 2
                                          //  Referenced by: '<S265>/Gain'

    real_T Gain1_Gain_ex;              // Expression: 2
                                          //  Referenced by: '<S265>/Gain1'

    real_T Gain2_Gain_hu;              // Expression: 2
                                          //  Referenced by: '<S265>/Gain2'

    real_T DepthMeasurements_Y0;     // Computed Parameter: DepthMeasurements_Y0
                                        //  Referenced by: '<S200>/Depth Measurements'

    real_T Constant_Value_bc;          // Expression: 0.5
                                          //  Referenced by: '<S273>/Constant'

    real_T Gain_Gain_ch;               // Expression: 2
                                          //  Referenced by: '<S273>/Gain'

    real_T Gain1_Gain_p;               // Expression: 2
                                          //  Referenced by: '<S273>/Gain1'

    real_T Gain2_Gain_e;               // Expression: 2
                                          //  Referenced by: '<S273>/Gain2'

    real_T Constant_Value_gx;          // Expression: 0
                                          //  Referenced by: '<S277>/Constant'

    real_T Switch_Threshold;           // Expression: 0
                                          //  Referenced by: '<S277>/Switch'

    real_T Constant1_Value_ih;         // Expression: 0
                                          //  Referenced by: '<S277>/Constant1'

    real_T xhat_Y0;                    // Computed Parameter: xhat_Y0
                                          //  Referenced by: '<S201>/xhat'

    real_T Q_Value[169];               // Expression: p.Q
                                          //  Referenced by: '<S276>/Q'

    real_T R3_Value;                   // Expression: p.R{3}
                                          //  Referenced by: '<S276>/R3'

    real_T MeasurementFcn3Inputs_Value;// Expression: 1
                                          //  Referenced by: '<S276>/MeasurementFcn3Inputs'

    real_T R2_Value[9];                // Expression: p.R{2}
                                          //  Referenced by: '<S276>/R2'

    real_T MeasurementFcn2Inputs_Value;// Expression: 1
                                          //  Referenced by: '<S276>/MeasurementFcn2Inputs'

    real_T R1_Value[100];              // Expression: p.R{1}
                                          //  Referenced by: '<S276>/R1'

    real_T MeasurementFcn1Inputs_Value;// Expression: 0
                                          //  Referenced by: '<S276>/MeasurementFcn1Inputs'

    real_T Switch1_Threshold;          // Expression: 0
                                          //  Referenced by: '<S277>/Switch1'

    real_T DataStoreMemoryP_InitialValue[169];// Expression: p.InitialCovariance
                                                 //  Referenced by: '<S276>/DataStoreMemory - P'

    real_T DataStoreMemoryx_InitialValue[13];// Expression: p.InitialState
                                                //  Referenced by: '<S276>/DataStoreMemory - x'

    real_T Constant_Value_l4[7];       // Expression: [0 0 0 1 0 0 0]
                                          //  Referenced by: '<S290>/Constant'

    real_T Constant1_Value_hu;         // Expression: MPC.p
                                          //  Referenced by: '<S290>/Constant1'

    real_T Out1_Y0_j3;                 // Computed Parameter: Out1_Y0_j3
                                          //  Referenced by: '<S304>/Out1'

    real_T MATLABSystem1_linearConvergence;// Expression: .25
                                              //  Referenced by: '<S293>/MATLAB System1'

    real_T MATLABSystem1_quaternionConverg;// Expression: .22
                                              //  Referenced by: '<S293>/MATLAB System1'

    real_T MATLABSystem1_TargetThreshold;// Expression: 2
                                            //  Referenced by: '<S293>/MATLAB System1'

    real_T linWpts_Y0;                 // Computed Parameter: linWpts_Y0
                                          //  Referenced by: '<S305>/linWpts'

    real_T RotWpts_Y0;                 // Computed Parameter: RotWpts_Y0
                                          //  Referenced by: '<S305>/RotWpts'

    real_T time_Y0;                    // Computed Parameter: time_Y0
                                          //  Referenced by: '<S305>/time'

    real_T target_Y0;                  // Computed Parameter: target_Y0
                                          //  Referenced by: '<S305>/target'

    real_T Constant_Value_j55;         // Expression: 0
                                          //  Referenced by: '<S305>/Constant'

    real_T PolynomialTrajectory_VelocityBo[6];// Expression: zeros( 3, 2 )
                                                 //  Referenced by: '<S309>/Polynomial Trajectory'

    real_T Constant_Value_htb;         // Expression: 1
                                          //  Referenced by: '<S306>/Constant'

    real_T DiscreteTimeIntegrator_gainva_g;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_g
                             //  Referenced by: '<S306>/Discrete-Time Integrator'

    real_T DiscreteTimeIntegrator_IC_j;// Expression: 0
                                          //  Referenced by: '<S306>/Discrete-Time Integrator'

    real_T Constant_Value_ao;          // Expression: 0
                                          //  Referenced by: '<S293>/Constant'

    real_T Constant_Value_mt[13];   // Expression: [0,0,0.3,1,0,0,0,0,0,0,0,0,0]
                                       //  Referenced by: '<S287>/Constant'

    real_T Constant1_Value_p;          // Expression: MPC.p
                                          //  Referenced by: '<S287>/Constant1'

    real_T Delay_InitialCondition_fy[8];// Expression: [0,0,0,0,0,0,0,0]
                                           //  Referenced by: '<S203>/Delay'

    real_T Delay_InitialCondition_at;  // Expression: 0
                                          //  Referenced by: '<S25>/Delay'

    real_T RandomNumber_Mean;          // Expression: 0
                                          //  Referenced by: '<S212>/Random Number'

    real_T RandomNumber_StdDev;       // Computed Parameter: RandomNumber_StdDev
                                         //  Referenced by: '<S212>/Random Number'

    real_T RandomNumber_Seed;          // Expression: 1
                                          //  Referenced by: '<S212>/Random Number'

    real_T RandomNumber1_Mean;         // Expression: 0
                                          //  Referenced by: '<S212>/Random Number1'

    real_T RandomNumber1_StdDev;     // Computed Parameter: RandomNumber1_StdDev
                                        //  Referenced by: '<S212>/Random Number1'

    real_T RandomNumber1_Seed;         // Expression: 525886
                                          //  Referenced by: '<S212>/Random Number1'

    real_T RandomNumber2_Mean;         // Expression: 0
                                          //  Referenced by: '<S212>/Random Number2'

    real_T RandomNumber2_StdDev;     // Computed Parameter: RandomNumber2_StdDev
                                        //  Referenced by: '<S212>/Random Number2'

    real_T RandomNumber2_Seed;         // Expression: 645156145645445
                                          //  Referenced by: '<S212>/Random Number2'

    real_T Delay_InitialCondition_fl;  // Expression: 0
                                          //  Referenced by: '<S4>/Delay'

    real_T Constant_Value_lu;          // Expression: 0.5
                                          //  Referenced by: '<S226>/Constant'

    real_T Gain2_Gain_g;               // Expression: 2
                                          //  Referenced by: '<S226>/Gain2'

    real_T Gain_Gain_cu;               // Expression: 2
                                          //  Referenced by: '<S226>/Gain'

    real_T Gain1_Gain_d;               // Expression: 2
                                          //  Referenced by: '<S226>/Gain1'

    real_T Gain_Gain_i;                // Expression: 2
                                          //  Referenced by: '<S227>/Gain'

    real_T Constant_Value_jk;          // Expression: 0.5
                                          //  Referenced by: '<S227>/Constant'

    real_T Gain2_Gain_b;               // Expression: 2
                                          //  Referenced by: '<S227>/Gain2'

    real_T Gain1_Gain_k;               // Expression: 2
                                          //  Referenced by: '<S227>/Gain1'

    real_T Gain_Gain_ey;               // Expression: 2
                                          //  Referenced by: '<S228>/Gain'

    real_T Gain1_Gain_g;               // Expression: 2
                                          //  Referenced by: '<S228>/Gain1'

    real_T Constant_Value_j5r;         // Expression: 0.5
                                          //  Referenced by: '<S228>/Constant'

    real_T Gain2_Gain_c;               // Expression: 2
                                          //  Referenced by: '<S228>/Gain2'

    real_T TSamp_WtEt_i;               // Computed Parameter: TSamp_WtEt_i
                                          //  Referenced by: '<S216>/TSamp'

    real_T Constant1_Value_fs[3];      // Expression: [0,0,-0.075]
                                          //  Referenced by: '<S212>/Constant1'

    real_T Constant_Value_i1;          // Expression: 0.5
                                          //  Referenced by: '<S232>/Constant'

    real_T Gain2_Gain_a;               // Expression: 2
                                          //  Referenced by: '<S232>/Gain2'

    real_T Gain_Gain_cb;               // Expression: 2
                                          //  Referenced by: '<S232>/Gain'

    real_T Gain1_Gain_pe;              // Expression: 2
                                          //  Referenced by: '<S232>/Gain1'

    real_T Gain_Gain_j;                // Expression: 2
                                          //  Referenced by: '<S233>/Gain'

    real_T Constant_Value_fi;          // Expression: 0.5
                                          //  Referenced by: '<S233>/Constant'

    real_T Gain2_Gain_l;               // Expression: 2
                                          //  Referenced by: '<S233>/Gain2'

    real_T Gain1_Gain_b;               // Expression: 2
                                          //  Referenced by: '<S233>/Gain1'

    real_T Gain_Gain_a;                // Expression: 2
                                          //  Referenced by: '<S234>/Gain'

    real_T Gain1_Gain_p4;              // Expression: 2
                                          //  Referenced by: '<S234>/Gain1'

    real_T Constant_Value_m5;          // Expression: 0.5
                                          //  Referenced by: '<S234>/Constant'

    real_T Gain2_Gain_ec;              // Expression: 2
                                          //  Referenced by: '<S234>/Gain2'

    real_T Constant_Value_fiw;         // Expression: 0.5
                                          //  Referenced by: '<S238>/Constant'

    real_T Gain2_Gain_f;               // Expression: 2
                                          //  Referenced by: '<S238>/Gain2'

    real_T Gain_Gain_p;                // Expression: 2
                                          //  Referenced by: '<S238>/Gain'

    real_T Gain1_Gain_h;               // Expression: 2
                                          //  Referenced by: '<S238>/Gain1'

    real_T Gain_Gain_f;                // Expression: 2
                                          //  Referenced by: '<S239>/Gain'

    real_T Constant_Value_lc;          // Expression: 0.5
                                          //  Referenced by: '<S239>/Constant'

    real_T Gain2_Gain_d;               // Expression: 2
                                          //  Referenced by: '<S239>/Gain2'

    real_T Gain1_Gain_l;               // Expression: 2
                                          //  Referenced by: '<S239>/Gain1'

    real_T Gain_Gain_gv;               // Expression: 2
                                          //  Referenced by: '<S240>/Gain'

    real_T Gain1_Gain_oz;              // Expression: 2
                                          //  Referenced by: '<S240>/Gain1'

    real_T Constant_Value_fo;          // Expression: 0.5
                                          //  Referenced by: '<S240>/Constant'

    real_T Gain2_Gain_o;               // Expression: 2
                                          //  Referenced by: '<S240>/Gain2'

    real_T Gain_Gain_er;               // Expression: -1
                                          //  Referenced by: '<S291>/Gain'

    real_T Merge_1_InitialOutput_i;
                                  // Computed Parameter: Merge_1_InitialOutput_i
                                     //  Referenced by: '<S8>/Merge'

    real_T Gain3_Gain[4];              // Expression: [1,-1,1,-1]
                                          //  Referenced by: '<S198>/Gain3'

    real_T Merge_4_InitialOutput;   // Computed Parameter: Merge_4_InitialOutput
                                       //  Referenced by: '<S8>/Merge'

    std::string StringConstant1_String;// Expression: FrameID
                                          //  Referenced by: '<S14>/String Constant1'

    std::string StringConstant1_String_j;// Expression: FrameID
                                            //  Referenced by: '<S132>/String Constant1'

    int32_T FixedHorizonOptimizer_Ndis;// Expression: Ndis
                                          //  Referenced by: '<S165>/FixedHorizonOptimizer'

    uint32_T Constant2_Value_l;        // Expression: uint32(MPC.nu)
                                          //  Referenced by: '<S19>/Constant2'

    uint32_T Constant5_Value;          // Expression: uint32(MPC.nx)
                                          //  Referenced by: '<S19>/Constant5'

    uint32_T Constant6_Value;          // Expression: uint32(MPC.nu)
                                          //  Referenced by: '<S19>/Constant6'

    uint32_T Constant7_Value;          // Expression: uint32(MPC.nu)
                                          //  Referenced by: '<S19>/Constant7'

    uint16_T mv_Y0;                    // Computed Parameter: mv_Y0
                                          //  Referenced by: '<S2>/mv'

    uint16_T Delay_InitialCondition_e[8];
                                 // Computed Parameter: Delay_InitialCondition_e
                                    //  Referenced by: '<S6>/Delay'

    boolean_T imu_tared_new_Y0;        // Computed Parameter: imu_tared_new_Y0
                                          //  Referenced by: '<S48>/imu_tared_new'

    boolean_T Memory_InitialCondition[226];// Expression: iA
                                              //  Referenced by: '<S101>/Memory'

    boolean_T Memory_InitialCondition_n[226];// Expression: iA
                                                //  Referenced by: '<S137>/Memory'

    boolean_T yBlockOrdering_Y0;       // Computed Parameter: yBlockOrdering_Y0
                                          //  Referenced by: '<S278>/yBlockOrdering'

    boolean_T yBlockOrdering_Y0_l;    // Computed Parameter: yBlockOrdering_Y0_l
                                         //  Referenced by: '<S279>/yBlockOrdering'

    boolean_T yBlockOrdering_Y0_h;    // Computed Parameter: yBlockOrdering_Y0_h
                                         //  Referenced by: '<S280>/yBlockOrdering'

    boolean_T BlockOrdering_Value;     // Expression: true()
                                          //  Referenced by: '<S276>/BlockOrdering'

    boolean_T Enable1_Value;           // Expression: true()
                                          //  Referenced by: '<S276>/Enable1'

    boolean_T Enable3_Value;           // Expression: true()
                                          //  Referenced by: '<S276>/Enable3'

    boolean_T Constant2_Value_h;       // Expression: false
                                          //  Referenced by: '<S290>/Constant2'

    boolean_T Constant3_Value_i;       // Expression: false
                                          //  Referenced by: '<S290>/Constant3'

    boolean_T Constant_Value_pl;       // Computed Parameter: Constant_Value_pl
                                          //  Referenced by: '<S296>/Constant'

    boolean_T Delay_InitialCondition_az;
                                // Computed Parameter: Delay_InitialCondition_az
                                   //  Referenced by: '<S293>/Delay'

    boolean_T Constant1_Value_is;      // Expression: false
                                          //  Referenced by: '<S293>/Constant1'

    boolean_T Constant2_Value_a;       // Expression: false
                                          //  Referenced by: '<S287>/Constant2'

    boolean_T Constant3_Value_n;       // Expression: false
                                          //  Referenced by: '<S287>/Constant3'

    boolean_T Merge_2_InitialOutput;// Computed Parameter: Merge_2_InitialOutput
                                       //  Referenced by: '<S8>/Merge'

    boolean_T Merge_3_InitialOutput_i;
                                  // Computed Parameter: Merge_3_InitialOutput_i
                                     //  Referenced by: '<S8>/Merge'

    int8_T Constant_Value_m0;          // Expression: int8(0)
                                          //  Referenced by: '<S95>/Constant'

    int8_T Constant1_Value_j;          // Expression: int8(0)
                                          //  Referenced by: '<S96>/Constant1'

    int8_T Merge_2_InitialOutput_i;
                                  // Computed Parameter: Merge_2_InitialOutput_i
                                     //  Referenced by: '<S90>/Merge'

  };

  // Real-time Model Data Structure
  struct RT_MODEL_proc_control_T {
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

    const char_T* getErrorStatus() const;
    void setErrorStatus(const char_T* const volatile aErrorStatus);
  };

  // Copy Constructor
  proc_control(proc_control const&) = delete;

  // Assignment Operator
  proc_control& operator= (proc_control const&) & = delete;

  // Move Constructor
  proc_control(proc_control &&) = delete;

  // Move Assignment Operator
  proc_control& operator= (proc_control &&) = delete;

  // Real-Time Model get method
  proc_control::RT_MODEL_proc_control_T * getRTM();

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

  // private member function(s) for subsystem '<S71>/SinkBlock'
  void proc_control_SinkBlock_Init(B_SinkBlock_proc_control_T *localB,
    DW_SinkBlock_proc_control_T *localDW);
  void proc_control_SinkBlock(const SL_Bus_std_msgs_Bool *rtu_0);
  void proc_control_SinkBlock_Term(DW_SinkBlock_proc_control_T *localDW);
  void proc_contro_Publisher_setupImpl(const ros_slros2_internal_block_Pub_T
    *obj, B_SinkBlock_proc_control_T *localB);

  // private member function(s) for subsystem '<S212>/Highpass Filter1'
  static void proc_contr_HighpassFilter1_Init(DW_HighpassFilter1_proc_contr_T
    *localDW);
  static void proc_control_HighpassFilter1(real_T rtu_0,
    B_HighpassFilter1_proc_contro_T *localB, DW_HighpassFilter1_proc_contr_T
    *localDW);
  static void proc_contr_HighpassFilter1_Term(DW_HighpassFilter1_proc_contr_T
    *localDW);

  // private member function(s) for subsystem '<S212>/Lowpass Filter'
  static void proc_control_LowpassFilter_Init(DW_LowpassFilter_proc_control_T
    *localDW);
  static void proc_control_LowpassFilter(real_T rtu_0,
    B_LowpassFilter_proc_control_T *localB, DW_LowpassFilter_proc_control_T
    *localDW);
  static void proc_control_LowpassFilter_Term(DW_LowpassFilter_proc_control_T
    *localDW);

  // private member function(s) for subsystem '<S212>/MATLAB Function3'
  static void proc_control_MATLABFunction3(real_T rtu_u, real_T *rty_y);

  // private member function(s) for subsystem '<S212>/Moving Average'
  void proc_control_MovingAverage_Init(DW_MovingAverage_proc_control_T *localDW);
  static void proc_control_MovingAverage(real_T rtu_0,
    B_MovingAverage_proc_control_T *localB, DW_MovingAverage_proc_control_T
    *localDW);
  static void proc_control_MovingAverage_Term(DW_MovingAverage_proc_control_T
    *localDW);
  void proc_control_SystemCore_setup(dsp_simulink_MovingAverage_pr_T *obj);

  // private member function(s) for subsystem '<S212>/Moving Average1'
  void proc_contro_MovingAverage1_Init(DW_MovingAverage1_proc_contro_T *localDW);
  static void proc_control_MovingAverage1(real_T rtu_0,
    B_MovingAverage1_proc_control_T *localB, DW_MovingAverage1_proc_contro_T
    *localDW);
  static void proc_contro_MovingAverage1_Term(DW_MovingAverage1_proc_contro_T
    *localDW);
  void proc_control_SystemCore_setup_n(dsp_simulink_MovingAverage_e_T *obj);

  // private member function(s) for subsystem '<S224>/Moving Average'
  void proc_contr_MovingAverage_m_Init(DW_MovingAverage_proc_contr_f_T *localDW);
  static void proc_control_MovingAverage_p(real_T rtu_0,
    B_MovingAverage_proc_contro_c_T *localB, DW_MovingAverage_proc_contr_f_T
    *localDW);
  static void proc_contr_MovingAverage_f_Term(DW_MovingAverage_proc_contr_f_T
    *localDW);
  void proc_contro_SystemCore_setup_n2(dsp_simulink_MovingAverage_e3_T *obj);

  // private member function(s) for subsystem '<Root>'
  real_T proc_control_xnrm2_pr(int32_T n, const real_T x[230], int32_T ix0);
  real_T proc_control_rt_hypotd_snf(real_T u0, real_T u1);
  void proc_control_qrFactor(const real_T A[130], const real_T S[169], const
    real_T Ns[100], real_T b_S[100]);
  void proc_control_trisolve_p(const real_T A[100], real_T B[130]);
  void proc_control_trisolve_pr(const real_T A[100], real_T B[130]);
  real_T proc_control_xnrm2_pr3(int32_T n, const real_T x[299], int32_T ix0);
  void proc_control_qrFactor_p(const real_T A[169], const real_T S[169], const
    real_T Ns[130], real_T b_S[169]);
  real_T proc_control_xnrm2_pr35(int32_T n, const real_T x[48], int32_T ix0);
  void proc_control_qrFactor_pr(const real_T A[39], const real_T S[169], const
    real_T Ns[9], real_T b_S[9]);
  void proc_control_trisolve_pr3(const real_T A[9], real_T B[39]);
  void proc_control_trisolve_pr35(const real_T A[9], real_T B[39]);
  real_T proc_control_xnrm2_pr351(int32_T n, const real_T x[208], int32_T ix0);
  void proc_control_qrFactor_pr3(const real_T A[169], const real_T S[169], const
    real_T Ns[39], real_T b_S[169]);
  real_T proc_control_xnrm2_pr351e(int32_T n, const real_T x[14], int32_T ix0);
  void EKFCorrectorAdditive_getMeasure(real_T Rs, const real_T x[13], const
    real_T S[169], real_T *zEstimated, real_T Pxy[13], real_T *Sy, real_T dHdx
    [13], real_T *Rsqrt);
  void proc_control_trisolve_pr351(real_T A, real_T B[13]);
  real_T proc_control_xnrm2_pr351ew(int32_T n, const real_T x[182], int32_T ix0);
  void proc_control_qrFactor_pr35(const real_T A[169], const real_T S[169],
    const real_T Ns[13], real_T b_S[169]);
  void proc_control_mldivide_pr351(const real_T A[36], real_T B[48]);
  real_T proc_control_rt_powd_snf(real_T u0, real_T u1);
  real_T proc_control_erf(real_T x);
  void proc_control_ft_3_pr(const real_T ct[1016], real_T out1[13]);
  void proc_control_ft_2_pr(const real_T ct[812], real_T out1[13]);
  void proc_control_ft_1_pr(const real_T ct[445], real_T out1[13]);
  void proc_con_AUVQuatPerturbedSimFcn(const real_T in1[13], const real_T in2[6],
    const real_T in4[38], real_T out1[13]);
  void proc_control_EkfNavStatesEq(real_T x[13], const real_T inputs[95]);
  real_T proc_control_xnrm2_pr351ewp(int32_T n, const real_T x[338], int32_T ix0);
  void proc_control_qrFactor_pr351(const real_T A[169], const real_T S[169],
    const real_T Ns[169], real_T b_S[169]);
  void pr_ProcPlannerManager_resetImpl(ProcPlannerManager_proc_contr_T *b_this);
  real_T proc_control_rt_atan2d_snf(real_T u0, real_T u1);
  real_T proc_control_norm_pr3(const real_T x[3]);
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
  void proc_con_quaternion_parenAssign(quaternion_proc_control_T *obj, const
    real_T rhs_a_data[], const int32_T rhs_a_size[2], const real_T rhs_b_data[],
    const int32_T rhs_b_size[2], const real_T rhs_c_data[], const int32_T
    rhs_c_size[2], const real_T rhs_d_data[], const int32_T rhs_d_size[2]);
  quaternion_proc_control_T proc_contr_quaternionBase_slerp(real_T q1_a, real_T
    q1_b, real_T q1_c, real_T q1_d, real_T q2_a, real_T q2_b, real_T q2_c,
    real_T q2_d);
  quaternion_proc_control_T proc_con_quaternionBase_slerp_p(real_T q1_a, real_T
    q1_b, real_T q1_c, real_T q1_d, real_T q2_a, real_T q2_b, real_T q2_c,
    real_T q2_d, real_T t);
  void proc_control_binary_expand_op_6(real_T *in1, const int32_T in2_size[2],
    real_T in3, const real_T in4_data[], const int32_T in4_size[2]);
  void proc_control_quaternionBase_log(real_T q_a, real_T q_b, real_T q_c,
    real_T q_d, real_T *b_q_a, real_T *b_q_b, real_T *b_q_c, real_T *b_q_d);
  void proc_control_SystemCore_step(robotics_slcore_internal_bloc_T *obj, real_T
    varargin_1, const real_T varargin_2[4], const real_T varargin_3[4], const
    real_T varargin_4[2], real_T varargout_1[4], real_T varargout_2[3], real_T
    varargout_3[3]);
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
  void proc_contr_mpcManager_resetImpl(mpcManager_proc_control_T *b_this);
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
  void proc_con_updateWeights_Cxwhp29c(real_T W[13], const real_T b_signal[13]);
  void proc_con_updateWeights_X8Xk4DtT(real_T W[8], const real_T b_signal[8]);
  void proc_control_WtMult(const real_T W[8], const real_T M_data[], const
    int32_T M_size[2], real_T WM_data[], int32_T WM_size[2]);
  void proc_control_binary_expand_op_1(real_T in1_data[], int32_T in1_size[2],
    const real_T in2_data[], const int32_T in2_size[2], const real_T in3_data[],
    const int32_T in3_size[2], const real_T in4_data[], const int32_T in4_size[2],
    const real_T in5[8], const real_T in6_data[], const int32_T in6_size[2],
    const real_T in7_data[], const int32_T in7_size[2]);
  void proc_control_binary_expand_op(real_T in1_data[], int32_T in1_size[2],
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
  void proc_control_binary_expand_op_2(real_T in1_data[], int32_T in1_size[2],
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
  void proc_control_binary_expand_op_5(coder::array<real_T, 1U> &in1, const
    coder::array<real_T, 1U> &in2, const coder::array<real_T, 2U> &in3, const
    real_T in4[21], const coder::array<real_T, 2U> &in5, const real_T in6[8],
    const coder::array<real_T, 2U> &in7, const coder::array<real_T, 1U> &in8);
  real_T proc_control_norm(const real_T x_data[], const int32_T x_size[1]);
  void proc_control_binary_expand_op_3(real_T in1_data[], int32_T in1_size[2],
    const coder::array<real_T, 2U> &in2, int32_T in3, const real_T in4_data[],
    const int32_T in4_size[1]);
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
  void proc_control_binary_expand_op_4(real_T in1_data[], int32_T in1_size[1],
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
  real_T proc_control_norm_T8v8L2Tp(const real_T x[169]);
  void proc_control_mpower_tzXsYTM4(const real_T a[169], real_T b, real_T c[169]);
  real_T proc_control_log2_td5QA1jf(real_T x);
  void proc_padeApproximation_ZNrSjUvf(const real_T A[169], const real_T A2[169],
    const real_T A4[169], const real_T A6[169], int32_T m, real_T F[169]);
  void pro_recomputeBlockDiag_L5Xzwsod(const real_T A[169], real_T F[169], const
    int32_T blockFormat[12]);
  real_T proc_control_xnrm2_FDKQwvLe(int32_T n, const real_T x[169], int32_T ix0);
  void proc_control_xzsyhetrd_hjMpIeYV(real_T A[169], real_T D[13], real_T E[12],
    real_T tau[12]);
  void proc_control_xzlascl_UrHmEn3p(real_T cfrom, real_T cto, int32_T m, real_T
    A[13], int32_T iA0);
  void proc_control_xzlascl_e1Lgd60X(real_T cfrom, real_T cto, int32_T m, real_T
    A[12], int32_T iA0);
  void proc_control_xzlartg_d6Fmu5CC(real_T f, real_T g, real_T *cs, real_T *sn,
    real_T *r);
  void proc_contr_rotateRight_LPTd6TqE(int32_T n, real_T z[169], int32_T iz0,
    const real_T cs[24], int32_T ic0, int32_T is0);
  void proc_control_xdlaev2_bAA6AE2m(real_T a, real_T b, real_T c, real_T *rt1,
    real_T *rt2, real_T *cs1, real_T *sn1);
  void proc_contr_rotateRight_bhIckkZy(int32_T n, real_T z[169], int32_T iz0,
    const real_T cs[24], int32_T ic0, int32_T is0);
  int32_T proc_control_xzsteqr_xBAkbbfn(real_T d[13], real_T e[12], real_T z[169]);
  void proc_control_xsyheev_90f7ppjY(real_T A[169], int32_T *info, real_T W[13]);
  void proc_control_expm_qR7qnd6I(real_T A[169], real_T F[169]);
  void proc_contro_mldivide_BWumgfaD_k(const real_T A[36], real_T B[36]);
  void proc_co_AUV8QuatSimFcn_ANG7N4e1(const real_T in1[13], const real_T in2[8],
    real_T out1[13]);
  real_T proc_control_norm_5tbm0KyS(const real_T x[4]);
  void proc_c_mpc_plantupdate_QNmVLHih(const real_T a[169], real_T b[104], const
    real_T c[169], real_T b_A[441], real_T b_B[630], real_T b_C[273], const
    real_T b_D[390], const int32_T b_mvindex[8], const int32_T b_myindex[13],
    const real_T b_Uscale[8], const real_T b_Yscale[13], real_T Bu[168], real_T
    Bv[21], real_T Cm[273], real_T Dv[13], real_T Dvm[13], real_T QQ[441],
    real_T RR[169], real_T NN[273]);
  void mpc_constraintcoefLTV_hfPbWyM_b(const real_T b_A[4851], const real_T Bu
    [1848], const real_T Bv[231], const real_T b_C[3003], const real_T Dv[143],
    const real_T b_Jm[640], real_T b_SuJm[1040], real_T b_Sx[2730], real_T
    b_Su1[1040], real_T b_Hv[1430]);
  int32_T proc_control_xpotrf_FPrJkkYE(real_T b_A[81]);
  real_T proc_control_minimum_Tj2c1hlw(const real_T x[9]);
  void proc_control_trisolve_sFlGkFFn(const real_T b_A[81], real_T b_B[81]);
  real_T proc_control_norm_ncQhwrEv(const real_T x[9]);
  real_T proc_control_maximum_jZnaLMOl(const real_T x[9]);
  real_T proc_control_xnrm2_vEYIKini(int32_T n, const real_T x[81], int32_T ix0);
  void proc_control_xgemv_lLUaKohL(int32_T b_m, int32_T n, const real_T b_A[81],
    int32_T ia0, const real_T x[81], int32_T ix0, real_T y[9]);
  void proc_control_xgerc_0W2nVssH(int32_T b_m, int32_T n, real_T alpha1,
    int32_T ix0, const real_T y[9], real_T b_A[81], int32_T ia0);
  real_T proc_contro_KWIKfactor_ypeDhrCg(const real_T b_Ac[2034], const int32_T
    iC[226], int32_T nA, const real_T b_Linv[81], real_T RLinv[81], real_T b_D
    [81], real_T b_H[81], int32_T n);
  void proc_co_DropConstraint_BByivNjC(int32_T kDrop, boolean_T iA[226], int32_T
    *nA, int32_T iC[226]);
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
  void proc_control_isfinite_2ZoJfJwq(const real_T x[8], boolean_T b[8]);
  void proc_control_getUBounds(const real_T runtimedata_lastMV[8], const real_T
    runtimedata_MVMin[80], const real_T runtimedata_MVMax[80], const real_T
    runtimedata_MVRateMin[80], const real_T runtimedata_MVRateMax[80], real_T
    A_data[], int32_T A_size[2], real_T Bu_data[], int32_T Bu_size[1]);
  void proc_control_getXUe_yiQq1qwl(const real_T z[139], const real_T x[13],
    real_T X[143], real_T U[88], real_T *e);
  void AUV8QuatJacobianMatrix_9OlopN_b(const real_T in1[13], real_T Anqv[169]);
  void proc_co_stateEvolution_Llf9ztGy(const real_T X[143], const real_T U[88],
    real_T c[130], real_T J[18070]);
  void proc_control_all_Dt0A7QFv(const boolean_T x[130], boolean_T y[13]);
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
  int32_T p_checkVectorNonFinite_R8rA6F1f(const real_T vec[130]);
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
  void proc_control_test_exit(sG8JZ69axY52WWR6RKyApQC_proc__T *MeritFunction,
    const s_PAtG1CW05sRYOWrqzwRQyC_proc_T *WorkingSet,
    s_WVbWSSvCeJzx5TXXa9L1l_proc__T *TrialState, const real_T lb[139], boolean_T
    *Flags_gradOK, boolean_T *Flags_fevalOK, boolean_T *Flags_done, boolean_T
    *Flags_stepAccepted, boolean_T *Flags_failedLineSearch, int32_T
    *Flags_stepType);
  void proc_control_saveJacobian(s_WVbWSSvCeJzx5TXXa9L1l_proc__T *obj, int32_T
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
  void proc_control_test_exit_d(s7RdrPWkr8UPAUyTdDJkLaG_proc__T *Flags,
    s_z8miyzCNLMZx998HtZciUB_proc_T *memspace, sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, const int32_T fscales_lineq_constraint_size[1], const
    int32_T fscales_cineq_constraint_size[1], s_PAtG1CW05sRYOWrqzwRQyC_proc_T
    *WorkingSet, s_WVbWSSvCeJzx5TXXa9L1l_proc__T *TrialState,
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
  int32_T proc_control_rank(const real_T qrmanager_QR_data[], const int32_T
    qrmanager_QR_size[2], int32_T qrmanager_mrows, int32_T qrmanager_ncols);
  void proc_control_xgemv_jh(int32_T m, int32_T n, const real_T A_data[],
    int32_T lda, const real_T x_data[], real_T y_data[]);
  real_T proc_c_maxConstraintViolation_a(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj,
    const real_T x_data[]);
  void proc_control_xgemv_jhn(int32_T m, int32_T n, const real_T A_data[],
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
  void proc_control_xgemv_jhnw(int32_T m, int32_T n, const real_T A_data[],
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
  void proc_control_xgemv_jhnw4(int32_T m, int32_T n, const real_T A[19321],
    int32_T lda, const real_T x_data[], real_T y_data[]);
  void proc_contro_computeGrad_StoreHx(s_bsf2Fsale81D2LTDCKuKhG_proc_T *obj,
    const real_T H[19321], const real_T f_data[], const real_T x_data[]);
  real_T proc_contro_computeFval_ReuseHx(const s_bsf2Fsale81D2LTDCKuKhG_proc_T
    *obj, real_T workspace_data[], const real_T f_data[], const real_T x_data[]);
  void proc_control_xgeqrf_e(real_T A_data[], const int32_T A_size[2], int32_T m,
    int32_T n, real_T tau_data[], int32_T tau_size[1]);
  void proc_control_factorQR(s_o1KzuWoPqzc62zOgqamCNH_proc_T *obj, const real_T
    A_data[], int32_T mrows, int32_T ncols, int32_T ldA);
  void proc_control_xrotg_FR4eOElQ(real_T *a, real_T *b, real_T *c, real_T *s);
  void proc_control_squareQ_appendCol(s_o1KzuWoPqzc62zOgqamCNH_proc_T *obj,
    const real_T vec_data[], int32_T iv0);
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
  void proc_control_factor_h(s_962gqykB8vLiRVqsLdGQIG_proc_T *obj, const real_T
    A[19321], int32_T ndims, int32_T ldA);
  void proc_control_factor(s_962gqykB8vLiRVqsLdGQIG_proc_T *obj, const real_T A
    [19321], int32_T ndims, int32_T ldA);
  void proc_control_solve_f(const s_962gqykB8vLiRVqsLdGQIG_proc_T *obj, real_T
    rhs_data[]);
  void proc_control_solve(const s_962gqykB8vLiRVqsLdGQIG_proc_T *obj, real_T
    rhs_data[]);
  void proc_control_compute_deltax(const real_T H[19321],
    s_WVbWSSvCeJzx5TXXa9L1l_proc__T *solution, s_z8miyzCNLMZx998HtZciUB_proc_T
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
  void proc_c_checkUnboundedOrIllPosed(s_WVbWSSvCeJzx5TXXa9L1l_proc__T *solution,
    const s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective);
  void proc_addBoundToActiveSetMatrix_(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj,
    int32_T TYPE, int32_T idx_local);
  void proc_control_addAineqConstr(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj, int32_T
    idx_local);
  void proc_control_compute_lambda(real_T workspace_data[],
    s_WVbWSSvCeJzx5TXXa9L1l_proc__T *solution, const
    s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective, const
    s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager);
  void pr_checkStoppingAndUpdateFval_h(int32_T *activeSetChangeID,
    s_WVbWSSvCeJzx5TXXa9L1l_proc__T *solution, s_z8miyzCNLMZx998HtZciUB_proc_T
    *memspace, const s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective,
    s_PAtG1CW05sRYOWrqzwRQyC_proc_T *workingset, s_o1KzuWoPqzc62zOgqamCNH_proc_T
    *qrmanager, int32_T runTimeOptions_MaxIterations, boolean_T *updateFval);
  void proc_control_iterate_n(const real_T H[19321], const real_T f_data[],
    s_WVbWSSvCeJzx5TXXa9L1l_proc__T *solution, s_z8miyzCNLMZx998HtZciUB_proc_T
    *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T *workingset,
    s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager, s_962gqykB8vLiRVqsLdGQIG_proc_T *
    cholmanager, s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective, const char_T
    options_SolverName[7], int32_T runTimeOptions_MaxIterations);
  void proc_checkStoppingAndUpdateFval(int32_T *activeSetChangeID, const real_T
    f_data[], s_WVbWSSvCeJzx5TXXa9L1l_proc__T *solution,
    s_z8miyzCNLMZx998HtZciUB_proc_T *memspace, const
    s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective, s_PAtG1CW05sRYOWrqzwRQyC_proc_T *
    workingset, s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager, int32_T
    runTimeOptions_MaxIterations, const boolean_T *updateFval);
  void proc_control_iterate(const real_T H[19321], const real_T f_data[],
    s_WVbWSSvCeJzx5TXXa9L1l_proc__T *solution, s_z8miyzCNLMZx998HtZciUB_proc_T
    *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T *workingset,
    s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager, s_962gqykB8vLiRVqsLdGQIG_proc_T *
    cholmanager, s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective, const char_T
    options_SolverName[7], int32_T runTimeOptions_MaxIterations);
  void proc_control_phaseone(const real_T H[19321], const real_T f_data[],
    s_WVbWSSvCeJzx5TXXa9L1l_proc__T *solution, s_z8miyzCNLMZx998HtZciUB_proc_T
    *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T *workingset,
    s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager, s_962gqykB8vLiRVqsLdGQIG_proc_T *
    cholmanager, s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective, const char_T
    options_SolverName[7], const somzaGboVhDG7PNQS6E98jD_proc__T *runTimeOptions);
  void proc_control_linearForm_(boolean_T obj_hasLinear, int32_T obj_nvar,
    real_T workspace_data[], const real_T H[19321], const real_T f_data[], const
    real_T x_data[]);
  void proc_control_driver_m(const real_T H[19321], const real_T f_data[],
    s_WVbWSSvCeJzx5TXXa9L1l_proc__T *solution, s_z8miyzCNLMZx998HtZciUB_proc_T
    *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T *workingset,
    s_o1KzuWoPqzc62zOgqamCNH_proc_T *qrmanager, s_962gqykB8vLiRVqsLdGQIG_proc_T *
    cholmanager, s_bsf2Fsale81D2LTDCKuKhG_proc_T *objective, const
    somzaGboVhDG7PNQS6E98jD_proc__T *options, const
    somzaGboVhDG7PNQS6E98jD_proc__T *runTimeOptions);
  void proc_control_addAeqConstr(s_PAtG1CW05sRYOWrqzwRQyC_proc_T *obj, int32_T
    idx_local);
  boolean_T proc_control_soc(const real_T Hessian[19321], const real_T
    grad_data[], s_WVbWSSvCeJzx5TXXa9L1l_proc__T *TrialState,
    s_z8miyzCNLMZx998HtZciUB_proc_T *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T
    *WorkingSet, s_o1KzuWoPqzc62zOgqamCNH_proc_T *QRManager,
    s_962gqykB8vLiRVqsLdGQIG_proc_T *CholManager,
    s_bsf2Fsale81D2LTDCKuKhG_proc_T *QPObjective, const
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions);
  real_T proc_con_maxConstraintViolation(const s_PAtG1CW05sRYOWrqzwRQyC_proc_T
    *obj, const real_T x_data[]);
  void proc_control_normal(const real_T Hessian[19321], const real_T grad_data[],
    s_WVbWSSvCeJzx5TXXa9L1l_proc__T *TrialState, sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, s_z8miyzCNLMZx998HtZciUB_proc_T *memspace,
    s_PAtG1CW05sRYOWrqzwRQyC_proc_T *WorkingSet, s_o1KzuWoPqzc62zOgqamCNH_proc_T
    *QRManager, s_962gqykB8vLiRVqsLdGQIG_proc_T *CholManager,
    s_bsf2Fsale81D2LTDCKuKhG_proc_T *QPObjective, const
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions, s7RdrPWkr8UPAUyTdDJkLaG_proc__T *
    stepFlags);
  void proc_control_relaxed(const real_T Hessian[19321], const real_T grad_data[],
    s_WVbWSSvCeJzx5TXXa9L1l_proc__T *TrialState, sG8JZ69axY52WWR6RKyApQC_proc__T
    *MeritFunction, s_z8miyzCNLMZx998HtZciUB_proc_T *memspace,
    s_PAtG1CW05sRYOWrqzwRQyC_proc_T *WorkingSet, s_o1KzuWoPqzc62zOgqamCNH_proc_T
    *QRManager, s_962gqykB8vLiRVqsLdGQIG_proc_T *CholManager,
    s_bsf2Fsale81D2LTDCKuKhG_proc_T *QPObjective,
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions);
  void proc_control_step_k(s7RdrPWkr8UPAUyTdDJkLaG_proc__T *stepFlags, real_T
    Hessian[19321], const real_T lb[139], s_WVbWSSvCeJzx5TXXa9L1l_proc__T
    *TrialState, sG8JZ69axY52WWR6RKyApQC_proc__T *MeritFunction,
    s_z8miyzCNLMZx998HtZciUB_proc_T *memspace, s_PAtG1CW05sRYOWrqzwRQyC_proc_T
    *WorkingSet, s_o1KzuWoPqzc62zOgqamCNH_proc_T *QRManager,
    s_962gqykB8vLiRVqsLdGQIG_proc_T *CholManager,
    s_bsf2Fsale81D2LTDCKuKhG_proc_T *QPObjective,
    somzaGboVhDG7PNQS6E98jD_proc__T *qpoptions);
  void proc_control_outputBounds_k(const real_T runtimedata_OutputMin[130],
    const real_T runtimedata_OutputMax[130], const real_T X[143], real_T e,
    real_T c_data[], int32_T c_size[2]);
  void proc_co_stateEvolution_FxOsuqwB(const real_T X[143], const real_T U[88],
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
    WorkingSet_Aineq_data[], s_WVbWSSvCeJzx5TXXa9L1l_proc__T *TrialState, real_T
    MeritFunction_penaltyParam, real_T MeritFunction_phi, real_T
    MeritFunction_phiPrimePlus, real_T MeritFunction_phiFullStep, int32_T
    FcnEvaluator_next_next_next_nex, const s_qYIvDqP9yRqtt40IDZ89JG_proc_T
    *FcnEvaluator_next_next_next_n_0, const s_xJmQKnCTzvv6aUzMZcIqsF_proc_T
    *FcnEvaluator_next_next_next_n_1, boolean_T socTaken, real_T *alpha, int32_T
    *exitflag);
  void proc_control_driver(const real_T bineq_data[], const real_T lb[139],
    s_WVbWSSvCeJzx5TXXa9L1l_proc__T *TrialState, sG8JZ69axY52WWR6RKyApQC_proc__T
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
    const s_qYIvDqP9yRqtt40IDZ89JG_proc_T *nonlcon_workspace_runtimedata, real_T
    x[139], real_T *fval, real_T *exitflag, sttYSJM5GCi2c1Eu0R50efC_proc__T
    *output);
  real_T proc_rt_urand_Upu32_Yd_f_pw_snf(uint32_T *u);
  real_T proc_rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u);
  void p_Subscriber_setupImpl_pr351ewp(const ros_slros2_internal_block_Sub_T
    *obj);
  void pr_Publisher_setupImpl_pr351ewp(const ros_slros2_internal_block_Pub_T
    *obj);
  void pr_Subscriber_setupImpl_pr351ew(const ros_slros2_internal_block_Sub_T
    *obj);
  void pro_Subscriber_setupImpl_pr351e(const ros_slros2_internal_block_Sub_T
    *obj);
  void Subscriber_setupImpl_pr351ewpk(const ros_slros2_internal_block_Sub_T *obj);
  void Subscriber_setupIm_pr351ewpk3k4(const ros_slros2_internal_block_Sub_T
    *obj);
  void Subscriber_setupImp_pr351ewpk3k(const ros_slros2_internal_block_Sub_T
    *obj);
  void Subscriber_setupImpl_pr351ewpk3(const ros_slros2_internal_block_Sub_T
    *obj);
  void Subscriber_setupI_pr351ewpk3k4u(const ros_slros2_internal_block_Sub_T
    *obj);
  void Subscriber_setup_pr351ewpk3k4u0(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc__Publisher_setupImpl_pr351(const ros_slros2_internal_block_Pub_T
    *obj);
  void proc_Publisher_setupImpl_pr351e(const ros_slros2_internal_block_Pub_T
    *obj);
  void pro_Publisher_setupImpl_pr351ew(const ros_slros2_internal_block_Pub_T
    *obj);
  rmw_qos_profile_t pr_ROS2PubSubBase_setQOSProfile(rmw_qos_profile_t rmwProfile,
    real_T qosDepth, real_T qosDeadline, real_T qosLifespan, real_T
    qosLeaseDuration, boolean_T qosAvoidROSNamespaceConventions);
  void proc_cont_Publisher_setupImpl_p(const ros_slros2_internal_block_Pub_T
    *obj);
  void proc_cont_PolyTrajSys_setupImpl(robotics_slcore_internal_bl_p_T *obj);
  void proc_con_Subscriber_setupImpl_d(const ros_slros2_internal_block_Sub_T
    *obj);
  void Subscriber_setu_pr351ewpk3k4u0o(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_con_Subscriber_setupImpl_n(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_con_Publisher_setupImpl_pr(const ros_slros2_internal_block_Pub_T
    *obj);
  void proc_co_Publisher_setupImpl_pr3(const ros_slros2_internal_block_Pub_T
    *obj);
  void proc_c_Publisher_setupImpl_pr35(const ros_slros2_internal_block_Pub_T
    *obj);
  void proc_con_Subscriber_setupImpl_p(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_co_Subscriber_setupImpl_pr(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc__Subscriber_setupImpl_pr35(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_c_Subscriber_setupImpl_pr3(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_Subscriber_setupImpl_pr351(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_contr_Subscriber_setupImpl(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_con_Subscriber_setupImpl_g(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_con_Subscriber_setupImpl_k(const ros_slros2_internal_block_Sub_T
    *obj);
  void p_Publisher_setupImpl_pr351ewpk(const ros_slros2_internal_block_Pub_T
    *obj);

  // Real-Time Model
  RT_MODEL_proc_control_T proc_control_M;
};

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S67>/Data Type Duplicate' : Unused code path elimination
//  Block '<S76>/FixPt Data Type Duplicate2' : Unused code path elimination
//  Block '<S68>/Data Type Duplicate' : Unused code path elimination
//  Block '<S77>/FixPt Data Type Duplicate2' : Unused code path elimination
//  Block '<S69>/Data Type Duplicate' : Unused code path elimination
//  Block '<S78>/FixPt Data Type Duplicate2' : Unused code path elimination
//  Block '<S70>/Data Type Duplicate' : Unused code path elimination
//  Block '<S79>/FixPt Data Type Duplicate2' : Unused code path elimination
//  Block '<S90>/Display' : Unused code path elimination
//  Block '<S102>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S103>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S104>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S105>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S106>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S107>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S108>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S109>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S110>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S111>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S112>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S113>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S114>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S115>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S116>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S117>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S118>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S119>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S120>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S121>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S122>/Vector Dimension Check' : Unused code path elimination
//  Block '<S123>/Vector Dimension Check' : Unused code path elimination
//  Block '<S124>/Vector Dimension Check' : Unused code path elimination
//  Block '<S125>/Vector Dimension Check' : Unused code path elimination
//  Block '<S126>/Vector Dimension Check' : Unused code path elimination
//  Block '<S127>/Vector Dimension Check' : Unused code path elimination
//  Block '<S101>/last_x' : Unused code path elimination
//  Block '<S128>/Vector Dimension Check' : Unused code path elimination
//  Block '<S101>/useq_scale' : Unused code path elimination
//  Block '<S101>/useq_scale1' : Unused code path elimination
//  Block '<S137>/Constant' : Unused code path elimination
//  Block '<S137>/Floor' : Unused code path elimination
//  Block '<S137>/Floor1' : Unused code path elimination
//  Block '<S138>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S139>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S140>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S141>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S142>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S143>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S144>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S145>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S146>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S147>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S148>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S149>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S150>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S151>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S152>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S153>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S154>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S155>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S156>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S157>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S158>/Vector Dimension Check' : Unused code path elimination
//  Block '<S159>/Vector Dimension Check' : Unused code path elimination
//  Block '<S160>/Vector Dimension Check' : Unused code path elimination
//  Block '<S161>/Vector Dimension Check' : Unused code path elimination
//  Block '<S162>/Vector Dimension Check' : Unused code path elimination
//  Block '<S163>/Vector Dimension Check' : Unused code path elimination
//  Block '<S137>/Min' : Unused code path elimination
//  Block '<S137>/last_x' : Unused code path elimination
//  Block '<S164>/Vector Dimension Check' : Unused code path elimination
//  Block '<S134>/m_zero' : Unused code path elimination
//  Block '<S134>/p_zero' : Unused code path elimination
//  Block '<S167>/Data Type Duplicate' : Unused code path elimination
//  Block '<S172>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S173>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S174>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S175>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S176>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S177>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S178>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S179>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S180>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S181>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S182>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S183>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S184>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S185>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S186>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S187>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S188>/Vector Dimension Check' : Unused code path elimination
//  Block '<S189>/Vector Dimension Check' : Unused code path elimination
//  Block '<S190>/Vector Dimension Check' : Unused code path elimination
//  Block '<S191>/Vector Dimension Check' : Unused code path elimination
//  Block '<S169>/mv.init_zero' : Unused code path elimination
//  Block '<S169>/x.init_zero' : Unused code path elimination
//  Block '<S197>/Data Type Duplicate' : Unused code path elimination
//  Block '<S197>/Data Type Propagation' : Unused code path elimination
//  Block '<S216>/Data Type Duplicate' : Unused code path elimination
//  Block '<S212>/Scope1' : Unused code path elimination
//  Block '<S212>/add' : Unused code path elimination
//  Block '<S212>/orientation' : Unused code path elimination
//  Block '<S198>/Gain1' : Unused code path elimination
//  Block '<S198>/Gain2' : Unused code path elimination
//  Block '<S209>/Unary Minus' : Unused code path elimination
//  Block '<S209>/Unary Minus1' : Unused code path elimination
//  Block '<S209>/Unary Minus2' : Unused code path elimination
//  Block '<S211>/Divide' : Unused code path elimination
//  Block '<S211>/Divide1' : Unused code path elimination
//  Block '<S211>/Divide2' : Unused code path elimination
//  Block '<S211>/Divide3' : Unused code path elimination
//  Block '<S255>/Unary Minus' : Unused code path elimination
//  Block '<S255>/Unary Minus1' : Unused code path elimination
//  Block '<S255>/Unary Minus2' : Unused code path elimination
//  Block '<S256>/Product' : Unused code path elimination
//  Block '<S256>/Product1' : Unused code path elimination
//  Block '<S256>/Product2' : Unused code path elimination
//  Block '<S256>/Product3' : Unused code path elimination
//  Block '<S256>/Sum' : Unused code path elimination
//  Block '<S199>/Scope' : Unused code path elimination
//  Block '<S200>/Discrete Transfer Fcn' : Unused code path elimination
//  Block '<S268>/Data Type Duplicate' : Unused code path elimination
//  Block '<S268>/Diff' : Unused code path elimination
//  Block '<S268>/TSamp' : Unused code path elimination
//  Block '<S268>/UD' : Unused code path elimination
//  Block '<S271>/Constant' : Unused code path elimination
//  Block '<S271>/Gain' : Unused code path elimination
//  Block '<S271>/Gain1' : Unused code path elimination
//  Block '<S271>/Gain2' : Unused code path elimination
//  Block '<S271>/Product' : Unused code path elimination
//  Block '<S271>/Product1' : Unused code path elimination
//  Block '<S271>/Product2' : Unused code path elimination
//  Block '<S271>/Product3' : Unused code path elimination
//  Block '<S271>/Product4' : Unused code path elimination
//  Block '<S271>/Product5' : Unused code path elimination
//  Block '<S271>/Product6' : Unused code path elimination
//  Block '<S271>/Product7' : Unused code path elimination
//  Block '<S271>/Product8' : Unused code path elimination
//  Block '<S271>/Sum' : Unused code path elimination
//  Block '<S271>/Sum1' : Unused code path elimination
//  Block '<S271>/Sum2' : Unused code path elimination
//  Block '<S271>/Sum3' : Unused code path elimination
//  Block '<S272>/Constant' : Unused code path elimination
//  Block '<S272>/Gain' : Unused code path elimination
//  Block '<S272>/Gain1' : Unused code path elimination
//  Block '<S272>/Gain2' : Unused code path elimination
//  Block '<S272>/Product' : Unused code path elimination
//  Block '<S272>/Product1' : Unused code path elimination
//  Block '<S272>/Product2' : Unused code path elimination
//  Block '<S272>/Product3' : Unused code path elimination
//  Block '<S272>/Product4' : Unused code path elimination
//  Block '<S272>/Product5' : Unused code path elimination
//  Block '<S272>/Product6' : Unused code path elimination
//  Block '<S272>/Product7' : Unused code path elimination
//  Block '<S272>/Product8' : Unused code path elimination
//  Block '<S272>/Sum' : Unused code path elimination
//  Block '<S272>/Sum1' : Unused code path elimination
//  Block '<S272>/Sum2' : Unused code path elimination
//  Block '<S272>/Sum3' : Unused code path elimination
//  Block '<S276>/checkMeasurementFcn1Signals' : Unused code path elimination
//  Block '<S276>/checkMeasurementFcn2Signals' : Unused code path elimination
//  Block '<S276>/checkMeasurementFcn3Signals' : Unused code path elimination
//  Block '<S276>/checkStateTransitionFcnSignals' : Unused code path elimination
//  Block '<S201>/Scope' : Unused code path elimination
//  Block '<S203>/Display' : Unused code path elimination
//  Block '<S204>/Scope' : Unused code path elimination
//  Block '<S204>/Scope1' : Unused code path elimination
//  Block '<S204>/Scope2' : Unused code path elimination
//  Block '<S204>/Scope3' : Unused code path elimination
//  Block '<S291>/Scope' : Unused code path elimination
//  Block '<S305>/Display' : Unused code path elimination
//  Block '<S305>/Selector3' : Unused code path elimination
//  Block '<S293>/Scope' : Unused code path elimination
//  Block '<S308>/Constant1' : Unused code path elimination
//  Block '<S308>/Constant2' : Unused code path elimination
//  Block '<S308>/Constant3' : Unused code path elimination
//  Block '<S308>/Constant4' : Unused code path elimination
//  Block '<S308>/Constant5' : Unused code path elimination
//  Block '<S308>/Constant6' : Unused code path elimination
//  Block '<S308>/Frame' : Unused code path elimination
//  Block '<S308>/fine' : Unused code path elimination
//  Block '<S308>/speed' : Unused code path elimination
//  Block '<S308>/speed1' : Unused code path elimination
//  Block '<S49>/Data Type Conversion1' : Eliminate redundant data type conversion
//  Block '<S49>/Data Type Conversion2' : Eliminate redundant data type conversion
//  Block '<S49>/Data Type Conversion3' : Eliminate redundant data type conversion
//  Block '<S49>/Data Type Conversion4' : Eliminate redundant data type conversion
//  Block '<S4>/Zero-Order Hold' : Eliminated since input and output rates are identical
//  Block '<S101>/Reshape' : Reshape block reduction
//  Block '<S101>/Reshape1' : Reshape block reduction
//  Block '<S101>/Reshape2' : Reshape block reduction
//  Block '<S101>/Reshape3' : Reshape block reduction
//  Block '<S101>/Reshape4' : Reshape block reduction
//  Block '<S101>/Reshape5' : Reshape block reduction
//  Block '<S137>/Reshape' : Reshape block reduction
//  Block '<S137>/Reshape1' : Reshape block reduction
//  Block '<S137>/Reshape2' : Reshape block reduction
//  Block '<S137>/Reshape3' : Reshape block reduction
//  Block '<S137>/Reshape4' : Reshape block reduction
//  Block '<S137>/Reshape5' : Reshape block reduction
//  Block '<S170>/Reshape1' : Reshape block reduction
//  Block '<S170>/mo or x Conversion' : Eliminate redundant data type conversion
//  Block '<S170>/mo or x Conversion10' : Eliminate redundant data type conversion
//  Block '<S170>/mo or x Conversion11' : Eliminate redundant data type conversion
//  Block '<S170>/mo or x Conversion12' : Eliminate redundant data type conversion
//  Block '<S170>/mo or x Conversion13' : Eliminate redundant data type conversion
//  Block '<S170>/mo or x Conversion14' : Eliminate redundant data type conversion
//  Block '<S170>/mo or x Conversion15' : Eliminate redundant data type conversion
//  Block '<S170>/mo or x Conversion16' : Eliminate redundant data type conversion
//  Block '<S170>/mo or x Conversion17' : Eliminate redundant data type conversion
//  Block '<S170>/mo or x Conversion18' : Eliminate redundant data type conversion
//  Block '<S170>/mo or x Conversion19' : Eliminate redundant data type conversion
//  Block '<S170>/mo or x Conversion2' : Eliminate redundant data type conversion
//  Block '<S170>/mo or x Conversion3' : Eliminate redundant data type conversion
//  Block '<S170>/mo or x Conversion4' : Eliminate redundant data type conversion
//  Block '<S170>/mo or x Conversion5' : Eliminate redundant data type conversion
//  Block '<S170>/mo or x Conversion6' : Eliminate redundant data type conversion
//  Block '<S170>/mo or x Conversion7' : Eliminate redundant data type conversion
//  Block '<S170>/mo or x Conversion8' : Eliminate redundant data type conversion
//  Block '<S170>/mo or x Conversion9' : Eliminate redundant data type conversion
//  Block '<S171>/reshape_mv' : Reshape block reduction
//  Block '<S212>/Rate Transition' : Eliminated since input and output rates are identical
//  Block '<S212>/Rate Transition1' : Eliminated since input and output rates are identical
//  Block '<S276>/DataTypeConversion_Enable1' : Eliminate redundant data type conversion
//  Block '<S276>/DataTypeConversion_Enable3' : Eliminate redundant data type conversion
//  Block '<S276>/DataTypeConversion_Q' : Eliminate redundant data type conversion
//  Block '<S276>/DataTypeConversion_R1' : Eliminate redundant data type conversion
//  Block '<S276>/DataTypeConversion_R2' : Eliminate redundant data type conversion
//  Block '<S276>/DataTypeConversion_R3' : Eliminate redundant data type conversion
//  Block '<S276>/DataTypeConversion_uMeas1' : Eliminate redundant data type conversion
//  Block '<S276>/DataTypeConversion_uMeas2' : Eliminate redundant data type conversion
//  Block '<S276>/DataTypeConversion_uMeas3' : Eliminate redundant data type conversion
//  Block '<S276>/DataTypeConversion_y1' : Eliminate redundant data type conversion
//  Block '<S276>/DataTypeConversion_y2' : Eliminate redundant data type conversion
//  Block '<S276>/DataTypeConversion_y3' : Eliminate redundant data type conversion
//  Block '<S277>/Zero-Order Hold' : Eliminated since input and output rates are identical
//  Block '<S201>/Zero-Order Hold1' : Eliminated since input and output rates are identical
//  Block '<S203>/Reshape' : Reshape block reduction


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
//  '<S3>'   : 'proc_control/Ros Command'
//  '<S4>'   : 'proc_control/Sensors Input'
//  '<S5>'   : 'proc_control/SimulationActive'
//  '<S6>'   : 'proc_control/Subsystem Controller'
//  '<S7>'   : 'proc_control/Subsystem ProcNav'
//  '<S8>'   : 'proc_control/Subsystem Trajectory'
//  '<S9>'   : 'proc_control/Enabled Subsystem/Send Sensor On'
//  '<S10>'  : 'proc_control/Enabled Subsystem/Send auv states'
//  '<S11>'  : 'proc_control/Enabled Subsystem/Send Sensor On/Blank Message'
//  '<S12>'  : 'proc_control/Enabled Subsystem/Send Sensor On/proc_control sensor_on'
//  '<S13>'  : 'proc_control/Enabled Subsystem/Send auv states/Blank Message'
//  '<S14>'  : 'proc_control/Enabled Subsystem/Send auv states/Header Assignment'
//  '<S15>'  : 'proc_control/Enabled Subsystem/Send auv states/bus2mux'
//  '<S16>'  : 'proc_control/Enabled Subsystem/Send auv states/proc_nav auv_states'
//  '<S17>'  : 'proc_control/Enabled Subsystem1/Blank Message'
//  '<S18>'  : 'proc_control/Enabled Subsystem1/Blank Message1'
//  '<S19>'  : 'proc_control/Enabled Subsystem1/Subsystem'
//  '<S20>'  : 'proc_control/Enabled Subsystem1/provider_thruster thruster_pwm'
//  '<S21>'  : 'proc_control/Enabled Subsystem1/telemetry thruster_newton'
//  '<S22>'  : 'proc_control/Enabled Subsystem1/Subsystem/Blank Message'
//  '<S23>'  : 'proc_control/Enabled Subsystem1/Subsystem/proc_control controller_info'
//  '<S24>'  : 'proc_control/Ros Command/Get_ROS_param'
//  '<S25>'  : 'proc_control/Ros Command/Ros Command Manager'
//  '<S26>'  : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters'
//  '<S27>'  : 'proc_control/Ros Command/Get_ROS_param/Physics Constants'
//  '<S28>'  : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains'
//  '<S29>'  : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters/targetReached Params'
//  '<S30>'  : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Default'
//  '<S31>'  : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 10'
//  '<S32>'  : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 11'
//  '<S33>'  : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 19'
//  '<S34>'  : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains No DVL'
//  '<S35>'  : 'proc_control/Ros Command/Get_ROS_param/Physics Constants/MATLAB Function'
//  '<S36>'  : 'proc_control/Ros Command/Ros Command Manager/proc_control reset_trajectory'
//  '<S37>'  : 'proc_control/Ros Command/Ros Command Manager/proc_control set_mode'
//  '<S38>'  : 'proc_control/Ros Command/Ros Command Manager/proc_nav reset_pos'
//  '<S39>'  : 'proc_control/Ros Command/Ros Command Manager/proc_simulation start_simulation'
//  '<S40>'  : 'proc_control/Ros Command/Ros Command Manager/provider_rs485 kill_status'
//  '<S41>'  : 'proc_control/Ros Command/Ros Command Manager/telemetry dryrun'
//  '<S42>'  : 'proc_control/Ros Command/Ros Command Manager/proc_control reset_trajectory/Enabled Subsystem'
//  '<S43>'  : 'proc_control/Ros Command/Ros Command Manager/proc_control set_mode/Enabled Subsystem'
//  '<S44>'  : 'proc_control/Ros Command/Ros Command Manager/proc_nav reset_pos/Enabled Subsystem'
//  '<S45>'  : 'proc_control/Ros Command/Ros Command Manager/proc_simulation start_simulation/Enabled Subsystem'
//  '<S46>'  : 'proc_control/Ros Command/Ros Command Manager/provider_rs485 kill_status/Enabled Subsystem'
//  '<S47>'  : 'proc_control/Ros Command/Ros Command Manager/telemetry dryrun/Enabled Subsystem'
//  '<S48>'  : 'proc_control/Sensors Input/AUV'
//  '<S49>'  : 'proc_control/Sensors Input/Enabled Subsystem1'
//  '<S50>'  : 'proc_control/Sensors Input/Simulation'
//  '<S51>'  : 'proc_control/Sensors Input/AUV/provider_depth depth'
//  '<S52>'  : 'proc_control/Sensors Input/AUV/provider_dvl dvl_velocity'
//  '<S53>'  : 'proc_control/Sensors Input/AUV/provider_imu imu_info'
//  '<S54>'  : 'proc_control/Sensors Input/AUV/provider_imu imu_info1'
//  '<S55>'  : 'proc_control/Sensors Input/AUV/provider_imu imu_info2'
//  '<S56>'  : 'proc_control/Sensors Input/AUV/provider_depth depth/Enabled Subsystem'
//  '<S57>'  : 'proc_control/Sensors Input/AUV/provider_dvl dvl_velocity/Enabled Subsystem'
//  '<S58>'  : 'proc_control/Sensors Input/AUV/provider_imu imu_info/Enabled Subsystem'
//  '<S59>'  : 'proc_control/Sensors Input/AUV/provider_imu imu_info1/Enabled Subsystem'
//  '<S60>'  : 'proc_control/Sensors Input/AUV/provider_imu imu_info2/Enabled Subsystem'
//  '<S61>'  : 'proc_control/Sensors Input/Enabled Subsystem1/Blank Message'
//  '<S62>'  : 'proc_control/Sensors Input/Enabled Subsystem1/Blank Message1'
//  '<S63>'  : 'proc_control/Sensors Input/Enabled Subsystem1/Blank Message2'
//  '<S64>'  : 'proc_control/Sensors Input/Enabled Subsystem1/Blank Message3'
//  '<S65>'  : 'proc_control/Sensors Input/Enabled Subsystem1/Blank Message4'
//  '<S66>'  : 'proc_control/Sensors Input/Enabled Subsystem1/MATLAB Function'
//  '<S67>'  : 'proc_control/Sensors Input/Enabled Subsystem1/MinMax Running Resettable'
//  '<S68>'  : 'proc_control/Sensors Input/Enabled Subsystem1/MinMax Running Resettable1'
//  '<S69>'  : 'proc_control/Sensors Input/Enabled Subsystem1/MinMax Running Resettable2'
//  '<S70>'  : 'proc_control/Sensors Input/Enabled Subsystem1/MinMax Running Resettable3'
//  '<S71>'  : 'proc_control/Sensors Input/Enabled Subsystem1/Publish'
//  '<S72>'  : 'proc_control/Sensors Input/Enabled Subsystem1/Publish1'
//  '<S73>'  : 'proc_control/Sensors Input/Enabled Subsystem1/Publish2'
//  '<S74>'  : 'proc_control/Sensors Input/Enabled Subsystem1/Publish3'
//  '<S75>'  : 'proc_control/Sensors Input/Enabled Subsystem1/Publish4'
//  '<S76>'  : 'proc_control/Sensors Input/Enabled Subsystem1/MinMax Running Resettable/Subsystem'
//  '<S77>'  : 'proc_control/Sensors Input/Enabled Subsystem1/MinMax Running Resettable1/Subsystem'
//  '<S78>'  : 'proc_control/Sensors Input/Enabled Subsystem1/MinMax Running Resettable2/Subsystem'
//  '<S79>'  : 'proc_control/Sensors Input/Enabled Subsystem1/MinMax Running Resettable3/Subsystem'
//  '<S80>'  : 'proc_control/Sensors Input/Simulation/Blank Message'
//  '<S81>'  : 'proc_control/Sensors Input/Simulation/Publish'
//  '<S82>'  : 'proc_control/Sensors Input/Simulation/proc_simulation depth'
//  '<S83>'  : 'proc_control/Sensors Input/Simulation/proc_simulation dvl_velocity'
//  '<S84>'  : 'proc_control/Sensors Input/Simulation/proc_simulation imu_info'
//  '<S85>'  : 'proc_control/Sensors Input/Simulation/provider_imu imu_info1'
//  '<S86>'  : 'proc_control/Sensors Input/Simulation/proc_simulation depth/Enabled Subsystem'
//  '<S87>'  : 'proc_control/Sensors Input/Simulation/proc_simulation dvl_velocity/Enabled Subsystem'
//  '<S88>'  : 'proc_control/Sensors Input/Simulation/proc_simulation imu_info/Enabled Subsystem'
//  '<S89>'  : 'proc_control/Sensors Input/Simulation/provider_imu imu_info1/Enabled Subsystem'
//  '<S90>'  : 'proc_control/Subsystem Controller/Controller List'
//  '<S91>'  : 'proc_control/Subsystem Controller/If Action Subsystem'
//  '<S92>'  : 'proc_control/Subsystem Controller/Post Traitement'
//  '<S93>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem'
//  '<S94>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1'
//  '<S95>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem2'
//  '<S96>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem3'
//  '<S97>'  : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)'
//  '<S98>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller'
//  '<S99>'  : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Bus2Mux'
//  '<S100>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals'
//  '<S101>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC'
//  '<S102>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S103>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S104>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S105>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S106>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S107>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S108>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S109>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S110>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S111>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S112>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S113>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check'
//  '<S114>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S115>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S116>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S117>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S118>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S119>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S120>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S121>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S122>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S123>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S124>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S125>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Vector Signal Check'
//  '<S126>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S127>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S128>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/moorx'
//  '<S129>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/optimizer'
//  '<S130>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/optimizer/VariableHorizonOptimizer'
//  '<S131>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals/Blank Message'
//  '<S132>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals/Header Assignment'
//  '<S133>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals/Publish'
//  '<S134>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller'
//  '<S135>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Bus2Mux'
//  '<S136>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/MATLAB Function'
//  '<S137>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC'
//  '<S138>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S139>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S140>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S141>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S142>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S143>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S144>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S145>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S146>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S147>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S148>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S149>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check'
//  '<S150>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S151>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S152>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S153>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S154>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S155>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S156>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S157>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S158>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S159>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S160>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S161>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Vector Signal Check'
//  '<S162>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S163>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S164>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/moorx'
//  '<S165>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/optimizer'
//  '<S166>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/optimizer/FixedHorizonOptimizer'
//  '<S167>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem2/Discrete Derivative'
//  '<S168>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Bus2Mux1'
//  '<S169>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller'
//  '<S170>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC'
//  '<S171>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/xmvs_router'
//  '<S172>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check'
//  '<S173>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S174>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check10'
//  '<S175>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check11'
//  '<S176>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check12'
//  '<S177>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check13'
//  '<S178>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check14'
//  '<S179>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check15'
//  '<S180>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check16'
//  '<S181>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S182>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S183>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S184>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S185>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S186>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S187>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check9'
//  '<S188>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S189>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S190>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S191>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check11'
//  '<S192>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/NLMPC'
//  '<S193>' : 'proc_control/Subsystem Controller/If Action Subsystem/Subscribe'
//  '<S194>' : 'proc_control/Subsystem Controller/If Action Subsystem/Subscribe1'
//  '<S195>' : 'proc_control/Subsystem Controller/If Action Subsystem/Subscribe/Enabled Subsystem'
//  '<S196>' : 'proc_control/Subsystem Controller/If Action Subsystem/Subscribe1/Enabled Subsystem'
//  '<S197>' : 'proc_control/Subsystem Controller/Post Traitement/PSU Safe'
//  '<S198>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments'
//  '<S199>' : 'proc_control/Subsystem ProcNav/DVL Measurements'
//  '<S200>' : 'proc_control/Subsystem ProcNav/Depth Measurements'
//  '<S201>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem'
//  '<S202>' : 'proc_control/Subsystem ProcNav/Reset Logic'
//  '<S203>' : 'proc_control/Subsystem ProcNav/State function arguments'
//  '<S204>' : 'proc_control/Subsystem ProcNav/mux2Bus'
//  '<S205>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity'
//  '<S206>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/MATLAB Function'
//  '<S207>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/MATLAB Function1'
//  '<S208>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Conjugate'
//  '<S209>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Conjugate1'
//  '<S210>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse'
//  '<S211>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse1'
//  '<S212>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode'
//  '<S213>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Cross Product'
//  '<S214>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Cross Product1'
//  '<S215>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Cross Product2'
//  '<S216>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Discrete Derivative'
//  '<S217>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/MATLAB Function3'
//  '<S218>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/MATLAB Function4'
//  '<S219>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/MATLAB Function6'
//  '<S220>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation'
//  '<S221>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation1'
//  '<S222>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation2'
//  '<S223>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem'
//  '<S224>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem1'
//  '<S225>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation/Quaternion Normalize'
//  '<S226>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation/V1'
//  '<S227>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation/V2'
//  '<S228>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation/V3'
//  '<S229>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S230>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S231>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation1/Quaternion Normalize'
//  '<S232>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation1/V1'
//  '<S233>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation1/V2'
//  '<S234>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation1/V3'
//  '<S235>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S236>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S237>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation2/Quaternion Normalize'
//  '<S238>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation2/V1'
//  '<S239>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation2/V2'
//  '<S240>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation2/V3'
//  '<S241>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus'
//  '<S242>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S243>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem1/Quaternion Inverse'
//  '<S244>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem1/Quaternion Rotation'
//  '<S245>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem1/Quaternion Inverse/Quaternion Conjugate'
//  '<S246>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem1/Quaternion Inverse/Quaternion Norm'
//  '<S247>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem1/Quaternion Rotation/Quaternion Normalize'
//  '<S248>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem1/Quaternion Rotation/V1'
//  '<S249>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem1/Quaternion Rotation/V2'
//  '<S250>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem1/Quaternion Rotation/V3'
//  '<S251>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S252>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Acceleration to velocity/Normal mode/Subsystem1/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S253>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Conjugate'
//  '<S254>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Norm'
//  '<S255>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse1/Quaternion Conjugate'
//  '<S256>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse1/Quaternion Norm'
//  '<S257>' : 'proc_control/Subsystem ProcNav/DVL Measurements/DVL2Ship'
//  '<S258>' : 'proc_control/Subsystem ProcNav/DVL Measurements/MATLAB Function'
//  '<S259>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation'
//  '<S260>' : 'proc_control/Subsystem ProcNav/DVL Measurements/DVL2Ship/Enabled Subsystem'
//  '<S261>' : 'proc_control/Subsystem ProcNav/DVL Measurements/DVL2Ship/Enabled Subsystem/Rotation Angles to Quaternions'
//  '<S262>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/Quaternion Normalize'
//  '<S263>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/V1'
//  '<S264>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/V2'
//  '<S265>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/V3'
//  '<S266>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S267>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S268>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Discrete Derivative'
//  '<S269>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation'
//  '<S270>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/Quaternion Normalize'
//  '<S271>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/V1'
//  '<S272>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/V2'
//  '<S273>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/V3'
//  '<S274>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S275>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S276>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter'
//  '<S277>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Subsystem'
//  '<S278>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Correct1'
//  '<S279>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Correct2'
//  '<S280>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Correct3'
//  '<S281>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Output'
//  '<S282>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Predict'
//  '<S283>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Output/MATLAB Function'
//  '<S284>' : 'proc_control/Subsystem ProcNav/mux2Bus/Quaternion Inverse'
//  '<S285>' : 'proc_control/Subsystem ProcNav/mux2Bus/Quaternion Inverse/Quaternion Conjugate'
//  '<S286>' : 'proc_control/Subsystem ProcNav/mux2Bus/Quaternion Inverse/Quaternion Norm'
//  '<S287>' : 'proc_control/Subsystem Trajectory/IDLE'
//  '<S288>' : 'proc_control/Subsystem Trajectory/ProcPlanner Trajectory'
//  '<S289>' : 'proc_control/Subsystem Trajectory/Send Current Target'
//  '<S290>' : 'proc_control/Subsystem Trajectory/SpaceNav'
//  '<S291>' : 'proc_control/Subsystem Trajectory/Subsystem'
//  '<S292>' : 'proc_control/Subsystem Trajectory/Subsystem1'
//  '<S293>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only'
//  '<S294>' : 'proc_control/Subsystem Trajectory/IDLE/MATLAB Function'
//  '<S295>' : 'proc_control/Subsystem Trajectory/ProcPlanner Trajectory/Detect Rise Positive'
//  '<S296>' : 'proc_control/Subsystem Trajectory/ProcPlanner Trajectory/Detect Rise Positive/Positive'
//  '<S297>' : 'proc_control/Subsystem Trajectory/Send Current Target/Blank Message'
//  '<S298>' : 'proc_control/Subsystem Trajectory/Send Current Target/Publish'
//  '<S299>' : 'proc_control/Subsystem Trajectory/SpaceNav/MATLAB Function'
//  '<S300>' : 'proc_control/Subsystem Trajectory/Subsystem/Subscribe'
//  '<S301>' : 'proc_control/Subsystem Trajectory/Subsystem/Subscribe/Enabled Subsystem'
//  '<S302>' : 'proc_control/Subsystem Trajectory/Subsystem1/Subscribe'
//  '<S303>' : 'proc_control/Subsystem Trajectory/Subsystem1/Subscribe/Enabled Subsystem'
//  '<S304>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Enabled Subsystem'
//  '<S305>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Pre-traitement'
//  '<S306>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Resettable Subsystem'
//  '<S307>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Subscribe'
//  '<S308>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Subsystem'
//  '<S309>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Resettable Subsystem/Subsystem'
//  '<S310>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Subscribe/Enabled Subsystem'

#endif                                 // proc_control_h_

//
// File trailer for generated code.
//
// [EOF]
//
