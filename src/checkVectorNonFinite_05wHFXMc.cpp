//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: checkVectorNonFinite_05wHFXMc.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.184
// Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
// C/C++ source code generated on : Wed Feb 26 16:57:19 2025
//
#include "rtwtypes.h"
#include "checkVectorNonFinite_05wHFXMc.h"
#include <cmath>
#include "cmath"

// Function for MATLAB Function: '<S217>/NLMPC'
int32_T checkVectorNonFinite_05wHFXMc(const real_T vec[130])
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
