/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * call_custom_exp_wrapper_fixpt_hdl_mex_initialize.c
 *
 * Code generation for function 'call_custom_exp_wrapper_fixpt_hdl_mex_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "call_custom_exp_fixpt_logger.h"
#include "call_custom_exp_wrapper_fixpt.h"
#include "call_custom_exp_wrapper_fixpt_hdl_mex_initialize.h"
#include "call_custom_exp_fixpt.h"
#include "_coder_call_custom_exp_wrapper_fixpt_hdl_mex_mex.h"
#include "call_custom_exp_wrapper_fixpt_hdl_mex_data.h"

/* Variable Definitions */
static const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
static emlrtMCInfo emlrtMCI = { -1,    /* lineNo */
  -1,                                  /* colNo */
  "",                                  /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void c_call_custom_exp_wrapper_fixpt(const emlrtStack *sp);
static const mxArray *fimath(const emlrtStack *sp, const char * b, const char
  * c, const char * d, const char * e, const char * f, const char * g, const
  char * h, const char * i, const char * j, const char * k, const char * l,
  const char * m, const char * n, real_T o, const char * q, real_T r, const char
  * s, real_T t, const char * u, real_T v, const char * w, real_T x, const char *
  y, real_T ab, const char * bb, real_T cb, const char * db, real_T eb, const
  char * fb, real_T gb, const char * hb, real_T ib, const char * jb, real_T kb,
  const char * lb, real_T mb, const char * nb, boolean_T ob, const char * pb,
  real_T qb, const char * rb, real_T sb, emlrtMCInfo *location);
static const mxArray *numerictype(const emlrtStack *sp, const char * b, real_T c,
  const char * d, real_T e, const char * f, real_T g, const char * h, real_T i,
  const char * j, real_T k, emlrtMCInfo *location);

/* Function Definitions */
static void c_call_custom_exp_wrapper_fixpt(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtAssignP(&b_eml_mx, NULL);
  emlrtAssignP(&eml_mx, NULL);
  st.site = NULL;
  iterCount_not_empty_init();
  st.site = NULL;
  emlrtAssignP(&b_eml_mx, numerictype(sp, "WordLength", 14.0, "FractionLength",
    9.0, "BinaryPoint", 9.0, "Slope", 0.001953125, "FixedExponent", -9.0,
    &emlrtMCI));
  emlrtAssignP(&eml_mx, fimath(sp, "RoundMode", "floor", "RoundingMethod",
    "Floor", "OverflowMode", "wrap", "OverflowAction", "Wrap", "ProductMode",
    "FullPrecision", "SumMode", "FullPrecision", "ProductWordLength", 32.0,
    "SumWordLength", 32.0, "MaxProductWordLength", 128.0, "MaxSumWordLength",
    128.0, "ProductFractionLength", 30.0, "ProductFixedExponent", -30.0,
    "SumFractionLength", 30.0, "SumFixedExponent", -30.0,
    "SumSlopeAdjustmentFactor", 1.0, "SumBias", 0.0,
    "ProductSlopeAdjustmentFactor", 1.0, "ProductBias", 0.0, "CastBeforeSum",
    true, "SumSlope", 9.3132257461547852E-10, "ProductSlope",
    9.3132257461547852E-10, &emlrtMCI));
  st.site = NULL;
  replacement_custom_fnc_init();
  st.site = NULL;
  c_call_custom_exp_fixpt_logger_();
  st.site = NULL;
  x_TB_logger_init(&st);
  st.site = NULL;
  y_TB_logger_init(&st);
}

static const mxArray *fimath(const emlrtStack *sp, const char * b, const char
  * c, const char * d, const char * e, const char * f, const char * g, const
  char * h, const char * i, const char * j, const char * k, const char * l,
  const char * m, const char * n, real_T o, const char * q, real_T r, const char
  * s, real_T t, const char * u, real_T v, const char * w, real_T x, const char *
  y, real_T ab, const char * bb, real_T cb, const char * db, real_T eb, const
  char * fb, real_T gb, const char * hb, real_T ib, const char * jb, real_T kb,
  const char * lb, real_T mb, const char * nb, boolean_T ob, const char * pb,
  real_T qb, const char * rb, real_T sb, emlrtMCInfo *location)
{
  const mxArray *pArrays[42];
  const mxArray *m5;
  pArrays[0] = emlrtCreateString(b);
  pArrays[1] = emlrtCreateString(c);
  pArrays[2] = emlrtCreateString(d);
  pArrays[3] = emlrtCreateString(e);
  pArrays[4] = emlrtCreateString(f);
  pArrays[5] = emlrtCreateString(g);
  pArrays[6] = emlrtCreateString(h);
  pArrays[7] = emlrtCreateString(i);
  pArrays[8] = emlrtCreateString(j);
  pArrays[9] = emlrtCreateString(k);
  pArrays[10] = emlrtCreateString(l);
  pArrays[11] = emlrtCreateString(m);
  pArrays[12] = emlrtCreateString(n);
  pArrays[13] = emlrtCreateDoubleScalar(o);
  pArrays[14] = emlrtCreateString(q);
  pArrays[15] = emlrtCreateDoubleScalar(r);
  pArrays[16] = emlrtCreateString(s);
  pArrays[17] = emlrtCreateDoubleScalar(t);
  pArrays[18] = emlrtCreateString(u);
  pArrays[19] = emlrtCreateDoubleScalar(v);
  pArrays[20] = emlrtCreateString(w);
  pArrays[21] = emlrtCreateDoubleScalar(x);
  pArrays[22] = emlrtCreateString(y);
  pArrays[23] = emlrtCreateDoubleScalar(ab);
  pArrays[24] = emlrtCreateString(bb);
  pArrays[25] = emlrtCreateDoubleScalar(cb);
  pArrays[26] = emlrtCreateString(db);
  pArrays[27] = emlrtCreateDoubleScalar(eb);
  pArrays[28] = emlrtCreateString(fb);
  pArrays[29] = emlrtCreateDoubleScalar(gb);
  pArrays[30] = emlrtCreateString(hb);
  pArrays[31] = emlrtCreateDoubleScalar(ib);
  pArrays[32] = emlrtCreateString(jb);
  pArrays[33] = emlrtCreateDoubleScalar(kb);
  pArrays[34] = emlrtCreateString(lb);
  pArrays[35] = emlrtCreateDoubleScalar(mb);
  pArrays[36] = emlrtCreateString(nb);
  pArrays[37] = emlrtCreateLogicalScalar(ob);
  pArrays[38] = emlrtCreateString(pb);
  pArrays[39] = emlrtCreateDoubleScalar(qb);
  pArrays[40] = emlrtCreateString(rb);
  pArrays[41] = emlrtCreateDoubleScalar(sb);
  return emlrtCallMATLABR2012b(sp, 1, &m5, 42, pArrays, "fimath", true, location);
}

static const mxArray *numerictype(const emlrtStack *sp, const char * b, real_T c,
  const char * d, real_T e, const char * f, real_T g, const char * h, real_T i,
  const char * j, real_T k, emlrtMCInfo *location)
{
  const mxArray *pArrays[10];
  const mxArray *m4;
  pArrays[0] = emlrtCreateString(b);
  pArrays[1] = emlrtCreateDoubleScalar(c);
  pArrays[2] = emlrtCreateString(d);
  pArrays[3] = emlrtCreateDoubleScalar(e);
  pArrays[4] = emlrtCreateString(f);
  pArrays[5] = emlrtCreateDoubleScalar(g);
  pArrays[6] = emlrtCreateString(h);
  pArrays[7] = emlrtCreateDoubleScalar(i);
  pArrays[8] = emlrtCreateString(j);
  pArrays[9] = emlrtCreateDoubleScalar(k);
  return emlrtCallMATLABR2012b(sp, 1, &m4, 10, pArrays, "numerictype", true,
    location);
}

void call_custom_exp_wrapper_fixpt_hdl_mex_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 3U, "ForceOff");
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2012b(&st, "Fixed_Point_Toolbox", 2);
  if (emlrtFirstTimeR2012b(emlrtRootTLSGlobal)) {
    c_call_custom_exp_wrapper_fixpt(&st);
  }
}

/* End of code generation (call_custom_exp_wrapper_fixpt_hdl_mex_initialize.c) */
