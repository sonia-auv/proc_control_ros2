/*
 * div_nde_s32_floor.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "proc_control_lite".
 *
 * Model version              : 1.15
 * Simulink Coder version : 24.2 (R2024b) 21-Jun-2024
 * C++ source code generated on : Sun Jul 12 01:23:28 2026
 * Created for block: proc_control_lite
 */

#include "div_nde_s32_floor.h"
#include <string>
#include "rtwtypes.h"

int32_T div_nde_s32_floor(int32_T numerator, int32_T denominator)
{
  return (((numerator < 0) != (denominator < 0)) && (numerator % denominator !=
           0) ? -1 : 0) + numerator / denominator;
}
