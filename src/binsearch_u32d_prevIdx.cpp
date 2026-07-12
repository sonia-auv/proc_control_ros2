/*
 * binsearch_u32d_prevIdx.cpp
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

#include "binsearch_u32d_prevIdx.h"
#include <string>
#include "rtwtypes.h"

uint32_T binsearch_u32d_prevIdx(real_T u, const real_T bp[], uint32_T startIndex,
  uint32_T maxIndex)
{
  uint32_T bpIndex;
  uint32_T found;
  uint32_T iLeft;
  uint32_T iRght;

  /* Binary Search using Previous Index */
  bpIndex = startIndex;
  iLeft = 0U;
  iRght = maxIndex;
  found = 0U;
  while (found == 0U) {
    if (u < bp[bpIndex]) {
      iRght = bpIndex - 1U;
      bpIndex = ((bpIndex + iLeft) - 1U) >> 1U;
    } else if (u < bp[bpIndex + 1U]) {
      found = 1U;
    } else {
      iLeft = bpIndex + 1U;
      bpIndex = ((bpIndex + iRght) + 1U) >> 1U;
    }
  }

  return bpIndex;
}
