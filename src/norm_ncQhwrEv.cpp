//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: norm_ncQhwrEv.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 4.0
// Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
// C/C++ source code generated on : Sat Jun 27 16:04:42 2026
//
#include "rtwtypes.h"
#include "norm_ncQhwrEv.h"
#include <cmath>

extern "C"
{

#include "rt_nonfinite.h"

}

#include "cmath"

// Function for MATLAB Function: '<S212>/FixedHorizonOptimizer'
real_T norm_ncQhwrEv(const real_T x[9])
{
  real_T scale;
  real_T y;
  int32_T k;
  y = 0.0;
  scale = 3.3121686421112381E-170;
  for (k = 0; k < 9; k++) {
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

  y = scale * std::sqrt(y);
  if (std::isnan(y)) {
    k = 0;
    int32_T exitg1;
    do {
      exitg1 = 0;
      if (k < 9) {
        if (std::isnan(x[k])) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        y = (rtInf);
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return y;
}

//
// File trailer for generated code.
//
// [EOF]
//
