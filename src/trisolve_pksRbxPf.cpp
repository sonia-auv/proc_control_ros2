//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: trisolve_pksRbxPf.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.184
// Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
// C/C++ source code generated on : Wed Feb 26 16:57:19 2025
//
#include "rtwtypes.h"
#include "trisolve_pksRbxPf.h"

// Function for MATLAB Function: '<S212>/FixedHorizonOptimizer'
void trisolve_pksRbxPf(const real_T b_A[81], real_T b_B[81])
{
  for (int32_T j{0}; j < 9; j++) {
    int32_T jBcol;
    jBcol = 9 * j;
    for (int32_T b_k{0}; b_k < 9; b_k++) {
      real_T b_B_0;
      int32_T b_B_tmp;
      int32_T kAcol;
      kAcol = 9 * b_k;
      b_B_tmp = b_k + jBcol;
      b_B_0 = b_B[b_B_tmp];
      if (b_B_0 != 0.0) {
        b_B[b_B_tmp] = b_B_0 / b_A[b_k + kAcol];
        for (int32_T i{b_k + 2}; i < 10; i++) {
          int32_T tmp;
          tmp = (i + jBcol) - 1;
          b_B[tmp] -= b_A[(i + kAcol) - 1] * b_B[b_B_tmp];
        }
      }
    }
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
