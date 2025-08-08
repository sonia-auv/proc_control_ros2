//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: all_aWPrU3Xb.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.186
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Sat Jun 21 18:59:37 2025
//
#include "rtwtypes.h"
#include "all_aWPrU3Xb.h"

// Function for MATLAB Function: '<S217>/NLMPC'
void all_aWPrU3Xb(const boolean_T x[130], boolean_T y[13])
{
  int32_T i2;
  i2 = 1;
  for (int32_T i{0}; i < 13; i++) {
    int32_T a;
    int32_T ix;
    boolean_T exitg1;
    y[i] = true;
    a = i2 + 9;
    ix = i2;
    i2 += 10;
    exitg1 = false;
    while ((!exitg1) && (ix <= a)) {
      if (!x[ix - 1]) {
        y[i] = false;
        exitg1 = true;
      } else {
        ix++;
      }
    }
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
