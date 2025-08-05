//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: xsyheev_DufRbymR.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.205
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Sat Aug  2 17:12:04 2025
//
#include "rtwtypes.h"
#include "xsyheev_DufRbymR.h"
#include <cmath>
#include "xzsyhetrd_Fl8IXuj6.h"
#include <cstring>
#include "xzsteqr_j8DfaNbg.h"
#include <emmintrin.h>

extern "C"
{

#include "rt_nonfinite.h"

}

#include "cmath"
#include "div_nde_s32_floor.h"

// Function for MATLAB Function: '<S141>/MATLAB Function'
void xsyheev_DufRbymR(real_T A[169], int32_T *info, real_T W[13])
{
  __m128d tmp;
  real_T work[13];
  real_T e[12];
  real_T tau[12];
  real_T absx;
  real_T anrm;
  real_T cfrom1;
  real_T cfromc;
  real_T cto1;
  real_T mul;
  int32_T b_ia;
  int32_T coltop;
  int32_T e_i;
  int32_T exitg1;
  int32_T f;
  int32_T iaii;
  int32_T itau;
  int32_T jy;
  int32_T lastc;
  boolean_T exitg2;
  boolean_T guard1;
  boolean_T iscale;
  boolean_T notdone;
  *info = 0;
  anrm = 0.0;
  e_i = 0;
  exitg2 = false;
  while ((!exitg2) && (e_i < 13)) {
    itau = 0;
    do {
      exitg1 = 0;
      if (itau <= e_i) {
        absx = std::abs(A[13 * e_i + itau]);
        if (std::isnan(absx)) {
          anrm = (rtNaN);
          exitg1 = 1;
        } else {
          if (absx > anrm) {
            anrm = absx;
          }

          itau++;
        }
      } else {
        e_i++;
        exitg1 = 2;
      }
    } while (exitg1 == 0);

    if (exitg1 == 1) {
      exitg2 = true;
    }
  }

  if (std::isinf(anrm) || std::isnan(anrm)) {
    for (e_i = 0; e_i < 13; e_i++) {
      W[e_i] = (rtNaN);
    }

    for (iaii = 0; iaii < 169; iaii++) {
      A[iaii] = (rtNaN);
    }
  } else {
    iscale = false;
    guard1 = false;
    if ((anrm > 0.0) && (anrm < 1.0010415475915505E-146)) {
      iscale = true;
      anrm = 1.0010415475915505E-146 / anrm;
      guard1 = true;
    } else if (anrm > 9.9895953610111751E+145) {
      iscale = true;
      anrm = 9.9895953610111751E+145 / anrm;
      guard1 = true;
    }

    if (guard1) {
      absx = anrm;
      cfromc = 1.0;
      notdone = true;
      while (notdone) {
        cfrom1 = cfromc * 2.0041683600089728E-292;
        cto1 = absx / 4.9896007738368E+291;
        if ((std::abs(cfrom1) > absx) && (absx != 0.0)) {
          mul = 2.0041683600089728E-292;
          cfromc = cfrom1;
        } else if (cto1 > std::abs(cfromc)) {
          mul = 4.9896007738368E+291;
          absx = cto1;
        } else {
          mul = absx / cfromc;
          notdone = false;
        }

        for (iaii = 0; iaii <= 166; iaii += 2) {
          tmp = _mm_loadu_pd(&A[iaii]);
          _mm_storeu_pd(&A[iaii], _mm_mul_pd(tmp, _mm_set1_pd(mul)));
        }

        for (iaii = 168; iaii < 169; iaii++) {
          A[iaii] *= mul;
        }
      }
    }

    xzsyhetrd_Fl8IXuj6(A, W, e, tau);
    lastc = 143;
    for (e_i = 11; e_i >= 0; e_i--) {
      A[lastc + 13] = 0.0;
      for (itau = e_i + 3; itau < 14; itau++) {
        iaii = itau + lastc;
        A[iaii + 12] = A[iaii - 1];
      }

      lastc += -13;
    }

    A[0] = 1.0;
    std::memset(&A[1], 0, 12U * sizeof(real_T));
    std::memset(&work[0], 0, 13U * sizeof(real_T));
    for (e_i = 11; e_i >= 0; e_i--) {
      iaii = (e_i * 13 + e_i) + 28;
      if (e_i + 1 < 12) {
        A[iaii - 14] = 1.0;
        if (tau[e_i] != 0.0) {
          itau = 12 - e_i;
          lastc = iaii - e_i;
          while ((itau > 0) && (A[lastc - 3] == 0.0)) {
            itau--;
            lastc--;
          }

          lastc = 10 - e_i;
          exitg2 = false;
          while ((!exitg2) && (lastc + 1 > 0)) {
            coltop = lastc * 13 + iaii;
            b_ia = coltop;
            do {
              exitg1 = 0;
              if (b_ia <= (coltop + itau) - 1) {
                if (A[b_ia - 1] != 0.0) {
                  exitg1 = 1;
                } else {
                  b_ia++;
                }
              } else {
                lastc--;
                exitg1 = 2;
              }
            } while (exitg1 == 0);

            if (exitg1 == 1) {
              exitg2 = true;
            }
          }
        } else {
          itau = 0;
          lastc = -1;
        }

        if (itau > 0) {
          if (lastc + 1 != 0) {
            std::memset(&work[0], 0, static_cast<uint32_T>(lastc + 1) * sizeof
                        (real_T));
            jy = 13 * lastc + iaii;
            for (coltop = iaii; coltop <= jy; coltop += 13) {
              absx = 0.0;
              f = (coltop + itau) - 1;
              for (b_ia = coltop; b_ia <= f; b_ia++) {
                absx += A[((iaii + b_ia) - coltop) - 14] * A[b_ia - 1];
              }

              b_ia = div_nde_s32_floor(coltop - iaii, 13);
              work[b_ia] += absx;
            }
          }

          if (!(-tau[e_i] == 0.0)) {
            jy = iaii;
            for (coltop = 0; coltop <= lastc; coltop++) {
              absx = work[coltop];
              if (absx != 0.0) {
                absx *= -tau[e_i];
                f = (itau + jy) - 1;
                for (b_ia = jy; b_ia <= f; b_ia++) {
                  A[b_ia - 1] += A[((iaii + b_ia) - jy) - 14] * absx;
                }
              }

              jy += 13;
            }
          }
        }

        lastc = (iaii - e_i) - 2;
        coltop = (((((lastc - iaii) + 13) / 2) << 1) + iaii) - 12;
        b_ia = coltop - 2;
        for (itau = iaii - 12; itau <= b_ia; itau += 2) {
          tmp = _mm_loadu_pd(&A[itau - 1]);
          _mm_storeu_pd(&A[itau - 1], _mm_mul_pd(tmp, _mm_set1_pd(-tau[e_i])));
        }

        for (itau = coltop; itau <= lastc; itau++) {
          A[itau - 1] *= -tau[e_i];
        }
      }

      A[iaii - 14] = 1.0 - tau[e_i];
      for (itau = 0; itau < e_i; itau++) {
        A[(iaii - itau) - 15] = 0.0;
      }
    }

    *info = xzsteqr_j8DfaNbg(W, e, A);
    if (*info != 0) {
      for (e_i = 0; e_i < 13; e_i++) {
        W[e_i] = (rtNaN);
      }

      for (iaii = 0; iaii < 169; iaii++) {
        A[iaii] = (rtNaN);
      }
    } else if (iscale) {
      anrm = 1.0 / anrm;
      for (e_i = 0; e_i <= 10; e_i += 2) {
        tmp = _mm_loadu_pd(&W[e_i]);
        _mm_storeu_pd(&W[e_i], _mm_mul_pd(_mm_set1_pd(anrm), tmp));
      }

      for (e_i = 12; e_i < 13; e_i++) {
        W[e_i] *= anrm;
      }
    }
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
