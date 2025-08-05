//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: rotateRight_ppseAKEY.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.205
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Sat Aug  2 17:12:04 2025
//
#include "rtwtypes.h"
#include "rotateRight_ppseAKEY.h"

// Function for MATLAB Function: '<S141>/MATLAB Function'
void rotateRight_ppseAKEY(int32_T n, real_T z[169], int32_T iz0, const real_T
  cs[24], int32_T ic0, int32_T is0)
{
  for (int32_T b_j{0}; b_j <= n - 2; b_j++) {
    real_T ctemp;
    real_T stemp;
    int32_T offsetj;
    int32_T offsetjp1;
    ctemp = cs[(ic0 + b_j) - 1];
    stemp = cs[(is0 + b_j) - 1];
    offsetj = (b_j * 13 + iz0) - 1;
    offsetjp1 = ((b_j + 1) * 13 + iz0) - 1;
    if ((ctemp != 1.0) || (stemp != 0.0)) {
      for (int32_T j{0}; j < 13; j++) {
        real_T temp;
        int32_T temp_tmp;
        int32_T tmp;
        temp_tmp = offsetjp1 + j;
        temp = z[temp_tmp];
        tmp = offsetj + j;
        z[temp_tmp] = ctemp * temp - z[tmp] * stemp;
        z[tmp] = z[tmp] * ctemp + stemp * temp;
      }
    }
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
