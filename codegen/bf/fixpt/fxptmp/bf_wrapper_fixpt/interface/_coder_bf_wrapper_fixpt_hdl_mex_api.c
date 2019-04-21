/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_bf_wrapper_fixpt_hdl_mex_api.c
 *
 * Code generation for function '_coder_bf_wrapper_fixpt_hdl_mex_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "bf_fixpt_logger.h"
#include "bf_wrapper_fixpt.h"
#include "_coder_bf_wrapper_fixpt_hdl_mex_api.h"
#include "bf_wrapper_fixpt_hdl_mex_emxutil.h"
#include "bf_wrapper_fixpt_hdl_mex_data.h"

/* Variable Definitions */
static emlrtRTEInfo j_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_bf_wrapper_fixpt_hdl_mex_api",/* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[7];
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const struct0_T
  u);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *iter,
  const char_T *identifier);
static const mxArray *c_emlrt_marshallOut(const emxArray_uint8_T *u);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[7];
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *r, const
  char_T *identifier))[7];
static const mxArray *emlrt_marshallOut(const real_T u[7]);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[7]
{
  real_T (*y)[7];
  y = e_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const
  struct0_T u)
{
  const mxArray *y;
  static const char * sv0[3] = { "inputs", "outputs", "iterCount" };

  const mxArray *b_y;
  static const char * sv1[2] = { "r", "iter" };

  const mxArray *c_y;
  static const char * sv2[1] = { "out" };

  const mxArray *m3;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 3, sv0));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 2, sv1));
  c_y = NULL;
  emlrtAssign(&c_y, emlrtCreateFIR2013b(sp, eml_mx, b_eml_mx, "simulinkarray",
    c_emlrt_marshallOut(u.inputs.r), true, false));
  emlrtSetFieldR2017b(b_y, 0, "r", c_y, 0);
  c_y = NULL;
  emlrtAssign(&c_y, emlrtCreateFIR2013b(sp, eml_mx, c_eml_mx, "simulinkarray",
    c_emlrt_marshallOut(u.inputs.iter), true, false));
  emlrtSetFieldR2017b(b_y, 0, "iter", c_y, 1);
  emlrtSetFieldR2017b(y, 0, "inputs", b_y, 0);
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 1, sv2));
  c_y = NULL;
  emlrtAssign(&c_y, emlrtCreateFIR2013b(sp, eml_mx, b_eml_mx, "simulinkarray",
    c_emlrt_marshallOut(u.outputs.out), true, false));
  emlrtSetFieldR2017b(b_y, 0, "out", c_y, 0);
  emlrtSetFieldR2017b(y, 0, "outputs", b_y, 1);
  b_y = NULL;
  m3 = emlrtCreateDoubleScalar(u.iterCount);
  emlrtAssign(&b_y, m3);
  emlrtSetFieldR2017b(y, 0, "iterCount", b_y, 2);
  return y;
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *iter,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(iter), &thisId);
  emlrtDestroyArray(&iter);
  return y;
}

static const mxArray *c_emlrt_marshallOut(const emxArray_uint8_T *u)
{
  const mxArray *y;
  const mxArray *m4;
  uint8_T *pData;
  int32_T i10;
  int32_T i;
  y = NULL;
  m4 = emlrtCreateNumericArray(2, *(int32_T (*)[2])u->size, mxUINT8_CLASS,
    mxREAL);
  pData = (uint8_T *)emlrtMxGetData(m4);
  i10 = 0;
  for (i = 0; i < u->size[1]; i++) {
    pData[i10] = u->data[i];
    i10++;
  }

  emlrtAssign(&y, m4);
  return y;
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = f_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[7]
{
  real_T (*ret)[7];
  static const int32_T dims[2] = { 1, 7 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[7])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *r, const
  char_T *identifier))[7]
{
  real_T (*y)[7];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(r), &thisId);
  emlrtDestroyArray(&r);
  return y;
}

static const mxArray *emlrt_marshallOut(const real_T u[7])
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv2[2] = { 0, 0 };

  static const int32_T iv3[2] = { 1, 7 };

  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv2, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m2, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m2, iv3, 2);
  emlrtAssign(&y, m2);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void bf_fixpt_logger_api(int32_T nlhs, const mxArray *plhs[1])
{
  struct0_T loggedData;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInitStruct_struct0_T(&st, &loggedData, &j_emlrtRTEI, true);

  /* Invoke the target function */
  bf_fixpt_logger(&st, &loggedData);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(&st, loggedData);
  emxFreeStruct_struct0_T(&loggedData);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void bf_wrapper_fixpt_api(const mxArray * const prhs[2], int32_T nlhs, const
  mxArray *plhs[1])
{
  real_T (*out)[7];
  real_T (*r)[7];
  real_T iter;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  out = (real_T (*)[7])mxMalloc(sizeof(real_T [7]));

  /* Marshall function inputs */
  r = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "r");
  iter = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "iter");

  /* Invoke the target function */
  bf_wrapper_fixpt(&st, *r, iter, *out);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*out);
}

/* End of code generation (_coder_bf_wrapper_fixpt_hdl_mex_api.c) */
