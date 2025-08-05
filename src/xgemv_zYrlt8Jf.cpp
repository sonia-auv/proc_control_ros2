//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: xgemv_zYrlt8Jf.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.205
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Sat Aug  2 17:12:04 2025
//
#include "rtwtypes.h"
#include "xgemv_zYrlt8Jf.h"
#include <cstring>
#include "div_nde_s32_floor.h"

// Function for MATLAB Function: '<S212>/FixedHorizonOptimizer'
void xgemv_zYrlt8Jf(int32_T b_m, int32_T n, const real_T b_A[81], int32_T ia0,
                    const real_T x[81], int32_T ix0, real_T y[9])
{
  if ((b_m != 0) && (n != 0)) {
    int32_T b;
    if (n - 1 >= 0) {
      std::memset(&y[0], 0, static_cast<uint32_T>(n) * sizeof(real_T));
    }

    b = (n - 1) * 9 + ia0;
    for (int32_T b_iy{ia0}; b_iy <= b; b_iy += 9) {
      real_T c;
      int32_T d;
      int32_T ia;
      c = 0.0;
      d = (b_iy + b_m) - 1;
      for (ia = b_iy; ia <= d; ia++) {
        c += x[((ix0 + ia) - b_iy) - 1] * b_A[ia - 1];
      }

      ia = div_nde_s32_floor(b_iy - ia0, 9);
      y[ia] += c;
    }
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
