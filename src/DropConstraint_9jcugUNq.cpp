//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: DropConstraint_9jcugUNq.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.186
// Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
// C/C++ source code generated on : Sat Jun 21 18:59:37 2025
//
#include "rtwtypes.h"
#include "DropConstraint_9jcugUNq.h"

// Function for MATLAB Function: '<S212>/FixedHorizonOptimizer'
void DropConstraint_9jcugUNq(int32_T kDrop, boolean_T iA[226], int32_T *nA,
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
