/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_ldpcdec_wrapper_fixpt_hdl_mex_api.c
 *
 * Code generation for function '_coder_ldpcdec_wrapper_fixpt_hdl_mex_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ldpcdec_fixpt_logger.h"
#include "ldpcdec_wrapper_fixpt.h"
#include "_coder_ldpcdec_wrapper_fixpt_hdl_mex_api.h"
#include "ldpcdec_wrapper_fixpt_hdl_mex_emxutil.h"
#include "ldpcdec_wrapper_fixpt_hdl_mex_data.h"

/* Variable Definitions */
static emlrtRTEInfo k_emlrtRTEI = { 1, /* lineNo */
  1,                                   /* colNo */
  "_coder_ldpcdec_wrapper_fixpt_hdl_mex_api",/* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[7];
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const struct0_T
  u);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *iter,
  const char_T *identifier);
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
  emxArray_int8_T *b_u;
  static const char * sv0[3] = { "inputs", "outputs", "iterCount" };

  const mxArray *b_y;
  static const char * sv1[2] = { "r", "iter" };

  const mxArray *c_y;
  int32_T i23;
  int32_T loop_ub;
  const mxArray *d_y;
  const mxArray *m4;
  int8_T *pData;
  emxArray_uint16_T *c_u;
  const mxArray *m5;
  uint16_T *b_pData;
  emxArray_int16_T *d_u;
  static const char * sv2[1] = { "dec_out" };

  const mxArray *m6;
  int16_T *c_pData;
  const mxArray *m7;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_int8_T(sp, &b_u, 2, (emlrtRTEInfo *)NULL, true);
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 3, sv0));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 2, sv1));
  c_y = NULL;
  i23 = b_u->size[0] * b_u->size[1];
  b_u->size[0] = 1;
  b_u->size[1] = u.inputs.r->size[1];
  emxEnsureCapacity_int8_T(sp, b_u, i23, (emlrtRTEInfo *)NULL);
  loop_ub = u.inputs.r->size[0] * u.inputs.r->size[1];
  for (i23 = 0; i23 < loop_ub; i23++) {
    b_u->data[i23] = u.inputs.r->data[i23];
  }

  d_y = NULL;
  m4 = emlrtCreateNumericArray(2, *(int32_T (*)[2])b_u->size, mxINT8_CLASS,
    mxREAL);
  pData = (int8_T *)emlrtMxGetData(m4);
  i23 = 0;
  loop_ub = 0;
  emxFree_int8_T(&b_u);
  while (loop_ub < u.inputs.r->size[1]) {
    pData[i23] = u.inputs.r->data[loop_ub];
    i23++;
    loop_ub++;
  }

  emxInit_uint16_T(sp, &c_u, 2, (emlrtRTEInfo *)NULL, true);
  emlrtAssign(&d_y, m4);
  emlrtAssign(&c_y, emlrtCreateFIR2013b(sp, eml_mx, c_eml_mx, "simulinkarray",
    d_y, true, false));
  emlrtSetFieldR2017b(b_y, 0, "r", c_y, 0);
  c_y = NULL;
  i23 = c_u->size[0] * c_u->size[1];
  c_u->size[0] = 1;
  c_u->size[1] = u.inputs.iter->size[1];
  emxEnsureCapacity_uint16_T(sp, c_u, i23, (emlrtRTEInfo *)NULL);
  loop_ub = u.inputs.iter->size[0] * u.inputs.iter->size[1];
  for (i23 = 0; i23 < loop_ub; i23++) {
    c_u->data[i23] = u.inputs.iter->data[i23];
  }

  d_y = NULL;
  m5 = emlrtCreateNumericArray(2, *(int32_T (*)[2])c_u->size, mxUINT16_CLASS,
    mxREAL);
  b_pData = (uint16_T *)emlrtMxGetData(m5);
  i23 = 0;
  loop_ub = 0;
  emxFree_uint16_T(&c_u);
  while (loop_ub < u.inputs.iter->size[1]) {
    b_pData[i23] = u.inputs.iter->data[loop_ub];
    i23++;
    loop_ub++;
  }

  emxInit_int16_T(sp, &d_u, 2, (emlrtRTEInfo *)NULL, true);
  emlrtAssign(&d_y, m5);
  emlrtAssign(&c_y, emlrtCreateFIR2013b(sp, eml_mx, d_eml_mx, "simulinkarray",
    d_y, true, false));
  emlrtSetFieldR2017b(b_y, 0, "iter", c_y, 1);
  emlrtSetFieldR2017b(y, 0, "inputs", b_y, 0);
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 1, sv2));
  c_y = NULL;
  i23 = d_u->size[0] * d_u->size[1];
  d_u->size[0] = 1;
  d_u->size[1] = u.outputs.dec_out->size[1];
  emxEnsureCapacity_int16_T(sp, d_u, i23, (emlrtRTEInfo *)NULL);
  loop_ub = u.outputs.dec_out->size[0] * u.outputs.dec_out->size[1];
  for (i23 = 0; i23 < loop_ub; i23++) {
    d_u->data[i23] = u.outputs.dec_out->data[i23];
  }

  d_y = NULL;
  m6 = emlrtCreateNumericArray(2, *(int32_T (*)[2])d_u->size, mxINT16_CLASS,
    mxREAL);
  c_pData = (int16_T *)emlrtMxGetData(m6);
  i23 = 0;
  loop_ub = 0;
  emxFree_int16_T(&d_u);
  while (loop_ub < u.outputs.dec_out->size[1]) {
    c_pData[i23] = u.outputs.dec_out->data[loop_ub];
    i23++;
    loop_ub++;
  }

  emlrtAssign(&d_y, m6);
  emlrtAssign(&c_y, emlrtCreateFIR2013b(sp, eml_mx, b_eml_mx, "simulinkarray",
    d_y, true, false));
  emlrtSetFieldR2017b(b_y, 0, "dec_out", c_y, 0);
  emlrtSetFieldR2017b(y, 0, "outputs", b_y, 1);
  b_y = NULL;
  m7 = emlrtCreateDoubleScalar(u.iterCount);
  emlrtAssign(&b_y, m7);
  emlrtSetFieldR2017b(y, 0, "iterCount", b_y, 2);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
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
  const mxArray *m3;
  static const int32_T iv4[2] = { 0, 0 };

  static const int32_T iv5[2] = { 1, 7 };

  y = NULL;
  m3 = emlrtCreateNumericArray(2, iv4, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m3, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m3, iv5, 2);
  emlrtAssign(&y, m3);
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

void ldpcdec_fixpt_logger_api(int32_T nlhs, const mxArray *plhs[1])
{
  struct0_T loggedData;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInitStruct_struct0_T(&st, &loggedData, &k_emlrtRTEI, true);

  /* Invoke the target function */
  ldpcdec_fixpt_logger(&st, &loggedData);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(&st, loggedData);
  emxFreeStruct_struct0_T(&loggedData);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

void ldpcdec_wrapper_fixpt_api(const mxArray * const prhs[2], int32_T nlhs,
  const mxArray *plhs[1])
{
  real_T (*dec_out)[7];
  real_T (*r)[7];
  real_T iter;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  (void)nlhs;
  st.tls = emlrtRootTLSGlobal;
  dec_out = (real_T (*)[7])mxMalloc(sizeof(real_T [7]));

  /* Marshall function inputs */
  r = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "r");
  iter = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "iter");

  /* Invoke the target function */
  ldpcdec_wrapper_fixpt(&st, *r, iter, *dec_out);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*dec_out);
}

/* End of code generation (_coder_ldpcdec_wrapper_fixpt_hdl_mex_api.c) */
