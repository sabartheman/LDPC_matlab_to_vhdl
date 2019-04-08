/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ldpcenc_fixpt_logger.h
 *
 * Code generation for function 'ldpcenc_fixpt_logger'
 *
 */

#ifndef LDPCENC_FIXPT_LOGGER_H
#define LDPCENC_FIXPT_LOGGER_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "ldpcenc_wrapper_fixpt_hdl_mex_types.h"

/* Function Declarations */
extern void b_ldpcenc_fixpt_logger(const emlrtStack *sp, const uint8_T
  varargin_1[4], const uint8_T varargin_2[7]);
extern void codedout_TB_logger_free(void);
extern void codedout_TB_logger_init(const emlrtStack *sp);
extern void iterCount_not_empty_init(void);
extern void ldpcenc_fixpt_logger(const emlrtStack *sp, struct0_T *loggedData);
extern void ldpcenc_fixpt_logger_init(void);
extern void m_TB_logger_free(void);
extern void m_TB_logger_init(const emlrtStack *sp);

#endif

/* End of code generation (ldpcenc_fixpt_logger.h) */
