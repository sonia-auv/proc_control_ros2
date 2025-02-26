//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: xzlartg_keGa8Um8.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.184
// Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
// C/C++ source code generated on : Wed Feb 26 16:57:19 2025
//
#include "rtwtypes.h"
#include "xzlartg_keGa8Um8.h"
#include <cmath>

// Function for MATLAB Function: '<S141>/MATLAB Function'
void xzlartg_keGa8Um8(real_T f, real_T g, real_T *cs, real_T *sn, real_T *r)
{
  real_T f1;
  f1 = std::abs(f);
  *r = std::abs(g);
  if (g == 0.0) {
    *cs = 1.0;
    *sn = 0.0;
    *r = f;
  } else if (f == 0.0) {
    *cs = 0.0;
    if (g >= 0.0) {
      *sn = 1.0;
    } else {
      *sn = -1.0;
    }
  } else if ((f1 > 1.4916681462400413E-154) && (f1 < 4.7403759540545887E+153) &&
             (*r > 1.4916681462400413E-154) && (*r < 4.7403759540545887E+153)) {
    *r = std::sqrt(f * f + g * g);
    *cs = f1 / *r;
    if (!(f >= 0.0)) {
      *r = -*r;
    }

    *sn = g / *r;
  } else {
    real_T fs;
    real_T gs;
    f1 = std::fmin(4.49423283715579E+307, std::fmax(2.2250738585072014E-308, std::
      fmax(f1, *r)));
    fs = f / f1;
    gs = g / f1;
    *r = std::sqrt(fs * fs + gs * gs);
    *cs = std::abs(fs) / *r;
    if (!(f >= 0.0)) {
      *r = -*r;
    }

    *sn = gs / *r;
    *r *= f1;
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
