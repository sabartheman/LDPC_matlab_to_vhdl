/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ldpcdec_wrapper_fixpt.h
 *
 * Code generation for function 'ldpcdec_wrapper_fixpt'
 *
 */

#ifndef LDPCDEC_WRAPPER_FIXPT_H
#define LDPCDEC_WRAPPER_FIXPT_H

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
extern void ldpcdec_wrapper_fixpt(const emlrtStack *sp, const real_T r[7],
  real_T iter, real_T dec_out[7]);

#endif

/* End of code generation (ldpcdec_wrapper_fixpt.h) */
