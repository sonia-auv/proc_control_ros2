//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: checkVectorNonFinite_2YVslTT4.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.205
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Sat Aug  2 17:12:04 2025
//
#include "rtwtypes.h"
#include "checkVectorNonFinite_2YVslTT4.h"
#include <cmath>
#include "cmath"

// Function for MATLAB Function: '<S217>/NLMPC'
int32_T checkVectorNonFinite_2YVslTT4(const real_T vec[130])
{
  int32_T idx_current;
  int32_T status;
  boolean_T allFinite;
  status = 1;
  allFinite = true;
  idx_current = -1;
  while (allFinite && (idx_current + 2 <= 130)) {
    real_T allFinite_tmp;
    allFinite_tmp = vec[idx_current + 1];
    allFinite = ((!std::isinf(allFinite_tmp)) && (!std::isnan(allFinite_tmp)));
    idx_current++;
  }

  if (!allFinite) {
    if (std::isnan(vec[idx_current])) {
      status = -3;
    } else if (vec[idx_current] < 0.0) {
      status = -1;
    } else {
      status = -2;
    }
  }

  return status;
}

//
// File trailer for generated code.
//
// [EOF]
//
