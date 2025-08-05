//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: xpotrf_GAY9CXNB.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.205
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Sat Aug  2 17:12:04 2025
//
#include "rtwtypes.h"
#include "xpotrf_GAY9CXNB.h"
#include <cmath>
#include <emmintrin.h>
#include "div_nde_s32_floor.h"

// Function for MATLAB Function: '<S212>/FixedHorizonOptimizer'
int32_T xpotrf_GAY9CXNB(real_T b_A[81])
{
  int32_T info;
  int32_T j;
  boolean_T exitg1;
  info = 0;
  j = 0;
  exitg1 = false;
  while ((!exitg1) && (j < 9)) {
    real_T c;
    real_T ssq;
    int32_T idxAjj;
    idxAjj = j * 9 + j;
    ssq = 0.0;
    if (j >= 1) {
      for (int32_T b_k{0}; b_k < j; b_k++) {
        c = b_A[b_k * 9 + j];
        ssq += c * c;
      }
    }

    ssq = b_A[idxAjj] - ssq;
    if (ssq > 0.0) {
      ssq = std::sqrt(ssq);
      b_A[idxAjj] = ssq;
      if (j + 1 < 9) {
        int32_T b_iy;
        int32_T d;
        int32_T jm1;
        if (j != 0) {
          b_iy = ((j - 1) * 9 + j) + 2;
          for (int32_T b_k{j + 2}; b_k <= b_iy; b_k += 9) {
            jm1 = b_k - j;
            c = -b_A[div_nde_s32_floor(jm1 - 2, 9) * 9 + j];
            d = jm1 + 7;
            for (jm1 = b_k; jm1 <= d; jm1++) {
              int32_T tmp_0;
              tmp_0 = ((idxAjj + jm1) - b_k) + 1;
              b_A[tmp_0] += b_A[jm1 - 1] * c;
            }
          }
        }

        ssq = 1.0 / ssq;
        jm1 = (idxAjj - j) + 9;
        b_iy = (((((jm1 - idxAjj) - 1) / 2) << 1) + idxAjj) + 2;
        d = b_iy - 2;
        for (int32_T b_k{idxAjj + 2}; b_k <= d; b_k += 2) {
          __m128d tmp;
          tmp = _mm_loadu_pd(&b_A[b_k - 1]);
          _mm_storeu_pd(&b_A[b_k - 1], _mm_mul_pd(tmp, _mm_set1_pd(ssq)));
        }

        for (int32_T b_k{b_iy}; b_k <= jm1; b_k++) {
          b_A[b_k - 1] *= ssq;
        }
      }

      j++;
    } else {
      b_A[idxAjj] = ssq;
      info = j + 1;
      exitg1 = true;
    }
  }

  return info;
}

//
// File trailer for generated code.
//
// [EOF]
//
