//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: all_3Trhx1la.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.184
// Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
// C/C++ source code generated on : Wed Feb 26 16:57:19 2025
//
#include "rtwtypes.h"
#include "all_3Trhx1la.h"

// Function for MATLAB Function: '<S217>/NLMPC'
void all_3Trhx1la(const boolean_T x[130], boolean_T y[13])
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
