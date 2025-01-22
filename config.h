#pragma once

#pragma weak backing_store_lock
#pragma weak backing_store_unlock

#define FORCE_NKRO
#define TAPPING_TERM 300

#define OS_DETECTION_KEYBOARD_RESET
#define OS_DETECTION_SINGLE_REPORT

#ifdef CRT0_EXTRA_CORES_NUMBER
#undef CRT0_EXTRA_CORES_NUMBER
#endif
#define CRT0_EXTRA_CORES_NUMBER 1
