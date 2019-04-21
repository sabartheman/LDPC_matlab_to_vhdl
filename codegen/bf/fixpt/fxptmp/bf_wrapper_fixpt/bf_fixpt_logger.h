/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * bf_fixpt_logger.h
 *
 * Code generation for function 'bf_fixpt_logger'
 *
 */

#ifndef BF_FIXPT_LOGGER_H
#define BF_FIXPT_LOGGER_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "bf_wrapper_fixpt_hdl_mex_types.h"

/* Function Declarations */
extern void b_bf_fixpt_logger(const emlrtStack *sp, const uint8_T varargin_1[7],
  uint8_T varargin_2, const uint8_T varargin_3[7]);
extern void bf_fixpt_logger(const emlrtStack *sp, struct0_T *loggedData);
extern void bf_fixpt_logger_init(void);
extern void iterCount_not_empty_init(void);
extern void iter_TB_logger_free(void);
extern void iter_TB_logger_init(const emlrtStack *sp);
extern void out_TB_logger_free(void);
extern void out_TB_logger_init(const emlrtStack *sp);
extern void r_TB_logger_free(void);
extern void r_TB_logger_init(const emlrtStack *sp);

#endif

/* End of code generation (bf_fixpt_logger.h) */
