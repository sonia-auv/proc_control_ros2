//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: xgerc_vcdhhgKg.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.205
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Sat Aug  2 17:12:04 2025
//
#include "rtwtypes.h"
#include "xgerc_vcdhhgKg.h"

// Function for MATLAB Function: '<S212>/FixedHorizonOptimizer'
void xgerc_vcdhhgKg(int32_T b_m, int32_T n, real_T alpha1, int32_T ix0, const
                    real_T y[9], real_T b_A[81], int32_T ia0)
{
  if (!(alpha1 == 0.0)) {
    int32_T jA;
    jA = ia0;
    for (int32_T j{0}; j < n; j++) {
      real_T temp;
      temp = y[j];
      if (temp != 0.0) {
        int32_T b;
        temp *= alpha1;
        b = (b_m + jA) - 1;
        for (int32_T ijA{jA}; ijA <= b; ijA++) {
          b_A[ijA - 1] += b_A[((ix0 + ijA) - jA) - 1] * temp;
        }
      }

      jA += 9;
    }
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
