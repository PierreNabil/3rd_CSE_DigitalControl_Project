/*
 * File: controller.c
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

#include "controller.h"
#include "controller_private.h"

/* Block states (default storage) */
DW_controller_T controller_DW;

/* External inputs (root inport signals with default storage) */
ExtU_controller_T controller_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_controller_T controller_Y;

/* Real-time model */
RT_MODEL_controller_T controller_M_;
RT_MODEL_controller_T *const controller_M = &controller_M_;

/* Model step function */
void controller_step(void)
{
  real_T numAccum;
  real_T denAccum;

  /* Outputs for Atomic SubSystem: '<Root>/controller' */
  /* DiscreteFilter: '<S1>/Bm(z)//Am(z)' incorporates:
   *  Inport: '<Root>/into'
   */
  denAccum = (controller_U.into - -1.2451 * controller_DW.BmzAmz_states[0]) -
    0.4066 * controller_DW.BmzAmz_states[1];
  numAccum = 0.0927 * denAccum + 0.0687 * controller_DW.BmzAmz_states[0];

  /* Sum: '<S1>/Sum2' incorporates:
   *  DiscreteFilter: '<S1>/Bp(z)//Ap(z)'
   *  Inport: '<Root>/into2'
   */
  controller_Y.Outform = (0.1 * controller_DW.BpzApz_states[0] + 0.2 *
    controller_DW.BpzApz_states[1]) + controller_U.into2;

  /* DiscreteFilter: '<S1>/1//S(z)' incorporates:
   *  DiscreteFilter: '<S1>/Bm(z)//Am(z)'
   *  DiscreteFilter: '<S1>/R(z)'
   *  DiscreteFilter: '<S1>/T(z)'
   *  Sum: '<S1>/Sum1'
   */
  controller_Y.Outform2 = ((((3.3333 * numAccum + -4.5803 *
    controller_DW.Tz_states[0]) + 1.6223 * controller_DW.Tz_states[1]) -
    ((3.0005 * controller_Y.Outform + -3.9395 * controller_DW.Rz_states[0]) +
     1.3143 * controller_DW.Rz_states[1])) - -0.37415 *
    controller_DW.uSz_states[0]) - -0.62585 * controller_DW.uSz_states[1];

  /* Update for DiscreteFilter: '<S1>/Bm(z)//Am(z)' */
  controller_DW.BmzAmz_states[1] = controller_DW.BmzAmz_states[0];
  controller_DW.BmzAmz_states[0] = denAccum;

  /* Update for DiscreteFilter: '<S1>/T(z)' incorporates:
   *  DiscreteFilter: '<S1>/Bm(z)//Am(z)'
   */
  controller_DW.Tz_states[1] = controller_DW.Tz_states[0];
  controller_DW.Tz_states[0] = numAccum;

  /* Update for DiscreteFilter: '<S1>/Bp(z)//Ap(z)' incorporates:
   *  Outport: '<Root>/Outform2'
   */
  denAccum = (controller_Y.Outform2 - -1.3 * controller_DW.BpzApz_states[0]) -
    0.42 * controller_DW.BpzApz_states[1];
  controller_DW.BpzApz_states[1] = controller_DW.BpzApz_states[0];
  controller_DW.BpzApz_states[0] = denAccum;

  /* Update for DiscreteFilter: '<S1>/R(z)' */
  controller_DW.Rz_states[1] = controller_DW.Rz_states[0];
  controller_DW.Rz_states[0] = controller_Y.Outform;

  /* Update for DiscreteFilter: '<S1>/1//S(z)' */
  controller_DW.uSz_states[1] = controller_DW.uSz_states[0];
  controller_DW.uSz_states[0] = controller_Y.Outform2;

  /* End of Outputs for SubSystem: '<Root>/controller' */
}

/* Model initialize function */
void controller_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(controller_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&controller_DW, 0,
                sizeof(DW_controller_T));

  /* external inputs */
  (void)memset((void *)&controller_U, 0, sizeof(ExtU_controller_T));

  /* external outputs */
  (void) memset((void *)&controller_Y, 0,
                sizeof(ExtY_controller_T));
}

/* Model terminate function */
void controller_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
