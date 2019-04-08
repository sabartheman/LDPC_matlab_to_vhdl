/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ldpcdec_fixpt_logger.h
 *
 * Code generation for function 'ldpcdec_fixpt_logger'
 *
 */

#ifndef LDPCDEC_FIXPT_LOGGER_H
#define LDPCDEC_FIXPT_LOGGER_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "ldpcdec_wrapper_fixpt_hdl_mex_types.h"

/* Function Declarations */
extern void b_ldpcdec_fixpt_logger(const emlrtStack *sp, const int8_T
  varargin_1[7], uint16_T varargin_2, const int16_T varargin_3[7]);
extern void dec_out_TB_logger_free(void);
extern void dec_out_TB_logger_init(const emlrtStack *sp);
extern void iterCount_not_empty_init(void);
extern void iter_TB_logger_free(void);
extern void iter_TB_logger_init(const emlrtStack *sp);
extern void ldpcdec_fixpt_logger(const emlrtStack *sp, struct0_T *loggedData);
extern void ldpcdec_fixpt_logger_init(void);
extern void r_TB_logger_free(void);
extern void r_TB_logger_init(const emlrtStack *sp);

#endif

/* End of code generation (ldpcdec_fixpt_logger.h) */
