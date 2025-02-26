//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: isfinite_i0dyo4ea.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.184
// Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
// C/C++ source code generated on : Wed Feb 26 16:57:19 2025
//
#include "rtwtypes.h"
#include "isfinite_i0dyo4ea.h"
#include <cmath>
#include "cmath"

// Function for MATLAB Function: '<S217>/NLMPC'
void isfinite_i0dyo4ea(const real_T x[8], boolean_T b[8])
{
  for (int32_T i{0}; i < 8; i++) {
    real_T x_0;
    x_0 = x[i];
    b[i] = ((!std::isinf(x_0)) && (!std::isnan(x_0)));
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
