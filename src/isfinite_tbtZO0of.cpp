//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: isfinite_tbtZO0of.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.186
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Sat Jun 21 18:59:37 2025
//
#include "rtwtypes.h"
#include "isfinite_tbtZO0of.h"
#include <cmath>
#include "cmath"

// Function for MATLAB Function: '<S217>/NLMPC'
void isfinite_tbtZO0of(const real_T x[8], boolean_T b[8])
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
