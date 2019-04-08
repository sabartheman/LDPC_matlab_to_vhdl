/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_ldpcenc_wrapper_fixpt_hdl_mex_api.c
 *
 * Code generation for function '_coder_ldpcenc_wrapper_fixpt_hdl_mex_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ldpcenc_fixpt_logger.h"
#include "ldpcenc_wrapper_fixpt.h"
#include "_coder_ldpcenc_wrapper_fixpt_hdl_mex_api.h"
#include "ldpcenc_wrapper_fixpt_hdl_mex_emxutil.h"
#include "ldpcenc_wrapper_fixpt_hdl_mex_data.h"

/* Variable Definitions */
static emlrtRTEInfo g_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_ldpcenc_wrapper_fixpt_hdl_mex_api",/* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[4];
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const struct0_T
  u);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[4];
static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_uint8_T *u);
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *m, const
  char_T *identifier))[4];
static const mxArray *emlrt_marshallOut(const real_T u[7]);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[4]
{
  real_T (*y)[4];
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const
  struct0_T u)
{
  const mxArray *y;
  static const char * sv0[3] = { "inputs", "outputs", "iterCount" };

  const mxArray *b_y;
  static const char * sv1[1] = { "m" };

  static const char * sv2[1] = { "codedout" };

  const mxArray *m3;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 3, sv0));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 1, sv1));
  emlrtSetFieldR2017b(b_y, 0, "m", c_emlrt_marshallOut(sp, u.inputs.m), 0);
  emlrtSetFieldR2017b(y, 0, "inputs", b_y, 0);
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 1, sv2));
  emlrtSetFieldR2017b(b_y, 0, "codedout", c_emlrt_marshallOut(sp,
    u.outputs.codedout), 0);
  emlrtSetFieldR2017b(y, 0, "outputs", b_y, 1);
  b_y = NULL;
  m3 = emlrtCreateDoubleScalar(u.iterCount);
  emlrtAssign(&b_y, m3);
  emlrtSetFieldR2017b(y, 0, "iterCount", b_y, 2);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[4]
{
  real_T (*ret)[4];
  static const int32_T dims[2] = { 1, 4 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[4])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static const mxArray *c_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_uint8_T *u)
{
  const mxArray *y;
  emxArray_uint8_T *b_u;
  int32_T i6;
  int32_T loop_ub;
  const mxArray *b_y;
  const mxArray *m4;
  uint8_T *pData;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_uint8_T(sp, &b_u, 2, (emlrtRTEInfo *)NULL, true);
  y = NULL;
  i6 = b_u->size[0] * b_u->size[1];
  b_u->size[0] = 1;
  b_u->size[1] = u->size[1];
  emxEnsureCapacity_uint8_T(sp, b_u, i6, (emlrtRTEInfo *)NULL);
  loop_ub = u->size[0] * u->size[1];
  for (i6 = 0; i6 < loop_ub; i6++) {
    b_u->data[i6] = u->data[i6];
  }

  b_y = NULL;
  m4 = emlrtCreateNumericArray(2, *(int32_T (*)[2])b_u->size, mxUINT8_CLASS,
    mxREAL);
  pData = (uint8_T *)emlrtMxGetData(m4);
  i6 = 0;
  loop_ub = 0;
  emxFree_uint8_T(&b_u);
  while (loop_ub < u->size[1]) {
    pData[i6] = u->data[loop_ub];
    i6++;
    loop_ub++;
  }

  emlrtAssign(&b_y, m4);
  emlrtAssign(&y, emlrtCreateFIR2013b(sp, eml_mx, b_eml_mx, "simulinkarray", b_y,
    true, false));
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *m, const
  char_T *identifier))[4]
{
  real_T (*y)[4];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(m), &thisId);
  emlrtDestroyArray(&m);
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

void ldpcenc_fixpt_logger_api(int32_T nlhs, const mxArray *plhs[1])
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
  ldpcenc_fixpt_logger(&st, &loggedData);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(&st, loggedData);
  emxFreeStruct_struct0_T(&loggedData);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void ldpcenc_wrapper_fixpt_api(const mxArray * const prhs[1], int32_T nlhs,
  const mxArray *plhs[1])
{
  real_T (*codedout)[7];
  real_T (*m)[4];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  codedout = (real_T (*)[7])mxMalloc(sizeof(real_T [7]));

  /* Marshall function inputs */
  m = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "m");

  /* Invoke the target function */
  ldpcenc_wrapper_fixpt(&st, *m, *codedout);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*codedout);
}

/* End of code generation (_coder_ldpcenc_wrapper_fixpt_hdl_mex_api.c) */
