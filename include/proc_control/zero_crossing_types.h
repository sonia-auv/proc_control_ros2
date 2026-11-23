//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: zero_crossing_types.h
//
// Code generated for Simulink model 'proc_control'.
//
// Model version                  : 4.301
// Simulink Coder version         : 26.1 (R2026a) 20-Nov-2025
// C/C++ source code generated on : Mon Nov 23 14:58:37 2026
//
#ifndef ZERO_CROSSING_TYPES_H
#define ZERO_CROSSING_TYPES_H
#include "rtwtypes.h"

// Trigger directions: falling, either, and rising
enum class ZCDirection: int8_T {
  FALLING_ZERO_CROSSING = -1,
  ANY_ZERO_CROSSING = 0,
  RISING_ZERO_CROSSING = 1
};

// Previous state of a trigger signal
enum class ZCSigState: uint8_T {
  UNINITIALIZED_ZCSIG = 0x03U,
  NEG_ZCSIG = 0x02U,
  POS_ZCSIG = 0x01U,
  ZERO_ZCSIG = 0x00U
};

// Current state of a trigger signal
enum class ZCEventType: int8_T { FALLING_ZCEVENT = -1, NO_ZCEVENT = 0,
  RISING_ZCEVENT = 1 };

#endif                                 // ZERO_CROSSING_TYPES_H

//
// File trailer for generated code.
//
// [EOF]
//
