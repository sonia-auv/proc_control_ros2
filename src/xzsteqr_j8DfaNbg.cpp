//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: xzsteqr_j8DfaNbg.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.205
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Sat Aug  2 17:12:04 2025
//
#include "rtwtypes.h"
#include "xzsteqr_j8DfaNbg.h"
#include <cstring>
#include <cmath>
#include "xzlascl_Nlhd5GaE.h"
#include "xzlascl_01CBiMMh.h"
#include "xdlaev2_vjOFz6O2.h"
#include "rotateRight_ppseAKEY.h"
#include "rt_hypotd_snf.h"
#include "rotateRight_lMfCUnsH.h"
#include "xzlartg_5opjPB6F.h"

extern "C"
{

#include "rt_nonfinite.h"

}

#include "cmath"

// Function for MATLAB Function: '<S141>/MATLAB Function'
int32_T xzsteqr_j8DfaNbg(real_T d[13], real_T e[12], real_T z[169])
{
  real_T work[24];
  real_T b;
  real_T b_anorm;
  real_T b_s;
  real_T c;
  real_T e_0;
  real_T p;
  real_T r;
  real_T s;
  real_T tst;
  int32_T b_anorm_tmp;
  int32_T exitg1;
  int32_T exitg3;
  int32_T exitg4;
  int32_T i;
  int32_T info;
  int32_T iscale;
  int32_T l;
  int32_T l1;
  int32_T lend;
  int32_T lendsv;
  int32_T lsv;
  int32_T m;
  int32_T n_tmp;
  boolean_T exitg2;
  info = 0;
  std::memset(&work[0], 0, 24U * sizeof(real_T));
  i = 0;
  l1 = 1;
  do {
    exitg1 = 0;
    if (l1 > 13) {
      for (i = 0; i < 12; i++) {
        l = i;
        p = d[i];
        for (l1 = i + 2; l1 < 14; l1++) {
          tst = d[l1 - 1];
          if (tst < p) {
            l = l1 - 1;
            p = tst;
          }
        }

        if (l != i) {
          d[l] = d[i];
          d[i] = p;
          m = i * 13;
          l *= 13;
          for (l1 = 0; l1 < 13; l1++) {
            lsv = m + l1;
            tst = z[lsv];
            lend = l + l1;
            z[lsv] = z[lend];
            z[lend] = tst;
          }
        }
      }

      exitg1 = 1;
    } else {
      if (l1 > 1) {
        e[l1 - 2] = 0.0;
      }

      m = l1;
      exitg2 = false;
      while ((!exitg2) && (m < 13)) {
        tst = std::abs(e[m - 1]);
        if (tst == 0.0) {
          exitg2 = true;
        } else if (tst <= std::sqrt(std::abs(d[m - 1])) * std::sqrt(std::abs(d[m]))
                   * 2.2204460492503131E-16) {
          e[m - 1] = 0.0;
          exitg2 = true;
        } else {
          m++;
        }
      }

      l = l1 - 1;
      lsv = l1;
      lend = m;
      lendsv = m;
      l1 = m + 1;
      if (l + 1 == m) {
      } else {
        n_tmp = m - l;
        if (n_tmp <= 0) {
          tst = 0.0;
        } else {
          tst = std::abs(d[(l + n_tmp) - 1]);
          iscale = 0;
          exitg2 = false;
          while ((!exitg2) && (iscale <= n_tmp - 2)) {
            b_anorm_tmp = l + iscale;
            b_anorm = std::abs(d[b_anorm_tmp]);
            if (std::isnan(b_anorm)) {
              tst = (rtNaN);
              exitg2 = true;
            } else {
              if (b_anorm > tst) {
                tst = b_anorm;
              }

              b_anorm = std::abs(e[b_anorm_tmp]);
              if (std::isnan(b_anorm)) {
                tst = (rtNaN);
                exitg2 = true;
              } else {
                if (b_anorm > tst) {
                  tst = b_anorm;
                }

                iscale++;
              }
            }
          }
        }

        iscale = 0;
        if (tst == 0.0) {
        } else if (std::isinf(tst) || std::isnan(tst)) {
          for (i = 0; i < 13; i++) {
            d[i] = (rtNaN);
          }

          for (lend = 0; lend < 169; lend++) {
            z[lend] = (rtNaN);
          }

          exitg1 = 1;
        } else {
          if (tst > 2.2346346549904327E+153) {
            iscale = 1;
            xzlascl_Nlhd5GaE(tst, 2.2346346549904327E+153, n_tmp, d, l + 1);
            xzlascl_01CBiMMh(tst, 2.2346346549904327E+153, n_tmp - 1, e, l + 1);
          } else if (tst < 3.02546243347603E-123) {
            iscale = 2;
            xzlascl_Nlhd5GaE(tst, 3.02546243347603E-123, n_tmp, d, l + 1);
            xzlascl_01CBiMMh(tst, 3.02546243347603E-123, n_tmp - 1, e, l + 1);
          }

          if (std::abs(d[m - 1]) < std::abs(d[l])) {
            lend = lsv;
            l = m - 1;
          }

          if (lend > l + 1) {
            do {
              exitg4 = 0;
              if (l + 1 != lend) {
                m = l;
                exitg2 = false;
                while ((!exitg2) && (m + 1 < lend)) {
                  b_anorm = std::abs(e[m]);
                  if (b_anorm * b_anorm <= 4.9303806576313238E-32 * std::abs(d[m])
                      * std::abs(d[m + 1]) + 2.2250738585072014E-308) {
                    exitg2 = true;
                  } else {
                    m++;
                  }
                }
              } else {
                m = lend - 1;
              }

              if (m + 1 < lend) {
                e[m] = 0.0;
              }

              if (m + 1 == l + 1) {
                l++;
                if (l + 1 > lend) {
                  exitg4 = 1;
                }
              } else if (m + 1 == l + 2) {
                xdlaev2_vjOFz6O2(d[l], e[l], d[l + 1], &d[l], &b_anorm, &work[l],
                                 &s);
                d[l + 1] = b_anorm;
                work[l + 12] = s;
                rotateRight_lMfCUnsH(2, z, l * 13 + 1, work, l + 1, l + 13);
                e[l] = 0.0;
                l += 2;
                if (l + 1 > lend) {
                  exitg4 = 1;
                }
              } else if (i == 390) {
                exitg4 = 1;
              } else {
                i++;
                b_anorm = (d[l + 1] - d[l]) / (2.0 * e[l]);
                s = rt_hypotd_snf(b_anorm, 1.0);
                if (!(b_anorm >= 0.0)) {
                  s = -s;
                }

                b_anorm = e[l] / (b_anorm + s) + (d[m] - d[l]);
                s = 1.0;
                c = 1.0;
                p = 0.0;
                for (n_tmp = m; n_tmp >= l + 1; n_tmp--) {
                  e_0 = e[n_tmp - 1];
                  b = c * e_0;
                  xzlartg_5opjPB6F(b_anorm, s * e_0, &c, &b_s, &r);
                  s = b_s;
                  if (n_tmp != m) {
                    e[n_tmp] = r;
                  }

                  b_anorm = d[n_tmp] - p;
                  r = (d[n_tmp - 1] - b_anorm) * b_s + 2.0 * c * b;
                  p = b_s * r;
                  d[n_tmp] = b_anorm + p;
                  b_anorm = c * r - b;
                  work[n_tmp - 1] = c;
                  work[n_tmp + 11] = -b_s;
                }

                rotateRight_lMfCUnsH((m - l) + 1, z, l * 13 + 1, work, l + 1, l
                                     + 13);
                d[l] -= p;
                e[l] = b_anorm;
              }
            } while (exitg4 == 0);
          } else {
            do {
              exitg3 = 0;
              if (l + 1 != lend) {
                m = l + 1;
                exitg2 = false;
                while ((!exitg2) && (m > lend)) {
                  b_anorm = std::abs(e[m - 2]);
                  if (b_anorm * b_anorm <= std::abs(d[m - 1]) *
                      4.9303806576313238E-32 * std::abs(d[m - 2]) +
                      2.2250738585072014E-308) {
                    exitg2 = true;
                  } else {
                    m--;
                  }
                }
              } else {
                m = lend;
              }

              if (m > lend) {
                e[m - 2] = 0.0;
              }

              if (l + 1 == m) {
                l--;
                if (l + 1 < lend) {
                  exitg3 = 1;
                }
              } else if (m == l) {
                xdlaev2_vjOFz6O2(d[l - 1], e[l - 1], d[l], &d[l - 1], &b_anorm,
                                 &work[m - 1], &s);
                d[l] = b_anorm;
                work[m + 11] = s;
                rotateRight_ppseAKEY(2, z, (l - 1) * 13 + 1, work, m, m + 12);
                e[l - 1] = 0.0;
                l -= 2;
                if (l + 1 < lend) {
                  exitg3 = 1;
                }
              } else if (i == 390) {
                exitg3 = 1;
              } else {
                i++;
                p = e[l - 1];
                b_anorm = (d[l - 1] - d[l]) / (p * 2.0);
                s = rt_hypotd_snf(b_anorm, 1.0);
                if (!(b_anorm >= 0.0)) {
                  s = -s;
                }

                b_anorm = (d[m - 1] - d[l]) + p / (b_anorm + s);
                s = 1.0;
                c = 1.0;
                p = 0.0;
                for (n_tmp = m; n_tmp <= l; n_tmp++) {
                  e_0 = e[n_tmp - 1];
                  b = c * e_0;
                  xzlartg_5opjPB6F(b_anorm, s * e_0, &c, &b_s, &r);
                  s = b_s;
                  if (n_tmp != m) {
                    e[n_tmp - 2] = r;
                  }

                  b_anorm = d[n_tmp - 1] - p;
                  r = (d[n_tmp] - b_anorm) * b_s + 2.0 * c * b;
                  p = b_s * r;
                  d[n_tmp - 1] = b_anorm + p;
                  b_anorm = c * r - b;
                  work[n_tmp - 1] = c;
                  work[n_tmp + 11] = b_s;
                }

                rotateRight_ppseAKEY((l - m) + 2, z, (m - 1) * 13 + 1, work, m,
                                     m + 12);
                d[l] -= p;
                e[l - 1] = b_anorm;
              }
            } while (exitg3 == 0);
          }

          switch (iscale) {
           case 1:
            lend = lendsv - lsv;
            xzlascl_Nlhd5GaE(2.2346346549904327E+153, tst, lend + 1, d, lsv);
            xzlascl_01CBiMMh(2.2346346549904327E+153, tst, lend, e, lsv);
            break;

           case 2:
            lend = lendsv - lsv;
            xzlascl_Nlhd5GaE(3.02546243347603E-123, tst, lend + 1, d, lsv);
            xzlascl_01CBiMMh(3.02546243347603E-123, tst, lend, e, lsv);
            break;
          }

          if (i >= 390) {
            for (i = 0; i < 12; i++) {
              if (e[i] != 0.0) {
                info++;
              }
            }

            exitg1 = 1;
          }
        }
      }
    }
  } while (exitg1 == 0);

  return info;
}

//
// File trailer for generated code.
//
// [EOF]
//
