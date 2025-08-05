//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: recomputeBlockDiag_GI8hdgJN.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.205
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Sat Aug  2 17:12:04 2025
//
#include "rtwtypes.h"
#include "recomputeBlockDiag_GI8hdgJN.h"
#include <cmath>

// Function for MATLAB Function: '<S141>/MATLAB Function'
void recomputeBlockDiag_GI8hdgJN(const real_T A[169], real_T F[169], const
  int32_T blockFormat[12])
{
  for (int32_T j{0}; j < 12; j++) {
    switch (blockFormat[j]) {
     case 0:
      break;

     case 1:
      {
        real_T A_0;
        real_T A_1;
        real_T delta;
        real_T expa;
        real_T sinchdelta;
        int32_T A_tmp;
        int32_T A_tmp_0;
        A_tmp_0 = 13 * j + j;
        A_0 = A[A_tmp_0];
        delta = std::exp(A_0);
        A_tmp = (j + 1) * 13 + j;
        A_1 = A[A_tmp + 1];
        expa = std::exp(A_1);
        sinchdelta = (A_1 + A_0) / 2.0;
        if (std::fmax(sinchdelta, std::abs(A_0 - A_1) / 2.0) < 709.782712893384)
        {
          A_0 = (A_1 - A_0) / 2.0;
          if (A_0 == 0.0) {
            A_0 = 1.0;
          } else {
            A_0 = std::sinh(A_0) / A_0;
          }

          sinchdelta = A[A_tmp] * std::exp(sinchdelta) * A_0;
        } else {
          sinchdelta = (expa - delta) * A[A_tmp] / (A_1 - A_0);
        }

        F[A_tmp_0] = delta;
        F[A_tmp] = sinchdelta;
        F[A_tmp + 1] = expa;
      }
      break;

     default:
      {
        real_T A_0;
        real_T A_1;
        real_T delta;
        real_T expa;
        real_T sinchdelta;
        int32_T A_tmp;
        int32_T A_tmp_0;
        A_tmp_0 = (j + 1) * 13 + j;
        A_0 = A[A_tmp_0];
        A_tmp = 13 * j + j;
        A_1 = A[A_tmp + 1];
        delta = std::sqrt(std::abs(A_0 * A_1));
        expa = std::exp(A[A_tmp]);
        if (delta == 0.0) {
          sinchdelta = 1.0;
        } else {
          sinchdelta = std::sin(delta) / delta;
        }

        delta = expa * std::cos(delta);
        F[A_tmp] = delta;
        F[A_tmp + 1] = A_1 * expa * sinchdelta;
        F[A_tmp_0] = A_0 * expa * sinchdelta;
        F[A_tmp_0 + 1] = delta;
      }
      break;
    }
  }

  if (blockFormat[11] == 0) {
    F[168] = std::exp(A[168]);
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
