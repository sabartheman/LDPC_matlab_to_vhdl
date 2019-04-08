/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * call_custom_exp_wrapper_fixpt_hdl_mex_terminate.c
 *
 * Code generation for function 'call_custom_exp_wrapper_fixpt_hdl_mex_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "call_custom_exp_fixpt_logger.h"
#include "call_custom_exp_wrapper_fixpt.h"
#include "call_custom_exp_wrapper_fixpt_hdl_mex_terminate.h"
#include "_coder_call_custom_exp_wrapper_fixpt_hdl_mex_mex.h"
#include "call_custom_exp_wrapper_fixpt_hdl_mex_data.h"

/* Function Definitions */
void call_custom_exp_wrapper_fixpt_hdl_mex_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  y_TB_logger_free();
  x_TB_logger_free();
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtDestroyArray(&eml_mx);
  emlrtDestroyArray(&b_eml_mx);
  emlrtDestroyArray(&c_eml_mx);
}

void call_custom_exp_wrapper_fixpt_hdl_mex_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (call_custom_exp_wrapper_fixpt_hdl_mex_terminate.c) */
