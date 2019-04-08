/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * call_custom_exp_fixpt_logger.c
 *
 * Code generation for function 'call_custom_exp_fixpt_logger'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "call_custom_exp_fixpt_logger.h"
#include "call_custom_exp_wrapper_fixpt.h"
#include "call_custom_exp_wrapper_fixpt_hdl_mex_emxutil.h"

/* Variable Definitions */
static real_T iterCount;
static boolean_T iterCount_not_empty;
static emxArray_int16_T *p;
static boolean_T p_not_empty;
static emxArray_int16_T *b_p;
static boolean_T b_p_not_empty;
static emlrtRSInfo e_emlrtRSI = { 13,  /* lineNo */
  "call_custom_exp_fixpt_logger",      /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/archive/codegen/call_custom_exp/fixpt/fxptmp/call_custom_exp_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 14,  /* lineNo */
  "call_custom_exp_fixpt_logger",      /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/archive/codegen/call_custom_exp/fixpt/fxptmp/call_custom_exp_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 25,  /* lineNo */
  "call_custom_exp_fixpt_logger",      /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/archive/codegen/call_custom_exp/fixpt/fxptmp/call_custom_exp_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 26,  /* lineNo */
  "call_custom_exp_fixpt_logger",      /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/archive/codegen/call_custom_exp/fixpt/fxptmp/call_custom_exp_fixpt_logger.m"/* pathName */
};

static emlrtMCInfo b_emlrtMCI = { 18,  /* lineNo */
  20,                                  /* colNo */
  "call_custom_exp_fixpt_logger",      /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/archive/codegen/call_custom_exp/fixpt/fxptmp/call_custom_exp_fixpt_logger.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 18,  /* lineNo */
  13,                                  /* colNo */
  "call_custom_exp_fixpt_logger",      /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/archive/codegen/call_custom_exp/fixpt/fxptmp/call_custom_exp_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 32,  /* lineNo */
  16,                                  /* colNo */
  "call_custom_exp_fixpt_logger",      /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/archive/codegen/call_custom_exp/fixpt/fxptmp/call_custom_exp_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 51,/* lineNo */
  16,                                  /* colNo */
  "call_custom_exp_fixpt_logger",      /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/archive/codegen/call_custom_exp/fixpt/fxptmp/call_custom_exp_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 30,/* lineNo */
  16,                                  /* colNo */
  "call_custom_exp_fixpt_logger",      /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/archive/codegen/call_custom_exp/fixpt/fxptmp/call_custom_exp_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 49,/* lineNo */
  16,                                  /* colNo */
  "call_custom_exp_fixpt_logger",      /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/archive/codegen/call_custom_exp/fixpt/fxptmp/call_custom_exp_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 45,/* lineNo */
  9,                                   /* colNo */
  "call_custom_exp_fixpt_logger",      /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/archive/codegen/call_custom_exp/fixpt/fxptmp/call_custom_exp_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 64,/* lineNo */
  9,                                   /* colNo */
  "call_custom_exp_fixpt_logger",      /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/archive/codegen/call_custom_exp/fixpt/fxptmp/call_custom_exp_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 24,/* lineNo */
  9,                                   /* colNo */
  "call_custom_exp_fixpt_logger",      /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/archive/codegen/call_custom_exp/fixpt/fxptmp/call_custom_exp_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 44,/* lineNo */
  9,                                   /* colNo */
  "call_custom_exp_fixpt_logger",      /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/archive/codegen/call_custom_exp/fixpt/fxptmp/call_custom_exp_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 63,/* lineNo */
  9,                                   /* colNo */
  "call_custom_exp_fixpt_logger",      /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/archive/codegen/call_custom_exp/fixpt/fxptmp/call_custom_exp_fixpt_logger.m"/* pName */
};

static emlrtRSInfo i_emlrtRSI = { 18,  /* lineNo */
  "call_custom_exp_fixpt_logger",      /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/archive/codegen/call_custom_exp/fixpt/fxptmp/call_custom_exp_fixpt_logger.m"/* pathName */
};

/* Function Declarations */
static const mxArray *MException(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void b_x_TB_logger(const emlrtStack *sp, emxArray_int16_T *out);
static void b_y_TB_logger(const emlrtStack *sp, emxArray_int16_T *out);
static void throw(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);
static void x_TB_logger(const emlrtStack *sp, int16_T v);
static void y_TB_logger(const emlrtStack *sp, int16_T v);

/* Function Definitions */
static const mxArray *MException(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m6;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m6, 2, pArrays, "MException", true,
    location);
}

static void b_x_TB_logger(const emlrtStack *sp, emxArray_int16_T *out)
{
  int32_T i13;
  int32_T loop_ub;
  if (!p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &i_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i13 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = p->size[1];
  emxEnsureCapacity_int16_T(sp, out, i13, &e_emlrtRTEI);
  loop_ub = p->size[0] * p->size[1];
  for (i13 = 0; i13 < loop_ub; i13++) {
    out->data[i13] = p->data[i13];
  }

  p->size[0] = 1;
  p->size[1] = 0;
  p_not_empty = false;
}

static void b_y_TB_logger(const emlrtStack *sp, emxArray_int16_T *out)
{
  int32_T i14;
  int32_T loop_ub;
  if (!b_p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &j_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i14 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = b_p->size[1];
  emxEnsureCapacity_int16_T(sp, out, i14, &f_emlrtRTEI);
  loop_ub = b_p->size[0] * b_p->size[1];
  for (i14 = 0; i14 < loop_ub; i14++) {
    out->data[i14] = b_p->data[i14];
  }

  b_p->size[0] = 1;
  b_p->size[1] = 0;
  b_p_not_empty = false;
}

static void throw(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "throw", true, location);
}

static void x_TB_logger(const emlrtStack *sp, int16_T v)
{
  int32_T i9;
  int32_T i10;
  if (!p_not_empty) {
    p->size[0] = 1;
    p->size[1] = 0;
    p_not_empty = false;
  }

  i9 = p->size[1];
  i10 = p->size[0] * p->size[1];
  p->size[1] = i9 + 1;
  emxEnsureCapacity_int16_T(sp, p, i10, &c_emlrtRTEI);
  p->data[i9] = v;
  p_not_empty = true;
}

static void y_TB_logger(const emlrtStack *sp, int16_T v)
{
  int32_T i11;
  int32_T i12;
  if (!b_p_not_empty) {
    b_p->size[0] = 1;
    b_p->size[1] = 0;
    b_p_not_empty = false;
  }

  i11 = b_p->size[1];
  i12 = b_p->size[0] * b_p->size[1];
  b_p->size[1] = i11 + 1;
  emxEnsureCapacity_int16_T(sp, b_p, i12, &d_emlrtRTEI);
  b_p->data[i11] = v;
  b_p_not_empty = true;
}

void b_call_custom_exp_fixpt_logger(const emlrtStack *sp, int16_T varargin_1,
  int16_T varargin_2)
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 30 };

  static const char_T u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'X', 'P', 'C',
    'O', 'N', 'V', ':', 'M', 'A', 'T', 'L', 'A', 'B', 'S', 'i', 'm', 'B', 'a',
    'i', 'l', 'O', 'u', 't' };

  const mxArray *b_y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 34 };

  static const char_T b_u[34] = { 'R', 'e', 't', 'u', 'r', 'n', ' ', 'e', 'a',
    'r', 'l', 'y', ' ', 'f', 'o', 'r', ' ', 'i', 'n', 'p', 'u', 't', ' ', 'c',
    'o', 'm', 'p', 'u', 't', 'a', 't', 'i', 'o', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &e_emlrtRSI;
  x_TB_logger(&st, varargin_1);
  st.site = &f_emlrtRSI;
  y_TB_logger(&st, varargin_2);
  iterCount++;
  if (iterCount >= rtInf) {
    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    emlrtInitCharArrayR2013a(sp, 30, m0, &u[0]);
    emlrtAssign(&y, m0);
    b_y = NULL;
    m1 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 34, m1, &b_u[0]);
    emlrtAssign(&b_y, m1);
    st.site = &i_emlrtRSI;
    throw(&st, MException(&st, y, b_y, &b_emlrtMCI), &c_emlrtMCI);
  }
}

void c_call_custom_exp_fixpt_logger_(void)
{
  iterCount = 0.0;
  iterCount_not_empty = true;
}

void call_custom_exp_fixpt_logger(const emlrtStack *sp, struct0_T *loggedData)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!iterCount_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &h_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  st.site = &g_emlrtRSI;
  b_x_TB_logger(&st, loggedData->inputs.x);
  st.site = &h_emlrtRSI;
  b_y_TB_logger(&st, loggedData->outputs.y);
  loggedData->iterCount = iterCount;
}

void iterCount_not_empty_init(void)
{
  iterCount_not_empty = false;
}

void x_TB_logger_free(void)
{
  emxFree_int16_T(&p);
}

void x_TB_logger_init(const emlrtStack *sp)
{
  emxInit_int16_T(sp, &p, 2, &emlrtRTEI, false);
  p_not_empty = false;
}

void y_TB_logger_free(void)
{
  emxFree_int16_T(&b_p);
}

void y_TB_logger_init(const emlrtStack *sp)
{
  emxInit_int16_T(sp, &b_p, 2, &b_emlrtRTEI, false);
  b_p_not_empty = false;
}

/* End of code generation (call_custom_exp_fixpt_logger.c) */
