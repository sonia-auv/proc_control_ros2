//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: div_nde_s32_floor.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 1.184
// Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
// C/C++ source code generated on : Wed Feb 26 16:57:19 2025
//
#include "div_nde_s32_floor.h"
#include <string>
#include "rtwtypes.h"

int32_T div_nde_s32_floor(int32_T numerator, int32_T denominator)
{
  return (((numerator < 0) != (denominator < 0)) && (numerator % denominator !=
           0) ? -1 : 0) + numerator / denominator;
}

//
// File trailer for generated code.
//
// [EOF]
//
