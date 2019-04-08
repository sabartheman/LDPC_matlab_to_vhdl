/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ldpcenc_wrapper_fixpt.h
 *
 * Code generation for function 'ldpcenc_wrapper_fixpt'
 *
 */

#ifndef LDPCENC_WRAPPER_FIXPT_H
#define LDPCENC_WRAPPER_FIXPT_H

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
extern void ldpcenc_wrapper_fixpt(const emlrtStack *sp, const real_T m[4],
  real_T codedout[7]);

#endif

/* End of code generation (ldpcenc_wrapper_fixpt.h) */
