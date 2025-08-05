//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: xzsyhetrd_Fl8IXuj6.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.205
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Sat Aug  2 17:12:04 2025
//
#include "rtwtypes.h"
#include "xzsyhetrd_Fl8IXuj6.h"
#include "xnrm2_gjjcOr5M.h"
#include "rt_hypotd_snf.h"
#include <cmath>
#include <emmintrin.h>

// Function for MATLAB Function: '<S141>/MATLAB Function'
void xzsyhetrd_Fl8IXuj6(real_T A[169], real_T D[13], real_T E[12], real_T tau[12])
{
  __m128d tmp;
  real_T tmp_0[2];
  real_T taui;
  real_T temp2;
  real_T tmp_1;
  real_T xnorm;
  int32_T b_ix;
  int32_T b_iy;
  int32_T i;
  int32_T iv;
  int32_T knt;
  int32_T scalarLB;
  int32_T tau_tmp;
  int32_T temp2_tmp_tmp_tmp;
  int32_T vectorUB;
  for (i = 0; i < 12; i++) {
    temp2_tmp_tmp_tmp = 13 * i + i;
    temp2 = A[temp2_tmp_tmp_tmp + 1];
    if (i + 3 <= 13) {
      b_ix = i + 3;
    } else {
      b_ix = 13;
    }

    iv = i * 13 + b_ix;
    taui = 0.0;
    xnorm = xnrm2_gjjcOr5M(11 - i, A, iv);
    if (xnorm != 0.0) {
      xnorm = rt_hypotd_snf(temp2, xnorm);
      if (temp2 >= 0.0) {
        xnorm = -xnorm;
      }

      if (std::abs(xnorm) < 1.0020841800044864E-292) {
        knt = 0;
        scalarLB = (iv - i) + 10;
        do {
          knt++;
          vectorUB = ((((scalarLB - iv) + 1) / 2) << 1) + iv;
          b_iy = vectorUB - 2;
          for (b_ix = iv; b_ix <= b_iy; b_ix += 2) {
            tmp = _mm_loadu_pd(&A[b_ix - 1]);
            _mm_storeu_pd(&A[b_ix - 1], _mm_mul_pd(tmp, _mm_set1_pd
              (9.9792015476736E+291)));
          }

          for (b_ix = vectorUB; b_ix <= scalarLB; b_ix++) {
            A[b_ix - 1] *= 9.9792015476736E+291;
          }

          xnorm *= 9.9792015476736E+291;
          temp2 *= 9.9792015476736E+291;
        } while ((std::abs(xnorm) < 1.0020841800044864E-292) && (knt < 20));

        xnorm = rt_hypotd_snf(temp2, xnrm2_gjjcOr5M(11 - i, A, iv));
        if (temp2 >= 0.0) {
          xnorm = -xnorm;
        }

        taui = (xnorm - temp2) / xnorm;
        temp2 = 1.0 / (temp2 - xnorm);
        for (b_ix = iv; b_ix <= b_iy; b_ix += 2) {
          tmp = _mm_loadu_pd(&A[b_ix - 1]);
          _mm_storeu_pd(&A[b_ix - 1], _mm_mul_pd(tmp, _mm_set1_pd(temp2)));
        }

        for (b_ix = vectorUB; b_ix <= scalarLB; b_ix++) {
          A[b_ix - 1] *= temp2;
        }

        for (iv = 0; iv < knt; iv++) {
          xnorm *= 1.0020841800044864E-292;
        }

        temp2 = xnorm;
      } else {
        taui = (xnorm - temp2) / xnorm;
        temp2 = 1.0 / (temp2 - xnorm);
        b_ix = (iv - i) + 10;
        scalarLB = ((((b_ix - iv) + 1) / 2) << 1) + iv;
        vectorUB = scalarLB - 2;
        for (knt = iv; knt <= vectorUB; knt += 2) {
          tmp = _mm_loadu_pd(&A[knt - 1]);
          _mm_storeu_pd(&A[knt - 1], _mm_mul_pd(tmp, _mm_set1_pd(temp2)));
        }

        for (knt = scalarLB; knt <= b_ix; knt++) {
          A[knt - 1] *= temp2;
        }

        temp2 = xnorm;
      }
    }

    E[i] = temp2;
    if (taui != 0.0) {
      A[temp2_tmp_tmp_tmp + 1] = 1.0;
      for (iv = i + 1; iv < 13; iv++) {
        tau[iv - 1] = 0.0;
      }

      vectorUB = 11 - i;
      scalarLB = 13 - i;
      for (iv = 0; iv <= vectorUB; iv++) {
        b_iy = i + iv;
        xnorm = A[(13 * i + b_iy) + 1] * taui;
        temp2 = 0.0;
        tau_tmp = (b_iy + 1) * 13 + i;
        tau[b_iy] += A[(tau_tmp + iv) + 1] * xnorm;
        for (knt = iv + 2; knt < scalarLB; knt++) {
          b_ix = i + knt;
          _mm_storeu_pd(&tmp_0[0], _mm_add_pd(_mm_mul_pd(_mm_set1_pd(A[tau_tmp +
            knt]), _mm_set_pd(A[b_ix + 13 * i], xnorm)), _mm_set_pd(temp2,
            tau[b_ix - 1])));
          tau[b_ix - 1] = tmp_0[0];
          temp2 = tmp_0[1];
        }

        tau[b_iy] += taui * temp2;
      }

      iv = temp2_tmp_tmp_tmp + 1;
      b_ix = i;
      b_iy = temp2_tmp_tmp_tmp + 1;
      xnorm = 0.0;
      for (knt = 0; knt <= vectorUB; knt++) {
        xnorm += tau[b_ix] * A[b_iy];
        b_ix++;
        b_iy++;
      }

      xnorm *= -0.5 * taui;
      if (!(xnorm == 0.0)) {
        b_ix = i;
        b_iy = 12 - i;
        for (knt = 0; knt < b_iy; knt++) {
          tau[b_ix] += xnorm * A[iv];
          iv++;
          b_ix++;
        }
      }

      for (iv = 0; iv <= vectorUB; iv++) {
        b_iy = i + iv;
        xnorm = A[(13 * i + b_iy) + 1];
        temp2 = tau[b_iy];
        tmp_1 = temp2 * xnorm;
        b_ix = (b_iy + 1) * 13;
        tau_tmp = b_ix + i;
        A[(b_iy + b_ix) + 1] = (A[(tau_tmp + iv) + 1] - tmp_1) - tmp_1;
        for (knt = iv + 2; knt < scalarLB; knt++) {
          b_iy = i + knt;
          A[b_iy + b_ix] = (A[tau_tmp + knt] - tau[b_iy - 1] * xnorm) - A[13 * i
            + b_iy] * temp2;
        }
      }
    }

    A[temp2_tmp_tmp_tmp + 1] = E[i];
    D[i] = A[temp2_tmp_tmp_tmp];
    tau[i] = taui;
  }

  D[12] = A[168];
}

//
// File trailer for generated code.
//
// [EOF]
//
