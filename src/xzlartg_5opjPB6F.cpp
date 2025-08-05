//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: xzlartg_5opjPB6F.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.205
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Sat Aug  2 17:12:04 2025
//
#include "rtwtypes.h"
#include "xzlartg_5opjPB6F.h"
#include <cmath>

// Function for MATLAB Function: '<S141>/MATLAB Function'
void xzlartg_5opjPB6F(real_T f, real_T g, real_T *cs, real_T *sn, real_T *r)
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
