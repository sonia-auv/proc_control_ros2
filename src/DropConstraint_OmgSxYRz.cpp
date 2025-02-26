//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: DropConstraint_OmgSxYRz.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.184
// Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
// C/C++ source code generated on : Wed Feb 26 16:57:19 2025
//
#include "rtwtypes.h"
#include "DropConstraint_OmgSxYRz.h"

// Function for MATLAB Function: '<S212>/FixedHorizonOptimizer'
void DropConstraint_OmgSxYRz(int32_T kDrop, boolean_T iA[226], int32_T *nA,
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
