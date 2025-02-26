//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: updateWeights_u0LrMd4J.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.184
// Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
// C/C++ source code generated on : Wed Feb 26 16:57:19 2025
//
#include "rtwtypes.h"
#include "updateWeights_u0LrMd4J.h"

// Function for MATLAB Function: '<S176>/VariableHorizonOptimizer'
void updateWeights_u0LrMd4J(const real_T b_signal[13], real_T W[13])
{
  for (int32_T ct{0}; ct < 13; ct++) {
    real_T b_signal_0;
    b_signal_0 = b_signal[ct];
    if (b_signal_0 < 0.0) {
      W[ct] = 0.0;
    } else {
      W[ct] = b_signal_0 * b_signal_0;
    }
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
