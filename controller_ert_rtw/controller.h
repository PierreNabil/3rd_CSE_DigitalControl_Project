/*
 * File: controller.h
 *
 * Code generated for Simulink model 'controller'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
 * C/C++ source code generated on : Fri Jun 12 11:17:54 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_controller_h_
#define RTW_HEADER_controller_h_
#include <string.h>
#include <stddef.h>
#ifndef controller_COMMON_INCLUDES_
# define controller_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 /* controller_COMMON_INCLUDES_ */

#include "controller_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T BmzAmz_states[2];             /* '<S1>/Bm(z)//Am(z)' */
  real_T Tz_states[2];                 /* '<S1>/T(z)' */
  real_T BpzApz_states[2];             /* '<S1>/Bp(z)//Ap(z)' */
  real_T Rz_states[2];                 /* '<S1>/R(z)' */
  real_T uSz_states[2];                /* '<S1>/1//S(z)' */
} DW_controller_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T into;                         /* '<Root>/into' */
  real_T into2;                        /* '<Root>/into2' */
} ExtU_controller_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Outform;                      /* '<Root>/Outform' */
  real_T Outform2;                     /* '<Root>/Outform2' */
} ExtY_controller_T;

/* Real-time Model Data Structure */
struct tag_RTM_controller_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_controller_T controller_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_controller_T controller_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_controller_T controller_Y;

/* Model entry point functions */
extern void controller_initialize(void);
extern void controller_step(void);
extern void controller_terminate(void);

/* Real-time Model object */
extern RT_MODEL_controller_T *const controller_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('System_20200612_1115_31/controller')    - opens subsystem System_20200612_1115_31/controller
 * hilite_system('System_20200612_1115_31/controller/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'System_20200612_1115_31'
 * '<S1>'   : 'System_20200612_1115_31/controller'
 */
#endif                                 /* RTW_HEADER_controller_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
