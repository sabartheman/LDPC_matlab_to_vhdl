/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_call_custom_exp_wrapper_fixpt_hdl_mex_api.c
 *
 * Code generation for function '_coder_call_custom_exp_wrapper_fixpt_hdl_mex_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "call_custom_exp_fixpt_logger.h"
#include "call_custom_exp_wrapper_fixpt.h"
#include "_coder_call_custom_exp_wrapper_fixpt_hdl_mex_api.h"
#include "call_custom_exp_wrapper_fixpt_hdl_mex_emxutil.h"
#include "call_custom_exp_wrapper_fixpt_hdl_mex_data.h"

/* Variable Definitions */
static emlrtRTEInfo g_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_call_custom_exp_wrapper_fixpt_hdl_mex_api",/* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const struct0_T
  u);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_int16_T *u);
static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier);
static const mxArray *emlrt_marshallOut(const real_T u);

/* Function Definitions */
static real_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const struct0_T
  u)
{
  const mxArray *y;
  static const char * sv0[3] = { "inputs", "outputs", "iterCount" };

  const mxArray *b_y;
  static const char * sv1[1] = { "x" };

  static const char * sv2[1] = { "y" };

  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 3, sv0));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 1, sv1));
  emlrtSetFieldR2017b(b_y, 0, "x", c_emlrt_marshallOut(sp, u.inputs.x), 0);
  emlrtSetFieldR2017b(y, 0, "inputs", b_y, 0);
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 1, sv2));
  emlrtSetFieldR2017b(b_y, 0, "y", c_emlrt_marshallOut(sp, u.outputs.y), 0);
  emlrtSetFieldR2017b(y, 0, "outputs", b_y, 1);
  emlrtSetFieldR2017b(y, 0, "iterCount", emlrt_marshallOut(u.iterCount), 2);
  return y;
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_int16_T *u)
{
  const mxArray *y;
  emxArray_int16_T *b_u;
  int32_T i15;
  int32_T loop_ub;
  const mxArray *b_y;
  const mxArray *m3;
  int16_T *pData;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_int16_T(sp, &b_u, 2, (emlrtRTEInfo *)NULL, true);
  y = NULL;
  i15 = b_u->size[0] * b_u->size[1];
  b_u->size[0] = 1;
  b_u->size[1] = u->size[1];
  emxEnsureCapacity_int16_T(sp, b_u, i15, (emlrtRTEInfo *)NULL);
  loop_ub = u->size[0] * u->size[1];
  for (i15 = 0; i15 < loop_ub; i15++) {
    b_u->data[i15] = u->data[i15];
  }

  b_y = NULL;
  m3 = emlrtCreateNumericArray(2, *(int32_T (*)[2])b_u->size, mxINT16_CLASS,
    mxREAL);
  pData = (int16_T *)emlrtMxGetData(m3);
  i15 = 0;
  loop_ub = 0;
  emxFree_int16_T(&b_u);
  while (loop_ub < u->size[1]) {
    pData[i15] = u->data[loop_ub];
    i15++;
    loop_ub++;
  }

  emlrtAssign(&b_y, m3);
  emlrtAssign(&y, emlrtCreateFIR2013b(sp, eml_mx, b_eml_mx, "simulinkarray", b_y,
    true, false));
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

static real_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *x, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(x), &thisId);
  emlrtDestroyArray(&x);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m2;
  y = NULL;
  m2 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m2);
  return y;
}

void call_custom_exp_fixpt_logger_api(int32_T nlhs, const mxArray *plhs[1])
{
  struct0_T loggedData;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInitStruct_struct0_T(&st, &loggedData, &g_emlrtRTEI, true);

  /* Invoke the target function */
  call_custom_exp_fixpt_logger(&st, &loggedData);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(&st, loggedData);
  emxFreeStruct_struct0_T(&loggedData);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void call_custom_exp_wrapper_fixpt_api(const mxArray * const prhs[1], int32_T
  nlhs, const mxArray *plhs[1])
{
  real_T x;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  x = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "x");

  /* Invoke the target function */
  x = call_custom_exp_wrapper_fixpt(&st, x);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(x);
}

/* End of code generation (_coder_call_custom_exp_wrapper_fixpt_hdl_mex_api.c) */
