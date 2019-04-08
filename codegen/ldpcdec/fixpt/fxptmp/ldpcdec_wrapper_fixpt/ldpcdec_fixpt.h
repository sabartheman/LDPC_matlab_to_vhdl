/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ldpcdec_fixpt.h
 *
 * Code generation for function 'ldpcdec_fixpt'
 *
 */

#ifndef LDPCDEC_FIXPT_H
#define LDPCDEC_FIXPT_H

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
extern void ldpcdec_fixpt(const emlrtStack *sp, const int8_T r[7], uint16_T iter,
  int16_T dec_out[7]);
extern void replacement_custom_fnc_init(void);
extern void replacement_custom_log_init(void);

#endif

/* End of code generation (ldpcdec_fixpt.h) */
