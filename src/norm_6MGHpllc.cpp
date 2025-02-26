//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: norm_6MGHpllc.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.184
// Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
// C/C++ source code generated on : Wed Feb 26 16:57:19 2025
//
#include "rtwtypes.h"
#include "norm_6MGHpllc.h"
#include <cmath>

// Function for MATLAB Function: '<S212>/FixedHorizonOptimizer'
real_T norm_6MGHpllc(const real_T x[9])
{
  real_T scale;
  real_T y;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (int32_T k{0}; k < 9; k++) {
    real_T absxk;
    absxk = std::abs(x[k]);
    if (absxk > scale) {
      real_T t;
      t = scale / absxk;
      y = y * t * t + 1.0;
      scale = absxk;
    } else {
      real_T t;
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * std::sqrt(y);
}

//
// File trailer for generated code.
//
// [EOF]
//
