/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ldpcdec_wrapper_fixpt_hdl_mex_terminate.c
 *
 * Code generation for function 'ldpcdec_wrapper_fixpt_hdl_mex_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ldpcdec_fixpt_logger.h"
#include "ldpcdec_wrapper_fixpt.h"
#include "ldpcdec_wrapper_fixpt_hdl_mex_terminate.h"
#include "_coder_ldpcdec_wrapper_fixpt_hdl_mex_mex.h"
#include "ldpcdec_wrapper_fixpt_hdl_mex_data.h"

/* Function Definitions */
void ldpcdec_wrapper_fixpt_hdl_mex_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  dec_out_TB_logger_free();
  iter_TB_logger_free();
  r_TB_logger_free();
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  emlrtDestroyArray(&eml_mx);
  emlrtDestroyArray(&b_eml_mx);
  emlrtDestroyArray(&c_eml_mx);
  emlrtDestroyArray(&d_eml_mx);
}

void ldpcdec_wrapper_fixpt_hdl_mex_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (ldpcdec_wrapper_fixpt_hdl_mex_terminate.c) */
