//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: mldivide_Bh63yZKV.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.205
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Sat Aug  2 17:12:04 2025
//
#include "rtwtypes.h"
#include "mldivide_Bh63yZKV.h"
#include <cstring>
#include <cmath>
#include <emmintrin.h>

// Function for MATLAB Function: '<S141>/MATLAB Function'
void mldivide_Bh63yZKV(const real_T A[36], real_T B[36])
{
  real_T b_A[36];
  real_T smax;
  int32_T b_ix;
  int32_T c_k;
  int32_T ijA;
  int32_T ix;
  int32_T iy;
  int32_T jj;
  int8_T ipiv[6];
  std::memcpy(&b_A[0], &A[0], 36U * sizeof(real_T));
  for (c_k = 0; c_k < 6; c_k++) {
    ipiv[c_k] = static_cast<int8_T>(c_k + 1);
  }

  for (int32_T b_j{0}; b_j < 5; b_j++) {
    jj = b_j * 7;
    iy = 7 - b_j;
    b_ix = 0;
    ix = jj;
    smax = std::abs(b_A[jj]);
    for (c_k = 2; c_k < iy; c_k++) {
      real_T s;
      ix++;
      s = std::abs(b_A[ix]);
      if (s > smax) {
        b_ix = c_k - 1;
        smax = s;
      }
    }

    if (b_A[jj + b_ix] != 0.0) {
      if (b_ix != 0) {
        iy = b_j + b_ix;
        ipiv[b_j] = static_cast<int8_T>(iy + 1);
        for (ix = 0; ix < 6; ix++) {
          b_ix = ix * 6 + b_j;
          smax = b_A[b_ix];
          b_A[b_ix] = b_A[iy];
          b_A[iy] = smax;
          iy += 6;
        }
      }

      iy = (jj - b_j) + 6;
      ix = (((((iy - jj) - 1) / 2) << 1) + jj) + 2;
      c_k = ix - 2;
      for (b_ix = jj + 2; b_ix <= c_k; b_ix += 2) {
        __m128d tmp;
        tmp = _mm_loadu_pd(&b_A[b_ix - 1]);
        _mm_storeu_pd(&b_A[b_ix - 1], _mm_div_pd(tmp, _mm_set1_pd(b_A[jj])));
      }

      for (b_ix = ix; b_ix <= iy; b_ix++) {
        b_A[b_ix - 1] /= b_A[jj];
      }
    }

    iy = jj + 6;
    b_ix = jj + 8;
    ix = 4 - b_j;
    for (c_k = 0; c_k <= ix; c_k++) {
      smax = b_A[iy];
      if (b_A[iy] != 0.0) {
        int32_T d;
        d = (b_ix - b_j) + 4;
        for (ijA = b_ix; ijA <= d; ijA++) {
          b_A[ijA - 1] += b_A[((jj + ijA) - b_ix) + 1] * -smax;
        }
      }

      iy += 6;
      b_ix += 6;
    }
  }

  for (int32_T b_j{0}; b_j < 5; b_j++) {
    int8_T ipiv_0;
    ipiv_0 = ipiv[b_j];
    if (b_j + 1 != ipiv_0) {
      for (iy = 0; iy < 6; iy++) {
        b_ix = 6 * iy + b_j;
        smax = B[b_ix];
        c_k = (6 * iy + ipiv_0) - 1;
        B[b_ix] = B[c_k];
        B[c_k] = smax;
      }
    }
  }

  for (int32_T b_j{0}; b_j < 6; b_j++) {
    jj = 6 * b_j;
    for (iy = 0; iy < 6; iy++) {
      b_ix = 6 * iy;
      c_k = iy + jj;
      if (B[c_k] != 0.0) {
        for (ix = iy + 2; ix < 7; ix++) {
          ijA = (ix + jj) - 1;
          B[ijA] -= b_A[(ix + b_ix) - 1] * B[c_k];
        }
      }
    }
  }

  for (int32_T b_j{0}; b_j < 6; b_j++) {
    jj = 6 * b_j;
    for (iy = 5; iy >= 0; iy--) {
      b_ix = 6 * iy;
      c_k = iy + jj;
      smax = B[c_k];
      if (smax != 0.0) {
        B[c_k] = smax / b_A[iy + b_ix];
        for (ix = 0; ix < iy; ix++) {
          ijA = ix + jj;
          B[ijA] -= b_A[ix + b_ix] * B[c_k];
        }
      }
    }
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
