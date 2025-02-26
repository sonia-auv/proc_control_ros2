//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: log2_vuRSI7Et.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.184
// Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
// C/C++ source code generated on : Wed Feb 26 16:57:19 2025
//
#include "rtwtypes.h"
#include "log2_vuRSI7Et.h"
#include <cmath>

extern "C"
{

#include "rt_nonfinite.h"

}

#include "cmath"

// Function for MATLAB Function: '<S141>/MATLAB Function'
real_T log2_vuRSI7Et(real_T x)
{
  real_T f;
  int32_T inte;
  if (x == 0.0) {
    f = (rtMinusInf);
  } else if ((!std::isinf(x)) && (!std::isnan(x))) {
    real_T t;
    t = std::frexp(x, &inte);
    if (t == 0.5) {
      f = static_cast<real_T>(inte) - 1.0;
    } else if ((inte == 1) && (t < 0.75)) {
      f = std::log(2.0 * t) / 0.69314718055994529;
    } else {
      f = std::log(t) / 0.69314718055994529 + static_cast<real_T>(inte);
    }
  } else {
    f = x;
  }

  return f;
}

//
// File trailer for generated code.
//
// [EOF]
//
