//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: norm_T8v8L2Tp.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 4.0
// Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
// C/C++ source code generated on : Sat Jun 27 16:04:42 2026
//
#include "rtwtypes.h"
#include "norm_T8v8L2Tp.h"
#include <cmath>

extern "C"
{

#include "rt_nonfinite.h"

}

#include "cmath"

// Function for MATLAB Function: '<S141>/MATLAB Function'
real_T norm_T8v8L2Tp(const real_T x[169])
{
  real_T y;
  int32_T j;
  boolean_T exitg1;
  y = 0.0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 13)) {
    real_T s;
    s = 0.0;
    for (int32_T i{0}; i < 13; i++) {
      s += std::abs(x[13 * j + i]);
    }

    if (std::isnan(s)) {
      y = (rtNaN);
      exitg1 = true;
    } else {
      if (s > y) {
        y = s;
      }

      j++;
    }
  }

  return y;
}

//
// File trailer for generated code.
//
// [EOF]
//
