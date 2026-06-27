//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: isfinite_2ZoJfJwq.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 4.0
// Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
// C/C++ source code generated on : Sat Jun 27 16:04:42 2026
//
#include "rtwtypes.h"
#include "isfinite_2ZoJfJwq.h"
#include <cmath>
#include "cmath"

// Function for MATLAB Function: '<S217>/NLMPC'
void isfinite_2ZoJfJwq(const real_T x[8], boolean_T b[8])
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
