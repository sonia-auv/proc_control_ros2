//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: trisolve_welyRBjd.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.205
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Sat Aug  2 17:12:04 2025
//
#include "rtwtypes.h"
#include "trisolve_welyRBjd.h"

// Function for MATLAB Function: '<S212>/FixedHorizonOptimizer'
void trisolve_welyRBjd(const real_T b_A[81], real_T b_B[81])
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
