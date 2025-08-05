//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: xzlascl_01CBiMMh.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.205
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Sat Aug  2 17:12:04 2025
//
#include "rtwtypes.h"
#include "xzlascl_01CBiMMh.h"
#include <cmath>
#include <emmintrin.h>

// Function for MATLAB Function: '<S141>/MATLAB Function'
void xzlascl_01CBiMMh(real_T cfrom, real_T cto, int32_T m, real_T A[12], int32_T
                      iA0)
{
  real_T cfromc;
  real_T ctoc;
  boolean_T notdone;
  cfromc = cfrom;
  ctoc = cto;
  notdone = true;
  while (notdone) {
    real_T cfrom1;
    real_T cto1;
    real_T mul;
    int32_T scalarLB;
    int32_T tmp_0;
    int32_T vectorUB;
    cfrom1 = cfromc * 2.0041683600089728E-292;
    cto1 = ctoc / 4.9896007738368E+291;
    if ((std::abs(cfrom1) > std::abs(ctoc)) && (ctoc != 0.0)) {
      mul = 2.0041683600089728E-292;
      cfromc = cfrom1;
    } else if (std::abs(cto1) > std::abs(cfromc)) {
      mul = 4.9896007738368E+291;
      ctoc = cto1;
    } else {
      mul = ctoc / cfromc;
      notdone = false;
    }

    scalarLB = (m / 2) << 1;
    vectorUB = scalarLB - 2;
    for (int32_T b_i{0}; b_i <= vectorUB; b_i += 2) {
      __m128d tmp;
      tmp_0 = (b_i + iA0) - 1;
      tmp = _mm_loadu_pd(&A[tmp_0]);
      _mm_storeu_pd(&A[tmp_0], _mm_mul_pd(tmp, _mm_set1_pd(mul)));
    }

    for (int32_T b_i{scalarLB}; b_i < m; b_i++) {
      tmp_0 = (b_i + iA0) - 1;
      A[tmp_0] *= mul;
    }
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
