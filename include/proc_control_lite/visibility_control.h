#ifndef PROC_CONTROL_LITE__VISIBILITY_CONTROL_H_
#define PROC_CONTROL_LITE__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define PROC_CONTROL_LITE_EXPORT __attribute__ ((dllexport))
    #define PROC_CONTROL_LITE_IMPORT __attribute__ ((dllimport))
  #else
    #define PROC_CONTROL_LITE_EXPORT __declspec(dllexport)
    #define PROC_CONTROL_LITE_IMPORT __declspec(dllimport)
  #endif
  #ifdef PROC_CONTROL_LITE_BUILDING_LIBRARY
    #define PROC_CONTROL_LITE_PUBLIC PROC_CONTROL_LITE_EXPORT
  #else
    #define PROC_CONTROL_LITE_PUBLIC PROC_CONTROL_LITE_IMPORT
  #endif
  #define PROC_CONTROL_LITE_PUBLIC_TYPE PROC_CONTROL_LITE_PUBLIC
  #define PROC_CONTROL_LITE_LOCAL
#else
  #define PROC_CONTROL_LITE_EXPORT __attribute__ ((visibility("default")))
  #define PROC_CONTROL_LITE_IMPORT
  #if __GNUC__ >= 4
    #define PROC_CONTROL_LITE_PUBLIC __attribute__ ((visibility("default")))
    #define PROC_CONTROL_LITE_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define PROC_CONTROL_LITE_PUBLIC
    #define PROC_CONTROL_LITE_LOCAL
  #endif
  #define PROC_CONTROL_LITE_PUBLIC_TYPE
#endif
#endif  // PROC_CONTROL_LITE__VISIBILITY_CONTROL_H_
// Generated 11-Jul-2026 01:55:46
 