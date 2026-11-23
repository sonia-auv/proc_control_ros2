//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: DropConstraint_9sa8HOgD.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 4.301
// Simulink Coder version         : 26.1 (R2026a) 20-Nov-2025
// C/C++ source code generated on : Mon Nov 23 14:58:37 2026
//
#include "rtwtypes.h"
#include "DropConstraint_9sa8HOgD.h"

// Function for MATLAB Function: '<S165>/FixedHorizonOptimizer'
void DropConstraint_9sa8HOgD(int32_T kDrop, boolean_T iA[226], int32_T *nA,
  int32_T iC[226])
{
  if (kDrop > 0) {
    iA[iC[kDrop - 1] - 1] = false;
    if (kDrop < *nA) {
      for (int32_T i{kDrop}; i < *nA; i++) {
        iC[i - 1] = iC[i];
      }
    }

    iC[*nA - 1] = 0;
    (*nA)--;
  }
}

//
// File trailer for generated code.
//
// [EOF]
//
