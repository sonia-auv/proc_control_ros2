//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: all_Dt0A7QFv.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 4.0
// Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
// C/C++ source code generated on : Sat Jun 27 16:04:42 2026
//
#include "rtwtypes.h"
#include "all_Dt0A7QFv.h"

// Function for MATLAB Function: '<S217>/NLMPC'
void all_Dt0A7QFv(const boolean_T x[130], boolean_T y[13])
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
