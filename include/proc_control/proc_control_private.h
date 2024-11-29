//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: proc_control_private.h
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
#ifndef proc_control_private_h_
#define proc_control_private_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "proc_control_types.h"
#include "proc_control.h"

extern real_T rt_hypotd_snf(real_T u0, real_T u1);
extern real_T rt_powd_snf(real_T u0, real_T u1);
extern real_T rt_atan2d_snf(real_T u0, real_T u1);
extern real_T rt_roundd_snf(real_T u);
extern uint32_T plook_u32d_binckpang(real_T u, const real_T bp[], uint32_T
  maxIndex, uint32_T *prevIndex);
extern uint32_T binsearch_u32d_prevIdx(real_T u, const real_T bp[], uint32_T
  startIndex, uint32_T maxIndex);
extern int32_T div_nde_s32_floor(int32_T numerator, int32_T denominator);

#endif                                 // proc_control_private_h_

//
// File trailer for generated code.
//
// [EOF]
//
