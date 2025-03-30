//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: updateWeights_iTeQU2p6.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 2.1
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Mon Mar  3 17:37:57 2025
//
#include "rtwtypes.h"
#include "updateWeights_iTeQU2p6.h"

// Function for MATLAB Function: '<S176>/VariableHorizonOptimizer'
void updateWeights_iTeQU2p6(const real_T b_signal[13], real_T W[13])
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
