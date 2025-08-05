//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: rotateRight_lMfCUnsH.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.205
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Sat Aug  2 17:12:04 2025
//
#include "rtwtypes.h"
#include "rotateRight_lMfCUnsH.h"

// Function for MATLAB Function: '<S141>/MATLAB Function'
void rotateRight_lMfCUnsH(int32_T n, real_T z[169], int32_T iz0, const real_T
  cs[24], int32_T ic0, int32_T is0)
{
  for (int32_T j{n - 1}; j >= 1; j--) {
    real_T ctemp;
    real_T stemp;
    int32_T offsetj;
    int32_T offsetjp1;
    ctemp = cs[(ic0 + j) - 2];
    stemp = cs[(is0 + j) - 2];
    offsetj = ((j - 1) * 13 + iz0) - 1;
    offsetjp1 = (j * 13 + iz0) - 1;
    if ((ctemp != 1.0) || (stemp != 0.0)) {
      for (int32_T i{0}; i < 13; i++) {
        real_T temp;
        int32_T temp_tmp;
        int32_T tmp;
        temp_tmp = offsetjp1 + i;
        temp = z[temp_tmp];
        tmp = offsetj + i;
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
