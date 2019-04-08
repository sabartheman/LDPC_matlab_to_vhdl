/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * call_custom_exp_fixpt_logger.h
 *
 * Code generation for function 'call_custom_exp_fixpt_logger'
 *
 */

#ifndef CALL_CUSTOM_EXP_FIXPT_LOGGER_H
#define CALL_CUSTOM_EXP_FIXPT_LOGGER_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "call_custom_exp_wrapper_fixpt_hdl_mex_types.h"

/* Function Declarations */
extern void b_call_custom_exp_fixpt_logger(const emlrtStack *sp, int16_T
  varargin_1, uint16_T varargin_2);
extern void c_call_custom_exp_fixpt_logger_(void);
extern void call_custom_exp_fixpt_logger(const emlrtStack *sp, struct0_T
  *loggedData);
extern void iterCount_not_empty_init(void);
extern void x_TB_logger_free(void);
extern void x_TB_logger_init(const emlrtStack *sp);
extern void y_TB_logger_free(void);
extern void y_TB_logger_init(const emlrtStack *sp);

#endif

/* End of code generation (call_custom_exp_fixpt_logger.h) */
