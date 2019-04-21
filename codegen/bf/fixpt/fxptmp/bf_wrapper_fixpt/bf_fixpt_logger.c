/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * bf_fixpt_logger.c
 *
 * Code generation for function 'bf_fixpt_logger'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "bf_fixpt_logger.h"
#include "bf_wrapper_fixpt.h"
#include "bf_wrapper_fixpt_hdl_mex_emxutil.h"

/* Variable Definitions */
static real_T iterCount;
static boolean_T iterCount_not_empty;
static emxArray_uint8_T *p;
static boolean_T p_not_empty;
static emxArray_uint8_T *b_p;
static boolean_T b_p_not_empty;
static emxArray_uint8_T *c_p;
static boolean_T c_p_not_empty;
static emlrtRSInfo h_emlrtRSI = { 13,  /* lineNo */
  "bf_fixpt_logger",                   /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/fxptmp/bf_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 14,  /* lineNo */
  "bf_fixpt_logger",                   /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/fxptmp/bf_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 15,  /* lineNo */
  "bf_fixpt_logger",                   /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/fxptmp/bf_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 26,  /* lineNo */
  "bf_fixpt_logger",                   /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/fxptmp/bf_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 27,  /* lineNo */
  "bf_fixpt_logger",                   /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/fxptmp/bf_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 28,  /* lineNo */
  "bf_fixpt_logger",                   /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/fxptmp/bf_fixpt_logger.m"/* pathName */
};

static emlrtMCInfo b_emlrtMCI = { 19,  /* lineNo */
  20,                                  /* colNo */
  "bf_fixpt_logger",                   /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/fxptmp/bf_fixpt_logger.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 19,  /* lineNo */
  13,                                  /* colNo */
  "bf_fixpt_logger",                   /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/fxptmp/bf_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo emlrtRTEI = { 34,  /* lineNo */
  16,                                  /* colNo */
  "bf_fixpt_logger",                   /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/fxptmp/bf_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 53,/* lineNo */
  16,                                  /* colNo */
  "bf_fixpt_logger",                   /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/fxptmp/bf_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 72,/* lineNo */
  16,                                  /* colNo */
  "bf_fixpt_logger",                   /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/fxptmp/bf_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 32,/* lineNo */
  16,                                  /* colNo */
  "bf_fixpt_logger",                   /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/fxptmp/bf_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 51,/* lineNo */
  16,                                  /* colNo */
  "bf_fixpt_logger",                   /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/fxptmp/bf_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 70,/* lineNo */
  16,                                  /* colNo */
  "bf_fixpt_logger",                   /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/fxptmp/bf_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 47,/* lineNo */
  9,                                   /* colNo */
  "bf_fixpt_logger",                   /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/fxptmp/bf_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 66,/* lineNo */
  9,                                   /* colNo */
  "bf_fixpt_logger",                   /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/fxptmp/bf_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 85,/* lineNo */
  9,                                   /* colNo */
  "bf_fixpt_logger",                   /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/fxptmp/bf_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 25,/* lineNo */
  9,                                   /* colNo */
  "bf_fixpt_logger",                   /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/fxptmp/bf_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 46,/* lineNo */
  9,                                   /* colNo */
  "bf_fixpt_logger",                   /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/fxptmp/bf_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 65,/* lineNo */
  9,                                   /* colNo */
  "bf_fixpt_logger",                   /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/fxptmp/bf_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 84,/* lineNo */
  9,                                   /* colNo */
  "bf_fixpt_logger",                   /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/fxptmp/bf_fixpt_logger.m"/* pName */
};

static emlrtRSInfo n_emlrtRSI = { 19,  /* lineNo */
  "bf_fixpt_logger",                   /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/bf/fixpt/fxptmp/bf_fixpt_logger.m"/* pathName */
};

/* Function Declarations */
static const mxArray *MException(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void b_iter_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out);
static void b_out_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out);
static void b_r_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out);
static void iter_TB_logger(const emlrtStack *sp, uint8_T v);
static void out_TB_logger(const emlrtStack *sp, const uint8_T v[7]);
static void r_TB_logger(const emlrtStack *sp, const uint8_T v[7]);
static void throw(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *MException(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m7;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m7, 2, pArrays, "MException", true,
    location);
}

static void b_iter_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out)
{
  int32_T i8;
  int32_T loop_ub;
  if (!b_p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &m_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i8 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = b_p->size[1];
  emxEnsureCapacity_uint8_T(sp, out, i8, &h_emlrtRTEI);
  loop_ub = b_p->size[0] * b_p->size[1];
  for (i8 = 0; i8 < loop_ub; i8++) {
    out->data[i8] = b_p->data[i8];
  }

  b_p->size[0] = 1;
  b_p->size[1] = 0;
  b_p_not_empty = false;
}

static void b_out_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out)
{
  int32_T i9;
  int32_T loop_ub;
  if (!c_p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &n_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i9 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = c_p->size[1];
  emxEnsureCapacity_uint8_T(sp, out, i9, &i_emlrtRTEI);
  loop_ub = c_p->size[0] * c_p->size[1];
  for (i9 = 0; i9 < loop_ub; i9++) {
    out->data[i9] = c_p->data[i9];
  }

  c_p->size[0] = 1;
  c_p->size[1] = 0;
  c_p_not_empty = false;
}

static void b_r_TB_logger(const emlrtStack *sp, emxArray_uint8_T *out)
{
  int32_T i7;
  int32_T loop_ub;
  if (!p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &l_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i7 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = p->size[1];
  emxEnsureCapacity_uint8_T(sp, out, i7, &g_emlrtRTEI);
  loop_ub = p->size[0] * p->size[1];
  for (i7 = 0; i7 < loop_ub; i7++) {
    out->data[i7] = p->data[i7];
  }

  p->size[0] = 1;
  p->size[1] = 0;
  p_not_empty = false;
}

static void iter_TB_logger(const emlrtStack *sp, uint8_T v)
{
  int32_T i3;
  int32_T i4;
  if (!b_p_not_empty) {
    b_p->size[0] = 1;
    b_p->size[1] = 0;
    b_p_not_empty = false;
  }

  i3 = b_p->size[1];
  i4 = b_p->size[0] * b_p->size[1];
  b_p->size[1] = i3 + 1;
  emxEnsureCapacity_uint8_T(sp, b_p, i4, &e_emlrtRTEI);
  b_p->data[i3] = v;
  b_p_not_empty = true;
}

static void out_TB_logger(const emlrtStack *sp, const uint8_T v[7])
{
  int32_T i5;
  int32_T i6;
  if (!c_p_not_empty) {
    c_p->size[0] = 1;
    c_p->size[1] = 0;
    c_p_not_empty = false;
  }

  i5 = c_p->size[1];
  i6 = c_p->size[0] * c_p->size[1];
  c_p->size[1] = i5 + 7;
  emxEnsureCapacity_uint8_T(sp, c_p, i6, &f_emlrtRTEI);
  for (i6 = 0; i6 < 7; i6++) {
    c_p->data[i5 + i6] = v[i6];
  }

  c_p_not_empty = true;
}

static void r_TB_logger(const emlrtStack *sp, const uint8_T v[7])
{
  int32_T i1;
  int32_T i2;
  if (!p_not_empty) {
    p->size[0] = 1;
    p->size[1] = 0;
    p_not_empty = false;
  }

  i1 = p->size[1];
  i2 = p->size[0] * p->size[1];
  p->size[1] = i1 + 7;
  emxEnsureCapacity_uint8_T(sp, p, i2, &d_emlrtRTEI);
  for (i2 = 0; i2 < 7; i2++) {
    p->data[i1 + i2] = v[i2];
  }

  p_not_empty = true;
}

static void throw(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "throw", true, location);
}

void b_bf_fixpt_logger(const emlrtStack *sp, const uint8_T varargin_1[7],
  uint8_T varargin_2, const uint8_T varargin_3[7])
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
  st.site = &h_emlrtRSI;
  r_TB_logger(&st, varargin_1);
  st.site = &i_emlrtRSI;
  iter_TB_logger(&st, varargin_2);
  st.site = &j_emlrtRSI;
  out_TB_logger(&st, varargin_3);
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
    st.site = &n_emlrtRSI;
    throw(&st, MException(&st, y, b_y, &b_emlrtMCI), &c_emlrtMCI);
  }
}

void bf_fixpt_logger(const emlrtStack *sp, struct0_T *loggedData)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!iterCount_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &k_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  st.site = &k_emlrtRSI;
  b_r_TB_logger(&st, loggedData->inputs.r);
  st.site = &l_emlrtRSI;
  b_iter_TB_logger(&st, loggedData->inputs.iter);
  st.site = &m_emlrtRSI;
  b_out_TB_logger(&st, loggedData->outputs.out);
  loggedData->iterCount = iterCount;
}

void bf_fixpt_logger_init(void)
{
  iterCount = 0.0;
  iterCount_not_empty = true;
}

void iterCount_not_empty_init(void)
{
  iterCount_not_empty = false;
}

void iter_TB_logger_free(void)
{
  emxFree_uint8_T(&b_p);
}

void iter_TB_logger_init(const emlrtStack *sp)
{
  emxInit_uint8_T(sp, &b_p, 2, &b_emlrtRTEI, false);
  b_p_not_empty = false;
}

void out_TB_logger_free(void)
{
  emxFree_uint8_T(&c_p);
}

void out_TB_logger_init(const emlrtStack *sp)
{
  emxInit_uint8_T(sp, &c_p, 2, &c_emlrtRTEI, false);
  c_p_not_empty = false;
}

void r_TB_logger_free(void)
{
  emxFree_uint8_T(&p);
}

void r_TB_logger_init(const emlrtStack *sp)
{
  emxInit_uint8_T(sp, &p, 2, &emlrtRTEI, false);
  p_not_empty = false;
}

/* End of code generation (bf_fixpt_logger.c) */
