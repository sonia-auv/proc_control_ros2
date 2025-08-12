//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: proc_control.h
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.245
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Mon Aug 11 08:25:33 2025
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

  // Block states (default storage) for system '<S248>/MATLAB Function2'
  struct DW_MATLABFunction2_proc_contr_T {
    real_T w_prev[3];                  // '<S248>/MATLAB Function2'
    boolean_T w_prev_not_empty;        // '<S248>/MATLAB Function2'
  };

  // Block signals (default storage)
  struct B_proc_control_T {
    coder::array<uint16_T,1> b_Mrows;
    std::string Switch1_j;             // '<S89>/Switch1'
    std::string Switch1;               // '<S182>/Switch1'
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
    SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint In1;// '<S342>/In1'
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
    real_T A[1859];                    // '<S144>/MATLAB Function'
    real_T C[1859];                    // '<S144>/MATLAB Function'
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
    real_T B[1144];                    // '<S144>/MATLAB Function'
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
    SL_Bus_std_msgs_Float64MultiArray In1_p;// '<S246>/In1'
    SL_Bus_std_msgs_Float64MultiArray rtb_SourceBlock_o2_k_e;
    SL_Bus_sonia_common_ros2_MpcInfo BusAssignment;// '<S21>/Bus Assignment'
    real_T dv1[400];
    real_T b_D[390];
    SL_Bus_sonia_common_ros2_MpcGains In1_j;// '<S245>/In1'
    SL_Bus_sonia_common_ros2_MpcGains rtb_SourceBlock_o2_h_a;
    real_T a__1_a[338];
    real_T y_i[338];
    SL_Bus_std_msgs_Int16MultiArray BusAssignment_a;// '<S32>/Bus Assignment'
    real_T B_data_l[320];
    real_T b_Bu[320];
    real_T a__1_o[299];
    real_T y_o[299];
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
    real_T a__1_l[247];
    real_T y_m[247];
    sumhYdZsdukPgvAXm7nzHOD_proc__T expl_temp;
    real_T Bv_m[231];
    real_T a__1_c[230];
    real_T K[230];
    real_T b_Mlim_f[226];
    real_T Bc_p[226];
    real_T a__1_e[226];
    real_T cTol_o[226];
    real_T a__1_h[195];
    real_T y_l[195];
    real_T A_h[169];
    real_T y_me[169];
    real_T dv2[169];
    real_T Ac[169];
    real_T Ac_m[169];
    real_T A2[169];
    real_T A4[169];
    real_T A6[169];
    real_T T[169];
    real_T A4_h[169];
    real_T dv3[169];
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
    real_T dv4[169];
    real_T b_a[169];
    real_T cBuffer_o[169];
    real_T aBuffer_b[169];
    real_T cBuffer_a[169];
    real_T cBuffer_g[169];
    real_T Ak[169];
    real_T Ak1[169];
    real_T V[169];
    real_T A6_e[169];
    real_T V_f[169];
    real_T A6_h[169];
    real_T b_Kx[168];
    int16_T s_data[580];
    real_T Dv_e[143];
    real_T Y[143];                     // '<S144>/MATLAB Function'
    real_T X[143];                     // '<S144>/MATLAB Function'
    real_T DX[143];                    // '<S144>/MATLAB Function'
    real_T CA_data[143];
    real_T X_c[143];
    real_T b_X[143];
    real_T X_a[143];
    real_T X_d[143];
    real_T X_af[143];
    real_T b_X_p[143];
    real_T b_X_m[143];
    real_T b_X_o[143];
    real_T z[139];
    real_T rtb_Selector_m_n[139];
    real_T dv5[139];
    real_T b_x[139];
    int32_T ineqRange_data[260];
    real_T b_dHdx[130];
    real_T K_l[130];
    real_T C_p[130];
    real_T Ceq[130];
    real_T c[130];
    real_T b_x_p[130];
    real_T gfX[130];
    real_T z_f[130];
    real_T VectorConcatenate[128];     // '<S21>/Vector Concatenate'
    real_T VectorConcatenate1[128];    // '<S21>/Vector Concatenate1'
    real_T VectorConcatenate2[128];    // '<S21>/Vector Concatenate2'
    real_T VectorConcatenate3[128];    // '<S21>/Vector Concatenate3'
    SL_Bus_nav_msgs_Odometry BusAssignment_g;// '<S12>/Bus Assignment'
    SL_Bus_nav_msgs_Odometry BusAssignment_k;// '<S150>/Bus Assignment'
    real_T Selector_m[117];            // '<S221>/Selector'
    real_T a__1_i[114];
    real_T K_o[114];
    int32_T iC_k[226];
    real_T dv6[104];
    real_T rtb_B_ie[104];
    real_T Sum[104];
    real_T Bc_o[104];
    real_T b_Su1_m[104];
    real_T Sy[100];
    real_T R[100];
    real_T w_data[100];
    physicsConstants BusCreator;       // '<S96>/Bus Creator'
    real_T DataTypeConversion_uState[95];// '<S314>/DataTypeConversion_uState'
    real_T U[88];                      // '<S144>/MATLAB Function'
    real_T U_c[88];
    real_T b_U[88];
    real_T U_f[88];
    real_T b_Kv[88];
    real_T U_h[88];
    real_T U_m[88];
    real_T b_U_a[88];
    real_T Umv[88];
    real_T b_U_k[88];
    real_T b_U_p[88];
    real_T g[81];
    real_T zopt_data[81];
    real_T f_data[81];
    real_T L[81];
    real_T b_D_b[81];
    real_T b_H[81];
    real_T U_ch[81];
    real_T RLinv[81];
    real_T TL[81];
    real_T R_n[81];
    real_T b_A_i[81];
    real_T r_data[81];
    real_T AcRow_data[81];
    real_T z_data[81];
    real_T tau_data[81];
    real_T b_Ac_data[81];
    real_T work_data_m[81];
    real_T tmp_data_jg[81];
    real_T work_data_e[81];
    real_T in1_data_m[81];
    int16_T ii_data[320];
    real_T b_utarget[80];
    real_T dv7[80];
    real_T utargetseq_data[80];
    real_T a_m0[80];
    real_T gfU[80];
    real_T y_j[80];
    real_T y_data_f[80];
    real_T y_data_a[80];
    real_T b_dHdx_g[78];
    real_T K_n[78];
    real_T C_d[78];
    boolean_T isMrows_data[580];
    real_T Selector1_h[72];            // '<S221>/Selector1'
    int16_T tmp_data_na[260];
    int16_T tmp_data_cg[260];
    int32_T tmp_data_fx[130];
    real_T dv8[64];
    real_T dv9[64];
    real_T y_tmp[64];
    real_T b_B_p[64];
    real_T b_Su1_p[64];
    real_T b_I1[64];
    SL_Bus_sensor_msgs_Imu In1_e;      // '<S125>/In1'
    SL_Bus_sensor_msgs_Imu In1_g;      // '<S137>/In1'
    SL_Bus_sensor_msgs_Imu rtb_SourceBlock_o2_n_n;
    SL_Bus_sensor_msgs_Imu BusAssignment_i;// '<S82>/Bus Assignment'
    boolean_T isMrows0[436];
    real_T array_k[48];                // '<S96>/MATLAB Function'
    real_T Tm[48];
    real_T T_n[48];
    real_T Tm_o[48];
    real_T varargin_1[48];
    real_T constValues[41];
    boolean_T x[320];
    real_T Sy_g[36];
    real_T R_c[36];
    real_T constValues_c[36];
    real_T dv10[36];
    real_T b_this_m1[36];
    real_T Ac_j[36];
    real_T inputs[36];
    real_T modCoeffs[36];
    real_T c_A[36];
    real_T c_A_k[36];
    real_T c_A_m[36];
    real_T b_A_pr[36];
    real_T c_A_d[36];
    boolean_T icf[260];
    boolean_T icf_g[260];
    int8_T Je[260];
    int16_T VectorConcatenate_g[128];  // '<S32>/Vector Concatenate'
    real_T a__1_c3[30];
    real_T K_c[30];
    boolean_T bv[226];
    SL_Bus_sonia_common_ros2_BodyVelocityDVL BusAssignment_aa;// '<S80>/Bus Assignment' 
    real_T b_dHdx_i[26];
    real_T K_d[26];
    real_T C_g[26];
    real_T C_l[26];
    real_T coefsWithFlatStart[24];
    real_T work[24];
    real_T work_f[24];
    int8_T Ck[169];
    int8_T val[169];
    real_T b_xoff[21];
    real_T rtb_X_e_d[21];
    real_T Transpose_bj[18];           // '<S344>/Transpose'
    real_T Opt[18];
    real_T Rhs[18];
    boolean_T bv1[130];
    boolean_T bv2[130];
    char_T cv[128];
    sG8JZ69axY52WWR6RKyApQC_proc__T MeritFunction;
    int32_T icf_tmp[26];
    int32_T icf_tmp_j[26];
    real_T rtb_MATLABSystem_o10_i[13];
    real_T imvec[13];
    real_T z_h[13];
    real_T X_e[13];                    // '<S143>/MATLAB System'
    real_T DataStoreRead[13];
    real_T dv11[13];
    real_T CA_n[13];
    real_T x_dot_kk[13];
    real_T dv12[13];
    real_T w[13];
    real_T ic[13];
    real_T b_Wy[13];
    real_T w_o[13];
    real_T ic_c[13];
    real_T ix[13];
    real_T obj_next_next_next_next_next_ne[13];
    real_T gfX_b[13];
    real_T dv13[13];
    real_T ic_e[13];
    real_T dv14[13];
    real_T dv15[13];
    real_T ic_d[13];
    real_T dv16[13];
    real_T dv17[13];
    real_T work_i[13];
    real_T work_g[13];
    real_T a_n[13];
    real_T b_tau[13];
    real_T work_l[13];
    real_T b_tau_c[13];
    real_T work_n[13];
    real_T b_tau_p[13];
    real_T work_d[13];
    real_T b_tau_o[13];
    real_T work_j[13];
    real_T tamp[13];
    real_T coefMat[12];
    real_T coefMat_c[12];
    real_T newSegmentCoeffs[12];
    real_T e[12];
    real_T tau[12];
    real_T e_h[12];
    real_T tau_d[12];
    real_T vseq_c[11];
    int8_T b[81];
    int32_T i_data[20];
    int32_T ii_data_p[20];
    boolean_T gb_data[80];
    boolean_T gb_data_p[80];
    real_T d[10];
    real_T b_tau_a[10];
    real_T work_o[10];
    Vector2DoubleArray_proc__pr35_T obj_lw;
    real_T twpt[9];
    real_T TmpSignalConversionAtMATL_d[9];// '<S332>/Enabled Subsystem'
    real_T zopt[9];
    real_T varargin_1_j[9];
    real_T r_p[9];
    real_T z_o[9];
    real_T tau_l[9];
    real_T work_k[9];
    real_T varargin_1_jk[9];
    somzaGboVhDG7PNQS6E98jD_proc__T expl_temp_f;
    somzaGboVhDG7PNQS6E98jD_proc__T expl_temp_c;
    int8_T As[64];
    int8_T Au_tmp[64];
    int8_T Au_tmp_f[64];
    real_T PWNtoN[8];                  // '<S26>/PWN to N'
    real_T mv[8];                      // '<S220>/NLMPC'
    real_T u_e[8];                     // '<S179>/VariableHorizonOptimizer'
    real_T dv18[8];
    real_T dv19[8];
    real_T umax_incr[8];
    real_T umin_incr[8];
    real_T umvk[8];
    real_T duk[8];
    real_T b_Wu[8];
    real_T b_Wdu[8];
    real_T iu[8];
    real_T umvk_n[8];
    real_T duk_i[8];
    real_T gfU_l[8];
    real_T ic_i[8];
    real_T c_k[8];
    real_T runtimedata_MVRateMin[8];
    SL_Bus_sonia_common_ros2_Pose rtb_SourceBlock_o2_ne_f;
    SL_Bus_geometry_msgs_Pose In1_gs;  // '<S115>/In1'
    SL_Bus_geometry_msgs_Pose rtb_SourceBlock_o2_m_a;
    SL_Bus_geometry_msgs_Pose BusAssignment_c;// '<S83>/Bus Assignment'
    SL_Bus_geometry_msgs_Pose BusAssignment_d;
    real_T TmpSignalConversionAtMATLAB[7];
    real_T mp[7];
    real_T y_e[7];
    int32_T iv[13];
    int32_T icf_tmp_e[13];
    int32_T icf_tmp_b[13];
    int32_T icf_tmp_a[13];
    int32_T icf_tmp_i[13];
    Vector2DoubleArray_proc_co_pr_T obj_n;
    Vector2DoubleArray_proc_co_pr_T obj_li;
    Vector2DoubleArray_proc_co_pr_T obj_d;
    int32_T blockFormat[12];
    int32_T blockFormat_f[12];
    SL_Bus_geometry_msgs_Twist In1_l;  // '<S340>/In1'
    SL_Bus_geometry_msgs_Twist rtb_SourceBlock_o2_g_j;
    real_T TSamp_e[6];                 // '<S217>/TSamp'
    real_T rtb_TSamp_e_o[6];
    real_T constValues_f[6];
    real_T constValues_o[6];
    real_T dv20[6];
    real_T varargin_1_tmp[6];
    real_T b_tau_l[6];
    real_T work_lu[6];
    real_T dv21[5];
    real_T dv22[5];
    char_T b_zeroDelimTopic[37];
    char_T b_zeroDelimTopic_g[35];
    char_T b_zeroDelimTopic_d[34];
    char_T b_zeroDelimTopic_dv[34];
    char_T b_zeroDelimTopic_j[33];
    char_T b_zeroDelimTopic_h[32];
    real_T n[4];
    real_T rq[4];
    real_T Quaternion[4];
    real_T qt[4];
    real_T modBreaks[4];
    real_T qRel[4];
    real_T qRel_c[4];
    int32_T iv1[8];
    int32_T gfU_tmp[8];
    int32_T gfU_tmp_n[8];
    int32_T iv2[8];
    int32_T iv3[8];
    int32_T iv4[8];
    int32_T iv5[8];
    quaternion_proc_control_T pnCorrected;
    quaternion_proc_control_T expl_temp_f1;
    quaternion_proc_control_T expl_temp_j;
    char_T b_zeroDelimTopic_k[31];
    char_T b_zeroDelimTopic_a[30];
    char_T b_zeroDelimTopic_f[30];
    char_T b_zeroDelimTopic_jz[30];
    int8_T UnknownIn[29];
    char_T b_zeroDelimTopic_kl[29];
    char_T b_zeroDelimTopic_b[29];
    char_T b_zeroDelimTopic_hm[28];
    char_T b_zeroDelimTopic_e[28];
    char_T b_zeroDelimTopic_hn[28];
    char_T b_zeroDelimTopic_ku[28];
    char_T b_zeroDelimTopic_jw[27];
    char_T b_zeroDelimTopic_o[27];
    boolean_T icf_c[26];
    boolean_T icf_h[26];
    char_T b_zeroDelimTopic_i[26];
    char_T b_zeroDelimTopic_p[26];
    Vector2DoubleArray_proc_c_pr3_T obj_n0;
    Vector2DoubleArray_proc_c_pr3_T obj_jm;
    Vector2DoubleArray_proc_c_pr3_T obj_bx;
    Vector2DoubleArray_proc_c_pr3_T obj_o4;
    Vector2DoubleArray_proc_c_pr3_T obj_k3;
    char_T b_zeroDelimTopic_f0[24];
    SL_Bus_geometry_msgs_Vector3 In1_k;// '<S59>/In1'
    SL_Bus_geometry_msgs_Vector3 In1_g2;// '<S56>/In1'
    SL_Bus_geometry_msgs_Vector3 rtb_SourceBlock_o2_d_e;
    SL_Bus_geometry_msgs_Vector3 BusAssignment_gn;// '<S260>/Bus Assignment'
    real_T qu[3];
    real_T rtb_RotationTrajectory_o2_n[3];
    real_T Sum_h[3];                   // '<S248>/Sum'
    real_T Sum5[3];                    // '<S29>/Sum5'
    real_T Multiply[3];                // '<S248>/Multiply'
    real_T unusedExpr_h[3];
    real_T dv23[3];
    real_T varargin_1_tmp_f[3];
    real_T target[3];
    real_T b_this_i[3];
    int32_T ipiv[6];
    int32_T ipiv_f[6];
    char_T b_zeroDelimTopic_c[23];
    char_T b_zeroDelimTopic_n[23];
    char_T b_zeroDelimTopic_he[23];
    char_T b_zeroDelimTopic_kq[23];
    char_T b_zeroDelimTopic_hz[23];
    char_T b_zeroDelimTopic_be[23];
    char_T b_zeroDelimTopic_os[22];
    char_T b_zeroDelimTopic_nq[21];
    boolean_T corr[20];
    char_T b_zeroDelimTopic_m[20];
    char_T b_zeroDelimTopic_kuk[19];
    char_T b_zeroDelimTopic_jk[18];
    sJ4ih70VmKcvCeguWN0mNVF deadline;
    sJ4ih70VmKcvCeguWN0mNVF deadline_h;
    sJ4ih70VmKcvCeguWN0mNVF deadline_f;
    sJ4ih70VmKcvCeguWN0mNVF deadline_d;
    sJ4ih70VmKcvCeguWN0mNVF deadline_l;
    sJ4ih70VmKcvCeguWN0mNVF deadline_k;
    sJ4ih70VmKcvCeguWN0mNVF deadline_i;
    sJ4ih70VmKcvCeguWN0mNVF deadline_h5;
    sJ4ih70VmKcvCeguWN0mNVF deadline_m;
    sJ4ih70VmKcvCeguWN0mNVF deadline_g;
    sJ4ih70VmKcvCeguWN0mNVF deadline_lf;
    sJ4ih70VmKcvCeguWN0mNVF deadline_m4;
    sJ4ih70VmKcvCeguWN0mNVF deadline_n;
    sJ4ih70VmKcvCeguWN0mNVF deadline_gv;
    sJ4ih70VmKcvCeguWN0mNVF deadline_dj;
    sJ4ih70VmKcvCeguWN0mNVF deadline_mq;
    sJ4ih70VmKcvCeguWN0mNVF deadline_ft;
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
    char_T b_zeroDelimTopic_gi[16];
    sJ4ih70VmKcvCeguWN0mNVF deadline_om;
    sJ4ih70VmKcvCeguWN0mNVF deadline_hm;
    SL_Bus_sonia_common_ros2_MotorPwm BusAssignment_p;// '<S2>/Bus Assignment'
    SL_Bus_sonia_common_ros2_MotorPwm BusAssignment1;// '<S2>/Bus Assignment1'
    real_T dv24[2];
    real_T dv25[2];
    real_T dv26[2];
    real_T obj[2];
    real_T b_tau_c2[2];
    real_T work_a[2];
    int16_T NtoRPM[8];                 // '<S32>/N to RPM'
    uint16_T current[8];               // '<S142>/N to A'
    uint16_T pwm[8];                   // '<S142>/n-D Lookup Table1'
    uint8_T rows[13];
    uint8_T rows_i[13];
    int8_T b_ipiv[13];
    int8_T ipiv_m[13];
    boolean_T x_l[13];
    boolean_T x_j[13];
    boolean_T x_f[13];
    boolean_T x_o[13];
    int32_T Jx_size[3];
    int16_T WorkingSet_tmp[5];
    s7RdrPWkr8UPAUyTdDJkLaG_proc__T Flags;
    real_T Probe_o1;                   // '<S253>/Probe'
    real_T Delay[8];                   // '<S253>/Delay'
    real_T Transpose[48];              // '<S253>/Transpose'
    real_T Gain[3];                    // '<S330>/Gain'
    real_T MatrixConcatenate[2];       // '<S344>/Matrix Concatenate'
    real_T Selector[6];                // '<S344>/Selector'
    real_T Selector1[8];               // '<S344>/Selector1'
    real_T Selector4[7];               // '<S344>/Selector4'
    real_T DataTypeConversion[6];      // '<S343>/Data Type Conversion'
    real_T DataTypeConversion1[2];     // '<S343>/Data Type Conversion1'
    real_T DataTypeConversion2;        // '<S343>/Data Type Conversion2'
    real_T zposition;                  // '<S250>/Sum'
    real_T zvelocity;                  // '<S250>/Discrete Transfer Fcn'
    real_T ywt[13];                    // '<S141>/MATLAB System'
    real_T mvwt[8];                    // '<S141>/MATLAB System'
    real_T dmwwt[8];                   // '<S141>/MATLAB System'
    real_T p;                          // '<S141>/MATLAB System'
    real_T m;                          // '<S141>/MATLAB System'
    real_T mvmin[8];                   // '<S141>/MATLAB System'
    real_T mvmax[8];                   // '<S141>/MATLAB System'
    real_T y;                          // '<S119>/MATLAB Function'
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
    real_T DiscreteTransferFcn;        // '<S33>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_o;      // '<S34>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_i;      // '<S35>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_e;      // '<S36>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_m;      // '<S37>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_a;      // '<S38>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_j;      // '<S39>/Discrete Transfer Fcn'
    real_T DiscreteTransferFcn_h;      // '<S40>/Discrete Transfer Fcn'
    real_T Drift[6];                   // '<S27>/Drift'
    real_T Gain2;                      // '<S69>/Gain2'
    real_T Gain_n;                     // '<S69>/Gain'
    real_T Gain1;                      // '<S69>/Gain1'
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
    real_T d_i;
    real_T scale;
    real_T absxk;
    real_T t;
    real_T sina;
    real_T sinb;
    real_T sinc;
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
    real_T t14;
    real_T t15;
    real_T t16;
    real_T t17;
    real_T t21;
    real_T t25;
    real_T t26;
    real_T t27;
    real_T t28;
    real_T t29;
    real_T t65;
    real_T t52;
    real_T t56;
    real_T t57;
    real_T t58;
    real_T t62;
    real_T t70;
    real_T Product5;                   // '<S76>/Product5'
    real_T Sum_l;                      // '<S76>/Sum'
    real_T Product2_pd;                // '<S74>/Product2'
    real_T Product1_n;                 // '<S74>/Product1'
    real_T Product5_c;                 // '<S77>/Product5'
    real_T Divide2_j;                  // '<S51>/Divide2'
    real_T Divide1_e;                  // '<S51>/Divide1'
    real_T Output_o;                   // '<S44>/Output'
    real_T WorldPosition_idx_2;
    real_T rtb_sincos_o2_idx_2;
    real_T rtb_sincos_o2_idx_1;
    real_T e_e;
    real_T rtb_Product5_tmp;
    real_T rtb_Sum_tmp;
    real_T rtb_Sum_l_tmp;
    real_T rtb_Product1_n_tmp;
    real_T rtb_Sum_tmp_j;
    real_T t25_tmp;
    real_T t35_tmp;
    real_T t37_tmp;
    real_T t27_tmp;
    real_T t70_tmp;
    real_T t32_tmp;
    real_T t29_tmp;
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
    real_T Gain_n_tmp;
    real_T PressureDepth_tmp;
    real_T PressureDepth_tmp_f;
    real_T PressureDepth_tmp_m;
    real_T A_tmp;
    real_T Sx_data_tmp;
    real_T b_p;
    real_T pny1;
    real_T CA_a;
    real_T bkj;
    real_T t5;
    real_T t6;
    real_T t14_h;
    real_T t15_o;
    real_T t16_h;
    real_T t17_j;
    real_T t18;
    real_T t19;
    real_T constMec_rg;
    real_T constMec_rg_g;
    real_T constMec_rg_j;
    real_T exptj;
    real_T d6_l;
    real_T eta1;
    real_T A4_k;
    real_T e_d;
    real_T ed2;
    real_T cBuffer_n;
    real_T b_c_j;
    real_T scale_a;
    real_T absxk_h;
    real_T t_i;
    real_T TrialState_lambdasqp;
    real_T phi_alpha;
    real_T fs;
    real_T e_dn;
    real_T wtYerr;
    real_T umvk_b;
    real_T duk_h;
    real_T wtYerr_p;
    real_T e_n;
    real_T ic_j;
    real_T runtimedata_OutputMin;
    real_T normH;
    real_T s;
    real_T b_B_o;
    real_T WuI2Jm_b;
    real_T b_Jm;
    real_T rMin;
    real_T Xnorm0;
    real_T cMin;
    real_T cVal;
    real_T t_j;
    real_T beta1;
    real_T b_A_e;
    real_T RLinv_i;
    real_T scale_n;
    real_T absxk_i;
    real_T t_p;
    real_T exptj_o;
    real_T d6_m;
    real_T eta1_o;
    real_T A4_g;
    real_T e_ez;
    real_T ed2_i;
    real_T cBuffer_gb;
    real_T e_g;
    real_T ic_g;
    real_T runtimedata_OutputMin_g;
    real_T fs_c;
    real_T e_k;
    real_T wtYerr_d;
    real_T duk_k;
    real_T umvk_p;
    real_T wtYerr_p5;
    real_T obj_next_next_next_next_next__m;
    real_T y_k;
    real_T sina_a;
    real_T sinb_f;
    real_T sinc_c;
    real_T cosa;
    real_T cosb;
    real_T cosc;
    real_T qt_idx_0;
    real_T qt_idx_1;
    real_T qt_idx_2;
    real_T inputs_j;
    real_T inputs_k;
    real_T inputs_h;
    real_T t20;
    real_T t22;
    real_T t23;
    real_T t24;
    real_T t27_d;
    real_T t28_j;
    real_T t29_n;
    real_T t30;
    real_T t31;
    real_T t32_j;
    real_T t36;
    real_T t37;
    real_T t38;
    real_T t40_l;
    real_T t41_p;
    real_T t43_p;
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
    real_T in4_tmp_l;
    real_T in4_tmp_ld;
    real_T t122_tmp_tmp;
    real_T in4_tmp_h;
    real_T in4_tmp_c;
    real_T in4_tmp_g;
    real_T in4_tmp_e;
    real_T in4_tmp_n;
    real_T in4_tmp_f;
    real_T in4_tmp_nl;
    real_T t95_tmp_e;
    real_T t96_tmp_b;
    real_T t99_tmp_a;
    real_T t100_tmp_i;
    real_T t103_tmp_n;
    real_T t104_tmp_f;
    real_T t111_tmp_i;
    real_T t114_tmp_k;
    real_T t118_tmp_b;
    real_T t122_tmp_d;
    real_T in4_tmp_hs;
    real_T in4_tmp_nlw;
    real_T in4_tmp_fj;
    real_T in4_tmp_a;
    real_T in4_tmp_m;
    real_T in4_tmp_gu;
    real_T in4_tmp_nh;
    real_T in4_tmp_ch;
    real_T in4_tmp_d;
    real_T in4_tmp_k;
    real_T in4_tmp_cl;
    real_T in4_tmp_j;
    real_T in4_tmp_mt;
    real_T in4_tmp_i;
    real_T in4_tmp_b;
    real_T in4_tmp_o;
    real_T in4_tmp_gs;
    real_T in4_tmp_ed;
    real_T in4_tmp_in;
    real_T in4_tmp_eb;
    real_T in4_tmp_is;
    real_T in4_tmp_m5;
    real_T in4_tmp_dl;
    real_T in4_tmp_j4;
    real_T in4_tmp_p;
    real_T in4_tmp_b4;
    real_T in4_tmp_pn;
    real_T in4_tmp_nm;
    real_T in4_tmp_ce;
    real_T in4_tmp_nhy;
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
    real_T in4_tmp_a0;
    real_T in4_tmp_fd;
    real_T in4_tmp_ko;
    real_T in4_tmp_cg;
    real_T in4_tmp_j1;
    real_T in4_tmp_ldg;
    real_T in4_tmp_ai;
    real_T in4_tmp_iy;
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
    real_T ct_tmp_b;
    real_T ct_tmp_a;
    real_T ct_tmp_aq;
    real_T ct_tmp_i;
    real_T ct_tmp_iz;
    real_T ct_tmp_l;
    real_T ct_tmp_o5;
    real_T ct_tmp_p;
    real_T ct_tmp_om;
    real_T ct_tmp_c;
    real_T t900_tmp_o;
    real_T t899_tmp_o;
    real_T t898_tmp_h;
    real_T t901_tmp_i;
    real_T t903_tmp_g;
    real_T t902_tmp_c;
    real_T ct_tmp_ok;
    real_T ct_tmp_g;
    real_T ct_tmp_o2;
    real_T ct_tmp_gf;
    real_T ct_tmp_tmp;
    real_T ct_tmp_tmp_a;
    real_T ct_tmp_tmp_g;
    real_T ct_tmp_tmp_b;
    real_T ct_tmp_k;
    real_T ct_tmp_ca;
    real_T ct_tmp_j;
    real_T ct_tmp_al;
    real_T ct_tmp_d;
    real_T ct_tmp_cx;
    real_T ct_tmp_d0;
    real_T ct_tmp_a2;
    real_T ct_tmp_bo;
    real_T ct_tmp_gu;
    real_T ct_tmp_tmp_f;
    real_T ct_tmp_cg;
    real_T ct_tmp_pn;
    real_T ct_tmp_at;
    real_T ct_tmp_n;
    real_T ct_tmp_h;
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
    real_T t1546_tmp_m;
    real_T t1543_tmp;
    real_T t1543_tmp_f;
    real_T t1542_tmp;
    real_T out1_tmp;
    real_T out1_tmp_b;
    real_T out1_tmp_e;
    real_T out1_tmp_n;
    real_T out1_tmp_p;
    real_T out1_tmp_i;
    real_T out1_tmp_j;
    real_T out1_tmp_l;
    real_T out1_tmp_c;
    real_T out1_tmp_g;
    real_T out1_tmp_c5;
    real_T out1_tmp_ly;
    real_T out1_tmp_ev;
    real_T out1_tmp_d;
    real_T out1_tmp_m;
    real_T out1_tmp_f;
    real_T out1_tmp_nl;
    real_T out1_tmp_o;
    real_T out1_tmp_en;
    real_T out1_tmp_mp;
    real_T out1_tmp_ch;
    real_T out1_tmp_g4;
    real_T out1_tmp_bn;
    real_T out1_tmp_po;
    real_T out1_tmp_p2;
    real_T out1_tmp_a;
    real_T out1_tmp_fm;
    real_T out1_tmp_gr;
    real_T out1_tmp_b0;
    real_T out1_tmp_k;
    real_T out1_tmp_k1;
    real_T out1_tmp_bw;
    real_T out1_tmp_ix;
    real_T out1_tmp_nj;
    real_T out1_tmp_h;
    real_T out1_tmp_ni;
    real_T out1_tmp_mm;
    real_T out1_tmp_gu;
    real_T out1_tmp_jb;
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
    real_T out1_tmp_lx;
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
    real_T out1_tmp_tmp;
    real_T out1_tmp_tmp_k;
    real_T out1_tmp_tmp_i;
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
    real_T out1_tmp_tmp_c;
    real_T out1_tmp_tmp_e;
    real_T out1_tmp_tmp_a;
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
    real_T out1_tmp_tmp_b;
    real_T out1_tmp_tmp_iw;
    real_T out1_tmp_tmp_bi;
    real_T out1_tmp_jv;
    real_T out1_tmp_gz;
    real_T out1_tmp_nly;
    real_T out1_tmp_p4;
    real_T out1_tmp_fbc;
    real_T out1_tmp_fs;
    real_T out1_tmp_aa;
    real_T out1_tmp_g3;
    real_T out1_tmp_ma;
    real_T out1_tmp_dv;
    real_T out1_tmp_efd;
    real_T out1_tmp_ey;
    real_T out1_tmp_dl;
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
    real_T out1_tmp_tmp_ie;
    real_T out1_tmp_tmp_m;
    real_T out1_tmp_cy;
    real_T out1_tmp_lv;
    real_T out1_tmp_pb;
    real_T out1_tmp_i1;
    real_T out1_tmp_b3;
    real_T out1_tmp_gn;
    real_T out1_tmp_tmp_o;
    real_T out1_tmp_tmp_b1;
    real_T out1_tmp_tmp_ew;
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
    real_T out1_tmp_tmp_iy;
    real_T out1_tmp_tmp_az;
    real_T out1_tmp_tmp_ix;
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
    real_T out1_tmp_i3;
    real_T out1_tmp_nlp;
    real_T out1_tmp_ob;
    real_T out1_tmp_lc;
    real_T out1_tmp_pr;
    real_T out1_tmp_br;
    real_T out1_tmp_fy;
    real_T out1_tmp_is;
    real_T out1_tmp_ci;
    real_T out1_tmp_gl;
    real_T out1_tmp_iuw;
    real_T out1_tmp_b1;
    real_T out1_tmp_nad;
    real_T out1_tmp_pn;
    real_T out1_tmp_oor;
    real_T out1_tmp_by;
    real_T out1_tmp_o1;
    real_T out1_tmp_cm;
    real_T out1_tmp_jc;
    real_T out1_tmp_ei;
    real_T out1_tmp_tmp_p;
    real_T out1_tmp_tmp_n;
    real_T out1_tmp_tmp_oe;
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
    real_T out1_tmp_i3s;
    real_T out1_tmp_pme;
    real_T out1_tmp_lb;
    real_T out1_tmp_ea;
    real_T out1_tmp_es;
    real_T out1_tmp_pn5;
    real_T out1_tmp_jg;
    real_T out1_tmp_gyk;
    real_T out1_tmp_le;
    real_T t1524_j;
    real_T t20_p;
    real_T t22_d;
    real_T t23_k;
    real_T t24_m;
    real_T t27_f;
    real_T t28_m;
    real_T t29_nf;
    real_T t30_m;
    real_T t31_b;
    real_T t32_c;
    real_T t36_g;
    real_T t37_c;
    real_T t38_i;
    real_T t39_k;
    real_T t41_g;
    real_T t42_p;
    real_T t44_f;
    real_T t49_m;
    real_T t50;
    real_T t52_m;
    real_T t80;
    real_T t81;
    real_T t82;
    real_T t83_l;
    real_T t84_j;
    real_T t85_m;
    real_T t86_j;
    real_T t87_i;
    real_T t88_a;
    real_T t89_h;
    real_T t90_d;
    real_T t91_i;
    real_T t92_h;
    real_T t93_d;
    real_T t94_l;
    real_T t95_f;
    real_T t96_l;
    real_T t97_l;
    real_T t100_f;
    real_T t101;
    real_T t102;
    real_T t103_g;
    real_T t104_g;
    real_T t105_a;
    real_T t108_d;
    real_T t111_b;
    real_T t112;
    real_T t113;
    real_T t115_d;
    real_T t117;
    real_T t119;
    real_T t120_f;
    real_T t80_tmp;
    real_T t81_tmp;
    real_T t82_tmp;
    real_T t83_tmp_a;
    real_T t84_tmp_m;
    real_T t85_tmp_i;
    real_T t92_tmp;
    real_T t93_tmp;
    real_T t80_tmp_tmp;
    real_T t82_tmp_tmp;
    real_T t96_tmp_i;
    real_T t97_tmp;
    real_T t100_tmp_k;
    real_T t101_tmp;
    real_T t108_tmp;
    real_T t111_tmp_a;
    real_T t115_tmp;
    real_T t119_tmp;
    real_T t81_tmp_tmp;
    real_T t84_tmp_tmp_m;
    real_T t83_tmp_tmp_c;
    real_T t85_tmp_tmp_b;
    real_T t96_tmp_tmp_k;
    real_T t97_tmp_tmp;
    real_T t92_tmp_tmp;
    real_T t93_tmp_tmp;
    real_T t111_tmp_tmp_l;
    real_T t108_tmp_tmp;
    real_T t115_tmp_tmp;
    real_T in3_tmp;
    real_T in3_tmp_n;
    real_T in3_tmp_p;
    real_T t119_tmp_tmp;
    real_T in3_tmp_f;
    real_T in3_tmp_k;
    real_T in3_tmp_e;
    real_T in3_tmp_na;
    real_T in3_tmp_o;
    real_T t92_tmp_a;
    real_T t96_tmp_bi;
    real_T t100_tmp_b;
    real_T t119_tmp_m;
    real_T in3_tmp_m;
    real_T in3_tmp_kw;
    real_T in3_tmp_mc;
    real_T in3_tmp_h;
    real_T in3_tmp_i;
    real_T in3_tmp_c;
    real_T in3_tmp_ni;
    real_T in3_tmp_il;
    real_T in3_tmp_oc;
    real_T in3_tmp_hy;
    real_T in3_tmp_pj;
    real_T in3_tmp_g;
    real_T in3_tmp_cy;
    real_T in3_tmp_gn;
    real_T in3_tmp_b;
    real_T in3_tmp_j;
    real_T in3_tmp_ha;
    real_T in3_tmp_d;
    real_T in3_tmp_oa;
    real_T in3_tmp_k2;
    real_T in3_tmp_jw;
    real_T in3_tmp_de;
    real_T in3_tmp_fs;
    real_T in3_tmp_a;
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
    real_T t93_tmp_f;
    real_T t97_tmp_m;
    real_T t101_tmp_k;
    real_T t108_tmp_b;
    real_T t111_tmp_h;
    real_T t115_tmp_h;
    real_T t896;
    real_T t897;
    real_T t898_h;
    real_T t899_b;
    real_T t900_b;
    real_T t901_d;
    real_T t897_tmp;
    real_T t896_tmp;
    real_T t898_tmp_j;
    real_T ct_tmp_dl;
    real_T t899_tmp_l;
    real_T t901_tmp_j;
    real_T ct_tmp_bi;
    real_T t900_tmp_f;
    real_T ct_tmp_po;
    real_T ct_tmp_lr;
    real_T ct_tmp_l1;
    real_T ct_tmp_i5;
    real_T ct_tmp_okp;
    real_T ct_tmp_bv;
    real_T ct_tmp_it;
    real_T ct_tmp_gv;
    real_T ct_tmp_pob;
    real_T ct_tmp_h5;
    real_T t898_tmp_d;
    real_T t897_tmp_f;
    real_T t896_tmp_f;
    real_T t899_tmp_c;
    real_T t901_tmp_d;
    real_T t900_tmp_c;
    real_T ct_tmp_bc;
    real_T ct_tmp_pw;
    real_T ct_tmp_hh;
    real_T ct_tmp_e;
    real_T ct_tmp_tmp_l;
    real_T ct_tmp_tmp_h;
    real_T ct_tmp_tmp_n;
    real_T ct_tmp_tmp_k;
    real_T ct_tmp_bt;
    real_T ct_tmp_oy;
    real_T ct_tmp_ni;
    real_T ct_tmp_f;
    real_T ct_tmp_gr;
    real_T ct_tmp_dm;
    real_T ct_tmp_d1;
    real_T ct_tmp_ey;
    real_T ct_tmp_ce;
    real_T ct_tmp_ar;
    real_T ct_tmp_tmp_hp;
    real_T ct_tmp_er;
    real_T ct_tmp_ne;
    real_T ct_tmp_hg;
    real_T ct_tmp_oc;
    real_T ct_tmp_fo;
    real_T t1162;
    real_T t1163;
    real_T t1164_k;
    real_T t1459;
    real_T t1483;
    real_T t1484;
    real_T t1485;
    real_T t1488_e;
    real_T t1489_i;
    real_T t1490_o;
    real_T t517;
    real_T t552;
    real_T t575;
    real_T ct_tmp_tmp_j;
    real_T t1456;
    real_T t1457;
    real_T t1458;
    real_T t1479;
    real_T t1499;
    real_T t1527;
    real_T t1533;
    real_T t1533_tmp;
    real_T t1533_tmp_k;
    real_T t1533_tmp_j;
    real_T out1_tmp_d0;
    real_T out1_tmp_gnz;
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
    real_T out1_tmp_ar;
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
    real_T out1_tmp_gg;
    real_T out1_tmp_p5;
    real_T out1_tmp_nli;
    real_T out1_tmp_o2c;
    real_T out1_tmp_lh;
    real_T out1_tmp_fz;
    real_T out1_tmp_h5;
    real_T out1_tmp_d4;
    real_T out1_tmp_mf;
    real_T out1_tmp_iy;
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
    real_T out1_tmp_tmp_g;
    real_T out1_tmp_tmp_cg;
    real_T out1_tmp_tmp_a5;
    real_T out1_tmp_fpc;
    real_T out1_tmp_ik;
    real_T out1_tmp_c1;
    real_T out1_tmp_nrj;
    real_T out1_tmp_c2;
    real_T out1_tmp_c4;
    real_T out1_tmp_ikw;
    real_T out1_tmp_hu;
    real_T out1_tmp_ml;
    real_T out1_tmp_go;
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
    real_T out1_tmp_tmp_c3;
    real_T out1_tmp_tmp_nw;
    real_T out1_tmp_tmp_j;
    real_T out1_tmp_tmp_ks;
    real_T out1_tmp_tmp_os;
    real_T out1_tmp_g2;
    real_T out1_tmp_ks;
    real_T out1_tmp_j5b;
    real_T out1_tmp_px1;
    real_T out1_tmp_hw;
    real_T out1_tmp_nw;
    real_T out1_tmp_bx;
    real_T out1_tmp_mt;
    real_T out1_tmp_kvt;
    real_T out1_tmp_b4;
    real_T out1_tmp_l1g;
    real_T out1_tmp_g5i;
    real_T out1_tmp_g23;
    real_T out1_tmp_n4p;
    real_T out1_tmp_c3d;
    real_T out1_tmp_tmp_eo;
    real_T out1_tmp_tmp_f;
    real_T out1_tmp_tmp_k4;
    real_T out1_tmp_cch;
    real_T out1_tmp_dt;
    real_T out1_tmp_mz;
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
    real_T out1_tmp_lds;
    real_T out1_tmp_o0o;
    real_T out1_tmp_a2;
    real_T out1_tmp_n3;
    real_T out1_tmp_ov;
    real_T out1_tmp_da;
    real_T out1_tmp_tmp_h;
    real_T out1_tmp_tmp_h4;
    real_T out1_tmp_tmp_a0;
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
    real_T out1_tmp_oq;
    real_T out1_tmp_io;
    real_T out1_tmp_esa;
    real_T out1_tmp_tmp_azw;
    real_T out1_tmp_tmp_eu;
    real_T out1_tmp_tmp_d;
    real_T out1_tmp_lvf;
    real_T out1_tmp_if;
    real_T out1_tmp_nkd;
    real_T out1_tmp_cfu;
    real_T out1_tmp_i4;
    real_T out1_tmp_d4s;
    real_T out1_tmp_b4j;
    real_T out1_tmp_at;
    real_T out1_tmp_b5;
    real_T out1_tmp_nt;
    real_T out1_tmp_bi;
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
    real_T out1_tmp_eu;
    real_T out1_tmp_dt4;
    real_T out1_tmp_j4n;
    real_T out1_tmp_k1b;
    real_T out1_tmp_oc;
    real_T b_C_n;
    real_T t15_b;
    real_T t17_i;
    real_T t19_d;
    real_T t23_d;
    real_T t25_p;
    real_T t27_e;
    real_T t33_n;
    real_T t34_d;
    real_T t35;
    real_T t37_m;
    real_T t38_g;
    real_T t39_i;
    real_T t41_k;
    real_T t42_i;
    real_T t43_m;
    real_T t44_j;
    real_T t45_a;
    real_T t47;
    real_T t50_i;
    real_T t57_e;
    real_T t58_i;
    real_T t129;
    real_T t130;
    real_T t131;
    real_T t133;
    real_T t134;
    real_T t135;
    real_T in3_tmp_hv;
    real_T in3_tmp_mg;
    real_T in3_tmp_a4;
    real_T in3_tmp_of;
    real_T in3_tmp_os;
    real_T in3_tmp_nt;
    real_T in3_tmp_k25;
    real_T in3_tmp_hn;
    real_T in3_tmp_d4;
    real_T in3_tmp_tmp;
    real_T in3_tmp_tmp_a;
    real_T in3_tmp_hg;
    real_T in3_tmp_cc;
    real_T in3_tmp_bv;
    real_T in3_tmp_ch;
    real_T in3_tmp_gk;
    real_T in3_tmp_pjd;
    real_T in3_tmp_ib;
    real_T in3_tmp_jj;
    real_T in3_tmp_ce;
    real_T in3_tmp_ceq;
    real_T in3_tmp_tmp_f;
    real_T in3_tmp_tmp_d;
    real_T in3_tmp_tmp_n;
    real_T in3_tmp_tmp_b;
    real_T in3_tmp_tmp_f0;
    real_T in3_tmp_tmp_j;
    real_T in3_tmp_tmp_h;
    real_T in3_tmp_tmp_hg;
    real_T in3_tmp_c2;
    real_T in3_tmp_gr;
    real_T in3_tmp_ejx;
    real_T in3_tmp_eq;
    real_T in3_tmp_av;
    real_T in3_tmp_hz;
    real_T in3_tmp_gc;
    real_T in3_tmp_ak;
    real_T in3_tmp_gu;
    real_T in3_tmp_oav;
    real_T in3_tmp_akz;
    real_T in3_tmp_e3;
    real_T in3_tmp_haj;
    real_T in3_tmp_jx;
    real_T in3_tmp_bq;
    real_T in3_tmp_kq;
    real_T in3_tmp_tmp_hq;
    real_T in3_tmp_tmp_dd;
    real_T in3_tmp_tmp_o;
    real_T in3_tmp_tmp_k;
    real_T in3_tmp_tmp_k0;
    real_T in3_tmp_tmp_on;
    real_T in3_tmp_tmp_do;
    real_T in3_tmp_tmp_l;
    real_T in3_tmp_tmp_m;
    real_T in3_tmp_tmp_oi;
    real_T in3_tmp_at;
    real_T in3_tmp_i2;
    real_T in3_tmp_fi;
    real_T in3_tmp_as;
    real_T in3_tmp_g1;
    real_T in3_tmp_tmp_k1;
    real_T in3_tmp_l3;
    real_T in3_tmp_eu1;
    real_T in3_tmp_tmp_e;
    real_T in3_tmp_tmp_ft;
    real_T in3_tmp_tmp_tmp;
    real_T in3_tmp_tmp_dw;
    real_T in3_tmp_tmp_bc;
    real_T in3_tmp_ol;
    real_T in3_tmp_tmp_p;
    real_T in3_tmp_tmp_tmp_l;
    real_T in3_tmp_tmp_tmp_d;
    real_T in3_tmp_tmp_lt;
    real_T in3_tmp_ad;
    real_T in3_tmp_nk;
    real_T in3_tmp_tmp_tmp_e;
    real_T in3_tmp_tmp_tmp_n;
    real_T in3_tmp_hh;
    real_T in3_tmp_ah;
    real_T in3_tmp_b5;
    real_T in3_tmp_k5;
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
    real_T in3_tmp_br;
    real_T in3_tmp_k0;
    real_T in3_tmp_me;
    real_T in3_tmp_gko;
    real_T in3_tmp_b5t;
    real_T in3_tmp_ilo;
    real_T in3_tmp_bs;
    real_T in3_tmp_h2;
    real_T in3_tmp_df;
    real_T in3_tmp_f5;
    real_T in3_tmp_dkn;
    real_T in3_tmp_pp;
    real_T in3_tmp_gs;
    real_T in3_tmp_f3;
    real_T in3_tmp_o2;
    real_T ct_tmp_f4;
    real_T ct_tmp_o3;
    real_T ct_tmp_l0;
    real_T ct_tmp_e3;
    real_T ct_tmp_gn;
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
    real_T ct_tmp_m;
    real_T ct_tmp_tmp_gh;
    real_T ct_tmp_tmp_an;
    real_T ct_tmp_tmp_e;
    real_T ct_tmp_tmp_b0;
    real_T ct_tmp_tmp_ez;
    real_T ct_tmp_mz;
    real_T ct_tmp_hz;
    real_T ct_tmp_br;
    real_T ct_tmp_dmg;
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
    real_T ct_tmp_pp;
    real_T ct_tmp_k1;
    real_T ct_tmp_p3;
    real_T ct_tmp_eq;
    real_T ct_tmp_k2;
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
    real_T ct_tmp_jd;
    real_T ct_tmp_a2r;
    real_T ct_tmp_jh;
    real_T ct_tmp_gc;
    real_T ct_tmp_njm;
    real_T ct_tmp_lmf;
    real_T ct_tmp_eq1;
    real_T ct_tmp_cgj;
    real_T ct_tmp_hy;
    real_T ct_tmp_o4;
    real_T ct_tmp_dz;
    real_T ct_tmp_df;
    real_T ct_tmp_j4;
    real_T ct_tmp_f2;
    real_T ct_tmp_k2k;
    real_T ct_tmp_tmp_ne;
    real_T ct_tmp_tmp_nb;
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
    real_T ct_tmp_fr;
    real_T ct_tmp_mh;
    real_T ct_tmp_gfu;
    real_T ct_tmp_ccn;
    real_T ct_tmp_kb;
    real_T ct_tmp_dd;
    real_T ct_tmp_cm;
    real_T ct_tmp_knj;
    real_T ct_tmp_kl;
    real_T ct_tmp_fw;
    real_T ct_tmp_gm;
    real_T ct_tmp_k35;
    real_T ct_tmp_nk;
    real_T ct_tmp_pna;
    real_T ct_tmp_e2;
    real_T ct_tmp_l3;
    real_T ct_tmp_ak;
    real_T ct_tmp_e4t;
    real_T ct_tmp_g4;
    real_T ct_tmp_fp5;
    real_T ct_tmp_ei;
    real_T ct_tmp_nu;
    real_T ct_tmp_mzf;
    real_T ct_tmp_bw;
    real_T ct_tmp_nh;
    real_T ct_tmp_c4;
    real_T ct_tmp_mk;
    real_T ct_tmp_js;
    real_T ct_tmp_hu;
    real_T ct_tmp_ct;
    real_T ct_tmp_mq;
    real_T ct_tmp_nb;
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
    real_T t3247_tmp_p;
    real_T Anq_tmp;
    real_T Anq_tmp_tmp;
    real_T Anq_tmp_j;
    real_T Anq_tmp_c;
    real_T Anq_tmp_b;
    real_T Anq_tmp_l;
    real_T Anq_tmp_n;
    real_T Anq_tmp_a;
    real_T Anq_tmp_tmp_n;
    real_T Anq_tmp_d;
    real_T Anq_tmp_g;
    real_T Anq_tmp_f;
    real_T Jmv_g;
    real_T t2;
    real_T t3;
    real_T t4;
    real_T t5_l;
    real_T t6_l;
    real_T t7;
    real_T t8;
    real_T t9;
    real_T t10;
    real_T t11;
    real_T t12;
    real_T t13;
    real_T t17_o;
    real_T t18_k;
    real_T t19_g;
    real_T t20_k;
    real_T t21_j;
    real_T t22_k;
    real_T t23_g;
    real_T t24_h;
    real_T t25_m;
    real_T t26_k;
    real_T t27_c;
    real_T t28_h;
    real_T t29_h;
    real_T t30_d;
    real_T t31_bl;
    real_T t32_p;
    real_T t33_c;
    real_T t34_b;
    real_T t39_l;
    real_T t40_o;
    real_T t41_d;
    real_T t42_m;
    real_T t43_n;
    real_T t44_m;
    real_T t45_i;
    real_T t55_o;
    real_T t56_a;
    real_T t57_k;
    real_T t58_m;
    real_T t59_g;
    real_T t61_n;
    real_T t62_i;
    real_T t65_e;
    real_T t68_e;
    real_T t35_b;
    real_T t36_i;
    real_T t37_k;
    real_T t27_tmp_d;
    real_T t31_tmp;
    real_T t24_tmp;
    real_T t32_tmp_k;
    real_T t25_tmp_a;
    real_T t29_tmp_i;
    real_T t20_b;
    real_T t22_e;
    real_T t23_l;
    real_T t24_i;
    real_T t27_b;
    real_T t28_e;
    real_T t29_b;
    real_T t30_i;
    real_T t31_m;
    real_T t32_l;
    real_T t36_o;
    real_T t37_n;
    real_T t38_in;
    real_T t40_or;
    real_T t41_m;
    real_T t43_a;
    real_T t48_c;
    real_T t49_d;
    real_T t51_g;
    real_T t83_h;
    real_T t84_b;
    real_T t85_d;
    real_T t86_c;
    real_T t87_h;
    real_T t88_f;
    real_T t89_n;
    real_T t90_do;
    real_T t91_e;
    real_T t92_e;
    real_T t93_p;
    real_T t94_n;
    real_T t95_f4;
    real_T t96_e;
    real_T t97_k;
    real_T t98_f;
    real_T t99_k;
    real_T t100_p;
    real_T t103_h;
    real_T t104_d;
    real_T t105_d;
    real_T t106_d;
    real_T t107_j;
    real_T t108_a;
    real_T t111_a;
    real_T t114_a;
    real_T t115_l;
    real_T t116_i;
    real_T t118_n;
    real_T t120_b;
    real_T t122_h;
    real_T t123_b;
    real_T t83_tmp_ai;
    real_T t84_tmp_b;
    real_T t85_tmp_l;
    real_T t86_tmp_h;
    real_T t87_tmp_d;
    real_T t88_tmp_g;
    real_T t95_tmp_j;
    real_T t96_tmp_m;
    real_T t83_tmp_tmp_l;
    real_T t85_tmp_tmp_o;
    real_T t99_tmp_p;
    real_T t100_tmp_d;
    real_T t103_tmp_g;
    real_T t104_tmp_m;
    real_T t111_tmp_o;
    real_T t114_tmp_f;
    real_T t118_tmp_i;
    real_T t122_tmp_dm;
    real_T t84_tmp_tmp_f;
    real_T t87_tmp_tmp_n;
    real_T t86_tmp_tmp_d;
    real_T t88_tmp_tmp_c;
    real_T t99_tmp_tmp_b;
    real_T t100_tmp_tmp_b;
    real_T t95_tmp_tmp_h;
    real_T t96_tmp_tmp_g;
    real_T t114_tmp_tmp_c;
    real_T t111_tmp_tmp_d;
    real_T t118_tmp_tmp_a;
    real_T in4_tmp_hsp;
    real_T in4_tmp_cr;
    real_T in4_tmp_cf;
    real_T t122_tmp_tmp_m;
    real_T in4_tmp_ok;
    real_T in4_tmp_ep;
    real_T in4_tmp_jq;
    real_T in4_tmp_l3;
    real_T in4_tmp_nz;
    real_T in4_tmp_en;
    real_T in4_tmp_cz;
    real_T t95_tmp_j3;
    real_T t96_tmp_my;
    real_T t99_tmp_e;
    real_T t100_tmp_h;
    real_T t103_tmp_c;
    real_T t104_tmp_j;
    real_T t111_tmp_ah;
    real_T t114_tmp_d;
    real_T t118_tmp_bb;
    real_T t122_tmp_c;
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
    real_T in4_tmp_do;
    real_T in4_tmp_okb;
    real_T rMin_a;
    real_T Xnorm0_e;
    real_T cMin_o;
    real_T cVal_i;
    real_T t_b;
    real_T Linv;
    real_T atmp;
    real_T xnorm;
    real_T scale_aa;
    real_T absxk_j;
    real_T t_a;
    real_T c_g;
    real_T x_oe;
    real_T d_a;
    real_T s_c;
    real_T d_d;
    real_T s_d;
    real_T ic_l;
    real_T t8_d;
    real_T t9_j;
    real_T t11_k;
    real_T t12_d;
    real_T t13_c;
    real_T t14_k;
    real_T t15_p;
    real_T t16_e;
    real_T t25_i;
    real_T t29_bv;
    real_T t31_i;
    real_T t50_h;
    real_T t53;
    real_T t54;
    real_T t17_d;
    real_T t18_g;
    real_T t19_m;
    real_T t57_g;
    real_T t64;
    real_T t65_h;
    real_T t68_a;
    real_T t69;
    real_T t70_e;
    real_T t12_tmp;
    real_T t13_tmp;
    real_T t14_tmp;
    real_T t15_tmp;
    real_T out1_tmp_ir;
    real_T out1_tmp_hl;
    real_T out1_tmp_kq;
    real_T out1_tmp_fd;
    real_T out1_tmp_lvb;
    real_T out1_tmp_obm;
    real_T out1_tmp_lj5;
    real_T out1_tmp_dzl;
    real_T out1_tmp_a3;
    real_T t1463_j;
    real_T t1464_o;
    real_T t1465_e;
    real_T t1524_m;
    real_T t1546_d;
    real_T t1526_c;
    real_T t1542_i;
    real_T t1546_tmp_k;
    real_T t1546_tmp_c;
    real_T t1543_tmp_ft;
    real_T t1543_tmp_j;
    real_T t1542_tmp_i;
    real_T out1_tmp_c3j;
    real_T out1_tmp_dah;
    real_T out1_tmp_aib;
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
    real_T out1_tmp_a3n;
    real_T out1_tmp_ee;
    real_T out1_tmp_mx;
    real_T out1_tmp_fpi;
    real_T out1_tmp_h1;
    real_T out1_tmp_bs;
    real_T out1_tmp_fx;
    real_T out1_tmp_ltw;
    real_T out1_tmp_px2;
    real_T out1_tmp_nta;
    real_T out1_tmp_id;
    real_T out1_tmp_be;
    real_T out1_tmp_ev3;
    real_T out1_tmp_prx;
    real_T out1_tmp_ou;
    real_T out1_tmp_ff;
    real_T out1_tmp_dgn;
    real_T out1_tmp_i5;
    real_T out1_tmp_i40;
    real_T out1_tmp_h4;
    real_T out1_tmp_fr;
    real_T out1_tmp_hh;
    real_T out1_tmp_l4;
    real_T out1_tmp_gkd;
    real_T out1_tmp_lxm;
    real_T out1_tmp_me;
    real_T out1_tmp_n3n;
    real_T out1_tmp_nv;
    real_T out1_tmp_ltqv;
    real_T out1_tmp_poc;
    real_T out1_tmp_lng;
    real_T out1_tmp_pg;
    real_T out1_tmp_mrz;
    real_T out1_tmp_ck;
    real_T out1_tmp_az;
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
    real_T out1_tmp_iw;
    real_T out1_tmp_d0v;
    real_T out1_tmp_am;
    real_T out1_tmp_obe;
    real_T out1_tmp_imu;
    real_T out1_tmp_ms0;
    real_T out1_tmp_h2r;
    real_T out1_tmp_ls2;
    real_T out1_tmp_tmp_ap;
    real_T out1_tmp_tmp_nl;
    real_T out1_tmp_tmp_ja;
    real_T out1_tmp_lmn;
    real_T out1_tmp_gs;
    real_T out1_tmp_mx5;
    real_T out1_tmp_dgf;
    real_T out1_tmp_lsn;
    real_T out1_tmp_dk5;
    real_T out1_tmp_jxh;
    real_T out1_tmp_jul;
    real_T out1_tmp_fwk;
    real_T out1_tmp_geqd;
    real_T out1_tmp_tmp_ne;
    real_T out1_tmp_tmp_e1;
    real_T out1_tmp_tmp_d5;
    real_T out1_tmp_aym;
    real_T out1_tmp_hn;
    real_T out1_tmp_b5o;
    real_T out1_tmp_i42;
    real_T out1_tmp_pag;
    real_T out1_tmp_bq;
    real_T out1_tmp_my0;
    real_T out1_tmp_get;
    real_T out1_tmp_kd;
    real_T out1_tmp_gsp;
    real_T out1_tmp_pya;
    real_T out1_tmp_tmp_fk;
    real_T out1_tmp_tmp_hw;
    real_T out1_tmp_tmp_hh;
    real_T out1_tmp_bb;
    real_T out1_tmp_nrn;
    real_T out1_tmp_ebo;
    real_T out1_tmp_leu;
    real_T out1_tmp_jl;
    real_T out1_tmp_m4;
    real_T out1_tmp_iwr;
    real_T out1_tmp_b32;
    real_T out1_tmp_evy;
    real_T out1_tmp_hwv;
    real_T out1_tmp_ngn;
    real_T out1_tmp_gok;
    real_T out1_tmp_i33;
    real_T out1_tmp_acn;
    real_T out1_tmp_pc5;
    real_T out1_tmp_mj;
    real_T out1_tmp_kf1;
    real_T out1_tmp_he;
    real_T out1_tmp_bl5;
    real_T out1_tmp_fpd;
    real_T out1_tmp_ba;
    real_T out1_tmp_ie;
    real_T out1_tmp_jz;
    real_T out1_tmp_ej;
    real_T out1_tmp_ktz;
    real_T out1_tmp_cmv;
    real_T out1_tmp_tmp_fo;
    real_T out1_tmp_tmp_ga;
    real_T out1_tmp_hq4;
    real_T out1_tmp_cp;
    real_T out1_tmp_lda;
    real_T out1_tmp_jvk;
    real_T out1_tmp_n55;
    real_T out1_tmp_f0n;
    real_T out1_tmp_tmp_ev;
    real_T out1_tmp_tmp_pm;
    real_T out1_tmp_tmp_ai;
    real_T out1_tmp_buo;
    real_T out1_tmp_gi;
    real_T out1_tmp_fk4;
    real_T out1_tmp_ki;
    real_T out1_tmp_o2ce;
    real_T out1_tmp_gyt;
    real_T out1_tmp_pdj;
    real_T out1_tmp_nf;
    real_T out1_tmp_dw0;
    real_T out1_tmp_ij;
    real_T out1_tmp_pur;
    real_T out1_tmp_efu;
    real_T out1_tmp_gyz;
    real_T out1_tmp_gk3;
    real_T out1_tmp_tmp_az0;
    real_T out1_tmp_tmp_fj;
    real_T out1_tmp_tmp_g3;
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
    real_T out1_tmp_pw;
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
    real_T out1_tmp_ns;
    real_T out1_tmp_esz;
    real_T out1_tmp_ot;
    real_T out1_tmp_dqt;
    real_T out1_tmp_tmp_gj;
    real_T out1_tmp_tmp_dl;
    real_T out1_tmp_tmp_ma;
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
    real_T out1_tmp_cg;
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
    real_T out1_tmp_ms2;
    real_T out1_tmp_m5;
    real_T out1_tmp_pl;
    real_T out1_tmp_jrc;
    real_T dmin;
    real_T holdPoint;
    real_T evalPointVector_idx_0;
    real_T anrm;
    real_T absx;
    real_T cfromc;
    real_T cfrom1;
    real_T cto1;
    real_T mul;
    real_T tst;
    real_T p_g;
    real_T r_j;
    real_T s_f;
    real_T c_d;
    real_T b_ab;
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
    real_T b_a_c;
    real_T anrm_i;
    real_T absx_e;
    real_T ctoc;
    real_T cfrom1_i;
    real_T cto1_b;
    real_T mul_n;
    real_T tst_m;
    real_T p_i;
    real_T r_n;
    real_T s_e;
    real_T c_gz;
    real_T b_j;
    real_T c_s;
    real_T anorm;
    real_T e_a;
    real_T sm_i;
    real_T df_c;
    real_T adf_l;
    real_T tb_h;
    real_T ab_i;
    real_T acmx_n;
    real_T acmn_j;
    real_T a_k;
    real_T normH_m;
    real_T absx_i;
    real_T ssq;
    real_T c_p;
    real_T c_h;
    real_T q0_a;
    real_T q0_b;
    real_T q0_c;
    real_T q0_d;
    real_T qF_a;
    real_T qF_b;
    real_T qF_c;
    real_T qF_d;
    real_T linearScaling;
    real_T n_f;
    real_T dp;
    real_T ob;
    real_T oc;
    real_T od;
    real_T oa;
    real_T ob_l;
    real_T assign_temp_a_data;
    real_T assign_temp_b_data;
    real_T assign_temp_c_data;
    real_T assign_temp_d_data;
    real_T ob_tmp;
    real_T oc_tmp;
    real_T od_tmp;
    real_T h_idx_0;
    real_T b_idx_0;
    real_T dp_a;
    real_T n_fn;
    real_T oa_c;
    real_T ob_a;
    real_T oc_n;
    real_T od_f;
    real_T oa_k;
    real_T ob_h;
    real_T assign_temp_a_data_b;
    real_T assign_temp_b_data_i;
    real_T assign_temp_c_data_o;
    real_T assign_temp_d_data_g;
    real_T ob_tmp_b;
    real_T oc_tmp_a;
    real_T od_tmp_h;
    real_T c_idx_0;
    real_T nrmGradInf;
    real_T nrmDirInf;
    real_T beta;
    real_T qpfvalQuadExcess;
    real_T smax;
    real_T s_g;
    real_T qpfvalQuadExcess_tmp;
    real_T maxConstr_new;
    real_T normDelta;
    real_T solution_lambda;
    real_T tempMaxConstr;
    real_T constrViolation_basicX;
    real_T temp;
    real_T smax_d;
    real_T s_er;
    real_T vn1;
    real_T xnorm_k;
    real_T a_f;
    real_T scale_nw;
    real_T absxk_l;
    real_T t_a5;
    real_T t898_m;
    real_T t899_b5;
    real_T t900_e;
    real_T t901_g;
    real_T t902_b;
    real_T t903_m;
    real_T t899_tmp_f;
    real_T t898_tmp_e;
    real_T t900_tmp_d;
    real_T ct_tmp_mn;
    real_T t901_tmp_f;
    real_T t903_tmp_h;
    real_T ct_tmp_eo;
    real_T t902_tmp_f;
    real_T ct_tmp_ej;
    real_T ct_tmp_ob;
    real_T ct_tmp_jxs;
    real_T ct_tmp_ff;
    real_T ct_tmp_kl1;
    real_T ct_tmp_ny;
    real_T ct_tmp_f3;
    real_T ct_tmp_pfi;
    real_T ct_tmp_i1q;
    real_T ct_tmp_kbu;
    real_T t900_tmp_i;
    real_T t899_tmp_cw;
    real_T t898_tmp_b;
    real_T t901_tmp_k;
    real_T t903_tmp_l;
    real_T t902_tmp_b;
    real_T ct_tmp_mr3;
    real_T ct_tmp_bk;
    real_T ct_tmp_l3o;
    real_T ct_tmp_gi;
    real_T ct_tmp_tmp_p;
    real_T ct_tmp_tmp_c;
    real_T ct_tmp_tmp_m;
    real_T ct_tmp_tmp_i;
    real_T ct_tmp_aj;
    real_T ct_tmp_dy;
    real_T ct_tmp_hb;
    real_T ct_tmp_ev;
    real_T ct_tmp_bac;
    real_T ct_tmp_cc4;
    real_T ct_tmp_cb;
    real_T ct_tmp_ie;
    real_T ct_tmp_p0l;
    real_T ct_tmp_lw;
    real_T ct_tmp_tmp_n1;
    real_T ct_tmp_os;
    real_T ct_tmp_f1;
    real_T ct_tmp_ax;
    real_T ct_tmp_iag;
    real_T temp_l;
    real_T smax_h;
    real_T s_k;
    real_T temp_n;
    real_T smax_k;
    real_T s_c2;
    real_T smax_hd;
    real_T s_m;
    real_T scale_f;
    real_T absxk_g;
    real_T t_d;
    real_T b_atmp;
    real_T beta1_c;
    real_T c_A_n;
    real_T scale_nr;
    real_T absxk_d;
    real_T t_n;
    real_T b_atmp_l;
    real_T beta1_p;
    real_T c_A_e;
    real_T scale_o;
    real_T absxk_p;
    real_T t_ii;
    real_T b_atmp_d;
    real_T beta1_b;
    real_T c_A_b;
    real_T scale_l;
    real_T absxk_b;
    real_T t_na;
    real_T b_atmp_p;
    real_T beta1_o;
    real_T c_A_p;
    real_T scale_h;
    real_T absxk_o;
    real_T t_bt;
    real_T a_cy;
    real_T c_gi;
    real_T tmp;
    real_T cosa_e;
    real_T cosc_o;
    real_T cosb_l;
    real_T f_idx_0;
    real_T b_atmp_o;
    real_T beta1_e;
    real_T c_A_o;
    real_T scale_li;
    real_T absxk_o3;
    real_T t_ac;
    real_T b_c_b;
    real_T normDelta_o;
    real_T solution_lambda_c;
    real_T smax_f;
    real_T s_b;
    real_T smax_l;
    real_T s_a;
    real_T y_c;
    real_T t8_a;
    real_T t9_n;
    real_T t11_o;
    real_T t12_a;
    real_T t13_l;
    real_T t14_hv;
    real_T t15_f;
    real_T t16_d;
    real_T t25_n;
    real_T t29_g;
    real_T t31_p;
    real_T t50_p;
    real_T t53_m;
    real_T t54_p;
    real_T t17_dr;
    real_T t18_l;
    real_T t19_b;
    real_T t57_ed;
    real_T t64_g;
    real_T t65_c;
    real_T t68_o;
    real_T t69_f;
    real_T t70_o;
    real_T t12_tmp_i;
    real_T t13_tmp_d;
    real_T t14_tmp_m;
    real_T t15_tmp_o;
    real_T out1_tmp_oag;
    real_T bkj_e;
    real_T bkj_m;
    real_T penaltyParamTrial;
    real_T constrViolationEq;
    real_T constrViolationIneq;
    real_T TrialState_cIneq;
    real_T constrViolation;
    real_T tol;
    real_T maxDiag;
    real_T b_atmp_i;
    real_T tau_o;
    real_T c_hl;
    real_T b_atmp_lx;
    real_T beta1_j;
    real_T c_A_n5;
    real_T scale_j;
    real_T absxk_ie;
    real_T t_n2;
    real_T dp_l;
    real_T n_c;
    real_T oa_f;
    real_T ob_aq;
    real_T oc_p;
    real_T od_m;
    real_T oa_p;
    real_T ob_m;
    real_T assign_temp_a_data_h;
    real_T assign_temp_b_data_l;
    real_T assign_temp_c_data_h;
    real_T assign_temp_d_data_f;
    real_T ob_tmp_j;
    real_T oc_tmp_h;
    real_T od_tmp_he;
    real_T b_atmp_a;
    real_T beta1_o4;
    real_T c_A_nk;
    real_T scale_k;
    real_T absxk_n;
    real_T t_e;
    real_T c_c;
    real_T b_s_n;
    real_T b_temp;
    real_T roe;
    real_T absa;
    real_T absb;
    real_T scale_b;
    real_T ads;
    real_T bds;
    real_T nlpComplErrorTmp;
    real_T smax_a;
    real_T s_j;
    real_T d31;
    real_T temp_j;
    real_T temp2;
    real_T taui;
    real_T xnorm_l;
    real_T tau_tmp;
    real_T scale_fq;
    real_T absxk_id;
    real_T t_bx;
    real_T temp1;
    real_T taui_c;
    real_T xnorm_e;
    real_T tau_tmp_d;
    real_T scale_n4;
    real_T absxk_l1;
    real_T t_o;
    real_T denomTol;
    real_T alphaTemp;
    real_T phaseOneCorrectionP;
    real_T ratio;
    real_T b_c_a;
    real_T c_j;
    real_T t1164_b;
    real_T t1165_l;
    real_T t1166_h;
    real_T t1466_h;
    real_T t1488_f;
    real_T t1489_k;
    real_T t1490_f;
    real_T t1491_i;
    real_T t1492_p;
    real_T t1493_d;
    real_T t519_o;
    real_T bkj_g;
    real_T ssq_n;
    real_T c_gv;
    real_T tempMaxConstr_j;
    real_T obj_maxConstrWorkspace;
    real_T c_jc;
    real_T tol_g;
    real_T maxDiag_j;
    real_T vnorm;
    real_T qnorm;
    real_T vscale_data;
    real_T l;
    real_T t_c;
    real_T bb;
    real_T tol_n;
    real_T qtb;
    real_T temp_d;
    real_T d32;
    real_T alpha1;
    real_T y_kh;
    real_T temp_i;
    real_T s_d4;
    real_T temp_jp;
    real_T b_c_g;
    real_T smax_g;
    real_T s_je;
    real_T CovMat_h;
    real_T sina_o;
    real_T sinb_o;
    real_T sinc_k;
    real_T cosa_h;
    real_T cosb_k;
    real_T cosc_c;
    real_T q_tmp;
    real_T ctemp;
    real_T stemp;
    real_T temp_a;
    real_T obj_maxConstrWorkspace_j;
    real_T c_a;
    real_T obj_maxConstrWorkspace_l;
    real_T c_b;
    real_T delta;
    real_T expa;
    real_T sinchdelta;
    real_T A_hd;
    real_T A_g;
    real_T delta_l;
    real_T expa_h;
    real_T sinchdelta_g;
    real_T A_hn;
    real_T A_k;
    real_T absx_p;
    real_T z_n;
    real_T s_j3;
    real_T R_nx;
    real_T d33;
    real_T d34;
    real_T dotSY;
    real_T curvatureS;
    real_T temp_iz;
    real_T cfromc_m;
    real_T ctoc_i;
    real_T cfrom1_iy;
    real_T cto1_by;
    real_T mul_k;
    real_T cfromc_l;
    real_T ctoc_f;
    real_T cfrom1_h;
    real_T cto1_g;
    real_T mul_h;
    real_T cfromc_l3;
    real_T ctoc_p;
    real_T cfrom1_k;
    real_T cto1_c;
    real_T mul_j;
    real_T cfromc_a;
    real_T ctoc_b;
    real_T cfrom1_j;
    real_T cto1_f;
    real_T mul_g;
    real_T ctemp_b;
    real_T stemp_o;
    real_T temp_aq;
    real_T ctemp_p;
    real_T stemp_l;
    real_T temp_ig;
    real_T ctemp_a;
    real_T stemp_e;
    real_T temp_h;
    real_T a_ch;
    real_T b_b;
    real_T xloc;
    real_T v;
    real_T v_e;
    real_T v_j;
    real_T ssq_d;
    real_T c_jt;
    real_T c_bu;
    real_T temp_h2;
    real_T B_c;
    real_T B_h;
    real_T lbDelta;
    real_T lbLambda;
    real_T WorkingSet_beq;
    real_T scale_ns;
    real_T absxk_hy;
    real_T t_py;
    real_T temp_p;
    real_T b_B_ow;
    real_T B_i;
    real_T d35;
    real_T d36;
    real_T c_k2;
    real_T constrViolationEq_n;
    real_T constrViolationIneq_b;
    real_T Cineq_workspace;
    real_T scale_nx;
    real_T absxk_jg;
    real_T t_h;
    real_T temp_k;
    real_T scale_i;
    real_T absxk_k;
    real_T t_j2;
    real_T d37;
    real_T W;
    real_T temp_ky;
    real_T c_e;
    real_T temp_b;
    real_T c_pb;
    real_T evalPointVector_idx_1;
    real_T evalPointVector_idx_2;
    real_T f1;
    real_T fs_p;
    real_T gs;
    real_T f1_l;
    real_T fs_h;
    real_T gs_m;
    real_T x_e;
    real_T sr;
    real_T si;
    real_T scale_d;
    real_T absxk_ix;
    real_T t_k;
    real_T scale_km;
    real_T absxk_a;
    real_T t_at;
    real_T posPts_idx_0;
    real_T posPts_idx_1;
    real_T coeffVec_tmp;
    real_T s_f2;
    real_T tol_j;
    real_T x_ei;
    real_T allFinite_tmp;
    real_T x_i;
    real_T s_gk;
    real_T s_n;
    real_T allFinite_tmp_g;
    real_T b_signal;
    real_T b_signal_b;
    real_T t_bd;
    real_T t_b5;
    SL_Bus_std_msgs_UInt8 In1_me;      // '<S113>/In1'
    SL_Bus_std_msgs_Float32 In1_b;     // '<S127>/In1'
    SL_Bus_std_msgs_Float32 In1_hb;    // '<S139>/In1'
    SL_Bus_std_msgs_Bool In1_gf;       // '<S117>/In1'
    SL_Bus_sonia_common_ros2_KillStatus In1_lz;// '<S116>/In1'
    uint16_T BufferToMakeInportVirtual_Ins_e[8];
    int64_T b_value;
    boolean_T umax_incr_flag[8];
    boolean_T umin_incr_flag[8];
    boolean_T umax_incr_flag_j[8];
    boolean_T umin_incr_flag_o[8];
    boolean_T bv3[8];
    uint32_T b_u[2];
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
    int32_T Jx_i[2];
    int32_T tmp_size_n[2];
    int32_T RLinv_size[2];
    int32_T b_D_size[2];
    int32_T b_H_size_o[2];
    int32_T AcRow_size[2];
    int32_T b_H_size_d[2];
    int32_T Q_size[2];
    int32_T b_A_size[2];
    int32_T idx[2];
    int32_T tmp_size_k[2];
    int32_T b_size_g[2];
    int32_T assign_temp_a_size[2];
    int32_T assign_temp_b_size[2];
    int32_T assign_temp_c_size[2];
    int32_T assign_temp_d_size[2];
    int32_T assign_temp_a_size_o[2];
    int32_T assign_temp_b_size_n[2];
    int32_T assign_temp_c_size_h[2];
    int32_T assign_temp_d_size_k[2];
    int32_T tmp_size_l[2];
    int32_T tmp_size_b[2];
    int32_T tmp_size_f[2];
    int32_T tmp_size_e[2];
    int32_T tmp_size_i[2];
    int32_T tmp_size_bu[2];
    int32_T tmp_size_eb[2];
    int32_T tmp_size_o[2];
    int32_T tmp_size_ot[2];
    int32_T tmp_size_a[2];
    int32_T tmp_size_h[2];
    int32_T assign_temp_a_size_b[2];
    int32_T assign_temp_b_size_nu[2];
    int32_T assign_temp_c_size_n[2];
    int32_T assign_temp_d_size_h[2];
    int32_T tmp_size_be[2];
    int32_T tmp_size_g[2];
    rmw_qos_profile_t qos_profile;
    int8_T b_ipiv_e[6];
    int8_T ipiv_e[6];
    boolean_T b_e[4];
    int16_T sizes[2];
    int16_T sizes_m[2];
    int16_T Jx_k[2];
    int16_T varargin_2[2];
    int16_T Je_j[2];
    real32_T rtb_Merge2_data;
    int32_T base_index;
    int32_T ibmat;
    int32_T b_j_b;
    int32_T coffset;
    int32_T Ns;
    int32_T i;
    int32_T i_l;
    int32_T i_j;
    int32_T i_m;
    int32_T R_tmp;
    int32_T R_tmp_l;
    int32_T pny;
    int32_T nmoves;
    int32_T TotalFreeMoves;
    int32_T j;
    int32_T ioff;
    int32_T b_j_i;
    int32_T i_o;
    int32_T pny_b;
    int32_T trueCount;
    int32_T b_Ac_m;
    int32_T loop_ub;
    int32_T nmoves_tmp;
    int32_T i_input_sizes_idx_1_tmp;
    int32_T s_size_idx_0;
    int32_T Mu_size_idx_0;
    int32_T Mv_aux_size_idx_0;
    int32_T i_g;
    int32_T loop_ub_l;
    int32_T i1;
    int32_T loop_ub_p;
    int32_T loop_ub_n;
    int32_T input_sizes_idx_0;
    int32_T b_input_sizes_idx_0;
    int32_T Sum_tmp;
    int32_T loop_ub_tmp;
    int32_T input_sizes_idx_0_tmp;
    int32_T mc;
    int32_T coffset_f;
    int32_T boffset;
    int32_T aoffset;
    int32_T j_o;
    int32_T i_jw;
    int32_T k;
    int32_T b_i;
    int32_T b_k;
    int32_T i2;
    int32_T b_i_o;
    int32_T i_f;
    int32_T b_i_k;
    int32_T b_k_l;
    int32_T b_I_tmp;
    int32_T b_I_tmp_a;
    int32_T j_m;
    int32_T b_k_g;
    int32_T eint;
    int32_T i_mp;
    int32_T i3;
    int32_T i4;
    int32_T i5;
    int32_T n_n;
    int32_T nb;
    int32_T nbitson;
    int32_T n_ns;
    int32_T i6;
    int32_T i7;
    int32_T i8;
    int32_T i9;
    int32_T mLinIneq;
    int32_T mIneq;
    int32_T mConstrMax;
    int32_T maxDims;
    int32_T mNonlinIneq;
    int32_T k_j;
    int32_T ia;
    int32_T i_o5;
    int32_T WorkingSet_tmp_tmp;
    int32_T mFixed;
    int32_T mIneq_c;
    int32_T mLB;
    int32_T mUB;
    int32_T mConstr;
    int32_T mLinIneq_l;
    int32_T qpoptions_MaxIterations;
    int32_T k_l;
    int32_T n_j;
    int32_T ix_f;
    int32_T iy;
    int32_T b_ix;
    int32_T b_iy;
    int32_T d_ix;
    int32_T loop_ub_b;
    int32_T u1;
    int32_T nVar_tmp_tmp;
    int32_T n_tmp;
    int32_T iy_tmp;
    int32_T mLinIneq_b;
    int32_T k_f;
    int32_T b_tmp_i;
    int32_T yk;
    int32_T i_k;
    int32_T i_c;
    int32_T ineqRange_size_idx_1;
    int32_T i10;
    int32_T loop_ub_c;
    int32_T loop_ub_j;
    int32_T k_a;
    int32_T i_d;
    int32_T icf_tmp_ic;
    int32_T i2_e;
    int32_T ix_p;
    int32_T a_o;
    int32_T i_jc;
    int32_T kidx;
    int32_T i2_h;
    int32_T Tries;
    int32_T i_mq;
    int32_T i11;
    int32_T kidx_d;
    int32_T nA;
    int32_T tmp_j;
    int32_T exponent;
    int32_T b_exponent;
    int32_T i_jg;
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
    int32_T k_lm;
    int32_T e_j;
    int32_T e_i;
    int32_T b_s_b;
    int32_T i12;
    int32_T i13;
    int32_T i14;
    int32_T F_tmp;
    int32_T n_a;
    int32_T nb_j;
    int32_T nbitson_n;
    int32_T b_n;
    int32_T i15;
    int32_T i16;
    int32_T i17;
    int32_T i18;
    int32_T row;
    int32_T col;
    int32_T col_end;
    int32_T idx_mat;
    int32_T i19;
    int32_T loop_ub_pw;
    int32_T loop_ub_o;
    int32_T d_k;
    int32_T i_a;
    int32_T icf_tmp_h;
    int32_T tmp_size_idx_0;
    int32_T i20;
    int32_T i21;
    int32_T loop_ub_i;
    int32_T loop_ub_m;
    int32_T loop_ub_h;
    int32_T mc_c;
    int32_T coffset_m;
    int32_T boffset_k;
    int32_T aoffset_a;
    int32_T bkj_ey;
    int32_T j_j;
    int32_T i_fb;
    int32_T b_i_m;
    int32_T i22;
    int32_T idx_current;
    int32_T i_e;
    int32_T i23;
    int32_T obj_next_next_next_next_next__p;
    int32_T i24;
    int32_T i_h;
    int32_T i_l4;
    int32_T b_i_l;
    int32_T i25;
    int32_T i26;
    int32_T j_c;
    int32_T i_n;
    int32_T i_fr;
    int32_T i27;
    int32_T i28;
    int32_T b_Su1_tmp;
    int32_T AA_tmp;
    int32_T i_hi;
    int32_T i29;
    int32_T k_b;
    int32_T i30;
    int32_T Ak1_tmp;
    int32_T Jx_tmp;
    int32_T TotalFreeMoves_g;
    int32_T nA_o;
    int32_T kDrop;
    int32_T kNext;
    int32_T idx_h;
    int32_T loop_ub_i0;
    int32_T b_Ac_g;
    int32_T b_m;
    int32_T b_n_i;
    int32_T i_j_i;
    int32_T iC_p;
    int32_T RLinv_idx_0_tmp;
    int32_T RLinv_idx_1_tmp;
    int32_T i_j_tmp;
    int32_T loop_ub_hy;
    int32_T TL_size_idx_0;
    int32_T R_size_idx_0;
    int32_T minmana;
    int32_T minmn;
    int32_T ii_l;
    int32_T mmi;
    int32_T mmip1;
    int32_T ix0;
    int32_T knt_g;
    int32_T coltop_b;
    int32_T n_tmp_g;
    int32_T b_m_tmp;
    int32_T kend_c;
    int32_T k_c;
    int32_T b_i_e;
    int32_T idx_p;
    int32_T i_at;
    int32_T idx_g;
    int32_T g_k;
    int32_T jj;
    int32_T jp1j;
    int32_T jBcol;
    int32_T kAcol;
    int32_T iy_f;
    int32_T jA;
    int32_T ijA;
    int32_T e_k_p;
    int32_T jj_c;
    int32_T ix_m;
    int32_T b_ix_m;
    int32_T iy_a;
    int32_T e_e2;
    int32_T ijA_i;
    int32_T i_i;
    int32_T i31;
    int32_T i32;
    int32_T i33;
    int32_T e_i_b;
    int32_T itau;
    int32_T iaii;
    int32_T lastc;
    int32_T f;
    int32_T coltop_k;
    int32_T b_ia;
    int32_T jy;
    int32_T l1;
    int32_T m_e;
    int32_T l_a;
    int32_T lsv;
    int32_T lend;
    int32_T lendsv;
    int32_T iscale;
    int32_T i_fy;
    int32_T b_anorm_tmp;
    int32_T n_tmp_o;
    int32_T sgn1;
    int32_T sgn2;
    int32_T b_l;
    int32_T itau_l;
    int32_T iaii_k;
    int32_T lastv;
    int32_T lastc_f;
    int32_T e_p;
    int32_T coltop_e;
    int32_T jy_c;
    int32_T jtot;
    int32_T l1_d;
    int32_T m_i;
    int32_T l_f;
    int32_T lsv_o;
    int32_T lend_o;
    int32_T lendsv_p;
    int32_T iscale_p;
    int32_T i_gb;
    int32_T iscale_tmp;
    int32_T sgn1_g;
    int32_T sgn2_e;
    int32_T Tries_j;
    int32_T b_k_n;
    int32_T b_degrees_tmp;
    int32_T emlN_tmp;
    int32_T loop_ub_tmp_b;
    int32_T idxAjj;
    int32_T j_cs;
    int32_T ix_i;
    int32_T b_h;
    int32_T d_dd;
    int32_T b_ix_i;
    int32_T b_iy_n;
    int32_T b_k_o;
    int32_T i34;
    int32_T db;
    int32_T fb;
    int32_T ibcol;
    int32_T b_k_i;
    int32_T isMrows_tmp;
    int32_T db_tmp;
    int32_T hb_tmp;
    int32_T db_m;
    int32_T fb_p;
    int32_T ibcol_k;
    int32_T b_k_k;
    int32_T isMrows_tmp_h;
    int32_T db_tmp_g;
    int32_T hb_tmp_i;
    int32_T ia_b;
    int32_T i_cr;
    int32_T itau_k;
    int32_T lastv_i;
    int32_T lastc_fv;
    int32_T coltop_f;
    int32_T b_ia_b;
    int32_T loop_ub_m1;
    int32_T iy_j;
    int32_T b_iy_h;
    int32_T b_hj;
    int32_T d_da;
    int32_T ia_a;
    int32_T i35;
    int32_T stride_0_0;
    int32_T stride_1_0;
    int32_T loop_ub_h2;
    int32_T i36;
    int32_T i37;
    int32_T loop_ub_tmp_o;
    int32_T nVar;
    int32_T k_lb;
    int32_T idxStartIneq;
    int32_T idxEndIneq;
    int32_T idxStartIneq_tmp;
    int32_T nVarOrig;
    int32_T idx_max;
    int32_T ix_n;
    int32_T mLBOrig;
    int32_T mFiniteLBOrig;
    int32_T mLBOrig_tmp;
    int32_T nVar_g;
    int32_T idx_m;
    int32_T ixlast;
    int32_T PROBTYPE_ORIG;
    int32_T mConstr_j;
    int32_T idxStartIneq_e;
    int32_T idxEndIneq_d;
    int32_T nVar_tmp;
    int32_T idxStartIneq_tmp_c;
    int32_T activeSetChangeID;
    int32_T nVar_j;
    int32_T globalActiveConstrIdx;
    int32_T idxMinLambda;
    int32_T k_h;
    int32_T iQR0;
    int32_T g_l;
    int32_T nVar_a;
    int32_T mWConstr;
    int32_T nVar_d;
    int32_T rankQR;
    int32_T ldq;
    int32_T b_idx;
    int32_T jBcol_i;
    int32_T iAcol;
    int32_T ix_h;
    int32_T br;
    int32_T n_g;
    int32_T iQR0_g;
    int32_T b_n_o;
    int32_T temp_tmp;
    int32_T idx_e;
    int32_T ix0_o;
    int32_T iy0;
    int32_T b_g;
    int32_T k_ch;
    int32_T minmn_g;
    int32_T nfxd;
    int32_T b_j_f;
    int32_T ma_tmp;
    int32_T ma;
    int32_T minmn_gh;
    int32_T ii_ld;
    int32_T nmi;
    int32_T mmi_f;
    int32_T pvt;
    int32_T itemp;
    int32_T j_n;
    int32_T ii_tmp;
    int32_T knt_m;
    int32_T d_d5;
    int32_T c_tmp;
    int32_T kend_b;
    int32_T k_g;
    int32_T b_info;
    int32_T ip;
    int32_T b_i_j;
    int32_T b_j_e;
    int32_T kAcol_e;
    int32_T i38;
    int32_T i39;
    int32_T jj_n;
    int32_T jp1j_k;
    int32_T b_j_d;
    int32_T c_gc;
    int32_T ix_l;
    int32_T k_cm;
    int32_T iy_g;
    int32_T d_kz;
    int32_T b_info_j;
    int32_T ip_k;
    int32_T b_i_g;
    int32_T b_j_bj;
    int32_T kAcol_g;
    int32_T i40;
    int32_T i41;
    int32_T b_i_mq;
    int32_T jj_i;
    int32_T jp1j_m;
    int32_T b_j_it;
    int32_T c_l;
    int32_T kAcol_d;
    int32_T iy_fk;
    int32_T jA_d;
    int32_T c_ps;
    int32_T jj_e;
    int32_T b_j_m;
    int32_T ix_lo;
    int32_T c_k_m;
    int32_T b_ix_e;
    int32_T iy_e;
    int32_T d_il;
    int32_T b_index;
    int32_T b_jcol;
    int32_T b_itilerow;
    int32_T b_index_j;
    int32_T itau_m;
    int32_T ii_p;
    int32_T ix0_m;
    int32_T knt_l;
    int32_T lastv_l;
    int32_T iac;
    int32_T ia_k;
    int32_T jA_dv;
    int32_T i_mo;
    int32_T kend_d;
    int32_T itau_c;
    int32_T ii_n;
    int32_T ix0_g;
    int32_T knt_ll;
    int32_T lastv_c;
    int32_T iac_c;
    int32_T ia_f;
    int32_T jA_m;
    int32_T i_b;
    int32_T kend_p;
    int32_T itau_ku;
    int32_T ii_a;
    int32_T ix0_l;
    int32_T knt_k;
    int32_T lastv_f;
    int32_T iac_j;
    int32_T ia_aq;
    int32_T jA_l;
    int32_T i_fa;
    int32_T kend_j;
    int32_T itau_p;
    int32_T ii_m;
    int32_T ix0_j;
    int32_T knt_f;
    int32_T lastv_k;
    int32_T iac_m;
    int32_T ia_h;
    int32_T jA_g;
    int32_T i_ab;
    int32_T kend_m;
    int32_T k_k;
    int32_T b_k_b;
    int32_T tmp_k;
    int32_T tmp_g;
    int32_T i42;
    int32_T tmp_idx_0_tmp;
    int32_T i43;
    int32_T i44;
    int32_T itau_l2;
    int32_T ii_b;
    int32_T ix0_lc;
    int32_T knt_i;
    int32_T lastv_n;
    int32_T iac_d;
    int32_T ia_o;
    int32_T jA_dg;
    int32_T i_bu;
    int32_T kend_n;
    int32_T nVar_aw;
    int32_T mConstrMax_a;
    int32_T idxIneqOffset;
    int32_T idx_Aineq;
    int32_T idx_lower;
    int32_T nWIneq_old;
    int32_T nWLower_old;
    int32_T nWUpper_old;
    int32_T ix_p5;
    int32_T iy_b;
    int32_T l_g;
    int32_T idxStartIneq_l;
    int32_T idxStartIneq_tmp_g;
    int32_T activeSetChangeID_m;
    int32_T nVar_af;
    int32_T globalActiveConstrIdx_e;
    int32_T idxMinLambda_d;
    int32_T k_m;
    int32_T iQR0_o;
    int32_T g_i;
    int32_T nVar_n;
    int32_T nullStartIdx;
    int32_T b_mNull;
    int32_T nullStart;
    int32_T c_mNull;
    int32_T b_jjA;
    int32_T d_ix_i;
    int32_T mNull_tmp;
    int32_T nullStartIdx_tmp;
    int32_T LDimSizeP1;
    int32_T A_maxDiag_idx;
    int32_T LD_diagOffset;
    int32_T ix_k;
    int32_T iy0_c;
    int32_T LDimSizeP1_g;
    int32_T subRows;
    int32_T LD_diagOffset_c;
    int32_T idx_b;
    int32_T k_lj;
    int32_T b_idx_m;
    int32_T lda;
    int32_T ix_d;
    int32_T c_bj;
    int32_T lastColC;
    int32_T br_j;
    int32_T b_idx_tmp;
    int32_T coffset_ft;
    int32_T boffset_i;
    int32_T b_i_j3;
    int32_T e_n2;
    int32_T c_i;
    int32_T loop_ub_hn;
    int32_T c_o;
    int32_T i45;
    int32_T i46;
    int32_T i47;
    int32_T aux_0_1;
    int32_T aux_1_1;
    int32_T aux_2_1;
    int32_T stride_0_0_o;
    int32_T stride_1_0_g;
    int32_T stride_2_0;
    int32_T stride_0_1;
    int32_T stride_1_1;
    int32_T stride_2_1;
    int32_T loop_ub_c0;
    int32_T loop_ub_ce;
    int32_T mc_i;
    int32_T coffset_l;
    int32_T boffset_f;
    int32_T j_ow;
    int32_T i_er;
    int32_T k_jf;
    int32_T b_i_i;
    int32_T b_jl;
    int32_T i48;
    int32_T b_jo;
    int32_T k_cj;
    int32_T b_jp;
    int32_T idxStartIneq_k;
    int32_T idxEndIneq_o;
    int32_T idxStartIneq_tmp_n;
    int32_T nActiveConstr;
    int32_T nFixedConstr;
    int32_T nVar_b;
    int32_T nDepIneq;
    int32_T ix0_i;
    int32_T iy0_b;
    int32_T d_c;
    int32_T nVar_tmp_tmp_g;
    int32_T lda_e;
    int32_T ii_at;
    int32_T mmi_f4;
    int32_T i_p;
    int32_T loop_ub_o0;
    int32_T lastv_lj;
    int32_T lastc_i;
    int32_T coltop_j;
    int32_T ia_k1;
    int32_T iy_eb;
    int32_T b_iy_i;
    int32_T b_jf;
    int32_T d_a0;
    int32_T ia_fu;
    int32_T itau_h;
    int32_T ii_f;
    int32_T ix0_h;
    int32_T knt_l5;
    int32_T lastv_g;
    int32_T iac_jt;
    int32_T ia_hj;
    int32_T jA_gq;
    int32_T i_c5;
    int32_T kend_h;
    int32_T trueCount_f;
    int32_T i49;
    int32_T stride_0_0_f;
    int32_T stride_1_0_l;
    int32_T stride_2_0_n;
    int32_T stride_3_0;
    int32_T loop_ub_cc;
    int32_T aoffset_f;
    int32_T i_pb;
    int32_T k_o;
    int32_T b_i_c;
    int32_T mc_tmp;
    int32_T itau_mr;
    int32_T ii_h;
    int32_T ix0_lr;
    int32_T knt_fx;
    int32_T lastv_ki;
    int32_T i_nr;
    int32_T iac_h;
    int32_T ia_n;
    int32_T jA_i;
    int32_T kend_i;
    int32_T i_hp;
    int32_T endIdx;
    int32_T idxRotGCol;
    int32_T QRk0;
    int32_T e_b;
    int32_T ix_o;
    int32_T b_ix_h;
    int32_T b_temp_tmp;
    int32_T b_temp_tmp_k;
    int32_T nVar_gu;
    int32_T mLambda;
    int32_T idx_max_b;
    int32_T ix_ot;
    int32_T rankR;
    int32_T c_ix;
    int32_T iQR0_p;
    int32_T n_ah;
    int32_T ia_c;
    int32_T i_ck;
    int32_T itau_a;
    int32_T c_aa;
    int32_T loop_ub_g;
    int32_T jA_j;
    int32_T j_i;
    int32_T b_bp;
    int32_T iv_d;
    int32_T i_fu;
    int32_T knt_n;
    int32_T b_ix_a;
    int32_T b_iy_c;
    int32_T b_iy_tmp;
    int32_T tau_tmp_tmp;
    int32_T b_ix_tmp;
    int32_T temp2_tmp_tmp_tmp;
    int32_T kend_g;
    int32_T k_bh;
    int32_T ia0;
    int32_T b_i_p;
    int32_T knt_ib;
    int32_T k_ob;
    int32_T b_tmp_d;
    int32_T temp1_tmp;
    int32_T tau_tmp_l;
    int32_T temp1_tmp_tmp_tmp;
    int32_T e_tmp;
    int32_T kend_o;
    int32_T k_n;
    int32_T ldw;
    int32_T d_kl;
    int32_T iyend;
    int32_T e_dt;
    int32_T f_g;
    int32_T ia_l;
    int32_T d_tmp;
    int32_T b_a2;
    int32_T b_iy_e;
    int32_T d_g;
    int32_T e_eh;
    int32_T y_tmp_f;
    int32_T i50;
    int32_T i51;
    int32_T aux_0_1_j;
    int32_T aux_1_1_d;
    int32_T stride_0_1_j;
    int32_T stride_1_1_c;
    int32_T loop_ub_gy;
    int32_T coffset_p;
    int32_T boffset_a;
    int32_T j_k;
    int32_T i_is;
    int32_T k_n2;
    int32_T b_i_kk;
    int32_T b_nm;
    int32_T i52;
    int32_T idx_b3;
    int32_T ix0_p;
    int32_T iy0_l;
    int32_T b_k_gb;
    int32_T idxA1j;
    int32_T idxAjj_e;
    int32_T nmj;
    int32_T b_j_dv;
    int32_T iy_d;
    int32_T b_o;
    int32_T d_h;
    int32_T ia_p;
    int32_T b_ix_l;
    int32_T b_iy_k;
    int32_T idxFillStart;
    int32_T colOffsetATw;
    int32_T iAeq0;
    int32_T iATw0;
    int32_T idx_eu;
    int32_T f_f;
    int32_T idxUpperExisting;
    int32_T offsetEq1;
    int32_T offsetEq2;
    int32_T colOffsetATw_l;
    int32_T colOffsetAineq;
    int32_T d_cd;
    int32_T k_p;
    int32_T d_tmp_f;
    int32_T i53;
    int32_T idxEq;
    int32_T idx_go;
    int32_T d_n;
    int32_T nVar_i;
    int32_T b_c2;
    int32_T idx_c;
    int32_T mIneq_l;
    int32_T b_nm4;
    int32_T k_gh;
    int32_T iy_m;
    int32_T b_pl;
    int32_T b_iy_g;
    int32_T d_b;
    int32_T e_g5;
    int32_T nActiveConstr_k;
    int32_T nFixedConstr_l;
    int32_T nVar_e;
    int32_T nDepIneq_i;
    int32_T ix0_f;
    int32_T iy0_cd;
    int32_T d_bj;
    int32_T nVar_tmp_tmp_p;
    int32_T maxOffset;
    int32_T idxStart;
    int32_T idxEnd;
    int32_T idxFill;
    int32_T b_tmp_n;
    int32_T trueCount_o;
    int32_T i_ha;
    int32_T i54;
    int32_T nVar_gg;
    int32_T mWorkingFixed;
    int32_T mTotalWorkingEq;
    int32_T totalRank;
    int32_T ix_d5;
    int32_T c_tmp_tmp;
    int32_T mTotalWorkingEq_tmp;
    int32_T k_bl;
    int32_T temp_tmp_o;
    int32_T i55;
    int32_T minszA;
    int32_T j_kq;
    int32_T i_gs;
    int32_T nA_tmp;
    int32_T c_n;
    int32_T n_ab;
    int32_T jBcol_l;
    int32_T kAcol_dv;
    int32_T j_p;
    int32_T b_k_a;
    int32_T i_l3;
    int32_T y_mn;
    int32_T i56;
    int32_T i57;
    int32_T LDimSizeP1_f;
    int32_T LD_diagOffset_n;
    int32_T subMatrixDim;
    int32_T k_f3;
    int32_T b_k_am;
    int32_T jA_k;
    int32_T b_km;
    int32_T ijA_f;
    int32_T idx_n;
    int32_T idxRotGCol_p;
    int32_T iy_je;
    int32_T iyend_e;
    int32_T b_iy_d;
    int32_T ia_j;
    int32_T temp_tmp_o4;
    int32_T nVar_ay;
    int32_T mLambda_a;
    int32_T idx_max_g;
    int32_T k_iy;
    int32_T iL0;
    int32_T b_joy;
    int32_T ix_j;
    int32_T f_l;
    int32_T g_d;
    int32_T i58;
    int32_T i59;
    int32_T i60;
    int32_T b_tmp_p;
    int32_T j_jk;
    int32_T offsetj;
    int32_T offsetjp1;
    int32_T b_gr;
    int32_T b_j_j;
    int32_T temp_tmp_j;
    int32_T i61;
    int32_T mIneq_i;
    int32_T f_k;
    int32_T k_nk;
    int32_T iy_a3;
    int32_T b_pa;
    int32_T b_iy_gr;
    int32_T d_p;
    int32_T e_bg;
    int32_T mIneq_h;
    int32_T f_p;
    int32_T k_ja;
    int32_T iy_n;
    int32_T b_ei;
    int32_T b_iy_o;
    int32_T d_n2;
    int32_T e_ax;
    int32_T j_kqz;
    int32_T A_tmp_n;
    int32_T b_j_g;
    int32_T blockFormat_b;
    int32_T ix_a;
    int32_T b_aq;
    int32_T jy_b;
    int32_T b_ix_md;
    int32_T b_jA;
    int32_T i62;
    int32_T b_i_kf;
    int32_T i63;
    int32_T b_i_d;
    int32_T i64;
    int32_T b_i_ls;
    int32_T i65;
    int32_T b_i_h;
    int32_T i66;
    int32_T offsetj_p;
    int32_T offsetjp1_n;
    int32_T j_cl;
    int32_T i_p2;
    int32_T temp_tmp_g;
    int32_T i67;
    int32_T j_kd;
    int32_T offsetj_k;
    int32_T offsetjp1_a;
    int32_T b_j_p;
    int32_T temp_tmp_i;
    int32_T i68;
    int32_T offsetj_b;
    int32_T offsetjp1_o;
    int32_T j_f;
    int32_T b_i_mr;
    int32_T temp_tmp_c;
    int32_T i69;
    int32_T idx_g1;
    int32_T ix0_e;
    int32_T iy0_j;
    int32_T b_nz;
    int32_T k_gr;
    int32_T minmn_c;
    int32_T loop_ub_d;
    int32_T ic0;
    int32_T low_i;
    int32_T low_ip1;
    int32_T jm1;
    int32_T idxAjj_f;
    int32_T j_g;
    int32_T d_gh;
    int32_T b_iy_di;
    int32_T b_k_bb;
    int32_T i70;
    int32_T i71;
    int32_T aux_0_1_a;
    int32_T aux_1_1_n;
    int32_T stride_0_0_n;
    int32_T stride_1_0_c;
    int32_T stride_0_1_a;
    int32_T stride_1_1_l;
    int32_T loop_ub_lw;
    int32_T loop_ub_k;
    int32_T b_idx_o;
    int32_T idxQR;
    int32_T b_or;
    int32_T ia_cs;
    int32_T jjA;
    int32_T b_ix_b;
    int32_T nActiveConstr_tmp_tmp;
    int32_T i_j4;
    int32_T ixlast_f;
    int32_T iy_mu;
    int32_T ix_e;
    int32_T b_iy_l;
    int32_T b_kk;
    int32_T c_gm;
    int32_T ia_aj;
    int32_T i72;
    int32_T lastColC_k;
    int32_T br_p;
    int32_T ar;
    int32_T cr;
    int32_T b_ch;
    int32_T ic_p;
    int32_T c_ev;
    int32_T jBcol_c;
    int32_T k_o4;
    int32_T kAcol_h;
    int32_T b_j_c;
    int32_T b_k_e;
    int32_T i_eu;
    int32_T B_tmp;
    int32_T jBcol_g;
    int32_T k_hw;
    int32_T kAcol_k;
    int32_T b_j_cu;
    int32_T b_k_p;
    int32_T i_oh;
    int32_T B_tmp_i;
    int32_T mLinIneq_p;
    int32_T iLineq0;
    int32_T idx_o;
    int32_T b_idx_l;
    int32_T nVar_nb;
    int32_T iw0;
    int32_T iEq0;
    int32_T idx_j;
    int32_T i_pbm;
    int32_T ix0_jm;
    int32_T b_jw;
    int32_T k_jo;
    int32_T jjA_b;
    int32_T ix_kx;
    int32_T b_j_k;
    int32_T c_nw;
    int32_T b_i_kfl;
    int32_T n_tmp_j;
    int32_T lastColC_h;
    int32_T br_l;
    int32_T ar_g;
    int32_T cr_i;
    int32_T b_po;
    int32_T ic_f;
    int32_T c_d5;
    int32_T d_oz;
    int32_T jBcol_o;
    int32_T kAcol_hq;
    int32_T j_d;
    int32_T b_k_c;
    int32_T i_bf;
    int32_T b_B_tmp;
    int32_T jBcol_c2;
    int32_T k_f2;
    int32_T kAcol_c;
    int32_T b_j_ea;
    int32_T b_k_cu;
    int32_T i_lf;
    int32_T jBcol_lu;
    int32_T kAcol_o;
    int32_T b_j_l;
    int32_T k_h3;
    int32_T b_i_hz;
    int32_T i73;
    int32_T jBcol_ib;
    int32_T kAcol_n;
    int32_T b_j_a;
    int32_T k_jb;
    int32_T b_i_lb;
    int32_T i74;
    int32_T beta1_c2;
    int32_T ix_l2;
    int32_T d_j;
    int32_T e_bg5;
    int32_T ia_p1;
    int32_T i75;
    int32_T idx_i;
    int32_T k_gg;
    int32_T jA_ld;
    int32_T j_oo;
    int32_T i_i1;
    int32_T ix_c;
    int32_T n_tmp_l;
    int32_T k_it;
    int32_T jBcol_k;
    int32_T kAcol_h5;
    int32_T b_j_ke;
    int32_T k_ls;
    int32_T b_i_of;
    int32_T i76;
    int32_T loop_ub_f;
    int32_T c_kp;
    int32_T unnamed_idx_1;
    int32_T kidx_f;
    int32_T c_kd;
    int32_T b_j1;
    int32_T j2;
    int32_T d_e;
    int32_T i1_k;
    int32_T i2_l;
    int32_T jA_h;
    int32_T j_e;
    int32_T b_nf;
    int32_T ijA_i5;
    int32_T b_k_kr;
    int32_T b_kk_e;
    int32_T k_ov;
    int32_T iy_nt;
    int32_T d_hk;
    int32_T e_g50;
    int32_T ix_g;
    int32_T b_iy_f;
    int32_T b_lc;
    int32_T c_pu;
    int32_T ia_m;
    int32_T i77;
    int32_T iCol;
    int32_T iCol_old;
    int32_T b_kx;
    int32_T idx_col;
    int32_T c_dr;
    int32_T k_e;
    int32_T jA_mo;
    int32_T j_md;
    int32_T b_d;
    int32_T ijA_d;
    int32_T b_iy_kc;
    int32_T b_o1;
    int32_T d_cf;
    int32_T ia_ju;
    int32_T i78;
    int32_T i79;
    int32_T iL0_g;
    int32_T i_az;
    int32_T ix_kb;
    int32_T f_pi;
    int32_T g_g;
    int32_T aoffset_p;
    int32_T b_gh;
    int32_T i_fm;
    int32_T b_i_l1;
    int32_T b_o0;
    int32_T last;
    int32_T idx_f;
    int32_T k_bg;
    int32_T i_gz;
    int32_T k_bd;
    int32_T b_m_tmp_l;
    int32_T kidx_c;
    int32_T j2_e;
    int32_T b_jg;
    int32_T i1_e;
    int32_T i2_a;
    int32_T minmn_m;
    int32_T i80;
    int32_T totalEq;
    int32_T iAeq0_c;
    int32_T iAw0;
    int32_T b_idx_lv;
    int32_T i81;
    int32_T stride_0_1_c;
    int32_T stride_1_1_a;
    int32_T loop_ub_jy;
    int32_T iAineq0;
    int32_T iAw0_g;
    int32_T b_ma;
    int32_T idx_hn;
    int32_T idx_of;
    int32_T k_bw;
    int32_T idx_current_n;
    int32_T idx_end;
    int32_T aoffset_fu;
    int32_T i_es;
    int32_T b_i_ej;
    int32_T mc_tmp_g;
    int32_T n_m;
    int32_T iend;
    int32_T j_ii;
    int32_T i_gx;
    int32_T j_ig;
    int32_T i82;
    int32_T i83;
    int32_T loop_ub_tmp_h;
    int32_T j_pn;
    int32_T i84;
    int32_T i85;
    int32_T loop_ub_tmp_e;
    int32_T j_da;
    int32_T i86;
    int32_T i87;
    int32_T loop_ub_tmp_m;
    int32_T maxRegVar;
    int32_T ixlast_o;
    int32_T maxRegVar_tmp;
    int32_T b_af;
    int32_T idx_ij;
    int32_T mIneq_h2;
    int32_T b_g2;
    int32_T idx_b2;
    int32_T TYPE_tmp;
    int32_T colOffset;
    int32_T idx_bnd_local;
    int32_T b_dm;
    int32_T idx_k;
    int32_T j_l;
    int32_T b_j_o;
    int32_T b_i_g4;
    int32_T i88;
    int32_T b_i_iv;
    int32_T idx_current_e;
    int32_T mAll;
    int32_T currentMplier;
    int32_T idxOffset;
    int32_T ct_cw;
    int32_T ct_h;
    int32_T mIneq_ly;
    int32_T idx_fm;
    int32_T b_jcol_i;
    int32_T i89;
    int32_T dlen;
    int32_T k_m2;
    int32_T k_fe;
    int32_T loop_ub_tmp_bx;
    int32_T k_fq;
    int32_T loop_ub_tmp_n;
    int32_T k_d;
    int32_T k_l4;
    int32_T vlen;
    int32_T k_ok;
    int32_T k_gv;
    int32_T ijA_a;
    int32_T ret;
    int32_T k_do;
    int32_T i_ga;
    int32_T U_tmp_o;
    int32_T i90;
    uint32_T len;
    uint32_T b_q;
    uint32_T b_q_tmp;
    uint32_T u;
    uint32_T mti;
    uint32_T y_en;
    uint32_T lo;
    SL_Bus_std_msgs_Float32 rtb_SourceBlock_o2_pk_d;
    SL_Bus_std_msgs_Float32 BusAssignment_ak;// '<S81>/Bus Assignment'
    int32_T B_size[1];
    int32_T isMrows_size[1];
    int32_T tmp_size_c[1];
    int32_T tmp_size_cs[1];
    int32_T tmp_size_e3[1];
    int32_T Je_size[1];
    int32_T z_size[1];
    int32_T tau_size[1];
    int32_T tmp_size_nv[1];
    int32_T e_tmp_data[1];
    char_T expl_temp_ca[3];
    int8_T empty_non_axis_sizes[2];
    int8_T empty_non_axis_sizes_m[2];
    int8_T empty_non_axis_sizes_g[2];
    int16_T b_Mrows_i;
    int16_T WorkingSet_tmp_p;
    int16_T ixw;
    int16_T i91;
    int16_T ixw_k;
    uint8_T empty_non_axis_sizes_b[2];
    uint8_T empty_non_axis_sizes_a[2];
    uint8_T empty_non_axis_sizes_f[2];
    uint8_T varargin_1_c[2];
    int8_T MpcStatus;                  // '<S140>/Merge'
    boolean_T SourceBlock_o1;          // '<S341>/SourceBlock'
    boolean_T MATLABSystem_o3_k;       // '<S316>/MATLAB System'
    boolean_T isMpcAlive;              // '<S142>/Data Type Conversion'
    boolean_T thrustersStatus[8];      // '<S141>/MATLAB System'
    boolean_T SourceBlock_o1_k;        // '<S111>/SourceBlock'
    boolean_T SourceBlock_o1_e;        // '<S110>/SourceBlock'
    boolean_T SourceBlock_o1_a;        // '<S109>/SourceBlock'
    boolean_T SourceBlock_o1_j;        // '<S108>/SourceBlock'
    boolean_T SourceBlock_o1_f;        // '<S107>/SourceBlock'
    boolean_T SourceBlock_o1_kn;       // '<S106>/SourceBlock'
    boolean_T has_dvl;                 // '<S97>/Has DVL'
    SL_Bus_std_msgs_Bool rtb_SourceBlock_o2_my_f;
    SL_Bus_std_msgs_UInt8 rtb_SourceBlock_o2_d2_g;
    SL_Bus_sonia_common_ros2_KillStatus rtb_SourceBlock_o2_il_j;
    B_CurrentTime_proc_control_T CurrentTime_n;// '<S16>/Current Time'
    B_CurrentTime_proc_control_T CurrentTime;// '<S16>/Current Time'
  };

  // Block states (default storage) for system '<Root>'
  struct DW_proc_control_T {
    TrajectoryManager_proc_contro_T obj;// '<S332>/MATLAB System1'
    ProcPlannerManager_proc_contr_T obj_l;// '<S327>/MATLAB System'
    mpcManager_proc_control_T obj_k;   // '<S141>/MATLAB System'
    TrimPlant_proc_control_T obj_b;    // '<S143>/MATLAB System'
    robotics_slcore_internal_bl_p_T obj_m;// '<S348>/Polynomial Trajectory'
    AuvDifferentialEquation_proc__T obj_f;// '<S3>/MATLAB System'
    OpenLoopController_proc_contr_T obj_p;// '<S145>/MATLAB System'
    robotics_slcore_internal_bloc_T obj_p3;// '<S345>/Rotation Trajectory'
    AddPose_proc_control_T obj_fo;     // '<S332>/MATLAB System'
    rosCommandManager_proc_contro_T obj_i;// '<S94>/MATLAB System'
    ros_slros2_internal_block_Cur_T obj_o3;// '<S182>/Current Time'
    ros_slros2_internal_block_Get_T obj_fy;// '<S97>/Linear Accel Bias1'
    ros_slros2_internal_block_Get_T obj_o3e;// '<S97>/Linear Accel Bias'
    ros_slros2_internal_block_Get_T obj_nj;// '<S97>/Has DVL'
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
    ros_slros2_internal_block_Get_T obj_bn;// '<S100>/MVR'
    ros_slros2_internal_block_Get_T obj_iw;// '<S100>/MV'
    ros_slros2_internal_block_Pub_T obj_oe;// '<S337>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_nn;// '<S268>/SinkBlock'
    ros_slros2_internal_block_Pub_T obj_ni;// '<S183>/SinkBlock'
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
    ros_slros2_internal_block_Sub_T obj_ha;// '<S346>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_eh;// '<S341>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_jb;// '<S339>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_if;// '<S244>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_no;// '<S243>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_f0y;// '<S124>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_ak;// '<S123>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_n5;// '<S122>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_du;// '<S121>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_na;// '<S136>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_fka;// '<S135>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_fe;// '<S134>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_cg;// '<S111>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_lt;// '<S110>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_fw;// '<S109>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_i3;// '<S108>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_nf;// '<S107>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_ppy;// '<S106>/SourceBlock'
    ros_slros2_internal_block_Sub_T obj_fb;// '<S58>/SourceBlock'
    real_T Delay_DSTATE;               // '<S94>/Delay'
    real_T Delay_DSTATE_c[8];          // '<S253>/Delay'
    real_T DiscreteTimeIntegrator_DSTATE[3];// '<S248>/Discrete-Time Integrator' 
    real_T DiscreteTimeIntegrator1_DSTATE[3];// '<S248>/Discrete-Time Integrator1' 
    real_T Delay_DSTATE_m;             // '<S7>/Delay'
    real_T DiscreteTimeIntegrator_DSTATE_a;// '<S345>/Discrete-Time Integrator'
    real_T UD_DSTATE;                  // '<S306>/UD'
    real_T DiscreteTransferFcn_states; // '<S250>/Discrete Transfer Fcn'
    real_T Delay_DSTATE_p;             // '<S142>/Delay'
    real_T Delay_DSTATE_pp[8];         // '<S147>/Delay'
    real_T mv_Delay_DSTATE[88];        // '<S221>/mv_Delay'
    real_T x_Delay_DSTATE[143];        // '<S221>/x_Delay'
    real_T slack_delay_DSTATE;         // '<S221>/slack_delay'
    real_T last_mv_DSTATE[8];          // '<S187>/last_mv'
    real_T Delay1_DSTATE[88];          // '<S144>/Delay1'
    real_T UD_DSTATE_n[6];             // '<S217>/UD'
    real_T Delay_DSTATE_a[8];          // '<S143>/Delay'
    real_T last_mv_DSTATE_j[8];        // '<S151>/last_mv'
    real_T lastMsg[400];               // '<S97>/MATLAB System3'
    real_T lastMsg_k[400];             // '<S97>/MATLAB System2'
    real_T lastMsg_d[400];             // '<S97>/MATLAB System1'
    real_T lastMsg_m[400];             // '<S97>/MATLAB System'
    real_T lastMsg_c[400];             // '<S96>/MATLAB System8'
    real_T lastMsg_a[400];             // '<S96>/MATLAB System7'
    real_T lastMsg_l[400];             // '<S96>/MATLAB System6'
    real_T lastMsg_ky[400];            // '<S96>/MATLAB System5'
    real_T lastMsg_mg[400];            // '<S96>/MATLAB System4'
    real_T lastMsg_kw[400];            // '<S96>/MATLAB System3'
    real_T lastMsg_f[400];             // '<S96>/MATLAB System2'
    real_T lastMsg_p[400];             // '<S96>/MATLAB System12'
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
    real_T DiscreteTimeIntegrator1_DSTAT_n[4];// '<S3>/Discrete-Time Integrator1' 
    real_T DiscreteTimeIntegrator2_DSTATE[3];// '<S3>/Discrete-Time Integrator2' 
    real_T DiscreteTimeIntegrator3_DSTATE[3];// '<S3>/Discrete-Time Integrator3' 
    real_T P[169];                     // '<S314>/DataStoreMemory - P'
    real_T x[13];                      // '<S314>/DataStoreMemory - x'
    real_T Memory_PreviousInput;       // '<S132>/Memory'
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
    int32_T clockTickCounter;          // '<S147>/Pulse Generator'
    int32_T clockTickCounter_n;        // '<S144>/Pulse Generator'
    int32_T clockTickCounter_f;        // '<S143>/Pulse Generator'
    int32_T counter[6];                // '<S27>/Sine Wave'
    uint32_T m_bpIndex[8];             // '<S142>/N to A'
    uint32_T m_bpIndex_o[8];           // '<S142>/n-D Lookup Table1'
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
    boolean_T Delay_DSTATE_g;          // '<S332>/Delay'
    boolean_T DelayInput1_DSTATE;      // '<S334>/Delay Input1'
    int8_T DiscreteTimeIntegrator_PrevRese;// '<S248>/Discrete-Time Integrator'
    int8_T DiscreteTimeIntegrator1_PrevRes;// '<S248>/Discrete-Time Integrator1' 
    int8_T SwitchCase_ActiveSubsystem; // '<S10>/Switch Case'
    int8_T If_ActiveSubsystem_b;       // '<S8>/If'
    int8_T SwitchCase_ActiveSubsystem_p;// '<S140>/Switch Case'
    int8_T DiscreteTimeIntegrator_PrevRe_m;// '<S3>/Discrete-Time Integrator'
    int8_T DiscreteTimeIntegrator1_PrevR_m;// '<S3>/Discrete-Time Integrator1'
    int8_T DiscreteTimeIntegrator2_PrevRes;// '<S3>/Discrete-Time Integrator2'
    int8_T DiscreteTimeIntegrator3_PrevRes;// '<S3>/Discrete-Time Integrator3'
    uint8_T DiscreteTimeIntegrator_IC_LOADI;// '<S3>/Discrete-Time Integrator'
    uint8_T DiscreteTimeIntegrator1_IC_LOAD;// '<S3>/Discrete-Time Integrator1'
    boolean_T icLoad;                  // '<S221>/mv_Delay'
    boolean_T icLoad_g;                // '<S221>/x_Delay'
    boolean_T icLoad_o;                // '<S221>/slack_delay'
    boolean_T Memory_PreviousInput_g[226];// '<S187>/Memory'
    boolean_T Memory_PreviousInput_l[226];// '<S151>/Memory'
    boolean_T Memory_PreviousInput_n;  // '<S133>/Memory'
    DW_MATLABFunction2_proc_contr_T sf_MATLABFunction4;// '<S248>/MATLAB Function4' 
    DW_MATLABFunction2_proc_contr_T sf_MATLABFunction2;// '<S248>/MATLAB Function2' 
    DW_CurrentTime_proc_control_T CurrentTime_n;// '<S16>/Current Time'
    DW_CurrentTime_proc_control_T CurrentTime;// '<S16>/Current Time'
  };

  // Zero-crossing (trigger) state
  struct PrevZCX_proc_control_T {
    ZCSigState ResettableSubsystem_Reset_ZCE;// '<S332>/Resettable Subsystem'
  };

  // Parameters (default storage)
  struct P_proc_control_T {
    struct_72FZU0bzvPLwZ2S2uz9PiD physics;// Variable: physics
                                             //  Referenced by: '<S145>/MATLAB System'

    struct_x7JWpgYpPywnYpZFC6VmZH mode;// Variable: mode
                                          //  Referenced by: '<S94>/MATLAB System'

    struct_Hf9190UGnfkO4yGDopBVwC simulink;// Variable: simulink
                                              //  Referenced by: '<S248>/Constant'

    real_T N[201];                     // Variable: N
                                          //  Referenced by:
                                          //    '<S26>/PWN to N'
                                          //    '<S142>/N to A'
                                          //    '<S142>/n-D Lookup Table1'
                                          //    '<S32>/N to RPM'

    real_T RPM[201];                   // Variable: RPM
                                          //  Referenced by: '<S32>/N to RPM'

    real_T binv[48];                   // Variable: binv
                                          //  Referenced by: '<S145>/MATLAB System'

    real_T dSeedX;                     // Variable: dSeedX
                                          //  Referenced by: '<S27>/Drift'

    real_T dmax[6];                    // Variable: dmax
                                          //  Referenced by: '<S27>/Drift'

    real_T dmin[6];                    // Variable: dmin
                                          //  Referenced by: '<S27>/Drift'

    real_T waveDiscreteFrequency[6];   // Variable: waveDiscreteFrequency
                                          //  Referenced by: '<S27>/Sine Wave'

    uint16_T A[201];                   // Variable: A
                                          //  Referenced by: '<S142>/N to A'

    uint16_T PWM[201];                 // Variable: PWM
                                          //  Referenced by:
                                          //    '<S26>/PWN to N'
                                          //    '<S142>/n-D Lookup Table1'

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
                                 //  Referenced by: '<S217>/UD'

    real_T DiscreteDerivative_ICPrevScal_j;
                              // Mask Parameter: DiscreteDerivative_ICPrevScal_j
                                 //  Referenced by: '<S306>/UD'

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
                                   //    '<S132>/Initial Condition'
                                   //    '<S132>/Memory'

    boolean_T MinMaxRunningResettable1_vinit;
                               // Mask Parameter: MinMaxRunningResettable1_vinit
                                  //  Referenced by:
                                  //    '<S133>/Initial Condition'
                                  //    '<S133>/Memory'

    boolean_T DetectRisePositive_vinit;
                                     // Mask Parameter: DetectRisePositive_vinit
                                        //  Referenced by: '<S334>/Delay Input1'

    SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint Out1_Y0;// Computed Parameter: Out1_Y0
                                                                   //  Referenced by: '<S342>/Out1'

    SL_Bus_trajectory_msgs_MultiDOFJointTrajectoryPoint Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S341>/Constant'

    SL_Bus_std_msgs_Float64MultiArray Out1_Y0_n;// Computed Parameter: Out1_Y0_n
                                                   //  Referenced by: '<S246>/Out1'

    SL_Bus_std_msgs_Float64MultiArray Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                          //  Referenced by: '<S244>/Constant'

    SL_Bus_sonia_common_ros2_MpcInfo Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                         //  Referenced by: '<S24>/Constant'

    SL_Bus_sonia_common_ros2_MpcGains Out1_Y0_b;// Computed Parameter: Out1_Y0_b
                                                   //  Referenced by: '<S245>/Out1'

    SL_Bus_sonia_common_ros2_MpcGains Constant_Value_h;// Computed Parameter: Constant_Value_h
                                                          //  Referenced by: '<S243>/Constant'

    SL_Bus_std_msgs_Int16MultiArray Constant_Value_c;// Computed Parameter: Constant_Value_c
                                                        //  Referenced by: '<S41>/Constant'

    mpcParams mpcParams_Y0;            // Computed Parameter: mpcParams_Y0
                                          //  Referenced by: '<S93>/mpcParams'

    SL_Bus_nav_msgs_Odometry Constant_Value_g;// Computed Parameter: Constant_Value_g
                                                 //  Referenced by: '<S15>/Constant'

    SL_Bus_nav_msgs_Odometry Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                 //  Referenced by: '<S181>/Constant'

    physicsConstants physicsConstants_Y0;
                                      // Computed Parameter: physicsConstants_Y0
                                         //  Referenced by: '<S93>/physicsConstants'

    SL_Bus_sensor_msgs_Imu Constant_Value_e;// Computed Parameter: Constant_Value_e
                                               //  Referenced by: '<S88>/Constant'

    SL_Bus_sensor_msgs_Imu Out1_Y0_no; // Computed Parameter: Out1_Y0_no
                                          //  Referenced by: '<S137>/Out1'

    SL_Bus_sensor_msgs_Imu Constant_Value_i;// Computed Parameter: Constant_Value_i
                                               //  Referenced by: '<S134>/Constant'

    SL_Bus_sensor_msgs_Imu Out1_Y0_c;  // Computed Parameter: Out1_Y0_c
                                          //  Referenced by: '<S125>/Out1'

    SL_Bus_sensor_msgs_Imu Out1_Y0_c1; // Computed Parameter: Out1_Y0_c1
                                          //  Referenced by: '<S128>/Out1'

    SL_Bus_sensor_msgs_Imu Constant_Value_jf;// Computed Parameter: Constant_Value_jf
                                                //  Referenced by: '<S121>/Constant'

    SL_Bus_sensor_msgs_Imu Constant_Value_j5;// Computed Parameter: Constant_Value_j5
                                                //  Referenced by: '<S124>/Constant'

    struct_eJsqWOClzwG18rBvtrhWOG MPCparam_Y0;// Computed Parameter: MPCparam_Y0
                                                 //  Referenced by: '<S141>/MPC param'

    SL_Bus_sonia_common_ros2_BodyVelocityDVL Constant_Value_d;// Computed Parameter: Constant_Value_d
                                                                 //  Referenced by: '<S84>/Constant'

    SL_Bus_sonia_common_ros2_BodyVelocityDVL Out1_Y0_p;// Computed Parameter: Out1_Y0_p
                                                          //  Referenced by: '<S138>/Out1'

    SL_Bus_sonia_common_ros2_BodyVelocityDVL Constant_Value_ep;// Computed Parameter: Constant_Value_ep
                                                                  //  Referenced by: '<S135>/Constant'

    SL_Bus_sonia_common_ros2_BodyVelocityDVL Out1_Y0_g;// Computed Parameter: Out1_Y0_g
                                                          //  Referenced by: '<S126>/Out1'

    SL_Bus_sonia_common_ros2_BodyVelocityDVL Constant_Value_p;// Computed Parameter: Constant_Value_p
                                                                 //  Referenced by: '<S122>/Constant'

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
                                                //  Referenced by: '<S349>/Out1'

    SL_Bus_sonia_common_ros2_Pose Constant_Value_f4;// Computed Parameter: Constant_Value_f4
                                                       //  Referenced by: '<S346>/Constant'

    SL_Bus_geometry_msgs_Pose Constant_Value_o;// Computed Parameter: Constant_Value_o
                                                  //  Referenced by: '<S91>/Constant'

    SL_Bus_geometry_msgs_Pose Out1_Y0_a;// Computed Parameter: Out1_Y0_a
                                           //  Referenced by: '<S115>/Out1'

    SL_Bus_geometry_msgs_Pose Constant_Value_ja;// Computed Parameter: Constant_Value_ja
                                                   //  Referenced by: '<S109>/Constant'

    SL_Bus_geometry_msgs_Pose Constant_Value_o1;// Computed Parameter: Constant_Value_o1
                                                   //  Referenced by: '<S336>/Constant'

    struct_TOFpsJJYcOBczOpEd57stD DVLMeasurements_Y0;// Computed Parameter: DVLMeasurements_Y0
                                                        //  Referenced by: '<S249>/DVL Measurements'

    SL_Bus_geometry_msgs_Twist Out1_Y0_f;// Computed Parameter: Out1_Y0_f
                                            //  Referenced by: '<S340>/Out1'

    SL_Bus_geometry_msgs_Twist Constant_Value_oo;// Computed Parameter: Constant_Value_oo
                                                    //  Referenced by: '<S339>/Constant'

    SL_Bus_geometry_msgs_Vector3 Out1_Y0_j;// Computed Parameter: Out1_Y0_j
                                              //  Referenced by: '<S56>/Out1'

    SL_Bus_geometry_msgs_Vector3 Out1_Y0_p1;// Computed Parameter: Out1_Y0_p1
                                               //  Referenced by: '<S59>/Out1'

    SL_Bus_geometry_msgs_Vector3 Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                     //  Referenced by: '<S58>/Constant'

    SL_Bus_geometry_msgs_Vector3 Constant_Value_cg;// Computed Parameter: Constant_Value_cg
                                                      //  Referenced by: '<S267>/Constant'

    SL_Bus_sonia_common_ros2_MotorPwm Constant_Value_ki;// Computed Parameter: Constant_Value_ki
                                                           //  Referenced by: '<S19>/Constant'

    SL_Bus_sonia_common_ros2_MotorPwm Constant_Value_mv;// Computed Parameter: Constant_Value_mv
                                                           //  Referenced by: '<S20>/Constant'

    SL_Bus_sonia_common_ros2_KillStatus Out1_Y0_o;// Computed Parameter: Out1_Y0_o
                                                     //  Referenced by: '<S116>/Out1'

    SL_Bus_sonia_common_ros2_KillStatus Constant_Value_eb;// Computed Parameter: Constant_Value_eb
                                                             //  Referenced by: '<S110>/Constant'

    SL_Bus_std_msgs_Bool Constant_Value_cc;// Computed Parameter: Constant_Value_cc
                                              //  Referenced by: '<S13>/Constant'

    SL_Bus_std_msgs_Bool Out1_Y0_dr;   // Computed Parameter: Out1_Y0_dr
                                          //  Referenced by: '<S112>/Out1'

    SL_Bus_std_msgs_Bool Out1_Y0_jx;   // Computed Parameter: Out1_Y0_jx
                                          //  Referenced by: '<S114>/Out1'

    SL_Bus_std_msgs_Bool Out1_Y0_e;    // Computed Parameter: Out1_Y0_e
                                          //  Referenced by: '<S117>/Out1'

    SL_Bus_std_msgs_Bool Constant_Value_oy;// Computed Parameter: Constant_Value_oy
                                              //  Referenced by: '<S108>/Constant'

    SL_Bus_std_msgs_Bool Constant_Value_oc;// Computed Parameter: Constant_Value_oc
                                              //  Referenced by: '<S111>/Constant'

    SL_Bus_std_msgs_Bool Constant_Value_ha;// Computed Parameter: Constant_Value_ha
                                              //  Referenced by: '<S106>/Constant'

    SL_Bus_std_msgs_Float32 Constant_Value_pf;// Computed Parameter: Constant_Value_pf
                                                 //  Referenced by: '<S86>/Constant'

    SL_Bus_std_msgs_Float32 Out1_Y0_oo;// Computed Parameter: Out1_Y0_oo
                                          //  Referenced by: '<S139>/Out1'

    SL_Bus_std_msgs_Float32 Constant_Value_dh;// Computed Parameter: Constant_Value_dh
                                                 //  Referenced by: '<S136>/Constant'

    SL_Bus_std_msgs_Float32 Out1_Y0_bc;// Computed Parameter: Out1_Y0_bc
                                          //  Referenced by: '<S127>/Out1'

    SL_Bus_std_msgs_Float32 Constant_Value_er;// Computed Parameter: Constant_Value_er
                                                 //  Referenced by: '<S123>/Constant'

    SL_Bus_std_msgs_UInt8 Out1_Y0_fy;  // Computed Parameter: Out1_Y0_fy
                                          //  Referenced by: '<S113>/Out1'

    SL_Bus_std_msgs_UInt8 Constant_Value_dx;// Computed Parameter: Constant_Value_dx
                                               //  Referenced by: '<S107>/Constant'

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
                                          //  Referenced by: '<S119>/y'

    real_T Constant_Value_aw;          // Expression: 0
                                          //  Referenced by: '<S119>/Constant'

    real_T Constant1_Value_i;          // Expression: 0
                                          //  Referenced by: '<S119>/Constant1'

    real_T Constant_Value_dk;          // Expression: 1
                                          //  Referenced by: '<S7>/Constant'

    real_T Constant_Value_lq;          // Expression: InsertTimeStamp
                                          //  Referenced by: '<S182>/Constant'

    real_T Constant1_Value_l;          // Expression: SetFrameID
                                          //  Referenced by: '<S182>/Constant1'

    real_T Delay_InitialCondition[8];  // Expression: zeros(MPC.nu,1)
                                          //  Referenced by: '<S143>/Delay'

    real_T E_zero_Value[8];            // Expression: zeros(1,8)
                                          //  Referenced by: '<S148>/E_zero'

    real_T F_zero_Value[13];           // Expression: zeros(1,13)
                                          //  Referenced by: '<S148>/F_zero'

    real_T G_zero_Value;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S148>/G_zero'

    real_T Constant_Value_aa;          // Computed Parameter: Constant_Value_aa
                                          //  Referenced by: '<S151>/Constant'

    real_T LastPcov_InitialCondition[441];// Expression: lastPcov
                                             //  Referenced by: '<S151>/LastPcov'

    real_T extmv_zero_Value[8];        // Expression: zeros(8,1)
                                          //  Referenced by: '<S148>/ext.mv_zero'

    real_T extmv_scale_Gain[8];        // Expression: RMVscale
                                          //  Referenced by: '<S151>/ext.mv_scale'

    real_T last_mv_InitialCondition[8];// Expression: lastu+uoff
                                          //  Referenced by: '<S151>/last_mv'

    real_T Constant_Value_o1x[6];      // Expression: zeros(1,6)
                                          //  Referenced by: '<S143>/Constant'

    real_T Constant1_Value_g[2];       // Expression: zeros(1,2)
                                          //  Referenced by: '<S143>/Constant1'

    real_T ym_zero_Value[13];          // Expression: zeros(nym,1)
                                          //  Referenced by: '<S151>/ym_zero'

    real_T md_zero_Value;              // Expression: zeros(1,1)
                                          //  Referenced by: '<S148>/md_zero'

    real_T ymin_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S148>/ymin_zero'

    real_T ymax_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S148>/ymax_zero'

    real_T umin_scale4_Gain[8];    // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S151>/umin_scale4'

    real_T ymin_scale1_Gain[13];    // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S151>/ymin_scale1'

    real_T S_zero_Value;               // Expression: zeros(1,1)
                                          //  Referenced by: '<S148>/S_zero'

    real_T ymin_scale2_Gain;       // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S151>/ymin_scale2'

    real_T switch_zero_Value;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S148>/switch_zero'

    real_T mvtarget_zero_Value[8];     // Expression: zeros(8,1)
                                          //  Referenced by: '<S148>/mv.target_zero'

    real_T uref_scale_Gain[8];         // Expression: RMVscale
                                          //  Referenced by: '<S151>/uref_scale'

    real_T ecrwt_zero_Value;           // Expression: zeros(1,1)
                                          //  Referenced by: '<S148>/ecr.wt_zero'

    real_T u_scale_Gain[8];            // Expression: MVscale
                                          //  Referenced by: '<S151>/u_scale'

    real_T PulseGenerator_Amp;         // Expression: 1
                                          //  Referenced by: '<S143>/Pulse Generator'

    real_T PulseGenerator_Period;      // Expression: 2
                                          //  Referenced by: '<S143>/Pulse Generator'

    real_T PulseGenerator_Duty;        // Expression: 1
                                          //  Referenced by: '<S143>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay;  // Expression: 0
                                          //  Referenced by: '<S143>/Pulse Generator'

    real_T MATLABSystem_k;             // Expression: 40
                                          //  Referenced by: '<S145>/MATLAB System'

    real_T Constant1_Value_g0;         // Expression: 0
                                          //  Referenced by: '<S145>/Constant1'

    real_T TSamp_WtEt;                 // Computed Parameter: TSamp_WtEt
                                          //  Referenced by: '<S217>/TSamp'

    real_T E_zero_Value_a[8];          // Expression: zeros(1,8)
                                          //  Referenced by: '<S184>/E_zero'

    real_T F_zero_Value_h[13];         // Expression: zeros(1,13)
                                          //  Referenced by: '<S184>/F_zero'

    real_T G_zero_Value_l;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S184>/G_zero'

    real_T LastPcov_InitialCondition_l[441];// Expression: lastPcov
                                               //  Referenced by: '<S187>/LastPcov'

    real_T extmv_zero_Value_i[8];      // Expression: zeros(8,1)
                                          //  Referenced by: '<S184>/ext.mv_zero'

    real_T extmv_scale_Gain_m[8];      // Expression: RMVscale
                                          //  Referenced by: '<S187>/ext.mv_scale'

    real_T last_mv_InitialCondition_k[8];// Expression: lastu+uoff
                                            //  Referenced by: '<S187>/last_mv'

    real_T Constant2_Value_p[8];       // Expression: zeros(1,8)
                                          //  Referenced by: '<S144>/Constant2'

    real_T ym_zero_Value_a[13];        // Expression: zeros(nym,1)
                                          //  Referenced by: '<S187>/ym_zero'

    real_T md_zero_Value_l;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S184>/md_zero'

    real_T ymin_zero_Value_e[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S184>/ymin_zero'

    real_T ymax_zero_Value_d[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S184>/ymax_zero'

    real_T umin_scale4_Gain_f[8];  // Expression: MVscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S187>/umin_scale4'

    real_T ymin_scale1_Gain_p[13];  // Expression: Yscale(:,ones(1,max(nCC,1)))'
                                       //  Referenced by: '<S187>/ymin_scale1'

    real_T S_zero_Value_m;             // Expression: zeros(1,1)
                                          //  Referenced by: '<S184>/S_zero'

    real_T ymin_scale2_Gain_h;     // Expression: MDscale(:,ones(1,max(nCC,1)))'
                                      //  Referenced by: '<S187>/ymin_scale2'

    real_T switch_zero_Value_m;        // Expression: zeros(1,1)
                                          //  Referenced by: '<S184>/switch_zero'

    real_T mvtarget_zero_Value_c[8];   // Expression: zeros(8,1)
                                          //  Referenced by: '<S184>/mv.target_zero'

    real_T uref_scale_Gain_f[8];       // Expression: RMVscale
                                          //  Referenced by: '<S187>/uref_scale'

    real_T ecrwt_zero_Value_o;         // Expression: zeros(1,1)
                                          //  Referenced by: '<S184>/ecr.wt_zero'

    real_T Delay1_InitialCondition[88];// Expression: zeros(11,8)
                                          //  Referenced by: '<S144>/Delay1'

    real_T Delay_InitialCondition_g[143];// Expression: repmat(MPC.Xi.',11,1)
                                            //  Referenced by: '<S144>/Delay'

    real_T Constant_Value_ce;          // Expression: MPC.Ts
                                          //  Referenced by: '<S144>/Constant'

    real_T Constant1_Value_gt;         // Expression: MPC.dts
                                          //  Referenced by: '<S144>/Constant1'

    real_T u_scale_Gain_o[8];          // Expression: MVscale
                                          //  Referenced by: '<S187>/u_scale'

    real_T useq_scale_Gain[88];        // Expression: MVscale(:,ones(1,p+1))'
                                          //  Referenced by: '<S187>/useq_scale'

    real_T useq_scale1_Gain[143];      // Expression: Yscale(:,ones(1,p+1))'
                                          //  Referenced by: '<S187>/useq_scale1'

    real_T PulseGenerator_Amp_a;       // Expression: 1
                                          //  Referenced by: '<S144>/Pulse Generator'

    real_T PulseGenerator_Period_d;    // Expression: 2
                                          //  Referenced by: '<S144>/Pulse Generator'

    real_T PulseGenerator_Duty_l;      // Expression: 1
                                          //  Referenced by: '<S144>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay_l;// Expression: 0
                                          //  Referenced by: '<S144>/Pulse Generator'

    real_T Delay_InitialCondition_a[8];// Expression: zeros(MPC.nu,1)
                                          //  Referenced by: '<S147>/Delay'

    real_T md_zero_Value_j;            // Expression: zeros(1,1)
                                          //  Referenced by: '<S219>/md_zero'

    real_T mvtarget_zero_Value_f[8];   // Expression: zeros(8,1)
                                          //  Referenced by: '<S219>/mv.target_zero'

    real_T ymin_zero_Value_b[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S219>/y.min_zero'

    real_T ymax_zero_Value_e[13];      // Expression: zeros(13,1)
                                          //  Referenced by: '<S219>/y.max_zero'

    real_T dmvmin_zero_Value[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S219>/dmv.min_zero'

    real_T dmvmax_zero_Value[8];       // Expression: zeros(8,1)
                                          //  Referenced by: '<S219>/dmv.max_zero'

    real_T xmin_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S219>/x.min_zero'

    real_T xmax_zero_Value[13];        // Expression: zeros(13,1)
                                          //  Referenced by: '<S219>/x.max_zero'

    real_T ecrwt_zero_Value_b;         // Expression: zeros(1,1)
                                          //  Referenced by: '<S219>/ecr.wt_zero'

    real_T params_zero_Value;          // Expression: zeros(1,1)
                                          //  Referenced by: '<S219>/params_zero'

    real_T ones_Value[11];            // Expression: ones(PredictionHorizon+1,1)
                                         //  Referenced by: '<S221>/ones'

    real_T Constant1_Value_iz[9];      // Expression: 2:max(2,PredictionHorizon)
                                          //  Referenced by: '<S221>/Constant1'

    real_T Constant_Value_ld[9];
                 // Expression: min(3,PredictionHorizon+1):(PredictionHorizon+1)
                    //  Referenced by: '<S221>/Constant'

    real_T einit_zero_Value;           // Expression: zeros(1,1)
                                          //  Referenced by: '<S219>/e.init_zero'

    real_T PulseGenerator_Amp_n;       // Expression: 1
                                          //  Referenced by: '<S147>/Pulse Generator'

    real_T PulseGenerator_Period_f;    // Expression: 20
                                          //  Referenced by: '<S147>/Pulse Generator'

    real_T PulseGenerator_Duty_c;      // Expression: 10
                                          //  Referenced by: '<S147>/Pulse Generator'

    real_T PulseGenerator_PhaseDelay_l5;// Expression: 0
                                           //  Referenced by: '<S147>/Pulse Generator'

    real_T Constant_Value_g3[8];       // Expression: zeros(1,MPC.nu)
                                          //  Referenced by: '<S146>/Constant'

    real_T Constant2_Value_n;          // Expression: 0
                                          //  Referenced by: '<S146>/Constant2'

    real_T Merge_1_InitialOutput;   // Computed Parameter: Merge_1_InitialOutput
                                       //  Referenced by: '<S140>/Merge'

    real_T Merge_3_InitialOutput;   // Computed Parameter: Merge_3_InitialOutput
                                       //  Referenced by: '<S140>/Merge'

    real_T Delay_InitialCondition_c;   // Expression: 0.0
                                          //  Referenced by: '<S142>/Delay'

    real_T Quat_Y0;                    // Computed Parameter: Quat_Y0
                                          //  Referenced by: '<S298>/Quat'

    real_T Constant_Value_iv;// Expression: simulation.sensors.dvl.maxSpeedThres
                                //  Referenced by: '<S249>/Constant'

    real_T Constant_Value_ll;          // Expression: 0
                                          //  Referenced by: '<S295>/Constant'

    real_T Delay_InitialCondition_f;   // Expression: 1
                                          //  Referenced by: '<S295>/Delay'

    real_T DepthMeasurements_Y0;     // Computed Parameter: DepthMeasurements_Y0
                                        //  Referenced by: '<S250>/Depth Measurements'

    real_T Gain_Gain_c;                // Expression: 2
                                          //  Referenced by: '<S311>/Gain'

    real_T Gain1_Gain_p;               // Expression: 2
                                          //  Referenced by: '<S311>/Gain1'

    real_T Constant_Value_bc;          // Expression: 0.5
                                          //  Referenced by: '<S311>/Constant'

    real_T Gain2_Gain_eu;              // Expression: 2
                                          //  Referenced by: '<S311>/Gain2'

    real_T TSamp_WtEt_g;               // Computed Parameter: TSamp_WtEt_g
                                          //  Referenced by: '<S306>/TSamp'

    real_T DiscreteTransferFcn_NumCoef_ed[2];// Expression: [physics.thruster.a1 0 ]
                                                //  Referenced by: '<S250>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_DenCoef_nf[2];// Expression: [1  physics.thruster.b0]
                                                //  Referenced by: '<S250>/Discrete Transfer Fcn'

    real_T DiscreteTransferFcn_InitialS_e1;// Expression: 0
                                              //  Referenced by: '<S250>/Discrete Transfer Fcn'

    real_T xhat_Y0;                    // Computed Parameter: xhat_Y0
                                          //  Referenced by: '<S251>/xhat'

    real_T Q_Value[169];               // Expression: p.Q
                                          //  Referenced by: '<S314>/Q'

    real_T R3_Value[4];                // Expression: p.R{3}
                                          //  Referenced by: '<S314>/R3'

    real_T MeasurementFcn3Inputs_Value;// Expression: 1
                                          //  Referenced by: '<S314>/MeasurementFcn3Inputs'

    real_T R2_Value[36];               // Expression: p.R{2}
                                          //  Referenced by: '<S314>/R2'

    real_T MeasurementFcn2Inputs_Value;// Expression: 1
                                          //  Referenced by: '<S314>/MeasurementFcn2Inputs'

    real_T R1_Value[100];              // Expression: p.R{1}
                                          //  Referenced by: '<S314>/R1'

    real_T MeasurementFcn1Inputs_Value;// Expression: 0
                                          //  Referenced by: '<S314>/MeasurementFcn1Inputs'

    real_T DataStoreMemoryP_InitialValue[169];// Expression: p.InitialCovariance
                                                 //  Referenced by: '<S314>/DataStoreMemory - P'

    real_T DataStoreMemoryx_InitialValue[13];// Expression: p.InitialState
                                                //  Referenced by: '<S314>/DataStoreMemory - x'

    real_T Constant_Value_l4[7];       // Expression: [0 0 0 1 0 0 0]
                                          //  Referenced by: '<S329>/Constant'

    real_T Constant1_Value_hu;         // Expression: MPC.p
                                          //  Referenced by: '<S329>/Constant1'

    real_T Out1_Y0_j3;                 // Computed Parameter: Out1_Y0_j3
                                          //  Referenced by: '<S343>/Out1'

    real_T MATLABSystem1_linearConvergence;// Expression: .25
                                              //  Referenced by: '<S332>/MATLAB System1'

    real_T MATLABSystem1_quaternionConverg;// Expression: .22
                                              //  Referenced by: '<S332>/MATLAB System1'

    real_T MATLABSystem1_TargetThreshold;// Expression: 2
                                            //  Referenced by: '<S332>/MATLAB System1'

    real_T linWpts_Y0;                 // Computed Parameter: linWpts_Y0
                                          //  Referenced by: '<S344>/linWpts'

    real_T RotWpts_Y0;                 // Computed Parameter: RotWpts_Y0
                                          //  Referenced by: '<S344>/RotWpts'

    real_T time_Y0;                    // Computed Parameter: time_Y0
                                          //  Referenced by: '<S344>/time'

    real_T target_Y0;                  // Computed Parameter: target_Y0
                                          //  Referenced by: '<S344>/target'

    real_T Constant_Value_j55;         // Expression: 0
                                          //  Referenced by: '<S344>/Constant'

    real_T PolynomialTrajectory_VelocityBo[6];// Expression: zeros( 3, 2 )
                                                 //  Referenced by: '<S348>/Polynomial Trajectory'

    real_T Constant_Value_ht;          // Expression: 1
                                          //  Referenced by: '<S345>/Constant'

    real_T DiscreteTimeIntegrator_gainva_g;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_g
                             //  Referenced by: '<S345>/Discrete-Time Integrator'

    real_T DiscreteTimeIntegrator_IC;  // Expression: 0
                                          //  Referenced by: '<S345>/Discrete-Time Integrator'

    real_T Constant_Value_ao;          // Expression: 0
                                          //  Referenced by: '<S332>/Constant'

    real_T Constant_Value_mt[13];   // Expression: [0,0,0.3,1,0,0,0,0,0,0,0,0,0]
                                       //  Referenced by: '<S325>/Constant'

    real_T Constant1_Value_p;          // Expression: MPC.p
                                          //  Referenced by: '<S325>/Constant1'

    real_T Delay_InitialCondition_at;  // Expression: 0
                                          //  Referenced by: '<S94>/Delay'

    real_T Constant_Value_pz;          // Expression: 0
                                          //  Referenced by: '<Root>/Constant'

    real_T Delay_InitialCondition_fy[8];// Expression: [0,0,0,0,0,0,0,0]
                                           //  Referenced by: '<S253>/Delay'

    real_T Constant_Value_gr;          // Expression: 0.5
                                          //  Referenced by: '<S278>/Constant'

    real_T Gain2_Gain_e2;              // Expression: 2
                                          //  Referenced by: '<S278>/Gain2'

    real_T Gain_Gain_m;                // Expression: 2
                                          //  Referenced by: '<S278>/Gain'

    real_T Gain1_Gain_c4;              // Expression: 2
                                          //  Referenced by: '<S278>/Gain1'

    real_T Gain_Gain_fk;               // Expression: 2
                                          //  Referenced by: '<S279>/Gain'

    real_T Constant_Value_gb;          // Expression: 0.5
                                          //  Referenced by: '<S279>/Constant'

    real_T Gain2_Gain_p;               // Expression: 2
                                          //  Referenced by: '<S279>/Gain2'

    real_T Gain1_Gain_i;               // Expression: 2
                                          //  Referenced by: '<S279>/Gain1'

    real_T Gain_Gain_f3;               // Expression: 2
                                          //  Referenced by: '<S280>/Gain'

    real_T Gain1_Gain_cu;              // Expression: 2
                                          //  Referenced by: '<S280>/Gain1'

    real_T Constant_Value_ln;          // Expression: 0.5
                                          //  Referenced by: '<S280>/Constant'

    real_T Gain2_Gain_k;               // Expression: 2
                                          //  Referenced by: '<S280>/Gain2'

    real_T Constant1_Value_mx[3];      // Expression: [0 0 0.117]
                                          //  Referenced by: '<S248>/Constant1'

    real_T DiscreteTimeIntegrator_gainva_d;
                          // Computed Parameter: DiscreteTimeIntegrator_gainva_d
                             //  Referenced by: '<S248>/Discrete-Time Integrator'

    real_T DiscreteTimeIntegrator_IC_l;// Expression: 0
                                          //  Referenced by: '<S248>/Discrete-Time Integrator'

    real_T Constant_Value_ff;          // Expression: 0.5
                                          //  Referenced by: '<S290>/Constant'

    real_T Gain2_Gain_lx;              // Expression: 2
                                          //  Referenced by: '<S290>/Gain2'

    real_T Gain_Gain_g;                // Expression: 2
                                          //  Referenced by: '<S290>/Gain'

    real_T Gain1_Gain_bn;              // Expression: 2
                                          //  Referenced by: '<S290>/Gain1'

    real_T Gain_Gain_fv;               // Expression: 2
                                          //  Referenced by: '<S291>/Gain'

    real_T Constant_Value_ij;          // Expression: 0.5
                                          //  Referenced by: '<S291>/Constant'

    real_T Gain2_Gain_jd;              // Expression: 2
                                          //  Referenced by: '<S291>/Gain2'

    real_T Gain1_Gain_po;              // Expression: 2
                                          //  Referenced by: '<S291>/Gain1'

    real_T Gain_Gain_oq;               // Expression: 2
                                          //  Referenced by: '<S292>/Gain'

    real_T Gain1_Gain_k;               // Expression: 2
                                          //  Referenced by: '<S292>/Gain1'

    real_T Constant_Value_awo;         // Expression: 0.5
                                          //  Referenced by: '<S292>/Constant'

    real_T Gain2_Gain_i;               // Expression: 2
                                          //  Referenced by: '<S292>/Gain2'

    real_T Multiply_Gain;              // Expression: -1
                                          //  Referenced by: '<S248>/Multiply'

    real_T Constant2_Value_g[3];       // Expression: [0.14715 -0.03 0.03522]
                                          //  Referenced by: '<S248>/Constant2'

    real_T DiscreteTimeIntegrator1_gainv_j;
                          // Computed Parameter: DiscreteTimeIntegrator1_gainv_j
                             //  Referenced by: '<S248>/Discrete-Time Integrator1'

    real_T DiscreteTimeIntegrator1_IC; // Expression: 0
                                          //  Referenced by: '<S248>/Discrete-Time Integrator1'

    real_T Delay_InitialCondition_fl;  // Expression: 0
                                          //  Referenced by: '<S7>/Delay'

    real_T Gain_Gain_er;               // Expression: -1
                                          //  Referenced by: '<S330>/Gain'

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
                                            //  Referenced by: '<S182>/String Constant1'

    int32_T FixedHorizonOptimizer_Ndis;// Expression: Ndis
                                          //  Referenced by: '<S215>/FixedHorizonOptimizer'

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
                                          //  Referenced by: '<S118>/imu2 new'

    boolean_T Memory_InitialCondition[226];// Expression: iA
                                              //  Referenced by: '<S151>/Memory'

    boolean_T Memory_InitialCondition_n[226];// Expression: iA
                                                //  Referenced by: '<S187>/Memory'

    boolean_T yBlockOrdering_Y0;       // Computed Parameter: yBlockOrdering_Y0
                                          //  Referenced by: '<S316>/yBlockOrdering'

    boolean_T yBlockOrdering_Y0_l;    // Computed Parameter: yBlockOrdering_Y0_l
                                         //  Referenced by: '<S317>/yBlockOrdering'

    boolean_T yBlockOrdering_Y0_h;    // Computed Parameter: yBlockOrdering_Y0_h
                                         //  Referenced by: '<S318>/yBlockOrdering'

    boolean_T BlockOrdering_Value;     // Expression: true()
                                          //  Referenced by: '<S314>/BlockOrdering'

    boolean_T Enable1_Value;           // Expression: true()
                                          //  Referenced by: '<S314>/Enable1'

    boolean_T Enable2_Value;           // Expression: true()
                                          //  Referenced by: '<S314>/Enable2'

    boolean_T Enable3_Value;           // Expression: true()
                                          //  Referenced by: '<S314>/Enable3'

    boolean_T Constant2_Value_h;       // Expression: false
                                          //  Referenced by: '<S329>/Constant2'

    boolean_T Constant3_Value_i;       // Expression: false
                                          //  Referenced by: '<S329>/Constant3'

    boolean_T Constant_Value_pl;       // Computed Parameter: Constant_Value_pl
                                          //  Referenced by: '<S335>/Constant'

    boolean_T Delay_InitialCondition_az;
                                // Computed Parameter: Delay_InitialCondition_az
                                   //  Referenced by: '<S332>/Delay'

    boolean_T Constant1_Value_is;      // Expression: false
                                          //  Referenced by: '<S332>/Constant1'

    boolean_T Constant2_Value_a;       // Expression: false
                                          //  Referenced by: '<S325>/Constant2'

    boolean_T Constant3_Value_n;       // Expression: false
                                          //  Referenced by: '<S325>/Constant3'

    boolean_T Merge_2_InitialOutput;// Computed Parameter: Merge_2_InitialOutput
                                       //  Referenced by: '<S10>/Merge'

    boolean_T Merge_3_InitialOutput_i;
                                  // Computed Parameter: Merge_3_InitialOutput_i
                                     //  Referenced by: '<S10>/Merge'

    int8_T Constant_Value_m0;          // Expression: int8(0)
                                          //  Referenced by: '<S145>/Constant'

    int8_T Constant1_Value_j;          // Expression: int8(0)
                                          //  Referenced by: '<S146>/Constant1'

    int8_T Merge_2_InitialOutput_i;
                                  // Computed Parameter: Merge_2_InitialOutput_i
                                     //  Referenced by: '<S140>/Merge'

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

  // private member function(s) for subsystem '<S248>/MATLAB Function1'
  static void proc_control_MATLABFunction1(const real_T rtu_lin_accel[3], const
    real_T rtu_thresh[3], real_T rty_corr_lin_accel[3]);

  // private member function(s) for subsystem '<S248>/MATLAB Function2'
  static void proc_control_MATLABFunction2(const real_T rtu_a2[3], real_T rtu_w,
    real_T rtu_w_f, real_T rtu_w_fc, const real_T rtu_r21[3], real_T rtu_Ts,
    real_T rty_a1[3], DW_MATLABFunction2_proc_contr_T *localDW);

  // private member function(s) for subsystem '<Root>'
  real_T proc_control_xnrm2_pr(int32_T n, const real_T x[230], int32_T ix0);
  real_T proc_control_rt_hypotd_snf(real_T u0, real_T u1);
  void proc_control_qr(const real_T A[230], real_T Q[230], real_T R[100]);
  void proc_control_trisolve_p(const real_T A[100], real_T B[130]);
  void proc_control_trisolve_pr(const real_T A[100], real_T B[130]);
  real_T proc_control_xnrm2_pr3(int32_T n, const real_T x[299], int32_T ix0);
  void proc_control_qr_p(const real_T A[299], real_T Q[299], real_T R[169]);
  real_T proc_control_xnrm2_pr35(int32_T n, const real_T x[114], int32_T ix0);
  void proc_control_qr_pr(const real_T A[114], real_T Q[114], real_T R[36]);
  void proc_control_trisolve_pr3(const real_T A[36], real_T B[78]);
  void proc_control_trisolve_pr35(const real_T A[36], real_T B[78]);
  real_T proc_control_xnrm2_pr351(int32_T n, const real_T x[247], int32_T ix0);
  void proc_control_qr_pr3(const real_T A[247], real_T Q[247], real_T R[169]);
  real_T proc_control_xnrm2_pr351e(int32_T n, const real_T x[30], int32_T ix0);
  void proc_control_qr_pr35(const real_T A[30], real_T Q[30], real_T R[4]);
  void proc_control_trisolve_pr351(const real_T A[4], real_T B[26]);
  void proc_control_trisolve_pr351e(const real_T A[4], real_T B[26]);
  real_T proc_control_xnrm2_pr351ew(int32_T n, const real_T x[195], int32_T ix0);
  void proc_control_qr_pr351(const real_T A[195], real_T Q[195], real_T R[169]);
  void proc_control_mldivide_pr35(const real_T A[36], real_T B[48]);
  real_T proc_control_rt_powd_snf(real_T u0, real_T u1);
  real_T proc_control_erf(real_T x);
  void proc_control_ft_3(const real_T ct[1016], real_T out1[13]);
  void proc_control_ft_2(const real_T ct[812], real_T out1[13]);
  void proc_control_ft_1(const real_T ct[445], real_T out1[13]);
  void proc_con_AUVQuatPerturbedSimFcn(const real_T in1[13], const real_T in2[6],
    const real_T in4[38], real_T out1[13]);
  void proc_control_EkfNavStatesEq(real_T x[13], const real_T inputs[95]);
  real_T proc_control_xnrm2_pr351ewp(int32_T n, const real_T x[338], int32_T ix0);
  void proc_control_qr_pr351e(const real_T A[338], real_T Q[338], real_T R[169]);
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
  void proc_con_updateWeights_iTeQU2p6(const real_T b_signal[13], real_T W[13]);
  void proc_con_updateWeights_WFpXHMT0(const real_T b_signal[8], real_T W[8]);
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
  real_T proc_control_norm_bB8YUzwT(const real_T x[169]);
  void proc_control_mpower_YOI12Z2i(const real_T a[169], real_T b, real_T c[169]);
  real_T proc_control_log2_oa8AMOVy(real_T x);
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
  void proc_control_xzlartg_5opjPB6F(real_T f, real_T g, real_T *cs, real_T *sn,
    real_T *r);
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
  real_T proc_control_norm_sA0IlwP6(const real_T x[4]);
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
  real_T proc_control_minimum_FuPUSFQR(const real_T x[9]);
  void proc_control_trisolve_welyRBjd(const real_T b_A[81], real_T b_B[81]);
  real_T proc_control_norm_BbqFfIVW(const real_T x[9]);
  real_T proc_control_maximum_6ril9Yjp(const real_T x[9]);
  real_T proc_control_xnrm2_S1qYOusv(int32_T n, const real_T x[81], int32_T ix0);
  void proc_control_xgemv_zYrlt8Jf(int32_T b_m, int32_T n, const real_T b_A[81],
    int32_T ia0, const real_T x[81], int32_T ix0, real_T y[9]);
  void proc_control_xgerc_vcdhhgKg(int32_T b_m, int32_T n, real_T alpha1,
    int32_T ix0, const real_T y[9], real_T b_A[81], int32_T ia0);
  void proc_contro_KWIKfactor_hQlwCp0D(const real_T b_Ac[2034], const int32_T
    iC[226], int32_T nA, const real_T b_Linv[81], real_T b_D[81], real_T b_H[81],
    int32_T n, real_T RLinv[81], real_T *Status);
  void proc_co_DropConstraint_9jcugUNq(int32_T kDrop, boolean_T iA[226], int32_T
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
  void proc_control_isfinite_tbtZO0of(const real_T x[8], boolean_T b[8]);
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
  void proc_control_all_aWPrU3Xb(const boolean_T x[130], boolean_T y[13]);
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
  real_T proc_rt_urand_Upu32_Yd_f_pw_snf(uint32_T *u);
  real_T proc_rt_nrand_Upu32_Yd_f_pw_snf(uint32_T *u);
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
  void Publisher_setupImpl_pr351ewpk3k(const ros_slros2_internal_block_Pub_T
    *obj);

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
//  Block '<S130>/Data Type Duplicate' : Unused code path elimination
//  Block '<S132>/FixPt Data Type Duplicate2' : Unused code path elimination
//  Block '<S131>/Data Type Duplicate' : Unused code path elimination
//  Block '<S133>/FixPt Data Type Duplicate2' : Unused code path elimination
//  Block '<S140>/Display' : Unused code path elimination
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
//  Block '<S166>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S167>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S168>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S169>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S170>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S171>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S172>/Vector Dimension Check' : Unused code path elimination
//  Block '<S173>/Vector Dimension Check' : Unused code path elimination
//  Block '<S174>/Vector Dimension Check' : Unused code path elimination
//  Block '<S175>/Vector Dimension Check' : Unused code path elimination
//  Block '<S176>/Vector Dimension Check' : Unused code path elimination
//  Block '<S177>/Vector Dimension Check' : Unused code path elimination
//  Block '<S151>/last_x' : Unused code path elimination
//  Block '<S178>/Vector Dimension Check' : Unused code path elimination
//  Block '<S151>/useq_scale' : Unused code path elimination
//  Block '<S151>/useq_scale1' : Unused code path elimination
//  Block '<S187>/Constant' : Unused code path elimination
//  Block '<S187>/Floor' : Unused code path elimination
//  Block '<S187>/Floor1' : Unused code path elimination
//  Block '<S188>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S189>/Matrix Dimension Check' : Unused code path elimination
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
//  Block '<S208>/Vector Dimension Check' : Unused code path elimination
//  Block '<S209>/Vector Dimension Check' : Unused code path elimination
//  Block '<S210>/Vector Dimension Check' : Unused code path elimination
//  Block '<S211>/Vector Dimension Check' : Unused code path elimination
//  Block '<S212>/Vector Dimension Check' : Unused code path elimination
//  Block '<S213>/Vector Dimension Check' : Unused code path elimination
//  Block '<S187>/Min' : Unused code path elimination
//  Block '<S187>/last_x' : Unused code path elimination
//  Block '<S214>/Vector Dimension Check' : Unused code path elimination
//  Block '<S184>/m_zero' : Unused code path elimination
//  Block '<S184>/p_zero' : Unused code path elimination
//  Block '<S217>/Data Type Duplicate' : Unused code path elimination
//  Block '<S222>/Matrix Dimension Check' : Unused code path elimination
//  Block '<S223>/Matrix Dimension Check' : Unused code path elimination
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
//  Block '<S238>/Vector Dimension Check' : Unused code path elimination
//  Block '<S239>/Vector Dimension Check' : Unused code path elimination
//  Block '<S240>/Vector Dimension Check' : Unused code path elimination
//  Block '<S241>/Vector Dimension Check' : Unused code path elimination
//  Block '<S219>/mv.init_zero' : Unused code path elimination
//  Block '<S219>/x.init_zero' : Unused code path elimination
//  Block '<S247>/Data Type Duplicate' : Unused code path elimination
//  Block '<S247>/Data Type Propagation' : Unused code path elimination
//  Block '<S271>/Product' : Unused code path elimination
//  Block '<S271>/Product1' : Unused code path elimination
//  Block '<S271>/Product2' : Unused code path elimination
//  Block '<S271>/Product3' : Unused code path elimination
//  Block '<S276>/Product' : Unused code path elimination
//  Block '<S276>/Product1' : Unused code path elimination
//  Block '<S276>/Product2' : Unused code path elimination
//  Block '<S276>/Product3' : Unused code path elimination
//  Block '<S276>/Sum' : Unused code path elimination
//  Block '<S275>/sqrt' : Unused code path elimination
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
//  Block '<S273>/Constant' : Unused code path elimination
//  Block '<S273>/Gain' : Unused code path elimination
//  Block '<S273>/Gain1' : Unused code path elimination
//  Block '<S273>/Gain2' : Unused code path elimination
//  Block '<S273>/Product' : Unused code path elimination
//  Block '<S273>/Product1' : Unused code path elimination
//  Block '<S273>/Product2' : Unused code path elimination
//  Block '<S273>/Product3' : Unused code path elimination
//  Block '<S273>/Product4' : Unused code path elimination
//  Block '<S273>/Product5' : Unused code path elimination
//  Block '<S273>/Product6' : Unused code path elimination
//  Block '<S273>/Product7' : Unused code path elimination
//  Block '<S273>/Product8' : Unused code path elimination
//  Block '<S273>/Sum' : Unused code path elimination
//  Block '<S273>/Sum1' : Unused code path elimination
//  Block '<S273>/Sum2' : Unused code path elimination
//  Block '<S273>/Sum3' : Unused code path elimination
//  Block '<S274>/Constant' : Unused code path elimination
//  Block '<S274>/Gain' : Unused code path elimination
//  Block '<S274>/Gain1' : Unused code path elimination
//  Block '<S274>/Gain2' : Unused code path elimination
//  Block '<S274>/Product' : Unused code path elimination
//  Block '<S274>/Product1' : Unused code path elimination
//  Block '<S274>/Product2' : Unused code path elimination
//  Block '<S274>/Product3' : Unused code path elimination
//  Block '<S274>/Product4' : Unused code path elimination
//  Block '<S274>/Product5' : Unused code path elimination
//  Block '<S274>/Product6' : Unused code path elimination
//  Block '<S274>/Product7' : Unused code path elimination
//  Block '<S274>/Product8' : Unused code path elimination
//  Block '<S274>/Sum' : Unused code path elimination
//  Block '<S274>/Sum1' : Unused code path elimination
//  Block '<S274>/Sum2' : Unused code path elimination
//  Block '<S274>/Sum3' : Unused code path elimination
//  Block '<S283>/Product' : Unused code path elimination
//  Block '<S283>/Product1' : Unused code path elimination
//  Block '<S283>/Product2' : Unused code path elimination
//  Block '<S283>/Product3' : Unused code path elimination
//  Block '<S288>/Product' : Unused code path elimination
//  Block '<S288>/Product1' : Unused code path elimination
//  Block '<S288>/Product2' : Unused code path elimination
//  Block '<S288>/Product3' : Unused code path elimination
//  Block '<S288>/Sum' : Unused code path elimination
//  Block '<S287>/sqrt' : Unused code path elimination
//  Block '<S284>/Constant' : Unused code path elimination
//  Block '<S284>/Gain' : Unused code path elimination
//  Block '<S284>/Gain1' : Unused code path elimination
//  Block '<S284>/Gain2' : Unused code path elimination
//  Block '<S284>/Product' : Unused code path elimination
//  Block '<S284>/Product1' : Unused code path elimination
//  Block '<S284>/Product2' : Unused code path elimination
//  Block '<S284>/Product3' : Unused code path elimination
//  Block '<S284>/Product4' : Unused code path elimination
//  Block '<S284>/Product5' : Unused code path elimination
//  Block '<S284>/Product6' : Unused code path elimination
//  Block '<S284>/Product7' : Unused code path elimination
//  Block '<S284>/Product8' : Unused code path elimination
//  Block '<S284>/Sum' : Unused code path elimination
//  Block '<S284>/Sum1' : Unused code path elimination
//  Block '<S284>/Sum2' : Unused code path elimination
//  Block '<S284>/Sum3' : Unused code path elimination
//  Block '<S285>/Constant' : Unused code path elimination
//  Block '<S285>/Gain' : Unused code path elimination
//  Block '<S285>/Gain1' : Unused code path elimination
//  Block '<S285>/Gain2' : Unused code path elimination
//  Block '<S285>/Product' : Unused code path elimination
//  Block '<S285>/Product1' : Unused code path elimination
//  Block '<S285>/Product2' : Unused code path elimination
//  Block '<S285>/Product3' : Unused code path elimination
//  Block '<S285>/Product4' : Unused code path elimination
//  Block '<S285>/Product5' : Unused code path elimination
//  Block '<S285>/Product6' : Unused code path elimination
//  Block '<S285>/Product7' : Unused code path elimination
//  Block '<S285>/Product8' : Unused code path elimination
//  Block '<S285>/Sum' : Unused code path elimination
//  Block '<S285>/Sum1' : Unused code path elimination
//  Block '<S285>/Sum2' : Unused code path elimination
//  Block '<S285>/Sum3' : Unused code path elimination
//  Block '<S286>/Constant' : Unused code path elimination
//  Block '<S286>/Gain' : Unused code path elimination
//  Block '<S286>/Gain1' : Unused code path elimination
//  Block '<S286>/Gain2' : Unused code path elimination
//  Block '<S286>/Product' : Unused code path elimination
//  Block '<S286>/Product1' : Unused code path elimination
//  Block '<S286>/Product2' : Unused code path elimination
//  Block '<S286>/Product3' : Unused code path elimination
//  Block '<S286>/Product4' : Unused code path elimination
//  Block '<S286>/Product5' : Unused code path elimination
//  Block '<S286>/Product6' : Unused code path elimination
//  Block '<S286>/Product7' : Unused code path elimination
//  Block '<S286>/Product8' : Unused code path elimination
//  Block '<S286>/Sum' : Unused code path elimination
//  Block '<S286>/Sum1' : Unused code path elimination
//  Block '<S286>/Sum2' : Unused code path elimination
//  Block '<S286>/Sum3' : Unused code path elimination
//  Block '<S299>/1//2' : Unused code path elimination
//  Block '<S299>/q0' : Unused code path elimination
//  Block '<S299>/q1' : Unused code path elimination
//  Block '<S299>/q2' : Unused code path elimination
//  Block '<S299>/q3' : Unused code path elimination
//  Block '<S299>/sincos' : Unused code path elimination
//  Block '<S300>/Product' : Unused code path elimination
//  Block '<S300>/Product1' : Unused code path elimination
//  Block '<S300>/Product2' : Unused code path elimination
//  Block '<S300>/Product3' : Unused code path elimination
//  Block '<S305>/Product' : Unused code path elimination
//  Block '<S305>/Product1' : Unused code path elimination
//  Block '<S305>/Product2' : Unused code path elimination
//  Block '<S305>/Product3' : Unused code path elimination
//  Block '<S305>/Sum' : Unused code path elimination
//  Block '<S304>/sqrt' : Unused code path elimination
//  Block '<S301>/Constant' : Unused code path elimination
//  Block '<S301>/Gain' : Unused code path elimination
//  Block '<S301>/Gain1' : Unused code path elimination
//  Block '<S301>/Gain2' : Unused code path elimination
//  Block '<S301>/Product' : Unused code path elimination
//  Block '<S301>/Product1' : Unused code path elimination
//  Block '<S301>/Product2' : Unused code path elimination
//  Block '<S301>/Product3' : Unused code path elimination
//  Block '<S301>/Product4' : Unused code path elimination
//  Block '<S301>/Product5' : Unused code path elimination
//  Block '<S301>/Product6' : Unused code path elimination
//  Block '<S301>/Product7' : Unused code path elimination
//  Block '<S301>/Product8' : Unused code path elimination
//  Block '<S301>/Sum' : Unused code path elimination
//  Block '<S301>/Sum1' : Unused code path elimination
//  Block '<S301>/Sum2' : Unused code path elimination
//  Block '<S301>/Sum3' : Unused code path elimination
//  Block '<S302>/Constant' : Unused code path elimination
//  Block '<S302>/Gain' : Unused code path elimination
//  Block '<S302>/Gain1' : Unused code path elimination
//  Block '<S302>/Gain2' : Unused code path elimination
//  Block '<S302>/Product' : Unused code path elimination
//  Block '<S302>/Product1' : Unused code path elimination
//  Block '<S302>/Product2' : Unused code path elimination
//  Block '<S302>/Product3' : Unused code path elimination
//  Block '<S302>/Product4' : Unused code path elimination
//  Block '<S302>/Product5' : Unused code path elimination
//  Block '<S302>/Product6' : Unused code path elimination
//  Block '<S302>/Product7' : Unused code path elimination
//  Block '<S302>/Product8' : Unused code path elimination
//  Block '<S302>/Sum' : Unused code path elimination
//  Block '<S302>/Sum1' : Unused code path elimination
//  Block '<S302>/Sum2' : Unused code path elimination
//  Block '<S302>/Sum3' : Unused code path elimination
//  Block '<S303>/Constant' : Unused code path elimination
//  Block '<S303>/Gain' : Unused code path elimination
//  Block '<S303>/Gain1' : Unused code path elimination
//  Block '<S303>/Gain2' : Unused code path elimination
//  Block '<S303>/Product' : Unused code path elimination
//  Block '<S303>/Product1' : Unused code path elimination
//  Block '<S303>/Product2' : Unused code path elimination
//  Block '<S303>/Product3' : Unused code path elimination
//  Block '<S303>/Product4' : Unused code path elimination
//  Block '<S303>/Product5' : Unused code path elimination
//  Block '<S303>/Product6' : Unused code path elimination
//  Block '<S303>/Product7' : Unused code path elimination
//  Block '<S303>/Product8' : Unused code path elimination
//  Block '<S303>/Sum' : Unused code path elimination
//  Block '<S303>/Sum1' : Unused code path elimination
//  Block '<S303>/Sum2' : Unused code path elimination
//  Block '<S303>/Sum3' : Unused code path elimination
//  Block '<S249>/Scope' : Unused code path elimination
//  Block '<S306>/Data Type Duplicate' : Unused code path elimination
//  Block '<S309>/Constant' : Unused code path elimination
//  Block '<S309>/Gain' : Unused code path elimination
//  Block '<S309>/Gain1' : Unused code path elimination
//  Block '<S309>/Gain2' : Unused code path elimination
//  Block '<S309>/Product' : Unused code path elimination
//  Block '<S309>/Product1' : Unused code path elimination
//  Block '<S309>/Product2' : Unused code path elimination
//  Block '<S309>/Product3' : Unused code path elimination
//  Block '<S309>/Product4' : Unused code path elimination
//  Block '<S309>/Product5' : Unused code path elimination
//  Block '<S309>/Product6' : Unused code path elimination
//  Block '<S309>/Product7' : Unused code path elimination
//  Block '<S309>/Product8' : Unused code path elimination
//  Block '<S309>/Sum' : Unused code path elimination
//  Block '<S309>/Sum1' : Unused code path elimination
//  Block '<S309>/Sum2' : Unused code path elimination
//  Block '<S309>/Sum3' : Unused code path elimination
//  Block '<S310>/Constant' : Unused code path elimination
//  Block '<S310>/Gain' : Unused code path elimination
//  Block '<S310>/Gain1' : Unused code path elimination
//  Block '<S310>/Gain2' : Unused code path elimination
//  Block '<S310>/Product' : Unused code path elimination
//  Block '<S310>/Product1' : Unused code path elimination
//  Block '<S310>/Product2' : Unused code path elimination
//  Block '<S310>/Product3' : Unused code path elimination
//  Block '<S310>/Product4' : Unused code path elimination
//  Block '<S310>/Product5' : Unused code path elimination
//  Block '<S310>/Product6' : Unused code path elimination
//  Block '<S310>/Product7' : Unused code path elimination
//  Block '<S310>/Product8' : Unused code path elimination
//  Block '<S310>/Sum' : Unused code path elimination
//  Block '<S310>/Sum1' : Unused code path elimination
//  Block '<S310>/Sum2' : Unused code path elimination
//  Block '<S310>/Sum3' : Unused code path elimination
//  Block '<S251>/Display' : Unused code path elimination
//  Block '<S251>/Display1' : Unused code path elimination
//  Block '<S251>/Display2' : Unused code path elimination
//  Block '<S314>/checkMeasurementFcn1Signals' : Unused code path elimination
//  Block '<S314>/checkMeasurementFcn2Signals' : Unused code path elimination
//  Block '<S314>/checkMeasurementFcn3Signals' : Unused code path elimination
//  Block '<S314>/checkStateTransitionFcnSignals' : Unused code path elimination
//  Block '<S315>/Constant' : Unused code path elimination
//  Block '<S315>/Constant1' : Unused code path elimination
//  Block '<S315>/Switch' : Unused code path elimination
//  Block '<S315>/Switch1' : Unused code path elimination
//  Block '<S315>/Zero-Order Hold' : Unused code path elimination
//  Block '<S253>/Display' : Unused code path elimination
//  Block '<S254>/Scope' : Unused code path elimination
//  Block '<S254>/Scope1' : Unused code path elimination
//  Block '<S254>/Scope2' : Unused code path elimination
//  Block '<S254>/Scope3' : Unused code path elimination
//  Block '<S326>/Matrix Concatenate' : Unused code path elimination
//  Block '<S326>/Scope' : Unused code path elimination
//  Block '<S326>/Scope1' : Unused code path elimination
//  Block '<S326>/Scope2' : Unused code path elimination
//  Block '<S326>/Scope3' : Unused code path elimination
//  Block '<S326>/Selector' : Unused code path elimination
//  Block '<S326>/Selector1' : Unused code path elimination
//  Block '<S326>/Selector2' : Unused code path elimination
//  Block '<S326>/Selector3' : Unused code path elimination
//  Block '<S326>/Selector4' : Unused code path elimination
//  Block '<S326>/Sum' : Unused code path elimination
//  Block '<S326>/e angular rates' : Unused code path elimination
//  Block '<S326>/e position' : Unused code path elimination
//  Block '<S326>/e quaternion' : Unused code path elimination
//  Block '<S326>/e velocity' : Unused code path elimination
//  Block '<S330>/Scope' : Unused code path elimination
//  Block '<S344>/Display' : Unused code path elimination
//  Block '<S344>/Selector3' : Unused code path elimination
//  Block '<S332>/Scope' : Unused code path elimination
//  Block '<S347>/Constant1' : Unused code path elimination
//  Block '<S347>/Constant2' : Unused code path elimination
//  Block '<S347>/Constant3' : Unused code path elimination
//  Block '<S347>/Constant4' : Unused code path elimination
//  Block '<S347>/Constant5' : Unused code path elimination
//  Block '<S347>/Constant6' : Unused code path elimination
//  Block '<S347>/Frame' : Unused code path elimination
//  Block '<S347>/fine' : Unused code path elimination
//  Block '<S347>/speed' : Unused code path elimination
//  Block '<S347>/speed1' : Unused code path elimination
//  Block '<S81>/Zero-Order Hold' : Eliminated since input and output rates are identical
//  Block '<S7>/Zero-Order Hold' : Eliminated since input and output rates are identical
//  Block '<S151>/Reshape' : Reshape block reduction
//  Block '<S151>/Reshape1' : Reshape block reduction
//  Block '<S151>/Reshape2' : Reshape block reduction
//  Block '<S151>/Reshape3' : Reshape block reduction
//  Block '<S151>/Reshape4' : Reshape block reduction
//  Block '<S151>/Reshape5' : Reshape block reduction
//  Block '<S187>/Reshape' : Reshape block reduction
//  Block '<S187>/Reshape1' : Reshape block reduction
//  Block '<S187>/Reshape2' : Reshape block reduction
//  Block '<S187>/Reshape3' : Reshape block reduction
//  Block '<S187>/Reshape4' : Reshape block reduction
//  Block '<S187>/Reshape5' : Reshape block reduction
//  Block '<S220>/Reshape1' : Reshape block reduction
//  Block '<S220>/mo or x Conversion' : Eliminate redundant data type conversion
//  Block '<S220>/mo or x Conversion10' : Eliminate redundant data type conversion
//  Block '<S220>/mo or x Conversion11' : Eliminate redundant data type conversion
//  Block '<S220>/mo or x Conversion12' : Eliminate redundant data type conversion
//  Block '<S220>/mo or x Conversion13' : Eliminate redundant data type conversion
//  Block '<S220>/mo or x Conversion14' : Eliminate redundant data type conversion
//  Block '<S220>/mo or x Conversion15' : Eliminate redundant data type conversion
//  Block '<S220>/mo or x Conversion16' : Eliminate redundant data type conversion
//  Block '<S220>/mo or x Conversion17' : Eliminate redundant data type conversion
//  Block '<S220>/mo or x Conversion18' : Eliminate redundant data type conversion
//  Block '<S220>/mo or x Conversion19' : Eliminate redundant data type conversion
//  Block '<S220>/mo or x Conversion2' : Eliminate redundant data type conversion
//  Block '<S220>/mo or x Conversion3' : Eliminate redundant data type conversion
//  Block '<S220>/mo or x Conversion4' : Eliminate redundant data type conversion
//  Block '<S220>/mo or x Conversion5' : Eliminate redundant data type conversion
//  Block '<S220>/mo or x Conversion6' : Eliminate redundant data type conversion
//  Block '<S220>/mo or x Conversion7' : Eliminate redundant data type conversion
//  Block '<S220>/mo or x Conversion8' : Eliminate redundant data type conversion
//  Block '<S220>/mo or x Conversion9' : Eliminate redundant data type conversion
//  Block '<S221>/reshape_mv' : Reshape block reduction
//  Block '<S314>/DataTypeConversion_Enable1' : Eliminate redundant data type conversion
//  Block '<S314>/DataTypeConversion_Enable2' : Eliminate redundant data type conversion
//  Block '<S314>/DataTypeConversion_Enable3' : Eliminate redundant data type conversion
//  Block '<S314>/DataTypeConversion_Q' : Eliminate redundant data type conversion
//  Block '<S314>/DataTypeConversion_R1' : Eliminate redundant data type conversion
//  Block '<S314>/DataTypeConversion_R2' : Eliminate redundant data type conversion
//  Block '<S314>/DataTypeConversion_R3' : Eliminate redundant data type conversion
//  Block '<S314>/DataTypeConversion_uMeas1' : Eliminate redundant data type conversion
//  Block '<S314>/DataTypeConversion_uMeas2' : Eliminate redundant data type conversion
//  Block '<S314>/DataTypeConversion_uMeas3' : Eliminate redundant data type conversion
//  Block '<S314>/DataTypeConversion_y1' : Eliminate redundant data type conversion
//  Block '<S314>/DataTypeConversion_y2' : Eliminate redundant data type conversion
//  Block '<S314>/DataTypeConversion_y3' : Eliminate redundant data type conversion
//  Block '<S251>/Zero-Order Hold1' : Eliminated since input and output rates are identical
//  Block '<S253>/Reshape' : Reshape block reduction


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
//  '<S106>' : 'proc_control/Ros Command/Ros Command Manager/proc_control reset_trajectory'
//  '<S107>' : 'proc_control/Ros Command/Ros Command Manager/proc_control set_mode'
//  '<S108>' : 'proc_control/Ros Command/Ros Command Manager/proc_nav reset_pos'
//  '<S109>' : 'proc_control/Ros Command/Ros Command Manager/proc_simulation start_simulation'
//  '<S110>' : 'proc_control/Ros Command/Ros Command Manager/provider_rs485 kill_status'
//  '<S111>' : 'proc_control/Ros Command/Ros Command Manager/telemetry dryrun'
//  '<S112>' : 'proc_control/Ros Command/Ros Command Manager/proc_control reset_trajectory/Enabled Subsystem'
//  '<S113>' : 'proc_control/Ros Command/Ros Command Manager/proc_control set_mode/Enabled Subsystem'
//  '<S114>' : 'proc_control/Ros Command/Ros Command Manager/proc_nav reset_pos/Enabled Subsystem'
//  '<S115>' : 'proc_control/Ros Command/Ros Command Manager/proc_simulation start_simulation/Enabled Subsystem'
//  '<S116>' : 'proc_control/Ros Command/Ros Command Manager/provider_rs485 kill_status/Enabled Subsystem'
//  '<S117>' : 'proc_control/Ros Command/Ros Command Manager/telemetry dryrun/Enabled Subsystem'
//  '<S118>' : 'proc_control/Sensors Input/AUV'
//  '<S119>' : 'proc_control/Sensors Input/Enabled Subsystem'
//  '<S120>' : 'proc_control/Sensors Input/Simulation'
//  '<S121>' : 'proc_control/Sensors Input/AUV/Subscribe'
//  '<S122>' : 'proc_control/Sensors Input/AUV/Subscribe1'
//  '<S123>' : 'proc_control/Sensors Input/AUV/Subscribe2'
//  '<S124>' : 'proc_control/Sensors Input/AUV/Subscribe4'
//  '<S125>' : 'proc_control/Sensors Input/AUV/Subscribe/Enabled Subsystem'
//  '<S126>' : 'proc_control/Sensors Input/AUV/Subscribe1/Enabled Subsystem'
//  '<S127>' : 'proc_control/Sensors Input/AUV/Subscribe2/Enabled Subsystem'
//  '<S128>' : 'proc_control/Sensors Input/AUV/Subscribe4/Enabled Subsystem'
//  '<S129>' : 'proc_control/Sensors Input/Enabled Subsystem/MATLAB Function'
//  '<S130>' : 'proc_control/Sensors Input/Enabled Subsystem/MinMax Running Resettable'
//  '<S131>' : 'proc_control/Sensors Input/Enabled Subsystem/MinMax Running Resettable1'
//  '<S132>' : 'proc_control/Sensors Input/Enabled Subsystem/MinMax Running Resettable/Subsystem'
//  '<S133>' : 'proc_control/Sensors Input/Enabled Subsystem/MinMax Running Resettable1/Subsystem'
//  '<S134>' : 'proc_control/Sensors Input/Simulation/Subscribe'
//  '<S135>' : 'proc_control/Sensors Input/Simulation/Subscribe1'
//  '<S136>' : 'proc_control/Sensors Input/Simulation/Subscribe2'
//  '<S137>' : 'proc_control/Sensors Input/Simulation/Subscribe/Enabled Subsystem'
//  '<S138>' : 'proc_control/Sensors Input/Simulation/Subscribe1/Enabled Subsystem'
//  '<S139>' : 'proc_control/Sensors Input/Simulation/Subscribe2/Enabled Subsystem'
//  '<S140>' : 'proc_control/Subsystem Controller/Controller List'
//  '<S141>' : 'proc_control/Subsystem Controller/If Action Subsystem'
//  '<S142>' : 'proc_control/Subsystem Controller/Post Traitement'
//  '<S143>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem'
//  '<S144>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1'
//  '<S145>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem2'
//  '<S146>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem3'
//  '<S147>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)'
//  '<S148>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller'
//  '<S149>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Bus2Mux'
//  '<S150>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals'
//  '<S151>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC'
//  '<S152>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S153>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S154>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S155>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S156>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S157>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S158>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S159>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S160>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S161>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S162>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S163>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check'
//  '<S164>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S165>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S166>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S167>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S168>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S169>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S170>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S171>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S172>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S173>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S174>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S175>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Vector Signal Check'
//  '<S176>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S177>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S178>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/moorx'
//  '<S179>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/optimizer'
//  '<S180>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Adaptive MPC Controller/MPC/optimizer/VariableHorizonOptimizer'
//  '<S181>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals/Blank Message'
//  '<S182>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals/Header Assignment'
//  '<S183>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem/Sent mesurement residuals/Publish'
//  '<S184>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller'
//  '<S185>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Bus2Mux'
//  '<S186>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/MATLAB Function'
//  '<S187>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC'
//  '<S188>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check'
//  '<S189>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check A'
//  '<S190>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check B'
//  '<S191>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check C'
//  '<S192>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check D'
//  '<S193>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check DX'
//  '<S194>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check U'
//  '<S195>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check X'
//  '<S196>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check Y'
//  '<S197>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check1'
//  '<S198>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Matrix Signal Check2'
//  '<S199>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check'
//  '<S200>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S201>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check2'
//  '<S202>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S203>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S204>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S205>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S206>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S207>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S208>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Scalar Signal Check'
//  '<S209>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S210>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S211>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Vector Signal Check'
//  '<S212>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S213>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/MPC Vector Signal Check6'
//  '<S214>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/moorx'
//  '<S215>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/optimizer'
//  '<S216>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem1/Adaptive MPC Controller/MPC/optimizer/FixedHorizonOptimizer'
//  '<S217>' : 'proc_control/Subsystem Controller/Controller List/If Action Subsystem2/Discrete Derivative'
//  '<S218>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Bus2Mux1'
//  '<S219>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller'
//  '<S220>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC'
//  '<S221>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/xmvs_router'
//  '<S222>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check'
//  '<S223>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check1'
//  '<S224>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check10'
//  '<S225>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check11'
//  '<S226>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check12'
//  '<S227>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check13'
//  '<S228>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check14'
//  '<S229>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check15'
//  '<S230>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check16'
//  '<S231>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check3'
//  '<S232>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check4'
//  '<S233>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check5'
//  '<S234>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check6'
//  '<S235>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check7'
//  '<S236>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check8'
//  '<S237>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Preview Signal Check9'
//  '<S238>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check1'
//  '<S239>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Scalar Signal Check2'
//  '<S240>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check1'
//  '<S241>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/MPC Vector Signal Check11'
//  '<S242>' : 'proc_control/Subsystem Controller/Controller List/Quaternion Non linear MPC (Not for codegen)/Nonlinear MPC Controller/MPC/NLMPC'
//  '<S243>' : 'proc_control/Subsystem Controller/If Action Subsystem/Subscribe'
//  '<S244>' : 'proc_control/Subsystem Controller/If Action Subsystem/Subscribe1'
//  '<S245>' : 'proc_control/Subsystem Controller/If Action Subsystem/Subscribe/Enabled Subsystem'
//  '<S246>' : 'proc_control/Subsystem Controller/If Action Subsystem/Subscribe1/Enabled Subsystem'
//  '<S247>' : 'proc_control/Subsystem Controller/Post Traitement/PSU Safe'
//  '<S248>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments'
//  '<S249>' : 'proc_control/Subsystem ProcNav/DVL Measurements'
//  '<S250>' : 'proc_control/Subsystem ProcNav/Depth Measurements'
//  '<S251>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem'
//  '<S252>' : 'proc_control/Subsystem ProcNav/Reset Logic'
//  '<S253>' : 'proc_control/Subsystem ProcNav/State function arguments'
//  '<S254>' : 'proc_control/Subsystem ProcNav/mux2Bus'
//  '<S255>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/MATLAB Function'
//  '<S256>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/MATLAB Function1'
//  '<S257>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/MATLAB Function2'
//  '<S258>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/MATLAB Function3'
//  '<S259>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/MATLAB Function4'
//  '<S260>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Publish IMU Vel'
//  '<S261>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Conjugate'
//  '<S262>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse'
//  '<S263>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation'
//  '<S264>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1'
//  '<S265>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2'
//  '<S266>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation3'
//  '<S267>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Publish IMU Vel/Blank Message'
//  '<S268>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Publish IMU Vel/Publish'
//  '<S269>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Conjugate'
//  '<S270>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Inverse/Quaternion Norm'
//  '<S271>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/Quaternion Normalize'
//  '<S272>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/V1'
//  '<S273>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/V2'
//  '<S274>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/V3'
//  '<S275>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S276>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S277>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize'
//  '<S278>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V1'
//  '<S279>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V2'
//  '<S280>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/V3'
//  '<S281>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus'
//  '<S282>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation1/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S283>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize'
//  '<S284>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V1'
//  '<S285>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V2'
//  '<S286>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/V3'
//  '<S287>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus'
//  '<S288>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation2/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S289>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation3/Quaternion Normalize'
//  '<S290>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation3/V1'
//  '<S291>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation3/V2'
//  '<S292>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation3/V3'
//  '<S293>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation3/Quaternion Normalize/Quaternion Modulus'
//  '<S294>' : 'proc_control/Subsystem ProcNav/AHRS//Detph Mesurments/Quaternion Rotation3/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S295>' : 'proc_control/Subsystem ProcNav/DVL Measurements/DVL2Ship'
//  '<S296>' : 'proc_control/Subsystem ProcNav/DVL Measurements/MATLAB Function'
//  '<S297>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation'
//  '<S298>' : 'proc_control/Subsystem ProcNav/DVL Measurements/DVL2Ship/Enabled Subsystem'
//  '<S299>' : 'proc_control/Subsystem ProcNav/DVL Measurements/DVL2Ship/Enabled Subsystem/Rotation Angles to Quaternions'
//  '<S300>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/Quaternion Normalize'
//  '<S301>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/V1'
//  '<S302>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/V2'
//  '<S303>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/V3'
//  '<S304>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S305>' : 'proc_control/Subsystem ProcNav/DVL Measurements/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S306>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Discrete Derivative'
//  '<S307>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation'
//  '<S308>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/Quaternion Normalize'
//  '<S309>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/V1'
//  '<S310>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/V2'
//  '<S311>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/V3'
//  '<S312>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus'
//  '<S313>' : 'proc_control/Subsystem ProcNav/Depth Measurements/Quaternion Rotation/Quaternion Normalize/Quaternion Modulus/Quaternion Norm'
//  '<S314>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter'
//  '<S315>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Subsystem'
//  '<S316>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Correct1'
//  '<S317>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Correct2'
//  '<S318>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Correct3'
//  '<S319>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Output'
//  '<S320>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Predict'
//  '<S321>' : 'proc_control/Subsystem ProcNav/Enabled Subsystem/Extended Kalman Filter/Output/MATLAB Function'
//  '<S322>' : 'proc_control/Subsystem ProcNav/mux2Bus/Quaternion Inverse'
//  '<S323>' : 'proc_control/Subsystem ProcNav/mux2Bus/Quaternion Inverse/Quaternion Conjugate'
//  '<S324>' : 'proc_control/Subsystem ProcNav/mux2Bus/Quaternion Inverse/Quaternion Norm'
//  '<S325>' : 'proc_control/Subsystem Trajectory/IDLE'
//  '<S326>' : 'proc_control/Subsystem Trajectory/Performance Graph'
//  '<S327>' : 'proc_control/Subsystem Trajectory/ProcPlanner Trajectory'
//  '<S328>' : 'proc_control/Subsystem Trajectory/Send Current Target'
//  '<S329>' : 'proc_control/Subsystem Trajectory/SpaceNav'
//  '<S330>' : 'proc_control/Subsystem Trajectory/Subsystem'
//  '<S331>' : 'proc_control/Subsystem Trajectory/Subsystem1'
//  '<S332>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only'
//  '<S333>' : 'proc_control/Subsystem Trajectory/IDLE/MATLAB Function'
//  '<S334>' : 'proc_control/Subsystem Trajectory/ProcPlanner Trajectory/Detect Rise Positive'
//  '<S335>' : 'proc_control/Subsystem Trajectory/ProcPlanner Trajectory/Detect Rise Positive/Positive'
//  '<S336>' : 'proc_control/Subsystem Trajectory/Send Current Target/Blank Message'
//  '<S337>' : 'proc_control/Subsystem Trajectory/Send Current Target/Publish'
//  '<S338>' : 'proc_control/Subsystem Trajectory/SpaceNav/MATLAB Function'
//  '<S339>' : 'proc_control/Subsystem Trajectory/Subsystem/Subscribe'
//  '<S340>' : 'proc_control/Subsystem Trajectory/Subsystem/Subscribe/Enabled Subsystem'
//  '<S341>' : 'proc_control/Subsystem Trajectory/Subsystem1/Subscribe'
//  '<S342>' : 'proc_control/Subsystem Trajectory/Subsystem1/Subscribe/Enabled Subsystem'
//  '<S343>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Enabled Subsystem'
//  '<S344>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Pre-traitement'
//  '<S345>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Resettable Subsystem'
//  '<S346>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Subscribe'
//  '<S347>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Subsystem'
//  '<S348>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Resettable Subsystem/Subsystem'
//  '<S349>' : 'proc_control/Subsystem Trajectory/singleWpts Trajectory Control DEBUG only/Subscribe/Enabled Subsystem'

#endif                                 // proc_control_h_

//
// File trailer for generated code.
//
// [EOF]
//
