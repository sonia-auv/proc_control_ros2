//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: plook_u32u16_binckan.cpp
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 4.0
// Simulink Coder version         : 25.2 (R2025b) 28-Jul-2025
// C/C++ source code generated on : Sat Jun 27 16:04:42 2026
//
#include "plook_u32u16_binckan.h"
#include "binsearch_u32u16.h"
#include <string>
#include "rtwtypes.h"

uint32_T plook_u32u16_binckan(uint16_T u, const uint16_T bp[], uint32_T maxIndex)
{
  uint32_T bpIndex;

  // Prelookup - Index only
  // Index Search method: 'binary'
  // Interpolation method: 'Use nearest'
  // Extrapolation method: 'Clip'
  // Use previous index: 'off'
  // Use last breakpoint for index at or above upper limit: 'on'
  // Remove protection against out-of-range input in generated code: 'off'

  if (u <= bp[0U]) {
    bpIndex = 0U;
  } else if (u < bp[maxIndex]) {
    bpIndex = binsearch_u32u16(u, bp, maxIndex >> 1U, maxIndex);
    if ((bpIndex < maxIndex) && (static_cast<uint16_T>(static_cast<uint32_T>
          (bp[bpIndex + 1U]) - u) <= static_cast<uint16_T>(static_cast<uint32_T>
          (u) - bp[bpIndex]))) {
      bpIndex++;
    }
  } else {
    bpIndex = maxIndex;
  }

  return bpIndex;
}

//
// File trailer for generated code.
//
// [EOF]
//
