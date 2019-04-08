/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_ldpcenc_wrapper_fixpt_hdl_mex_mex.c
 *
 * Code generation for function '_coder_ldpcenc_wrapper_fixpt_hdl_mex_mex'
 *
 */

/* Include files */
#include "ldpcenc_fixpt_logger.h"
#include "ldpcenc_wrapper_fixpt.h"
#include "_coder_ldpcenc_wrapper_fixpt_hdl_mex_mex.h"
#include "ldpcenc_wrapper_fixpt_hdl_mex_terminate.h"
#include "_coder_ldpcenc_wrapper_fixpt_hdl_mex_api.h"
#include "ldpcenc_wrapper_fixpt_hdl_mex_initialize.h"
#include "ldpcenc_wrapper_fixpt_hdl_mex_data.h"

/* Variable Definitions */
static const char * emlrtEntryPoints[2] = { "ldpcenc_wrapper_fixpt",
  "ldpcenc_fixpt_logger" };

/* Function Declarations */
static void c_ldpcenc_fixpt_logger_mexFunct(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs);
static void c_ldpcenc_wrapper_fixpt_mexFunc(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1]);

/* Function Definitions */
static void c_ldpcenc_fixpt_logger_mexFunct(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs)
{
  const mxArray *outputs[1];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 0) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 0, 4,
                        20, "ldpcenc_fixpt_logger");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 20,
                        "ldpcenc_fixpt_logger");
  }

  /* Call the function. */
  ldpcenc_fixpt_logger_api(nlhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

static void c_ldpcenc_wrapper_fixpt_mexFunc(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1])
{
  const mxArray *outputs[1];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        21, "ldpcenc_wrapper_fixpt");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 21,
                        "ldpcenc_wrapper_fixpt");
  }

  /* Call the function. */
  ldpcenc_wrapper_fixpt_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  emlrtReturnArrays(1, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexAtExit(ldpcenc_wrapper_fixpt_hdl_mex_atexit);

  /* Module initialization. */
  ldpcenc_wrapper_fixpt_hdl_mex_initialize();
  st.tls = emlrtRootTLSGlobal;

  /* Dispatch the entry-point. */
  switch (emlrtGetEntryPointIndexR2016a(&st, nrhs, prhs, emlrtEntryPoints, 2)) {
   case 0:
    c_ldpcenc_wrapper_fixpt_mexFunc(nlhs, plhs, nrhs - 1, *(const mxArray *(*)[1])
      &prhs[1]);
    break;

   case 1:
    c_ldpcenc_fixpt_logger_mexFunct(nlhs, plhs, nrhs - 1);
    break;
  }

  /* Module termination. */
  ldpcenc_wrapper_fixpt_hdl_mex_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_ldpcenc_wrapper_fixpt_hdl_mex_mex.c) */
