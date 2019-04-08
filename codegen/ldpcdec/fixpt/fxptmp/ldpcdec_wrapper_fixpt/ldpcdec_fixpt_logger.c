/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ldpcdec_fixpt_logger.c
 *
 * Code generation for function 'ldpcdec_fixpt_logger'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ldpcdec_fixpt_logger.h"
#include "ldpcdec_wrapper_fixpt.h"
#include "ldpcdec_wrapper_fixpt_hdl_mex_emxutil.h"

/* Variable Definitions */
static real_T iterCount;
static boolean_T iterCount_not_empty;
static emxArray_int8_T *p;
static boolean_T p_not_empty;
static emxArray_uint16_T *b_p;
static boolean_T b_p_not_empty;
static emxArray_int16_T *c_p;
static boolean_T c_p_not_empty;
static emlrtRSInfo t_emlrtRSI = { 13,  /* lineNo */
  "ldpcdec_fixpt_logger",              /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/fxptmp/ldpcdec_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 14,  /* lineNo */
  "ldpcdec_fixpt_logger",              /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/fxptmp/ldpcdec_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 15,  /* lineNo */
  "ldpcdec_fixpt_logger",              /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/fxptmp/ldpcdec_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 26,  /* lineNo */
  "ldpcdec_fixpt_logger",              /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/fxptmp/ldpcdec_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 27,  /* lineNo */
  "ldpcdec_fixpt_logger",              /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/fxptmp/ldpcdec_fixpt_logger.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 28,  /* lineNo */
  "ldpcdec_fixpt_logger",              /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/fxptmp/ldpcdec_fixpt_logger.m"/* pathName */
};

static emlrtMCInfo b_emlrtMCI = { 19,  /* lineNo */
  20,                                  /* colNo */
  "ldpcdec_fixpt_logger",              /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/fxptmp/ldpcdec_fixpt_logger.m"/* pName */
};

static emlrtMCInfo c_emlrtMCI = { 19,  /* lineNo */
  13,                                  /* colNo */
  "ldpcdec_fixpt_logger",              /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/fxptmp/ldpcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo b_emlrtRTEI = { 34,/* lineNo */
  16,                                  /* colNo */
  "ldpcdec_fixpt_logger",              /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/fxptmp/ldpcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 53,/* lineNo */
  16,                                  /* colNo */
  "ldpcdec_fixpt_logger",              /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/fxptmp/ldpcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo d_emlrtRTEI = { 72,/* lineNo */
  16,                                  /* colNo */
  "ldpcdec_fixpt_logger",              /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/fxptmp/ldpcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 32,/* lineNo */
  16,                                  /* colNo */
  "ldpcdec_fixpt_logger",              /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/fxptmp/ldpcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 51,/* lineNo */
  16,                                  /* colNo */
  "ldpcdec_fixpt_logger",              /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/fxptmp/ldpcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 70,/* lineNo */
  16,                                  /* colNo */
  "ldpcdec_fixpt_logger",              /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/fxptmp/ldpcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo h_emlrtRTEI = { 47,/* lineNo */
  9,                                   /* colNo */
  "ldpcdec_fixpt_logger",              /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/fxptmp/ldpcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo i_emlrtRTEI = { 66,/* lineNo */
  9,                                   /* colNo */
  "ldpcdec_fixpt_logger",              /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/fxptmp/ldpcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo j_emlrtRTEI = { 85,/* lineNo */
  9,                                   /* colNo */
  "ldpcdec_fixpt_logger",              /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/fxptmp/ldpcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 25,/* lineNo */
  9,                                   /* colNo */
  "ldpcdec_fixpt_logger",              /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/fxptmp/ldpcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 46,/* lineNo */
  9,                                   /* colNo */
  "ldpcdec_fixpt_logger",              /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/fxptmp/ldpcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 65,/* lineNo */
  9,                                   /* colNo */
  "ldpcdec_fixpt_logger",              /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/fxptmp/ldpcdec_fixpt_logger.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 84,/* lineNo */
  9,                                   /* colNo */
  "ldpcdec_fixpt_logger",              /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/fxptmp/ldpcdec_fixpt_logger.m"/* pName */
};

static emlrtRSInfo ab_emlrtRSI = { 19, /* lineNo */
  "ldpcdec_fixpt_logger",              /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/fxptmp/ldpcdec_fixpt_logger.m"/* pathName */
};

/* Function Declarations */
static const mxArray *MException(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void b_dec_out_TB_logger(const emlrtStack *sp, emxArray_int16_T *out);
static void b_iter_TB_logger(const emlrtStack *sp, emxArray_uint16_T *out);
static void b_r_TB_logger(const emlrtStack *sp, emxArray_int8_T *out);
static void dec_out_TB_logger(const emlrtStack *sp, const int16_T v[7]);
static void iter_TB_logger(const emlrtStack *sp, uint16_T v);
static void r_TB_logger(const emlrtStack *sp, const int8_T v[7]);
static void throw(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *MException(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m11;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m11, 2, pArrays, "MException", true,
    location);
}

static void b_dec_out_TB_logger(const emlrtStack *sp, emxArray_int16_T *out)
{
  int32_T i22;
  int32_T loop_ub;
  if (!c_p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &o_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i22 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = c_p->size[1];
  emxEnsureCapacity_int16_T(sp, out, i22, &j_emlrtRTEI);
  loop_ub = c_p->size[0] * c_p->size[1];
  for (i22 = 0; i22 < loop_ub; i22++) {
    out->data[i22] = c_p->data[i22];
  }

  c_p->size[0] = 1;
  c_p->size[1] = 0;
  c_p_not_empty = false;
}

static void b_iter_TB_logger(const emlrtStack *sp, emxArray_uint16_T *out)
{
  int32_T i21;
  int32_T loop_ub;
  if (!b_p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &n_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i21 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = b_p->size[1];
  emxEnsureCapacity_uint16_T(sp, out, i21, &i_emlrtRTEI);
  loop_ub = b_p->size[0] * b_p->size[1];
  for (i21 = 0; i21 < loop_ub; i21++) {
    out->data[i21] = b_p->data[i21];
  }

  b_p->size[0] = 1;
  b_p->size[1] = 0;
  b_p_not_empty = false;
}

static void b_r_TB_logger(const emlrtStack *sp, emxArray_int8_T *out)
{
  int32_T i20;
  int32_T loop_ub;
  if (!p_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &m_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  i20 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = p->size[1];
  emxEnsureCapacity_int8_T(sp, out, i20, &h_emlrtRTEI);
  loop_ub = p->size[0] * p->size[1];
  for (i20 = 0; i20 < loop_ub; i20++) {
    out->data[i20] = p->data[i20];
  }

  p->size[0] = 1;
  p->size[1] = 0;
  p_not_empty = false;
}

static void dec_out_TB_logger(const emlrtStack *sp, const int16_T v[7])
{
  int32_T i18;
  int32_T i19;
  if (!c_p_not_empty) {
    c_p->size[0] = 1;
    c_p->size[1] = 0;
    c_p_not_empty = false;
  }

  i18 = c_p->size[1];
  i19 = c_p->size[0] * c_p->size[1];
  c_p->size[1] = i18 + 7;
  emxEnsureCapacity_int16_T(sp, c_p, i19, &g_emlrtRTEI);
  for (i19 = 0; i19 < 7; i19++) {
    c_p->data[i18 + i19] = v[i19];
  }

  c_p_not_empty = true;
}

static void iter_TB_logger(const emlrtStack *sp, uint16_T v)
{
  int32_T i16;
  int32_T i17;
  if (!b_p_not_empty) {
    b_p->size[0] = 1;
    b_p->size[1] = 0;
    b_p_not_empty = false;
  }

  i16 = b_p->size[1];
  i17 = b_p->size[0] * b_p->size[1];
  b_p->size[1] = i16 + 1;
  emxEnsureCapacity_uint16_T(sp, b_p, i17, &f_emlrtRTEI);
  b_p->data[i16] = v;
  b_p_not_empty = true;
}

static void r_TB_logger(const emlrtStack *sp, const int8_T v[7])
{
  int32_T i14;
  int32_T i15;
  if (!p_not_empty) {
    p->size[0] = 1;
    p->size[1] = 0;
    p_not_empty = false;
  }

  i14 = p->size[1];
  i15 = p->size[0] * p->size[1];
  p->size[1] = i14 + 7;
  emxEnsureCapacity_int8_T(sp, p, i15, &e_emlrtRTEI);
  for (i15 = 0; i15 < 7; i15++) {
    p->data[i14 + i15] = v[i15];
  }

  p_not_empty = true;
}

static void throw(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "throw", true, location);
}

void b_ldpcdec_fixpt_logger(const emlrtStack *sp, const int8_T varargin_1[7],
  uint16_T varargin_2, const int16_T varargin_3[7])
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv1[2] = { 1, 30 };

  static const char_T u[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'X', 'P', 'C',
    'O', 'N', 'V', ':', 'M', 'A', 'T', 'L', 'A', 'B', 'S', 'i', 'm', 'B', 'a',
    'i', 'l', 'O', 'u', 't' };

  const mxArray *b_y;
  const mxArray *m2;
  static const int32_T iv2[2] = { 1, 34 };

  static const char_T b_u[34] = { 'R', 'e', 't', 'u', 'r', 'n', ' ', 'e', 'a',
    'r', 'l', 'y', ' ', 'f', 'o', 'r', ' ', 'i', 'n', 'p', 'u', 't', ' ', 'c',
    'o', 'm', 'p', 'u', 't', 'a', 't', 'i', 'o', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &t_emlrtRSI;
  r_TB_logger(&st, varargin_1);
  st.site = &u_emlrtRSI;
  iter_TB_logger(&st, varargin_2);
  st.site = &v_emlrtRSI;
  dec_out_TB_logger(&st, varargin_3);
  iterCount++;
  if (iterCount >= rtInf) {
    y = NULL;
    m1 = emlrtCreateCharArray(2, iv1);
    emlrtInitCharArrayR2013a(sp, 30, m1, &u[0]);
    emlrtAssign(&y, m1);
    b_y = NULL;
    m2 = emlrtCreateCharArray(2, iv2);
    emlrtInitCharArrayR2013a(sp, 34, m2, &b_u[0]);
    emlrtAssign(&b_y, m2);
    st.site = &ab_emlrtRSI;
    throw(&st, MException(&st, y, b_y, &b_emlrtMCI), &c_emlrtMCI);
  }
}

void dec_out_TB_logger_free(void)
{
  emxFree_int16_T(&c_p);
}

void dec_out_TB_logger_init(const emlrtStack *sp)
{
  emxInit_int16_T(sp, &c_p, 2, &d_emlrtRTEI, false);
  c_p_not_empty = false;
}

void iterCount_not_empty_init(void)
{
  iterCount_not_empty = false;
}

void iter_TB_logger_free(void)
{
  emxFree_uint16_T(&b_p);
}

void iter_TB_logger_init(const emlrtStack *sp)
{
  emxInit_uint16_T(sp, &b_p, 2, &c_emlrtRTEI, false);
  b_p_not_empty = false;
}

void ldpcdec_fixpt_logger(const emlrtStack *sp, struct0_T *loggedData)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!iterCount_not_empty) {
    emlrtErrorWithMessageIdR2018a(sp, &l_emlrtRTEI,
      "Coder:builtins:AssertionFailed", "Coder:builtins:AssertionFailed", 0);
  }

  st.site = &w_emlrtRSI;
  b_r_TB_logger(&st, loggedData->inputs.r);
  st.site = &x_emlrtRSI;
  b_iter_TB_logger(&st, loggedData->inputs.iter);
  st.site = &y_emlrtRSI;
  b_dec_out_TB_logger(&st, loggedData->outputs.dec_out);
  loggedData->iterCount = iterCount;
}

void ldpcdec_fixpt_logger_init(void)
{
  iterCount = 0.0;
  iterCount_not_empty = true;
}

void r_TB_logger_free(void)
{
  emxFree_int8_T(&p);
}

void r_TB_logger_init(const emlrtStack *sp)
{
  emxInit_int8_T(sp, &p, 2, &b_emlrtRTEI, false);
  p_not_empty = false;
}

/* End of code generation (ldpcdec_fixpt_logger.c) */
