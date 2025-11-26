//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: proc_control.h
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.268
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Wed Nov 26 14:32:29 2025
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
  // Block signals for system '<S16>/Current Time'
  struct B_CurrentTime_proc_control_T {
    SL_Bus_builtin_interfaces_Time CurrentTime;// '<S16>/Current Time'
  };

  // Block states (default storage) for system '<S16>/Current Time'
  struct DW_CurrentTime_proc_control_T {
    ros_slros2_internal_block_Cur_T obj;// '<S16>/Current Time'
    boolean_T objisempty;              // '<S16>/Current Time'
  };

  // Block signals (default storage)
  struct B_proc_control_T {
    coder::array<uint16_T,1> b_Mrows;
    std::string Switch1_j;             // '<S89>/Switch1'
    std::string Switch1;               // '<S184>/Switch1'
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
    SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint In1;// '<S333>/In1'
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
    real_T A[1859];                    // '<S146>/MATLAB Function'
    real_T C[1859];                    // '<S146>/MATLAB Function'
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
    real_T B[1144];                    // '<S146>/MATLAB Function'
    real_T varargin_1_data_f[1040];
    real_T Su1_data_a[1040];
    real_T b_SuJm[1040];
    real_T b_Su1[1040];
    real_T WySuJm[1040];
    real_T Jmv_j[1040];
    real_T ct_jz[1016];
    real_T ct_o4[1016];
    real_T ct_n[1016];
    real_T b_tmp[986];
    int8_T b_data_i[6561];
    real_T ct_oy[812];
    real_T ct_nv[812];
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
    real_T in4_c[445];
    real_T b_A_p[441];
    real_T AA_p[441];
    real_T Mlimfull0[436];
    real_T Vfull0[436];
    real_T in3[435];
    real_T in3_a[433];
    SL_Bus_std_msgs_Float64MultiArray In1_p;// '<S248>/In1'
    SL_Bus_std_msgs_Float64MultiArray rtb_SourceBlock_o2_k_e;
    SL_Bus_sonia_common_ros2_MpcInfo BusAssignment;// '<S21>/Bus Assignment'
    real_T dv1[400];
    real_T b_D[390];
    SL_Bus_sonia_common_ros2_MpcGains In1_j;// '<S247>/In1'
    SL_Bus_sonia_common_ros2_MpcGains rtb_SourceBlock_o2_h_a;
    real_T a__1_a[338];
    real_T y_i[338];
    SL_Bus_std_msgs_Int16MultiArray BusAssignment_a;// '<S32>/Bus Assignment'
    real_T B_data_l[320];
    real_T b_Bu[320];
    real_T a__1_o[286];
    real_T y_o[286];
    real_T Nk[273];
    real_T b_C_i[273];
    real_T CA[273];
    real_T CA_f[273];
    real_T b_C_iz[273];
    real_T Cineq_data[260];
    real_T b_data_f[260];
    real_T varargin_1_data_g[260];
    real_T b_c[260];
    real_T a__3_data[260];
    real_T varargin_1_data_c[260];
    real_T b_c_o[260];
    real_T Je_data[260];
    sumhYdZsdukPgvAXm7nzHOD_proc__T expl_temp;
    real_T a__1_l[234];
    real_T y_m[234];
    real_T Bv_m[231];
    real_T b_Mlim_c[226];
    real_T Bc_f[226];
    real_T a__1_p[226];
    real_T cTol_e[226];
    real_T a__1_o4[208];
    real_T y_h[208];
    real_T a__1_l5[198];
    real_T K[198];
    real_T a__1_h[195];
    real_T y_me[195];
    real_T A_m[169];
    real_T y_h3[169];
    real_T dv2[169];
    real_T Ac[169];
    real_T Ac_c[169];
    real_T A2[169];
    real_T A4[169];
    real_T A6[169];
    real_T T[169];
    real_T A4_k[169];
    real_T dv3[169];
    real_T a_p[169];
    real_T cBuffer[169];
    real_T aBuffer[169];
    real_T cBuffer_p[169];
    real_T cBuffer_p4[169];
    real_T A2_a[169];
    real_T A4_j[169];
    real_T A6_e[169];
    real_T T_o[169];
    real_T A4_b[169];
    real_T dv4[169];
    real_T b_a[169];
    real_T cBuffer_a[169];
    real_T aBuffer_g[169];
    real_T cBuffer_e[169];
    real_T cBuffer_f[169];
    real_T Ak[169];
    real_T Ak1[169];
    real_T V[169];
    real_T A6_h[169];
    real_T V_e[169];
    real_T A6_c[169];
    real_T b_Kx[168];
    int16_T s_data[580];
    real_T Dv_a[143];
    real_T Y[143];                     // '<S146>/MATLAB Function'
    real_T X[143];                     // '<S146>/MATLAB Function'
    real_T DX[143];                    // '<S146>/MATLAB Function'
    real_T CA_data[143];
    real_T X_d[143];
    real_T b_X[143];
    real_T X_a[143];
    real_T X_p[143];
    real_T X_m[143];
    real_T b_X_o[143];
    real_T b_X_n[143];
    real_T b_X_l[143];
    real_T z[139];
    real_T rtb_Selector_m_p[139];
    real_T dv5[139];
    real_T b_x[139];
    int32_T ineqRange_data[260];
    real_T rseq_p[130];
    real_T Ceq[130];
    real_T c[130];
    real_T b_x_f[130];
    real_T gfX[130];
    real_T z_i[130];
    real_T VectorConcatenate[128];     // '<S21>/Vector Concatenate'
    real_T VectorConcatenate1[128];    // '<S21>/Vector Concatenate1'
    real_T VectorConcatenate2[128];    // '<S21>/Vector Concatenate2'
    real_T VectorConcatenate3[128];    // '<S21>/Vector Concatenate3'
    SL_Bus_nav_msgs_Odometry BusAssignment_g;// '<S12>/Bus Assignment'
    SL_Bus_nav_msgs_Odometry BusAssignment_k;// '<S152>/Bus Assignment'
    real_T K_o[117];
    real_T C_k[117];
    real_T Selector_m[117];            // '<S223>/Selector'
    int32_T iC_i[226];
    real_T dv6[104];
    real_T rtb_B_o[104];
    real_T Sum_m[104];
    real_T Bc_c[104];
    real_T b_Su1_f[104];
    real_T w_data[100];
    physicsConstants BusCreator;       // '<S96>/Bus Creator'
    real_T DataTypeConversion_uState[95];// '<S304>/DataTypeConversion_uState'
    real_T a__1_hc[90];
    real_T K_m[90];
    real_T U[88];                      // '<S146>/MATLAB Function'
    real_T U_a[88];
    real_T b_U[88];
    real_T U_k[88];
    real_T b_Kv[88];
    real_T U_p[88];
    real_T U_b[88];
    real_T b_U_c[88];
    real_T Umv[88];
    real_T b_U_n[88];
    real_T b_U_i[88];
    real_T Sy[81];
    real_T R[81];
    real_T zopt_data[81];
    real_T f_data[81];
    real_T L[81];
    real_T b_D_m[81];
    real_T b_H[81];
    real_T U_j[81];
    real_T RLinv[81];
    real_T TL[81];
    real_T R_e[81];
    real_T b_A_m[81];
    real_T r_data[81];
    real_T AcRow_data[81];
    real_T z_data[81];
    real_T tau_data[81];
    real_T b_Ac_data[81];
    real_T work_data_m[81];
    real_T tmp_data_jg[81];
    real_T work_data_f[81];
    real_T in1_data_a[81];
    int16_T ii_data[320];
    real_T b_utarget[80];
    real_T dv7[80];
    real_T utargetseq_data[80];
    real_T a_g[80];
    real_T gfU[80];
    real_T y_n[80];
    real_T y_data_d3[80];
    real_T y_data_na[80];
    boolean_T isMrows_data[580];
    real_T Selector1_h[72];            // '<S223>/Selector1'
    int16_T tmp_data_pm[260];
    int16_T tmp_data_p2[260];
    real_T b_dHdx[65];
    real_T K_c[65];
    real_T C_f[65];
    int32_T tmp_data_nj[130];
    real_T dv8[64];
    real_T dv9[64];
    real_T y_tmp[64];
    real_T b_B_k[64];
    real_T b_Su1_n[64];
    real_T b_I1[64];
    SL_Bus_sensor_msgs_Imu In1_pp;     // '<S130>/In1'
    SL_Bus_sensor_msgs_Imu In1_e;      // '<S127>/In1'
    SL_Bus_sensor_msgs_Imu In1_g;      // '<S139>/In1'
    SL_Bus_sensor_msgs_Imu rtb_SourceBlock_o2_n_o;
    SL_Bus_sensor_msgs_Imu BusAssignment_i;// '<S82>/Bus Assignment'
    boolean_T isMrows0[436];
    real_T array_g[48];                // '<S96>/MATLAB Function'
    real_T K_cq[48];
    real_T Tm[48];
    real_T T_c[48];
    real_T Tm_m[48];
    real_T varargin_1[48];
    real_T constValues[41];
    boolean_T x[320];
    real_T b_dHdx_j[39];
    real_T K_k[39];
    real_T C_m[39];
    real_T C_p[39];
    real_T modCoeffs[36];
    real_T dv10[36];
    real_T constValues_d[36];
    real_T dv11[36];
    real_T b_this_g[36];
    real_T Ac_c3[36];
    real_T inputs[36];
    real_T modCoeffs_c[36];
    real_T c_A[36];
    real_T c_A_i[36];
    real_T c_A_d[36];
    real_T b_A_g[36];
    real_T c_A_l[36];
    boolean_T icf[260];
    boolean_T icf_f[260];
    int8_T Je[260];
    int16_T VectorConcatenate_g[128];  // '<S32>/Vector Concatenate'
    real_T a__1_d[30];
    real_T K_j[30];
    boolean_T bv[226];
    SL_Bus_sonia_common_ros2_BodyVelocityDVL In1_m;// '<S128>/In1'
    SL_Bus_sonia_common_ros2_BodyVelocityDVL In1_i;// '<S140>/In1'
    SL_Bus_sonia_common_ros2_BodyVelocityDVL BusAssignment_aa;// '<S80>/Bus Assignment' 
    real_T b_dHdx_i[26];
    real_T K_h[26];
    real_T C_n[26];
    real_T C_o[26];
    real_T Sy_c[25];
    real_T R_b[25];
    real_T coefsWithFlatStart[24];
    real_T work[24];
    real_T work_e[24];
    int8_T Ck[169];
    int8_T val[169];
    real_T b_xoff[21];
    real_T rtb_X_e_d[21];
    real_T Transpose_bj[18];           // '<S335>/Transpose'
    real_T Opt[18];
    real_T Rhs[18];
    boolean_T bv1[130];
    boolean_T bv2[130];
    char_T cv[128];
    real_T dv12[16];
    sG8JZ69axY52WWR6RKyApQC_proc__T MeritFunction;
    int32_T icf_tmp[26];
    int32_T icf_tmp_i[26];
    real_T rtb_MATLABSystem_o10_g[13];
    real_T imvec[13];
    real_T z_n[13];
    real_T X_e[13];                    // '<S145>/MATLAB System'
    real_T DataStoreRead[13];
    real_T dv13[13];
    real_T CA_l[13];
    real_T x_dot_kk[13];
    real_T dv14[13];
    real_T w[13];
    real_T ic[13];
    real_T b_Wy[13];
    real_T w_c[13];
    real_T ic_n[13];
    real_T ix[13];
    real_T obj_next_next_next_next_next_ne[13];
    real_T gfX_p[13];
    real_T dv15[13];
    real_T ic_d[13];
    real_T dv16[13];
    real_T dv17[13];
    real_T ic_o[13];
    real_T dv18[13];
    real_T dv19[13];
    real_T work_j[13];
    real_T work_c[13];
    real_T a_h[13];
    real_T b_tau[13];
    real_T work_d[13];
    real_T b_tau_c[13];
    real_T work_p[13];
    real_T b_tau_p[13];
    real_T work_a[13];
    real_T b_tau_o[13];
    real_T work_jw[13];
    real_T b_tau_pi[13];
    real_T work_o[13];
    real_T tamp[13];
    real_T coefMat[12];
    real_T coefMat_l[12];
    real_T newSegmentCoeffs[12];
    real_T e[12];
    real_T tau[12];
    real_T e_k[12];
    real_T tau_j[12];
    real_T vseq_f[11];
    int8_T b[81];
    int32_T i_data[20];
    int32_T ii_data_c[20];
    boolean_T gb_data[80];
    boolean_T gb_data_f[80];
    Vector2DoubleArray_proc__pr35_T obj_lw;
    real_T twpt[9];
    real_T TmpSignalConversionAtMATL_d[9];// '<S323>/Enabled Subsystem'
    real_T d[9];
    real_T zopt[9];
    real_T varargin_1_n[9];
    real_T r_i[9];
    real_T z_l[9];
    real_T tau_i[9];
    real_T work_k[9];
    real_T varargin_1_f[9];
    real_T b_tau_a[9];
    real_T work_d4[9];
    somzaGboVhDG7PNQS6E98jD_proc__T expl_temp_e;
    somzaGboVhDG7PNQS6E98jD_proc__T expl_temp_eh;
    int8_T As[64];
    int8_T Au_tmp[64];
    int8_T Au_tmp_b[64];
    real_T PWNtoN[8];                  // '<S26>/PWN to N'
    real_T mv[8];                      // '<S222>/NLMPC'
    real_T u_e[8];                     // '<S181>/VariableHorizonOptimizer'
    real_T dv20[8];
    real_T dv21[8];
    real_T umax_incr[8];
    real_T umin_incr[8];
    real_T umvk[8];
    real_T duk[8];
    real_T b_Wu[8];
    real_T b_Wdu[8];
    real_T iu[8];
    real_T umvk_a[8];
    real_T duk_i[8];
    real_T gfU_f[8];
    real_T ic_j[8];
    real_T c_o[8];
    real_T runtimedata_MVRateMin[8];
    SL_Bus_sonia_common_ros2_Pose rtb_SourceBlock_o2_ne_f;
    SL_Bus_geometry_msgs_Pose In1_gs;  // '<S117>/In1'
    SL_Bus_geometry_msgs_Pose rtb_SourceBlock_o2_m_o;
    SL_Bus_geometry_msgs_Pose BusAssignment_c;// '<S83>/Bus Assignment'
    SL_Bus_geometry_msgs_Pose BusAssignment_l;
    real_T TmpSignalConversionAtMATLAB[7];
    real_T mp[7];
    real_T y_l[7];
    int32_T iv[13];
    int32_T icf_tmp_g[13];
    int32_T icf_tmp_d[13];
    int32_T icf_tmp_dv[13];
    int32_T icf_tmp_j[13];
    Vector2DoubleArray_proc_co_pr_T obj_n;
    Vector2DoubleArray_proc_co_pr_T obj_li;
    Vector2DoubleArray_proc_co_pr_T obj_d;
    int32_T blockFormat[12];
    int32_T blockFormat_f[12];
    SL_Bus_geometry_msgs_Twist In1_l;  // '<S331>/In1'
    real_T Delay[8];                   // '<S255>/Delay'
    real_T Transpose[48];              // '<S255>/Transpose'
    SL_Bus_geometry_msgs_Twist rtb_SourceBlock_o2_g_j;
    real_T TSamp_e[6];                 // '<S219>/TSamp'
    real_T rtb_TSamp_e_h[6];
    real_T constValues_c[6];
    real_T constValues_n[6];
    real_T dv22[6];
    real_T varargin_1_tmp[6];
    real_T rtb_corr_lin_accel_k[5];
    real_T rtb_corr_lin_accel_a[5];
    real_T b_tau_f[5];
    real_T work_jz[5];
    char_T b_zeroDelimTopic[37];
    char_T b_zeroDelimTopic_k[35];
    char_T b_zeroDelimTopic_b[34];
    char_T b_zeroDelimTopic_h[34];
    char_T b_zeroDelimTopic_e[33];
    char_T b_zeroDelimTopic_j[32];
    real_T n[4];
    real_T rq[4];
    real_T TmpSignalConversionAtSFunct[4];// '<S251>/MATLAB Function'
    real_T qt[4];
    real_T modBreaks[4];
    real_T qRel[4];
    real_T qRel_o[4];
    int32_T iv1[8];
    int32_T gfU_tmp[8];
    int32_T gfU_tmp_c[8];
    int32_T iv2[8];
    int32_T iv3[8];
    int32_T iv4[8];
    int32_T iv5[8];
    quaternion_proc_control_T pnCorrected;
    quaternion_proc_control_T expl_temp_h;
    quaternion_proc_control_T expl_temp_k;
    char_T b_zeroDelimTopic_hw[31];
    char_T b_zeroDelimTopic_i[30];
    char_T b_zeroDelimTopic_p[30];
    char_T b_zeroDelimTopic_f[30];
    char_T b_zeroDelimTopic_ew[29];
    char_T b_zeroDelimTopic_n[29];
    int8_T UnknownIn[29];
    char_T b_zeroDelimTopic_ho[28];
    char_T b_zeroDelimTopic_hp[28];
    char_T b_zeroDelimTopic_fn[28];
    char_T b_zeroDelimTopic_iv[28];
    char_T b_zeroDelimTopic_f4[27];
    char_T b_zeroDelimTopic_c[27];
    boolean_T icf_n[26];
    boolean_T icf_h[26];
    char_T b_zeroDelimTopic_kq[26];
    char_T b_zeroDelimTopic_hz[26];
    Vector2DoubleArray_proc_c_pr3_T obj_n0;
    Vector2DoubleArray_proc_c_pr3_T obj_jm;
    Vector2DoubleArray_proc_c_pr3_T obj_bx;
    Vector2DoubleArray_proc_c_pr3_T obj_o4;
    Vector2DoubleArray_proc_c_pr3_T obj_k3;
    char_T b_zeroDelimTopic_be[24];
    SL_Bus_geometry_msgs_Vector3 In1_k;// '<S59>/In1'
    SL_Bus_geometry_msgs_Vector3 In1_g2;// '<S56>/In1'
    SL_Bus_geometry_msgs_Vector3 rtb_SourceBlock_o2_d_o;
    real_T Gain[3];                    // '<S321>/Gain'
    real_T Sum_nq[3];                  // '<S257>/Sum'
    real_T Sum5[3];                    // '<S29>/Sum5'
    real_T corr_lin_accel[3];          // '<S258>/MATLAB Function1'
    real_T Sum_e[3];                   // '<S258>/Sum'
    real_T Multiply1[3];               // '<S258>/Multiply1'
    real_T sincos_o1[3];               // '<S55>/sincos'
    real_T dv23[3];
    real_T dv24[3];
    real_T dv25[3];
    real_T varargin_1_tmp_m[3];
    real_T target[3];
    real_T b_this_k[3];
    real_T b_tau_j[3];
    real_T work_h[3];
    int32_T ipiv[6];
    int32_T ipiv_f[6];
    char_T b_zeroDelimTopic_d[23];
    char_T b_zeroDelimTopic_l[23];
    char_T b_zeroDelimTopic_kg[23];
    char_T b_zeroDelimTopic_ic[23];
    char_T b_zeroDelimTopic_h5[23];
    char_T b_zeroDelimTopic_m[23];
    char_T b_zeroDelimTopic_g[22];
    char_T b_zeroDelimTopic_lf[21];
    boolean_T corr[20];
    char_T b_zeroDelimTopic_m4[20];
    char_T b_zeroDelimTopic_nt[19];
    sJ4ih70VmKcvCeguWN0mNVF deadline;
    sJ4ih70VmKcvCeguWN0mNVF deadline_g;
    sJ4ih70VmKcvCeguWN0mNVF deadline_d;
    sJ4ih70VmKcvCeguWN0mNVF deadline_m;
    sJ4ih70VmKcvCeguWN0mNVF deadline_f;
    sJ4ih70VmKcvCeguWN0mNVF deadline_gd;
    sJ4ih70VmKcvCeguWN0mNVF deadline_j;
    sJ4ih70VmKcvCeguWN0mNVF deadline_c;
    sJ4ih70VmKcvCeguWN0mNVF deadline_e;
    sJ4ih70VmKcvCeguWN0mNVF deadline_mx;
    sJ4ih70VmKcvCeguWN0mNVF deadline_o;
    sJ4ih70VmKcvCeguWN0mNVF deadline_a;
    sJ4ih70VmKcvCeguWN0mNVF deadline_ji;
    sJ4ih70VmKcvCeguWN0mNVF deadline_ga;
    sJ4ih70VmKcvCeguWN0mNVF deadline_jk;
    sJ4ih70VmKcvCeguWN0mNVF deadline_ee;
    sJ4ih70VmKcvCeguWN0mNVF deadline_jy;
    sJ4ih70VmKcvCeguWN0mNVF deadline_jb;
    sJ4ih70VmKcvCeguWN0mNVF deadline_gi;
    sJ4ih70VmKcvCeguWN0mNVF deadline_om;
    sJ4ih70VmKcvCeguWN0mNVF deadline_h;
    sJ4ih70VmKcvCeguWN0mNVF deadline_c2;
    sJ4ih70VmKcvCeguWN0mNVF deadline_a0;
    sJ4ih70VmKcvCeguWN0mNVF deadline_l;
    sJ4ih70VmKcvCeguWN0mNVF deadline_jc;
    sJ4ih70VmKcvCeguWN0mNVF deadline_i;
    sJ4ih70VmKcvCeguWN0mNVF deadline_mi;
    sJ4ih70VmKcvCeguWN0mNVF deadline_ft;
    sJ4ih70VmKcvCeguWN0mNVF deadline_on;
    char_T b_zeroDelimTopic_iz[16];
    sJ4ih70VmKcvCeguWN0mNVF deadline_e0;
    sJ4ih70VmKcvCeguWN0mNVF deadline_j0;
    SL_Bus_sonia_common_ros2_MotorPwm BusAssignment_p;// '<S2>/Bus Assignment'
    SL_Bus_sonia_common_ros2_MotorPwm BusAssignment1;// '<S2>/Bus Assignment1'
    real_T MatrixConcatenate[2];       // '<S335>/Matrix Concatenate'
    real_T Selector[6];                // '<S335>/Selector'
    real_T Selector1[8];               // '<S335>/Selector1'
    real_T Selector4[7];               // '<S335>/Selector4'
    real_T DataTypeConversion[6];      // '<S334>/Data Type Conversion'
    real_T DataTypeConversion1[2];     // '<S334>/Data Type Conversion1'
    real_T MV[8];                      // '<S104>/MATLAB System5'
    real_T MV_c[8];                    // '<S103>/MATLAB System5'
    real_T OV[13];                     // '<S103>/MATLAB System4'
    real_T MVR[8];                     // '<S103>/MATLAB System3'
    real_T MV_l[8];                    // '<S102>/MATLAB System5'
    real_T OV_l[13];                   // '<S102>/MATLAB System4'
    real_T MVR_c[8];                   // '<S102>/MATLAB System3'
    real_T MV_j[8];                    // '<S101>/MATLAB System5'
    real_T OV_c[13];                   // '<S101>/MATLAB System4'
    real_T MVR_a[8];                   // '<S101>/MATLAB System3'
    real_T MV_p[8];                    // '<S100>/MATLAB System4'
    real_T OV_d[13];                   // '<S100>/MATLAB System3'
    real_T MVR_cn[8];                  // '<S100>/MATLAB System1'
    real_T dv26[2];
    real_T dv27[2];
    real_T dv28[2];
    real_T obj[2];
    real_T b_tau_o4[2];
    real_T work_f[2];
    int16_T NtoRPM[8];                 // '<S32>/N to RPM'
    uint16_T current[8];               // '<S144>/N to A'
    uint16_T pwm[8];                   // '<S144>/n-D Lookup Table1'
    uint8_T rows[13];
    uint8_T rows_h[13];
    int8_T b_ipiv[13];
    int8_T ipiv_o[13];
    boolean_T x_m[13];
    boolean_T x_a[13];
    boolean_T x_h[13];
    boolean_T x_j[13];
    int32_T Jx_size[3];
    int16_T WorkingSet_tmp[5];
    s7RdrPWkr8UPAUyTdDJkLaG_proc__T Flags;
    real_T Probe_o1;                   // '<S255>/Probe'
    real_T DataTypeConversion2;        // '<S334>/Data Type Conversion2'
    real_T zposition;                  // '<S252>/Sum'
    real_T zvelocity;                  // '<S252>/Discrete Transfer Fcn'
    real_T Gain_l;                     // '<S291>/Gain'
    real_T Gain1;                      // '<S291>/Gain1'
    real_T Gain2;                      // '<S291>/Gain2'
    real_T Sum;                        // '<S291>/Sum'
    real_T Gain_o;                     // '<S292>/Gain'
    real_T Gain1_d;                    // '<S292>/Gain1'
    real_T Gain2_l;                    // '<S292>/Gain2'
    real_T Sum_n;                      // '<S292>/Sum'
    real_T Gain_d;                     // '<S293>/Gain'
    real_T Gain1_e;                    // '<S293>/Gain1'
    real_T Gain2_n;                    // '<S293>/Gain2'
    real_T Sum_l;                      // '<S293>/Sum'
    real_T enable;                     // '<S251>/MATLAB Function'
    real_T q0;                         // '<S289>/q0'
    real_T q1;                         // '<S289>/q1'
    real_T q2;                         // '<S289>/q2'
    real_T q3;                         // '<S289>/q3'
    real_T ywt[13];                    // '<S143>/MATLAB System'
    real_T mvwt[8];                    // '<S143>/MATLAB System'
    real_T dmwwt[8];                   // '<S143>/MATLAB System'
    real_T p;                          // '<S143>/MATLAB System'
    real_T m;                          // '<S143>/MATLAB System'
    real_T mvmin[8];                   // '<S143>/MATLAB System'
    real_T mvmax[8];                   // '<S143>/MATLAB System'
    real_T y;                          // '<S121>/MATLAB Function'
    real_T p_h;                        // '<S98>/Data Type Conversion'
    real_T m_a;                        // '<S98>/Data Type Conversion1'
    real_T imu_ZED_acceleration_threshold[3];// '<S97>/MATLAB System3'
    real_T imu_ZED_linear_acceleration_bia[3];// '<S97>/MATLAB System2'
    real_T imu_VN_acceleration_threshold[3];// '<S97>/MATLAB System1'
    real_T imu_VN_linear_acceleration_bias[3];// '<S97>/MATLAB System'
    real_T timeInTol;                  // '<S99>/Time In Tolerance'
    real_T linearTol;                  // '<S99>/Linear Tolerance'
    real_T angularTol;                 // '<S99>/Angular Tolerance'
    real_T tmin;                       // '<S98>/T Min'
    real_T tmax;                       // '<S98>/T Max'
    real_T DiscreteTransferFcn;        // '<S33>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_o;      // '<S34>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_i;      // '<S35>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_e;      // '<S36>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_m;      // '<S37>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_a;      // '<S38>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_j;      // '<S39>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_h;      // '<S40>/Discrete Transfer Fcn'
    real_T Drift[6];                   // '<S27>/Drift'
    real_T Gain2_ld;                   // '<S69>/Gain2'
    real_T Gain_n;                     // '<S69>/Gain'
    real_T Gain1_l;                    // '<S69>/Gain1'
    real_T Gain_f;                     // '<S70>/Gain'
    real_T Gain2_f;                    // '<S70>/Gain2'
    real_T Gain1_h;                    // '<S70>/Gain1'
    real_T Gain_c;                     // '<S71>/Gain'
    real_T Gain1_m;                    // '<S71>/Gain1'
    real_T Gain2_e;                    // '<S71>/Gain2'
    real_T Quaternion_k[4];            // '<S29>/Sum2'
    real_T LinearAcceleration[3];      // '<S29>/Sum6'
    real_T BufferToMakeInportVirtual_Inser[8];
    real_T WorldPosition_f[3];
                         // '<S1>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T qS2W[4];      // '<S1>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T BodyVelocity_b[3];
                         // '<S1>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T AngularRate_m[3];
                         // '<S1>/BusConversion_InsertedFor_Output_at_inport_0'
    real_T d_g;
    real_T scale;
    real_T absxk;
    real_T t;
    real_T sina;
    real_T sinb;
    real_T sinc;
    real_T t32;
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
    real_T t60;
    real_T t13;
    real_T t14;
    real_T t15;
    real_T t16;
    real_T t17;
    real_T t19;
    real_T t20;
    real_T t24;
    real_T t26;
    real_T t27;
    real_T t28;
    real_T t29;
    real_T t52;
    real_T t70;
    real_T Product2_pd;                // '<S74>/Product2'
    real_T Divide3_b;                  // '<S51>/Divide3'
    real_T Product3_e4;                // '<S74>/Product3'
    real_T Divide2_j;                  // '<S51>/Divide2'
    real_T Divide1_e;                  // '<S51>/Divide1'
    real_T Output_o;                   // '<S44>/Output'
    real_T Product3_dy;                // '<S68>/Product3'
    real_T Product_al;                 // '<S68>/Product'
    real_T Product2_al;                // '<S68>/Product2'
    real_T Product1_fr;                // '<S68>/Product1'
    real_T Divide_a;                   // '<S51>/Divide'
    real_T rtb_sincos_o2_idx_1;
    real_T rtb_sincos_o2_idx_0;
    real_T BodyVelocity_idx_2;
    real_T BodyVelocity_idx_1;
    real_T BodyVelocity_idx_0;
    real_T y_i_idx_3;
    real_T rtb_sincos_o1_j;
    real_T rtb_Product2_pd_tmp;
    real_T rtb_Divide_a_tmp;
    real_T rtb_Divide3_b_tmp;
    real_T t36_tmp;
    real_T t37_tmp;
    real_T t27_tmp;
    real_T t70_tmp;
    real_T t24_tmp;
    real_T t32_tmp;
    real_T t29_tmp;
    real_T d_l;
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
    real_T Gain_n_tmp;
    real_T PressureDepth_tmp;
    real_T PressureDepth_tmp_k;
    real_T PressureDepth_tmp_d;
    real_T A_tmp;
    real_T Sx_data_tmp;
    real_T b_p;
    real_T pny1;
    real_T CA_n;
    real_T bkj;
    real_T t5;
    real_T t6;
    real_T t14_j;
    real_T t15_a;
    real_T t16_h;
    real_T t17_i;
    real_T t18;
    real_T t19_d;
    real_T constMec_rg;
    real_T constMec_rg_b;
    real_T constMec_rg_h;
    real_T exptj;
    real_T d6_p;
    real_T eta1;
    real_T A4_n;
    real_T e_j;
    real_T ed2;
    real_T cBuffer_o;
    real_T b_c_b;
    real_T scale_j;
    real_T absxk_e;
    real_T t_i;
    real_T TrialState_lambdasqp;
    real_T phi_alpha;
    real_T fs;
    real_T e_n;
    real_T wtYerr;
    real_T umvk_i;
    real_T duk_p;
    real_T wtYerr_o;
    real_T e_m;
    real_T ic_ot;
    real_T runtimedata_OutputMin;
    real_T normH;
    real_T s;
    real_T b_B_g;
    real_T WuI2Jm_e;
    real_T b_Jm;
    real_T rMin;
    real_T Xnorm0;
    real_T cMin;
    real_T cVal;
    real_T t_iz;
    real_T beta1;
    real_T b_A_gb;
    real_T RLinv_g;
    real_T scale_g;
    real_T absxk_g;
    real_T t_c;
    real_T exptj_k;
    real_T d6_d;
    real_T eta1_k;
    real_T A4_p;
    real_T e_p;
    real_T ed2_m;
    real_T cBuffer_k;
    real_T e_a;
    real_T ic_f;
    real_T runtimedata_OutputMin_c;
    real_T fs_j;
    real_T e_kb;
    real_T wtYerr_h;
    real_T duk_d;
    real_T umvk_j;
    real_T wtYerr_n;
    real_T obj_next_next_next_next_next__j;
    real_T y_lc;
    real_T sina_p;
    real_T sinb_p;
    real_T sinc_l;
    real_T cosa;
    real_T cosb;
    real_T cosc;
    real_T qt_idx_0;
    real_T qt_idx_1;
    real_T qt_idx_2;
    real_T inputs_l;
    real_T inputs_h;
    real_T inputs_c;
    real_T t20_g;
    real_T t22;
    real_T t23;
    real_T t24_e;
    real_T t27_n;
    real_T t28_f;
    real_T t29_n;
    real_T t30;
    real_T t31;
    real_T t32_e;
    real_T t36;
    real_T t37;
    real_T t38;
    real_T t40;
    real_T t41_b;
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
    real_T in4_tmp_n;
    real_T t122_tmp_tmp;
    real_T in4_tmp_f;
    real_T in4_tmp_i4;
    real_T in4_tmp_k;
    real_T in4_tmp_b;
    real_T in4_tmp_d;
    real_T in4_tmp_h;
    real_T in4_tmp_nl;
    real_T t95_tmp_f;
    real_T t96_tmp_a;
    real_T t99_tmp_m;
    real_T t100_tmp_g;
    real_T t103_tmp_n;
    real_T t104_tmp_c;
    real_T t111_tmp_d;
    real_T t114_tmp_k;
    real_T t118_tmp_c;
    real_T t122_tmp_j;
    real_T in4_tmp_m;
    real_T in4_tmp_ie;
    real_T in4_tmp_bj;
    real_T in4_tmp_o;
    real_T in4_tmp_g;
    real_T in4_tmp_e;
    real_T in4_tmp_in;
    real_T in4_tmp_eb;
    real_T in4_tmp_is;
    real_T in4_tmp_m5;
    real_T in4_tmp_dl;
    real_T in4_tmp_j;
    real_T in4_tmp_p;
    real_T in4_tmp_b4;
    real_T in4_tmp_pn;
    real_T in4_tmp_nm;
    real_T in4_tmp_c;
    real_T in4_tmp_nh;
    real_T in4_tmp_da;
    real_T in4_tmp_ih;
    real_T in4_tmp_no;
    real_T in4_tmp_bi;
    real_T in4_tmp_bt;
    real_T in4_tmp_jk;
    real_T in4_tmp_n0;
    real_T in4_tmp_fa;
    real_T in4_tmp_eu;
    real_T in4_tmp_inq;
    real_T in4_tmp_a;
    real_T in4_tmp_fd;
    real_T in4_tmp_ko;
    real_T in4_tmp_cg;
    real_T in4_tmp_j1;
    real_T in4_tmp_l;
    real_T in4_tmp_ai;
    real_T in4_tmp_iy;
    real_T in4_tmp_ok;
    real_T in4_tmp_b4z;
    real_T in4_tmp_an;
    real_T in4_tmp_aq;
    real_T in4_tmp_i0;
    real_T in4_tmp_iz;
    real_T in4_tmp_lg;
    real_T in4_tmp_o5;
    real_T in4_tmp_py;
    real_T in4_tmp_om;
    real_T in4_tmp_cm;
    real_T in4_tmp_oc;
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
    real_T ct_tmp_o;
    real_T t902_tmp;
    real_T ct_tmp_h;
    real_T ct_tmp_i;
    real_T ct_tmp_g;
    real_T ct_tmp_c;
    real_T ct_tmp_ok;
    real_T ct_tmp_g5;
    real_T ct_tmp_o2;
    real_T ct_tmp_gf;
    real_T ct_tmp_a;
    real_T ct_tmp_gy;
    real_T t900_tmp_b;
    real_T t899_tmp_k;
    real_T t898_tmp_c;
    real_T t901_tmp_j;
    real_T t903_tmp_a;
    real_T t902_tmp_d;
    real_T ct_tmp_cx;
    real_T ct_tmp_d;
    real_T ct_tmp_a2;
    real_T ct_tmp_b;
    real_T ct_tmp_tmp;
    real_T ct_tmp_tmp_g;
    real_T ct_tmp_tmp_f;
    real_T ct_tmp_tmp_c;
    real_T ct_tmp_p;
    real_T ct_tmp_at;
    real_T ct_tmp_n;
    real_T ct_tmp_hl;
    real_T ct_tmp_m;
    real_T ct_tmp_f;
    real_T ct_tmp_bw;
    real_T ct_tmp_e;
    real_T ct_tmp_nz;
    real_T ct_tmp_p4;
    real_T ct_tmp_tmp_i;
    real_T ct_tmp_j;
    real_T ct_tmp_l;
    real_T ct_tmp_ce;
    real_T ct_tmp_gr;
    real_T ct_tmp_c5;
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
    real_T t1546_tmp_l;
    real_T t1543_tmp;
    real_T t1543_tmp_e;
    real_T t1542_tmp;
    real_T out1_tmp;
    real_T out1_tmp_d;
    real_T out1_tmp_m;
    real_T out1_tmp_f;
    real_T out1_tmp_n;
    real_T out1_tmp_o;
    real_T out1_tmp_e;
    real_T out1_tmp_mp;
    real_T out1_tmp_c;
    real_T out1_tmp_g;
    real_T out1_tmp_b;
    real_T out1_tmp_p;
    real_T out1_tmp_p2;
    real_T out1_tmp_a;
    real_T out1_tmp_fm;
    real_T out1_tmp_gr;
    real_T out1_tmp_b0;
    real_T out1_tmp_k;
    real_T out1_tmp_k1;
    real_T out1_tmp_bw;
    real_T out1_tmp_i;
    real_T out1_tmp_nj;
    real_T out1_tmp_h;
    real_T out1_tmp_ni;
    real_T out1_tmp_mm;
    real_T out1_tmp_gu;
    real_T out1_tmp_j;
    real_T out1_tmp_f0;
    real_T out1_tmp_ng;
    real_T out1_tmp_gt;
    real_T out1_tmp_d1;
    real_T out1_tmp_cj;
    real_T out1_tmp_my;
    real_T out1_tmp_dk;
    real_T out1_tmp_n4;
    real_T out1_tmp_bwe;
    real_T out1_tmp_p2x;
    real_T out1_tmp_kg;
    real_T out1_tmp_cl;
    real_T out1_tmp_n2;
    real_T out1_tmp_nm;
    real_T out1_tmp_cd;
    real_T out1_tmp_dkf;
    real_T out1_tmp_nq;
    real_T out1_tmp_guh;
    real_T out1_tmp_l;
    real_T out1_tmp_ge;
    real_T out1_tmp_pv;
    real_T out1_tmp_ko;
    real_T out1_tmp_l1;
    real_T out1_tmp_bf;
    real_T out1_tmp_cx;
    real_T out1_tmp_fb;
    real_T out1_tmp_oo;
    real_T out1_tmp_dd;
    real_T out1_tmp_ld;
    real_T out1_tmp_ls;
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
    real_T out1_tmp_it;
    real_T out1_tmp_im;
    real_T out1_tmp_o2;
    real_T out1_tmp_dn;
    real_T out1_tmp_iu;
    real_T out1_tmp_gy;
    real_T out1_tmp_tmp;
    real_T out1_tmp_tmp_c;
    real_T out1_tmp_tmp_e;
    real_T out1_tmp_a5;
    real_T out1_tmp_hq;
    real_T out1_tmp_ef;
    real_T out1_tmp_dw;
    real_T out1_tmp_g5;
    real_T out1_tmp_ev;
    real_T out1_tmp_eq;
    real_T out1_tmp_gm;
    real_T out1_tmp_gk;
    real_T out1_tmp_dz;
    real_T out1_tmp_tmp_n;
    real_T out1_tmp_tmp_p;
    real_T out1_tmp_tmp_b;
    real_T out1_tmp_iw;
    real_T out1_tmp_bi;
    real_T out1_tmp_jv;
    real_T out1_tmp_gz;
    real_T out1_tmp_nl;
    real_T out1_tmp_p4;
    real_T out1_tmp_fbc;
    real_T out1_tmp_fs;
    real_T out1_tmp_aa;
    real_T out1_tmp_g3;
    real_T out1_tmp_ma;
    real_T out1_tmp_tmp_d;
    real_T out1_tmp_tmp_ef;
    real_T out1_tmp_tmp_ey;
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
    real_T out1_tmp_gen;
    real_T out1_tmp_dp;
    real_T out1_tmp_hg;
    real_T out1_tmp_ie;
    real_T out1_tmp_mz;
    real_T out1_tmp_cy;
    real_T out1_tmp_lv;
    real_T out1_tmp_pb;
    real_T out1_tmp_i1;
    real_T out1_tmp_b3;
    real_T out1_tmp_gn;
    real_T out1_tmp_oq;
    real_T out1_tmp_b1;
    real_T out1_tmp_ewq;
    real_T out1_tmp_e1;
    real_T out1_tmp_tmp_l;
    real_T out1_tmp_tmp_cf;
    real_T out1_tmp_e5;
    real_T out1_tmp_dwl;
    real_T out1_tmp_oe;
    real_T out1_tmp_lw;
    real_T out1_tmp_hga;
    real_T out1_tmp_ln;
    real_T out1_tmp_tmp_c5;
    real_T out1_tmp_tmp_cx;
    real_T out1_tmp_tmp_a;
    real_T out1_tmp_i2;
    real_T out1_tmp_lt;
    real_T out1_tmp_iy;
    real_T out1_tmp_az;
    real_T out1_tmp_ix;
    real_T out1_tmp_c3;
    real_T out1_tmp_mb;
    real_T out1_tmp_nn;
    real_T out1_tmp_ch;
    real_T out1_tmp_na;
    real_T out1_tmp_hk;
    real_T out1_tmp_iut;
    real_T out1_tmp_ef2;
    real_T out1_tmp_pc;
    real_T out1_tmp_tmp_k;
    real_T out1_tmp_tmp_i;
    real_T out1_tmp_tmp_nl;
    real_T out1_tmp_ob;
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
    real_T out1_tmp_tmp_j;
    real_T out1_tmp_tmp_eq;
    real_T out1_tmp_tmp_pc;
    real_T out1_tmp_ddg;
    real_T out1_tmp_fmm;
    real_T out1_tmp_n5;
    real_T out1_tmp_o5;
    real_T out1_tmp_du;
    real_T out1_tmp_lm;
    real_T out1_tmp_fu;
    real_T out1_tmp_jf;
    real_T out1_tmp_geq;
    real_T out1_tmp_ltq;
    real_T out1_tmp_kt;
    real_T out1_tmp_px;
    real_T out1_tmp_bu;
    real_T out1_tmp_i3;
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
    real_T out1_tmp_m4;
    real_T out1_tmp_nf;
    real_T out1_tmp_mi;
    real_T out1_tmp_b05;
    real_T out1_tmp_ccz;
    real_T out1_tmp_gw;
    real_T t20_c;
    real_T t22_i;
    real_T t23_k;
    real_T t24_g;
    real_T t27_p;
    real_T t28_fd;
    real_T t29_m;
    real_T t30_m;
    real_T t31_l;
    real_T t32_j;
    real_T t36_m;
    real_T t37_j;
    real_T t38_i;
    real_T t39;
    real_T t41_a;
    real_T t42_h;
    real_T t44_d;
    real_T t49_i;
    real_T t50;
    real_T t52_h;
    real_T t80;
    real_T t81;
    real_T t82;
    real_T t83_d;
    real_T t84_l;
    real_T t85_f;
    real_T t86_l;
    real_T t87_l;
    real_T t88_f;
    real_T t89_g;
    real_T t90_g;
    real_T t91_a;
    real_T t92_d;
    real_T t93_b;
    real_T t94_d;
    real_T t95_f;
    real_T t96_a;
    real_T t97_m;
    real_T t100_i;
    real_T t101;
    real_T t102;
    real_T t103_i;
    real_T t104_k;
    real_T t105_a;
    real_T t108_m;
    real_T t111_c;
    real_T t112;
    real_T t113;
    real_T t115_b;
    real_T t117;
    real_T t119;
    real_T t120_k;
    real_T t80_tmp;
    real_T t81_tmp;
    real_T t82_tmp;
    real_T t83_tmp_l;
    real_T t84_tmp_n;
    real_T t85_tmp_p;
    real_T t92_tmp;
    real_T t93_tmp;
    real_T t80_tmp_tmp;
    real_T t82_tmp_tmp;
    real_T t96_tmp_f;
    real_T t97_tmp;
    real_T t100_tmp_k;
    real_T t101_tmp;
    real_T t108_tmp;
    real_T t111_tmp_e;
    real_T t115_tmp;
    real_T t119_tmp;
    real_T t81_tmp_tmp;
    real_T t84_tmp_tmp_n;
    real_T t83_tmp_tmp_o;
    real_T t85_tmp_tmp_a;
    real_T t96_tmp_tmp_b;
    real_T t97_tmp_tmp;
    real_T t92_tmp_tmp;
    real_T t93_tmp_tmp;
    real_T t111_tmp_tmp_b;
    real_T t108_tmp_tmp;
    real_T t115_tmp_tmp;
    real_T in3_tmp;
    real_T in3_tmp_m;
    real_T in3_tmp_mc;
    real_T t119_tmp_tmp;
    real_T in3_tmp_k;
    real_T in3_tmp_mcj;
    real_T in3_tmp_h;
    real_T in3_tmp_i;
    real_T in3_tmp_c;
    real_T t92_tmp_n;
    real_T t96_tmp_i;
    real_T t100_tmp_o;
    real_T t119_tmp_h;
    real_T in3_tmp_p;
    real_T in3_tmp_g;
    real_T in3_tmp_cy;
    real_T in3_tmp_gn;
    real_T in3_tmp_b;
    real_T in3_tmp_j;
    real_T in3_tmp_ha;
    real_T in3_tmp_d;
    real_T in3_tmp_o;
    real_T in3_tmp_k2;
    real_T in3_tmp_jw;
    real_T in3_tmp_de;
    real_T in3_tmp_f;
    real_T in3_tmp_a;
    real_T in3_tmp_e;
    real_T in3_tmp_n;
    real_T in3_tmp_ob;
    real_T in3_tmp_dk;
    real_T in3_tmp_cu;
    real_T in3_tmp_mw;
    real_T in3_tmp_oc;
    real_T in3_tmp_bc;
    real_T in3_tmp_ml;
    real_T in3_tmp_ii;
    real_T in3_tmp_ih;
    real_T in3_tmp_g5;
    real_T in3_tmp_mu;
    real_T in3_tmp_no;
    real_T in3_tmp_ca;
    real_T in3_tmp_jv;
    real_T in3_tmp_ej;
    real_T in3_tmp_ep;
    real_T in3_tmp_kr;
    real_T in3_tmp_k4;
    real_T in3_tmp_id;
    real_T in3_tmp_eh;
    real_T in3_tmp_l;
    real_T in3_tmp_ld;
    real_T in3_tmp_lc;
    real_T in3_tmp_obs;
    real_T in3_tmp_i5;
    real_T in3_tmp_e2;
    real_T in3_tmp_lo;
    real_T in3_tmp_noc;
    real_T in3_tmp_eu;
    real_T in3_tmp_cuz;
    real_T in3_tmp_ap;
    real_T in3_tmp_ms;
    real_T in3_tmp_ck;
    real_T in3_tmp_fg;
    real_T in3_tmp_mj;
    real_T in3_tmp_k0;
    real_T in3_tmp_bu;
    real_T in3_tmp_hc;
    real_T in3_tmp_hcg;
    real_T in3_tmp_h2;
    real_T in3_tmp_bp;
    real_T in3_tmp_bf;
    real_T in3_tmp_dp;
    real_T t93_tmp_j;
    real_T t97_tmp_d;
    real_T t101_tmp_l;
    real_T t108_tmp_j;
    real_T t111_tmp_b;
    real_T t115_tmp_f;
    real_T t896;
    real_T t897;
    real_T t898_p;
    real_T t899_l;
    real_T t900_l;
    real_T t901_i;
    real_T t897_tmp;
    real_T t896_tmp;
    real_T t898_tmp_o;
    real_T ct_tmp_bv;
    real_T t899_tmp_i;
    real_T t901_tmp_g;
    real_T ct_tmp_po;
    real_T t900_tmp_h;
    real_T ct_tmp_dd;
    real_T ct_tmp_fb;
    real_T ct_tmp_fo;
    real_T ct_tmp_c1;
    real_T ct_tmp_dk;
    real_T ct_tmp_ca;
    real_T ct_tmp_bc;
    real_T ct_tmp_pw;
    real_T ct_tmp_hh;
    real_T ct_tmp_ei;
    real_T t898_tmp_l;
    real_T t897_tmp_h;
    real_T t896_tmp_n;
    real_T t899_tmp_kr;
    real_T t901_tmp_b;
    real_T t900_tmp_o;
    real_T ct_tmp_ni;
    real_T ct_tmp_fi;
    real_T ct_tmp_grk;
    real_T ct_tmp_dm;
    real_T ct_tmp_tmp_d;
    real_T ct_tmp_tmp_e;
    real_T ct_tmp_tmp_ce;
    real_T ct_tmp_tmp_a;
    real_T ct_tmp_hp;
    real_T ct_tmp_er;
    real_T ct_tmp_ne;
    real_T ct_tmp_hg;
    real_T ct_tmp_oc;
    real_T ct_tmp_foh;
    real_T ct_tmp_k;
    real_T ct_tmp_ej;
    real_T ct_tmp_iw;
    real_T ct_tmp_o3;
    real_T ct_tmp_tmp_j;
    real_T ct_tmp_ky;
    real_T ct_tmp_ja;
    real_T ct_tmp_d0;
    real_T ct_tmp_gn;
    real_T ct_tmp_c5m;
    real_T t1162;
    real_T t1163;
    real_T t1164_k;
    real_T t1459;
    real_T t1483;
    real_T t1484;
    real_T t1485;
    real_T t1488_j;
    real_T t1489_h;
    real_T t1490_c;
    real_T t517;
    real_T t552;
    real_T t575;
    real_T ct_tmp_tmp_dh;
    real_T t1456;
    real_T t1457;
    real_T t1458;
    real_T t1479;
    real_T t1499;
    real_T t1527;
    real_T t1533;
    real_T t1533_tmp;
    real_T t1533_tmp_a;
    real_T t1533_tmp_p;
    real_T out1_tmp_fk;
    real_T out1_tmp_h2;
    real_T out1_tmp_j5;
    real_T out1_tmp_nr;
    real_T out1_tmp_o14;
    real_T out1_tmp_on;
    real_T out1_tmp_dv;
    real_T out1_tmp_ac;
    real_T out1_tmp_kw;
    real_T out1_tmp_ct;
    real_T out1_tmp_jy;
    real_T out1_tmp_bh;
    real_T out1_tmp_nc;
    real_T out1_tmp_dm;
    real_T out1_tmp_hf;
    real_T out1_tmp_bfm;
    real_T out1_tmp_py;
    real_T out1_tmp_bp;
    real_T out1_tmp_pxa;
    real_T out1_tmp_nek;
    real_T out1_tmp_j2;
    real_T out1_tmp_bn;
    real_T out1_tmp_ny;
    real_T out1_tmp_bweh;
    real_T out1_tmp_jr;
    real_T out1_tmp_k0;
    real_T out1_tmp_dq;
    real_T out1_tmp_dj;
    real_T out1_tmp_o0;
    real_T out1_tmp_cf;
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
    real_T out1_tmp_ar;
    real_T out1_tmp_kc;
    real_T out1_tmp_fo1;
    real_T out1_tmp_cz;
    real_T out1_tmp_ong;
    real_T out1_tmp_kv;
    real_T out1_tmp_p2d;
    real_T out1_tmp_f4;
    real_T out1_tmp_dx;
    real_T out1_tmp_eb;
    real_T out1_tmp_lf;
    real_T out1_tmp_ez;
    real_T out1_tmp_hv;
    real_T out1_tmp_gg;
    real_T out1_tmp_p5;
    real_T out1_tmp_nli;
    real_T out1_tmp_o2c;
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
    real_T out1_tmp_cg;
    real_T out1_tmp_a5c;
    real_T out1_tmp_fpc;
    real_T out1_tmp_ik;
    real_T out1_tmp_c1;
    real_T out1_tmp_nrj;
    real_T out1_tmp_c2;
    real_T out1_tmp_c4;
    real_T out1_tmp_ikw;
    real_T out1_tmp_tmp_h;
    real_T out1_tmp_tmp_m;
    real_T out1_tmp_tmp_g;
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
    real_T out1_tmp_j1;
    real_T out1_tmp_c30;
    real_T out1_tmp_nw;
    real_T out1_tmp_jfi;
    real_T out1_tmp_ks;
    real_T out1_tmp_os;
    real_T out1_tmp_g2;
    real_T out1_tmp_ksm;
    real_T out1_tmp_j5b;
    real_T out1_tmp_px1;
    real_T out1_tmp_hw;
    real_T out1_tmp_tmp_nw;
    real_T out1_tmp_tmp_bx;
    real_T out1_tmp_tmp_mt;
    real_T out1_tmp_tmp_kv;
    real_T out1_tmp_tmp_b4;
    real_T out1_tmp_l1g;
    real_T out1_tmp_g5i;
    real_T out1_tmp_g23;
    real_T out1_tmp_n4p;
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
    real_T out1_tmp_pd;
    real_T out1_tmp_tmp_ay;
    real_T out1_tmp_tmp_m0;
    real_T out1_tmp_tmp_nk;
    real_T out1_tmp_k5;
    real_T out1_tmp_pd3;
    real_T out1_tmp_kx5;
    real_T out1_tmp_gkm;
    real_T out1_tmp_hqs;
    real_T out1_tmp_lds;
    real_T out1_tmp_o0o;
    real_T out1_tmp_a2;
    real_T out1_tmp_n3;
    real_T out1_tmp_ov;
    real_T out1_tmp_da;
    real_T out1_tmp_hko;
    real_T out1_tmp_h4;
    real_T out1_tmp_a0;
    real_T out1_tmp_kg3;
    real_T out1_tmp_jrp;
    real_T out1_tmp_dg;
    real_T out1_tmp_pe;
    real_T out1_tmp_dh;
    real_T out1_tmp_byy;
    real_T out1_tmp_oa;
    real_T out1_tmp_tmp_j4;
    real_T out1_tmp_tmp_pcj;
    real_T out1_tmp_tmp_lj;
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
    real_T out1_tmp_lvf;
    real_T out1_tmp_if;
    real_T out1_tmp_nk;
    real_T out1_tmp_cfu;
    real_T out1_tmp_i4;
    real_T out1_tmp_d4s;
    real_T out1_tmp_b4;
    real_T out1_tmp_tmp_at;
    real_T out1_tmp_tmp_b5;
    real_T out1_tmp_tmp_nt;
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
    real_T out1_tmp_lv4;
    real_T out1_tmp_o0f;
    real_T out1_tmp_ixa;
    real_T out1_tmp_p4a;
    real_T out1_tmp_nmf;
    real_T out1_tmp_c0;
    real_T out1_tmp_et;
    real_T out1_tmp_jvh;
    real_T out1_tmp_l2;
    real_T out1_tmp_jt;
    real_T out1_tmp_c3v;
    real_T out1_tmp_bd;
    real_T out1_tmp_i0;
    real_T out1_tmp_kzv;
    real_T out1_tmp_lo;
    real_T out1_tmp_j2h;
    real_T out1_tmp_mq;
    real_T out1_tmp_jh;
    real_T out1_tmp_euk;
    real_T out1_tmp_dt4;
    real_T out1_tmp_j4n;
    real_T out1_tmp_k1b;
    real_T out1_tmp_oc;
    real_T out1_tmp_nc4;
    real_T out1_tmp_bz;
    real_T out1_tmp_ihx;
    real_T out1_tmp_dmu;
    real_T out1_tmp_dpj;
    real_T out1_tmp_pai;
    real_T out1_tmp_esz;
    real_T b_C_n;
    real_T t15_d;
    real_T t17_m;
    real_T t19_g;
    real_T t23_i;
    real_T t25;
    real_T t27_k;
    real_T t33_i;
    real_T t34_m;
    real_T t35;
    real_T t37_jm;
    real_T t38_a;
    real_T t39_i;
    real_T t41_e;
    real_T t42_i;
    real_T t43_h;
    real_T t44_m;
    real_T t45_a;
    real_T t47;
    real_T t50_o;
    real_T t57;
    real_T t58;
    real_T t129;
    real_T t130;
    real_T t131;
    real_T t133;
    real_T t134;
    real_T t135;
    real_T in3_tmp_os;
    real_T in3_tmp_nt;
    real_T in3_tmp_k25;
    real_T in3_tmp_hn;
    real_T in3_tmp_d4;
    real_T in3_tmp_ae;
    real_T in3_tmp_hg;
    real_T in3_tmp_cc;
    real_T in3_tmp_bv;
    real_T in3_tmp_tmp;
    real_T in3_tmp_tmp_c;
    real_T in3_tmp_gk;
    real_T in3_tmp_pj;
    real_T in3_tmp_ib;
    real_T in3_tmp_jj;
    real_T in3_tmp_ce;
    real_T in3_tmp_ceq;
    real_T in3_tmp_fe;
    real_T in3_tmp_dy;
    real_T in3_tmp_nr;
    real_T in3_tmp_br;
    real_T in3_tmp_tmp_f;
    real_T in3_tmp_tmp_j;
    real_T in3_tmp_tmp_h;
    real_T in3_tmp_tmp_hg;
    real_T in3_tmp_tmp_c2;
    real_T in3_tmp_tmp_g;
    real_T in3_tmp_tmp_e;
    real_T in3_tmp_tmp_eq;
    real_T in3_tmp_av;
    real_T in3_tmp_hz;
    real_T in3_tmp_gc;
    real_T in3_tmp_ak;
    real_T in3_tmp_gu;
    real_T in3_tmp_oa;
    real_T in3_tmp_akz;
    real_T in3_tmp_e3;
    real_T in3_tmp_haj;
    real_T in3_tmp_jx;
    real_T in3_tmp_bq;
    real_T in3_tmp_kq;
    real_T in3_tmp_hq;
    real_T in3_tmp_dd;
    real_T in3_tmp_oh;
    real_T in3_tmp_ku;
    real_T in3_tmp_tmp_k;
    real_T in3_tmp_tmp_o;
    real_T in3_tmp_tmp_d;
    real_T in3_tmp_tmp_l;
    real_T in3_tmp_tmp_m;
    real_T in3_tmp_tmp_oi;
    real_T in3_tmp_tmp_a;
    real_T in3_tmp_tmp_i;
    real_T in3_tmp_tmp_fi;
    real_T in3_tmp_tmp_as;
    real_T in3_tmp_g1;
    real_T in3_tmp_k1;
    real_T in3_tmp_l3;
    real_T in3_tmp_eu1;
    real_T in3_tmp_eq;
    real_T in3_tmp_tmp_ft;
    real_T in3_tmp_dw;
    real_T in3_tmp_bck;
    real_T in3_tmp_tmp_ol;
    real_T in3_tmp_tmp_p;
    real_T in3_tmp_tmp_tmp;
    real_T in3_tmp_tmp_lf;
    real_T in3_tmp_tmp_do;
    real_T in3_tmp_lt;
    real_T in3_tmp_tmp_ad;
    real_T in3_tmp_tmp_tmp_n;
    real_T in3_tmp_tmp_tmp_e;
    real_T in3_tmp_tmp_n;
    real_T in3_tmp_hh;
    real_T in3_tmp_ah;
    real_T in3_tmp_tmp_tmp_b;
    real_T in3_tmp_tmp_tmp_k;
    real_T in3_tmp_aw;
    real_T in3_tmp_km;
    real_T in3_tmp_pa;
    real_T in3_tmp_o3;
    real_T in3_tmp_c4;
    real_T in3_tmp_kh;
    real_T in3_tmp_hs;
    real_T in3_tmp_bvc;
    real_T in3_tmp_ez;
    real_T in3_tmp_co;
    real_T in3_tmp_om;
    real_T in3_tmp_ar;
    real_T in3_tmp_pe;
    real_T in3_tmp_ok;
    real_T in3_tmp_l2;
    real_T in3_tmp_fr;
    real_T in3_tmp_pn;
    real_T in3_tmp_p5;
    real_T in3_tmp_br5;
    real_T in3_tmp_k0a;
    real_T in3_tmp_me;
    real_T in3_tmp_gko;
    real_T in3_tmp_b5;
    real_T in3_tmp_il;
    real_T in3_tmp_bs;
    real_T in3_tmp_h2b;
    real_T in3_tmp_df;
    real_T in3_tmp_f5;
    real_T in3_tmp_dkn;
    real_T in3_tmp_pp;
    real_T in3_tmp_gs;
    real_T in3_tmp_f3;
    real_T in3_tmp_o2;
    real_T in3_tmp_f4;
    real_T in3_tmp_o32;
    real_T in3_tmp_l0;
    real_T in3_tmp_e3s;
    real_T ct_tmp_gnm;
    real_T ct_tmp_ba;
    real_T ct_tmp_je;
    real_T ct_tmp_fp;
    real_T ct_tmp_co;
    real_T ct_tmp_fof;
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
    real_T ct_tmp_tmp_ez;
    real_T ct_tmp_tmp_m;
    real_T ct_tmp_tmp_h;
    real_T ct_tmp_tmp_b;
    real_T ct_tmp_tmp_dm;
    real_T ct_tmp_oh;
    real_T ct_tmp_kk;
    real_T ct_tmp_mr;
    real_T ct_tmp_fj;
    real_T ct_tmp_ox;
    real_T ct_tmp_it;
    real_T ct_tmp_ka;
    real_T ct_tmp_kg;
    real_T ct_tmp_n1;
    real_T ct_tmp_fq;
    real_T ct_tmp_mz;
    real_T ct_tmp_ia;
    real_T ct_tmp_ii;
    real_T ct_tmp_bl;
    real_T ct_tmp_nt;
    real_T ct_tmp_ir;
    real_T ct_tmp_nj;
    real_T ct_tmp_m0;
    real_T ct_tmp_pp;
    real_T ct_tmp_k1;
    real_T ct_tmp_p3;
    real_T ct_tmp_eq;
    real_T ct_tmp_k2;
    real_T ct_tmp_br;
    real_T ct_tmp_lm;
    real_T ct_tmp_j1;
    real_T ct_tmp_jx;
    real_T ct_tmp_kz;
    real_T ct_tmp_pf;
    real_T ct_tmp_p3r;
    real_T ct_tmp_et;
    real_T ct_tmp_hls;
    real_T ct_tmp_i1;
    real_T ct_tmp_jd;
    real_T ct_tmp_a2r;
    real_T ct_tmp_jh;
    real_T ct_tmp_gc;
    real_T ct_tmp_njm;
    real_T ct_tmp_lmf;
    real_T ct_tmp_eq1;
    real_T ct_tmp_cg;
    real_T ct_tmp_hy;
    real_T ct_tmp_o4;
    real_T ct_tmp_dz;
    real_T ct_tmp_df;
    real_T ct_tmp_j4;
    real_T ct_tmp_f2;
    real_T ct_tmp_k2k;
    real_T ct_tmp_nex;
    real_T ct_tmp_nb;
    real_T ct_tmp_ic;
    real_T ct_tmp_e4;
    real_T ct_tmp_tmp_k;
    real_T ct_tmp_tmp_k3;
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
    real_T ct_tmp_gyn;
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
    real_T ct_tmp_fr;
    real_T ct_tmp_mh;
    real_T ct_tmp_gfu;
    real_T ct_tmp_ccn;
    real_T ct_tmp_kb;
    real_T ct_tmp_dd1;
    real_T ct_tmp_cm;
    real_T ct_tmp_knj;
    real_T ct_tmp_kl;
    real_T ct_tmp_fw;
    real_T ct_tmp_gm;
    real_T ct_tmp_k3;
    real_T ct_tmp_nk;
    real_T ct_tmp_pn;
    real_T ct_tmp_e2;
    real_T ct_tmp_l3;
    real_T ct_tmp_ak;
    real_T ct_tmp_e4t;
    real_T ct_tmp_g4;
    real_T ct_tmp_fp5;
    real_T ct_tmp_eij;
    real_T ct_tmp_nu;
    real_T ct_tmp_mzf;
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
    real_T ct_tmp_ceq;
    real_T ct_tmp_bf;
    real_T ct_tmp_pye;
    real_T ct_tmp_ik;
    real_T ct_tmp_oh1;
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
    real_T t3247_tmp_l;
    real_T Anq_tmp;
    real_T Anq_tmp_tmp;
    real_T Anq_tmp_n;
    real_T Anq_tmp_a;
    real_T Anq_tmp_nd;
    real_T Anq_tmp_d;
    real_T Anq_tmp_g;
    real_T Anq_tmp_f;
    real_T Anq_tmp_tmp_g;
    real_T Jmv_l;
    real_T t2;
    real_T t3;
    real_T t4;
    real_T t5_l;
    real_T t6_o;
    real_T t7;
    real_T t8;
    real_T t9;
    real_T t10;
    real_T t11;
    real_T t12;
    real_T t13_k;
    real_T t17_g;
    real_T t18_k;
    real_T t19_j;
    real_T t20_k;
    real_T t21;
    real_T t22_g;
    real_T t23_h;
    real_T t24_m;
    real_T t25_k;
    real_T t26_c;
    real_T t27_h;
    real_T t28_h;
    real_T t29_d;
    real_T t30_b;
    real_T t31_p;
    real_T t32_c;
    real_T t33_b;
    real_T t34_l;
    real_T t39_o;
    real_T t40_d;
    real_T t41_m;
    real_T t42_n;
    real_T t43_m;
    real_T t44_i;
    real_T t45_o;
    real_T t55_a;
    real_T t56;
    real_T t57_k;
    real_T t58_m;
    real_T t59_g;
    real_T t61_n;
    real_T t62;
    real_T t65;
    real_T t68_i;
    real_T t35_e;
    real_T t36_e;
    real_T t37_b;
    real_T t27_tmp_i;
    real_T t31_tmp;
    real_T t24_tmp_k;
    real_T t32_tmp_d;
    real_T t25_tmp;
    real_T t29_tmp_k;
    real_T t20_a;
    real_T t22_if;
    real_T t23_b;
    real_T t24_e5;
    real_T t27_l;
    real_T t28_i;
    real_T t29_b;
    real_T t30_e;
    real_T t31_b;
    real_T t32_i;
    real_T t36_m1;
    real_T t37_l;
    real_T t38_o;
    real_T t40_n;
    real_T t41_i;
    real_T t43_o;
    real_T t48_m;
    real_T t49_a;
    real_T t51_c;
    real_T t83_dm;
    real_T t84_g;
    real_T t85_h;
    real_T t86_b;
    real_T t87_d;
    real_T t88_c;
    real_T t89_h;
    real_T t90_f;
    real_T t91_n;
    real_T t92_do;
    real_T t93_e;
    real_T t94_e;
    real_T t95_p;
    real_T t96_n;
    real_T t97_f;
    real_T t98_e;
    real_T t99_k;
    real_T t100_f;
    real_T t103_k;
    real_T t104_p;
    real_T t105_h;
    real_T t106_d;
    real_T t107_d;
    real_T t108_d;
    real_T t111_j;
    real_T t114_a;
    real_T t115_a;
    real_T t116_a;
    real_T t118_l;
    real_T t120_i;
    real_T t122_n;
    real_T t123_b;
    real_T t83_tmp_h;
    real_T t84_tmp_b;
    real_T t85_tmp_a;
    real_T t86_tmp_b;
    real_T t87_tmp_l;
    real_T t88_tmp_h;
    real_T t95_tmp_d;
    real_T t96_tmp_g;
    real_T t83_tmp_tmp_j;
    real_T t85_tmp_tmp_m;
    real_T t99_tmp_l;
    real_T t100_tmp_oe;
    real_T t103_tmp_p;
    real_T t104_tmp_d;
    real_T t111_tmp_g;
    real_T t114_tmp_m;
    real_T t118_tmp_o;
    real_T t122_tmp_f;
    real_T t84_tmp_tmp_i;
    real_T t87_tmp_tmp_d;
    real_T t86_tmp_tmp_f;
    real_T t88_tmp_tmp_n;
    real_T t99_tmp_tmp_d;
    real_T t100_tmp_tmp_c;
    real_T t95_tmp_tmp_b;
    real_T t96_tmp_tmp_bm;
    real_T t114_tmp_tmp_h;
    real_T t111_tmp_tmp_g;
    real_T t118_tmp_tmp_c;
    real_T in4_tmp_dw;
    real_T in4_tmp_a1;
    real_T in4_tmp_hs;
    real_T t122_tmp_tmp_c;
    real_T in4_tmp_cf;
    real_T in4_tmp_m1;
    real_T in4_tmp_okg;
    real_T in4_tmp_ep;
    real_T in4_tmp_jq;
    real_T in4_tmp_l3;
    real_T in4_tmp_nz;
    real_T t95_tmp_e;
    real_T t96_tmp_c;
    real_T t99_tmp_j;
    real_T t100_tmp_m;
    real_T t103_tmp_e;
    real_T t104_tmp_h;
    real_T t111_tmp_c;
    real_T t114_tmp_j;
    real_T t118_tmp_a;
    real_T t122_tmp_d;
    real_T in4_tmp_bb;
    real_T in4_tmp_ck;
    real_T in4_tmp_ah;
    real_T in4_tmp_ir;
    real_T in4_tmp_pd;
    real_T in4_tmp_me;
    real_T in4_tmp_b1;
    real_T in4_tmp_e3;
    real_T in4_tmp_fm;
    real_T in4_tmp_mz;
    real_T in4_tmp_ax;
    real_T in4_tmp_ow;
    real_T in4_tmp_l1;
    real_T in4_tmp_pj;
    real_T in4_tmp_dm;
    real_T in4_tmp_b4q;
    real_T in4_tmp_dn;
    real_T in4_tmp_dc;
    real_T in4_tmp_eh;
    real_T in4_tmp_l2;
    real_T in4_tmp_kf;
    real_T in4_tmp_lc;
    real_T in4_tmp_jt;
    real_T in4_tmp_hr;
    real_T in4_tmp_kp;
    real_T in4_tmp_e0;
    real_T in4_tmp_gi;
    real_T in4_tmp_cf3;
    real_T in4_tmp_ob;
    real_T in4_tmp_lw;
    real_T in4_tmp_ej;
    real_T in4_tmp_mea;
    real_T in4_tmp_o1;
    real_T in4_tmp_eh0;
    real_T in4_tmp_mr;
    real_T in4_tmp_jo;
    real_T in4_tmp_hj;
    real_T in4_tmp_na;
    real_T in4_tmp_jc;
    real_T in4_tmp_dx;
    real_T in4_tmp_jx;
    real_T in4_tmp_kq;
    real_T in4_tmp_bk;
    real_T in4_tmp_lt;
    real_T in4_tmp_je;
    real_T in4_tmp_n3;
    real_T in4_tmp_g0;
    real_T rMin_d;
    real_T Xnorm0_o;
    real_T cMin_a;
    real_T cVal_e;
    real_T t_o;
    real_T Linv;
    real_T atmp;
    real_T xnorm;
    real_T scale_i;
    real_T absxk_b;
    real_T t_a;
    real_T c_j;
    real_T d_a;
    real_T s_g;
    real_T d_o;
    real_T s_a;
    real_T ic_c;
    real_T t8_d;
    real_T t9_d;
    real_T t11_l;
    real_T t12_d;
    real_T t13_j;
    real_T t14_k;
    real_T t15_dy;
    real_T t16_c;
    real_T t25_k3;
    real_T t29_p;
    real_T t31_e;
    real_T t50_i;
    real_T t53;
    real_T t54;
    real_T t17_b;
    real_T t18_i;
    real_T t19_h;
    real_T t57_d;
    real_T t64;
    real_T t65_g;
    real_T t68_m;
    real_T t69;
    real_T t70_g;
    real_T t12_tmp;
    real_T t13_tmp;
    real_T t14_tmp;
    real_T t15_tmp;
    real_T out1_tmp_h4o;
    real_T out1_tmp_ao;
    real_T out1_tmp_ee;
    real_T out1_tmp_ir;
    real_T out1_tmp_hl;
    real_T out1_tmp_kq;
    real_T out1_tmp_fd;
    real_T out1_tmp_lvb;
    real_T t1463_o;
    real_T t1464_l;
    real_T t1465_d;
    real_T t1524_a;
    real_T t1546_j;
    real_T t1526_o;
    real_T t1542_e;
    real_T t1546_tmp_m;
    real_T t1546_tmp_d;
    real_T t1543_tmp_c;
    real_T t1543_tmp_i;
    real_T t1542_tmp_k;
    real_T out1_tmp_c5;
    real_T out1_tmp_ftx;
    real_T out1_tmp_jn;
    real_T out1_tmp_iec;
    real_T out1_tmp_c3j;
    real_T out1_tmp_dah;
    real_T out1_tmp_ai;
    real_T out1_tmp_hb;
    real_T out1_tmp_kcr;
    real_T out1_tmp_kuo;
    real_T out1_tmp_n50;
    real_T out1_tmp_j3;
    real_T out1_tmp_bl;
    real_T out1_tmp_es2;
    real_T out1_tmp_mqa;
    real_T out1_tmp_oh;
    real_T out1_tmp_k3;
    real_T out1_tmp_ak;
    real_T out1_tmp_nqh;
    real_T out1_tmp_p1;
    real_T out1_tmp_dqj;
    real_T out1_tmp_a3;
    real_T out1_tmp_eew;
    real_T out1_tmp_mx;
    real_T out1_tmp_fpi;
    real_T out1_tmp_h1;
    real_T out1_tmp_bs;
    real_T out1_tmp_fx;
    real_T out1_tmp_ltw;
    real_T out1_tmp_px2;
    real_T out1_tmp_nt;
    real_T out1_tmp_id;
    real_T out1_tmp_be;
    real_T out1_tmp_ev3;
    real_T out1_tmp_prx;
    real_T out1_tmp_ou;
    real_T out1_tmp_ff;
    real_T out1_tmp_dgn;
    real_T out1_tmp_i5;
    real_T out1_tmp_i40;
    real_T out1_tmp_h4r;
    real_T out1_tmp_fr;
    real_T out1_tmp_hh;
    real_T out1_tmp_l4;
    real_T out1_tmp_gkd;
    real_T out1_tmp_lx;
    real_T out1_tmp_me;
    real_T out1_tmp_n3n;
    real_T out1_tmp_nv;
    real_T out1_tmp_ltqv;
    real_T out1_tmp_po;
    real_T out1_tmp_lng;
    real_T out1_tmp_pg;
    real_T out1_tmp_mrz;
    real_T out1_tmp_ck;
    real_T out1_tmp_azn;
    real_T out1_tmp_g1;
    real_T out1_tmp_cjn;
    real_T out1_tmp_cte;
    real_T out1_tmp_m02;
    real_T out1_tmp_bu0;
    real_T out1_tmp_ek;
    real_T out1_tmp_bj;
    real_T out1_tmp_ia;
    real_T out1_tmp_lmd;
    real_T out1_tmp_dg3;
    real_T out1_tmp_fyv;
    real_T out1_tmp_gv;
    real_T out1_tmp_ldb;
    real_T out1_tmp_om;
    real_T out1_tmp_iwt;
    real_T out1_tmp_d0v;
    real_T out1_tmp_am;
    real_T out1_tmp_obe;
    real_T out1_tmp_tmp_im;
    real_T out1_tmp_tmp_ms;
    real_T out1_tmp_tmp_h2;
    real_T out1_tmp_ls2;
    real_T out1_tmp_ap;
    real_T out1_tmp_nlf;
    real_T out1_tmp_ja;
    real_T out1_tmp_lmn;
    real_T out1_tmp_gs;
    real_T out1_tmp_mx5;
    real_T out1_tmp_dgf;
    real_T out1_tmp_lsn;
    real_T out1_tmp_dk5;
    real_T out1_tmp_tmp_jx;
    real_T out1_tmp_tmp_ju;
    real_T out1_tmp_tmp_f;
    real_T out1_tmp_geqd;
    real_T out1_tmp_net;
    real_T out1_tmp_e1g;
    real_T out1_tmp_d5n;
    real_T out1_tmp_ay;
    real_T out1_tmp_hn;
    real_T out1_tmp_b5;
    real_T out1_tmp_i42;
    real_T out1_tmp_pag;
    real_T out1_tmp_bq;
    real_T out1_tmp_my0;
    real_T out1_tmp_tmp_ge;
    real_T out1_tmp_tmp_kd;
    real_T out1_tmp_tmp_gs;
    real_T out1_tmp_pya;
    real_T out1_tmp_fki;
    real_T out1_tmp_hwp;
    real_T out1_tmp_hhx;
    real_T out1_tmp_bb;
    real_T out1_tmp_nrn;
    real_T out1_tmp_ebo;
    real_T out1_tmp_leu;
    real_T out1_tmp_jl;
    real_T out1_tmp_m4c;
    real_T out1_tmp_iwr;
    real_T out1_tmp_b32;
    real_T out1_tmp_evy;
    real_T out1_tmp_hwv;
    real_T out1_tmp_ngn;
    real_T out1_tmp_go;
    real_T out1_tmp_i33;
    real_T out1_tmp_acn;
    real_T out1_tmp_pc5;
    real_T out1_tmp_mj;
    real_T out1_tmp_kf1;
    real_T out1_tmp_he;
    real_T out1_tmp_bl5;
    real_T out1_tmp_fpd;
    real_T out1_tmp_ba;
    real_T out1_tmp_iel;
    real_T out1_tmp_tmp_jz;
    real_T out1_tmp_tmp_ej;
    real_T out1_tmp_ktz;
    real_T out1_tmp_cmv;
    real_T out1_tmp_foy;
    real_T out1_tmp_ga;
    real_T out1_tmp_hq4;
    real_T out1_tmp_cp;
    real_T out1_tmp_tmp_ld;
    real_T out1_tmp_tmp_jv;
    real_T out1_tmp_tmp_n5;
    real_T out1_tmp_f0n;
    real_T out1_tmp_evl;
    real_T out1_tmp_pmm;
    real_T out1_tmp_aii;
    real_T out1_tmp_buo;
    real_T out1_tmp_gi;
    real_T out1_tmp_fk4;
    real_T out1_tmp_ki;
    real_T out1_tmp_o2ce;
    real_T out1_tmp_gyt;
    real_T out1_tmp_pdj;
    real_T out1_tmp_nfd;
    real_T out1_tmp_dw0;
    real_T out1_tmp_ij;
    real_T out1_tmp_tmp_pu;
    real_T out1_tmp_tmp_efu;
    real_T out1_tmp_tmp_gy;
    real_T out1_tmp_gk3;
    real_T out1_tmp_az0;
    real_T out1_tmp_fjh;
    real_T out1_tmp_g3g;
    real_T out1_tmp_igj;
    real_T out1_tmp_cs;
    real_T out1_tmp_pt;
    real_T out1_tmp_gv1;
    real_T out1_tmp_jj;
    real_T out1_tmp_nrq;
    real_T out1_tmp_nvq;
    real_T out1_tmp_jd;
    real_T out1_tmp_jfb;
    real_T out1_tmp_hz;
    real_T out1_tmp_pwc;
    real_T out1_tmp_pp;
    real_T out1_tmp_lr;
    real_T out1_tmp_doy;
    real_T out1_tmp_hs;
    real_T out1_tmp_bwg;
    real_T out1_tmp_lwm;
    real_T out1_tmp_gym;
    real_T out1_tmp_gkz;
    real_T out1_tmp_gr1;
    real_T out1_tmp_onw;
    real_T out1_tmp_k0k;
    real_T out1_tmp_pbh;
    real_T out1_tmp_pn5m;
    real_T out1_tmp_ewz;
    real_T out1_tmp_ke;
    real_T out1_tmp_tmp_ns;
    real_T out1_tmp_tmp_es;
    real_T out1_tmp_tmp_o;
    real_T out1_tmp_dqt;
    real_T out1_tmp_gj;
    real_T out1_tmp_dly;
    real_T out1_tmp_mah;
    real_T out1_tmp_juz;
    real_T out1_tmp_mpj;
    real_T out1_tmp_d0o;
    real_T out1_tmp_ijo;
    real_T out1_tmp_hqn;
    real_T out1_tmp_ce;
    real_T out1_tmp_fy5;
    real_T out1_tmp_gqt;
    real_T out1_tmp_kkk;
    real_T out1_tmp_cn;
    real_T out1_tmp_cgs;
    real_T out1_tmp_g10;
    real_T out1_tmp_fbh;
    real_T out1_tmp_hek;
    real_T out1_tmp_eec;
    real_T out1_tmp_i20;
    real_T out1_tmp_fe;
    real_T out1_tmp_lu;
    real_T out1_tmp_bk;
    real_T out1_tmp_f0j;
    real_T out1_tmp_ir1;
    real_T out1_tmp_g51;
    real_T out1_tmp_pxz;
    real_T dmin;
    real_T holdPoint;
    real_T evalPointVector_idx_0;
    real_T normH_m;
    real_T absx;
    real_T ssq;
    real_T c_m;
    real_T anrm;
    real_T absx_p;
    real_T cfromc;
    real_T cfrom1;
    real_T cto1;
    real_T mul;
    real_T tst;
    real_T p_j;
    real_T r_g;
    real_T s_j;
    real_T c_f;
    real_T b_d;
    real_T b_s;
    real_T b_anorm;
    real_T e_ab;
    real_T sm;
    real_T df;
    real_T adf;
    real_T tb;
    real_T ab;
    real_T acmx;
    real_T acmn;
    real_T b_a_c;
    real_T anrm_c;
    real_T absx_i;
    real_T ctoc;
    real_T cfrom1_e;
    real_T cto1_i;
    real_T mul_b;
    real_T tst_n;
    real_T p_m;
    real_T r_if;
    real_T s_n;
    real_T c_e;
    real_T b_g;
    real_T c_s;
    real_T anorm;
    real_T e_jh;
    real_T sm_a;
    real_T df_i;
    real_T adf_c;
    real_T tb_l;
    real_T ab_h;
    real_T acmx_i;
    real_T acmn_n;
    real_T a_j;
    real_T c_k;
    real_T q0_a;
    real_T q0_b;
    real_T q0_c;
    real_T q0_d;
    real_T qF_a;
    real_T qF_b;
    real_T qF_c;
    real_T qF_d;
    real_T linearScaling;
    real_T n_m;
    real_T dp;
    real_T ob;
    real_T oc;
    real_T od;
    real_T oa;
    real_T ob_i;
    real_T assign_temp_a_data;
    real_T assign_temp_b_data;
    real_T assign_temp_c_data;
    real_T assign_temp_d_data;
    real_T ob_tmp;
    real_T oc_tmp;
    real_T od_tmp;
    real_T h_idx_0;
    real_T b_idx_0;
    real_T dp_p;
    real_T n_h;
    real_T oa_f;
    real_T ob_l;
    real_T oc_a;
    real_T od_f;
    real_T oa_c;
    real_T ob_a;
    real_T assign_temp_a_data_n;
    real_T assign_temp_b_data_f;
    real_T assign_temp_c_data_k;
    real_T assign_temp_d_data_h;
    real_T ob_tmp_b;
    real_T oc_tmp_i;
    real_T od_tmp_o;
    real_T t898_g;
    real_T t899_b;
    real_T t900_a;
    real_T t901_h;
    real_T t902_g;
    real_T t903_d;
    real_T t899_tmp_e;
    real_T t898_tmp_k;
    real_T t900_tmp_f;
    real_T ct_tmp_nw;
    real_T t901_tmp_l;
    real_T t903_tmp_a5;
    real_T ct_tmp_mp;
    real_T t902_tmp_b;
    real_T ct_tmp_ev;
    real_T ct_tmp_gv;
    real_T ct_tmp_bs;
    real_T ct_tmp_ml;
    real_T ct_tmp_f1;
    real_T ct_tmp_ep;
    real_T ct_tmp_d2;
    real_T ct_tmp_mn;
    real_T ct_tmp_fb2;
    real_T ct_tmp_hv;
    real_T t900_tmp_e;
    real_T t899_tmp_f;
    real_T t898_tmp_e;
    real_T t901_tmp_o;
    real_T t903_tmp_j;
    real_T t902_tmp_f;
    real_T ct_tmp_kl1;
    real_T ct_tmp_ny;
    real_T ct_tmp_f3;
    real_T ct_tmp_pfi;
    real_T ct_tmp_tmp_i1;
    real_T ct_tmp_tmp_kb;
    real_T ct_tmp_tmp_im;
    real_T ct_tmp_tmp_cw;
    real_T ct_tmp_bx;
    real_T ct_tmp_k3e;
    real_T ct_tmp_l1;
    real_T ct_tmp_by;
    real_T ct_tmp_mr3;
    real_T ct_tmp_bk;
    real_T ct_tmp_l3o;
    real_T ct_tmp_gi;
    real_T ct_tmp_pf2;
    real_T ct_tmp_cq4;
    real_T ct_tmp_tmp_mn;
    real_T ct_tmp_ikz;
    real_T ct_tmp_aj;
    real_T ct_tmp_dy;
    real_T ct_tmp_hb;
    real_T nrmGradInf;
    real_T nrmDirInf;
    real_T beta;
    real_T qpfvalQuadExcess;
    real_T smax;
    real_T s_e;
    real_T qpfvalQuadExcess_tmp;
    real_T maxConstr_new;
    real_T normDelta;
    real_T solution_lambda;
    real_T tempMaxConstr;
    real_T constrViolation_basicX;
    real_T temp;
    real_T smax_b;
    real_T s_c;
    real_T vn1;
    real_T xnorm_c;
    real_T a_i;
    real_T scale_p;
    real_T absxk_l;
    real_T t_n;
    real_T temp_o;
    real_T smax_f;
    real_T s_ax;
    real_T temp_i;
    real_T smax_l;
    real_T s_h;
    real_T smax_k;
    real_T s_nn;
    real_T scale_k;
    real_T absxk_c;
    real_T t_h;
    real_T b_atmp;
    real_T beta1_m;
    real_T c_A_f;
    real_T scale_gj;
    real_T absxk_d;
    real_T t_c2;
    real_T b_atmp_n;
    real_T beta1_n;
    real_T c_A_dd;
    real_T scale_n;
    real_T absxk_li;
    real_T t_p;
    real_T b_atmp_e;
    real_T beta1_o;
    real_T c_A_p;
    real_T scale_ii;
    real_T absxk_dq;
    real_T t_b;
    real_T b_atmp_b;
    real_T beta1_l;
    real_T c_A_b;
    real_T scale_na;
    real_T absxk_p;
    real_T t_oh;
    real_T b_atmp_p;
    real_T beta1_h;
    real_T c_A_o;
    real_T scale_b;
    real_T absxk_cy;
    real_T t_g;
    real_T a_e;
    real_T c_ou;
    real_T tmp;
    real_T cosa_l;
    real_T cosc_o;
    real_T cosb_e;
    real_T f_idx_0;
    real_T t8_o;
    real_T t9_l;
    real_T t11_o;
    real_T t12_a;
    real_T t13_b;
    real_T t14_o;
    real_T t15_c;
    real_T t16_f;
    real_T t25_b;
    real_T t29_l;
    real_T t31_a;
    real_T t50_c;
    real_T t53_a;
    real_T t54_n;
    real_T t17_o;
    real_T t18_a;
    real_T t19_l;
    real_T t57_h;
    real_T t64_f;
    real_T t65_d;
    real_T t68_n;
    real_T t69_g;
    real_T t70_p;
    real_T t12_tmp_p;
    real_T t13_tmp_m;
    real_T t14_tmp_p;
    real_T t15_tmp_d;
    real_T out1_tmp_l5;
    real_T b_c_bh;
    real_T normDelta_e;
    real_T solution_lambda_g;
    real_T smax_c;
    real_T s_o;
    real_T smax_fn;
    real_T s_ov;
    real_T y_i4;
    real_T bkj_d;
    real_T bkj_m;
    real_T b_atmp_o;
    real_T beta1_oa;
    real_T c_A_e;
    real_T scale_m;
    real_T absxk_i;
    real_T t_o4;
    real_T penaltyParamTrial;
    real_T constrViolationEq;
    real_T constrViolationIneq;
    real_T TrialState_cIneq;
    real_T constrViolation;
    real_T tol;
    real_T maxDiag;
    real_T b_atmp_h;
    real_T tau_l;
    real_T c_j2;
    real_T b_atmp_n5;
    real_T beta1_j;
    real_T c_A_ie;
    real_T scale_n2;
    real_T absxk_lo;
    real_T t_ca;
    real_T dp_f;
    real_T n_a;
    real_T oa_p;
    real_T ob_m;
    real_T oc_p;
    real_T od_m;
    real_T oa_h;
    real_T ob_l2;
    real_T assign_temp_a_data_h;
    real_T assign_temp_b_data_fd;
    real_T assign_temp_c_data_j;
    real_T assign_temp_d_data_hu;
    real_T ob_tmp_h;
    real_T oc_tmp_a;
    real_T od_tmp_o4;
    real_T b_atmp_nk;
    real_T beta1_k;
    real_T c_A_n;
    real_T scale_e;
    real_T absxk_n;
    real_T t_bn;
    real_T b_atmp_a;
    real_T beta1_jy;
    real_T c_A_j;
    real_T scale_l;
    real_T absxk_f;
    real_T t_id;
    real_T nlpComplErrorTmp;
    real_T smax_bx;
    real_T s_ci;
    real_T d30;
    real_T temp_e;
    real_T c_c;
    real_T b_s_d;
    real_T b_temp;
    real_T roe;
    real_T absa;
    real_T absb;
    real_T scale_n4;
    real_T ads;
    real_T bds;
    real_T t1164_l;
    real_T t1165_o;
    real_T t1166_a;
    real_T t1466_j;
    real_T t1488_b;
    real_T t1489_l;
    real_T t1490_h;
    real_T t1491_h;
    real_T t1492_f;
    real_T t1493_k;
    real_T t519_f;
    real_T denomTol;
    real_T alphaTemp;
    real_T phaseOneCorrectionP;
    real_T ratio;
    real_T b_c_i;
    real_T c_p;
    real_T temp2;
    real_T taui;
    real_T xnorm_d;
    real_T tau_tmp;
    real_T scale_o;
    real_T absxk_gr;
    real_T t_nf;
    real_T bkj_g;
    real_T temp1;
    real_T taui_j;
    real_T xnorm_j;
    real_T tau_tmp_g;
    real_T scale_jz;
    real_T absxk_cm;
    real_T t_nm;
    real_T tol_d;
    real_T maxDiag_k;
    real_T a_iw;
    real_T b_d4;
    real_T d31;
    real_T ssq_j;
    real_T c_g;
    real_T tol_g;
    real_T qtb;
    real_T tempMaxConstr_j;
    real_T obj_maxConstrWorkspace;
    real_T c_h;
    real_T ctemp;
    real_T stemp;
    real_T temp_oa;
    real_T vnorm;
    real_T qnorm;
    real_T vscale_data;
    real_T l;
    real_T t_oi;
    real_T cfromc_k;
    real_T ctoc_h;
    real_T cfrom1_k;
    real_T cto1_c;
    real_T mul_a;
    real_T cfromc_j;
    real_T ctoc_a;
    real_T cfrom1_l;
    real_T cto1_b;
    real_T mul_h;
    real_T ctemp_g;
    real_T stemp_l;
    real_T temp_h;
    real_T alpha1;
    real_T y_g;
    real_T temp_hn;
    real_T s_k;
    real_T temp_p;
    real_T b_c_n;
    real_T smax_j;
    real_T s_nx;
    real_T obj_maxConstrWorkspace_i;
    real_T c_me;
    real_T obj_maxConstrWorkspace_iq;
    real_T c_i;
    real_T sina_b;
    real_T sinb_k;
    real_T sinc_lb;
    real_T cosa_f;
    real_T dotSY;
    real_T curvatureS;
    real_T temp_hd;
    real_T delta;
    real_T expa;
    real_T sinchdelta;
    real_T delta_g;
    real_T expa_h;
    real_T sinchdelta_l;
    real_T absx_pg;
    real_T z_k;
    real_T s_ch;
    real_T scale_ja;
    real_T absxk_a;
    real_T t_be;
    real_T cfromc_jv;
    real_T ctoc_f;
    real_T cfrom1_g;
    real_T cfromc_b;
    real_T ctoc_o;
    real_T cfrom1_a;
    real_T ctemp_p;
    real_T stemp_li;
    real_T temp_ig;
    real_T ctemp_a;
    real_T stemp_e;
    real_T temp_h0;
    real_T xloc;
    real_T v;
    real_T v_c;
    real_T ssq_b;
    real_T c_ec;
    real_T W;
    real_T c_j0;
    real_T temp_d;
    real_T evalPointVector_idx_1;
    real_T evalPointVector_idx_2;
    real_T temp_j;
    real_T temp_b;
    real_T lbDelta;
    real_T lbLambda;
    real_T WorkingSet_beq;
    real_T posPts_idx_0;
    real_T posPts_idx_1;
    real_T B_h;
    real_T B_c;
    real_T B_hn;
    real_T temp_n;
    real_T b_B_h;
    real_T x_p;
    real_T c_pf;
    real_T s_ow;
    real_T d32;
    real_T B_i;
    real_T d33;
    real_T d34;
    real_T constrViolationEq_k;
    real_T scale_no;
    real_T temp_bf;
    real_T out1_tmp_nxm;
    real_T d35;
    real_T c_jg;
    real_T scale_h;
    real_T d36;
    real_T c_kq;
    SL_Bus_std_msgs_UInt8 In1_me;      // '<S115>/In1'
    SL_Bus_std_msgs_Float32 In1_b;     // '<S129>/In1'
    SL_Bus_std_msgs_Float32 In1_hb;    // '<S141>/In1'
    SL_Bus_std_msgs_Bool In1_gf;       // '<S119>/In1'
    SL_Bus_sonia_common_ros2_KillStatus In1_lz;// '<S118>/In1'
    uint16_T BufferToMakeInportVirtual_Ins_e[8];
    int64_T b_value;
    boolean_T umax_incr_flag[8];
    boolean_T umin_incr_flag[8];
    boolean_T umax_incr_flag_i[8];
    boolean_T umin_incr_flag_k[8];
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
    int32_T varargin_1_size_j[2];
    int32_T b_varargin_1_size[2];
    int32_T Jx_k[2];
    int32_T tmp_size_e[2];
    int32_T RLinv_size[2];
    int32_T b_D_size[2];
    int32_T b_H_size_b[2];
    int32_T AcRow_size[2];
    int32_T b_H_size_p[2];
    int32_T Q_size[2];
    int32_T b_A_size[2];
    int32_T idx[2];
    int32_T tmp_size_p[2];
    int32_T b_size_l[2];
    int32_T assign_temp_a_size[2];
    int32_T assign_temp_b_size[2];
    int32_T assign_temp_c_size[2];
    int32_T assign_temp_d_size[2];
    int32_T assign_temp_a_size_h[2];
    int32_T assign_temp_b_size_m[2];
    int32_T tmp_size_eo[2];
    int32_T tmp_size_d[2];
    int32_T tmp_size_i[2];
    int32_T tmp_size_k[2];
    int32_T tmp_size_km[2];
    int32_T tmp_size_a[2];
    int32_T tmp_size_at[2];
    int32_T tmp_size_f[2];
    int32_T tmp_size_j[2];
    int32_T tmp_size_ei[2];
    int32_T tmp_size_ig[2];
    int32_T assign_temp_a_size_g[2];
    int32_T assign_temp_b_size_n[2];
    int32_T tmp_size_g[2];
    int32_T tmp_size_b[2];
    rmw_qos_profile_t qos_profile;
    int8_T b_ipiv_b[6];
    int8_T ipiv_b[6];
    boolean_T b_j[4];
    int16_T sizes[2];
    int16_T sizes_o[2];
    int16_T Jx_j[2];
    int16_T varargin_2[2];
    int16_T Je_i[2];
    real32_T rtb_Merge2_data;
    int32_T base_index;
    int32_T ibmat;
    int32_T b_j_n;
    int32_T coffset;
    int32_T Ns;
    int32_T i;
    int32_T i_o;
    int32_T i_d;
    int32_T i_k;
    int32_T i_g;
    int32_T modCoeffs_tmp;
    int32_T pny;
    int32_T nmoves;
    int32_T TotalFreeMoves;
    int32_T j;
    int32_T ioff;
    int32_T b_j_o;
    int32_T i_n;
    int32_T pny_h;
    int32_T trueCount;
    int32_T b_Ac_k;
    int32_T loop_ub;
    int32_T nmoves_tmp;
    int32_T i_input_sizes_idx_1_tmp;
    int32_T s_size_idx_0;
    int32_T Mu_size_idx_0;
    int32_T Mv_aux_size_idx_0;
    int32_T i_l;
    int32_T loop_ub_b;
    int32_T i1;
    int32_T loop_ub_f;
    int32_T loop_ub_e;
    int32_T input_sizes_idx_0;
    int32_T b_input_sizes_idx_0;
    int32_T Sum_tmp;
    int32_T loop_ub_tmp;
    int32_T input_sizes_idx_0_tmp;
    int32_T mc;
    int32_T coffset_i;
    int32_T boffset;
    int32_T aoffset;
    int32_T j_b;
    int32_T i_e;
    int32_T k;
    int32_T b_i;
    int32_T b_i_o;
    int32_T i_ot;
    int32_T b_i_a;
    int32_T b_k;
    int32_T b_I_tmp;
    int32_T b_I_tmp_h;
    int32_T j_bo;
    int32_T b_k_n;
    int32_T eint;
    int32_T i_ng;
    int32_T i2;
    int32_T i3;
    int32_T i4;
    int32_T n_hb;
    int32_T nb;
    int32_T mLinIneq;
    int32_T mIneq;
    int32_T mConstrMax;
    int32_T maxDims;
    int32_T mNonlinIneq;
    int32_T k_b;
    int32_T ia;
    int32_T i_g2;
    int32_T WorkingSet_tmp_tmp;
    int32_T mFixed;
    int32_T mIneq_e;
    int32_T mLB;
    int32_T mUB;
    int32_T mConstr;
    int32_T mLinIneq_e;
    int32_T qpoptions_MaxIterations;
    int32_T k_e;
    int32_T n_m5;
    int32_T ix_k;
    int32_T iy;
    int32_T b_ix;
    int32_T b_iy;
    int32_T d_ix;
    int32_T loop_ub_j;
    int32_T u1;
    int32_T nVar_tmp_tmp;
    int32_T n_tmp;
    int32_T iy_tmp;
    int32_T mLinIneq_b;
    int32_T k_l;
    int32_T b_tmp_j;
    int32_T yk;
    int32_T i_m;
    int32_T i_l1;
    int32_T ineqRange_size_idx_1;
    int32_T i5;
    int32_T loop_ub_i;
    int32_T loop_ub_o;
    int32_T k_bf;
    int32_T i_mc;
    int32_T kidx;
    int32_T i2_g;
    int32_T Tries;
    int32_T i_le;
    int32_T i6;
    int32_T kidx_p;
    int32_T nA;
    int32_T tmp_n;
    int32_T exponent;
    int32_T b_exponent;
    int32_T i_f;
    int32_T iSave;
    int32_T iC_o;
    int32_T U_tmp;
    int32_T k_i;
    int32_T ii;
    int32_T knt;
    int32_T b_lastv;
    int32_T e_j_j;
    int32_T e_i;
    int32_T b_s_k;
    int32_T i7;
    int32_T i8;
    int32_T i9;
    int32_T F_tmp;
    int32_T n_o;
    int32_T nb_f;
    int32_T row;
    int32_T col;
    int32_T col_end;
    int32_T idx_mat;
    int32_T i10;
    int32_T loop_ub_k;
    int32_T loop_ub_l;
    int32_T d_k;
    int32_T i_a;
    int32_T icf_tmp_m;
    int32_T tmp_size_idx_0;
    int32_T i11;
    int32_T i12;
    int32_T loop_ub_g;
    int32_T loop_ub_m;
    int32_T loop_ub_n;
    int32_T mc_n;
    int32_T coffset_j;
    int32_T boffset_o;
    int32_T aoffset_c;
    int32_T idx_current;
    int32_T i_lg;
    int32_T j_l;
    int32_T i_j;
    int32_T TotalFreeMoves_f;
    int32_T nA_b;
    int32_T kDrop;
    int32_T kNext;
    int32_T idx_b;
    int32_T loop_ub_fn;
    int32_T b_Ac_i;
    int32_T b_m;
    int32_T b_n;
    int32_T i_j_k;
    int32_T iC_c;
    int32_T RLinv_idx_0_tmp;
    int32_T RLinv_idx_1_tmp;
    int32_T i_j_tmp;
    int32_T loop_ub_c;
    int32_T TL_size_idx_0;
    int32_T R_size_idx_0;
    int32_T minmana;
    int32_T minmn;
    int32_T ii_j;
    int32_T mmi;
    int32_T mmip1;
    int32_T ix0;
    int32_T knt_a;
    int32_T coltop;
    int32_T n_tmp_d;
    int32_T b_m_tmp;
    int32_T b_i_i;
    int32_T idx_e;
    int32_T g_k;
    int32_T jj;
    int32_T jp1j;
    int32_T e_k_p;
    int32_T jj_o;
    int32_T Tries_j;
    int32_T b_k_h;
    int32_T b_degrees_tmp;
    int32_T emlN_tmp;
    int32_T loop_ub_tmp_m;
    int32_T idxAjj;
    int32_T j_d;
    int32_T ix_j;
    int32_T b_jg;
    int32_T d_gu;
    int32_T b_ix_f;
    int32_T b_iy_l;
    int32_T db;
    int32_T fb;
    int32_T ibcol;
    int32_T b_k_b;
    int32_T db_a;
    int32_T fb_j;
    int32_T ibcol_n;
    int32_T b_k_p;
    int32_T e_i_o;
    int32_T itau;
    int32_T iaii;
    int32_T lastc;
    int32_T f;
    int32_T coltop_a;
    int32_T b_ia;
    int32_T jy;
    int32_T l1;
    int32_T m_h;
    int32_T l_i;
    int32_T lsv;
    int32_T lend;
    int32_T lendsv;
    int32_T b_mk;
    int32_T itau_h;
    int32_T iaii_c;
    int32_T lastv;
    int32_T lastc_m;
    int32_T e_ki;
    int32_T coltop_a5;
    int32_T jy_e;
    int32_T jtot;
    int32_T l1_j;
    int32_T m_f;
    int32_T l_m;
    int32_T lsv_e;
    int32_T lend_p;
    int32_T ia_h;
    int32_T i_l4;
    int32_T itau_l;
    int32_T lastv_c;
    int32_T lastc_n;
    int32_T coltop_f;
    int32_T b_ia_h;
    int32_T loop_ub_b2;
    int32_T iy_g;
    int32_T b_iy_o;
    int32_T b_h;
    int32_T i13;
    int32_T stride_0_0;
    int32_T nVar;
    int32_T k_i0;
    int32_T idxStartIneq;
    int32_T idxEndIneq;
    int32_T idxStartIneq_tmp;
    int32_T nVarOrig;
    int32_T idx_max;
    int32_T ix_g;
    int32_T mLBOrig;
    int32_T mFiniteLBOrig;
    int32_T mLBOrig_tmp;
    int32_T nVar_i;
    int32_T idx_i;
    int32_T ixlast;
    int32_T PROBTYPE_ORIG;
    int32_T mConstr_p;
    int32_T idxStartIneq_h;
    int32_T idxEndIneq_l;
    int32_T nVar_tmp;
    int32_T idxStartIneq_tmp_g;
    int32_T activeSetChangeID;
    int32_T nVar_b;
    int32_T globalActiveConstrIdx;
    int32_T idxMinLambda;
    int32_T k_g;
    int32_T iQR0;
    int32_T g;
    int32_T nVar_c;
    int32_T mWConstr;
    int32_T nVar_ce;
    int32_T rankQR;
    int32_T ldq;
    int32_T b_idx;
    int32_T jBcol;
    int32_T iAcol;
    int32_T ix_e;
    int32_T br;
    int32_T n_p;
    int32_T iQR0_a;
    int32_T b_n_g;
    int32_T temp_tmp;
    int32_T idx_f;
    int32_T ix0_p;
    int32_T iy0;
    int32_T b_c0;
    int32_T k_m;
    int32_T minmn_m;
    int32_T nfxd;
    int32_T b_j_a;
    int32_T ma_tmp;
    int32_T ma;
    int32_T minmn_e;
    int32_T ii_i;
    int32_T nmi;
    int32_T mmi_i;
    int32_T pvt;
    int32_T itemp;
    int32_T j_bu;
    int32_T ii_tmp;
    int32_T b_info;
    int32_T ip;
    int32_T b_i_k;
    int32_T b_j_e;
    int32_T kAcol;
    int32_T i14;
    int32_T i15;
    int32_T jj_a;
    int32_T jp1j_f;
    int32_T b_info_o;
    int32_T ip_l;
    int32_T b_i_l;
    int32_T b_j_k;
    int32_T kAcol_f;
    int32_T i16;
    int32_T i17;
    int32_T b_i_p;
    int32_T i18;
    int32_T i19;
    int32_T b_i_e;
    int32_T jj_c;
    int32_T jp1j_d;
    int32_T jj_i;
    int32_T itau_f;
    int32_T ii_o;
    int32_T ix0_o;
    int32_T knt_p;
    int32_T itau_p;
    int32_T ii_g;
    int32_T ix0_g;
    int32_T knt_e;
    int32_T itau_j;
    int32_T ii_n;
    int32_T ix0_b;
    int32_T knt_c;
    int32_T itau_i;
    int32_T ii_h;
    int32_T ix0_d;
    int32_T knt_i;
    int32_T itau_n;
    int32_T ii_ox;
    int32_T ix0_i;
    int32_T knt_m;
    int32_T k_p;
    int32_T b_k_k;
    int32_T tmp_k;
    int32_T nVar_h;
    int32_T mConstrMax_g;
    int32_T idxIneqOffset;
    int32_T idx_Aineq;
    int32_T idx_lower;
    int32_T nWIneq_old;
    int32_T nWLower_old;
    int32_T nWUpper_old;
    int32_T ix_i;
    int32_T iy_b;
    int32_T l_c;
    int32_T idxStartIneq_k;
    int32_T idxStartIneq_tmp_i;
    int32_T activeSetChangeID_f;
    int32_T nVar_f;
    int32_T globalActiveConstrIdx_b;
    int32_T idxMinLambda_m;
    int32_T k_j;
    int32_T iQR0_h;
    int32_T g_h;
    int32_T nVar_d;
    int32_T nullStartIdx;
    int32_T b_mNull;
    int32_T nullStart;
    int32_T c_mNull;
    int32_T b_jjA;
    int32_T d_ix_a;
    int32_T mNull_tmp;
    int32_T nullStartIdx_tmp;
    int32_T LDimSizeP1;
    int32_T A_maxDiag_idx;
    int32_T LD_diagOffset;
    int32_T ix_h;
    int32_T iy0_o;
    int32_T LDimSizeP1_l;
    int32_T subRows;
    int32_T LD_diagOffset_n;
    int32_T idx_g;
    int32_T k_mo;
    int32_T b_idx_j;
    int32_T coffset_e;
    int32_T boffset_d;
    int32_T b_i_c;
    int32_T e_jo;
    int32_T c_i_h;
    int32_T loop_ub_l5;
    int32_T c_a;
    int32_T i20;
    int32_T i21;
    int32_T i22;
    int32_T aux_0_1;
    int32_T aux_1_1;
    int32_T aux_2_1;
    int32_T stride_0_0_d;
    int32_T stride_1_0;
    int32_T stride_2_0;
    int32_T stride_0_1;
    int32_T stride_1_1;
    int32_T stride_2_1;
    int32_T loop_ub_iq;
    int32_T loop_ub_h;
    int32_T mc_g;
    int32_T coffset_g;
    int32_T boffset_oz;
    int32_T j_e;
    int32_T i_oh;
    int32_T k_gj;
    int32_T b_i_ch;
    int32_T itau_g;
    int32_T ii_f;
    int32_T ix0_gh;
    int32_T knt_l;
    int32_T b_f;
    int32_T k_n;
    int32_T b_mg;
    int32_T idxStartIneq_d;
    int32_T idxEndIneq_b;
    int32_T idxStartIneq_tmp_g3;
    int32_T nActiveConstr;
    int32_T nFixedConstr;
    int32_T nVar_j;
    int32_T nDepIneq;
    int32_T ix0_e;
    int32_T iy0_e;
    int32_T d_n;
    int32_T nVar_tmp_tmp_k;
    int32_T lda;
    int32_T ii_d;
    int32_T mmi_g;
    int32_T i_lo;
    int32_T loop_ub_cm;
    int32_T lastv_g;
    int32_T lastc_k;
    int32_T coltop_j;
    int32_T itau_k;
    int32_T ii_gx;
    int32_T ix0_bj;
    int32_T knt_g;
    int32_T i23;
    int32_T stride_0_0_m;
    int32_T stride_1_0_i;
    int32_T stride_2_0_m;
    int32_T stride_3_0;
    int32_T loop_ub_it;
    int32_T aoffset_l;
    int32_T i_d4;
    int32_T itau_fk;
    int32_T ii_dp;
    int32_T ix0_ps;
    int32_T knt_ev;
    int32_T itau_m;
    int32_T ii_l;
    int32_T ix0_m;
    int32_T knt_er;
    int32_T nVar_e;
    int32_T mLambda;
    int32_T idx_max_i;
    int32_T ix_jf;
    int32_T rankR;
    int32_T c_ix;
    int32_T iQR0_m;
    int32_T n_p1;
    int32_T ia_m;
    int32_T i_lq;
    int32_T itau_lf;
    int32_T c_kz;
    int32_T i_dv;
    int32_T endIdx;
    int32_T idxRotGCol;
    int32_T QRk0;
    int32_T ldw;
    int32_T d_m;
    int32_T iyend;
    int32_T e_d;
    int32_T f_c;
    int32_T ia_n;
    int32_T d_tmp;
    int32_T iv_g;
    int32_T i_ll;
    int32_T knt_ce;
    int32_T b_ix_c;
    int32_T b_iy_f;
    int32_T i24;
    int32_T i25;
    int32_T aux_0_1_m;
    int32_T aux_1_1_b;
    int32_T stride_0_1_p;
    int32_T stride_1_1_k;
    int32_T loop_ub_a;
    int32_T coffset_l;
    int32_T boffset_k;
    int32_T j_f;
    int32_T i_jr;
    int32_T k_a;
    int32_T b_i_ly;
    int32_T ia0;
    int32_T b_i_f;
    int32_T knt_j;
    int32_T k_pn;
    int32_T b_tmp_m;
    int32_T nActiveConstr_j;
    int32_T nFixedConstr_f;
    int32_T nVar_k;
    int32_T nDepIneq_m;
    int32_T ix0_h;
    int32_T iy0_g;
    int32_T minszA;
    int32_T j_a;
    int32_T i_m2;
    int32_T nA_tmp;
    int32_T c_k0;
    int32_T n_b;
    int32_T jBcol_k;
    int32_T kAcol_g;
    int32_T j_l2;
    int32_T b_k_bv;
    int32_T i_lc;
    int32_T idx_ir;
    int32_T ix0_n;
    int32_T iy0_d;
    int32_T b_k_o;
    int32_T idxA1j;
    int32_T idxAjj_d;
    int32_T nmj;
    int32_T b_j_b;
    int32_T iy_n;
    int32_T nVar_a;
    int32_T mWorkingFixed;
    int32_T mTotalWorkingEq;
    int32_T totalRank;
    int32_T ix_a;
    int32_T c_tmp_tmp;
    int32_T mTotalWorkingEq_tmp;
    int32_T loop_ub_p;
    int32_T ia_b;
    int32_T idxFillStart;
    int32_T colOffsetATw;
    int32_T iAeq0;
    int32_T iATw0;
    int32_T idx_g4;
    int32_T f_l;
    int32_T idxUpperExisting;
    int32_T offsetEq1;
    int32_T offsetEq2;
    int32_T colOffsetATw_g;
    int32_T colOffsetAineq;
    int32_T d_mk;
    int32_T k_af;
    int32_T nVar_ex;
    int32_T b_di;
    int32_T idx_m;
    int32_T mIneq_o;
    int32_T b_ii;
    int32_T k_nj;
    int32_T lendsv_i;
    int32_T iscale;
    int32_T i_kw;
    int32_T iscale_tmp;
    int32_T j_c;
    int32_T iscale_g;
    int32_T i_c;
    int32_T b_anorm_tmp;
    int32_T n_tmp_b;
    int32_T LDimSizeP1_lj;
    int32_T LD_diagOffset_m;
    int32_T subMatrixDim;
    int32_T idx_d;
    int32_T idxRotGCol_b;
    int32_T nVar_jt;
    int32_T mLambda_f;
    int32_T idx_max_it;
    int32_T k_j3;
    int32_T i26;
    int32_T i27;
    int32_T aux_0_1_n;
    int32_T aux_1_1_h;
    int32_T stride_0_0_o;
    int32_T stride_1_0_o;
    int32_T stride_0_1_g;
    int32_T stride_1_1_c;
    int32_T mIneq_c;
    int32_T f_i;
    int32_T k_l4;
    int32_T mIneq_f;
    int32_T f_o;
    int32_T k_er;
    int32_T idx_j;
    int32_T ix0_im;
    int32_T iy0_j;
    int32_T b_jo;
    int32_T k_c;
    int32_T minmn_j;
    int32_T loop_ub_kk;
    int32_T ix_o;
    int32_T jm1;
    int32_T i28;
    int32_T loop_ub_nh;
    int32_T kidx_b;
    int32_T c_iv;
    int32_T b_j1;
    int32_T j2;
    int32_T b_idx_b;
    int32_T idxQR;
    int32_T jA;
    int32_T j_ch;
    int32_T i_ge;
    int32_T ixlast_e;
    int32_T iy_a;
    int32_T ix_f;
    int32_T lastColC;
    int32_T br_p;
    int32_T coltop_o;
    int32_T b_coltop;
    int32_T b_l;
    int32_T idx_iq;
    int32_T mIneq_j;
    int32_T nVar_k1;
    int32_T aoffset_e;
    int32_T b_ia2;
    int32_T i_jf;
    int32_T jBcol_a;
    int32_T jBcol_f;
    int32_T jBcol_h;
    int32_T jjA;
    int32_T lastColC_f;
    int32_T br_h;
    int32_T ar;
    int32_T jBcol_l;
    int32_T last;
    int32_T kidx_g;
    int32_T j2_j;
    int32_T i29;
    int32_T stride_0_1_h;
    int32_T d_gq;
    int32_T nVar_tmp_tmp_c;
    int32_T aoffset_h;
    int32_T n_f;
    int32_T j_f5;
    int32_T j_ln;
    int32_T j_n;
    int32_T k_cc;
    int32_T lda_f;
    int32_T ix_p;
    int32_T iCol;
    int32_T b_index;
    uint32_T len;
    uint32_T b_q;
    uint32_T b_q_tmp;
    uint32_T u;
    SL_Bus_std_msgs_Float32 rtb_SourceBlock_o2_pk_o;
    SL_Bus_std_msgs_Float32 BusAssignment_ak;// '<S81>/Bus Assignment'
    int32_T B_size[1];
    int32_T isMrows_size[1];
    int32_T tmp_size_c[1];
    int32_T tmp_size_m[1];
    int32_T tmp_size_h[1];
    int32_T Je_size[1];
    int32_T z_size[1];
    int32_T tau_size[1];
    int32_T tmp_size_l[1];
    int8_T MpcStatus;                  // '<S142>/Merge'
    boolean_T SourceBlock_o1;          // '<S332>/SourceBlock'
    boolean_T MATLABSystem_o3_f;       // '<S307>/MATLAB System'
    boolean_T MATLABSystem_o3_k;       // '<S306>/MATLAB System'
    boolean_T isMpcAlive;              // '<S144>/Data Type Conversion'
    boolean_T thrustersStatus[8];      // '<S143>/MATLAB System'
    boolean_T SourceBlock_o1_k;        // '<S113>/SourceBlock'
    boolean_T SourceBlock_o1_e;        // '<S112>/SourceBlock'
    boolean_T SourceBlock_o1_a;        // '<S111>/SourceBlock'
    boolean_T SourceBlock_o1_j;        // '<S110>/SourceBlock'
    boolean_T SourceBlock_o1_f;        // '<S109>/SourceBlock'
    boolean_T SourceBlock_o1_kn;       // '<S108>/SourceBlock'
    boolean_T has_dvl;                 // '<S97>/Has DVL'
    B_CurrentTime_proc_control_T CurrentTime_n;// '<S16>/Current Time'
    B_CurrentTime_proc_control_T CurrentTime;// '<S16>/Current Time'
  };

  // Block states (default storage) for system '<Root>'
  struct DW_proc_control_T {
    TrajectoryManager_proc_contro_T obj;// '<S323>/MATLAB System1'
    ProcPlannerManager_proc_contr_T obj_l;// '<S318>/MATLAB System'
    mpcManager_proc_control_T obj_k;   // '<S143>/MATLAB System'
    TrimPlant_proc_control_T obj_b;    // '<S145>/MATLAB System'
    robotics_slcore_internal_bl_p_T obj_m;// '<S339>/Polynomial Trajectory'
    AuvDifferentialEquation_proc__T obj_f;// '<S3>/MATLAB System'
    OpenLoopController_proc_contr_T obj_p;// '<S147>/MATLAB System'
    robotics_slcore_internal_bloc_T obj_p3;// '<S336>/Rotation Trajectory'
    AddPose_proc_control_T obj_fo;     // '<S323>/MATLAB System'
    rosCommandManager_proc_contro_T obj_i;// '<S94>/MATLAB System'
    ros_slros2_internal_block_Cur_T obj_o3;// '<S184>/Current Time'
    ros_slros2_internal_block_Get_T obj_fy;// '<S97>/Linear Accel Bias1'
    ros_slros2_internal_block_Get_T obj_o3e;// '<S97>/Linear Accel Bias'
    ros_slros2_internal_block_Get_T obj_nj;// '<S97>/Has DVL'
    ros_slros2_internal_block_Get_T obj_bd;// '<S97>/Get Parameter3'
    ros_slros2_internal_block_Get_T obj_nw;// '<S97>/Get Parameter2'
    ros_slros2_internal_block_Get_T obj_dx;// '<S97>/Get Parameter1'
    ros_slros2_internal_block_Get_T obj_m3;// '<S97>/Get Parameter'
    ros_slros2_internal_block_Get_T obj_ju;// '<S96>/Volume'
    ros_slros2_internal_block_Get_T obj_l4;// '<S96>/Thrusters'
    ros_slros2_internal_block_Get_T obj_e5;// '<S96>/Sub Height'
    ros_slros2_internal_block_Get_T obj_eu;// '<S96>/Sonar Pose'
    ros_slros2_internal_block_Get_T obj_pp;// '<S96>/RHO'
    ros_slros2_internal_block_Get_T obj_e1;// '<S96>/RG'
    ros_slros2_internal_block_Get_T obj_hd;// '<S96>/RB'
    ros_slros2_internal_block_Get_T obj_hn;// '<S96>/I'
    ros_slros2_internal_block_Get_T obj_c4;// '<S96>/Hydro Pose'
    ros_slros2_internal_block_Get_T obj_jq;// '<S96>/Get Parameter2'
    ros_slros2_internal_block_Get_T obj_axm;// '<S96>/G'
    ros_slros2_internal_block_Get_T obj_lq;// '<S96>/Depth Pose'
    ros_slros2_internal_block_Get_T obj_mh;// '<S96>/DVL Rotation'
    ros_slros2_internal_block_Get_T obj_jk;// '<S96>/DVL Lost Override'
    ros_slros2_internal_block_Get_T obj_kb;// '<S96>/CDQ'
    ros_slros2_internal_block_Get_T obj_fg;// '<S96>/CDL'
    ros_slros2_internal_block_Get_T obj_ps;// '<S96>/Added Mass'
    ros_slros2_internal_block_Get_T obj_do;// '<S99>/Time In Tolerance'
    ros_slros2_internal_block_Get_T obj_dc;// '<S99>/Linear Tolerance'
    ros_slros2_internal_block_Get_T obj_eug;// '<S99>/Angular Tolerance'
    ros_slros2_internal_block_Get_T obj_pu;// '<S98>/T Min'
    ros_slros2_internal_block_Get_T obj_cm;// '<S98>/T Max'
    ros_slros2_internal_block_Get_T obj_f0;// '<S98>/P'
    ros_slros2_internal_block_Get_T obj_dx4;// '<S98>/M'
    ros_slros2_internal_block_Get_T obj_nb;// '<S104>/MV'
    ros_slros2_internal_block_Get_T obj_fs;// '<S103>/OV'
    ros_slros2_internal_block_Get_T obj_hq;// '<S103>/MVR'
    ros_slros2_internal_block_Get_T obj_pz;// '<S103>/MV'
    ros_slros2_internal_block_Get_T obj_nl;// '<S102>/OV'
    ros_slros2_internal_block_Get_T obj_as;// '<S102>/MVR'
    ros_slros2_internal_block_Get_T obj_nr;// '<S102>/MV'
    ros_slros2_internal_block_Get_T obj_j1;// '<S101>/OV'
    ros_slros2_internal_block_Get_T obj_pzf;// '<S101>/MVR'
    ros_slros2_internal_block_Get_T obj_f2;// '<S101>/MV'
    ros_slros2_internal_block_Get_T obj_fk;// '<S100>/OV'
    ros_slros2_internal_block_Get_T obj_bni;// '<S100>/MVR'
    ros_slros2_internal_block_Get_T obj_iw;// '<S100>/MV'
    ros_slros2_internal_block_Pub_T obj_oe;// '<S328>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_ni;// '<S185>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_bq;// '<S92>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_iv;// '<S90>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_cr;// '<S87>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_i2;// '<S85>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_of;// '<S57>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_p5;// '<S42>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_fd;// '<S23>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_oa;// '<S22>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_clf;// '<S25>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_ez;// '<S18>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_dv;// '<S14>/SinkBlock'
    ros_slros2_internal_block_Sub_T obj_ha;// '<S337>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_eh;// '<S332>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_jb;// '<S330>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_if;// '<S246>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_no;// '<S245>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_f0y;// '<S126>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_ak;// '<S125>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_n5;// '<S124>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_du;// '<S123>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_na;// '<S138>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_fka;// '<S137>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_fe;// '<S136>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_cg;// '<S113>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_lt;// '<S112>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_fw;// '<S111>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_i3;// '<S110>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_nf;// '<S109>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_ppy;// '<S108>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_fb;// '<S58>/SourceBlock'
    real_T Delay_DSTATE;               // '<S94>/Delay'
    real_T Delay_DSTATE_c[8];          // '<S255>/Delay'
    real_T DiscreteTimeIntegrator_DSTATE[3];// '<S257>/Discrete-Time Integrator' 
    real_T DiscreteTimeIntegrator_DSTATE_g[3];// '<S258>/Discrete-Time Integrator' 
    real_T Delay_DSTATE_m;             // '<S7>/Delay'
    real_T DiscreteTimeIntegrator_DSTATE_a;// '<S336>/Discrete-Time Integrator'
    real_T UD_DSTATE;                  // '<S296>/UD'
    real_T DiscreteTransferFcn_states; // '<S252>/Discrete Transfer Fcn'
    real_T Delay_DSTATE_i;             // '<S285>/Delay'
    real_T Delay_DSTATE_p;             // '<S144>/Delay'
    real_T Delay_DSTATE_pp[8];         // '<S149>/Delay'
    real_T mv_Delay_DSTATE[88];        // '<S223>/mv_Delay'
    real_T x_Delay_DSTATE[143];        // '<S223>/x_Delay'
    real_T slack_delay_DSTATE;         // '<S223>/slack_delay'
    real_T last_mv_DSTATE[8];          // '<S189>/last_mv'
    real_T Delay1_DSTATE[88];          // '<S146>/Delay1'
    real_T UD_DSTATE_n[6];             // '<S219>/UD'
    real_T Delay_DSTATE_a[8];          // '<S145>/Delay'
    real_T last_mv_DSTATE_j[8];        // '<S153>/last_mv'
    real_T lastMsg[400];               // '<S97>/MATLAB System5'
    real_T lastMsg_p[400];             // '<S97>/MATLAB System4'
    real_T lastMsg_a[400];             // '<S97>/MATLAB System3'
    real_T lastMsg_k[400];             // '<S97>/MATLAB System2'
    real_T lastMsg_d[400];             // '<S97>/MATLAB System1'
    real_T lastMsg_m[400];             // '<S97>/MATLAB System'
    real_T lastMsg_c[400];             // '<S96>/MATLAB System8'
    real_T lastMsg_al[400];            // '<S96>/MATLAB System7'
    real_T lastMsg_l[400];             // '<S96>/MATLAB System6'
    real_T lastMsg_ky[400];            // '<S96>/MATLAB System5'
    real_T lastMsg_mg[400];            // '<S96>/MATLAB System4'
    real_T lastMsg_kw[400];            // '<S96>/MATLAB System3'
    real_T lastMsg_f[400];             // '<S96>/MATLAB System2'
    real_T lastMsg_pn[400];            // '<S96>/MATLAB System12'
    real_T lastMsg_dn[400];            // '<S96>/MATLAB System11'
    real_T lastMsg_i[400];             // '<S96>/MATLAB System1'
    real_T lastMsg_g[400];             // '<S104>/MATLAB System5'
    real_T lastMsg_fk[400];            // '<S103>/MATLAB System5'
    real_T lastMsg_h[400];             // '<S103>/MATLAB System4'
    real_T lastMsg_ar[400];            // '<S103>/MATLAB System3'
    real_T lastMsg_m4[400];            // '<S102>/MATLAB System5'
    real_T lastMsg_lq[400];            // '<S102>/MATLAB System4'
    real_T lastMsg_g4[400];            // '<S102>/MATLAB System3'
    real_T lastMsg_aa[400];            // '<S101>/MATLAB System5'
    real_T lastMsg_gp[400];            // '<S101>/MATLAB System4'
    real_T lastMsg_kz[400];            // '<S101>/MATLAB System3'
    real_T lastMsg_k3[400];            // '<S100>/MATLAB System4'
    real_T lastMsg_co[400];            // '<S100>/MATLAB System3'
    real_T lastMsg_b[400];             // '<S100>/MATLAB System1'
    real_T DiscreteTransferFcn_states_g;// '<S33>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_states_k;// '<S34>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_states_p;// '<S35>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_states_f;// '<S36>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_states_e;// '<S37>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_states_m;// '<S38>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_states_l;// '<S39>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_states_px;// '<S40>/Discrete Transfer Fcn'
    real_T UnitDelay_DSTATE[13];       // '<S3>/Unit Delay'
    real_T DiscreteTimeIntegrator_DSTATE_e[3];// '<S3>/Discrete-Time Integrator' 
    real_T DiscreteTimeIntegrator1_DSTATE[4];// '<S3>/Discrete-Time Integrator1' 
    real_T DiscreteTimeIntegrator2_DSTATE[3];// '<S3>/Discrete-Time Integrator2' 
    real_T DiscreteTimeIntegrator3_DSTATE[3];// '<S3>/Discrete-Time Integrator3' 
    real_T P[169];                     // '<S304>/DataStoreMemory - P'
    real_T x[13];                      // '<S304>/DataStoreMemory - x'
    real_T w_prev[3];                  // '<S258>/MATLAB Function2'
    real_T w_prev_e[3];                // '<S257>/MATLAB Function2'
    real_T Memory_PreviousInput;       // '<S134>/Memory'
    real_T DiscreteTransferFcn_tmp_d;  // '<S33>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_tmp_o;  // '<S34>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_tmp_dh; // '<S35>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_tmp_h;  // '<S36>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_tmp_c;  // '<S37>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_tmp_j;  // '<S38>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_tmp_jr; // '<S39>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_tmp_hn; // '<S40>/Discrete Transfer Fcn'
    real_T Drift_NextOutput[6];        // '<S27>/Drift'
    real_T NextOutput;                 // '<S43>/White Noise'
    real_T NextOutput_c;               // '<S44>/White Noise'
    real_T NextOutput_g;               // '<S45>/White Noise'
    real_T NextOutput_i;               // '<S46>/White Noise'
    real_T NextOutput_f;               // '<S47>/White Noise'
    int32_T clockTickCounter;          // '<S149>/Pulse Generator'
    int32_T clockTickCounter_n;        // '<S146>/Pulse Generator'
    int32_T clockTickCounter_f;        // '<S145>/Pulse Generator'
    int32_T counter[6];                // '<S27>/Sine Wave'
    uint32_T m_bpIndex[8];             // '<S144>/N to A'
    uint32_T m_bpIndex_o[8];           // '<S144>/n-D Lookup Table1'
    uint32_T RandSeed[6];              // '<S27>/Drift'
    uint32_T m_bpIndex_oc[8];          // '<S32>/N to RPM'
    uint32_T RandSeed_o;               // '<S43>/White Noise'
    uint32_T RandSeed_n;               // '<S44>/White Noise'
    uint32_T RandSeed_h;               // '<S45>/White Noise'
    uint32_T RandSeed_d;               // '<S46>/White Noise'
    uint32_T RandSeed_e;               // '<S47>/White Noise'
    uint32_T method;                   // '<S48>/MATLAB System'
    uint32_T state;                    // '<S48>/MATLAB System'
    uint32_T state_f[2];               // '<S48>/MATLAB System'
    uint32_T state_fo[625];            // '<S48>/MATLAB System'
    uint16_T Delay_DSTATE_m0[8];       // '<S8>/Delay'
    boolean_T Delay_DSTATE_g;          // '<S323>/Delay'
    boolean_T DelayInput1_DSTATE;      // '<S325>/Delay Input1'
    int8_T DiscreteTimeIntegrator_PrevRese;// '<S257>/Discrete-Time Integrator'
    int8_T DiscreteTimeIntegrator_PrevRe_j;// '<S258>/Discrete-Time Integrator'
    int8_T SwitchCase_ActiveSubsystem; // '<S10>/Switch Case'
    int8_T If_ActiveSubsystem_b;       // '<S8>/If'
    int8_T SwitchCase_ActiveSubsystem_p;// '<S142>/Switch Case'
    int8_T DiscreteTimeIntegrator_PrevRe_m;// '<S3>/Discrete-Time Integrator'
    int8_T DiscreteTimeIntegrator1_PrevRes;// '<S3>/Discrete-Time Integrator1'
    int8_T DiscreteTimeIntegrator2_PrevRes;// '<S3>/Discrete-Time Integrator2'
    int8_T DiscreteTimeIntegrator3_PrevRes;// '<S3>/Discrete-Time Integrator3'
    uint8_T DiscreteTimeIntegrator_IC_LOADI;// '<S3>/Discrete-Time Integrator'
    uint8_T DiscreteTimeIntegrator1_IC_LOAD;// '<S3>/Discrete-Time Integrator1'
    boolean_T w_prev_not_empty;        // '<S258>/MATLAB Function2'
    boolean_T w_prev_not_empty_m;      // '<S257>/MATLAB Function2'
    boolean_T icLoad;                  // '<S223>/mv_Delay'
    boolean_T icLoad_g;                // '<S223>/x_Delay'
    boolean_T icLoad_o;                // '<S223>/slack_delay'
    boolean_T Memory_PreviousInput_g[226];// '<S189>/Memory'
    boolean_T Memory_PreviousInput_l[226];// '<S153>/Memory'
    boolean_T Memory_PreviousInput_n;  // '<S135>/Memory'
    DW_CurrentTime_proc_control_T CurrentTime_n;// '<S16>/Current Time'
    DW_CurrentTime_proc_control_T CurrentTime;// '<S16>/Current Time'
  };

  // Zero-crossing (trigger) state
  struct PrevZCX_proc_control_T {
    ZCSigState ResettableSubsystem_Reset_ZCE;// '<S323>/Resettable Subsystem'
  };

  // Parameters (default storage)
  struct P_proc_control_T {
    struct_PHAFHl5XyXX1OaeSBzWbKD physics;// Variable: physics
                                             //  Referenced by: '<S147>/MATLAB System'

    struct_x7JWpgYpPywnYpZFC6VmZH mode;// Variable: mode
                                          //  Referenced by: '<S94>/MATLAB System'

    struct_5kQRd2rVddDgwKJJmeP4xD sensors;// Variable: sensors
                                             //  Referenced by:
                                             //    '<S257>/VN Pos'
                                             //    '<S258>/ZED Pos'

    struct_Hf9190UGnfkO4yGDopBVwC simulink;// Variable: simulink
                                              //  Referenced by:
                                              //    '<S257>/SampleTime'
                                              //    '<S258>/SampleTime'

    real_T N[201];                     // Variable: N
                                          //  Referenced by:
                                          //    '<S26>/PWN to N'
                                          //    '<S144>/N to A'
                                          //    '<S144>/n-D Lookup Table1'
                                          //    '<S32>/N to RPM'

    real_T RPM[201];                   // Variable: RPM
                                          //  Referenced by: '<S32>/N to RPM'

    real_T binv[48];                   // Variable: binv
                                          //  Referenced by: '<S147>/MATLAB System'

    real_T dSeedX;                     // Variable: dSeedX
                                          //  Referenced by: '<S27>/Drift'

    real_T dmax[6];                    // Variable: dmax
                                          //  Referenced by: '<S27>/Drift'

    real_T dmin[6];                    // Variable: dmin
                                          //  Referenced by: '<S27>/Drift'

    real_T waveDiscreteFrequency[6];   // Variable: waveDiscreteFrequency
                                          //  Referenced by: '<S27>/Sine Wave'

    uint16_T A[201];                   // Variable: A
                                          //  Referenced by: '<S144>/N to A'

    uint16_T PWM[201];                 // Variable: PWM
                                          //  Referenced by:
                                          //    '<S26>/PWN to N'
                                          //    '<S144>/n-D Lookup Table1'

    real_T BandLimitedWhiteNoise_Cov;
                                    // Mask Parameter: BandLimitedWhiteNoise_Cov
                                       //  Referenced by: '<S43>/Output'

    real_T BandLimitedWhiteNoise1_Cov;
                                   // Mask Parameter: BandLimitedWhiteNoise1_Cov
                                      //  Referenced by: '<S44>/Output'

    real_T BandLimitedWhiteNoise2_Cov;
                                   // Mask Parameter: BandLimitedWhiteNoise2_Cov
                                      //  Referenced by: '<S45>/Output'

    real_T BandLimitedWhiteNoise3_Cov;
                                   // Mask Parameter: BandLimitedWhiteNoise3_Cov
                                      //  Referenced by: '<S46>/Output'

    real_T BandLimitedWhiteNoise4_Cov;
                                   // Mask Parameter: BandLimitedWhiteNoise4_Cov
                                      //  Referenced by: '<S47>/Output'

    real_T DiscreteDerivative_ICPrevScaled;
                              // Mask Parameter: DiscreteDerivative_ICPrevScaled
                                 //  Referenced by: '<S219>/UD'

    real_T DiscreteDerivative_ICPrevScal_j;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_j
                                 //  Referenced by: '<S296>/UD'

    real_T BandLimitedWhiteNoise_seed;
                                   // Mask Parameter: BandLimitedWhiteNoise_seed
                                      //  Referenced by: '<S43>/White Noise'

    real_T BandLimitedWhiteNoise1_seed;
                                  // Mask Parameter: BandLimitedWhiteNoise1_seed
                                     //  Referenced by: '<S44>/White Noise'

    real_T BandLimitedWhiteNoise2_seed;
                                  // Mask Parameter: BandLimitedWhiteNoise2_seed
                                     //  Referenced by: '<S45>/White Noise'

    real_T BandLimitedWhiteNoise3_seed;
                                  // Mask Parameter: BandLimitedWhiteNoise3_seed
                                     //  Referenced by: '<S46>/White Noise'

    real_T BandLimitedWhiteNoise4_seed;
                                  // Mask Parameter: BandLimitedWhiteNoise4_seed
                                     //  Referenced by: '<S47>/White Noise'

    real_T MinMaxRunningResettable_vinit;
                                // Mask Parameter: MinMaxRunningResettable_vinit
                                   //  Referenced by:
                                   //    '<S134>/Initial Condition'
                                   //    '<S134>/Memory'

    boolean_T MinMaxRunningResettable1_vinit;
                               // Mask Parameter: MinMaxRunningResettable1_vinit
                                  //  Referenced by:
                                  //    '<S135>/Initial Condition'
                                  //    '<S135>/Memory'

    boolean_T DetectRisePositive_vinit;
                                     // Mask Parameter: DetectRisePositive_vinit
                                        //  Referenced by: '<S325>/Delay Input1'

    SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint Out1_Y0;// Computed Parameter: Out1_Y0
                                                                   //  Referenced by: '<S333>/Out1'

    SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S332>/Constant'

    SL_Bus_std_msgs_Float64MultiArray Out1_Y0_n;// Computed Parameter: Out1_Y0_n
                                                   //  Referenced by: '<S248>/Out1'

    SL_Bus_std_msgs_Float64MultiArray Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                          //  Referenced by: '<S246>/Constant'

    SL_Bus_sonia_common_ros2_MpcInfo Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                         //  Referenced by: '<S24>/Constant'

    SL_Bus_sonia_common_ros2_MpcGains Out1_Y0_b;// Computed Parameter: Out1_Y0_b
                                                   //  Referenced by: '<S247>/Out1'

    SL_Bus_sonia_common_ros2_MpcGains Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                          //  Referenced by: '<S245>/Constant'

    SL_Bus_std_msgs_Int16MultiArray Constant_Value_c;// Computed Parameter: Constant_Value_c
                                                        //  Referenced by: '<S41>/Constant'

    mpcParams mpcParams_Y0;            // Computed Parameter: mpcParams_Y0
                                          //  Referenced by: '<S93>/mpcParams'

    SL_Bus_nav_msgs_Odometry Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                 //  Referenced by: '<S15>/Constant'

    SL_Bus_nav_msgs_Odometry Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                 //  Referenced by: '<S183>/Constant'

    physicsConstants physicsConstants_Y0;
                                      // Computed Parameter: physicsConstants_Y0
                                         //  Referenced by: '<S93>/physicsConstants'

    SL_Bus_sensor_msgs_Imu Constant_Value_e;// Computed Parameter: Constant_Value_e
                                               //  Referenced by: '<S88>/Constant'

    SL_Bus_sensor_msgs_Imu Out1_Y0_no; // Computed Parameter: Out1_Y0_no
                                          //  Referenced by: '<S139>/Out1'

    SL_Bus_sensor_msgs_Imu Constant_Value_i;// Computed Parameter: Constant_Value_i
                                               //  Referenced by: '<S136>/Constant'

    SL_Bus_sensor_msgs_Imu Out1_Y0_c;  // Computed Parameter: Out1_Y0_c
                                          //  Referenced by: '<S127>/Out1'

    SL_Bus_sensor_msgs_Imu Out1_Y0_c1; // Computed Parameter: Out1_Y0_c1
                                          //  Referenced by: '<S130>/Out1'

    SL_Bus_sensor_msgs_Imu Constant_Value_jf;// Computed Parameter: Constant_Value_jf
                                                //  Referenced by: '<S123>/Constant'

    SL_Bus_sensor_msgs_Imu Constant_Value_j5;// Computed Parameter: Constant_Value_j5
                                                //  Referenced by: '<S126>/Constant'

    struct_eJsqWOClzwG18rBvtrhWOG MPCparam_Y0;// Computed Parameter: MPCparam_Y0
                                                 //  Referenced by: '<S143>/MPC param'

    SL_Bus_sonia_common_ros2_BodyVelocityDVL Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                                 //  Referenced by: '<S84>/Constant'

    SL_Bus_sonia_common_ros2_BodyVelocityDVL Out1_Y0_p;// Computed Parameter: Out1_Y0_p
                                                          //  Referenced by: '<S140>/Out1'

    SL_Bus_sonia_common_ros2_BodyVelocityDVL Constant_Value_ep;// Computed Parameter: Constant_Value_ep
                                                                  //  Referenced by: '<S137>/Constant'

    SL_Bus_sonia_common_ros2_BodyVelocityDVL Out1_Y0_g;// Computed Parameter: Out1_Y0_g
                                                          //  Referenced by: '<S128>/Out1'

    SL_Bus_sonia_common_ros2_BodyVelocityDVL Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                                 //  Referenced by: '<S124>/Constant'

    struct_dhOFexlPAOq1XLxIBHN1J Output_Y0;// Computed Parameter: Output_Y0
                                              //  Referenced by: '<S1>/Output'

    struct_ovWlOQLLs0y1mSxaL5ZDmG SensorsOutput_Y0;// Computed Parameter: SensorsOutput_Y0
                                                      //  Referenced by: '<S3>/Sensors Output'

    struct_rlScCGcQggJ5TYrxrqGJfF CleanOutput_Y0;// Computed Parameter: CleanOutput_Y0
                                                    //  Referenced by: '<S3>/Clean Output'

    struct_rlScCGcQggJ5TYrxrqGJfF Out1_Y0_d;// Computed Parameter: Out1_Y0_d
                                               //  Referenced by: '<S5>/Out1'

    struct_Kmbmt8Jru1SjaG1rAQ9i3E SensorParams_Y0;// Computed Parameter: SensorParams_Y0
                                                     //  Referenced by: '<S93>/SensorParams'

    SL_Bus_sonia_common_ros2_Pose Out1_Y0_d0;// Computed Parameter: Out1_Y0_d0
                                                //  Referenced by: '<S340>/Out1'

    SL_Bus_sonia_common_ros2_Pose Constant_Value_f4;// Computed Parameter: Constant_Value_f4
                                                       //  Referenced by: '<S337>/Constant'

    SL_Bus_geometry_msgs_Pose Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                  //  Referenced by: '<S91>/Constant'

    SL_Bus_geometry_msgs_Pose Out1_Y0_a;// Computed Parameter: Out1_Y0_a
                                           //  Referenced by: '<S117>/Out1'

    SL_Bus_geometry_msgs_Pose Constant_Value_ja;// Computed Parameter: Constant_Value_ja
                                                   //  Referenced by: '<S111>/Constant'

    SL_Bus_geometry_msgs_Pose Constant_Value_o1;// Computed Parameter: Constant_Value_o1
                                                   //  Referenced by: '<S327>/Constant'

    struct_TOFpsJJYcOBczOpEd57stD DVLMeasurements_Y0;// Computed Parameter: DVLMeasurements_Y0
                                                        //  Referenced by: '<S251>/DVL Measurements'

    SL_Bus_geometry_msgs_Twist Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                            //  Referenced by: '<S331>/Out1'

    SL_Bus_geometry_msgs_Twist Constant_Value_oo;// Computed Parameter: Constant_Value_oo
                                                    //  Referenced by: '<S330>/Constant'

    SL_Bus_geometry_msgs_Vector3 Out1_Y0_j;// Computed Parameter: Out1_Y0_j
                                              //  Referenced by: '<S56>/Out1'

    SL_Bus_geometry_msgs_Vector3 Out1_Y0_p1;// Computed Parameter: Out1_Y0_p1
                                               //  Referenced by: '<S59>/Out1'

    SL_Bus_geometry_msgs_Vector3 Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                     //  Referenced by: '<S58>/Constant'

    SL_Bus_sonia_common_ros2_MotorPwm Constant_Value_ki;// Computed Parameter: Constant_Value_ki
                                                           //  Referenced by: '<S19>/Constant'

    SL_Bus_sonia_common_ros2_MotorPwm Constant_Value_mv;// Computed Parameter: Constant_Value_mv
                                                           //  Referenced by: '<S20>/Constant'

    SL_Bus_sonia_common_ros2_KillStatus Out1_Y0_o;// Computed Parameter: Out1_Y0_o
                                                     //  Referenced by: '<S118>/Out1'

    SL_Bus_sonia_common_ros2_KillStatus Constant_Value_eb;// Computed Parameter: Constant_Value_eb
                                                             //  Referenced by: '<S112>/Constant'

    SL_Bus_std_msgs_Bool Constant_Value_cc;// Computed Parameter: Constant_Value_cc
                                              //  Referenced by: '<S13>/Constant'

    SL_Bus_std_msgs_Bool Out1_Y0_dr;   // Computed Parameter: Out1_Y0_dr
                                          //  Referenced by: '<S114>/Out1'

    SL_Bus_std_msgs_Bool Out1_Y0_jx;   // Computed Parameter: Out1_Y0_jx
                                          //  Referenced by: '<S116>/Out1'

    SL_Bus_std_msgs_Bool Out1_Y0_e;    // Computed Parameter: Out1_Y0_e
                                          //  Referenced by: '<S119>/Out1'

    SL_Bus_std_msgs_Bool Constant_Value_oy;// Computed Parameter: Constant_Value_oy
                                              //  Referenced by: '<S110>/Constant'

    SL_Bus_std_msgs_Bool Constant_Value_oc;// Computed Parameter: Constant_Value_oc
                                              //  Referenced by: '<S113>/Constant'

    SL_Bus_std_msgs_Bool Constant_Value_ha;// Computed Parameter: Constant_Value_ha
                                              //  Referenced by: '<S108>/Constant'

    SL_Bus_std_msgs_Float32 Constant_Value_pf;// Computed Parameter: Constant_Value_pf
                                                 //  Referenced by: '<S86>/Constant'

    SL_Bus_std_msgs_Float32 Out1_Y0_oo;// Computed Parameter: Out1_Y0_oo
                                          //  Referenced by: '<S141>/Out1'

    SL_Bus_std_msgs_Float32 Constant_Value_dh;// Computed Parameter: Constant_Value_dh
                                                 //  Referenced by: '<S138>/Constant'

    SL_Bus_std_msgs_Float32 Out1_Y0_bc;// Computed Parameter: Out1_Y0_bc
                                          //  Referenced by: '<S129>/Out1'

    SL_Bus_std_msgs_Float32 Constant_Value_er;// Computed Parameter: Constant_Value_er
                                                 //  Referenced by: '<S125>/Constant'

    SL_Bus_std_msgs_UInt8 Out1_Y0_fy;  // Computed Parameter: Out1_Y0_fy
                                          //  Referenced by: '<S115>/Out1'

    SL_Bus_std_msgs_UInt8 Constant_Value_dx;// Computed Parameter: Constant_Value_dx
                                               //  Referenced by: '<S109>/Constant'

    real_T Constant_Value_gj;          // Expression: InsertTimeStamp
                                          //  Referenced by: '<S16>/Constant'

    real_T Constant1_Value;            // Expression: SetFrameID
                                          //  Referenced by: '<S16>/Constant1'

    real_T thrust_Y0;                  // Computed Parameter: thrust_Y0
                                          //  Referenced by: '<S2>/thrust'

    real_T Constant_Value_e2[120];     // Expression: zeros(1,120)
                                          //  Referenced by: '<S21>/Constant'

    real_T Constant1_Value_h[115];     // Expression: zeros(1,115)
                                          //  Referenced by: '<S21>/Constant1'

    real_T Constant3_Value[120];       // Expression: zeros(1,120)
                                          //  Referenced by: '<S21>/Constant3'

    real_T Constant4_Value[120];       // Expression: zeros(1,120)
                                          //  Referenced by: '<S21>/Constant4'

    real_T Constant1_Value_m;          // Expression: simulation.wave.damp.B
                                          //  Referenced by: '<S27>/Constant1'

    real_T Constant_Value_pr;          // Expression: simulation.wave.damp.A
                                          //  Referenced by: '<S27>/Constant'

    real_T Saturation_UpperSat;        // Expression: simulation.wave.damp.min
                                          //  Referenced by: '<S27>/Saturation'

    real_T Saturation_LowerSat;        // Expression: simulation.wave.damp.max
                                          //  Referenced by: '<S27>/Saturation'

    real_T Constant2_Value[6];         // Expression: zeros(1,6)
                                          //  Referenced by: '<S27>/Constant2'

    real_T DiscreteTransferFcn_NumCoef[2];// Expression: [physics.thruster.a1 0 ]
                                             //  Referenced by: '<S33>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_DenCoef[2];// Expression: [1  physics.thruster.b0]
                                             //  Referenced by: '<S33>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_InitialStat;// Expression: 0
                                              //  Referenced by: '<S33>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_NumCoef_e[2];// Expression: [physics.thruster.a1 0 ]
                                               //  Referenced by: '<S34>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_DenCoef_n[2];// Expression: [1  physics.thruster.b0]
                                               //  Referenced by: '<S34>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_InitialSt_j;// Expression: 0
                                              //  Referenced by: '<S34>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_NumCoef_h[2];// Expression: [physics.thruster.a1 0 ]
                                               //  Referenced by: '<S35>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_DenCoef_j[2];// Expression: [1  physics.thruster.b0]
                                               //  Referenced by: '<S35>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_InitialSt_d;// Expression: 0
                                              //  Referenced by: '<S35>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_NumCoef_a[2];// Expression: [physics.thruster.a1 0 ]
                                               //  Referenced by: '<S36>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_DenCoef_i[2];// Expression: [1  physics.thruster.b0]
                                               //  Referenced by: '<S36>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_InitialSt_e;// Expression: 0
                                              //  Referenced by: '<S36>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_NumCoef_k[2];// Expression: [physics.thruster.a1 0 ]
                                               //  Referenced by: '<S37>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_DenCoef_g[2];// Expression: [1  physics.thruster.b0]
                                               //  Referenced by: '<S37>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_InitialSt_c;// Expression: 0
                                              //  Referenced by: '<S37>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_NumCoef_kp[2];// Expression: [physics.thruster.a1 0 ]
                                                //  Referenced by: '<S38>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_DenCoef_b[2];// Expression: [1  physics.thruster.b0]
                                               //  Referenced by: '<S38>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_InitialSt_f;// Expression: 0
                                              //  Referenced by: '<S38>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_NumCoef_ke[2];// Expression: [physics.thruster.a1 0 ]
                                                //  Referenced by: '<S39>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_DenCoef_c[2];// Expression: [1  physics.thruster.b0]
                                               //  Referenced by: '<S39>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_InitialSt_g;// Expression: 0
                                              //  Referenced by: '<S39>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_NumCoef_j[2];// Expression: [physics.thruster.a1 0 ]
                                               //  Referenced by: '<S40>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_DenCoef_ig[2];// Expression: [1  physics.thruster.b0]
                                                //  Referenced by: '<S40>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_InitialS_ft;// Expression: 0
                                              //  Referenced by: '<S40>/Discrete Transfer Fcn'

    real_T SineWave_Amp[6];            // Expression: simulation.wave.amplitudes
                                          //  Referenced by: '<S27>/Sine Wave'

    real_T SineWave_Bias;              // Expression: 0
                                          //  Referenced by: '<S27>/Sine Wave'

    real_T SineWave_Offset[6];         // Expression: waveDiscretePhase
                                          //  Referenced by: '<S27>/Sine Wave'

    real_T UnitDelay_InitialCondition[13];// Expression: MPC.Xi
                                             //  Referenced by: '<S3>/Unit Delay'

    real_T Switch_Threshold;           // Expression: 0
                                          //  Referenced by: '<S27>/Switch'

    real_T Constant_Value_j2[2];       // Expression: [0,0]
                                          //  Referenced by: '<S30>/Constant'

    real_T DiscreteTimeIntegrator_gainval;
                           // Computed Parameter: DiscreteTimeIntegrator_gainval
                              //  Referenced by: '<S3>/Discrete-Time Integrator'

    real_T DiscreteTimeIntegrator1_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainval
                             //  Referenced by: '<S3>/Discrete-Time Integrator1'

    real_T InitialBodyVelocity_Value[3];// Expression: [0,0,0]
                                           //  Referenced by: '<S3>/Initial Body Velocity'

    real_T DiscreteTimeIntegrator2_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator2_gainval
                             //  Referenced by: '<S3>/Discrete-Time Integrator2'

    real_T InitialAngularRates_Value[3];// Expression: [0,0,0]
                                           //  Referenced by: '<S3>/Initial Angular Rates'

    real_T DiscreteTimeIntegrator3_gainval;
                          // Computed Parameter: DiscreteTimeIntegrator3_gainval
                             //  Referenced by: '<S3>/Discrete-Time Integrator3'

    real_T WhiteNoise_Mean;            // Expression: 0
                                          //  Referenced by: '<S43>/White Noise'

    real_T WhiteNoise_StdDev;          // Computed Parameter: WhiteNoise_StdDev
                                          //  Referenced by: '<S43>/White Noise'

    real_T WhiteNoise_Mean_j;          // Expression: 0
                                          //  Referenced by: '<S44>/White Noise'

    real_T WhiteNoise_StdDev_i;       // Computed Parameter: WhiteNoise_StdDev_i
                                         //  Referenced by: '<S44>/White Noise'

    real_T WhiteNoise_Mean_n;          // Expression: 0
                                          //  Referenced by: '<S45>/White Noise'

    real_T WhiteNoise_StdDev_a;       // Computed Parameter: WhiteNoise_StdDev_a
                                         //  Referenced by: '<S45>/White Noise'

    real_T WhiteNoise_Mean_g;          // Expression: 0
                                          //  Referenced by: '<S46>/White Noise'

    real_T WhiteNoise_StdDev_e;       // Computed Parameter: WhiteNoise_StdDev_e
                                         //  Referenced by: '<S46>/White Noise'

    real_T WhiteNoise_Mean_p;          // Expression: 0
                                          //  Referenced by: '<S47>/White Noise'

    real_T WhiteNoise_StdDev_l;       // Computed Parameter: WhiteNoise_StdDev_l
                                         //  Referenced by: '<S47>/White Noise'

    real_T Constant_Value_a[3];   // Expression: simulation.sensors.imu.acc.bias
                                     //  Referenced by: '<S29>/Constant'

    real_T Gain_Gain;                  // Expression: 2
                                          //  Referenced by: '<S65>/Gain'

    real_T Gain1_Gain;                 // Expression: 2
                                          //  Referenced by: '<S65>/Gain1'

    real_T Constant_Value_a5;          // Expression: 0.5
                                          //  Referenced by: '<S65>/Constant'

    real_T Gain2_Gain;                 // Expression: 2
                                          //  Referenced by: '<S65>/Gain2'

    real_T u2_Gain;                    // Expression: 0.5
                                          //  Referenced by: '<S55>/1//2'

    real_T Constant_Value_pj;          // Expression: 0.5
                                          //  Referenced by: '<S69>/Constant'

    real_T Gain2_Gain_l;               // Expression: 2
                                          //  Referenced by: '<S69>/Gain2'

    real_T Gain_Gain_k;                // Expression: 2
                                          //  Referenced by: '<S69>/Gain'

    real_T Gain1_Gain_f;               // Expression: 2
                                          //  Referenced by: '<S69>/Gain1'

    real_T Gain_Gain_p;                // Expression: 2
                                          //  Referenced by: '<S70>/Gain'

    real_T Constant_Value_oi;          // Expression: 0.5
                                          //  Referenced by: '<S70>/Constant'

    real_T Gain2_Gain_c;               // Expression: 2
                                          //  Referenced by: '<S70>/Gain2'

    real_T Gain1_Gain_c;               // Expression: 2
                                          //  Referenced by: '<S70>/Gain1'

    real_T Gain_Gain_o;                // Expression: 2
                                          //  Referenced by: '<S71>/Gain'

    real_T Gain1_Gain_b;               // Expression: 2
                                          //  Referenced by: '<S71>/Gain1'

    real_T Constant_Value_mg;          // Expression: 0.5
                                          //  Referenced by: '<S71>/Constant'

    real_T Gain2_Gain_j;               // Expression: 2
                                          //  Referenced by: '<S71>/Gain2'

    real_T Gain_Gain_h;       // Expression: simulation.sensors.depth.resolution
                                 //  Referenced by: '<S29>/Gain'

    real_T Gain1_Gain_h;        // Expression: simulation.sensors.dvl.resolution
                                   //  Referenced by: '<S29>/Gain1'

    real_T Gain3_Gain;                 // Expression: -1
                                          //  Referenced by: '<S48>/Gain3'

    real_T Constant_Value_b;           // Expression: 0.5
                                          //  Referenced by: '<S75>/Constant'

    real_T Gain_Gain_pe;               // Expression: 2
                                          //  Referenced by: '<S75>/Gain'

    real_T Gain1_Gain_g;               // Expression: 2
                                          //  Referenced by: '<S75>/Gain1'

    real_T Gain2_Gain_a;               // Expression: 2
                                          //  Referenced by: '<S75>/Gain2'

    real_T Constant_Value_l;           // Expression: 0.5
                                          //  Referenced by: '<S76>/Constant'

    real_T Gain_Gain_e;                // Expression: 2
                                          //  Referenced by: '<S76>/Gain'

    real_T Gain1_Gain_e;               // Expression: 2
                                          //  Referenced by: '<S76>/Gain1'

    real_T Gain2_Gain_h;               // Expression: 2
                                          //  Referenced by: '<S76>/Gain2'

    real_T Constant_Value_iu;          // Expression: 0.5
                                          //  Referenced by: '<S77>/Constant'

    real_T Gain_Gain_f;                // Expression: 2
                                          //  Referenced by: '<S77>/Gain'

    real_T Gain1_Gain_hs;              // Expression: 2
                                          //  Referenced by: '<S77>/Gain1'

    real_T Gain2_Gain_e;               // Expression: 2
                                          //  Referenced by: '<S77>/Gain2'

    real_T Constant_Value_dg;          // Expression: InsertTimeStamp
                                          //  Referenced by: '<S89>/Constant'

    real_T Constant1_Value_e;          // Expression: SetFrameID
                                          //  Referenced by: '<S89>/Constant1'

    real_T y_Y0;                       // Computed Parameter: y_Y0
                                          //  Referenced by: '<S121>/y'

    real_T Constant_Value_aw;          // Expression: 0
                                          //  Referenced by: '<S121>/Constant'

    real_T Constant1_Value_i;          // Expression: 0
                                          //  Referenced by: '<S121>/Constant1'

    real_T Constant_Value_dk;          // Expression: 1
                                          //  Referenced by: '<S7>/Constant'

    real_T Constant_Value_lq;          // Expression: InsertTimeStamp
                                          //  Referenced by: '<S184>/Constant'

    real_T Constant1_Value_l;          // Expression: SetFrameID
                                          //  Referenced by: '<S184>/Constant1'

    real_T Delay_InitialCondition[8];  // Expression: zeros(MPC.nu,1)
                                          //  Referenced by: '<S145>/Delay'

    real_T E_zero_Value[8];            // Expression: zeros(1,8)
                                          //  Referenced by: '<S150>/E_zero'

    real_T F_zero_Value[13];           // Expression: zeros(1,13)
                                          //  Referenced by: '<S150>/F_zero'

    real_T G_zero_Value;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S150>/G_zero'

    real_T Constant_Value_aa;          // Computed Parameter: Constant_Value_aa
                                          //  Referenced by: '<S153>/Constant'

    real_T LastPcov_InitialCondition[441];// Expression: lastPcov
                                             //  Referenced by: '<S153>/LastPcov'

    real_T extmv_zero_Value[8];        // Expression: zeros(8,1)
                                          //  Referenced by: '<S150>/ext.mv_zero'

    real_T extmv_scale_Gain[8];        // Expression: RMVscale
                                          //  Referenced by: '<S153>/ext.mv_scale'

    real_T last_mv_InitialCondition[8];// Expression: lastu+uoff
                                          //  Referenced by: '<S153>/last_mv'

    real_T Constant_Value_o1x[6];      // Expression: zeros(1,6)
                                          //  Referenced by: '<S145>/Constant'

    real_T Constant1_Value_g[2];       // Expression: zeros(1,2)
                                          //  Referenced by: '<S145>/Constant1'

    real_T ym_zero_Value[13];          // Expression: zeros(nym,1)
                                          //  Referenced by: '<S153>/ym_zero'

    real_T md_zero_Value;              // Expression: zeros(1,1)
                                          //  Referenced by: '<S150>/md_zero'

    real_T ymin_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S150>/ymin_zero'

    real_T ymax_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S150>/ymax_zero'

    real_T umin_scale4_Gain[8];    // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S153>/umin_scale4'

    real_T ymin_scale1_Gain[13];    // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S153>/ymin_scale1'

    real_T S_zero_Value;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S150>/S_zero'

    real_T ymin_scale2_Gain;       // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S153>/ymin_scale2'

    real_T switch_zero_Value;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S150>/switch_zero'

    real_T mvtarget_zero_Value[8];     // Expression: zeros(8,1)
                                          //  Referenced by: '<S150>/mv.target_zero'

    real_T uref_scale_Gain[8];         // Expression: RMVscale
                                          //  Referenced by: '<S153>/uref_scale'

    real_T ecrwt_zero_Value;           // Expression: zeros(1,1)
                                          //  Referenced by: '<S150>/ecr.wt_zero'

    real_T u_scale_Gain[8];            // Expression: MVscale
                                          //  Referenced by: '<S153>/u_scale'

    real_T PulseGenerator_Amp;         // Expression: 1
                                          //  Referenced by: '<S145>/Pulse Generator'

    real_T PulseGenerator_Period;      // Expression: 2
                                          //  Referenced by: '<S145>/Pulse Generator'

    real_T PulseGenerator_Duty;        // Expression: 1
                                          //  Referenced by: '<S145>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay;  // Expression: 0
                                          //  Referenced by: '<S145>/Pulse Generator'

    real_T MATLABSystem_k;             // Expression: 40
                                          //  Referenced by: '<S147>/MATLAB System'

    real_T Constant1_Value_g0;         // Expression: 0
                                          //  Referenced by: '<S147>/Constant1'

    real_T TSamp_WtEt;                 // Computed Parameter: TSamp_WtEt
                                          //  Referenced by: '<S219>/TSamp'

    real_T E_zero_Value_a[8];          // Expression: zeros(1,8)
                                          //  Referenced by: '<S186>/E_zero'

    real_T F_zero_Value_h[13];         // Expression: zeros(1,13)
                                          //  Referenced by: '<S186>/F_zero'

    real_T G_zero_Value_l;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S186>/G_zero'

    real_T LastPcov_InitialCondition_l[441];// Expression: lastPcov
                                               //  Referenced by: '<S189>/LastPcov'

    real_T extmv_zero_Value_i[8];      // Expression: zeros(8,1)
                                          //  Referenced by: '<S186>/ext.mv_zero'

    real_T extmv_scale_Gain_m[8];      // Expression: RMVscale
                                          //  Referenced by: '<S189>/ext.mv_scale'

    real_T last_mv_InitialCondition_k[8];// Expression: lastu+uoff
                                            //  Referenced by: '<S189>/last_mv'

    real_T Constant2_Value_p[8];       // Expression: zeros(1,8)
                                          //  Referenced by: '<S146>/Constant2'

    real_T ym_zero_Value_a[13];        // Expression: zeros(nym,1)
                                          //  Referenced by: '<S189>/ym_zero'

    real_T md_zero_Value_l;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S186>/md_zero'

    real_T ymin_zero_Value_e[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S186>/ymin_zero'

    real_T ymax_zero_Value_d[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S186>/ymax_zero'

    real_T umin_scale4_Gain_f[8];  // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S189>/umin_scale4'

    real_T ymin_scale1_Gain_p[13];  // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S189>/ymin_scale1'

    real_T S_zero_Value_m;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S186>/S_zero'

    real_T ymin_scale2_Gain_h;     // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S189>/ymin_scale2'

    real_T switch_zero_Value_m;        // Expression: zeros(1,1)
                                          //  Referenced by: '<S186>/switch_zero'

    real_T mvtarget_zero_Value_c[8];   // Expression: zeros(8,1)
                                          //  Referenced by: '<S186>/mv.target_zero'

    real_T uref_scale_Gain_f[8];       // Expression: RMVscale
                                          //  Referenced by: '<S189>/uref_scale'

    real_T ecrwt_zero_Value_o;         // Expression: zeros(1,1)
                                          //  Referenced by: '<S186>/ecr.wt_zero'

    real_T Delay1_InitialCondition[88];// Expression: zeros(11,8)
                                          //  Referenced by: '<S146>/Delay1'

    real_T Delay_InitialCondition_g[143];// Expression: repmat(MPC.Xi.',11,1)
                                            //  Referenced by: '<S146>/Delay'

    real_T Constant_Value_ce;          // Expression: MPC.Ts
                                          //  Referenced by: '<S146>/Constant'

    real_T Constant1_Value_gt;         // Expression: MPC.dts
                                          //  Referenced by: '<S146>/Constant1'

    real_T u_scale_Gain_o[8];          // Expression: MVscale
                                          //  Referenced by: '<S189>/u_scale'

    real_T useq_scale_Gain[88];        // Expression: MVscale(:,ones(1,p+1))'
                                          //  Referenced by: '<S189>/useq_scale'

    real_T useq_scale1_Gain[143];      // Expression: Yscale(:,ones(1,p+1))'
                                          //  Referenced by: '<S189>/useq_scale1'

    real_T PulseGenerator_Amp_a;       // Expression: 1
                                          //  Referenced by: '<S146>/Pulse Generator'

    real_T PulseGenerator_Period_d;    // Expression: 2
                                          //  Referenced by: '<S146>/Pulse Generator'

    real_T PulseGenerator_Duty_l;      // Expression: 1
                                          //  Referenced by: '<S146>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay_l;// Expression: 0
                                          //  Referenced by: '<S146>/Pulse Generator'

    real_T Delay_InitialCondition_a[8];// Expression: zeros(MPC.nu,1)
                                          //  Referenced by: '<S149>/Delay'

    real_T md_zero_Value_j;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S221>/md_zero'

    real_T mvtarget_zero_Value_f[8];   // Expression: zeros(8,1)
                                          //  Referenced by: '<S221>/mv.target_zero'

    real_T ymin_zero_Value_b[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S221>/y.min_zero'

    real_T ymax_zero_Value_e[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S221>/y.max_zero'

    real_T dmvmin_zero_Value[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S221>/dmv.min_zero'

    real_T dmvmax_zero_Value[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S221>/dmv.max_zero'

    real_T xmin_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S221>/x.min_zero'

    real_T xmax_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S221>/x.max_zero'

    real_T ecrwt_zero_Value_b;         // Expression: zeros(1,1)
                                          //  Referenced by: '<S221>/ecr.wt_zero'

    real_T params_zero_Value;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S221>/params_zero'

    real_T ones_Value[11];            // Expression: ones(PredictionHorizon+1,1)
                                         //  Referenced by: '<S223>/ones'

    real_T Constant1_Value_iz[9];      // Expression: 2:max(2,PredictionHorizon)
                                          //  Referenced by: '<S223>/Constant1'

    real_T Constant_Value_ld[9];
                 // Expression: min(3,PredictionHorizon+1):(PredictionHorizon+1)
                    //  Referenced by: '<S223>/Constant'

    real_T einit_zero_Value;           // Expression: zeros(1,1)
                                          //  Referenced by: '<S221>/e.init_zero'

    real_T PulseGenerator_Amp_n;       // Expression: 1
                                          //  Referenced by: '<S149>/Pulse Generator'

    real_T PulseGenerator_Period_f;    // Expression: 20
                                          //  Referenced by: '<S149>/Pulse Generator'

    real_T PulseGenerator_Duty_c;      // Expression: 10
                                          //  Referenced by: '<S149>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay_l5;// Expression: 0
                                           //  Referenced by: '<S149>/Pulse Generator'

    real_T Constant_Value_g3[8];       // Expression: zeros(1,MPC.nu)
                                          //  Referenced by: '<S148>/Constant'

    real_T Constant2_Value_n;          // Expression: 0
                                          //  Referenced by: '<S148>/Constant2'

    real_T Merge_1_InitialOutput;   // Computed Parameter: Merge_1_InitialOutput
                                       //  Referenced by: '<S142>/Merge'

    real_T Merge_3_InitialOutput;   // Computed Parameter: Merge_3_InitialOutput
                                       //  Referenced by: '<S142>/Merge'

    real_T Delay_InitialCondition_c;   // Expression: 0.0
                                          //  Referenced by: '<S144>/Delay'

    real_T Quat_Y0;                    // Computed Parameter: Quat_Y0
                                          //  Referenced by: '<S288>/Quat'

    real_T u2_Gain_l;                  // Expression: 0.5
                                          //  Referenced by: '<S289>/1//2'

    real_T Constant_Value_iv;// Expression: simulation.sensors.dvl.maxSpeedThres
                                //  Referenced by: '<S251>/Constant'

    real_T Constant_Value_ll;          // Expression: 0
                                          //  Referenced by: '<S285>/Constant'

    real_T Delay_InitialCondition_f;   // Expression: 1
                                          //  Referenced by: '<S285>/Delay'

    real_T Constant_Value_or;          // Expression: 0.5
                                          //  Referenced by: '<S291>/Constant'

    real_T Gain_Gain_g;                // Expression: 2
                                          //  Referenced by: '<S291>/Gain'

    real_T Gain1_Gain_o;               // Expression: 2
                                          //  Referenced by: '<S291>/Gain1'

    real_T Gain2_Gain_n;               // Expression: 2
                                          //  Referenced by: '<S291>/Gain2'

    real_T Constant_Value_mz;          // Expression: 0.5
                                          //  Referenced by: '<S292>/Constant'

    real_T Gain_Gain_gs;               // Expression: 2
                                          //  Referenced by: '<S292>/Gain'

    real_T Gain1_Gain_j;               // Expression: 2
                                          //  Referenced by: '<S292>/Gain1'

    real_T Gain2_Gain_j4;              // Expression: 2
                                          //  Referenced by: '<S292>/Gain2'

    real_T Constant_Value_j5z;         // Expression: 0.5
                                          //  Referenced by: '<S293>/Constant'

    real_T Gain_Gain_ew;               // Expression: 2
                                          //  Referenced by: '<S293>/Gain'

    real_T Gain1_Gain_ex;              // Expression: 2
                                          //  Referenced by: '<S293>/Gain1'

    real_T Gain2_Gain_hu;              // Expression: 2
                                          //  Referenced by: '<S293>/Gain2'

    real_T DepthMeasurements_Y0;     // Computed Parameter: DepthMeasurements_Y0
                                        //  Referenced by: '<S252>/Depth Measurements'

    real_T Gain_Gain_c;                // Expression: 2
                                          //  Referenced by: '<S301>/Gain'

    real_T Gain1_Gain_p;               // Expression: 2
                                          //  Referenced by: '<S301>/Gain1'

    real_T Constant_Value_bc;          // Expression: 0.5
                                          //  Referenced by: '<S301>/Constant'

    real_T Gain2_Gain_eu;              // Expression: 2
                                          //  Referenced by: '<S301>/Gain2'

    real_T TSamp_WtEt_g;               // Computed Parameter: TSamp_WtEt_g
                                          //  Referenced by: '<S296>/TSamp'

    real_T DiscreteTransferFcn_NumCoef_ed[2];// Expression: [physics.thruster.a1 0 ]
                                                //  Referenced by: '<S252>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_DenCoef_nf[2];// Expression: [1  physics.thruster.b0]
                                                //  Referenced by: '<S252>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_InitialS_e1;// Expression: 0
                                              //  Referenced by: '<S252>/Discrete Transfer Fcn'

    real_T Constant_Value_fv;          // Expression: 1
                                          //  Referenced by: '<S305>/Constant'

    real_T Switch_Threshold_k;         // Expression: 0
                                          //  Referenced by: '<S305>/Switch'

    real_T Constant1_Value_h4;         // Expression: 0
                                          //  Referenced by: '<S305>/Constant1'

    real_T xhat_Y0;                    // Computed Parameter: xhat_Y0
                                          //  Referenced by: '<S253>/xhat'

    real_T Q_Value[169];               // Expression: p.Q
                                          //  Referenced by: '<S304>/Q'

    real_T R4_Value[9];                // Expression: p.R{4}
                                          //  Referenced by: '<S304>/R4'

    real_T MeasurementFcn4Inputs_Value;// Expression: 1
                                          //  Referenced by: '<S304>/MeasurementFcn4Inputs'

    real_T R3_Value[4];                // Expression: p.R{3}
                                          //  Referenced by: '<S304>/R3'

    real_T MeasurementFcn3Inputs_Value;// Expression: 1
                                          //  Referenced by: '<S304>/MeasurementFcn3Inputs'

    real_T R2_Value[25];               // Expression: p.R{2}
                                          //  Referenced by: '<S304>/R2'

    real_T MeasurementFcn2Inputs_Value;// Expression: 1
                                          //  Referenced by: '<S304>/MeasurementFcn2Inputs'

    real_T R1_Value[81];               // Expression: p.R{1}
                                          //  Referenced by: '<S304>/R1'

    real_T MeasurementFcn1Inputs_Value;// Expression: 0
                                          //  Referenced by: '<S304>/MeasurementFcn1Inputs'

    real_T DataStoreMemoryP_InitialValue[169];// Expression: p.InitialCovariance
                                                 //  Referenced by: '<S304>/DataStoreMemory - P'

    real_T DataStoreMemoryx_InitialValue[13];// Expression: p.InitialState
                                                //  Referenced by: '<S304>/DataStoreMemory - x'

    real_T Constant_Value_l4[7];       // Expression: [0 0 0 1 0 0 0]
                                          //  Referenced by: '<S320>/Constant'

    real_T Constant1_Value_hu;         // Expression: MPC.p
                                          //  Referenced by: '<S320>/Constant1'

    real_T Out1_Y0_j3;                 // Computed Parameter: Out1_Y0_j3
                                          //  Referenced by: '<S334>/Out1'

    real_T MATLABSystem1_linearConvergence;// Expression: .25
                                              //  Referenced by: '<S323>/MATLAB System1'

    real_T MATLABSystem1_quaternionConverg;// Expression: .22
                                              //  Referenced by: '<S323>/MATLAB System1'

    real_T MATLABSystem1_TargetThreshold;// Expression: 2
                                            //  Referenced by: '<S323>/MATLAB System1'

    real_T linWpts_Y0;                 // Computed Parameter: linWpts_Y0
                                          //  Referenced by: '<S335>/linWpts'

    real_T RotWpts_Y0;                 // Computed Parameter: RotWpts_Y0
                                          //  Referenced by: '<S335>/RotWpts'

    real_T time_Y0;                    // Computed Parameter: time_Y0
                                          //  Referenced by: '<S335>/time'

    real_T target_Y0;                  // Computed Parameter: target_Y0
                                          //  Referenced by: '<S335>/target'

    real_T Constant_Value_j55;         // Expression: 0
                                          //  Referenced by: '<S335>/Constant'

    real_T PolynomialTrajectory_VelocityBo[6];// Expression: zeros( 3, 2 )
                                                 //  Referenced by: '<S339>/Polynomial Trajectory'

    real_T Constant_Value_ht;          // Expression: 1
                                          //  Referenced by: '<S336>/Constant'

    real_T DiscreteTimeIntegrator_gainva_g;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_g
                             //  Referenced by: '<S336>/Discrete-Time Integrator'

    real_T DiscreteTimeIntegrator_IC;  // Expression: 0
                                          //  Referenced by: '<S336>/Discrete-Time Integrator'

    real_T Constant_Value_ao;          // Expression: 0
                                          //  Referenced by: '<S323>/Constant'

    real_T Constant_Value_mt[13];   // Expression: [0,0,0.3,1,0,0,0,0,0,0,0,0,0]
                                       //  Referenced by: '<S316>/Constant'

    real_T Constant1_Value_p;          // Expression: MPC.p
                                          //  Referenced by: '<S316>/Constant1'

    real_T Delay_InitialCondition_at;  // Expression: 0
                                          //  Referenced by: '<S94>/Delay'

    real_T Constant_Value_pz;          // Expression: 0
                                          //  Referenced by: '<Root>/Constant'

    real_T Delay_InitialCondition_fy[8];// Expression: [0,0,0,0,0,0,0,0]
                                           //  Referenced by: '<S255>/Delay'

    real_T Constant_Value_lu;          // Expression: 0.5
                                          //  Referenced by: '<S271>/Constant'

    real_T Gain2_Gain_co;              // Expression: 2
                                          //  Referenced by: '<S271>/Gain2'

    real_T Gain_Gain_k2;               // Expression: 2
                                          //  Referenced by: '<S271>/Gain'

    real_T Gain1_Gain_o0;              // Expression: 2
                                          //  Referenced by: '<S271>/Gain1'

    real_T Gain_Gain_p4;               // Expression: 2
                                          //  Referenced by: '<S272>/Gain'

    real_T Constant_Value_fb;          // Expression: 0.5
                                          //  Referenced by: '<S272>/Constant'

    real_T Gain2_Gain_g;               // Expression: 2
                                          //  Referenced by: '<S272>/Gain2'

    real_T Gain1_Gain_f1;              // Expression: 2
                                          //  Referenced by: '<S272>/Gain1'

    real_T Gain_Gain_d;                // Expression: 2
                                          //  Referenced by: '<S273>/Gain'

    real_T Gain1_Gain_n;               // Expression: 2
                                          //  Referenced by: '<S273>/Gain1'

    real_T Constant_Value_if;          // Expression: 0.5
                                          //  Referenced by: '<S273>/Constant'

    real_T Gain2_Gain_ap;              // Expression: 2
                                          //  Referenced by: '<S273>/Gain2'

    real_T DiscreteTimeIntegrator_gainva_n;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_n
                             //  Referenced by: '<S257>/Discrete-Time Integrator'

    real_T DiscreteTimeIntegrator_IC_k;// Expression: 0
                                          //  Referenced by: '<S257>/Discrete-Time Integrator'

    real_T Constant_Value_kx;          // Expression: 0.5
                                          //  Referenced by: '<S280>/Constant'

    real_T Gain2_Gain_a0;              // Expression: 2
                                          //  Referenced by: '<S280>/Gain2'

    real_T Gain_Gain_m;                // Expression: 2
                                          //  Referenced by: '<S280>/Gain'

    real_T Gain1_Gain_fr;              // Expression: 2
                                          //  Referenced by: '<S280>/Gain1'

    real_T Gain_Gain_j;                // Expression: 2
                                          //  Referenced by: '<S281>/Gain'

    real_T Constant_Value_b3;          // Expression: 0.5
                                          //  Referenced by: '<S281>/Constant'

    real_T Gain2_Gain_b;               // Expression: 2
                                          //  Referenced by: '<S281>/Gain2'

    real_T Gain1_Gain_d;               // Expression: 2
                                          //  Referenced by: '<S281>/Gain1'

    real_T Gain_Gain_ka;               // Expression: 2
                                          //  Referenced by: '<S282>/Gain'

    real_T Gain1_Gain_g3;              // Expression: 2
                                          //  Referenced by: '<S282>/Gain1'

    real_T Constant_Value_jt;          // Expression: 0.5
                                          //  Referenced by: '<S282>/Constant'

    real_T Gain2_Gain_n4;              // Expression: 2
                                          //  Referenced by: '<S282>/Gain2'

    real_T Multiply_Gain[3];           // Expression: [1 -1 -1]
                                          //  Referenced by: '<S258>/Multiply'

    real_T Multiply1_Gain[3];          // Expression: [1 -1 -1]
                                          //  Referenced by: '<S258>/Multiply1'

    real_T DiscreteTimeIntegrator_gainva_m;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_m
                             //  Referenced by: '<S258>/Discrete-Time Integrator'

    real_T DiscreteTimeIntegrator_IC_o;// Expression: 0
                                          //  Referenced by: '<S258>/Discrete-Time Integrator'

    real_T Delay_InitialCondition_fl;  // Expression: 0
                                          //  Referenced by: '<S7>/Delay'

    real_T Gain_Gain_er;               // Expression: -1
                                          //  Referenced by: '<S321>/Gain'

    real_T Merge_1_InitialOutput_i;
                                  // Computed Parameter: Merge_1_InitialOutput_i
                                     //  Referenced by: '<S10>/Merge'

    real_T Merge_4_InitialOutput;   // Computed Parameter: Merge_4_InitialOutput
                                       //  Referenced by: '<S10>/Merge'

    std::string StringConstant1_String;// Expression: FrameID
                                          //  Referenced by: '<S16>/String Constant1'

    std::string StringConstant1_String_f;// Expression: FrameID
                                            //  Referenced by: '<S89>/String Constant1'

    std::string StringConstant1_String_j;// Expression: FrameID
                                            //  Referenced by: '<S184>/String Constant1'

    int32_T FixedHorizonOptimizer_Ndis;// Expression: Ndis
                                          //  Referenced by: '<S217>/FixedHorizonOptimizer'

    uint32_T Constant2_Value_l;        // Expression: uint32(MPC.nu)
                                          //  Referenced by: '<S21>/Constant2'

    uint32_T Constant5_Value;          // Expression: uint32(MPC.nx)
                                          //  Referenced by: '<S21>/Constant5'

    uint32_T Constant6_Value;          // Expression: uint32(MPC.nu)
                                          //  Referenced by: '<S21>/Constant6'

    uint32_T Constant7_Value;          // Expression: uint32(MPC.nu)
                                          //  Referenced by: '<S21>/Constant7'

    uint32_T Constant_Value_of;        // Expression: uint32(8)
                                          //  Referenced by: '<S32>/Constant'

    int16_T Constant1_Value_b[120];    // Expression: int16(zeros(1,120))
                                          //  Referenced by: '<S32>/Constant1'

    uint16_T mv_Y0;                    // Computed Parameter: mv_Y0
                                          //  Referenced by: '<S2>/mv'

    uint16_T Delay_InitialCondition_e[8];
                                 // Computed Parameter: Delay_InitialCondition_e
                                    //  Referenced by: '<S8>/Delay'

    boolean_T imu2new_Y0;              // Computed Parameter: imu2new_Y0
                                          //  Referenced by: '<S120>/imu2 new'

    boolean_T Memory_InitialCondition[226];// Expression: iA
                                              //  Referenced by: '<S153>/Memory'

    boolean_T Memory_InitialCondition_n[226];// Expression: iA
                                                //  Referenced by: '<S189>/Memory'

    boolean_T yBlockOrdering_Y0;       // Computed Parameter: yBlockOrdering_Y0
                                          //  Referenced by: '<S306>/yBlockOrdering'

    boolean_T yBlockOrdering_Y0_l;    // Computed Parameter: yBlockOrdering_Y0_l
                                         //  Referenced by: '<S307>/yBlockOrdering'

    boolean_T yBlockOrdering_Y0_h;    // Computed Parameter: yBlockOrdering_Y0_h
                                         //  Referenced by: '<S308>/yBlockOrdering'

    boolean_T yBlockOrdering_Y0_e;    // Computed Parameter: yBlockOrdering_Y0_e
                                         //  Referenced by: '<S309>/yBlockOrdering'

    boolean_T BlockOrdering_Value;     // Expression: true()
                                          //  Referenced by: '<S304>/BlockOrdering'

    boolean_T Enable1_Value;           // Expression: true()
                                          //  Referenced by: '<S304>/Enable1'

    boolean_T Enable2_Value;           // Expression: true()
                                          //  Referenced by: '<S304>/Enable2'

    boolean_T Enable3_Value;           // Expression: true()
                                          //  Referenced by: '<S304>/Enable3'

    boolean_T Constant2_Value_h;       // Expression: false
                                          //  Referenced by: '<S320>/Constant2'

    boolean_T Constant3_Value_i;       // Expression: false
                                          //  Referenced by: '<S320>/Constant3'

    boolean_T Constant_Value_pl;       // Computed Parameter: Constant_Value_pl
                                          //  Referenced by: '<S326>/Constant'

    boolean_T Delay_InitialCondition_az;
                                // Computed Parameter: Delay_InitialCondition_az
                                   //  Referenced by: '<S323>/Delay'

    boolean_T Constant1_Value_is;      // Expression: false
                                          //  Referenced by: '<S323>/Constant1'

    boolean_T Constant2_Value_a;       // Expression: false
                                          //  Referenced by: '<S316>/Constant2'

    boolean_T Constant3_Value_n;       // Expression: false
                                          //  Referenced by: '<S316>/Constant3'

    boolean_T Merge_2_InitialOutput;// Computed Parameter: Merge_2_InitialOutput
                                       //  Referenced by: '<S10>/Merge'

    boolean_T Merge_3_InitialOutput_i;
                                  // Computed Parameter: Merge_3_InitialOutput_i
                                     //  Referenced by: '<S10>/Merge'

    int8_T Constant_Value_m0;          // Expression: int8(0)
                                          //  Referenced by: '<S147>/Constant'

    int8_T Constant1_Value_j;          // Expression: int8(0)
                                          //  Referenced by: '<S148>/Constant1'

    int8_T Merge_2_InitialOutput_i;
                                  // Computed Parameter: Merge_2_InitialOutput_i
                                     //  Referenced by: '<S142>/Merge'

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
        uint16_T TID[6];
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

  // private member function(s) for subsystem '<S16>/Current Time'
  static void proc_control_CurrentTime_Init(DW_CurrentTime_proc_control_T
    *localDW);
  void proc_control_CurrentTime(B_CurrentTime_proc_control_T *localB);
  static void proc_control_CurrentTime_Term(DW_CurrentTime_proc_control_T
    *localDW);

  // private member function(s) for subsystem '<S257>/MATLAB Function1'
  static void proc_control_MATLABFunction1(const real_T rtu_lin_accel[3], const
    real_T rtu_thresh[3], real_T rty_corr_lin_accel[3]);

  // private member function(s) for subsystem '<Root>'
  real_T proc_control_xnrm2_pr(int32_T n, const real_T x[198], int32_T ix0);
  real_T proc_control_rt_hypotd_snf(real_T u0, real_T u1);
  void proc_control_qr(const real_T A[198], real_T Q[198], real_T R[81]);
  void proc_control_trisolve_p(const real_T A[81], real_T B[117]);
  void proc_control_trisolve_pr(const real_T A[81], real_T B[117]);
  real_T proc_control_xnrm2_pr3(int32_T n, const real_T x[286], int32_T ix0);
  void proc_control_qr_p(const real_T A[286], real_T Q[286], real_T R[169]);
  real_T proc_control_xnrm2_pr35(int32_T n, const real_T x[90], int32_T ix0);
  void proc_control_qr_pr(const real_T A[90], real_T Q[90], real_T R[25]);
  void proc_control_trisolve_pr3(const real_T A[25], real_T B[65]);
  void proc_control_trisolve_pr35(const real_T A[25], real_T B[65]);
  real_T proc_control_xnrm2_pr351(int32_T n, const real_T x[234], int32_T ix0);
  void proc_control_qr_pr3(const real_T A[234], real_T Q[234], real_T R[169]);
  real_T proc_control_xnrm2_pr351e(int32_T n, const real_T x[30], int32_T ix0);
  void proc_control_qr_pr35(const real_T A[30], real_T Q[30], real_T R[4]);
  void proc_control_trisolve_pr351(const real_T A[4], real_T B[26]);
  void proc_control_trisolve_pr351e(const real_T A[4], real_T B[26]);
  real_T proc_control_xnrm2_pr351ew(int32_T n, const real_T x[195], int32_T ix0);
  void proc_control_qr_pr351(const real_T A[195], real_T Q[195], real_T R[169]);
  real_T proc_control_xnrm2_pr351ewp(int32_T n, const real_T x[48], int32_T ix0);
  void proc_control_qr_pr351e(const real_T A[48], real_T Q[48], real_T R[9]);
  void proc_control_trisolve_pr351ew(const real_T A[9], real_T B[39]);
  void proc_control_trisolve_pr351ewp(const real_T A[9], real_T B[39]);
  real_T proc_control_xnrm2_pr351ewpk(int32_T n, const real_T x[208], int32_T
    ix0);
  void proc_control_qr_pr351ew(const real_T A[208], real_T Q[208], real_T R[169]);
  void proc_control_mldivide_pr35(const real_T A[36], real_T B[48]);
  real_T proc_control_rt_powd_snf(real_T u0, real_T u1);
  real_T proc_control_erf(real_T x);
  void proc_control_ft_3(const real_T ct[1016], real_T out1[13]);
  void proc_control_ft_2(const real_T ct[812], real_T out1[13]);
  void proc_control_ft_1(const real_T ct[445], real_T out1[13]);
  void proc_con_AUVQuatPerturbedSimFcn(const real_T in1[13], const real_T in2[6],
    const real_T in4[38], real_T out1[13]);
  void proc_control_EkfNavStatesEq(real_T x[13], const real_T inputs[95]);
  real_T proc_control_xnrm2_pr351ewpk3(int32_T n, const real_T x[338], int32_T
    ix0);
  void proc_control_qr_pr351ewp(const real_T A[338], real_T Q[338], real_T R[169]);
  void pr_ProcPlannerManager_resetImpl(ProcPlannerManager_proc_contr_T *b_this);
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
  void proc_control_quaternionBase_log(real_T q_a, real_T q_b, real_T q_c,
    real_T q_d, real_T *b_q_a, real_T *b_q_b, real_T *b_q_c, real_T *b_q_d);
  void proc_contro_RotTrajSys_stepImpl(real_T evalTime, const real_T varargin_1
    [4], const real_T varargin_2[4], const real_T varargin_3[2], real_T R[4],
    real_T omega[3], real_T alpha[3]);
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
  void proc_control_mldivide_pr351(const real_T A[36], real_T B[48]);
  void proc_control_quatmultiply(const real_T q[4], const real_T r[4], real_T
    qout[4]);
  void proc_control_ft_6(const real_T ct[2166], real_T Anq[169]);
  void proc_control_ft_5(const real_T ct[1959], real_T Anq[169]);
  void proc_control_ft_4(const real_T ct[1640], real_T Anq[169]);
  void proc_control_ft_3_p(const real_T ct[1260], real_T Anq[169]);
  void proc_control_ft_2_p(const real_T ct[805], real_T Anq[169]);
  void proc_control_ft_1_p(const real_T ct[433], real_T Anq[169]);
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
  void proc_control_mldivide_pr351e(const real_T A[36], real_T B[36]);
  void proc_control_ft_3_pr(const real_T ct[1016], real_T out1[13]);
  void proc_control_ft_2_pr(const real_T ct[804], real_T out1[13]);
  void proc_control_ft_1_pr(const real_T ct[435], real_T out1[13]);
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
  void proc_control_WtMult(const real_T W[8], const real_T M_data[], const
    int32_T M_size[2], real_T WM_data[], int32_T WM_size[2]);
  void proc_control_mtimes_a(const real_T b_A_data[], const int32_T b_A_size[2],
    const real_T b_B_data[], const int32_T b_B_size[2], real_T b_C_data[],
    int32_T b_C_size[2]);
  void proc_control_binary_expand_op_1(real_T in1_data[], int32_T in1_size[2],
    const real_T in2_data[], const int32_T in2_size[2], const real_T in3_data[],
    const int32_T in3_size[2], const real_T in4_data[], const int32_T in4_size[2],
    const real_T in5[8], const real_T in6_data[], const int32_T in6_size[2],
    const real_T in7_data[], const int32_T in7_size[2]);
  void proc_control_mtimes_af(const real_T b_A_data[], const int32_T b_A_size[2],
    const real_T b_B_data[], const int32_T b_B_size[2], real_T b_C_data[],
    int32_T b_C_size[2]);
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
  void proc_control_mtimes_afa(const coder::array<real_T, 2U> &b_A, const real_T
    b_B[21], coder::array<real_T, 1U> &b_C);
  void proc_control_mtimes_afai(const coder::array<real_T, 2U> &b_A, const
    real_T b_B[8], coder::array<real_T, 1U> &b_C);
  void proc_control_mtimes_afai0(const coder::array<real_T, 2U> &b_A, const
    coder::array<real_T, 1U> &b_B, coder::array<real_T, 1U> &b_C);
  void proc_control_binary_expand_op_5(coder::array<real_T, 1U> &in1, const
    coder::array<real_T, 1U> &in2, const coder::array<real_T, 2U> &in3, const
    real_T in4[21], const coder::array<real_T, 2U> &in5, const real_T in6[8],
    const coder::array<real_T, 2U> &in7, const coder::array<real_T, 1U> &in8);
  real_T proc_control_norm(const real_T x_data[], const int32_T x_size[1]);
  void proc_control_binary_expand_op_3(real_T in1_data[], int32_T in1_size[2],
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
  void proc_control_mpower_YOI12Z2i(const real_T a[169], real_T b, real_T c[169]);
  void proc_padeApproximation_Qbpaua2E(const real_T A[169], const real_T A2[169],
    const real_T A4[169], const real_T A6[169], int32_T m, real_T F[169]);
  void pro_recomputeBlockDiag_GI8hdgJN(const real_T A[169], real_T F[169], const
    int32_T blockFormat[12]);
  real_T proc_control_xnrm2_gjjcOr5M(int32_T n, const real_T x[169], int32_T ix0);
  void proc_control_xzsyhetrd_Fl8IXuj6(real_T A[169], real_T D[13], real_T E[12],
    real_T tau[12]);
  void proc_control_xzlascl_Nlhd5GaE(real_T cfrom, real_T cto, int32_T m, real_T
    A[13], int32_T iA0);
  void proc_control_xzlascl_01CBiMMh(real_T cfrom, real_T cto, int32_T m, real_T
    A[12], int32_T iA0);
  void proc_contr_rotateRight_ppseAKEY(int32_T n, real_T z[169], int32_T iz0,
    const real_T cs[24], int32_T ic0, int32_T is0);
  void proc_control_xdlaev2_vjOFz6O2(real_T a, real_T b, real_T c, real_T *rt1,
    real_T *rt2, real_T *cs1, real_T *sn1);
  void proc_contr_rotateRight_lMfCUnsH(int32_T n, real_T z[169], int32_T iz0,
    const real_T cs[24], int32_T ic0, int32_T is0);
  int32_T proc_control_xzsteqr_j8DfaNbg(real_T d[13], real_T e[12], real_T z[169]);
  void proc_control_xsyheev_DufRbymR(real_T A[169], int32_T *info, real_T W[13]);
  void proc_control_expm_DLwntlxY(real_T A[169], real_T F[169]);
  void proc_contro_mldivide_Bh63yZKV_b(const real_T A[36], real_T B[36]);
  void proc_co_AUV8QuatSimFcn_NbyAPIEY(const real_T in1[13], const real_T in2[8],
    real_T out1[13]);
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
  int32_T proc_control_xpotrf_GAY9CXNB(real_T b_A[81]);
  void proc_control_trisolve_welyRBjd(const real_T b_A[81], real_T b_B[81]);
  real_T proc_control_norm_BbqFfIVW(const real_T x[9]);
  real_T proc_control_xnrm2_S1qYOusv(int32_T n, const real_T x[81], int32_T ix0);
  void proc_control_xgemv_zYrlt8Jf(int32_T b_m, int32_T n, const real_T b_A[81],
    int32_T ia0, const real_T x[81], int32_T ix0, real_T y[9]);
  void proc_control_xgerc_vcdhhgKg(int32_T b_m, int32_T n, real_T alpha1,
    int32_T ix0, const real_T y[9], real_T b_A[81], int32_T ia0);
  void proc_contro_KWIKfactor_hQlwCp0D(const real_T b_Ac[2034], const int32_T
    iC[226], int32_T nA, const real_T b_Linv[81], real_T b_D[81], real_T b_H[81],
    int32_T n, real_T RLinv[81], real_T *Status);
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
  void proc_control_mtimes_e(const real_T A_data[], const int32_T A_size[2],
    real_T C_data[], int32_T C_size[2]);
  void proc_control_getUBounds(const real_T runtimedata_lastMV[8], const real_T
    runtimedata_MVMin[80], const real_T runtimedata_MVMax[80], const real_T
    runtimedata_MVRateMin[80], const real_T runtimedata_MVRateMax[80], real_T
    A_data[], int32_T A_size[2], real_T Bu_data[], int32_T Bu_size[1]);
  void proc_control_getXUe_B5bFgDId(const real_T z[139], const real_T x[13],
    real_T X[143], real_T U[88], real_T *e);
  void AUV8QuatJacobianMatrix_BCzctS_g(const real_T in1[13], real_T Anqv[169]);
  void proc_co_stateEvolution_rCe9GJXz(const real_T X[143], const real_T U[88],
    real_T c[130], real_T J[18070]);
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
  void proc_control_xrotg_QLPrMQ5c(real_T *a, real_T *b, real_T *c, real_T *s);
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
  void proc_co_stateEvolution_xoOgQHOe(const real_T X[143], const real_T U[88],
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
    x[139], real_T *fval, real_T *exitflag, real_T *output_iterations, real_T
    *output_funcCount, char_T output_algorithm[3], real_T
    *output_constrviolation, real_T *output_stepsize, real_T
    *output_lssteplength, real_T *output_firstorderopt);
  void proc_control_rand(real_T r[3]);
  void pr_Subscriber_setupImpl_pr351ew(const ros_slros2_internal_block_Sub_T
    *obj);
  void p_Subscriber_setupImpl_pr351ewp(const ros_slros2_internal_block_Sub_T
    *obj);
  void Subscriber_setupImpl_pr351ewpk(const ros_slros2_internal_block_Sub_T *obj);
  void Subscriber_setupImpl_pr351ewpk3(const ros_slros2_internal_block_Sub_T
    *obj);
  void Subscriber_setupImp_pr351ewpk3k(const ros_slros2_internal_block_Sub_T
    *obj);
  void Subscriber_setupIm_pr351ewpk3k4(const ros_slros2_internal_block_Sub_T
    *obj);
  void Subscriber_setupI_pr351ewpk3k4u(const ros_slros2_internal_block_Sub_T
    *obj);
  void pr_ROS2PubSubBase_setQOSProfile(rmw_qos_profile_t rmwProfile, real_T
    qosDepth, real_T qosDeadline, real_T qosLifespan, real_T qosLeaseDuration,
    boolean_T qosAvoidROSNamespaceConventions);
  void proc_contro_Publisher_setupImpl(const ros_slros2_internal_block_Pub_T
    *obj);
  void proc_cont_PolyTrajSys_setupImpl(robotics_slcore_internal_bl_p_T *obj);
  void proc_con_Subscriber_setupImpl_k(const ros_slros2_internal_block_Sub_T
    *obj);
  void Subscriber_setup_pr351ewpk3k4u0(const ros_slros2_internal_block_Sub_T
    *obj);
  void Subscriber_setu_pr351ewpk3k4u0o(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_cont_Publisher_setupImpl_p(const ros_slros2_internal_block_Pub_T
    *obj);
  void proc_con_Publisher_setupImpl_pr(const ros_slros2_internal_block_Pub_T
    *obj);
  void proc_co_Publisher_setupImpl_pr3(const ros_slros2_internal_block_Pub_T
    *obj);
  void proc_c_Publisher_setupImpl_pr35(const ros_slros2_internal_block_Pub_T
    *obj);
  void proc_contr_Subscriber_setupImpl(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc__Publisher_setupImpl_pr351(const ros_slros2_internal_block_Pub_T
    *obj);
  void p_Publisher_setupImpl_pr351ewpk(const ros_slros2_internal_block_Pub_T
    *obj);
  void proc_Publisher_setupImpl_pr351e(const ros_slros2_internal_block_Pub_T
    *obj);
  void pro_Publisher_setupImpl_pr351ew(const ros_slros2_internal_block_Pub_T
    *obj);
  void pr_Publisher_setupImpl_pr351ewp(const ros_slros2_internal_block_Pub_T
    *obj);
  void proc_co_Subscriber_setupImpl_pr(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_c_Subscriber_setupImpl_pr3(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_Subscriber_setupImpl_pr351(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc__Subscriber_setupImpl_pr35(const ros_slros2_internal_block_Sub_T
    *obj);
  void pro_Subscriber_setupImpl_pr351e(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_con_Subscriber_setupImpl_p(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_con_Subscriber_setupImpl_n(const ros_slros2_internal_block_Sub_T
    *obj);
  void proc_con_Subscriber_setupImpl_g(const ros_slros2_internal_block_Sub_T
    *obj);
  void Publisher_setupImpl_pr351ewpk3(const ros_slros2_internal_block_Pub_T *obj);

  // Real-Time Model
  RT_MODEL_proc_control_T proc_control_M;
};

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S3>/Scope' : Unused code path elimination
//  Block '<S3>/Scope1' : Unused code path elimination
//  Block '<S63>/Constant' : Unused code path elimination
//  Block '<S63>/Gain' : Unused code path elimination
//  Block '<S63>/Gain1' : Unused code path elimination
//  Block '<S63>/Gain2' : Unused code path elimination
//  Block '<S63>/Product' : Unused code path elimination
//  Block '<S63>/Product1' : Unused code path elimination
//  Block '<S63>/Product2' : Unused code path elimination
//  Block '<S63>/Product3' : Unused code path elimination
//  Block '<S63>/Product4' : Unused code path elimination
//  Block '<S63>/Product5' : Unused code path elimination
//  Block '<S63>/Product6' : Unused code path elimination
//  Block '<S63>/Product7' : Unused code path elimination
//  Block '<S63>/Product8' : Unused code path elimination
//  Block '<S63>/Sum' : Unused code path elimination
//  Block '<S63>/Sum1' : Unused code path elimination
//  Block '<S63>/Sum2' : Unused code path elimination
//  Block '<S63>/Sum3' : Unused code path elimination
//  Block '<S64>/Constant' : Unused code path elimination
//  Block '<S64>/Gain' : Unused code path elimination
//  Block '<S64>/Gain1' : Unused code path elimination
//  Block '<S64>/Gain2' : Unused code path elimination
//  Block '<S64>/Product' : Unused code path elimination
//  Block '<S64>/Product1' : Unused code path elimination
//  Block '<S64>/Product2' : Unused code path elimination
//  Block '<S64>/Product3' : Unused code path elimination
//  Block '<S64>/Product4' : Unused code path elimination
//  Block '<S64>/Product5' : Unused code path elimination
//  Block '<S64>/Product6' : Unused code path elimination
//  Block '<S64>/Product7' : Unused code path elimination
//  Block '<S64>/Product8' : Unused code path elimination
//  Block '<S64>/Sum' : Unused code path elimination
//  Block '<S64>/Sum1' : Unused code path elimination
//  Block '<S64>/Sum2' : Unused code path elimination
//  Block '<S64>/Sum3' : Unused code path elimination
//  Block '<S4>/Scope' : Unused code path elimination
//  Block '<S4>/Scope1' : Unused code path elimination
//  Block '<S4>/Scope2' : Unused code path elimination
//  Block '<S4>/Scope3' : Unused code path elimination
//  Block '<S132>/Data Type Duplicate' : Unused code path elimination
//  Block '<S134>/FixPt Data Type Duplicate2' : Unused code path elimination
//  Block '<S133>/Data Type Duplicate' : Unused code path elimination
//  Block '<S135>/FixPt Data Type Duplicate2' : Unused code path elimination
//  Block '<S142>/Display' : Unused code path elimination
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
//  Block '<S166>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S167>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S168>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S169>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S170>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S171>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S172>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S173>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S174>/Vector Dimension Check' : Unused code path elimination
//  Block '<S175>/Vector Dimension Check' : Unused code path elimination
//  Block '<S176>/Vector Dimension Check' : Unused code path elimination
//  Block '<S177>/Vector Dimension Check' : Unused code path elimination
//  Block '<S178>/Vector Dimension Check' : Unused code path elimination
//  Block '<S179>/Vector Dimension Check' : Unused code path elimination
//  Block '<S153>/last_x' : Unused code path elimination
//  Block '<S180>/Vector Dimension Check' : Unused code path elimination
//  Block '<S153>/useq_scale' : Unused code path elimination
//  Block '<S153>/useq_scale1' : Unused code path elimination
//  Block '<S189>/Constant' : Unused code path elimination
//  Block '<S189>/Floor' : Unused code path elimination
//  Block '<S189>/Floor1' : Unused code path elimination
//  Block '<S190>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S191>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S192>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S193>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S194>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S195>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S196>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S197>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S198>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S199>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S200>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S201>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S202>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S203>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S204>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S205>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S206>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S207>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S208>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S209>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S210>/Vector Dimension Check' : Unused code path elimination
//  Block '<S211>/Vector Dimension Check' : Unused code path elimination
//  Block '<S212>/Vector Dimension Check' : Unused code path elimination
//  Block '<S213>/Vector Dimension Check' : Unused code path elimination
//  Block '<S214>/Vector Dimension Check' : Unused code path elimination
//  Block '<S215>/Vector Dimension Check' : Unused code path elimination
//  Block '<S189>/Min' : Unused code path elimination
//  Block '<S189>/last_x' : Unused code path elimination
//  Block '<S216>/Vector Dimension Check' : Unused code path elimination
//  Block '<S186>/m_zero' : Unused code path elimination
//  Block '<S186>/p_zero' : Unused code path elimination
//  Block '<S219>/Data Type Duplicate' : Unused code path elimination
//  Block '<S224>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S225>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S226>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S227>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S228>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S229>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S230>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S231>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S232>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S233>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S234>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S235>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S236>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S237>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S238>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S239>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S240>/Vector Dimension Check' : Unused code path elimination
//  Block '<S241>/Vector Dimension Check' : Unused code path elimination
//  Block '<S242>/Vector Dimension Check' : Unused code path elimination
//  Block '<S243>/Vector Dimension Check' : Unused code path elimination
//  Block '<S221>/mv.init_zero' : Unused code path elimination
//  Block '<S221>/x.init_zero' : Unused code path elimination
//  Block '<S249>/Data Type Duplicate' : Unused code path elimination
//  Block '<S249>/Data Type Propagation' : Unused code path elimination
//  Block '<S251>/Scope' : Unused code path elimination
//  Block '<S296>/Data Type Duplicate' : Unused code path elimination
//  Block '<S299>/Constant' : Unused code path elimination
//  Block '<S299>/Gain' : Unused code path elimination
//  Block '<S299>/Gain1' : Unused code path elimination
//  Block '<S299>/Gain2' : Unused code path elimination
//  Block '<S299>/Product' : Unused code path elimination
//  Block '<S299>/Product1' : Unused code path elimination
//  Block '<S299>/Product2' : Unused code path elimination
//  Block '<S299>/Product3' : Unused code path elimination
//  Block '<S299>/Product4' : Unused code path elimination
//  Block '<S299>/Product5' : Unused code path elimination
//  Block '<S299>/Product6' : Unused code path elimination
//  Block '<S299>/Product7' : Unused code path elimination
//  Block '<S299>/Product8' : Unused code path elimination
//  Block '<S299>/Sum' : Unused code path elimination
//  Block '<S299>/Sum1' : Unused code path elimination
//  Block '<S299>/Sum2' : Unused code path elimination
//  Block '<S299>/Sum3' : Unused code path elimination
//  Block '<S300>/Constant' : Unused code path elimination
//  Block '<S300>/Gain' : Unused code path elimination
//  Block '<S300>/Gain1' : Unused code path elimination
//  Block '<S300>/Gain2' : Unused code path elimination
//  Block '<S300>/Product' : Unused code path elimination
//  Block '<S300>/Product1' : Unused code path elimination
//  Block '<S300>/Product2' : Unused code path elimination
//  Block '<S300>/Product3' : Unused code path elimination
//  Block '<S300>/Product4' : Unused code path elimination
//  Block '<S300>/Product5' : Unused code path elimination
//  Block '<S300>/Product6' : Unused code path elimination
//  Block '<S300>/Product7' : Unused code path elimination
//  Block '<S300>/Product8' : Unused code path elimination
//  Block '<S300>/Sum' : Unused code path elimination
//  Block '<S300>/Sum1' : Unused code path elimination
//  Block '<S300>/Sum2' : Unused code path elimination
//  Block '<S300>/Sum3' : Unused code path elimination
//  Block '<S253>/Display' : Unused code path elimination
//  Block '<S304>/checkMeasurementFcn1Signals' : Unused code path elimination
//  Block '<S304>/checkMeasurementFcn2Signals' : Unused code path elimination
//  Block '<S304>/checkMeasurementFcn3Signals' : Unused code path elimination
//  Block '<S304>/checkMeasurementFcn4Signals' : Unused code path elimination
//  Block '<S304>/checkStateTransitionFcnSignals' : Unused code path elimination
//  Block '<S255>/Display' : Unused code path elimination
//  Block '<S256>/Scope' : Unused code path elimination
//  Block '<S256>/Scope1' : Unused code path elimination
//  Block '<S256>/Scope2' : Unused code path elimination
//  Block '<S256>/Scope3' : Unused code path elimination
//  Block '<S317>/Matrix Concatenate' : Unused code path elimination
//  Block '<S317>/Scope' : Unused code path elimination
//  Block '<S317>/Scope1' : Unused code path elimination
//  Block '<S317>/Scope2' : Unused code path elimination
//  Block '<S317>/Scope3' : Unused code path elimination
//  Block '<S317>/Selector' : Unused code path elimination
//  Block '<S317>/Selector1' : Unused code path elimination
//  Block '<S317>/Selector2' : Unused code path elimination
//  Block '<S317>/Selector3' : Unused code path elimination
//  Block '<S317>/Selector4' : Unused code path elimination
//  Block '<S317>/Sum' : Unused code path elimination
//  Block '<S317>/e angular rates' : Unused code path elimination
//  Block '<S317>/e position' : Unused code path elimination
//  Block '<S317>/e quaternion' : Unused code path elimination
//  Block '<S317>/e velocity' : Unused code path elimination
//  Block '<S321>/Scope' : Unused code path elimination
//  Block '<S335>/Display' : Unused code path elimination
//  Block '<S335>/Selector3' : Unused code path elimination
//  Block '<S323>/Scope' : Unused code path elimination
//  Block '<S338>/Constant1' : Unused code path elimination
//  Block '<S338>/Constant2' : Unused code path elimination
//  Block '<S338>/Constant3' : Unused code path elimination
//  Block '<S338>/Constant4' : Unused code path elimination
//  Block '<S338>/Constant5' : Unused code path elimination
//  Block '<S338>/Constant6' : Unused code path elimination
//  Block '<S338>/Frame' : Unused code path elimination
//  Block '<S338>/fine' : Unused code path elimination
//  Block '<S338>/speed' : Unused code path elimination
//  Block '<S338>/speed1' : Unused code path elimination
//  Block '<S81>/Zero-Order Hold' : Eliminated since input and output rates are identical
//  Block '<S7>/Zero-Order Hold' : Eliminated since input and output rates are identical
//  Block '<S153>/Reshape' : Reshape block reduction
//  Block '<S153>/Reshape1' : Reshape block reduction
//  Block '<S153>/Reshape2' : Reshape block reduction
//  Block '<S153>/Reshape3' : Reshape block reduction
//  Block '<S153>/Reshape4' : Reshape block reduction
//  Block '<S153>/Reshape5' : Reshape block reduction
//  Block '<S189>/Reshape' : Reshape block reduction
//  Block '<S189>/Reshape1' : Reshape block reduction
//  Block '<S189>/Reshape2' : Reshape block reduction
//  Block '<S189>/Reshape3' : Reshape block reduction
//  Block '<S189>/Reshape4' : Reshape block reduction
//  Block '<S189>/Reshape5' : Reshape block reduction
//  Block '<S222>/Reshape1' : Reshape block reduction
//  Block '<S222>/mo or x Conversion' : Eliminate redundant data type conversion
//  Block '<S222>/mo or x Conversion10' : Eliminate redundant data type conversion
//  Block '<S222>/mo or x Conversion11' : Eliminate redundant data type conversion
//  Block '<S222>/mo or x Conversion12' : Eliminate redundant data type conversion
//  Block '<S222>/mo or x Conversion13' : Eliminate redundant data type conversion
//  Block '<S222>/mo or x Conversion14' : Eliminate redundant data type conversion
//  Block '<S222>/mo or x Conversion15' : Eliminate redundant data type conversion
//  Block '<S222>/mo or x Conversion16' : Eliminate redundant data type conversion
//  Block '<S222>/mo or x Conversion17' : Eliminate redundant data type conversion
//  Block '<S222>/mo or x Conversion18' : Eliminate redundant data type conversion
//  Block '<S222>/mo or x Conversion19' : Eliminate redundant data type conversion
//  Block '<S222>/mo or x Conversion2' : Eliminate redundant data type conversion
//  Block '<S222>/mo or x Conversion3' : Eliminate redundant data type conversion
//  Block '<S222>/mo or x Conversion4' : Eliminate redundant data type conversion
//  Block '<S222>/mo or x Conversion5' : Eliminate redundant data type conversion
//  Block '<S222>/mo or x Conversion6' : Eliminate redundant data type conversion
//  Block '<S222>/mo or x Conversion7' : Eliminate redundant data type conversion
//  Block '<S222>/mo or x Conversion8' : Eliminate redundant data type conversion
//  Block '<S222>/mo or x Conversion9' : Eliminate redundant data type conversion
//  Block '<S223>/reshape_mv' : Reshape block reduction
//  Block '<S304>/DataTypeConversion_Enable1' : Eliminate redundant data type conversion
//  Block '<S304>/DataTypeConversion_Enable2' : Eliminate redundant data type conversion
//  Block '<S304>/DataTypeConversion_Enable3' : Eliminate redundant data type conversion
//  Block '<S304>/DataTypeConversion_Q' : Eliminate redundant data type conversion
//  Block '<S304>/DataTypeConversion_R1' : Eliminate redundant data type conversion
//  Block '<S304>/DataTypeConversion_R2' : Eliminate redundant data type conversion
//  Block '<S304>/DataTypeConversion_R3' : Eliminate redundant data type conversion
//  Block '<S304>/DataTypeConversion_R4' : Eliminate redundant data type conversion
//  Block '<S304>/DataTypeConversion_uMeas1' : Eliminate redundant data type conversion
//  Block '<S304>/DataTypeConversion_uMeas2' : Eliminate redundant data type conversion
//  Block '<S304>/DataTypeConversion_uMeas3' : Eliminate redundant data type conversion
//  Block '<S304>/DataTypeConversion_uMeas4' : Eliminate redundant data type conversion
//  Block '<S304>/DataTypeConversion_y1' : Eliminate redundant data type conversion
//  Block '<S304>/DataTypeConversion_y2' : Eliminate redundant data type conversion
//  Block '<S304>/DataTypeConversion_y3' : Eliminate redundant data type conversion
//  Block '<S304>/DataTypeConversion_y4' : Eliminate redundant data type conversion
//  Block '<S305>/Zero-Order Hold' : Eliminated since input and output rates are identical
//  Block '<S253>/Zero-Order Hold1' : Eliminated since input and output rates are identical
//  Block '<S255>/Reshape' : Reshape block reduction


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
//  '<S3>'   : 'proc_control/Model System'
//  '<S4>'   : 'proc_control/Plot Values'
//  '<S5>'   : 'proc_control/ROS Output'
//  '<S6>'   : 'proc_control/Ros Command'
//  '<S7>'   : 'proc_control/Sensors Input'
//  '<S8>'   : 'proc_control/Subsystem Controller'
//  '<S9>'   : 'proc_control/Subsystem ProcNav'
//  '<S10>'  : 'proc_control/Subsystem Trajectory'
//  '<S11>'  : 'proc_control/Enabled Subsystem/Send Sensor On'
//  '<S12>'  : 'proc_control/Enabled Subsystem/Send auv states'
//  '<S13>'  : 'proc_control/Enabled Subsystem/Send Sensor On/Blank Message'
//  '<S14>'  : 'proc_control/Enabled Subsystem/Send Sensor On/proc_control sensor_on'
//  '<S15>'  : 'proc_control/Enabled Subsystem/Send auv states/Blank Message'
//  '<S16>'  : 'proc_control/Enabled Subsystem/Send auv states/Header Assignment'
//  '<S17>'  : 'proc_control/Enabled Subsystem/Send auv states/bus2mux'
//  '<S18>'  : 'proc_control/Enabled Subsystem/Send auv states/proc_nav auv_states'
//  '<S19>'  : 'proc_control/Enabled Subsystem1/Blank Message'
//  '<S20>'  : 'proc_control/Enabled Subsystem1/Blank Message1'
//  '<S21>'  : 'proc_control/Enabled Subsystem1/Subsystem'
//  '<S22>'  : 'proc_control/Enabled Subsystem1/provider_thruster thruster_pwm'
//  '<S23>'  : 'proc_control/Enabled Subsystem1/telemetry thruster_newton'
//  '<S24>'  : 'proc_control/Enabled Subsystem1/Subsystem/Blank Message'
//  '<S25>'  : 'proc_control/Enabled Subsystem1/Subsystem/proc_control controller_info'
//  '<S26>'  : 'proc_control/Model System/Modele Thruster (Approximation)'
//  '<S27>'  : 'proc_control/Model System/Pertubations (Vague)'
//  '<S28>'  : 'proc_control/Model System/Quaternion Normalise'
//  '<S29>'  : 'proc_control/Model System/Sensor Model'
//  '<S30>'  : 'proc_control/Model System/Subsystem'
//  '<S31>'  : 'proc_control/Model System/Modele Thruster (Approximation)/MATLAB Function'
//  '<S32>'  : 'proc_control/Model System/Modele Thruster (Approximation)/Send RPM to unity'
//  '<S33>'  : 'proc_control/Model System/Modele Thruster (Approximation)/T1'
//  '<S34>'  : 'proc_control/Model System/Modele Thruster (Approximation)/T2'
//  '<S35>'  : 'proc_control/Model System/Modele Thruster (Approximation)/T3'
//  '<S36>'  : 'proc_control/Model System/Modele Thruster (Approximation)/T4'
//  '<S37>'  : 'proc_control/Model System/Modele Thruster (Approximation)/T5'
//  '<S38>'  : 'proc_control/Model System/Modele Thruster (Approximation)/T6'
//  '<S39>'  : 'proc_control/Model System/Modele Thruster (Approximation)/T7'
//  '<S40>'  : 'proc_control/Model System/Modele Thruster (Approximation)/T8'
//  '<S41>'  : 'proc_control/Model System/Modele Thruster (Approximation)/Send RPM to unity/Blank Message'
//  '<S42>'  : 'proc_control/Model System/Modele Thruster (Approximation)/Send RPM to unity/Publish'
//  '<S43>'  : 'proc_control/Model System/Sensor Model/Band-Limited White Noise'
//  '<S44>'  : 'proc_control/Model System/Sensor Model/Band-Limited White Noise1'
//  '<S45>'  : 'proc_control/Model System/Sensor Model/Band-Limited White Noise2'
//  '<S46>'  : 'proc_control/Model System/Sensor Model/Band-Limited White Noise3'
//  '<S47>'  : 'proc_control/Model System/Sensor Model/Band-Limited White Noise4'
//  '<S48>'  : 'proc_control/Model System/Sensor Model/Hydrophones Model'
//  '<S49>'  : 'proc_control/Model System/Sensor Model/MATLAB Function'
//  '<S50>'  : 'proc_control/Model System/Sensor Model/Quaternion Conjugate'
//  '<S51>'  : 'proc_control/Model System/Sensor Model/Quaternion Inverse'
//  '<S52>'  : 'proc_control/Model System/Sensor Model/Quaternion Rotation'
//  '<S53>'  : 'proc_control/Model System/Sensor Model/Quaternion Rotation1'
//  '<S54>'  : 'proc_control/Model System/Sensor Model/Quaternion Rotation2'
//  '<S55>'  : 'proc_control/Model System/Sensor Model/Rotation Angles to Quaternions'
//  '<S56>'  : 'proc_control/Model System/Sensor Model/Hydrophones Model/If Action Subsystem'
//  '<S57>'  : 'proc_control/Model System/Sensor Model/Hydrophones Model/Publish'
//  '<S58>'  : 'proc_control/Model System/Sensor Model/Hydrophones Model/Subscribe'
//  '<S59>'  : 'proc_control/Model System/Sensor Model/Hydrophones Model/Subscribe/Enabled Subsystem'
//  '<S60>'  : 'proc_control/Model System/Sensor Model/Quaternion Inverse/Quaternion Conjugate'
//  '<S61>'  : 'proc_control/Model System/Sensor Model/Quaternion Inverse/Quaternion Norm'
//  '<S62>'  : 'proc_control/Model System/Sensor Model/Quaternion Rotation/Quaternion Normalize'
//  '<S63>'  : 'proc_control/Model System/Sensor Model/Quaternion Rotation/V1'
//  '<S64>'  : 'proc_control/Model System/Sensor Model/Quaternion Rotation/V2'
//  '<S65>'  : 'proc_control/Model System/Sensor Model/Quaternion Rotation/V3'
//  '<S66>'  : 'proc_control/Model System/Sensor Model/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S67>'  : 'proc_control/Model System/Sensor Model/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S68>'  : 'proc_control/Model System/Sensor Model/Quaternion Rotation1/Quaternion Normalize'
//  '<S69>'  : 'proc_control/Model System/Sensor Model/Quaternion Rotation1/V1'
//  '<S70>'  : 'proc_control/Model System/Sensor Model/Quaternion Rotation1/V2'
//  '<S71>'  : 'proc_control/Model System/Sensor Model/Quaternion Rotation1/V3'
//  '<S72>'  : 'proc_control/Model System/Sensor Model/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S73>'  : 'proc_control/Model System/Sensor Model/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S74>'  : 'proc_control/Model System/Sensor Model/Quaternion Rotation2/Quaternion Normalize'
//  '<S75>'  : 'proc_control/Model System/Sensor Model/Quaternion Rotation2/V1'
//  '<S76>'  : 'proc_control/Model System/Sensor Model/Quaternion Rotation2/V2'
//  '<S77>'  : 'proc_control/Model System/Sensor Model/Quaternion Rotation2/V3'
//  '<S78>'  : 'proc_control/Model System/Sensor Model/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus'
//  '<S79>'  : 'proc_control/Model System/Sensor Model/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S80>'  : 'proc_control/ROS Output/Send DVL msg'
//  '<S81>'  : 'proc_control/ROS Output/Send Depth msg'
//  '<S82>'  : 'proc_control/ROS Output/Send IMU Msg'
//  '<S83>'  : 'proc_control/ROS Output/Send to Unity'
//  '<S84>'  : 'proc_control/ROS Output/Send DVL msg/Blank Message'
//  '<S85>'  : 'proc_control/ROS Output/Send DVL msg/Publish'
//  '<S86>'  : 'proc_control/ROS Output/Send Depth msg/Blank Message'
//  '<S87>'  : 'proc_control/ROS Output/Send Depth msg/Publish'
//  '<S88>'  : 'proc_control/ROS Output/Send IMU Msg/Blank Message'
//  '<S89>'  : 'proc_control/ROS Output/Send IMU Msg/Header Assignment'
//  '<S90>'  : 'proc_control/ROS Output/Send IMU Msg/Publish'
//  '<S91>'  : 'proc_control/ROS Output/Send to Unity/Blank Message'
//  '<S92>'  : 'proc_control/ROS Output/Send to Unity/Publish'
//  '<S93>'  : 'proc_control/Ros Command/Get_ROS_param'
//  '<S94>'  : 'proc_control/Ros Command/Ros Command Manager'
//  '<S95>'  : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters'
//  '<S96>'  : 'proc_control/Ros Command/Get_ROS_param/Physics Constants'
//  '<S97>'  : 'proc_control/Ros Command/Get_ROS_param/Subsystem'
//  '<S98>'  : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains'
//  '<S99>'  : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters/targetReached Params'
//  '<S100>' : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Default'
//  '<S101>' : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 10'
//  '<S102>' : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 11'
//  '<S103>' : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains Mode 19'
//  '<S104>' : 'proc_control/Ros Command/Get_ROS_param/MPC Parameters/MPC Gains/Gains No DVL'
//  '<S105>' : 'proc_control/Ros Command/Get_ROS_param/Physics Constants/MATLAB Function'
//  '<S106>' : 'proc_control/Ros Command/Get_ROS_param/Subsystem/MATLAB Function'
//  '<S107>' : 'proc_control/Ros Command/Get_ROS_param/Subsystem/MATLAB Function1'
//  '<S108>' : 'proc_control/Ros Command/Ros Command Manager/proc_control reset_trajectory'
//  '<S109>' : 'proc_control/Ros Command/Ros Command Manager/proc_control set_mode'
//  '<S110>' : 'proc_control/Ros Command/Ros Command Manager/proc_nav reset_pos'
//  '<S111>' : 'proc_control/Ros Command/Ros Command Manager/proc_simulation start_simulation'
//  '<S112>' : 'proc_control/Ros Command/Ros Command Manager/provider_rs485 kill_status'
//  '<S113>' : 'proc_control/Ros Command/Ros Command Manager/telemetry dryrun'
//  '<S114>' : 'proc_control/Ros Command/Ros Command Manager/proc_control reset_trajectory/Enabled Subsystem'
//  '<S115>' : 'proc_control/Ros Command/Ros Command Manager/proc_control set_mode/Enabled Subsystem'
//  '<S116>' : 'proc_control/Ros Command/Ros Command Manager/proc_nav reset_pos/Enabled Subsystem'
//  '<S117>' : 'proc_control/Ros Command/Ros Command Manager/proc_simulation start_simulation/Enabled Subsystem'
//  '<S118>' : 'proc_control/Ros Command/Ros Command Manager/provider_rs485 kill_status/Enabled Subsystem'
//  '<S119>' : 'proc_control/Ros Command/Ros Command Manager/telemetry dryrun/Enabled Subsystem'
//  '<S120>' : 'proc_control/Sensors Input/AUV'
//  '<S121>' : 'proc_control/Sensors Input/Enabled Subsystem'
//  '<S122>' : 'proc_control/Sensors Input/Simulation'
//  '<S123>' : 'proc_control/Sensors Input/AUV/Subscribe'
//  '<S124>' : 'proc_control/Sensors Input/AUV/Subscribe1'
//  '<S125>' : 'proc_control/Sensors Input/AUV/Subscribe2'
//  '<S126>' : 'proc_control/Sensors Input/AUV/Subscribe4'
//  '<S127>' : 'proc_control/Sensors Input/AUV/Subscribe/Enabled Subsystem'
//  '<S128>' : 'proc_control/Sensors Input/AUV/Subscribe1/Enabled Subsystem'
//  '<S129>' : 'proc_control/Sensors Input/AUV/Subscribe2/Enabled Subsystem'
//  '<S130>' : 'proc_control/Sensors Input/AUV/Subscribe4/Enabled Subsystem'
//  '<S131>' : 'proc_control/Sensors Input/Enabled Subsystem/MATLAB Function'
//  '<S132>' : 'proc_control/Sensors Input/Enabled Subsystem/MinMax Running Resettable'
//  '<S133>' : 'proc_control/Sensors Input/Enabled Subsystem/MinMax Running Resettable1'
//  '<S134>' : 'proc_control/Sensors Input/Enabled Subsystem/MinMax Running Resettable/Subsystem'
//  '<S135>' : 'proc_control/Sensors Input/Enabled Subsystem/MinMax Running Resettable1/Subsystem'
//  '<S136>' : 'proc_control/Sensors Input/Simulation/Subscribe'
//  '<S137>' : 'proc_control/Sensors Input/Simulation/Subscribe1'
//  '<S138>' : 'proc_control/Sensors Input/Simulation/Subscribe2'
//  '<S139>' : 'proc_control/Sensors Input/Simulation/Subscribe/Enabled Subsystem'
//  '<S140>' : 'proc_control/Sensors Input/Simulation/Subscribe1/Enabled Subsystem'
//  '<S141>' : 'proc_control/Sensors Input/Simulation/Subscribe2/Enabled Subsystem'
//  '<S142>' : 'proc_control/Subsystem Controller/Controller List'
//  '<S143>' : 'proc_control/Subsystem Controller/If Action Subsystem'
//  '<S144>' : 'proc_control/Subsystem Controller/Post Traitement'
//  '<S145>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem'
//  '<S146>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1'
//  '<S147>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem2'
//  '<S148>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem3'
//  '<S149>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)'
//  '<S150>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller'
//  '<S151>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Bus2Mux'
//  '<S152>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals'
//  '<S153>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC'
//  '<S154>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S155>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S156>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S157>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S158>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S159>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S160>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S161>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S162>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S163>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S164>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S165>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check'
//  '<S166>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S167>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S168>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S169>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S170>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S171>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S172>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S173>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S174>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S175>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S176>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S177>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Vector Signal Check'
//  '<S178>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S179>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S180>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/moorx'
//  '<S181>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/optimizer'
//  '<S182>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/optimizer/VariableHorizonOptimizer'
//  '<S183>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals/Blank Message'
//  '<S184>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals/Header Assignment'
//  '<S185>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals/Publish'
//  '<S186>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller'
//  '<S187>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Bus2Mux'
//  '<S188>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/MATLAB Function'
//  '<S189>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC'
//  '<S190>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S191>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S192>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S193>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S194>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S195>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S196>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S197>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S198>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S199>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S200>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S201>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check'
//  '<S202>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S203>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S204>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S205>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S206>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S207>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S208>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S209>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S210>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S211>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S212>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S213>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Vector Signal Check'
//  '<S214>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S215>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S216>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/moorx'
//  '<S217>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/optimizer'
//  '<S218>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/optimizer/FixedHorizonOptimizer'
//  '<S219>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem2/Discrete Derivative'
//  '<S220>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Bus2Mux1'
//  '<S221>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller'
//  '<S222>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC'
//  '<S223>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/xmvs_router'
//  '<S224>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check'
//  '<S225>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S226>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check10'
//  '<S227>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check11'
//  '<S228>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check12'
//  '<S229>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check13'
//  '<S230>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check14'
//  '<S231>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check15'
//  '<S232>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check16'
//  '<S233>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S234>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S235>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S236>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S237>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S238>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S239>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check9'
//  '<S240>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S241>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S242>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S243>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check11'
//  '<S244>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/NLMPC'
//  '<S245>' : 'proc_control/Subsystem Controller/If Action Subsystem/Subscribe'
//  '<S246>' : 'proc_control/Subsystem Controller/If Action Subsystem/Subscribe1'
//  '<S247>' : 'proc_control/Subsystem Controller/If Action Subsystem/Subscribe/Enabled Subsystem'
//  '<S248>' : 'proc_control/Subsystem Controller/If Action Subsystem/Subscribe1/Enabled Subsystem'
//  '<S249>' : 'proc_control/Subsystem Controller/Post Traitement/PSU Safe'
//  '<S250>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements'
//  '<S251>' : 'proc_control/Subsystem ProcNav/DVL Measurements'
//  '<S252>' : 'proc_control/Subsystem ProcNav/Depth Measurements'
//  '<S253>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem'
//  '<S254>' : 'proc_control/Subsystem ProcNav/Reset Logic'
//  '<S255>' : 'proc_control/Subsystem ProcNav/State function arguments'
//  '<S256>' : 'proc_control/Subsystem ProcNav/mux2Bus'
//  '<S257>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/VN Process'
//  '<S258>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/Zed Process'
//  '<S259>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/VN Process/MATLAB Function'
//  '<S260>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/VN Process/MATLAB Function1'
//  '<S261>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/VN Process/MATLAB Function2'
//  '<S262>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/VN Process/Quaternion Conjugate'
//  '<S263>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/VN Process/Quaternion Inverse'
//  '<S264>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/VN Process/Quaternion Normalize'
//  '<S265>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/VN Process/Quaternion Rotation'
//  '<S266>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/VN Process/Quaternion Inverse/Quaternion Conjugate'
//  '<S267>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/VN Process/Quaternion Inverse/Quaternion Norm'
//  '<S268>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/VN Process/Quaternion Normalize/Quaternion Modulus'
//  '<S269>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/VN Process/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S270>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/VN Process/Quaternion Rotation/Quaternion Normalize'
//  '<S271>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/VN Process/Quaternion Rotation/V1'
//  '<S272>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/VN Process/Quaternion Rotation/V2'
//  '<S273>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/VN Process/Quaternion Rotation/V3'
//  '<S274>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/VN Process/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S275>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/VN Process/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S276>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/Zed Process/MATLAB Function1'
//  '<S277>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/Zed Process/MATLAB Function2'
//  '<S278>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/Zed Process/Quaternion Rotation'
//  '<S279>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/Zed Process/Quaternion Rotation/Quaternion Normalize'
//  '<S280>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/Zed Process/Quaternion Rotation/V1'
//  '<S281>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/Zed Process/Quaternion Rotation/V2'
//  '<S282>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/Zed Process/Quaternion Rotation/V3'
//  '<S283>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/Zed Process/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S284>' : 'proc_control/Subsystem ProcNav/AHRS//ZED IMU Measurements/Zed Process/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S285>' : 'proc_control/Subsystem ProcNav/DVL Measurements/DVL2Ship'
//  '<S286>' : 'proc_control/Subsystem ProcNav/DVL Measurements/MATLAB Function'
//  '<S287>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation'
//  '<S288>' : 'proc_control/Subsystem ProcNav/DVL Measurements/DVL2Ship/Enabled Subsystem'
//  '<S289>' : 'proc_control/Subsystem ProcNav/DVL Measurements/DVL2Ship/Enabled Subsystem/Rotation Angles to Quaternions'
//  '<S290>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/Quaternion Normalize'
//  '<S291>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/V1'
//  '<S292>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/V2'
//  '<S293>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/V3'
//  '<S294>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S295>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S296>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Discrete Derivative'
//  '<S297>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation'
//  '<S298>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/Quaternion Normalize'
//  '<S299>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/V1'
//  '<S300>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/V2'
//  '<S301>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/V3'
//  '<S302>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S303>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S304>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter'
//  '<S305>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Subsystem'
//  '<S306>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Correct1'
//  '<S307>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Correct2'
//  '<S308>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Correct3'
//  '<S309>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Correct4'
//  '<S310>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Output'
//  '<S311>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Predict'
//  '<S312>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Output/MATLAB Function'
//  '<S313>' : 'proc_control/Subsystem ProcNav/mux2Bus/Quaternion Inverse'
//  '<S314>' : 'proc_control/Subsystem ProcNav/mux2Bus/Quaternion Inverse/Quaternion Conjugate'
//  '<S315>' : 'proc_control/Subsystem ProcNav/mux2Bus/Quaternion Inverse/Quaternion Norm'
//  '<S316>' : 'proc_control/Subsystem Trajectory/IDLE'
//  '<S317>' : 'proc_control/Subsystem Trajectory/Performance Graph'
//  '<S318>' : 'proc_control/Subsystem Trajectory/ProcPlanner Trajectory'
//  '<S319>' : 'proc_control/Subsystem Trajectory/Send Current Target'
//  '<S320>' : 'proc_control/Subsystem Trajectory/SpaceNav'
//  '<S321>' : 'proc_control/Subsystem Trajectory/Subsystem'
//  '<S322>' : 'proc_control/Subsystem Trajectory/Subsystem1'
//  '<S323>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only'
//  '<S324>' : 'proc_control/Subsystem Trajectory/IDLE/MATLAB Function'
//  '<S325>' : 'proc_control/Subsystem Trajectory/ProcPlanner Trajectory/Detect Rise Positive'
//  '<S326>' : 'proc_control/Subsystem Trajectory/ProcPlanner Trajectory/Detect Rise Positive/Positive'
//  '<S327>' : 'proc_control/Subsystem Trajectory/Send Current Target/Blank Message'
//  '<S328>' : 'proc_control/Subsystem Trajectory/Send Current Target/Publish'
//  '<S329>' : 'proc_control/Subsystem Trajectory/SpaceNav/MATLAB Function'
//  '<S330>' : 'proc_control/Subsystem Trajectory/Subsystem/Subscribe'
//  '<S331>' : 'proc_control/Subsystem Trajectory/Subsystem/Subscribe/Enabled Subsystem'
//  '<S332>' : 'proc_control/Subsystem Trajectory/Subsystem1/Subscribe'
//  '<S333>' : 'proc_control/Subsystem Trajectory/Subsystem1/Subscribe/Enabled Subsystem'
//  '<S334>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Enabled Subsystem'
//  '<S335>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Pre-traitement'
//  '<S336>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Resettable Subsystem'
//  '<S337>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Subscribe'
//  '<S338>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Subsystem'
//  '<S339>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Resettable Subsystem/Subsystem'
//  '<S340>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Subscribe/Enabled Subsystem'

#endif                                 // proc_control_h_

//
// File trailer for generated code.
//
// [EOF]
//
