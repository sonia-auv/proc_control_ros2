//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: padeApproximation_Qbpaua2E.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.205
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Sat Aug  2 17:12:04 2025
//
#include "rtwtypes.h"
#include "padeApproximation_Qbpaua2E.h"
#include <cstring>
#include <emmintrin.h>
#include <cmath>

// Function for MATLAB Function: '<S141>/MATLAB Function'
void padeApproximation_Qbpaua2E(const real_T A[169], const real_T A2[169], const
  real_T A4[169], const real_T A6[169], int32_T m, real_T F[169])
{
  __m128d tmp_0;
  real_T A6_0[169];
  real_T V[169];
  real_T d;
  int32_T b_ix;
  int32_T e;
  int32_T e_k;
  int32_T e_k_0;
  int32_T ix;
  int32_T iy;
  int32_T jj;
  int8_T ipiv[13];
  switch (m) {
   case 3:
    std::memcpy(&F[0], &A2[0], 169U * sizeof(real_T));
    e_k_0 = 0;
    for (e_k = 0; e_k < 13; e_k++) {
      F[e_k_0] += 60.0;
      e_k_0 += 14;
    }

    e_k_0 = 0;
    for (e_k = 0; e_k < 13; e_k++) {
      for (jj = 0; jj < 13; jj++) {
        d = 0.0;
        iy = 0;
        for (b_ix = 0; b_ix < 13; b_ix++) {
          d += A[iy + jj] * F[b_ix + e_k_0];
          iy += 13;
        }

        A6_0[jj + e_k_0] = d;
      }

      e_k_0 += 13;
    }

    for (e_k_0 = 0; e_k_0 <= 166; e_k_0 += 2) {
      tmp_0 = _mm_loadu_pd(&A6_0[e_k_0]);
      _mm_storeu_pd(&F[e_k_0], tmp_0);
      _mm_storeu_pd(&V[e_k_0], _mm_mul_pd(_mm_set1_pd(12.0), _mm_loadu_pd
        (&A2[e_k_0])));
    }

    for (e_k_0 = 168; e_k_0 < 169; e_k_0++) {
      F[e_k_0] = A6_0[e_k_0];
      V[e_k_0] = 12.0 * A2[e_k_0];
    }

    d = 120.0;
    break;

   case 5:
    for (e_k_0 = 0; e_k_0 <= 166; e_k_0 += 2) {
      _mm_storeu_pd(&F[e_k_0], _mm_add_pd(_mm_mul_pd(_mm_set1_pd(420.0),
        _mm_loadu_pd(&A2[e_k_0])), _mm_loadu_pd(&A4[e_k_0])));
    }

    for (e_k_0 = 168; e_k_0 < 169; e_k_0++) {
      F[e_k_0] = 420.0 * A2[e_k_0] + A4[e_k_0];
    }

    e_k_0 = 0;
    for (e_k = 0; e_k < 13; e_k++) {
      F[e_k_0] += 15120.0;
      e_k_0 += 14;
    }

    e_k_0 = 0;
    for (e_k = 0; e_k < 13; e_k++) {
      for (jj = 0; jj < 13; jj++) {
        d = 0.0;
        iy = 0;
        for (b_ix = 0; b_ix < 13; b_ix++) {
          d += A[iy + jj] * F[b_ix + e_k_0];
          iy += 13;
        }

        A6_0[jj + e_k_0] = d;
      }

      e_k_0 += 13;
    }

    for (e_k_0 = 0; e_k_0 <= 166; e_k_0 += 2) {
      tmp_0 = _mm_loadu_pd(&A6_0[e_k_0]);
      _mm_storeu_pd(&F[e_k_0], tmp_0);
      _mm_storeu_pd(&V[e_k_0], _mm_add_pd(_mm_mul_pd(_mm_set1_pd(30.0),
        _mm_loadu_pd(&A4[e_k_0])), _mm_mul_pd(_mm_set1_pd(3360.0), _mm_loadu_pd(
        &A2[e_k_0]))));
    }

    for (e_k_0 = 168; e_k_0 < 169; e_k_0++) {
      F[e_k_0] = A6_0[e_k_0];
      V[e_k_0] = 30.0 * A4[e_k_0] + 3360.0 * A2[e_k_0];
    }

    d = 30240.0;
    break;

   case 7:
    for (e_k_0 = 0; e_k_0 <= 166; e_k_0 += 2) {
      _mm_storeu_pd(&F[e_k_0], _mm_add_pd(_mm_add_pd(_mm_mul_pd(_mm_set1_pd
        (1512.0), _mm_loadu_pd(&A4[e_k_0])), _mm_loadu_pd(&A6[e_k_0])),
        _mm_mul_pd(_mm_set1_pd(277200.0), _mm_loadu_pd(&A2[e_k_0]))));
    }

    for (e_k_0 = 168; e_k_0 < 169; e_k_0++) {
      F[e_k_0] = (1512.0 * A4[e_k_0] + A6[e_k_0]) + 277200.0 * A2[e_k_0];
    }

    e_k_0 = 0;
    for (e_k = 0; e_k < 13; e_k++) {
      F[e_k_0] += 8.64864E+6;
      e_k_0 += 14;
    }

    e_k_0 = 0;
    for (e_k = 0; e_k < 13; e_k++) {
      for (jj = 0; jj < 13; jj++) {
        d = 0.0;
        iy = 0;
        for (b_ix = 0; b_ix < 13; b_ix++) {
          d += A[iy + jj] * F[b_ix + e_k_0];
          iy += 13;
        }

        A6_0[jj + e_k_0] = d;
      }

      e_k_0 += 13;
    }

    for (e_k_0 = 0; e_k_0 <= 166; e_k_0 += 2) {
      tmp_0 = _mm_loadu_pd(&A6_0[e_k_0]);
      _mm_storeu_pd(&F[e_k_0], tmp_0);
      _mm_storeu_pd(&V[e_k_0], _mm_add_pd(_mm_add_pd(_mm_mul_pd(_mm_set1_pd(56.0),
        _mm_loadu_pd(&A6[e_k_0])), _mm_mul_pd(_mm_set1_pd(25200.0), _mm_loadu_pd
        (&A4[e_k_0]))), _mm_mul_pd(_mm_set1_pd(1.99584E+6), _mm_loadu_pd
        (&A2[e_k_0]))));
    }

    for (e_k_0 = 168; e_k_0 < 169; e_k_0++) {
      F[e_k_0] = A6_0[e_k_0];
      V[e_k_0] = (56.0 * A6[e_k_0] + 25200.0 * A4[e_k_0]) + 1.99584E+6 *
        A2[e_k_0];
    }

    d = 1.729728E+7;
    break;

   case 9:
    e_k_0 = 0;
    for (e_k = 0; e_k < 13; e_k++) {
      for (jj = 0; jj < 13; jj++) {
        d = 0.0;
        iy = 0;
        for (b_ix = 0; b_ix < 13; b_ix++) {
          d += A6[iy + jj] * A2[b_ix + e_k_0];
          iy += 13;
        }

        V[jj + e_k_0] = d;
      }

      e_k_0 += 13;
    }

    for (e_k_0 = 0; e_k_0 <= 166; e_k_0 += 2) {
      tmp_0 = _mm_loadu_pd(&V[e_k_0]);
      _mm_storeu_pd(&F[e_k_0], _mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_mul_pd
        (_mm_set1_pd(3960.0), _mm_loadu_pd(&A6[e_k_0])), tmp_0), _mm_mul_pd
        (_mm_set1_pd(2.16216E+6), _mm_loadu_pd(&A4[e_k_0]))), _mm_mul_pd
        (_mm_set1_pd(3.027024E+8), _mm_loadu_pd(&A2[e_k_0]))));
    }

    for (e_k_0 = 168; e_k_0 < 169; e_k_0++) {
      F[e_k_0] = ((3960.0 * A6[e_k_0] + V[e_k_0]) + 2.16216E+6 * A4[e_k_0]) +
        3.027024E+8 * A2[e_k_0];
    }

    e_k_0 = 0;
    for (e_k = 0; e_k < 13; e_k++) {
      F[e_k_0] += 8.8216128E+9;
      e_k_0 += 14;
    }

    e_k_0 = 0;
    for (e_k = 0; e_k < 13; e_k++) {
      for (jj = 0; jj < 13; jj++) {
        d = 0.0;
        iy = 0;
        for (b_ix = 0; b_ix < 13; b_ix++) {
          d += A[iy + jj] * F[b_ix + e_k_0];
          iy += 13;
        }

        A6_0[jj + e_k_0] = d;
      }

      e_k_0 += 13;
    }

    for (e_k_0 = 0; e_k_0 <= 166; e_k_0 += 2) {
      tmp_0 = _mm_loadu_pd(&A6_0[e_k_0]);
      _mm_storeu_pd(&F[e_k_0], tmp_0);
      tmp_0 = _mm_loadu_pd(&V[e_k_0]);
      _mm_storeu_pd(&V[e_k_0], _mm_add_pd(_mm_add_pd(_mm_add_pd(_mm_mul_pd
        (_mm_set1_pd(90.0), tmp_0), _mm_mul_pd(_mm_set1_pd(110880.0),
        _mm_loadu_pd(&A6[e_k_0]))), _mm_mul_pd(_mm_set1_pd(3.027024E+7),
        _mm_loadu_pd(&A4[e_k_0]))), _mm_mul_pd(_mm_set1_pd(2.0756736E+9),
        _mm_loadu_pd(&A2[e_k_0]))));
    }

    for (e_k_0 = 168; e_k_0 < 169; e_k_0++) {
      F[e_k_0] = A6_0[e_k_0];
      V[e_k_0] = ((90.0 * V[e_k_0] + 110880.0 * A6[e_k_0]) + 3.027024E+7 *
                  A4[e_k_0]) + 2.0756736E+9 * A2[e_k_0];
    }

    d = 1.76432256E+10;
    break;

   default:
    for (e_k_0 = 0; e_k_0 <= 166; e_k_0 += 2) {
      _mm_storeu_pd(&F[e_k_0], _mm_add_pd(_mm_add_pd(_mm_mul_pd(_mm_set1_pd
        (3.352212864E+10), _mm_loadu_pd(&A6[e_k_0])), _mm_mul_pd(_mm_set1_pd
        (1.05594705216E+13), _mm_loadu_pd(&A4[e_k_0]))), _mm_mul_pd(_mm_set1_pd
        (1.1873537964288E+15), _mm_loadu_pd(&A2[e_k_0]))));
    }

    for (e_k_0 = 168; e_k_0 < 169; e_k_0++) {
      F[e_k_0] = (3.352212864E+10 * A6[e_k_0] + 1.05594705216E+13 * A4[e_k_0]) +
        1.1873537964288E+15 * A2[e_k_0];
    }

    e_k_0 = 0;
    for (e_k = 0; e_k < 13; e_k++) {
      F[e_k_0] += 3.238237626624E+16;
      e_k_0 += 14;
    }

    for (e_k_0 = 0; e_k_0 <= 166; e_k_0 += 2) {
      _mm_storeu_pd(&V[e_k_0], _mm_add_pd(_mm_add_pd(_mm_mul_pd(_mm_set1_pd
        (16380.0), _mm_loadu_pd(&A4[e_k_0])), _mm_loadu_pd(&A6[e_k_0])),
        _mm_mul_pd(_mm_set1_pd(4.08408E+7), _mm_loadu_pd(&A2[e_k_0]))));
    }

    for (e_k_0 = 168; e_k_0 < 169; e_k_0++) {
      V[e_k_0] = (16380.0 * A4[e_k_0] + A6[e_k_0]) + 4.08408E+7 * A2[e_k_0];
    }

    for (e_k_0 = 0; e_k_0 < 13; e_k_0++) {
      e_k = 0;
      for (jj = 0; jj < 13; jj++) {
        d = 0.0;
        iy = 0;
        for (b_ix = 0; b_ix < 13; b_ix++) {
          d += A6[iy + e_k_0] * V[b_ix + e_k];
          iy += 13;
        }

        iy = e_k + e_k_0;
        A6_0[iy] = F[iy] + d;
        e_k += 13;
      }
    }

    e_k_0 = 0;
    for (e_k = 0; e_k < 13; e_k++) {
      for (jj = 0; jj < 13; jj++) {
        d = 0.0;
        iy = 0;
        for (b_ix = 0; b_ix < 13; b_ix++) {
          d += A[iy + jj] * A6_0[b_ix + e_k_0];
          iy += 13;
        }

        F[jj + e_k_0] = d;
      }

      e_k_0 += 13;
    }

    for (e_k_0 = 0; e_k_0 <= 166; e_k_0 += 2) {
      _mm_storeu_pd(&A6_0[e_k_0], _mm_add_pd(_mm_add_pd(_mm_mul_pd(_mm_set1_pd
        (182.0), _mm_loadu_pd(&A6[e_k_0])), _mm_mul_pd(_mm_set1_pd(960960.0),
        _mm_loadu_pd(&A4[e_k_0]))), _mm_mul_pd(_mm_set1_pd(1.32324192E+9),
        _mm_loadu_pd(&A2[e_k_0]))));
    }

    for (e_k_0 = 168; e_k_0 < 169; e_k_0++) {
      A6_0[e_k_0] = (182.0 * A6[e_k_0] + 960960.0 * A4[e_k_0]) + 1.32324192E+9 *
        A2[e_k_0];
    }

    for (e_k_0 = 0; e_k_0 < 13; e_k_0++) {
      e_k = 0;
      for (jj = 0; jj < 13; jj++) {
        d = 0.0;
        iy = 0;
        for (b_ix = 0; b_ix < 13; b_ix++) {
          d += A6[iy + e_k_0] * A6_0[b_ix + e_k];
          iy += 13;
        }

        iy = e_k + e_k_0;
        V[iy] = ((A6[iy] * 6.704425728E+11 + d) + A4[iy] * 1.29060195264E+14) +
          A2[iy] * 7.7717703038976E+15;
        e_k += 13;
      }
    }

    d = 6.476475253248E+16;
    break;
  }

  e_k_0 = 0;
  for (e_k = 0; e_k < 13; e_k++) {
    V[e_k_0] += d;
    e_k_0 += 14;
  }

  for (e_k = 0; e_k <= 166; e_k += 2) {
    __m128d tmp;
    tmp_0 = _mm_loadu_pd(&V[e_k]);
    tmp = _mm_loadu_pd(&F[e_k]);
    _mm_storeu_pd(&V[e_k], _mm_sub_pd(tmp_0, tmp));
    _mm_storeu_pd(&F[e_k], _mm_mul_pd(_mm_set1_pd(2.0), tmp));
  }

  for (e_k = 168; e_k < 169; e_k++) {
    d = F[e_k];
    V[e_k] -= d;
    F[e_k] = 2.0 * d;
  }

  for (e_k_0 = 0; e_k_0 < 13; e_k_0++) {
    ipiv[e_k_0] = static_cast<int8_T>(e_k_0 + 1);
  }

  for (e_k = 0; e_k < 12; e_k++) {
    jj = e_k * 14;
    iy = 14 - e_k;
    b_ix = 0;
    ix = jj;
    d = std::abs(V[jj]);
    for (e_k_0 = 2; e_k_0 < iy; e_k_0++) {
      real_T s;
      ix++;
      s = std::abs(V[ix]);
      if (s > d) {
        b_ix = e_k_0 - 1;
        d = s;
      }
    }

    if (V[jj + b_ix] != 0.0) {
      if (b_ix != 0) {
        iy = e_k + b_ix;
        ipiv[e_k] = static_cast<int8_T>(iy + 1);
        for (ix = 0; ix < 13; ix++) {
          e_k_0 = ix * 13 + e_k;
          d = V[e_k_0];
          V[e_k_0] = V[iy];
          V[iy] = d;
          iy += 13;
        }
      }

      iy = (jj - e_k) + 13;
      e_k_0 = (((((iy - jj) - 1) / 2) << 1) + jj) + 2;
      ix = e_k_0 - 2;
      for (b_ix = jj + 2; b_ix <= ix; b_ix += 2) {
        tmp_0 = _mm_loadu_pd(&V[b_ix - 1]);
        _mm_storeu_pd(&V[b_ix - 1], _mm_div_pd(tmp_0, _mm_set1_pd(V[jj])));
      }

      for (b_ix = e_k_0; b_ix <= iy; b_ix++) {
        V[b_ix - 1] /= V[jj];
      }
    }

    iy = jj + 13;
    b_ix = jj + 15;
    ix = 11 - e_k;
    for (e_k_0 = 0; e_k_0 <= ix; e_k_0++) {
      d = V[iy];
      if (V[iy] != 0.0) {
        e = (b_ix - e_k) + 11;
        for (int32_T ijA{b_ix}; ijA <= e; ijA++) {
          V[ijA - 1] += V[((jj + ijA) - b_ix) + 1] * -d;
        }
      }

      iy += 13;
      b_ix += 13;
    }
  }

  for (e_k = 0; e_k < 12; e_k++) {
    int8_T ipiv_0;
    ipiv_0 = ipiv[e_k];
    if (e_k + 1 != ipiv_0) {
      for (iy = 0; iy < 13; iy++) {
        e_k_0 = 13 * iy + e_k;
        d = F[e_k_0];
        e = (13 * iy + ipiv_0) - 1;
        F[e_k_0] = F[e];
        F[e] = d;
      }
    }
  }

  for (e_k = 0; e_k < 13; e_k++) {
    jj = 13 * e_k;
    for (iy = 0; iy < 13; iy++) {
      b_ix = 13 * iy;
      e_k_0 = iy + jj;
      if (F[e_k_0] != 0.0) {
        for (ix = iy + 2; ix < 14; ix++) {
          e = (ix + jj) - 1;
          F[e] -= V[(ix + b_ix) - 1] * F[e_k_0];
        }
      }
    }
  }

  for (e_k = 0; e_k < 13; e_k++) {
    jj = 13 * e_k;
    for (iy = 12; iy >= 0; iy--) {
      b_ix = 13 * iy;
      e_k_0 = iy + jj;
      d = F[e_k_0];
      if (d != 0.0) {
        F[e_k_0] = d / V[iy + b_ix];
        for (ix = 0; ix < iy; ix++) {
          e = ix + jj;
          F[e] -= V[ix + b_ix] * F[e_k_0];
        }
      }
    }
  }

  e_k_0 = 0;
  for (e_k = 0; e_k < 13; e_k++) {
    F[e_k_0]++;
    e_k_0 += 14;
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
