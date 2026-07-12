/*
 * plook_u32d_binckpang.cpp
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

#include "plook_u32d_binckpang.h"
#include "binsearch_u32d_prevIdx.h"
#include <string>
#include "rtwtypes.h"

uint32_T plook_u32d_binckpang(real_T u, const real_T bp[], uint32_T maxIndex,
  uint32_T *prevIndex)
{
  uint32_T bpIndex;

  /* Prelookup - Index only
     Index Search method: 'binary'
     Interpolation method: 'Use nearest'
     Use previous index: 'on'
     Use last breakpoint for index at or above upper limit: 'on'
     Remove protection against out-of-range input in generated code: 'on'
   */
  if (u < bp[maxIndex]) {
    bpIndex = binsearch_u32d_prevIdx(u, bp, *prevIndex, maxIndex);
    if ((bpIndex < maxIndex) && (bp[bpIndex + 1U] - u <= u - bp[bpIndex])) {
      bpIndex++;
    }
  } else {
    bpIndex = maxIndex;
  }

  *prevIndex = bpIndex;
  return bpIndex;
}
