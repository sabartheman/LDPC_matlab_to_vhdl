/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ldpcdec_fixpt.c
 *
 * Code generation for function 'ldpcdec_fixpt'
 *
 */

/* Include files */
#include <string.h>
#include "rt_nonfinite.h"
#include "ldpcdec_fixpt_logger.h"
#include "ldpcdec_wrapper_fixpt.h"
#include "ldpcdec_fixpt.h"
#include "ldpcdec_wrapper_fixpt_hdl_mex_data.h"

/* Variable Definitions */
static uint16_T LUT[8192];
static int16_T b_LUT[8192];
static emlrtRTEInfo emlrtRTEI = { 144, /* lineNo */
  1,                                   /* colNo */
  "ldpcdec_fixpt",                     /* fName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/ldpcdec_fixpt.m"/* pName */
};

static emlrtRSInfo b_emlrtRSI = { 59,  /* lineNo */
  "ldpcdec_fixpt",                     /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/ldpcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 71,  /* lineNo */
  "ldpcdec_fixpt",                     /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/ldpcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 88,  /* lineNo */
  "ldpcdec_fixpt",                     /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/ldpcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 114, /* lineNo */
  "ldpcdec_fixpt",                     /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/ldpcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 125, /* lineNo */
  "ldpcdec_fixpt",                     /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/ldpcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 127, /* lineNo */
  "ldpcdec_fixpt",                     /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/ldpcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 131, /* lineNo */
  "ldpcdec_fixpt",                     /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/ldpcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 138, /* lineNo */
  "ldpcdec_fixpt",                     /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/ldpcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 1,   /* lineNo */
  "ldpcdec_fixpt",                     /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/ldpcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo k_emlrtRSI = { 151, /* lineNo */
  "ldpcdec_fixpt",                     /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/ldpcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo l_emlrtRSI = { 196, /* lineNo */
  "ldpcdec_fixpt",                     /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/ldpcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo m_emlrtRSI = { 183, /* lineNo */
  "divide",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/fixedpoint/divide.m"/* pathName */
};

static emlrtRSInfo q_emlrtRSI = { 209, /* lineNo */
  "ldpcdec_fixpt",                     /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/ldpcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 157, /* lineNo */
  "ldpcdec_fixpt",                     /* fcnName */
  "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcdec/fixpt/ldpcdec_fixpt.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 5,   /* lineNo */
  "LogInputsAndOutputs.cpp:51",        /* fcnName */
  "src/LogInputsAndOutputs.cpp:51"     /* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 281,/* lineNo */
  "divide",                            /* fcnName */
  "/usr/local/MATLAB/R2018b/toolbox/eml/lib/fixedpoint/divide.m"/* pathName */
};

/* Function Declarations */
static int64_T MultiWord2sLong(const uint64_T u[]);
static uint64_T _u64d_div__(const emlrtStack *sp, uint64_T b, uint64_T c);
static int32_T div_s28s64(const emlrtStack *sp, int64_T numerator, int64_T
  denominator);
static int64_T div_s42s64(const emlrtStack *sp, int64_T numerator, int64_T
  denominator);
static void sMultiWordMul(const uint64_T u1[], int32_T n1, const uint64_T u2[],
  int32_T n2, uint64_T y[], int32_T n);
static void sMultiWordShr(const uint64_T u1[], int32_T n1, uint32_T n2, uint64_T
  y[], int32_T n);

/* Function Definitions */
static int64_T MultiWord2sLong(const uint64_T u[])
{
  return (int64_T)u[0];
}

static uint64_T _u64d_div__(const emlrtStack *sp, uint64_T b, uint64_T c)
{
  if (c == 0UL) {
    emlrtDivisionByZeroErrorR2012b(NULL, sp);
  }

  return b / c;
}

static int32_T div_s28s64(const emlrtStack *sp, int64_T numerator, int64_T
  denominator)
{
  int32_T quotient;
  uint64_T b_numerator;
  uint64_T b_denominator;
  uint64_T tempAbsQuotient;
  if (denominator == 0L) {
    emlrtDivisionByZeroErrorR2012b(NULL, sp);
  } else {
    if (numerator < 0L) {
      b_numerator = ~(uint64_T)numerator + 1UL;
    } else {
      b_numerator = (uint64_T)numerator;
    }

    if (denominator < 0L) {
      b_denominator = ~(uint64_T)denominator + 1UL;
    } else {
      b_denominator = (uint64_T)denominator;
    }

    tempAbsQuotient = b_numerator / b_denominator;
    if ((numerator < 0L) != (denominator < 0L)) {
      quotient = (int32_T)-(int64_T)tempAbsQuotient;
    } else {
      quotient = (int32_T)tempAbsQuotient;
    }

    if ((quotient & 134217728) != 0) {
      quotient |= -134217728;
    } else {
      quotient &= 134217727;
    }
  }

  return quotient;
}

static int64_T div_s42s64(const emlrtStack *sp, int64_T numerator, int64_T
  denominator)
{
  int64_T quotient;
  uint64_T b_numerator;
  uint64_T b_denominator;
  uint64_T tempAbsQuotient;
  if (denominator == 0L) {
    emlrtDivisionByZeroErrorR2012b(NULL, sp);
  } else {
    if (numerator < 0L) {
      b_numerator = ~(uint64_T)numerator + 1UL;
    } else {
      b_numerator = (uint64_T)numerator;
    }

    if (denominator < 0L) {
      b_denominator = ~(uint64_T)denominator + 1UL;
    } else {
      b_denominator = (uint64_T)denominator;
    }

    tempAbsQuotient = b_numerator / b_denominator;
    if ((numerator < 0L) != (denominator < 0L)) {
      quotient = -(int64_T)tempAbsQuotient;
    } else {
      quotient = (int64_T)tempAbsQuotient;
    }

    if ((quotient & 2199023255552L) != 0L) {
      quotient |= -2199023255552L;
    } else {
      quotient &= 2199023255551L;
    }
  }

  return quotient;
}

static void sMultiWordMul(const uint64_T u1[], int32_T n1, const uint64_T u2[],
  int32_T n2, uint64_T y[], int32_T n)
{
  boolean_T isNegative1;
  boolean_T isNegative2;
  uint64_T cb1;
  int32_T k;
  int32_T i;
  uint64_T cb;
  uint64_T u1i;
  uint64_T a1;
  uint64_T yk;
  uint64_T a0;
  uint64_T cb2;
  int32_T nj;
  int32_T j;
  uint64_T b1;
  uint64_T w10;
  uint64_T w01;
  isNegative1 = ((u1[n1 - 1] & 9223372036854775808UL) != 0UL);
  isNegative2 = ((u2[n2 - 1] & 9223372036854775808UL) != 0UL);
  cb1 = 1UL;

  /* Initialize output to zero */
  for (k = 0; k < n; k++) {
    y[k] = 0UL;
  }

  for (i = 0; i < n1; i++) {
    cb = 0UL;
    u1i = u1[i];
    if (isNegative1) {
      u1i = ~u1i + cb1;
      cb1 = (uint64_T)(u1i < cb1);
    }

    a1 = u1i >> 32U;
    a0 = u1i & 4294967295UL;
    cb2 = 1UL;
    k = n - i;
    if (n2 <= k) {
      nj = n2;
    } else {
      nj = k;
    }

    k = i;
    for (j = 0; j < nj; j++) {
      u1i = u2[j];
      if (isNegative2) {
        u1i = ~u1i + cb2;
        cb2 = (uint64_T)(u1i < cb2);
      }

      b1 = u1i >> 32U;
      u1i &= 4294967295UL;
      w10 = a1 * u1i;
      w01 = a0 * b1;
      yk = y[k] + cb;
      cb = (uint64_T)(yk < cb);
      u1i *= a0;
      yk += u1i;
      cb += (yk < u1i);
      u1i = w10 << 32U;
      yk += u1i;
      cb += (yk < u1i);
      u1i = w01 << 32U;
      yk += u1i;
      cb += (yk < u1i);
      y[k] = yk;
      cb += w10 >> 32U;
      cb += w01 >> 32U;
      cb += a1 * b1;
      k++;
    }

    if (k < n) {
      y[k] = cb;
    }
  }

  /* Apply sign */
  if (isNegative1 != isNegative2) {
    cb = 1UL;
    for (k = 0; k < n; k++) {
      yk = ~y[k] + cb;
      y[k] = yk;
      cb = (uint64_T)(yk < cb);
    }
  }
}

static void sMultiWordShr(const uint64_T u1[], int32_T n1, uint32_T n2, uint64_T
  y[], int32_T n)
{
  int32_T nb;
  int32_T i;
  uint64_T ys;
  int32_T nc;
  uint32_T nr;
  int32_T i1;
  uint32_T nl;
  uint64_T u1i;
  uint64_T yi;
  uint64_T b_nc;
  nb = (int32_T)n2 / 64;
  i = 0;
  if ((u1[n1 - 1] & 9223372036854775808UL) != 0UL) {
    ys = MAX_uint64_T;
  } else {
    ys = 0UL;
  }

  if (nb < n1) {
    nc = n + nb;
    if (nc > n1) {
      nc = n1;
    }

    nr = n2 - nb * 64U;
    if (nr > 0U) {
      nl = 64U - nr;
      u1i = u1[nb];
      for (i1 = nb + 1; i1 < nc; i1++) {
        yi = u1i >> nr;
        u1i = u1[i1];
        y[i] = yi | u1i << nl;
        i++;
      }

      if (nc < n1) {
        b_nc = u1[nc];
      } else {
        b_nc = ys;
      }

      y[i] = u1i >> nr | b_nc << nl;
      i++;
    } else {
      for (i1 = nb; i1 < nc; i1++) {
        y[i] = u1[i1];
        i++;
      }
    }
  }

  while (i < n) {
    y[i] = ys;
    i++;
  }
}

void ldpcdec_fixpt(const emlrtStack *sp, const int8_T r[7], uint16_T iter,
                   int16_T dec_out[7])
{
  int32_T i;
  int32_T i2;
  uint16_T p0[7];
  uint16_T p1[7];
  int16_T L[7];
  int8_T S;
  int32_T k;
  int32_T b_S;
  int32_T x_idx;
  const mxArray *y;
  const mxArray *b_y;
  int32_T c_S;
  const mxArray *m0;
  static const int32_T iv0[2] = { 1, 7 };

  int16_T *pData;
  int16_T i3;
  int32_T j;
  int32_T i4;
  int32_T i5;
  int32_T i6;
  int64_T a0;
  int16_T idx_bot;
  int32_T b_x_idx;
  int32_T i7;
  int32_T i8;
  int16_T P00[7];
  static const int16_T Q0[21] = { 426, 8192, 8192, 8192, 7765, 8192, 8192, 8192,
    7765, 7765, 426, 8192, 8192, 7765, 426, 7765, 426, 7765, 7765, 8192, 7765 };

  int32_T b_idx_bot;
  int32_T c_x_idx;
  int32_T c_idx_bot;
  int32_T i9;
  int32_T b_a0;
  int16_T P11[7];
  static const int16_T Q1[21] = { 7765, 8192, 8192, 8192, 426, 8192, 8192, 8192,
    426, 426, 7765, 8192, 8192, 426, 7765, 426, 7765, 426, 426, 8192, 426 };

  int32_T d_x_idx;
  int32_T i10;
  int64_T i11;
  int32_T b_P00;
  int32_T b_P11;
  int64_T c_a0;
  int32_T b1[7];
  int64_T i12;
  int32_T c1[7];
  uint16_T b;
  int64_T d_a0;
  uint64_T u0;
  uint32_T c;
  int64_T e_a0;
  uint64_T u1;
  int128m_T r0;
  int128m_T r1;
  int32_T e_x_idx;
  int32_T f_x_idx;
  int32_T b_j;
  int32_T g_x_idx;
  int32_T c_j;
  int64_T f_a0;
  int64_T i13;
  int64_T g_a0;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;

  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*                                                                           % */
  /*            Generated by MATLAB 9.5 and Fixed-Point Designer 6.2           % */
  /*                                                                           % */
  /* %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% */
  /*  file name:    ldpcdec.m */
  /*  description:  the function [dec_out,llr] = ldpcdec(r,H,iter) performs ldpc decoding given the parity-check matrix H.  */
  /*                r is the corrupted codeword. the number of decoding iterations is specified by iter.  */
  /*                the function outputs both the hard-decision decoded bits, decout, as well as the corrsponding llr, llr. */
  /*                note: see 'ldpcsim.m' for an example. */
  /*  */
  /*                This code is modified for a 7,4 coding scheme */
  /*  */
  /*  algorithm:    sum-product algorithm */
  /*  author:       y. jiang  */
  /*  modified:     Skylar T. */
  /*  date:  exp       April 2019 */
  /*  version:      1.1a */
  /* pre-allocating for hdl-coder */
  /*  initialization */
  /*  [m n] = size(H); */
  /*  p1 = 1./(1 + call_custom_exp(4*r));                                     % p_sub(j)_sup(1) */
  for (i = 0; i < 7; i++) {
    st.site = &b_emlrtRSI;
    b_st.site = &k_emlrtRSI;

    /*  */
    /*  Copyright 2019 The MathWorks, Inc. */
    /*  calculate replacement_custom_fnc via lookup table between extents x = fi([-4,4]), */
    /*  interpolation degree  = 1, number of points = 8192 */
    S = (int8_T)(r[i] << 2);
    if ((S & 16) != 0) {
      S = (int8_T)(S | -16);
    } else {
      S = (int8_T)(S & 15);
    }

    if ((S & 32) != 0) {
      b_S = S | -32;
    } else {
      b_S = S & 31;
    }

    S = (int8_T)(b_S - -4);
    if ((S & 32) != 0) {
      c_S = S | -32;
    } else {
      c_S = S & 31;
    }

    i3 = (int16_T)(c_S * 15);
    if ((i3 & 2048) != 0) {
      i4 = i3 | -2048;
    } else {
      i4 = i3 & 2047;
    }

    i2 = i4 << 13;
    if ((i2 & 2097152) != 0) {
      x_idx = i2 | -2097152;
    } else {
      x_idx = i2 & 2097151;
    }

    i3 = (int16_T)(x_idx >> 7);
    if ((i3 & 16384) != 0) {
      idx_bot = (int16_T)(i3 | -16384);
    } else {
      idx_bot = (int16_T)(i3 & 16383);
    }

    if ((x_idx & 4194304) != 0) {
      b_x_idx = x_idx | -4194304;
    } else {
      b_x_idx = x_idx & 4194303;
    }

    i2 = b_x_idx + 128;
    if ((i2 & 4194304) != 0) {
      i2 |= -4194304;
    } else {
      i2 &= 4194303;
    }

    if ((i2 & 2097152) != 0) {
      x_idx = i2 | -2097152;
    } else {
      x_idx = i2 & 2097151;
    }

    if (idx_bot >= 8192) {
      idx_bot = 8191;
    } else {
      if (idx_bot <= 0) {
        idx_bot = 1;
      }
    }

    i3 = (int16_T)(idx_bot + 1);
    if ((x_idx & 4194304) != 0) {
      c_x_idx = x_idx | -4194304;
    } else {
      c_x_idx = x_idx & 4194303;
    }

    i2 = c_x_idx - (idx_bot << 7);
    if ((i2 & 4194304) != 0) {
      i9 = i2 | -4194304;
    } else {
      i9 = i2 & 4194303;
    }

    a0 = (int64_T)LUT[i3 - 1] * i9;
    if ((a0 & 68719476736L) != 0L) {
      a0 |= -68719476736L;
    } else {
      a0 &= 68719476735L;
    }

    if ((x_idx & 4194304) != 0) {
      d_x_idx = x_idx | -4194304;
    } else {
      d_x_idx = x_idx & 4194303;
    }

    i2 = (i3 << 7) - d_x_idx;
    if ((i2 & 4194304) != 0) {
      i10 = i2 | -4194304;
    } else {
      i10 = i2 & 4194303;
    }

    i11 = (int64_T)LUT[idx_bot - 1] * i10;
    if ((i11 & 68719476736L) != 0L) {
      i11 |= -68719476736L;
    } else {
      i11 &= 68719476735L;
    }

    if ((a0 & 137438953472L) != 0L) {
      c_a0 = a0 | -137438953472L;
    } else {
      c_a0 = a0 & 137438953471L;
    }

    if ((i11 & 137438953472L) != 0L) {
      i12 = i11 | -137438953472L;
    } else {
      i12 = i11 & 137438953471L;
    }

    a0 = c_a0 + i12;
    if ((a0 & 137438953472L) != 0L) {
      d_a0 = a0 | -137438953472L;
    } else {
      d_a0 = a0 & 137438953471L;
    }

    b = (uint16_T)(256U + ((uint16_T)(d_a0 >> 7) & 16383));
    st.site = &b_emlrtRSI;
    b_st.site = &l_emlrtRSI;
    c_st.site = &m_emlrtRSI;
    if (b == 0) {
      c = MAX_uint32_T;
    } else {
      u0 = b;
      if (u0 == 0UL) {
        c = MAX_uint32_T;
      } else {
        d_st.site = &bb_emlrtRSI;
        c = (uint32_T)_u64d_div__(&d_st, 4294967296UL, u0);
      }
    }

    p1[i] = (uint16_T)(c >> 10);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /*  p_sub(j)_sup(0) */
  /*  P_sub(ij)_sup(1) */
  /*  P_sub(ij)_sup(0) */
  for (i2 = 0; i2 < 7; i2++) {
    p0[i2] = (uint16_T)((16384U - p1[i2]) & 131071U);
    L[i2] = 0;
  }

  /*  decoding iteration */
  st.site = &c_emlrtRSI;
  st.site = &c_emlrtRSI;
  i2 = iter;
  for (k = 0; k < i2; k++) {
    /*  set non-existing elements to zeros */
    /*  set non-existing elements to zeros */
    /*  message passing: from check node to bit node */
    /*  compute DeltaP per eq. (6-47) */
    /*      DeltaP(find(DeltaP == 0)) = 1;                          % the following computes DeltaQ using eq. (6-48) */
    /* for this case only, taking too long to reconstruct */
    for (i = 0; i < 3; i++) {
      for (j = 0; j < 7; j++) {
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    /*  construct array */
    st.site = &d_emlrtRSI;
    b_st.site = &q_emlrtRSI;
    c_st.site = &m_emlrtRSI;

    /*  set non-existing elements to zeros */
    /*  Q_sub(ij)_sup(0). eq. (6-49) */
    /*  Q_sub(ij)_sup(1). eq. (6-49) */
    /*  message passing: from bit node to check node */
    /*  note: the computation is re-ordered a liitle bit for simplification */
    /*      Q0(find(H == 0)) = 1;  */
    /*      Q1(find(H == 0)) = 1; */
    for (j = 0; j < 7; j++) {
      L[j] = 4096;
    }

    for (i = 0; i < 7; i++) {
      x_idx = (uint8_T)(1 + i) - 1;
      j = 3 * x_idx;
      L[x_idx] = (int16_T)((L[x_idx] * Q0[j]) >> 13);

      /*  calculate PI(Q_sub(ij)_sup(0)) */
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }

      L[x_idx] = (int16_T)((L[x_idx] * Q0[j + 1]) >> 13);

      /*  calculate PI(Q_sub(ij)_sup(0)) */
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }

      L[x_idx] = (int16_T)((L[x_idx] * Q0[j + 2]) >> 13);

      /*  calculate PI(Q_sub(ij)_sup(0)) */
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    for (j = 0; j < 7; j++) {
      P00[j] = (int16_T)((p0[j] * L[j]) >> 12);
    }

    /*  P_sub(j)_sup(0). eq. (6-51) */
    st.site = &e_emlrtRSI;
    b_st.site = &q_emlrtRSI;
    c_st.site = &m_emlrtRSI;

    /*  obtain P0 */
    for (j = 0; j < 7; j++) {
      L[j] = 4096;
    }

    for (i = 0; i < 7; i++) {
      x_idx = (uint8_T)(1 + i) - 1;
      j = 3 * x_idx;
      L[x_idx] = (int16_T)((L[x_idx] * Q1[j]) >> 13);

      /*  calculate PI(Q_sub(ij)_sup(1)) */
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }

      L[x_idx] = (int16_T)((L[x_idx] * Q1[j + 1]) >> 13);

      /*  calculate PI(Q_sub(ij)_sup(1)) */
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }

      L[x_idx] = (int16_T)((L[x_idx] * Q1[j + 2]) >> 13);

      /*  calculate PI(Q_sub(ij)_sup(1)) */
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    for (j = 0; j < 7; j++) {
      P11[j] = (int16_T)((p1[j] * L[j]) >> 12);
    }

    /*  P_sub(j)_sup(1). eq. (6-51) */
    st.site = &f_emlrtRSI;
    b_st.site = &q_emlrtRSI;
    c_st.site = &m_emlrtRSI;

    /*  obtain P1 */
    for (j = 0; j < 7; j++) {
      if ((P00[j] & 65536) != 0) {
        b_P00 = P00[j] | -65536;
      } else {
        b_P00 = P00[j] & 65535;
      }

      if ((P11[j] & 65536) != 0) {
        b_P11 = P11[j] | -65536;
      } else {
        b_P11 = P11[j] & 65535;
      }

      x_idx = b_P00 + b_P11;
      if ((x_idx & 65536) != 0) {
        b1[j] = x_idx | -65536;
      } else {
        b1[j] = x_idx & 65535;
      }
    }

    st.site = &g_emlrtRSI;
    b_st.site = &q_emlrtRSI;
    c_st.site = &m_emlrtRSI;
    for (x_idx = 0; x_idx < 7; x_idx++) {
      if (7 > x_idx + 1) {
        j = x_idx;
      } else {
        j = 6;
      }

      if (b1[j] == 0) {
        c1[x_idx] = 134217727;
      } else {
        d_st.site = &bb_emlrtRSI;
        c1[x_idx] = div_s28s64(&d_st, 274877906944L, b1[j]);
      }
    }

    /*  normalization */
    for (j = 0; j < 7; j++) {
      b = (uint16_T)(c1[j] >> 19);
      P00[j] = (int16_T)((b * P00[j]) >> 5);
      P11[j] = (int16_T)((b * P11[j]) >> 5);
    }

    st.site = &h_emlrtRSI;
    b_st.site = &q_emlrtRSI;
    c_st.site = &m_emlrtRSI;

    /*  normalization */
    /*      L = log(P00./P11);                                      %original */
    for (i = 0; i < 7; i++) {
      st.site = &i_emlrtRSI;
      b_st.site = &l_emlrtRSI;
      c_st.site = &m_emlrtRSI;
      if (P11[i] == 0) {
        if (P00[i] < 0) {
          a0 = -2199023255552L;
        } else {
          a0 = 2199023255551L;
        }
      } else {
        d_st.site = &bb_emlrtRSI;
        a0 = div_s42s64(&d_st, (int64_T)P00[i] << 24, P11[i]);
      }

      st.site = &i_emlrtRSI;
      b_st.site = &r_emlrtRSI;

      /*  */
      /*  Copyright 2019 The MathWorks, Inc. */
      /*  calculate replacement_custom_log via lookup table between extents x = fi([0.0183156388887342,18116.2310233822]), */
      /*  interpolation degree  = 1, number of points = 8192 */
      if ((a0 & 4398046511104L) != 0L) {
        e_a0 = a0 | -4398046511104L;
      } else {
        e_a0 = a0 & 4398046511103L;
      }

      a0 = e_a0 - 307285L;
      if ((a0 & 4398046511104L) != 0L) {
        u0 = (uint64_T)(a0 | -4398046511104L);
      } else {
        u0 = (uint64_T)(a0 & 4398046511103L);
      }

      u1 = 3977034223831UL;
      sMultiWordMul(&u0, 1, &u1, 1, &r0.chunks[0U], 2);
      sMultiWordShr(&r0.chunks[0U], 2, 60U, &r1.chunks[0U], 2);
      j = (int32_T)MultiWord2sLong(&r1.chunks[0U]);
      if ((j & 2097152) != 0) {
        x_idx = j | -2097152;
      } else {
        x_idx = j & 2097151;
      }

      i3 = (int16_T)(x_idx >> 7);
      if ((i3 & 16384) != 0) {
        idx_bot = (int16_T)(i3 | -16384);
      } else {
        idx_bot = (int16_T)(i3 & 16383);
      }

      if ((x_idx & 4194304) != 0) {
        e_x_idx = x_idx | -4194304;
      } else {
        e_x_idx = x_idx & 4194303;
      }

      j = e_x_idx + 128;
      if ((j & 4194304) != 0) {
        j |= -4194304;
      } else {
        j &= 4194303;
      }

      if ((j & 2097152) != 0) {
        x_idx = j | -2097152;
      } else {
        x_idx = j & 2097151;
      }

      if (idx_bot >= 8192) {
        idx_bot = 8191;
      } else {
        if (idx_bot <= 0) {
          idx_bot = 1;
        }
      }

      i3 = (int16_T)(idx_bot + 1);
      if ((x_idx & 4194304) != 0) {
        f_x_idx = x_idx | -4194304;
      } else {
        f_x_idx = x_idx & 4194303;
      }

      j = f_x_idx - (idx_bot << 7);
      if ((j & 4194304) != 0) {
        b_j = j | -4194304;
      } else {
        b_j = j & 4194303;
      }

      a0 = (int64_T)b_LUT[i3 - 1] * b_j;
      if ((a0 & 68719476736L) != 0L) {
        a0 |= -68719476736L;
      } else {
        a0 &= 68719476735L;
      }

      if ((x_idx & 4194304) != 0) {
        g_x_idx = x_idx | -4194304;
      } else {
        g_x_idx = x_idx & 4194303;
      }

      j = (i3 << 7) - g_x_idx;
      if ((j & 4194304) != 0) {
        c_j = j | -4194304;
      } else {
        c_j = j & 4194303;
      }

      i11 = (int64_T)b_LUT[idx_bot - 1] * c_j;
      if ((i11 & 68719476736L) != 0L) {
        i11 |= -68719476736L;
      } else {
        i11 &= 68719476735L;
      }

      if ((a0 & 137438953472L) != 0L) {
        f_a0 = a0 | -137438953472L;
      } else {
        f_a0 = a0 & 137438953471L;
      }

      if ((i11 & 137438953472L) != 0L) {
        i13 = i11 | -137438953472L;
      } else {
        i13 = i11 & 137438953471L;
      }

      a0 = f_a0 + i13;
      if ((a0 & 137438953472L) != 0L) {
        g_a0 = a0 | -137438953472L;
      } else {
        g_a0 = a0 & 137438953471L;
      }

      i3 = (int16_T)(g_a0 >> 7);
      if ((i3 & 8192) != 0) {
        L[i] = (int16_T)(i3 | -8192);
      } else {
        L[i] = (int16_T)(i3 & 8191);
      }

      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  /*  decision */
  for (x_idx = 0; x_idx < 7; x_idx++) {
    S = 0;
    if (L[x_idx] > 0) {
      S = 1;
    } else {
      if (L[x_idx] < 0) {
        S = -1;
      }
    }

    i2 = S << 14;
    if ((i2 & 16777216) != 0) {
      i5 = i2 | -16777216;
    } else {
      i5 = i2 & 16777215;
    }

    i2 = i5 - 8192;
    if ((i2 & 16777216) != 0) {
      i6 = i2 | -16777216;
    } else {
      i6 = i2 & 16777215;
    }

    a0 = i6 * -8192L;
    if ((a0 & 274877906944L) != 0L) {
      a0 |= -274877906944L;
    } else {
      a0 &= 274877906943L;
    }

    i3 = (int16_T)((a0 >> 27) + ((a0 & 134217727L) != 0L));
    if ((i3 & 4096) != 0) {
      i7 = i3 | -4096;
    } else {
      i7 = i3 & 4095;
    }

    i3 = (int16_T)(i7 - 1);
    if ((i3 & 4096) != 0) {
      i8 = i3 | -4096;
    } else {
      i8 = i3 & 4095;
    }

    i3 = (int16_T)(((int16_T)i8 + 1) >> 1);
    if ((i3 & 4096) != 0) {
      i3 = (int16_T)(i3 | -4096);
    } else {
      i3 = (int16_T)(i3 & 4095);
    }

    idx_bot = (int16_T)(a0 >> 27);
    if ((idx_bot & 4096) != 0) {
      b_idx_bot = idx_bot | -4096;
    } else {
      b_idx_bot = idx_bot & 4095;
    }

    idx_bot = (int16_T)(b_idx_bot + 1);
    if ((idx_bot & 4096) != 0) {
      c_idx_bot = idx_bot | -4096;
    } else {
      c_idx_bot = idx_bot & 4095;
    }

    idx_bot = (int16_T)(c_idx_bot >> 1);
    if (a0 < 0L) {
      if ((i3 & 2048) != 0) {
        b_a0 = i3 | -2048;
      } else {
        b_a0 = i3 & 2047;
      }
    } else if ((idx_bot & 2048) != 0) {
      b_a0 = idx_bot | -2048;
    } else {
      b_a0 = idx_bot & 2047;
    }

    i3 = (int16_T)(b_a0 << 1);
    if ((i3 & 512) != 0) {
      dec_out[x_idx] = (int16_T)(i3 | -512);
    } else {
      dec_out[x_idx] = (int16_T)(i3 & 511);
    }
  }

  y = NULL;
  b_y = NULL;
  m0 = emlrtCreateNumericArray(2, iv0, mxINT16_CLASS, mxREAL);
  pData = (int16_T *)emlrtMxGetData(m0);
  i2 = 0;
  for (i = 0; i < 7; i++) {
    pData[i2] = dec_out[i];
    i2++;
  }

  emlrtAssign(&b_y, m0);
  emlrtAssign(&y, emlrtCreateFIR2013b(sp, eml_mx, b_eml_mx, "simulinkarray", b_y,
    true, false));
  emlrtDisplayR2012b(y, "dec_out", &emlrtRTEI, sp);
  st.site = &j_emlrtRSI;
  b_st.site = &s_emlrtRSI;
  b_ldpcdec_fixpt_logger(&b_st, r, iter, dec_out);
}

void replacement_custom_fnc_init(void)
{
  static const uint16_T uv0[8192] = { 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U,
    4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U,
    4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U,
    4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 5U, 5U,
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U,
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U,
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U,
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U,
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U,
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U,
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U,
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U,
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U,
    5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 6U, 6U, 6U, 6U, 6U,
    6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U,
    6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U,
    6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U,
    6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U,
    6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U,
    6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U,
    6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U,
    6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U,
    6U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U,
    7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U,
    7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U,
    7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U,
    7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U,
    7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U,
    7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 7U,
    7U, 7U, 7U, 7U, 7U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U,
    8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U,
    8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U,
    8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U,
    8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U,
    8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U,
    8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 8U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U,
    9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U,
    9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U,
    9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U,
    9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U,
    9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U, 9U,
    9U, 9U, 9U, 9U, 9U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U,
    10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U,
    10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U,
    10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U,
    10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U,
    10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U,
    10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 10U, 11U, 11U, 11U,
    11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U,
    11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U,
    11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U,
    11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U,
    11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U,
    11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 11U, 12U, 12U, 12U, 12U,
    12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U,
    12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U,
    12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U,
    12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U,
    12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U, 12U,
    12U, 12U, 12U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U,
    13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U,
    13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U,
    13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U,
    13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U,
    13U, 13U, 13U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U,
    14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U,
    14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U,
    14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U,
    14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 14U, 15U,
    15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U,
    15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U,
    15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U,
    15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U, 15U,
    15U, 15U, 15U, 15U, 15U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U,
    16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U,
    16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U,
    16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U, 16U,
    16U, 16U, 16U, 16U, 16U, 16U, 16U, 17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U,
    17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U,
    17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U,
    17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U, 17U,
    17U, 17U, 17U, 17U, 17U, 17U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U,
    18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U,
    18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U,
    18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U, 18U,
    18U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U,
    19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U,
    19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U,
    19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 19U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U,
    20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 20U, 21U,
    21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U,
    21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U,
    21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U, 21U,
    21U, 22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U,
    22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U,
    22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U, 22U,
    22U, 22U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U,
    23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U,
    23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U, 23U,
    24U, 24U, 24U, 24U, 24U, 24U, 24U, 24U, 24U, 24U, 24U, 24U, 24U, 24U, 24U,
    24U, 24U, 24U, 24U, 24U, 24U, 24U, 24U, 24U, 24U, 24U, 24U, 24U, 24U, 24U,
    24U, 24U, 24U, 24U, 24U, 24U, 24U, 24U, 24U, 24U, 24U, 24U, 25U, 25U, 25U,
    25U, 25U, 25U, 25U, 25U, 25U, 25U, 25U, 25U, 25U, 25U, 25U, 25U, 25U, 25U,
    25U, 25U, 25U, 25U, 25U, 25U, 25U, 25U, 25U, 25U, 25U, 25U, 25U, 25U, 25U,
    25U, 25U, 25U, 25U, 25U, 25U, 25U, 26U, 26U, 26U, 26U, 26U, 26U, 26U, 26U,
    26U, 26U, 26U, 26U, 26U, 26U, 26U, 26U, 26U, 26U, 26U, 26U, 26U, 26U, 26U,
    26U, 26U, 26U, 26U, 26U, 26U, 26U, 26U, 26U, 26U, 26U, 26U, 26U, 26U, 26U,
    26U, 27U, 27U, 27U, 27U, 27U, 27U, 27U, 27U, 27U, 27U, 27U, 27U, 27U, 27U,
    27U, 27U, 27U, 27U, 27U, 27U, 27U, 27U, 27U, 27U, 27U, 27U, 27U, 27U, 27U,
    27U, 27U, 27U, 27U, 27U, 27U, 27U, 27U, 28U, 28U, 28U, 28U, 28U, 28U, 28U,
    28U, 28U, 28U, 28U, 28U, 28U, 28U, 28U, 28U, 28U, 28U, 28U, 28U, 28U, 28U,
    28U, 28U, 28U, 28U, 28U, 28U, 28U, 28U, 28U, 28U, 28U, 28U, 28U, 28U, 29U,
    29U, 29U, 29U, 29U, 29U, 29U, 29U, 29U, 29U, 29U, 29U, 29U, 29U, 29U, 29U,
    29U, 29U, 29U, 29U, 29U, 29U, 29U, 29U, 29U, 29U, 29U, 29U, 29U, 29U, 29U,
    29U, 29U, 29U, 29U, 30U, 30U, 30U, 30U, 30U, 30U, 30U, 30U, 30U, 30U, 30U,
    30U, 30U, 30U, 30U, 30U, 30U, 30U, 30U, 30U, 30U, 30U, 30U, 30U, 30U, 30U,
    30U, 30U, 30U, 30U, 30U, 30U, 30U, 31U, 31U, 31U, 31U, 31U, 31U, 31U, 31U,
    31U, 31U, 31U, 31U, 31U, 31U, 31U, 31U, 31U, 31U, 31U, 31U, 31U, 31U, 31U,
    31U, 31U, 31U, 31U, 31U, 31U, 31U, 31U, 31U, 31U, 32U, 32U, 32U, 32U, 32U,
    32U, 32U, 32U, 32U, 32U, 32U, 32U, 32U, 32U, 32U, 32U, 32U, 32U, 32U, 32U,
    32U, 32U, 32U, 32U, 32U, 32U, 32U, 32U, 32U, 32U, 32U, 33U, 33U, 33U, 33U,
    33U, 33U, 33U, 33U, 33U, 33U, 33U, 33U, 33U, 33U, 33U, 33U, 33U, 33U, 33U,
    33U, 33U, 33U, 33U, 33U, 33U, 33U, 33U, 33U, 33U, 33U, 33U, 34U, 34U, 34U,
    34U, 34U, 34U, 34U, 34U, 34U, 34U, 34U, 34U, 34U, 34U, 34U, 34U, 34U, 34U,
    34U, 34U, 34U, 34U, 34U, 34U, 34U, 34U, 34U, 34U, 34U, 34U, 35U, 35U, 35U,
    35U, 35U, 35U, 35U, 35U, 35U, 35U, 35U, 35U, 35U, 35U, 35U, 35U, 35U, 35U,
    35U, 35U, 35U, 35U, 35U, 35U, 35U, 35U, 35U, 35U, 35U, 36U, 36U, 36U, 36U,
    36U, 36U, 36U, 36U, 36U, 36U, 36U, 36U, 36U, 36U, 36U, 36U, 36U, 36U, 36U,
    36U, 36U, 36U, 36U, 36U, 36U, 36U, 36U, 36U, 37U, 37U, 37U, 37U, 37U, 37U,
    37U, 37U, 37U, 37U, 37U, 37U, 37U, 37U, 37U, 37U, 37U, 37U, 37U, 37U, 37U,
    37U, 37U, 37U, 37U, 37U, 37U, 38U, 38U, 38U, 38U, 38U, 38U, 38U, 38U, 38U,
    38U, 38U, 38U, 38U, 38U, 38U, 38U, 38U, 38U, 38U, 38U, 38U, 38U, 38U, 38U,
    38U, 38U, 39U, 39U, 39U, 39U, 39U, 39U, 39U, 39U, 39U, 39U, 39U, 39U, 39U,
    39U, 39U, 39U, 39U, 39U, 39U, 39U, 39U, 39U, 39U, 39U, 39U, 39U, 40U, 40U,
    40U, 40U, 40U, 40U, 40U, 40U, 40U, 40U, 40U, 40U, 40U, 40U, 40U, 40U, 40U,
    40U, 40U, 40U, 40U, 40U, 40U, 40U, 40U, 40U, 41U, 41U, 41U, 41U, 41U, 41U,
    41U, 41U, 41U, 41U, 41U, 41U, 41U, 41U, 41U, 41U, 41U, 41U, 41U, 41U, 41U,
    41U, 41U, 41U, 42U, 42U, 42U, 42U, 42U, 42U, 42U, 42U, 42U, 42U, 42U, 42U,
    42U, 42U, 42U, 42U, 42U, 42U, 42U, 42U, 42U, 42U, 42U, 42U, 43U, 43U, 43U,
    43U, 43U, 43U, 43U, 43U, 43U, 43U, 43U, 43U, 43U, 43U, 43U, 43U, 43U, 43U,
    43U, 43U, 43U, 43U, 43U, 43U, 44U, 44U, 44U, 44U, 44U, 44U, 44U, 44U, 44U,
    44U, 44U, 44U, 44U, 44U, 44U, 44U, 44U, 44U, 44U, 44U, 44U, 44U, 44U, 45U,
    45U, 45U, 45U, 45U, 45U, 45U, 45U, 45U, 45U, 45U, 45U, 45U, 45U, 45U, 45U,
    45U, 45U, 45U, 45U, 45U, 45U, 46U, 46U, 46U, 46U, 46U, 46U, 46U, 46U, 46U,
    46U, 46U, 46U, 46U, 46U, 46U, 46U, 46U, 46U, 46U, 46U, 46U, 46U, 46U, 47U,
    47U, 47U, 47U, 47U, 47U, 47U, 47U, 47U, 47U, 47U, 47U, 47U, 47U, 47U, 47U,
    47U, 47U, 47U, 47U, 47U, 48U, 48U, 48U, 48U, 48U, 48U, 48U, 48U, 48U, 48U,
    48U, 48U, 48U, 48U, 48U, 48U, 48U, 48U, 48U, 48U, 48U, 49U, 49U, 49U, 49U,
    49U, 49U, 49U, 49U, 49U, 49U, 49U, 49U, 49U, 49U, 49U, 49U, 49U, 49U, 49U,
    49U, 49U, 50U, 50U, 50U, 50U, 50U, 50U, 50U, 50U, 50U, 50U, 50U, 50U, 50U,
    50U, 50U, 50U, 50U, 50U, 50U, 50U, 51U, 51U, 51U, 51U, 51U, 51U, 51U, 51U,
    51U, 51U, 51U, 51U, 51U, 51U, 51U, 51U, 51U, 51U, 51U, 51U, 52U, 52U, 52U,
    52U, 52U, 52U, 52U, 52U, 52U, 52U, 52U, 52U, 52U, 52U, 52U, 52U, 52U, 52U,
    52U, 52U, 53U, 53U, 53U, 53U, 53U, 53U, 53U, 53U, 53U, 53U, 53U, 53U, 53U,
    53U, 53U, 53U, 53U, 53U, 53U, 54U, 54U, 54U, 54U, 54U, 54U, 54U, 54U, 54U,
    54U, 54U, 54U, 54U, 54U, 54U, 54U, 54U, 54U, 55U, 55U, 55U, 55U, 55U, 55U,
    55U, 55U, 55U, 55U, 55U, 55U, 55U, 55U, 55U, 55U, 55U, 55U, 55U, 56U, 56U,
    56U, 56U, 56U, 56U, 56U, 56U, 56U, 56U, 56U, 56U, 56U, 56U, 56U, 56U, 56U,
    56U, 57U, 57U, 57U, 57U, 57U, 57U, 57U, 57U, 57U, 57U, 57U, 57U, 57U, 57U,
    57U, 57U, 57U, 57U, 58U, 58U, 58U, 58U, 58U, 58U, 58U, 58U, 58U, 58U, 58U,
    58U, 58U, 58U, 58U, 58U, 58U, 59U, 59U, 59U, 59U, 59U, 59U, 59U, 59U, 59U,
    59U, 59U, 59U, 59U, 59U, 59U, 59U, 59U, 59U, 60U, 60U, 60U, 60U, 60U, 60U,
    60U, 60U, 60U, 60U, 60U, 60U, 60U, 60U, 60U, 60U, 61U, 61U, 61U, 61U, 61U,
    61U, 61U, 61U, 61U, 61U, 61U, 61U, 61U, 61U, 61U, 61U, 61U, 62U, 62U, 62U,
    62U, 62U, 62U, 62U, 62U, 62U, 62U, 62U, 62U, 62U, 62U, 62U, 62U, 63U, 63U,
    63U, 63U, 63U, 63U, 63U, 63U, 63U, 63U, 63U, 63U, 63U, 63U, 63U, 63U, 63U,
    64U, 64U, 64U, 64U, 64U, 64U, 64U, 64U, 64U, 64U, 64U, 64U, 64U, 64U, 64U,
    65U, 65U, 65U, 65U, 65U, 65U, 65U, 65U, 65U, 65U, 65U, 65U, 65U, 65U, 65U,
    65U, 66U, 66U, 66U, 66U, 66U, 66U, 66U, 66U, 66U, 66U, 66U, 66U, 66U, 66U,
    66U, 66U, 67U, 67U, 67U, 67U, 67U, 67U, 67U, 67U, 67U, 67U, 67U, 67U, 67U,
    67U, 67U, 68U, 68U, 68U, 68U, 68U, 68U, 68U, 68U, 68U, 68U, 68U, 68U, 68U,
    68U, 68U, 69U, 69U, 69U, 69U, 69U, 69U, 69U, 69U, 69U, 69U, 69U, 69U, 69U,
    69U, 70U, 70U, 70U, 70U, 70U, 70U, 70U, 70U, 70U, 70U, 70U, 70U, 70U, 70U,
    70U, 71U, 71U, 71U, 71U, 71U, 71U, 71U, 71U, 71U, 71U, 71U, 71U, 71U, 71U,
    72U, 72U, 72U, 72U, 72U, 72U, 72U, 72U, 72U, 72U, 72U, 72U, 72U, 72U, 73U,
    73U, 73U, 73U, 73U, 73U, 73U, 73U, 73U, 73U, 73U, 73U, 73U, 73U, 74U, 74U,
    74U, 74U, 74U, 74U, 74U, 74U, 74U, 74U, 74U, 74U, 74U, 74U, 75U, 75U, 75U,
    75U, 75U, 75U, 75U, 75U, 75U, 75U, 75U, 75U, 75U, 75U, 76U, 76U, 76U, 76U,
    76U, 76U, 76U, 76U, 76U, 76U, 76U, 76U, 76U, 77U, 77U, 77U, 77U, 77U, 77U,
    77U, 77U, 77U, 77U, 77U, 77U, 77U, 78U, 78U, 78U, 78U, 78U, 78U, 78U, 78U,
    78U, 78U, 78U, 78U, 78U, 79U, 79U, 79U, 79U, 79U, 79U, 79U, 79U, 79U, 79U,
    79U, 79U, 79U, 80U, 80U, 80U, 80U, 80U, 80U, 80U, 80U, 80U, 80U, 80U, 80U,
    80U, 81U, 81U, 81U, 81U, 81U, 81U, 81U, 81U, 81U, 81U, 81U, 81U, 82U, 82U,
    82U, 82U, 82U, 82U, 82U, 82U, 82U, 82U, 82U, 82U, 82U, 83U, 83U, 83U, 83U,
    83U, 83U, 83U, 83U, 83U, 83U, 83U, 83U, 84U, 84U, 84U, 84U, 84U, 84U, 84U,
    84U, 84U, 84U, 84U, 84U, 85U, 85U, 85U, 85U, 85U, 85U, 85U, 85U, 85U, 85U,
    85U, 85U, 86U, 86U, 86U, 86U, 86U, 86U, 86U, 86U, 86U, 86U, 86U, 86U, 87U,
    87U, 87U, 87U, 87U, 87U, 87U, 87U, 87U, 87U, 87U, 87U, 88U, 88U, 88U, 88U,
    88U, 88U, 88U, 88U, 88U, 88U, 88U, 89U, 89U, 89U, 89U, 89U, 89U, 89U, 89U,
    89U, 89U, 89U, 89U, 90U, 90U, 90U, 90U, 90U, 90U, 90U, 90U, 90U, 90U, 90U,
    91U, 91U, 91U, 91U, 91U, 91U, 91U, 91U, 91U, 91U, 91U, 92U, 92U, 92U, 92U,
    92U, 92U, 92U, 92U, 92U, 92U, 92U, 93U, 93U, 93U, 93U, 93U, 93U, 93U, 93U,
    93U, 93U, 93U, 94U, 94U, 94U, 94U, 94U, 94U, 94U, 94U, 94U, 94U, 94U, 95U,
    95U, 95U, 95U, 95U, 95U, 95U, 95U, 95U, 95U, 95U, 96U, 96U, 96U, 96U, 96U,
    96U, 96U, 96U, 96U, 96U, 97U, 97U, 97U, 97U, 97U, 97U, 97U, 97U, 97U, 97U,
    97U, 98U, 98U, 98U, 98U, 98U, 98U, 98U, 98U, 98U, 98U, 99U, 99U, 99U, 99U,
    99U, 99U, 99U, 99U, 99U, 99U, 99U, 100U, 100U, 100U, 100U, 100U, 100U, 100U,
    100U, 100U, 100U, 101U, 101U, 101U, 101U, 101U, 101U, 101U, 101U, 101U, 101U,
    102U, 102U, 102U, 102U, 102U, 102U, 102U, 102U, 102U, 102U, 103U, 103U, 103U,
    103U, 103U, 103U, 103U, 103U, 103U, 103U, 104U, 104U, 104U, 104U, 104U, 104U,
    104U, 104U, 104U, 104U, 105U, 105U, 105U, 105U, 105U, 105U, 105U, 105U, 105U,
    106U, 106U, 106U, 106U, 106U, 106U, 106U, 106U, 106U, 106U, 107U, 107U, 107U,
    107U, 107U, 107U, 107U, 107U, 107U, 108U, 108U, 108U, 108U, 108U, 108U, 108U,
    108U, 108U, 108U, 109U, 109U, 109U, 109U, 109U, 109U, 109U, 109U, 109U, 110U,
    110U, 110U, 110U, 110U, 110U, 110U, 110U, 110U, 111U, 111U, 111U, 111U, 111U,
    111U, 111U, 111U, 111U, 111U, 112U, 112U, 112U, 112U, 112U, 112U, 112U, 112U,
    112U, 113U, 113U, 113U, 113U, 113U, 113U, 113U, 113U, 113U, 114U, 114U, 114U,
    114U, 114U, 114U, 114U, 114U, 114U, 115U, 115U, 115U, 115U, 115U, 115U, 115U,
    115U, 115U, 116U, 116U, 116U, 116U, 116U, 116U, 116U, 116U, 117U, 117U, 117U,
    117U, 117U, 117U, 117U, 117U, 117U, 118U, 118U, 118U, 118U, 118U, 118U, 118U,
    118U, 118U, 119U, 119U, 119U, 119U, 119U, 119U, 119U, 119U, 120U, 120U, 120U,
    120U, 120U, 120U, 120U, 120U, 120U, 121U, 121U, 121U, 121U, 121U, 121U, 121U,
    121U, 122U, 122U, 122U, 122U, 122U, 122U, 122U, 122U, 122U, 123U, 123U, 123U,
    123U, 123U, 123U, 123U, 123U, 124U, 124U, 124U, 124U, 124U, 124U, 124U, 124U,
    125U, 125U, 125U, 125U, 125U, 125U, 125U, 125U, 126U, 126U, 126U, 126U, 126U,
    126U, 126U, 126U, 127U, 127U, 127U, 127U, 127U, 127U, 127U, 127U, 128U, 128U,
    128U, 128U, 128U, 128U, 128U, 128U, 129U, 129U, 129U, 129U, 129U, 129U, 129U,
    129U, 130U, 130U, 130U, 130U, 130U, 130U, 130U, 130U, 131U, 131U, 131U, 131U,
    131U, 131U, 131U, 131U, 132U, 132U, 132U, 132U, 132U, 132U, 132U, 132U, 133U,
    133U, 133U, 133U, 133U, 133U, 133U, 134U, 134U, 134U, 134U, 134U, 134U, 134U,
    134U, 135U, 135U, 135U, 135U, 135U, 135U, 135U, 136U, 136U, 136U, 136U, 136U,
    136U, 136U, 136U, 137U, 137U, 137U, 137U, 137U, 137U, 137U, 138U, 138U, 138U,
    138U, 138U, 138U, 138U, 138U, 139U, 139U, 139U, 139U, 139U, 139U, 139U, 140U,
    140U, 140U, 140U, 140U, 140U, 140U, 141U, 141U, 141U, 141U, 141U, 141U, 141U,
    141U, 142U, 142U, 142U, 142U, 142U, 142U, 142U, 143U, 143U, 143U, 143U, 143U,
    143U, 143U, 144U, 144U, 144U, 144U, 144U, 144U, 144U, 145U, 145U, 145U, 145U,
    145U, 145U, 145U, 146U, 146U, 146U, 146U, 146U, 146U, 146U, 147U, 147U, 147U,
    147U, 147U, 147U, 147U, 148U, 148U, 148U, 148U, 148U, 148U, 148U, 149U, 149U,
    149U, 149U, 149U, 149U, 149U, 150U, 150U, 150U, 150U, 150U, 150U, 151U, 151U,
    151U, 151U, 151U, 151U, 151U, 152U, 152U, 152U, 152U, 152U, 152U, 152U, 153U,
    153U, 153U, 153U, 153U, 153U, 153U, 154U, 154U, 154U, 154U, 154U, 154U, 155U,
    155U, 155U, 155U, 155U, 155U, 155U, 156U, 156U, 156U, 156U, 156U, 156U, 157U,
    157U, 157U, 157U, 157U, 157U, 157U, 158U, 158U, 158U, 158U, 158U, 158U, 159U,
    159U, 159U, 159U, 159U, 159U, 159U, 160U, 160U, 160U, 160U, 160U, 160U, 161U,
    161U, 161U, 161U, 161U, 161U, 162U, 162U, 162U, 162U, 162U, 162U, 162U, 163U,
    163U, 163U, 163U, 163U, 163U, 164U, 164U, 164U, 164U, 164U, 164U, 165U, 165U,
    165U, 165U, 165U, 165U, 166U, 166U, 166U, 166U, 166U, 166U, 166U, 167U, 167U,
    167U, 167U, 167U, 167U, 168U, 168U, 168U, 168U, 168U, 168U, 169U, 169U, 169U,
    169U, 169U, 169U, 170U, 170U, 170U, 170U, 170U, 170U, 171U, 171U, 171U, 171U,
    171U, 171U, 172U, 172U, 172U, 172U, 172U, 172U, 173U, 173U, 173U, 173U, 173U,
    173U, 174U, 174U, 174U, 174U, 174U, 174U, 175U, 175U, 175U, 175U, 175U, 176U,
    176U, 176U, 176U, 176U, 176U, 177U, 177U, 177U, 177U, 177U, 177U, 178U, 178U,
    178U, 178U, 178U, 178U, 179U, 179U, 179U, 179U, 179U, 180U, 180U, 180U, 180U,
    180U, 180U, 181U, 181U, 181U, 181U, 181U, 181U, 182U, 182U, 182U, 182U, 182U,
    183U, 183U, 183U, 183U, 183U, 183U, 184U, 184U, 184U, 184U, 184U, 185U, 185U,
    185U, 185U, 185U, 185U, 186U, 186U, 186U, 186U, 186U, 187U, 187U, 187U, 187U,
    187U, 187U, 188U, 188U, 188U, 188U, 188U, 189U, 189U, 189U, 189U, 189U, 189U,
    190U, 190U, 190U, 190U, 190U, 191U, 191U, 191U, 191U, 191U, 192U, 192U, 192U,
    192U, 192U, 192U, 193U, 193U, 193U, 193U, 193U, 194U, 194U, 194U, 194U, 194U,
    195U, 195U, 195U, 195U, 195U, 195U, 196U, 196U, 196U, 196U, 196U, 197U, 197U,
    197U, 197U, 197U, 198U, 198U, 198U, 198U, 198U, 199U, 199U, 199U, 199U, 199U,
    200U, 200U, 200U, 200U, 200U, 201U, 201U, 201U, 201U, 201U, 202U, 202U, 202U,
    202U, 202U, 203U, 203U, 203U, 203U, 203U, 203U, 204U, 204U, 204U, 204U, 204U,
    205U, 205U, 205U, 205U, 205U, 206U, 206U, 206U, 206U, 207U, 207U, 207U, 207U,
    207U, 208U, 208U, 208U, 208U, 208U, 209U, 209U, 209U, 209U, 209U, 210U, 210U,
    210U, 210U, 210U, 211U, 211U, 211U, 211U, 211U, 212U, 212U, 212U, 212U, 212U,
    213U, 213U, 213U, 213U, 213U, 214U, 214U, 214U, 214U, 215U, 215U, 215U, 215U,
    215U, 216U, 216U, 216U, 216U, 216U, 217U, 217U, 217U, 217U, 218U, 218U, 218U,
    218U, 218U, 219U, 219U, 219U, 219U, 219U, 220U, 220U, 220U, 220U, 221U, 221U,
    221U, 221U, 221U, 222U, 222U, 222U, 222U, 222U, 223U, 223U, 223U, 223U, 224U,
    224U, 224U, 224U, 224U, 225U, 225U, 225U, 225U, 226U, 226U, 226U, 226U, 226U,
    227U, 227U, 227U, 227U, 228U, 228U, 228U, 228U, 228U, 229U, 229U, 229U, 229U,
    230U, 230U, 230U, 230U, 230U, 231U, 231U, 231U, 231U, 232U, 232U, 232U, 232U,
    232U, 233U, 233U, 233U, 233U, 234U, 234U, 234U, 234U, 235U, 235U, 235U, 235U,
    235U, 236U, 236U, 236U, 236U, 237U, 237U, 237U, 237U, 238U, 238U, 238U, 238U,
    238U, 239U, 239U, 239U, 239U, 240U, 240U, 240U, 240U, 241U, 241U, 241U, 241U,
    242U, 242U, 242U, 242U, 242U, 243U, 243U, 243U, 243U, 244U, 244U, 244U, 244U,
    245U, 245U, 245U, 245U, 246U, 246U, 246U, 246U, 247U, 247U, 247U, 247U, 248U,
    248U, 248U, 248U, 248U, 249U, 249U, 249U, 249U, 250U, 250U, 250U, 250U, 251U,
    251U, 251U, 251U, 252U, 252U, 252U, 252U, 253U, 253U, 253U, 253U, 254U, 254U,
    254U, 254U, 255U, 255U, 255U, 255U, 256U, 256U, 256U, 256U, 257U, 257U, 257U,
    257U, 258U, 258U, 258U, 258U, 259U, 259U, 259U, 259U, 260U, 260U, 260U, 260U,
    261U, 261U, 261U, 261U, 262U, 262U, 262U, 262U, 263U, 263U, 263U, 263U, 264U,
    264U, 264U, 265U, 265U, 265U, 265U, 266U, 266U, 266U, 266U, 267U, 267U, 267U,
    267U, 268U, 268U, 268U, 268U, 269U, 269U, 269U, 269U, 270U, 270U, 270U, 271U,
    271U, 271U, 271U, 272U, 272U, 272U, 272U, 273U, 273U, 273U, 273U, 274U, 274U,
    274U, 275U, 275U, 275U, 275U, 276U, 276U, 276U, 276U, 277U, 277U, 277U, 278U,
    278U, 278U, 278U, 279U, 279U, 279U, 279U, 280U, 280U, 280U, 281U, 281U, 281U,
    281U, 282U, 282U, 282U, 282U, 283U, 283U, 283U, 284U, 284U, 284U, 284U, 285U,
    285U, 285U, 286U, 286U, 286U, 286U, 287U, 287U, 287U, 287U, 288U, 288U, 288U,
    289U, 289U, 289U, 289U, 290U, 290U, 290U, 291U, 291U, 291U, 291U, 292U, 292U,
    292U, 293U, 293U, 293U, 293U, 294U, 294U, 294U, 295U, 295U, 295U, 295U, 296U,
    296U, 296U, 297U, 297U, 297U, 297U, 298U, 298U, 298U, 299U, 299U, 299U, 300U,
    300U, 300U, 300U, 301U, 301U, 301U, 302U, 302U, 302U, 302U, 303U, 303U, 303U,
    304U, 304U, 304U, 305U, 305U, 305U, 305U, 306U, 306U, 306U, 307U, 307U, 307U,
    308U, 308U, 308U, 308U, 309U, 309U, 309U, 310U, 310U, 310U, 311U, 311U, 311U,
    311U, 312U, 312U, 312U, 313U, 313U, 313U, 314U, 314U, 314U, 315U, 315U, 315U,
    315U, 316U, 316U, 316U, 317U, 317U, 317U, 318U, 318U, 318U, 319U, 319U, 319U,
    320U, 320U, 320U, 320U, 321U, 321U, 321U, 322U, 322U, 322U, 323U, 323U, 323U,
    324U, 324U, 324U, 325U, 325U, 325U, 326U, 326U, 326U, 326U, 327U, 327U, 327U,
    328U, 328U, 328U, 329U, 329U, 329U, 330U, 330U, 330U, 331U, 331U, 331U, 332U,
    332U, 332U, 333U, 333U, 333U, 334U, 334U, 334U, 335U, 335U, 335U, 336U, 336U,
    336U, 337U, 337U, 337U, 337U, 338U, 338U, 338U, 339U, 339U, 339U, 340U, 340U,
    340U, 341U, 341U, 341U, 342U, 342U, 342U, 343U, 343U, 343U, 344U, 344U, 345U,
    345U, 345U, 346U, 346U, 346U, 347U, 347U, 347U, 348U, 348U, 348U, 349U, 349U,
    349U, 350U, 350U, 350U, 351U, 351U, 351U, 352U, 352U, 352U, 353U, 353U, 353U,
    354U, 354U, 354U, 355U, 355U, 355U, 356U, 356U, 357U, 357U, 357U, 358U, 358U,
    358U, 359U, 359U, 359U, 360U, 360U, 360U, 361U, 361U, 361U, 362U, 362U, 362U,
    363U, 363U, 364U, 364U, 364U, 365U, 365U, 365U, 366U, 366U, 366U, 367U, 367U,
    367U, 368U, 368U, 369U, 369U, 369U, 370U, 370U, 370U, 371U, 371U, 371U, 372U,
    372U, 373U, 373U, 373U, 374U, 374U, 374U, 375U, 375U, 375U, 376U, 376U, 377U,
    377U, 377U, 378U, 378U, 378U, 379U, 379U, 380U, 380U, 380U, 381U, 381U, 381U,
    382U, 382U, 383U, 383U, 383U, 384U, 384U, 384U, 385U, 385U, 386U, 386U, 386U,
    387U, 387U, 387U, 388U, 388U, 389U, 389U, 389U, 390U, 390U, 390U, 391U, 391U,
    392U, 392U, 392U, 393U, 393U, 394U, 394U, 394U, 395U, 395U, 395U, 396U, 396U,
    397U, 397U, 397U, 398U, 398U, 399U, 399U, 399U, 400U, 400U, 401U, 401U, 401U,
    402U, 402U, 402U, 403U, 403U, 404U, 404U, 404U, 405U, 405U, 406U, 406U, 406U,
    407U, 407U, 408U, 408U, 408U, 409U, 409U, 410U, 410U, 410U, 411U, 411U, 412U,
    412U, 412U, 413U, 413U, 414U, 414U, 414U, 415U, 415U, 416U, 416U, 416U, 417U,
    417U, 418U, 418U, 419U, 419U, 419U, 420U, 420U, 421U, 421U, 421U, 422U, 422U,
    423U, 423U, 423U, 424U, 424U, 425U, 425U, 426U, 426U, 426U, 427U, 427U, 428U,
    428U, 428U, 429U, 429U, 430U, 430U, 431U, 431U, 431U, 432U, 432U, 433U, 433U,
    434U, 434U, 434U, 435U, 435U, 436U, 436U, 436U, 437U, 437U, 438U, 438U, 439U,
    439U, 439U, 440U, 440U, 441U, 441U, 442U, 442U, 443U, 443U, 443U, 444U, 444U,
    445U, 445U, 446U, 446U, 446U, 447U, 447U, 448U, 448U, 449U, 449U, 449U, 450U,
    450U, 451U, 451U, 452U, 452U, 453U, 453U, 453U, 454U, 454U, 455U, 455U, 456U,
    456U, 457U, 457U, 457U, 458U, 458U, 459U, 459U, 460U, 460U, 461U, 461U, 462U,
    462U, 462U, 463U, 463U, 464U, 464U, 465U, 465U, 466U, 466U, 466U, 467U, 467U,
    468U, 468U, 469U, 469U, 470U, 470U, 471U, 471U, 472U, 472U, 472U, 473U, 473U,
    474U, 474U, 475U, 475U, 476U, 476U, 477U, 477U, 478U, 478U, 479U, 479U, 479U,
    480U, 480U, 481U, 481U, 482U, 482U, 483U, 483U, 484U, 484U, 485U, 485U, 486U,
    486U, 487U, 487U, 487U, 488U, 488U, 489U, 489U, 490U, 490U, 491U, 491U, 492U,
    492U, 493U, 493U, 494U, 494U, 495U, 495U, 496U, 496U, 497U, 497U, 498U, 498U,
    499U, 499U, 500U, 500U, 501U, 501U, 501U, 502U, 502U, 503U, 503U, 504U, 504U,
    505U, 505U, 506U, 506U, 507U, 507U, 508U, 508U, 509U, 509U, 510U, 510U, 511U,
    511U, 512U, 512U, 513U, 513U, 514U, 514U, 515U, 515U, 516U, 516U, 517U, 517U,
    518U, 518U, 519U, 519U, 520U, 520U, 521U, 521U, 522U, 523U, 523U, 524U, 524U,
    525U, 525U, 526U, 526U, 527U, 527U, 528U, 528U, 529U, 529U, 530U, 530U, 531U,
    531U, 532U, 532U, 533U, 533U, 534U, 534U, 535U, 535U, 536U, 536U, 537U, 538U,
    538U, 539U, 539U, 540U, 540U, 541U, 541U, 542U, 542U, 543U, 543U, 544U, 544U,
    545U, 545U, 546U, 547U, 547U, 548U, 548U, 549U, 549U, 550U, 550U, 551U, 551U,
    552U, 552U, 553U, 554U, 554U, 555U, 555U, 556U, 556U, 557U, 557U, 558U, 558U,
    559U, 560U, 560U, 561U, 561U, 562U, 562U, 563U, 563U, 564U, 564U, 565U, 566U,
    566U, 567U, 567U, 568U, 568U, 569U, 569U, 570U, 571U, 571U, 572U, 572U, 573U,
    573U, 574U, 574U, 575U, 576U, 576U, 577U, 577U, 578U, 578U, 579U, 580U, 580U,
    581U, 581U, 582U, 582U, 583U, 584U, 584U, 585U, 585U, 586U, 586U, 587U, 588U,
    588U, 589U, 589U, 590U, 590U, 591U, 592U, 592U, 593U, 593U, 594U, 594U, 595U,
    596U, 596U, 597U, 597U, 598U, 599U, 599U, 600U, 600U, 601U, 602U, 602U, 603U,
    603U, 604U, 604U, 605U, 606U, 606U, 607U, 607U, 608U, 609U, 609U, 610U, 610U,
    611U, 612U, 612U, 613U, 613U, 614U, 615U, 615U, 616U, 616U, 617U, 618U, 618U,
    619U, 619U, 620U, 621U, 621U, 622U, 622U, 623U, 624U, 624U, 625U, 625U, 626U,
    627U, 627U, 628U, 629U, 629U, 630U, 630U, 631U, 632U, 632U, 633U, 633U, 634U,
    635U, 635U, 636U, 637U, 637U, 638U, 638U, 639U, 640U, 640U, 641U, 642U, 642U,
    643U, 643U, 644U, 645U, 645U, 646U, 647U, 647U, 648U, 649U, 649U, 650U, 650U,
    651U, 652U, 652U, 653U, 654U, 654U, 655U, 656U, 656U, 657U, 657U, 658U, 659U,
    659U, 660U, 661U, 661U, 662U, 663U, 663U, 664U, 665U, 665U, 666U, 667U, 667U,
    668U, 668U, 669U, 670U, 670U, 671U, 672U, 672U, 673U, 674U, 674U, 675U, 676U,
    676U, 677U, 678U, 678U, 679U, 680U, 680U, 681U, 682U, 682U, 683U, 684U, 684U,
    685U, 686U, 686U, 687U, 688U, 688U, 689U, 690U, 690U, 691U, 692U, 692U, 693U,
    694U, 694U, 695U, 696U, 696U, 697U, 698U, 699U, 699U, 700U, 701U, 701U, 702U,
    703U, 703U, 704U, 705U, 705U, 706U, 707U, 707U, 708U, 709U, 710U, 710U, 711U,
    712U, 712U, 713U, 714U, 714U, 715U, 716U, 717U, 717U, 718U, 719U, 719U, 720U,
    721U, 721U, 722U, 723U, 724U, 724U, 725U, 726U, 726U, 727U, 728U, 729U, 729U,
    730U, 731U, 731U, 732U, 733U, 734U, 734U, 735U, 736U, 736U, 737U, 738U, 739U,
    739U, 740U, 741U, 741U, 742U, 743U, 744U, 744U, 745U, 746U, 747U, 747U, 748U,
    749U, 749U, 750U, 751U, 752U, 752U, 753U, 754U, 755U, 755U, 756U, 757U, 758U,
    758U, 759U, 760U, 761U, 761U, 762U, 763U, 764U, 764U, 765U, 766U, 766U, 767U,
    768U, 769U, 769U, 770U, 771U, 772U, 773U, 773U, 774U, 775U, 776U, 776U, 777U,
    778U, 779U, 779U, 780U, 781U, 782U, 782U, 783U, 784U, 785U, 785U, 786U, 787U,
    788U, 789U, 789U, 790U, 791U, 792U, 792U, 793U, 794U, 795U, 795U, 796U, 797U,
    798U, 799U, 799U, 800U, 801U, 802U, 803U, 803U, 804U, 805U, 806U, 806U, 807U,
    808U, 809U, 810U, 810U, 811U, 812U, 813U, 814U, 814U, 815U, 816U, 817U, 818U,
    818U, 819U, 820U, 821U, 822U, 822U, 823U, 824U, 825U, 826U, 826U, 827U, 828U,
    829U, 830U, 830U, 831U, 832U, 833U, 834U, 835U, 835U, 836U, 837U, 838U, 839U,
    839U, 840U, 841U, 842U, 843U, 844U, 844U, 845U, 846U, 847U, 848U, 848U, 849U,
    850U, 851U, 852U, 853U, 853U, 854U, 855U, 856U, 857U, 858U, 859U, 859U, 860U,
    861U, 862U, 863U, 864U, 864U, 865U, 866U, 867U, 868U, 869U, 869U, 870U, 871U,
    872U, 873U, 874U, 875U, 875U, 876U, 877U, 878U, 879U, 880U, 881U, 881U, 882U,
    883U, 884U, 885U, 886U, 887U, 888U, 888U, 889U, 890U, 891U, 892U, 893U, 894U,
    894U, 895U, 896U, 897U, 898U, 899U, 900U, 901U, 901U, 902U, 903U, 904U, 905U,
    906U, 907U, 908U, 909U, 909U, 910U, 911U, 912U, 913U, 914U, 915U, 916U, 917U,
    917U, 918U, 919U, 920U, 921U, 922U, 923U, 924U, 925U, 926U, 927U, 927U, 928U,
    929U, 930U, 931U, 932U, 933U, 934U, 935U, 936U, 937U, 937U, 938U, 939U, 940U,
    941U, 942U, 943U, 944U, 945U, 946U, 947U, 948U, 948U, 949U, 950U, 951U, 952U,
    953U, 954U, 955U, 956U, 957U, 958U, 959U, 960U, 961U, 962U, 962U, 963U, 964U,
    965U, 966U, 967U, 968U, 969U, 970U, 971U, 972U, 973U, 974U, 975U, 976U, 977U,
    978U, 979U, 980U, 981U, 981U, 982U, 983U, 984U, 985U, 986U, 987U, 988U, 989U,
    990U, 991U, 992U, 993U, 994U, 995U, 996U, 997U, 998U, 999U, 1000U, 1001U,
    1002U, 1003U, 1004U, 1005U, 1006U, 1007U, 1008U, 1009U, 1010U, 1011U, 1012U,
    1013U, 1014U, 1015U, 1016U, 1017U, 1018U, 1019U, 1020U, 1021U, 1022U, 1023U,
    1024U, 1025U, 1026U, 1027U, 1028U, 1029U, 1030U, 1031U, 1032U, 1033U, 1034U,
    1035U, 1036U, 1037U, 1038U, 1039U, 1040U, 1041U, 1042U, 1043U, 1044U, 1045U,
    1046U, 1047U, 1048U, 1049U, 1050U, 1051U, 1052U, 1053U, 1054U, 1055U, 1056U,
    1057U, 1058U, 1059U, 1060U, 1061U, 1062U, 1063U, 1064U, 1065U, 1066U, 1068U,
    1069U, 1070U, 1071U, 1072U, 1073U, 1074U, 1075U, 1076U, 1077U, 1078U, 1079U,
    1080U, 1081U, 1082U, 1083U, 1084U, 1085U, 1086U, 1088U, 1089U, 1090U, 1091U,
    1092U, 1093U, 1094U, 1095U, 1096U, 1097U, 1098U, 1099U, 1100U, 1101U, 1103U,
    1104U, 1105U, 1106U, 1107U, 1108U, 1109U, 1110U, 1111U, 1112U, 1113U, 1114U,
    1116U, 1117U, 1118U, 1119U, 1120U, 1121U, 1122U, 1123U, 1124U, 1125U, 1126U,
    1128U, 1129U, 1130U, 1131U, 1132U, 1133U, 1134U, 1135U, 1136U, 1138U, 1139U,
    1140U, 1141U, 1142U, 1143U, 1144U, 1145U, 1146U, 1148U, 1149U, 1150U, 1151U,
    1152U, 1153U, 1154U, 1155U, 1157U, 1158U, 1159U, 1160U, 1161U, 1162U, 1163U,
    1165U, 1166U, 1167U, 1168U, 1169U, 1170U, 1171U, 1173U, 1174U, 1175U, 1176U,
    1177U, 1178U, 1179U, 1181U, 1182U, 1183U, 1184U, 1185U, 1186U, 1188U, 1189U,
    1190U, 1191U, 1192U, 1193U, 1194U, 1196U, 1197U, 1198U, 1199U, 1200U, 1202U,
    1203U, 1204U, 1205U, 1206U, 1207U, 1209U, 1210U, 1211U, 1212U, 1213U, 1214U,
    1216U, 1217U, 1218U, 1219U, 1220U, 1222U, 1223U, 1224U, 1225U, 1226U, 1228U,
    1229U, 1230U, 1231U, 1232U, 1234U, 1235U, 1236U, 1237U, 1238U, 1240U, 1241U,
    1242U, 1243U, 1245U, 1246U, 1247U, 1248U, 1249U, 1251U, 1252U, 1253U, 1254U,
    1256U, 1257U, 1258U, 1259U, 1260U, 1262U, 1263U, 1264U, 1265U, 1267U, 1268U,
    1269U, 1270U, 1272U, 1273U, 1274U, 1275U, 1277U, 1278U, 1279U, 1280U, 1282U,
    1283U, 1284U, 1285U, 1287U, 1288U, 1289U, 1290U, 1292U, 1293U, 1294U, 1295U,
    1297U, 1298U, 1299U, 1300U, 1302U, 1303U, 1304U, 1306U, 1307U, 1308U, 1309U,
    1311U, 1312U, 1313U, 1315U, 1316U, 1317U, 1318U, 1320U, 1321U, 1322U, 1324U,
    1325U, 1326U, 1327U, 1329U, 1330U, 1331U, 1333U, 1334U, 1335U, 1337U, 1338U,
    1339U, 1340U, 1342U, 1343U, 1344U, 1346U, 1347U, 1348U, 1350U, 1351U, 1352U,
    1354U, 1355U, 1356U, 1358U, 1359U, 1360U, 1362U, 1363U, 1364U, 1366U, 1367U,
    1368U, 1370U, 1371U, 1372U, 1374U, 1375U, 1376U, 1378U, 1379U, 1380U, 1382U,
    1383U, 1384U, 1386U, 1387U, 1388U, 1390U, 1391U, 1393U, 1394U, 1395U, 1397U,
    1398U, 1399U, 1401U, 1402U, 1403U, 1405U, 1406U, 1408U, 1409U, 1410U, 1412U,
    1413U, 1414U, 1416U, 1417U, 1419U, 1420U, 1421U, 1423U, 1424U, 1426U, 1427U,
    1428U, 1430U, 1431U, 1433U, 1434U, 1435U, 1437U, 1438U, 1440U, 1441U, 1442U,
    1444U, 1445U, 1447U, 1448U, 1449U, 1451U, 1452U, 1454U, 1455U, 1457U, 1458U,
    1459U, 1461U, 1462U, 1464U, 1465U, 1467U, 1468U, 1469U, 1471U, 1472U, 1474U,
    1475U, 1477U, 1478U, 1479U, 1481U, 1482U, 1484U, 1485U, 1487U, 1488U, 1490U,
    1491U, 1493U, 1494U, 1495U, 1497U, 1498U, 1500U, 1501U, 1503U, 1504U, 1506U,
    1507U, 1509U, 1510U, 1512U, 1513U, 1515U, 1516U, 1518U, 1519U, 1521U, 1522U,
    1523U, 1525U, 1526U, 1528U, 1529U, 1531U, 1532U, 1534U, 1535U, 1537U, 1538U,
    1540U, 1541U, 1543U, 1544U, 1546U, 1547U, 1549U, 1551U, 1552U, 1554U, 1555U,
    1557U, 1558U, 1560U, 1561U, 1563U, 1564U, 1566U, 1567U, 1569U, 1570U, 1572U,
    1573U, 1575U, 1576U, 1578U, 1580U, 1581U, 1583U, 1584U, 1586U, 1587U, 1589U,
    1590U, 1592U, 1594U, 1595U, 1597U, 1598U, 1600U, 1601U, 1603U, 1604U, 1606U,
    1608U, 1609U, 1611U, 1612U, 1614U, 1615U, 1617U, 1619U, 1620U, 1622U, 1623U,
    1625U, 1627U, 1628U, 1630U, 1631U, 1633U, 1635U, 1636U, 1638U, 1639U, 1641U,
    1643U, 1644U, 1646U, 1647U, 1649U, 1651U, 1652U, 1654U, 1655U, 1657U, 1659U,
    1660U, 1662U, 1664U, 1665U, 1667U, 1668U, 1670U, 1672U, 1673U, 1675U, 1677U,
    1678U, 1680U, 1681U, 1683U, 1685U, 1686U, 1688U, 1690U, 1691U, 1693U, 1695U,
    1696U, 1698U, 1700U, 1701U, 1703U, 1705U, 1706U, 1708U, 1710U, 1711U, 1713U,
    1715U, 1716U, 1718U, 1720U, 1721U, 1723U, 1725U, 1726U, 1728U, 1730U, 1731U,
    1733U, 1735U, 1737U, 1738U, 1740U, 1742U, 1743U, 1745U, 1747U, 1748U, 1750U,
    1752U, 1754U, 1755U, 1757U, 1759U, 1760U, 1762U, 1764U, 1766U, 1767U, 1769U,
    1771U, 1773U, 1774U, 1776U, 1778U, 1780U, 1781U, 1783U, 1785U, 1786U, 1788U,
    1790U, 1792U, 1793U, 1795U, 1797U, 1799U, 1801U, 1802U, 1804U, 1806U, 1808U,
    1809U, 1811U, 1813U, 1815U, 1816U, 1818U, 1820U, 1822U, 1824U, 1825U, 1827U,
    1829U, 1831U, 1832U, 1834U, 1836U, 1838U, 1840U, 1841U, 1843U, 1845U, 1847U,
    1849U, 1850U, 1852U, 1854U, 1856U, 1858U, 1859U, 1861U, 1863U, 1865U, 1867U,
    1869U, 1870U, 1872U, 1874U, 1876U, 1878U, 1880U, 1881U, 1883U, 1885U, 1887U,
    1889U, 1891U, 1892U, 1894U, 1896U, 1898U, 1900U, 1902U, 1904U, 1905U, 1907U,
    1909U, 1911U, 1913U, 1915U, 1917U, 1919U, 1920U, 1922U, 1924U, 1926U, 1928U,
    1930U, 1932U, 1934U, 1935U, 1937U, 1939U, 1941U, 1943U, 1945U, 1947U, 1949U,
    1951U, 1953U, 1954U, 1956U, 1958U, 1960U, 1962U, 1964U, 1966U, 1968U, 1970U,
    1972U, 1974U, 1976U, 1978U, 1979U, 1981U, 1983U, 1985U, 1987U, 1989U, 1991U,
    1993U, 1995U, 1997U, 1999U, 2001U, 2003U, 2005U, 2007U, 2009U, 2011U, 2013U,
    2015U, 2017U, 2019U, 2020U, 2022U, 2024U, 2026U, 2028U, 2030U, 2032U, 2034U,
    2036U, 2038U, 2040U, 2042U, 2044U, 2046U, 2048U, 2050U, 2052U, 2054U, 2056U,
    2058U, 2060U, 2062U, 2064U, 2066U, 2068U, 2070U, 2072U, 2075U, 2077U, 2079U,
    2081U, 2083U, 2085U, 2087U, 2089U, 2091U, 2093U, 2095U, 2097U, 2099U, 2101U,
    2103U, 2105U, 2107U, 2109U, 2111U, 2113U, 2115U, 2118U, 2120U, 2122U, 2124U,
    2126U, 2128U, 2130U, 2132U, 2134U, 2136U, 2138U, 2140U, 2142U, 2145U, 2147U,
    2149U, 2151U, 2153U, 2155U, 2157U, 2159U, 2161U, 2164U, 2166U, 2168U, 2170U,
    2172U, 2174U, 2176U, 2178U, 2180U, 2183U, 2185U, 2187U, 2189U, 2191U, 2193U,
    2195U, 2198U, 2200U, 2202U, 2204U, 2206U, 2208U, 2211U, 2213U, 2215U, 2217U,
    2219U, 2221U, 2223U, 2226U, 2228U, 2230U, 2232U, 2234U, 2237U, 2239U, 2241U,
    2243U, 2245U, 2248U, 2250U, 2252U, 2254U, 2256U, 2259U, 2261U, 2263U, 2265U,
    2267U, 2270U, 2272U, 2274U, 2276U, 2278U, 2281U, 2283U, 2285U, 2287U, 2290U,
    2292U, 2294U, 2296U, 2299U, 2301U, 2303U, 2305U, 2308U, 2310U, 2312U, 2314U,
    2317U, 2319U, 2321U, 2323U, 2326U, 2328U, 2330U, 2333U, 2335U, 2337U, 2339U,
    2342U, 2344U, 2346U, 2349U, 2351U, 2353U, 2355U, 2358U, 2360U, 2362U, 2365U,
    2367U, 2369U, 2372U, 2374U, 2376U, 2379U, 2381U, 2383U, 2386U, 2388U, 2390U,
    2393U, 2395U, 2397U, 2400U, 2402U, 2404U, 2407U, 2409U, 2411U, 2414U, 2416U,
    2418U, 2421U, 2423U, 2425U, 2428U, 2430U, 2433U, 2435U, 2437U, 2440U, 2442U,
    2445U, 2447U, 2449U, 2452U, 2454U, 2456U, 2459U, 2461U, 2464U, 2466U, 2468U,
    2471U, 2473U, 2476U, 2478U, 2481U, 2483U, 2485U, 2488U, 2490U, 2493U, 2495U,
    2498U, 2500U, 2502U, 2505U, 2507U, 2510U, 2512U, 2515U, 2517U, 2520U, 2522U,
    2525U, 2527U, 2530U, 2532U, 2534U, 2537U, 2539U, 2542U, 2544U, 2547U, 2549U,
    2552U, 2554U, 2557U, 2559U, 2562U, 2564U, 2567U, 2569U, 2572U, 2574U, 2577U,
    2579U, 2582U, 2584U, 2587U, 2590U, 2592U, 2595U, 2597U, 2600U, 2602U, 2605U,
    2607U, 2610U, 2612U, 2615U, 2618U, 2620U, 2623U, 2625U, 2628U, 2630U, 2633U,
    2635U, 2638U, 2641U, 2643U, 2646U, 2648U, 2651U, 2654U, 2656U, 2659U, 2661U,
    2664U, 2667U, 2669U, 2672U, 2674U, 2677U, 2680U, 2682U, 2685U, 2687U, 2690U,
    2693U, 2695U, 2698U, 2701U, 2703U, 2706U, 2709U, 2711U, 2714U, 2716U, 2719U,
    2722U, 2724U, 2727U, 2730U, 2732U, 2735U, 2738U, 2740U, 2743U, 2746U, 2749U,
    2751U, 2754U, 2757U, 2759U, 2762U, 2765U, 2767U, 2770U, 2773U, 2776U, 2778U,
    2781U, 2784U, 2786U, 2789U, 2792U, 2795U, 2797U, 2800U, 2803U, 2805U, 2808U,
    2811U, 2814U, 2816U, 2819U, 2822U, 2825U, 2828U, 2830U, 2833U, 2836U, 2839U,
    2841U, 2844U, 2847U, 2850U, 2852U, 2855U, 2858U, 2861U, 2864U, 2866U, 2869U,
    2872U, 2875U, 2878U, 2880U, 2883U, 2886U, 2889U, 2892U, 2895U, 2897U, 2900U,
    2903U, 2906U, 2909U, 2912U, 2914U, 2917U, 2920U, 2923U, 2926U, 2929U, 2932U,
    2934U, 2937U, 2940U, 2943U, 2946U, 2949U, 2952U, 2955U, 2957U, 2960U, 2963U,
    2966U, 2969U, 2972U, 2975U, 2978U, 2981U, 2984U, 2986U, 2989U, 2992U, 2995U,
    2998U, 3001U, 3004U, 3007U, 3010U, 3013U, 3016U, 3019U, 3022U, 3025U, 3028U,
    3031U, 3034U, 3036U, 3039U, 3042U, 3045U, 3048U, 3051U, 3054U, 3057U, 3060U,
    3063U, 3066U, 3069U, 3072U, 3075U, 3078U, 3081U, 3084U, 3087U, 3090U, 3093U,
    3096U, 3099U, 3102U, 3105U, 3109U, 3112U, 3115U, 3118U, 3121U, 3124U, 3127U,
    3130U, 3133U, 3136U, 3139U, 3142U, 3145U, 3148U, 3151U, 3154U, 3157U, 3161U,
    3164U, 3167U, 3170U, 3173U, 3176U, 3179U, 3182U, 3185U, 3188U, 3192U, 3195U,
    3198U, 3201U, 3204U, 3207U, 3210U, 3213U, 3217U, 3220U, 3223U, 3226U, 3229U,
    3232U, 3236U, 3239U, 3242U, 3245U, 3248U, 3251U, 3255U, 3258U, 3261U, 3264U,
    3267U, 3271U, 3274U, 3277U, 3280U, 3283U, 3287U, 3290U, 3293U, 3296U, 3299U,
    3303U, 3306U, 3309U, 3312U, 3316U, 3319U, 3322U, 3325U, 3329U, 3332U, 3335U,
    3338U, 3342U, 3345U, 3348U, 3351U, 3355U, 3358U, 3361U, 3364U, 3368U, 3371U,
    3374U, 3378U, 3381U, 3384U, 3388U, 3391U, 3394U, 3398U, 3401U, 3404U, 3407U,
    3411U, 3414U, 3417U, 3421U, 3424U, 3428U, 3431U, 3434U, 3438U, 3441U, 3444U,
    3448U, 3451U, 3454U, 3458U, 3461U, 3465U, 3468U, 3471U, 3475U, 3478U, 3481U,
    3485U, 3488U, 3492U, 3495U, 3499U, 3502U, 3505U, 3509U, 3512U, 3516U, 3519U,
    3523U, 3526U, 3529U, 3533U, 3536U, 3540U, 3543U, 3547U, 3550U, 3554U, 3557U,
    3561U, 3564U, 3568U, 3571U, 3575U, 3578U, 3582U, 3585U, 3589U, 3592U, 3596U,
    3599U, 3603U, 3606U, 3610U, 3613U, 3617U, 3620U, 3624U, 3627U, 3631U, 3634U,
    3638U, 3641U, 3645U, 3649U, 3652U, 3656U, 3659U, 3663U, 3666U, 3670U, 3674U,
    3677U, 3681U, 3684U, 3688U, 3692U, 3695U, 3699U, 3702U, 3706U, 3710U, 3713U,
    3717U, 3721U, 3724U, 3728U, 3732U, 3735U, 3739U, 3742U, 3746U, 3750U, 3753U,
    3757U, 3761U, 3764U, 3768U, 3772U, 3776U, 3779U, 3783U, 3787U, 3790U, 3794U,
    3798U, 3801U, 3805U, 3809U, 3813U, 3816U, 3820U, 3824U, 3827U, 3831U, 3835U,
    3839U, 3842U, 3846U, 3850U, 3854U, 3858U, 3861U, 3865U, 3869U, 3873U, 3876U,
    3880U, 3884U, 3888U, 3892U, 3895U, 3899U, 3903U, 3907U, 3911U, 3914U, 3918U,
    3922U, 3926U, 3930U, 3934U, 3937U, 3941U, 3945U, 3949U, 3953U, 3957U, 3961U,
    3964U, 3968U, 3972U, 3976U, 3980U, 3984U, 3988U, 3992U, 3996U, 3999U, 4003U,
    4007U, 4011U, 4015U, 4019U, 4023U, 4027U, 4031U, 4035U, 4039U, 4043U, 4047U,
    4051U, 4055U, 4059U, 4062U, 4066U, 4070U, 4074U, 4078U, 4082U, 4086U, 4090U,
    4094U, 4098U, 4102U, 4106U, 4110U, 4114U, 4118U, 4122U, 4126U, 4131U, 4135U,
    4139U, 4143U, 4147U, 4151U, 4155U, 4159U, 4163U, 4167U, 4171U, 4175U, 4179U,
    4183U, 4187U, 4191U, 4196U, 4200U, 4204U, 4208U, 4212U, 4216U, 4220U, 4224U,
    4228U, 4233U, 4237U, 4241U, 4245U, 4249U, 4253U, 4258U, 4262U, 4266U, 4270U,
    4274U, 4278U, 4283U, 4287U, 4291U, 4295U, 4299U, 4303U, 4308U, 4312U, 4316U,
    4320U, 4325U, 4329U, 4333U, 4337U, 4341U, 4346U, 4350U, 4354U, 4358U, 4363U,
    4367U, 4371U, 4376U, 4380U, 4384U, 4388U, 4393U, 4397U, 4401U, 4406U, 4410U,
    4414U, 4419U, 4423U, 4427U, 4431U, 4436U, 4440U, 4444U, 4449U, 4453U, 4458U,
    4462U, 4466U, 4471U, 4475U, 4479U, 4484U, 4488U, 4492U, 4497U, 4501U, 4506U,
    4510U, 4514U, 4519U, 4523U, 4528U, 4532U, 4537U, 4541U, 4545U, 4550U, 4554U,
    4559U, 4563U, 4568U, 4572U, 4577U, 4581U, 4586U, 4590U, 4595U, 4599U, 4604U,
    4608U, 4613U, 4617U, 4622U, 4626U, 4631U, 4635U, 4640U, 4644U, 4649U, 4653U,
    4658U, 4662U, 4667U, 4671U, 4676U, 4681U, 4685U, 4690U, 4694U, 4699U, 4704U,
    4708U, 4713U, 4717U, 4722U, 4727U, 4731U, 4736U, 4740U, 4745U, 4750U, 4754U,
    4759U, 4764U, 4768U, 4773U, 4778U, 4782U, 4787U, 4792U, 4796U, 4801U, 4806U,
    4810U, 4815U, 4820U, 4825U, 4829U, 4834U, 4839U, 4843U, 4848U, 4853U, 4858U,
    4862U, 4867U, 4872U, 4877U, 4881U, 4886U, 4891U, 4896U, 4901U, 4905U, 4910U,
    4915U, 4920U, 4925U, 4929U, 4934U, 4939U, 4944U, 4949U, 4953U, 4958U, 4963U,
    4968U, 4973U, 4978U, 4983U, 4987U, 4992U, 4997U, 5002U, 5007U, 5012U, 5017U,
    5022U, 5027U, 5031U, 5036U, 5041U, 5046U, 5051U, 5056U, 5061U, 5066U, 5071U,
    5076U, 5081U, 5086U, 5091U, 5096U, 5101U, 5106U, 5111U, 5116U, 5121U, 5126U,
    5131U, 5136U, 5141U, 5146U, 5151U, 5156U, 5161U, 5166U, 5171U, 5176U, 5181U,
    5186U, 5191U, 5196U, 5201U, 5206U, 5212U, 5217U, 5222U, 5227U, 5232U, 5237U,
    5242U, 5247U, 5252U, 5258U, 5263U, 5268U, 5273U, 5278U, 5283U, 5288U, 5294U,
    5299U, 5304U, 5309U, 5314U, 5320U, 5325U, 5330U, 5335U, 5340U, 5346U, 5351U,
    5356U, 5361U, 5367U, 5372U, 5377U, 5382U, 5388U, 5393U, 5398U, 5403U, 5409U,
    5414U, 5419U, 5424U, 5430U, 5435U, 5440U, 5446U, 5451U, 5456U, 5462U, 5467U,
    5472U, 5478U, 5483U, 5488U, 5494U, 5499U, 5505U, 5510U, 5515U, 5521U, 5526U,
    5532U, 5537U, 5542U, 5548U, 5553U, 5559U, 5564U, 5569U, 5575U, 5580U, 5586U,
    5591U, 5597U, 5602U, 5608U, 5613U, 5619U, 5624U, 5630U, 5635U, 5641U, 5646U,
    5652U, 5657U, 5663U, 5668U, 5674U, 5679U, 5685U, 5690U, 5696U, 5702U, 5707U,
    5713U, 5718U, 5724U, 5729U, 5735U, 5741U, 5746U, 5752U, 5758U, 5763U, 5769U,
    5774U, 5780U, 5786U, 5791U, 5797U, 5803U, 5808U, 5814U, 5820U, 5825U, 5831U,
    5837U, 5843U, 5848U, 5854U, 5860U, 5865U, 5871U, 5877U, 5883U, 5888U, 5894U,
    5900U, 5906U, 5911U, 5917U, 5923U, 5929U, 5935U, 5940U, 5946U, 5952U, 5958U,
    5964U, 5969U, 5975U, 5981U, 5987U, 5993U, 5999U, 6005U, 6010U, 6016U, 6022U,
    6028U, 6034U, 6040U, 6046U, 6052U, 6058U, 6063U, 6069U, 6075U, 6081U, 6087U,
    6093U, 6099U, 6105U, 6111U, 6117U, 6123U, 6129U, 6135U, 6141U, 6147U, 6153U,
    6159U, 6165U, 6171U, 6177U, 6183U, 6189U, 6195U, 6201U, 6207U, 6213U, 6219U,
    6225U, 6232U, 6238U, 6244U, 6250U, 6256U, 6262U, 6268U, 6274U, 6280U, 6287U,
    6293U, 6299U, 6305U, 6311U, 6317U, 6324U, 6330U, 6336U, 6342U, 6348U, 6354U,
    6361U, 6367U, 6373U, 6379U, 6386U, 6392U, 6398U, 6404U, 6411U, 6417U, 6423U,
    6429U, 6436U, 6442U, 6448U, 6455U, 6461U, 6467U, 6474U, 6480U, 6486U, 6493U,
    6499U, 6505U, 6512U, 6518U, 6524U, 6531U, 6537U, 6543U, 6550U, 6556U, 6563U,
    6569U, 6575U, 6582U, 6588U, 6595U, 6601U, 6608U, 6614U, 6621U, 6627U, 6634U,
    6640U, 6647U, 6653U, 6660U, 6666U, 6673U, 6679U, 6686U, 6692U, 6699U, 6705U,
    6712U, 6718U, 6725U, 6731U, 6738U, 6745U, 6751U, 6758U, 6764U, 6771U, 6778U,
    6784U, 6791U, 6798U, 6804U, 6811U, 6817U, 6824U, 6831U, 6837U, 6844U, 6851U,
    6858U, 6864U, 6871U, 6878U, 6884U, 6891U, 6898U, 6905U, 6911U, 6918U, 6925U,
    6932U, 6938U, 6945U, 6952U, 6959U, 6966U, 6972U, 6979U, 6986U, 6993U, 7000U,
    7006U, 7013U, 7020U, 7027U, 7034U, 7041U, 7048U, 7055U, 7061U, 7068U, 7075U,
    7082U, 7089U, 7096U, 7103U, 7110U, 7117U, 7124U, 7131U, 7138U, 7145U, 7152U,
    7159U, 7166U, 7173U, 7180U, 7187U, 7194U, 7201U, 7208U, 7215U, 7222U, 7229U,
    7236U, 7243U, 7250U, 7257U, 7264U, 7271U, 7279U, 7286U, 7293U, 7300U, 7307U,
    7314U, 7321U, 7328U, 7336U, 7343U, 7350U, 7357U, 7364U, 7372U, 7379U, 7386U,
    7393U, 7400U, 7408U, 7415U, 7422U, 7429U, 7437U, 7444U, 7451U, 7458U, 7466U,
    7473U, 7480U, 7488U, 7495U, 7502U, 7510U, 7517U, 7524U, 7532U, 7539U, 7546U,
    7554U, 7561U, 7569U, 7576U, 7583U, 7591U, 7598U, 7606U, 7613U, 7620U, 7628U,
    7635U, 7643U, 7650U, 7658U, 7665U, 7673U, 7680U, 7688U, 7695U, 7703U, 7710U,
    7718U, 7725U, 7733U, 7740U, 7748U, 7756U, 7763U, 7771U, 7778U, 7786U, 7794U,
    7801U, 7809U, 7816U, 7824U, 7832U, 7839U, 7847U, 7855U, 7862U, 7870U, 7878U,
    7885U, 7893U, 7901U, 7909U, 7916U, 7924U, 7932U, 7940U, 7947U, 7955U, 7963U,
    7971U, 7978U, 7986U, 7994U, 8002U, 8010U, 8018U, 8025U, 8033U, 8041U, 8049U,
    8057U, 8065U, 8073U, 8080U, 8088U, 8096U, 8104U, 8112U, 8120U, 8128U, 8136U,
    8144U, 8152U, 8160U, 8168U, 8176U, 8184U, 8192U, 8200U, 8208U, 8216U, 8224U,
    8232U, 8240U, 8248U, 8256U, 8264U, 8272U, 8280U, 8288U, 8296U, 8304U, 8313U,
    8321U, 8329U, 8337U, 8345U, 8353U, 8361U, 8370U, 8378U, 8386U, 8394U, 8402U,
    8411U, 8419U, 8427U, 8435U, 8443U, 8452U, 8460U, 8468U, 8477U, 8485U, 8493U,
    8501U, 8510U, 8518U, 8526U, 8535U, 8543U, 8551U, 8560U, 8568U, 8576U, 8585U,
    8593U, 8602U, 8610U, 8618U, 8627U, 8635U, 8644U, 8652U, 8661U, 8669U, 8678U,
    8686U, 8695U, 8703U, 8712U, 8720U, 8729U, 8737U, 8746U, 8754U, 8763U, 8771U,
    8780U, 8788U, 8797U, 8806U, 8814U, 8823U, 8832U, 8840U, 8849U, 8857U, 8866U,
    8875U, 8883U, 8892U, 8901U, 8909U, 8918U, 8927U, 8936U, 8944U, 8953U, 8962U,
    8971U, 8979U, 8988U, 8997U, 9006U, 9015U, 9023U, 9032U, 9041U, 9050U, 9059U,
    9068U, 9076U, 9085U, 9094U, 9103U, 9112U, 9121U, 9130U, 9139U, 9148U, 9157U,
    9165U, 9174U, 9183U, 9192U, 9201U, 9210U, 9219U, 9228U, 9237U, 9246U, 9255U,
    9264U, 9274U, 9283U, 9292U, 9301U, 9310U, 9319U, 9328U, 9337U, 9346U, 9355U,
    9365U, 9374U, 9383U, 9392U, 9401U, 9410U, 9420U, 9429U, 9438U, 9447U, 9456U,
    9466U, 9475U, 9484U, 9493U, 9503U, 9512U, 9521U, 9531U, 9540U, 9549U, 9559U,
    9568U, 9577U, 9587U, 9596U, 9605U, 9615U, 9624U, 9634U, 9643U, 9652U, 9662U,
    9671U, 9681U, 9690U, 9700U, 9709U, 9719U, 9728U, 9738U, 9747U, 9757U, 9766U,
    9776U, 9785U, 9795U, 9804U, 9814U, 9824U, 9833U, 9843U, 9852U, 9862U, 9872U,
    9881U, 9891U, 9901U, 9910U, 9920U, 9930U, 9939U, 9949U, 9959U, 9969U, 9978U,
    9988U, 9998U, 10008U, 10017U, 10027U, 10037U, 10047U, 10057U, 10066U, 10076U,
    10086U, 10096U, 10106U, 10116U, 10126U, 10136U, 10145U, 10155U, 10165U,
    10175U, 10185U, 10195U, 10205U, 10215U, 10225U, 10235U, 10245U, 10255U,
    10265U, 10275U, 10285U, 10295U, 10305U, 10315U, 10325U, 10335U, 10346U,
    10356U, 10366U, 10376U, 10386U, 10396U, 10406U, 10417U, 10427U, 10437U,
    10447U, 10457U, 10468U, 10478U, 10488U, 10498U, 10508U, 10519U, 10529U,
    10539U, 10550U, 10560U, 10570U, 10581U, 10591U, 10601U, 10612U, 10622U,
    10632U, 10643U, 10653U, 10664U, 10674U, 10684U, 10695U, 10705U, 10716U,
    10726U, 10737U, 10747U, 10758U, 10768U, 10779U, 10789U, 10800U, 10810U,
    10821U, 10832U, 10842U, 10853U, 10863U, 10874U, 10885U, 10895U, 10906U,
    10917U, 10927U, 10938U, 10949U, 10959U, 10970U, 10981U, 10991U, 11002U,
    11013U, 11024U, 11034U, 11045U, 11056U, 11067U, 11078U, 11088U, 11099U,
    11110U, 11121U, 11132U, 11143U, 11154U, 11165U, 11175U, 11186U, 11197U,
    11208U, 11219U, 11230U, 11241U, 11252U, 11263U, 11274U, 11285U, 11296U,
    11307U, 11318U, 11329U, 11340U, 11351U, 11363U, 11374U, 11385U, 11396U,
    11407U, 11418U, 11429U, 11440U, 11452U, 11463U, 11474U, 11485U, 11496U,
    11508U, 11519U, 11530U, 11541U, 11553U, 11564U, 11575U, 11587U, 11598U,
    11609U, 11621U, 11632U, 11643U, 11655U, 11666U, 11678U, 11689U, 11700U,
    11712U, 11723U, 11735U, 11746U, 11758U, 11769U, 11781U, 11792U, 11804U,
    11815U, 11827U, 11838U, 11850U, 11861U, 11873U, 11885U, 11896U, 11908U,
    11920U, 11931U, 11943U, 11955U, 11966U, 11978U, 11990U, 12001U, 12013U,
    12025U, 12037U, 12048U, 12060U, 12072U, 12084U, 12095U, 12107U, 12119U,
    12131U, 12143U, 12155U, 12167U, 12178U, 12190U, 12202U, 12214U, 12226U,
    12238U, 12250U, 12262U, 12274U, 12286U, 12298U, 12310U, 12322U, 12334U,
    12346U, 12358U, 12370U, 12382U, 12394U, 12407U, 12419U, 12431U, 12443U,
    12455U, 12467U, 12479U, 12492U, 12504U, 12516U, 12528U, 12541U, 12553U,
    12565U, 12577U, 12590U, 12602U, 12614U, 12627U, 12639U, 12651U, 12664U,
    12676U, 12688U, 12701U, 12713U, 12726U, 12738U, 12751U, 12763U, 12775U,
    12788U, 12800U, 12813U, 12825U, 12838U, 12851U, 12863U, 12876U, 12888U,
    12901U, 12913U, 12926U, 12939U, 12951U, 12964U, 12977U, 12989U, 13002U,
    13015U, 13028U, 13040U, 13053U, 13066U, 13078U, 13091U, 13104U, 13117U,
    13130U, 13143U, 13155U, 13168U, 13181U, 13194U, 13207U, 13220U, 13233U,
    13246U, 13259U, 13272U, 13284U, 13297U, 13310U, 13323U, 13336U, 13350U,
    13363U, 13376U, 13389U, 13402U, 13415U, 13428U, 13441U, 13454U, 13467U,
    13481U, 13494U, 13507U, 13520U, 13533U, 13547U, 13560U, 13573U, 13586U,
    13600U, 13613U, 13626U, 13639U, 13653U, 13666U, 13680U, 13693U, 13706U,
    13720U, 13733U, 13746U, 13760U, 13773U, 13787U, 13800U, 13814U, 13827U,
    13841U, 13854U, 13868U, 13881U, 13895U, 13909U, 13922U, 13936U, 13949U,
    13963U, 13977U };

  memcpy(&LUT[0], &uv0[0], sizeof(uint16_T) << 13);
}

void replacement_custom_log_init(void)
{
  static const int16_T iv3[8192] = { -2048, 410, 763, 970, 1117, 1231, 1324,
    1403, 1471, 1531, 1585, 1634, 1679, 1719, 1757, 1793, 1826, 1857, 1886, 1914,
    1940, 1965, 1989, 2011, 2033, 2054, 2074, 2094, 2112, 2130, 2147, 2164, 2181,
    2196, 2212, 2226, 2241, 2255, 2268, 2282, 2295, 2307, 2320, 2332, 2344, 2355,
    2366, 2377, 2388, 2399, 2409, 2419, 2429, 2439, 2448, 2458, 2467, 2476, 2485,
    2494, 2502, 2511, 2519, 2527, 2535, 2543, 2551, 2559, 2566, 2574, 2581, 2588,
    2596, 2603, 2610, 2617, 2623, 2630, 2637, 2643, 2650, 2656, 2662, 2668, 2675,
    2681, 2687, 2693, 2698, 2704, 2710, 2716, 2721, 2727, 2732, 2738, 2743, 2748,
    2753, 2759, 2764, 2769, 2774, 2779, 2784, 2789, 2794, 2798, 2803, 2808, 2813,
    2817, 2822, 2826, 2831, 2835, 2840, 2844, 2849, 2853, 2857, 2861, 2866, 2870,
    2874, 2878, 2882, 2886, 2890, 2894, 2898, 2902, 2906, 2910, 2914, 2917, 2921,
    2925, 2929, 2932, 2936, 2940, 2943, 2947, 2950, 2954, 2958, 2961, 2965, 2968,
    2971, 2975, 2978, 2982, 2985, 2988, 2991, 2995, 2998, 3001, 3004, 3008, 3011,
    3014, 3017, 3020, 3023, 3026, 3029, 3032, 3035, 3038, 3041, 3044, 3047, 3050,
    3053, 3056, 3059, 3062, 3065, 3068, 3070, 3073, 3076, 3079, 3082, 3084, 3087,
    3090, 3092, 3095, 3098, 3100, 3103, 3106, 3108, 3111, 3114, 3116, 3119, 3121,
    3124, 3126, 3129, 3131, 3134, 3136, 3139, 3141, 3144, 3146, 3149, 3151, 3153,
    3156, 3158, 3160, 3163, 3165, 3167, 3170, 3172, 3174, 3177, 3179, 3181, 3184,
    3186, 3188, 3190, 3192, 3195, 3197, 3199, 3201, 3203, 3206, 3208, 3210, 3212,
    3214, 3216, 3218, 3220, 3223, 3225, 3227, 3229, 3231, 3233, 3235, 3237, 3239,
    3241, 3243, 3245, 3247, 3249, 3251, 3253, 3255, 3257, 3259, 3261, 3263, 3265,
    3267, 3269, 3270, 3272, 3274, 3276, 3278, 3280, 3282, 3284, 3285, 3287, 3289,
    3291, 3293, 3295, 3296, 3298, 3300, 3302, 3304, 3305, 3307, 3309, 3311, 3312,
    3314, 3316, 3318, 3319, 3321, 3323, 3325, 3326, 3328, 3330, 3331, 3333, 3335,
    3336, 3338, 3340, 3341, 3343, 3345, 3346, 3348, 3350, 3351, 3353, 3354, 3356,
    3358, 3359, 3361, 3362, 3364, 3366, 3367, 3369, 3370, 3372, 3374, 3375, 3377,
    3378, 3380, 3381, 3383, 3384, 3386, 3387, 3389, 3390, 3392, 3393, 3395, 3396,
    3398, 3399, 3401, 3402, 3404, 3405, 3407, 3408, 3410, 3411, 3412, 3414, 3415,
    3417, 3418, 3420, 3421, 3422, 3424, 3425, 3427, 3428, 3429, 3431, 3432, 3434,
    3435, 3436, 3438, 3439, 3441, 3442, 3443, 3445, 3446, 3447, 3449, 3450, 3451,
    3453, 3454, 3455, 3457, 3458, 3459, 3461, 3462, 3463, 3465, 3466, 3467, 3468,
    3470, 3471, 3472, 3474, 3475, 3476, 3477, 3479, 3480, 3481, 3482, 3484, 3485,
    3486, 3487, 3489, 3490, 3491, 3492, 3494, 3495, 3496, 3497, 3499, 3500, 3501,
    3502, 3503, 3505, 3506, 3507, 3508, 3509, 3511, 3512, 3513, 3514, 3515, 3516,
    3518, 3519, 3520, 3521, 3522, 3524, 3525, 3526, 3527, 3528, 3529, 3530, 3532,
    3533, 3534, 3535, 3536, 3537, 3538, 3540, 3541, 3542, 3543, 3544, 3545, 3546,
    3547, 3548, 3550, 3551, 3552, 3553, 3554, 3555, 3556, 3557, 3558, 3559, 3560,
    3562, 3563, 3564, 3565, 3566, 3567, 3568, 3569, 3570, 3571, 3572, 3573, 3574,
    3575, 3576, 3577, 3578, 3580, 3581, 3582, 3583, 3584, 3585, 3586, 3587, 3588,
    3589, 3590, 3591, 3592, 3593, 3594, 3595, 3596, 3597, 3598, 3599, 3600, 3601,
    3602, 3603, 3604, 3605, 3606, 3607, 3608, 3609, 3610, 3611, 3612, 3613, 3614,
    3615, 3616, 3617, 3618, 3619, 3620, 3621, 3621, 3622, 3623, 3624, 3625, 3626,
    3627, 3628, 3629, 3630, 3631, 3632, 3633, 3634, 3635, 3636, 3637, 3638, 3638,
    3639, 3640, 3641, 3642, 3643, 3644, 3645, 3646, 3647, 3648, 3649, 3649, 3650,
    3651, 3652, 3653, 3654, 3655, 3656, 3657, 3658, 3658, 3659, 3660, 3661, 3662,
    3663, 3664, 3665, 3666, 3666, 3667, 3668, 3669, 3670, 3671, 3672, 3673, 3673,
    3674, 3675, 3676, 3677, 3678, 3679, 3679, 3680, 3681, 3682, 3683, 3684, 3685,
    3685, 3686, 3687, 3688, 3689, 3690, 3690, 3691, 3692, 3693, 3694, 3695, 3695,
    3696, 3697, 3698, 3699, 3700, 3700, 3701, 3702, 3703, 3704, 3704, 3705, 3706,
    3707, 3708, 3709, 3709, 3710, 3711, 3712, 3713, 3713, 3714, 3715, 3716, 3717,
    3717, 3718, 3719, 3720, 3721, 3721, 3722, 3723, 3724, 3724, 3725, 3726, 3727,
    3728, 3728, 3729, 3730, 3731, 3731, 3732, 3733, 3734, 3735, 3735, 3736, 3737,
    3738, 3738, 3739, 3740, 3741, 3741, 3742, 3743, 3744, 3744, 3745, 3746, 3747,
    3747, 3748, 3749, 3750, 3750, 3751, 3752, 3753, 3753, 3754, 3755, 3756, 3756,
    3757, 3758, 3759, 3759, 3760, 3761, 3762, 3762, 3763, 3764, 3764, 3765, 3766,
    3767, 3767, 3768, 3769, 3769, 3770, 3771, 3772, 3772, 3773, 3774, 3774, 3775,
    3776, 3777, 3777, 3778, 3779, 3779, 3780, 3781, 3782, 3782, 3783, 3784, 3784,
    3785, 3786, 3786, 3787, 3788, 3789, 3789, 3790, 3791, 3791, 3792, 3793, 3793,
    3794, 3795, 3795, 3796, 3797, 3797, 3798, 3799, 3799, 3800, 3801, 3802, 3802,
    3803, 3804, 3804, 3805, 3806, 3806, 3807, 3808, 3808, 3809, 3810, 3810, 3811,
    3812, 3812, 3813, 3814, 3814, 3815, 3815, 3816, 3817, 3817, 3818, 3819, 3819,
    3820, 3821, 3821, 3822, 3823, 3823, 3824, 3825, 3825, 3826, 3827, 3827, 3828,
    3828, 3829, 3830, 3830, 3831, 3832, 3832, 3833, 3834, 3834, 3835, 3835, 3836,
    3837, 3837, 3838, 3839, 3839, 3840, 3840, 3841, 3842, 3842, 3843, 3844, 3844,
    3845, 3845, 3846, 3847, 3847, 3848, 3849, 3849, 3850, 3850, 3851, 3852, 3852,
    3853, 3853, 3854, 3855, 3855, 3856, 3856, 3857, 3858, 3858, 3859, 3859, 3860,
    3861, 3861, 3862, 3862, 3863, 3864, 3864, 3865, 3865, 3866, 3867, 3867, 3868,
    3868, 3869, 3870, 3870, 3871, 3871, 3872, 3873, 3873, 3874, 3874, 3875, 3875,
    3876, 3877, 3877, 3878, 3878, 3879, 3880, 3880, 3881, 3881, 3882, 3882, 3883,
    3884, 3884, 3885, 3885, 3886, 3886, 3887, 3888, 3888, 3889, 3889, 3890, 3890,
    3891, 3892, 3892, 3893, 3893, 3894, 3894, 3895, 3896, 3896, 3897, 3897, 3898,
    3898, 3899, 3899, 3900, 3901, 3901, 3902, 3902, 3903, 3903, 3904, 3904, 3905,
    3906, 3906, 3907, 3907, 3908, 3908, 3909, 3909, 3910, 3910, 3911, 3912, 3912,
    3913, 3913, 3914, 3914, 3915, 3915, 3916, 3916, 3917, 3918, 3918, 3919, 3919,
    3920, 3920, 3921, 3921, 3922, 3922, 3923, 3923, 3924, 3924, 3925, 3926, 3926,
    3927, 3927, 3928, 3928, 3929, 3929, 3930, 3930, 3931, 3931, 3932, 3932, 3933,
    3933, 3934, 3934, 3935, 3935, 3936, 3937, 3937, 3938, 3938, 3939, 3939, 3940,
    3940, 3941, 3941, 3942, 3942, 3943, 3943, 3944, 3944, 3945, 3945, 3946, 3946,
    3947, 3947, 3948, 3948, 3949, 3949, 3950, 3950, 3951, 3951, 3952, 3952, 3953,
    3953, 3954, 3954, 3955, 3955, 3956, 3956, 3957, 3957, 3958, 3958, 3959, 3959,
    3960, 3960, 3961, 3961, 3962, 3962, 3963, 3963, 3964, 3964, 3965, 3965, 3966,
    3966, 3967, 3967, 3968, 3968, 3969, 3969, 3970, 3970, 3971, 3971, 3972, 3972,
    3973, 3973, 3973, 3974, 3974, 3975, 3975, 3976, 3976, 3977, 3977, 3978, 3978,
    3979, 3979, 3980, 3980, 3981, 3981, 3982, 3982, 3983, 3983, 3984, 3984, 3984,
    3985, 3985, 3986, 3986, 3987, 3987, 3988, 3988, 3989, 3989, 3990, 3990, 3991,
    3991, 3991, 3992, 3992, 3993, 3993, 3994, 3994, 3995, 3995, 3996, 3996, 3997,
    3997, 3997, 3998, 3998, 3999, 3999, 4000, 4000, 4001, 4001, 4002, 4002, 4003,
    4003, 4003, 4004, 4004, 4005, 4005, 4006, 4006, 4007, 4007, 4008, 4008, 4008,
    4009, 4009, 4010, 4010, 4011, 4011, 4012, 4012, 4012, 4013, 4013, 4014, 4014,
    4015, 4015, 4016, 4016, 4016, 4017, 4017, 4018, 4018, 4019, 4019, 4020, 4020,
    4020, 4021, 4021, 4022, 4022, 4023, 4023, 4024, 4024, 4024, 4025, 4025, 4026,
    4026, 4027, 4027, 4027, 4028, 4028, 4029, 4029, 4030, 4030, 4030, 4031, 4031,
    4032, 4032, 4033, 4033, 4033, 4034, 4034, 4035, 4035, 4036, 4036, 4036, 4037,
    4037, 4038, 4038, 4039, 4039, 4039, 4040, 4040, 4041, 4041, 4042, 4042, 4042,
    4043, 4043, 4044, 4044, 4044, 4045, 4045, 4046, 4046, 4047, 4047, 4047, 4048,
    4048, 4049, 4049, 4050, 4050, 4050, 4051, 4051, 4052, 4052, 4052, 4053, 4053,
    4054, 4054, 4054, 4055, 4055, 4056, 4056, 4057, 4057, 4057, 4058, 4058, 4059,
    4059, 4059, 4060, 4060, 4061, 4061, 4061, 4062, 4062, 4063, 4063, 4063, 4064,
    4064, 4065, 4065, 4065, 4066, 4066, 4067, 4067, 4067, 4068, 4068, 4069, 4069,
    4069, 4070, 4070, 4071, 4071, 4071, 4072, 4072, 4073, 4073, 4073, 4074, 4074,
    4075, 4075, 4075, 4076, 4076, 4077, 4077, 4077, 4078, 4078, 4079, 4079, 4079,
    4080, 4080, 4081, 4081, 4081, 4082, 4082, 4082, 4083, 4083, 4084, 4084, 4084,
    4085, 4085, 4086, 4086, 4086, 4087, 4087, 4088, 4088, 4088, 4089, 4089, 4089,
    4090, 4090, 4091, 4091, 4091, 4092, 4092, 4093, 4093, 4093, 4094, 4094, 4094,
    4095, 4095, 4096, 4096, 4096, 4097, 4097, 4097, 4098, 4098, 4099, 4099, 4099,
    4100, 4100, 4100, 4101, 4101, 4102, 4102, 4102, 4103, 4103, 4103, 4104, 4104,
    4105, 4105, 4105, 4106, 4106, 4106, 4107, 4107, 4108, 4108, 4108, 4109, 4109,
    4109, 4110, 4110, 4111, 4111, 4111, 4112, 4112, 4112, 4113, 4113, 4113, 4114,
    4114, 4115, 4115, 4115, 4116, 4116, 4116, 4117, 4117, 4118, 4118, 4118, 4119,
    4119, 4119, 4120, 4120, 4120, 4121, 4121, 4121, 4122, 4122, 4123, 4123, 4123,
    4124, 4124, 4124, 4125, 4125, 4125, 4126, 4126, 4127, 4127, 4127, 4128, 4128,
    4128, 4129, 4129, 4129, 4130, 4130, 4130, 4131, 4131, 4132, 4132, 4132, 4133,
    4133, 4133, 4134, 4134, 4134, 4135, 4135, 4135, 4136, 4136, 4136, 4137, 4137,
    4137, 4138, 4138, 4139, 4139, 4139, 4140, 4140, 4140, 4141, 4141, 4141, 4142,
    4142, 4142, 4143, 4143, 4143, 4144, 4144, 4144, 4145, 4145, 4145, 4146, 4146,
    4147, 4147, 4147, 4148, 4148, 4148, 4149, 4149, 4149, 4150, 4150, 4150, 4151,
    4151, 4151, 4152, 4152, 4152, 4153, 4153, 4153, 4154, 4154, 4154, 4155, 4155,
    4155, 4156, 4156, 4156, 4157, 4157, 4157, 4158, 4158, 4158, 4159, 4159, 4159,
    4160, 4160, 4160, 4161, 4161, 4161, 4162, 4162, 4162, 4163, 4163, 4163, 4164,
    4164, 4164, 4165, 4165, 4165, 4166, 4166, 4166, 4167, 4167, 4167, 4168, 4168,
    4168, 4169, 4169, 4169, 4170, 4170, 4170, 4171, 4171, 4171, 4172, 4172, 4172,
    4173, 4173, 4173, 4174, 4174, 4174, 4175, 4175, 4175, 4176, 4176, 4176, 4177,
    4177, 4177, 4178, 4178, 4178, 4179, 4179, 4179, 4179, 4180, 4180, 4180, 4181,
    4181, 4181, 4182, 4182, 4182, 4183, 4183, 4183, 4184, 4184, 4184, 4185, 4185,
    4185, 4186, 4186, 4186, 4187, 4187, 4187, 4187, 4188, 4188, 4188, 4189, 4189,
    4189, 4190, 4190, 4190, 4191, 4191, 4191, 4192, 4192, 4192, 4193, 4193, 4193,
    4193, 4194, 4194, 4194, 4195, 4195, 4195, 4196, 4196, 4196, 4197, 4197, 4197,
    4198, 4198, 4198, 4198, 4199, 4199, 4199, 4200, 4200, 4200, 4201, 4201, 4201,
    4202, 4202, 4202, 4202, 4203, 4203, 4203, 4204, 4204, 4204, 4205, 4205, 4205,
    4206, 4206, 4206, 4206, 4207, 4207, 4207, 4208, 4208, 4208, 4209, 4209, 4209,
    4210, 4210, 4210, 4210, 4211, 4211, 4211, 4212, 4212, 4212, 4213, 4213, 4213,
    4213, 4214, 4214, 4214, 4215, 4215, 4215, 4216, 4216, 4216, 4216, 4217, 4217,
    4217, 4218, 4218, 4218, 4219, 4219, 4219, 4219, 4220, 4220, 4220, 4221, 4221,
    4221, 4222, 4222, 4222, 4222, 4223, 4223, 4223, 4224, 4224, 4224, 4225, 4225,
    4225, 4225, 4226, 4226, 4226, 4227, 4227, 4227, 4227, 4228, 4228, 4228, 4229,
    4229, 4229, 4229, 4230, 4230, 4230, 4231, 4231, 4231, 4232, 4232, 4232, 4232,
    4233, 4233, 4233, 4234, 4234, 4234, 4234, 4235, 4235, 4235, 4236, 4236, 4236,
    4236, 4237, 4237, 4237, 4238, 4238, 4238, 4238, 4239, 4239, 4239, 4240, 4240,
    4240, 4240, 4241, 4241, 4241, 4242, 4242, 4242, 4242, 4243, 4243, 4243, 4244,
    4244, 4244, 4244, 4245, 4245, 4245, 4246, 4246, 4246, 4246, 4247, 4247, 4247,
    4248, 4248, 4248, 4248, 4249, 4249, 4249, 4250, 4250, 4250, 4250, 4251, 4251,
    4251, 4252, 4252, 4252, 4252, 4253, 4253, 4253, 4253, 4254, 4254, 4254, 4255,
    4255, 4255, 4255, 4256, 4256, 4256, 4257, 4257, 4257, 4257, 4258, 4258, 4258,
    4258, 4259, 4259, 4259, 4260, 4260, 4260, 4260, 4261, 4261, 4261, 4262, 4262,
    4262, 4262, 4263, 4263, 4263, 4263, 4264, 4264, 4264, 4265, 4265, 4265, 4265,
    4266, 4266, 4266, 4266, 4267, 4267, 4267, 4268, 4268, 4268, 4268, 4269, 4269,
    4269, 4269, 4270, 4270, 4270, 4271, 4271, 4271, 4271, 4272, 4272, 4272, 4272,
    4273, 4273, 4273, 4273, 4274, 4274, 4274, 4275, 4275, 4275, 4275, 4276, 4276,
    4276, 4276, 4277, 4277, 4277, 4277, 4278, 4278, 4278, 4279, 4279, 4279, 4279,
    4280, 4280, 4280, 4280, 4281, 4281, 4281, 4281, 4282, 4282, 4282, 4283, 4283,
    4283, 4283, 4284, 4284, 4284, 4284, 4285, 4285, 4285, 4285, 4286, 4286, 4286,
    4286, 4287, 4287, 4287, 4287, 4288, 4288, 4288, 4289, 4289, 4289, 4289, 4290,
    4290, 4290, 4290, 4291, 4291, 4291, 4291, 4292, 4292, 4292, 4292, 4293, 4293,
    4293, 4293, 4294, 4294, 4294, 4294, 4295, 4295, 4295, 4296, 4296, 4296, 4296,
    4297, 4297, 4297, 4297, 4298, 4298, 4298, 4298, 4299, 4299, 4299, 4299, 4300,
    4300, 4300, 4300, 4301, 4301, 4301, 4301, 4302, 4302, 4302, 4302, 4303, 4303,
    4303, 4303, 4304, 4304, 4304, 4304, 4305, 4305, 4305, 4305, 4306, 4306, 4306,
    4306, 4307, 4307, 4307, 4307, 4308, 4308, 4308, 4308, 4309, 4309, 4309, 4309,
    4310, 4310, 4310, 4310, 4311, 4311, 4311, 4311, 4312, 4312, 4312, 4312, 4313,
    4313, 4313, 4313, 4314, 4314, 4314, 4314, 4315, 4315, 4315, 4315, 4316, 4316,
    4316, 4316, 4317, 4317, 4317, 4317, 4318, 4318, 4318, 4318, 4319, 4319, 4319,
    4319, 4320, 4320, 4320, 4320, 4321, 4321, 4321, 4321, 4322, 4322, 4322, 4322,
    4323, 4323, 4323, 4323, 4324, 4324, 4324, 4324, 4325, 4325, 4325, 4325, 4325,
    4326, 4326, 4326, 4326, 4327, 4327, 4327, 4327, 4328, 4328, 4328, 4328, 4329,
    4329, 4329, 4329, 4330, 4330, 4330, 4330, 4331, 4331, 4331, 4331, 4331, 4332,
    4332, 4332, 4332, 4333, 4333, 4333, 4333, 4334, 4334, 4334, 4334, 4335, 4335,
    4335, 4335, 4336, 4336, 4336, 4336, 4337, 4337, 4337, 4337, 4337, 4338, 4338,
    4338, 4338, 4339, 4339, 4339, 4339, 4340, 4340, 4340, 4340, 4341, 4341, 4341,
    4341, 4341, 4342, 4342, 4342, 4342, 4343, 4343, 4343, 4343, 4344, 4344, 4344,
    4344, 4345, 4345, 4345, 4345, 4345, 4346, 4346, 4346, 4346, 4347, 4347, 4347,
    4347, 4348, 4348, 4348, 4348, 4348, 4349, 4349, 4349, 4349, 4350, 4350, 4350,
    4350, 4351, 4351, 4351, 4351, 4351, 4352, 4352, 4352, 4352, 4353, 4353, 4353,
    4353, 4354, 4354, 4354, 4354, 4354, 4355, 4355, 4355, 4355, 4356, 4356, 4356,
    4356, 4357, 4357, 4357, 4357, 4357, 4358, 4358, 4358, 4358, 4359, 4359, 4359,
    4359, 4359, 4360, 4360, 4360, 4360, 4361, 4361, 4361, 4361, 4362, 4362, 4362,
    4362, 4362, 4363, 4363, 4363, 4363, 4364, 4364, 4364, 4364, 4364, 4365, 4365,
    4365, 4365, 4366, 4366, 4366, 4366, 4366, 4367, 4367, 4367, 4367, 4368, 4368,
    4368, 4368, 4368, 4369, 4369, 4369, 4369, 4370, 4370, 4370, 4370, 4370, 4371,
    4371, 4371, 4371, 4372, 4372, 4372, 4372, 4372, 4373, 4373, 4373, 4373, 4374,
    4374, 4374, 4374, 4374, 4375, 4375, 4375, 4375, 4376, 4376, 4376, 4376, 4376,
    4377, 4377, 4377, 4377, 4378, 4378, 4378, 4378, 4378, 4379, 4379, 4379, 4379,
    4379, 4380, 4380, 4380, 4380, 4381, 4381, 4381, 4381, 4381, 4382, 4382, 4382,
    4382, 4383, 4383, 4383, 4383, 4383, 4384, 4384, 4384, 4384, 4384, 4385, 4385,
    4385, 4385, 4386, 4386, 4386, 4386, 4386, 4387, 4387, 4387, 4387, 4387, 4388,
    4388, 4388, 4388, 4389, 4389, 4389, 4389, 4389, 4390, 4390, 4390, 4390, 4390,
    4391, 4391, 4391, 4391, 4392, 4392, 4392, 4392, 4392, 4393, 4393, 4393, 4393,
    4393, 4394, 4394, 4394, 4394, 4395, 4395, 4395, 4395, 4395, 4396, 4396, 4396,
    4396, 4396, 4397, 4397, 4397, 4397, 4397, 4398, 4398, 4398, 4398, 4399, 4399,
    4399, 4399, 4399, 4400, 4400, 4400, 4400, 4400, 4401, 4401, 4401, 4401, 4401,
    4402, 4402, 4402, 4402, 4403, 4403, 4403, 4403, 4403, 4404, 4404, 4404, 4404,
    4404, 4405, 4405, 4405, 4405, 4405, 4406, 4406, 4406, 4406, 4406, 4407, 4407,
    4407, 4407, 4408, 4408, 4408, 4408, 4408, 4409, 4409, 4409, 4409, 4409, 4410,
    4410, 4410, 4410, 4410, 4411, 4411, 4411, 4411, 4411, 4412, 4412, 4412, 4412,
    4412, 4413, 4413, 4413, 4413, 4413, 4414, 4414, 4414, 4414, 4414, 4415, 4415,
    4415, 4415, 4415, 4416, 4416, 4416, 4416, 4417, 4417, 4417, 4417, 4417, 4418,
    4418, 4418, 4418, 4418, 4419, 4419, 4419, 4419, 4419, 4420, 4420, 4420, 4420,
    4420, 4421, 4421, 4421, 4421, 4421, 4422, 4422, 4422, 4422, 4422, 4423, 4423,
    4423, 4423, 4423, 4424, 4424, 4424, 4424, 4424, 4425, 4425, 4425, 4425, 4425,
    4426, 4426, 4426, 4426, 4426, 4427, 4427, 4427, 4427, 4427, 4428, 4428, 4428,
    4428, 4428, 4429, 4429, 4429, 4429, 4429, 4430, 4430, 4430, 4430, 4430, 4431,
    4431, 4431, 4431, 4431, 4432, 4432, 4432, 4432, 4432, 4432, 4433, 4433, 4433,
    4433, 4433, 4434, 4434, 4434, 4434, 4434, 4435, 4435, 4435, 4435, 4435, 4436,
    4436, 4436, 4436, 4436, 4437, 4437, 4437, 4437, 4437, 4438, 4438, 4438, 4438,
    4438, 4439, 4439, 4439, 4439, 4439, 4440, 4440, 4440, 4440, 4440, 4440, 4441,
    4441, 4441, 4441, 4441, 4442, 4442, 4442, 4442, 4442, 4443, 4443, 4443, 4443,
    4443, 4444, 4444, 4444, 4444, 4444, 4445, 4445, 4445, 4445, 4445, 4446, 4446,
    4446, 4446, 4446, 4446, 4447, 4447, 4447, 4447, 4447, 4448, 4448, 4448, 4448,
    4448, 4449, 4449, 4449, 4449, 4449, 4450, 4450, 4450, 4450, 4450, 4450, 4451,
    4451, 4451, 4451, 4451, 4452, 4452, 4452, 4452, 4452, 4453, 4453, 4453, 4453,
    4453, 4453, 4454, 4454, 4454, 4454, 4454, 4455, 4455, 4455, 4455, 4455, 4456,
    4456, 4456, 4456, 4456, 4457, 4457, 4457, 4457, 4457, 4457, 4458, 4458, 4458,
    4458, 4458, 4459, 4459, 4459, 4459, 4459, 4460, 4460, 4460, 4460, 4460, 4460,
    4461, 4461, 4461, 4461, 4461, 4462, 4462, 4462, 4462, 4462, 4462, 4463, 4463,
    4463, 4463, 4463, 4464, 4464, 4464, 4464, 4464, 4465, 4465, 4465, 4465, 4465,
    4465, 4466, 4466, 4466, 4466, 4466, 4467, 4467, 4467, 4467, 4467, 4467, 4468,
    4468, 4468, 4468, 4468, 4469, 4469, 4469, 4469, 4469, 4469, 4470, 4470, 4470,
    4470, 4470, 4471, 4471, 4471, 4471, 4471, 4471, 4472, 4472, 4472, 4472, 4472,
    4473, 4473, 4473, 4473, 4473, 4473, 4474, 4474, 4474, 4474, 4474, 4475, 4475,
    4475, 4475, 4475, 4475, 4476, 4476, 4476, 4476, 4476, 4477, 4477, 4477, 4477,
    4477, 4477, 4478, 4478, 4478, 4478, 4478, 4479, 4479, 4479, 4479, 4479, 4479,
    4480, 4480, 4480, 4480, 4480, 4481, 4481, 4481, 4481, 4481, 4481, 4482, 4482,
    4482, 4482, 4482, 4482, 4483, 4483, 4483, 4483, 4483, 4484, 4484, 4484, 4484,
    4484, 4484, 4485, 4485, 4485, 4485, 4485, 4486, 4486, 4486, 4486, 4486, 4486,
    4487, 4487, 4487, 4487, 4487, 4487, 4488, 4488, 4488, 4488, 4488, 4489, 4489,
    4489, 4489, 4489, 4489, 4490, 4490, 4490, 4490, 4490, 4490, 4491, 4491, 4491,
    4491, 4491, 4492, 4492, 4492, 4492, 4492, 4492, 4493, 4493, 4493, 4493, 4493,
    4493, 4494, 4494, 4494, 4494, 4494, 4494, 4495, 4495, 4495, 4495, 4495, 4496,
    4496, 4496, 4496, 4496, 4496, 4497, 4497, 4497, 4497, 4497, 4497, 4498, 4498,
    4498, 4498, 4498, 4498, 4499, 4499, 4499, 4499, 4499, 4500, 4500, 4500, 4500,
    4500, 4500, 4501, 4501, 4501, 4501, 4501, 4501, 4502, 4502, 4502, 4502, 4502,
    4502, 4503, 4503, 4503, 4503, 4503, 4503, 4504, 4504, 4504, 4504, 4504, 4504,
    4505, 4505, 4505, 4505, 4505, 4506, 4506, 4506, 4506, 4506, 4506, 4507, 4507,
    4507, 4507, 4507, 4507, 4508, 4508, 4508, 4508, 4508, 4508, 4509, 4509, 4509,
    4509, 4509, 4509, 4510, 4510, 4510, 4510, 4510, 4510, 4511, 4511, 4511, 4511,
    4511, 4511, 4512, 4512, 4512, 4512, 4512, 4512, 4513, 4513, 4513, 4513, 4513,
    4513, 4514, 4514, 4514, 4514, 4514, 4514, 4515, 4515, 4515, 4515, 4515, 4515,
    4516, 4516, 4516, 4516, 4516, 4516, 4517, 4517, 4517, 4517, 4517, 4517, 4518,
    4518, 4518, 4518, 4518, 4518, 4519, 4519, 4519, 4519, 4519, 4519, 4520, 4520,
    4520, 4520, 4520, 4520, 4521, 4521, 4521, 4521, 4521, 4521, 4522, 4522, 4522,
    4522, 4522, 4522, 4523, 4523, 4523, 4523, 4523, 4523, 4524, 4524, 4524, 4524,
    4524, 4524, 4525, 4525, 4525, 4525, 4525, 4525, 4526, 4526, 4526, 4526, 4526,
    4526, 4527, 4527, 4527, 4527, 4527, 4527, 4528, 4528, 4528, 4528, 4528, 4528,
    4529, 4529, 4529, 4529, 4529, 4529, 4530, 4530, 4530, 4530, 4530, 4530, 4530,
    4531, 4531, 4531, 4531, 4531, 4531, 4532, 4532, 4532, 4532, 4532, 4532, 4533,
    4533, 4533, 4533, 4533, 4533, 4534, 4534, 4534, 4534, 4534, 4534, 4535, 4535,
    4535, 4535, 4535, 4535, 4535, 4536, 4536, 4536, 4536, 4536, 4536, 4537, 4537,
    4537, 4537, 4537, 4537, 4538, 4538, 4538, 4538, 4538, 4538, 4539, 4539, 4539,
    4539, 4539, 4539, 4539, 4540, 4540, 4540, 4540, 4540, 4540, 4541, 4541, 4541,
    4541, 4541, 4541, 4542, 4542, 4542, 4542, 4542, 4542, 4543, 4543, 4543, 4543,
    4543, 4543, 4543, 4544, 4544, 4544, 4544, 4544, 4544, 4545, 4545, 4545, 4545,
    4545, 4545, 4546, 4546, 4546, 4546, 4546, 4546, 4546, 4547, 4547, 4547, 4547,
    4547, 4547, 4548, 4548, 4548, 4548, 4548, 4548, 4549, 4549, 4549, 4549, 4549,
    4549, 4549, 4550, 4550, 4550, 4550, 4550, 4550, 4551, 4551, 4551, 4551, 4551,
    4551, 4551, 4552, 4552, 4552, 4552, 4552, 4552, 4553, 4553, 4553, 4553, 4553,
    4553, 4554, 4554, 4554, 4554, 4554, 4554, 4554, 4555, 4555, 4555, 4555, 4555,
    4555, 4556, 4556, 4556, 4556, 4556, 4556, 4556, 4557, 4557, 4557, 4557, 4557,
    4557, 4558, 4558, 4558, 4558, 4558, 4558, 4558, 4559, 4559, 4559, 4559, 4559,
    4559, 4560, 4560, 4560, 4560, 4560, 4560, 4560, 4561, 4561, 4561, 4561, 4561,
    4561, 4562, 4562, 4562, 4562, 4562, 4562, 4562, 4563, 4563, 4563, 4563, 4563,
    4563, 4564, 4564, 4564, 4564, 4564, 4564, 4564, 4565, 4565, 4565, 4565, 4565,
    4565, 4565, 4566, 4566, 4566, 4566, 4566, 4566, 4567, 4567, 4567, 4567, 4567,
    4567, 4567, 4568, 4568, 4568, 4568, 4568, 4568, 4569, 4569, 4569, 4569, 4569,
    4569, 4569, 4570, 4570, 4570, 4570, 4570, 4570, 4570, 4571, 4571, 4571, 4571,
    4571, 4571, 4572, 4572, 4572, 4572, 4572, 4572, 4572, 4573, 4573, 4573, 4573,
    4573, 4573, 4573, 4574, 4574, 4574, 4574, 4574, 4574, 4574, 4575, 4575, 4575,
    4575, 4575, 4575, 4576, 4576, 4576, 4576, 4576, 4576, 4576, 4577, 4577, 4577,
    4577, 4577, 4577, 4577, 4578, 4578, 4578, 4578, 4578, 4578, 4579, 4579, 4579,
    4579, 4579, 4579, 4579, 4580, 4580, 4580, 4580, 4580, 4580, 4580, 4581, 4581,
    4581, 4581, 4581, 4581, 4581, 4582, 4582, 4582, 4582, 4582, 4582, 4582, 4583,
    4583, 4583, 4583, 4583, 4583, 4584, 4584, 4584, 4584, 4584, 4584, 4584, 4585,
    4585, 4585, 4585, 4585, 4585, 4585, 4586, 4586, 4586, 4586, 4586, 4586, 4586,
    4587, 4587, 4587, 4587, 4587, 4587, 4587, 4588, 4588, 4588, 4588, 4588, 4588,
    4588, 4589, 4589, 4589, 4589, 4589, 4589, 4589, 4590, 4590, 4590, 4590, 4590,
    4590, 4590, 4591, 4591, 4591, 4591, 4591, 4591, 4592, 4592, 4592, 4592, 4592,
    4592, 4592, 4593, 4593, 4593, 4593, 4593, 4593, 4593, 4594, 4594, 4594, 4594,
    4594, 4594, 4594, 4595, 4595, 4595, 4595, 4595, 4595, 4595, 4596, 4596, 4596,
    4596, 4596, 4596, 4596, 4597, 4597, 4597, 4597, 4597, 4597, 4597, 4598, 4598,
    4598, 4598, 4598, 4598, 4598, 4599, 4599, 4599, 4599, 4599, 4599, 4599, 4600,
    4600, 4600, 4600, 4600, 4600, 4600, 4601, 4601, 4601, 4601, 4601, 4601, 4601,
    4601, 4602, 4602, 4602, 4602, 4602, 4602, 4602, 4603, 4603, 4603, 4603, 4603,
    4603, 4603, 4604, 4604, 4604, 4604, 4604, 4604, 4604, 4605, 4605, 4605, 4605,
    4605, 4605, 4605, 4606, 4606, 4606, 4606, 4606, 4606, 4606, 4607, 4607, 4607,
    4607, 4607, 4607, 4607, 4608, 4608, 4608, 4608, 4608, 4608, 4608, 4609, 4609,
    4609, 4609, 4609, 4609, 4609, 4609, 4610, 4610, 4610, 4610, 4610, 4610, 4610,
    4611, 4611, 4611, 4611, 4611, 4611, 4611, 4612, 4612, 4612, 4612, 4612, 4612,
    4612, 4613, 4613, 4613, 4613, 4613, 4613, 4613, 4614, 4614, 4614, 4614, 4614,
    4614, 4614, 4614, 4615, 4615, 4615, 4615, 4615, 4615, 4615, 4616, 4616, 4616,
    4616, 4616, 4616, 4616, 4617, 4617, 4617, 4617, 4617, 4617, 4617, 4618, 4618,
    4618, 4618, 4618, 4618, 4618, 4618, 4619, 4619, 4619, 4619, 4619, 4619, 4619,
    4620, 4620, 4620, 4620, 4620, 4620, 4620, 4621, 4621, 4621, 4621, 4621, 4621,
    4621, 4621, 4622, 4622, 4622, 4622, 4622, 4622, 4622, 4623, 4623, 4623, 4623,
    4623, 4623, 4623, 4624, 4624, 4624, 4624, 4624, 4624, 4624, 4624, 4625, 4625,
    4625, 4625, 4625, 4625, 4625, 4626, 4626, 4626, 4626, 4626, 4626, 4626, 4626,
    4627, 4627, 4627, 4627, 4627, 4627, 4627, 4628, 4628, 4628, 4628, 4628, 4628,
    4628, 4628, 4629, 4629, 4629, 4629, 4629, 4629, 4629, 4630, 4630, 4630, 4630,
    4630, 4630, 4630, 4630, 4631, 4631, 4631, 4631, 4631, 4631, 4631, 4632, 4632,
    4632, 4632, 4632, 4632, 4632, 4632, 4633, 4633, 4633, 4633, 4633, 4633, 4633,
    4634, 4634, 4634, 4634, 4634, 4634, 4634, 4634, 4635, 4635, 4635, 4635, 4635,
    4635, 4635, 4636, 4636, 4636, 4636, 4636, 4636, 4636, 4636, 4637, 4637, 4637,
    4637, 4637, 4637, 4637, 4638, 4638, 4638, 4638, 4638, 4638, 4638, 4638, 4639,
    4639, 4639, 4639, 4639, 4639, 4639, 4640, 4640, 4640, 4640, 4640, 4640, 4640,
    4640, 4641, 4641, 4641, 4641, 4641, 4641, 4641, 4641, 4642, 4642, 4642, 4642,
    4642, 4642, 4642, 4643, 4643, 4643, 4643, 4643, 4643, 4643, 4643, 4644, 4644,
    4644, 4644, 4644, 4644, 4644, 4644, 4645, 4645, 4645, 4645, 4645, 4645, 4645,
    4646, 4646, 4646, 4646, 4646, 4646, 4646, 4646, 4647, 4647, 4647, 4647, 4647,
    4647, 4647, 4647, 4648, 4648, 4648, 4648, 4648, 4648, 4648, 4648, 4649, 4649,
    4649, 4649, 4649, 4649, 4649, 4650, 4650, 4650, 4650, 4650, 4650, 4650, 4650,
    4651, 4651, 4651, 4651, 4651, 4651, 4651, 4651, 4652, 4652, 4652, 4652, 4652,
    4652, 4652, 4652, 4653, 4653, 4653, 4653, 4653, 4653, 4653, 4653, 4654, 4654,
    4654, 4654, 4654, 4654, 4654, 4655, 4655, 4655, 4655, 4655, 4655, 4655, 4655,
    4656, 4656, 4656, 4656, 4656, 4656, 4656, 4656, 4657, 4657, 4657, 4657, 4657,
    4657, 4657, 4657, 4658, 4658, 4658, 4658, 4658, 4658, 4658, 4658, 4659, 4659,
    4659, 4659, 4659, 4659, 4659, 4659, 4660, 4660, 4660, 4660, 4660, 4660, 4660,
    4660, 4661, 4661, 4661, 4661, 4661, 4661, 4661, 4661, 4662, 4662, 4662, 4662,
    4662, 4662, 4662, 4662, 4663, 4663, 4663, 4663, 4663, 4663, 4663, 4663, 4664,
    4664, 4664, 4664, 4664, 4664, 4664, 4664, 4665, 4665, 4665, 4665, 4665, 4665,
    4665, 4665, 4666, 4666, 4666, 4666, 4666, 4666, 4666, 4666, 4667, 4667, 4667,
    4667, 4667, 4667, 4667, 4667, 4668, 4668, 4668, 4668, 4668, 4668, 4668, 4668,
    4669, 4669, 4669, 4669, 4669, 4669, 4669, 4669, 4670, 4670, 4670, 4670, 4670,
    4670, 4670, 4670, 4671, 4671, 4671, 4671, 4671, 4671, 4671, 4671, 4672, 4672,
    4672, 4672, 4672, 4672, 4672, 4672, 4673, 4673, 4673, 4673, 4673, 4673, 4673,
    4673, 4674, 4674, 4674, 4674, 4674, 4674, 4674, 4674, 4675, 4675, 4675, 4675,
    4675, 4675, 4675, 4675, 4675, 4676, 4676, 4676, 4676, 4676, 4676, 4676, 4676,
    4677, 4677, 4677, 4677, 4677, 4677, 4677, 4677, 4678, 4678, 4678, 4678, 4678,
    4678, 4678, 4678, 4679, 4679, 4679, 4679, 4679, 4679, 4679, 4679, 4680, 4680,
    4680, 4680, 4680, 4680, 4680, 4680, 4680, 4681, 4681, 4681, 4681, 4681, 4681,
    4681, 4681, 4682, 4682, 4682, 4682, 4682, 4682, 4682, 4682, 4683, 4683, 4683,
    4683, 4683, 4683, 4683, 4683, 4684, 4684, 4684, 4684, 4684, 4684, 4684, 4684,
    4684, 4685, 4685, 4685, 4685, 4685, 4685, 4685, 4685, 4686, 4686, 4686, 4686,
    4686, 4686, 4686, 4686, 4687, 4687, 4687, 4687, 4687, 4687, 4687, 4687, 4687,
    4688, 4688, 4688, 4688, 4688, 4688, 4688, 4688, 4689, 4689, 4689, 4689, 4689,
    4689, 4689, 4689, 4689, 4690, 4690, 4690, 4690, 4690, 4690, 4690, 4690, 4691,
    4691, 4691, 4691, 4691, 4691, 4691, 4691, 4692, 4692, 4692, 4692, 4692, 4692,
    4692, 4692, 4692, 4693, 4693, 4693, 4693, 4693, 4693, 4693, 4693, 4694, 4694,
    4694, 4694, 4694, 4694, 4694, 4694, 4694, 4695, 4695, 4695, 4695, 4695, 4695,
    4695, 4695, 4696, 4696, 4696, 4696, 4696, 4696, 4696, 4696, 4696, 4697, 4697,
    4697, 4697, 4697, 4697, 4697, 4697, 4698, 4698, 4698, 4698, 4698, 4698, 4698,
    4698, 4698, 4699, 4699, 4699, 4699, 4699, 4699, 4699, 4699, 4700, 4700, 4700,
    4700, 4700, 4700, 4700, 4700, 4700, 4701, 4701, 4701, 4701, 4701, 4701, 4701,
    4701, 4701, 4702, 4702, 4702, 4702, 4702, 4702, 4702, 4702, 4703, 4703, 4703,
    4703, 4703, 4703, 4703, 4703, 4703, 4704, 4704, 4704, 4704, 4704, 4704, 4704,
    4704, 4705, 4705, 4705, 4705, 4705, 4705, 4705, 4705, 4705, 4706, 4706, 4706,
    4706, 4706, 4706, 4706, 4706, 4706, 4707, 4707, 4707, 4707, 4707, 4707, 4707,
    4707, 4708, 4708, 4708, 4708, 4708, 4708, 4708, 4708, 4708, 4709, 4709, 4709,
    4709, 4709, 4709, 4709, 4709, 4709, 4710, 4710, 4710, 4710, 4710, 4710, 4710,
    4710, 4710, 4711, 4711, 4711, 4711, 4711, 4711, 4711, 4711, 4712, 4712, 4712,
    4712, 4712, 4712, 4712, 4712, 4712, 4713, 4713, 4713, 4713, 4713, 4713, 4713,
    4713, 4713, 4714, 4714, 4714, 4714, 4714, 4714, 4714, 4714, 4714, 4715, 4715,
    4715, 4715, 4715, 4715, 4715, 4715, 4715, 4716, 4716, 4716, 4716, 4716, 4716,
    4716, 4716, 4717, 4717, 4717, 4717, 4717, 4717, 4717, 4717, 4717, 4718, 4718,
    4718, 4718, 4718, 4718, 4718, 4718, 4718, 4719, 4719, 4719, 4719, 4719, 4719,
    4719, 4719, 4719, 4720, 4720, 4720, 4720, 4720, 4720, 4720, 4720, 4720, 4721,
    4721, 4721, 4721, 4721, 4721, 4721, 4721, 4721, 4722, 4722, 4722, 4722, 4722,
    4722, 4722, 4722, 4722, 4723, 4723, 4723, 4723, 4723, 4723, 4723, 4723, 4723,
    4724, 4724, 4724, 4724, 4724, 4724, 4724, 4724, 4724, 4725, 4725, 4725, 4725,
    4725, 4725, 4725, 4725, 4725, 4726, 4726, 4726, 4726, 4726, 4726, 4726, 4726,
    4726, 4727, 4727, 4727, 4727, 4727, 4727, 4727, 4727, 4727, 4728, 4728, 4728,
    4728, 4728, 4728, 4728, 4728, 4728, 4729, 4729, 4729, 4729, 4729, 4729, 4729,
    4729, 4729, 4730, 4730, 4730, 4730, 4730, 4730, 4730, 4730, 4730, 4731, 4731,
    4731, 4731, 4731, 4731, 4731, 4731, 4731, 4732, 4732, 4732, 4732, 4732, 4732,
    4732, 4732, 4732, 4733, 4733, 4733, 4733, 4733, 4733, 4733, 4733, 4733, 4734,
    4734, 4734, 4734, 4734, 4734, 4734, 4734, 4734, 4734, 4735, 4735, 4735, 4735,
    4735, 4735, 4735, 4735, 4735, 4736, 4736, 4736, 4736, 4736, 4736, 4736, 4736,
    4736, 4737, 4737, 4737, 4737, 4737, 4737, 4737, 4737, 4737, 4738, 4738, 4738,
    4738, 4738, 4738, 4738, 4738, 4738, 4739, 4739, 4739, 4739, 4739, 4739, 4739,
    4739, 4739, 4739, 4740, 4740, 4740, 4740, 4740, 4740, 4740, 4740, 4740, 4741,
    4741, 4741, 4741, 4741, 4741, 4741, 4741, 4741, 4742, 4742, 4742, 4742, 4742,
    4742, 4742, 4742, 4742, 4742, 4743, 4743, 4743, 4743, 4743, 4743, 4743, 4743,
    4743, 4744, 4744, 4744, 4744, 4744, 4744, 4744, 4744, 4744, 4745, 4745, 4745,
    4745, 4745, 4745, 4745, 4745, 4745, 4745, 4746, 4746, 4746, 4746, 4746, 4746,
    4746, 4746, 4746, 4747, 4747, 4747, 4747, 4747, 4747, 4747, 4747, 4747, 4748,
    4748, 4748, 4748, 4748, 4748, 4748, 4748, 4748, 4748, 4749, 4749, 4749, 4749,
    4749, 4749, 4749, 4749, 4749, 4750, 4750, 4750, 4750, 4750, 4750, 4750, 4750,
    4750, 4750, 4751, 4751, 4751, 4751, 4751, 4751, 4751, 4751, 4751, 4752, 4752,
    4752, 4752, 4752, 4752, 4752, 4752, 4752, 4752, 4753, 4753, 4753, 4753, 4753,
    4753, 4753, 4753, 4753, 4754, 4754, 4754, 4754, 4754, 4754, 4754, 4754, 4754,
    4754, 4755, 4755, 4755, 4755, 4755, 4755, 4755, 4755, 4755, 4756, 4756, 4756,
    4756, 4756, 4756, 4756, 4756, 4756, 4756, 4757, 4757, 4757, 4757, 4757, 4757,
    4757, 4757, 4757, 4758, 4758, 4758, 4758, 4758, 4758, 4758, 4758, 4758, 4758,
    4759, 4759, 4759, 4759, 4759, 4759, 4759, 4759, 4759, 4759, 4760, 4760, 4760,
    4760, 4760, 4760, 4760, 4760, 4760, 4761, 4761, 4761, 4761, 4761, 4761, 4761,
    4761, 4761, 4761, 4762, 4762, 4762, 4762, 4762, 4762, 4762, 4762, 4762, 4762,
    4763, 4763, 4763, 4763, 4763, 4763, 4763, 4763, 4763, 4764, 4764, 4764, 4764,
    4764, 4764, 4764, 4764, 4764, 4764, 4765, 4765, 4765, 4765, 4765, 4765, 4765,
    4765, 4765, 4765, 4766, 4766, 4766, 4766, 4766, 4766, 4766, 4766, 4766, 4767,
    4767, 4767, 4767, 4767, 4767, 4767, 4767, 4767, 4767, 4768, 4768, 4768, 4768,
    4768, 4768, 4768, 4768, 4768, 4768, 4769, 4769, 4769, 4769, 4769, 4769, 4769,
    4769, 4769, 4769, 4770, 4770, 4770, 4770, 4770, 4770, 4770, 4770, 4770, 4770,
    4771, 4771, 4771, 4771, 4771, 4771, 4771, 4771, 4771, 4772, 4772, 4772, 4772,
    4772, 4772, 4772, 4772, 4772, 4772, 4773, 4773, 4773, 4773, 4773, 4773, 4773,
    4773, 4773, 4773, 4774, 4774, 4774, 4774, 4774, 4774, 4774, 4774, 4774, 4774,
    4775, 4775, 4775, 4775, 4775, 4775, 4775, 4775, 4775, 4775, 4776, 4776, 4776,
    4776, 4776, 4776, 4776, 4776, 4776, 4776, 4777, 4777, 4777, 4777, 4777, 4777,
    4777, 4777, 4777, 4777, 4778, 4778, 4778, 4778, 4778, 4778, 4778, 4778, 4778,
    4778, 4779, 4779, 4779, 4779, 4779, 4779, 4779, 4779, 4779, 4779, 4780, 4780,
    4780, 4780, 4780, 4780, 4780, 4780, 4780, 4780, 4781, 4781, 4781, 4781, 4781,
    4781, 4781, 4781, 4781, 4781, 4782, 4782, 4782, 4782, 4782, 4782, 4782, 4782,
    4782, 4782, 4783, 4783, 4783, 4783, 4783, 4783, 4783, 4783, 4783, 4783, 4784,
    4784, 4784, 4784, 4784, 4784, 4784, 4784, 4784, 4784, 4785, 4785, 4785, 4785,
    4785, 4785, 4785, 4785, 4785, 4785, 4786, 4786, 4786, 4786, 4786, 4786, 4786,
    4786, 4786, 4786, 4787, 4787, 4787, 4787, 4787, 4787, 4787, 4787, 4787, 4787,
    4787, 4788, 4788, 4788, 4788, 4788, 4788, 4788, 4788, 4788, 4788, 4789, 4789,
    4789, 4789, 4789, 4789, 4789, 4789, 4789, 4789, 4790, 4790, 4790, 4790, 4790,
    4790, 4790, 4790, 4790, 4790, 4791, 4791, 4791, 4791, 4791, 4791, 4791, 4791,
    4791, 4791, 4792, 4792, 4792, 4792, 4792, 4792, 4792, 4792, 4792, 4792, 4792,
    4793, 4793, 4793, 4793, 4793, 4793, 4793, 4793, 4793, 4793, 4794, 4794, 4794,
    4794, 4794, 4794, 4794, 4794, 4794, 4794, 4795, 4795, 4795, 4795, 4795, 4795,
    4795, 4795, 4795, 4795, 4795, 4796, 4796, 4796, 4796, 4796, 4796, 4796, 4796,
    4796, 4796, 4797, 4797, 4797, 4797, 4797, 4797, 4797, 4797, 4797, 4797, 4798,
    4798, 4798, 4798, 4798, 4798, 4798, 4798, 4798, 4798, 4798, 4799, 4799, 4799,
    4799, 4799, 4799, 4799, 4799, 4799, 4799, 4800, 4800, 4800, 4800, 4800, 4800,
    4800, 4800, 4800, 4800, 4800, 4801, 4801, 4801, 4801, 4801, 4801, 4801, 4801,
    4801, 4801, 4802, 4802, 4802, 4802, 4802, 4802, 4802, 4802, 4802, 4802, 4803,
    4803, 4803, 4803, 4803, 4803, 4803, 4803, 4803, 4803, 4803, 4804, 4804, 4804,
    4804, 4804, 4804, 4804, 4804, 4804, 4804, 4805, 4805, 4805, 4805, 4805, 4805,
    4805, 4805, 4805, 4805, 4805, 4806, 4806, 4806, 4806, 4806, 4806, 4806, 4806,
    4806, 4806, 4806, 4807, 4807, 4807, 4807, 4807, 4807, 4807, 4807, 4807, 4807,
    4808, 4808, 4808, 4808, 4808, 4808, 4808, 4808, 4808, 4808, 4808, 4809, 4809,
    4809, 4809, 4809, 4809, 4809, 4809, 4809, 4809, 4810, 4810, 4810, 4810, 4810,
    4810, 4810, 4810, 4810, 4810, 4810, 4811, 4811, 4811, 4811, 4811, 4811, 4811,
    4811, 4811, 4811, 4811, 4812, 4812, 4812, 4812, 4812, 4812, 4812, 4812, 4812,
    4812, 4813, 4813, 4813, 4813, 4813, 4813, 4813, 4813, 4813, 4813, 4813, 4814,
    4814, 4814, 4814, 4814, 4814, 4814, 4814, 4814, 4814, 4814, 4815, 4815, 4815,
    4815, 4815, 4815, 4815, 4815, 4815, 4815, 4816, 4816, 4816, 4816, 4816, 4816,
    4816, 4816, 4816, 4816, 4816, 4817, 4817, 4817, 4817, 4817, 4817, 4817, 4817,
    4817, 4817, 4817, 4818, 4818, 4818, 4818, 4818, 4818, 4818, 4818, 4818, 4818,
    4818, 4819, 4819, 4819, 4819, 4819, 4819, 4819, 4819, 4819, 4819, 4820, 4820,
    4820, 4820, 4820, 4820, 4820, 4820, 4820, 4820, 4820, 4821, 4821, 4821, 4821,
    4821, 4821, 4821, 4821, 4821, 4821, 4821, 4822, 4822, 4822, 4822, 4822, 4822,
    4822, 4822, 4822, 4822, 4822, 4823, 4823, 4823, 4823, 4823, 4823, 4823, 4823,
    4823, 4823, 4823, 4824, 4824, 4824, 4824, 4824, 4824, 4824, 4824, 4824, 4824,
    4824, 4825, 4825, 4825, 4825, 4825, 4825, 4825, 4825, 4825, 4825, 4825, 4826,
    4826, 4826, 4826, 4826, 4826, 4826, 4826, 4826, 4826, 4826, 4827, 4827, 4827,
    4827, 4827, 4827, 4827, 4827, 4827, 4827, 4827, 4828, 4828, 4828, 4828, 4828,
    4828, 4828, 4828, 4828, 4828, 4828, 4829, 4829, 4829, 4829, 4829, 4829, 4829,
    4829, 4829, 4829, 4829, 4830, 4830, 4830, 4830, 4830, 4830, 4830, 4830, 4830,
    4830, 4830, 4831, 4831, 4831, 4831, 4831, 4831, 4831, 4831, 4831, 4831, 4831,
    4832, 4832, 4832, 4832, 4832, 4832, 4832, 4832, 4832, 4832, 4832, 4833, 4833,
    4833, 4833, 4833, 4833, 4833, 4833, 4833, 4833, 4833, 4834, 4834, 4834, 4834,
    4834, 4834, 4834, 4834, 4834, 4834, 4834, 4835, 4835, 4835, 4835, 4835, 4835,
    4835, 4835, 4835, 4835, 4835, 4836, 4836, 4836, 4836, 4836, 4836, 4836, 4836,
    4836, 4836, 4836, 4836, 4837, 4837, 4837, 4837, 4837, 4837, 4837, 4837, 4837,
    4837, 4837, 4838, 4838, 4838, 4838, 4838, 4838, 4838, 4838, 4838, 4838, 4838,
    4839, 4839, 4839, 4839, 4839, 4839, 4839, 4839, 4839, 4839, 4839, 4840, 4840,
    4840, 4840, 4840, 4840, 4840, 4840, 4840, 4840, 4840, 4840, 4841, 4841, 4841,
    4841, 4841, 4841, 4841, 4841, 4841, 4841, 4841, 4842, 4842, 4842, 4842, 4842,
    4842, 4842, 4842, 4842, 4842, 4842, 4843, 4843, 4843, 4843, 4843, 4843, 4843,
    4843, 4843, 4843, 4843, 4843, 4844, 4844, 4844, 4844, 4844, 4844, 4844, 4844,
    4844, 4844, 4844, 4845, 4845, 4845, 4845, 4845, 4845, 4845, 4845, 4845, 4845,
    4845, 4846, 4846, 4846, 4846, 4846, 4846, 4846, 4846, 4846, 4846, 4846, 4846,
    4847, 4847, 4847, 4847, 4847, 4847, 4847, 4847, 4847, 4847, 4847, 4848, 4848,
    4848, 4848, 4848, 4848, 4848, 4848, 4848, 4848, 4848, 4848, 4849, 4849, 4849,
    4849, 4849, 4849, 4849, 4849, 4849, 4849, 4849, 4850, 4850, 4850, 4850, 4850,
    4850, 4850, 4850, 4850, 4850, 4850, 4851, 4851, 4851, 4851, 4851, 4851, 4851,
    4851, 4851, 4851, 4851, 4851, 4852, 4852, 4852, 4852, 4852, 4852, 4852, 4852,
    4852, 4852, 4852, 4852, 4853, 4853, 4853, 4853, 4853, 4853, 4853, 4853, 4853,
    4853, 4853, 4854, 4854, 4854, 4854, 4854, 4854, 4854, 4854, 4854, 4854, 4854,
    4854, 4855, 4855, 4855, 4855, 4855, 4855, 4855, 4855, 4855, 4855, 4855, 4856,
    4856, 4856, 4856, 4856, 4856, 4856, 4856, 4856, 4856, 4856, 4856, 4857, 4857,
    4857, 4857, 4857, 4857, 4857, 4857, 4857, 4857, 4857, 4857, 4858, 4858, 4858,
    4858, 4858, 4858, 4858, 4858, 4858, 4858, 4858, 4859, 4859, 4859, 4859, 4859,
    4859, 4859, 4859, 4859, 4859, 4859, 4859, 4860, 4860, 4860, 4860, 4860, 4860,
    4860, 4860, 4860, 4860, 4860, 4860, 4861, 4861, 4861, 4861, 4861, 4861, 4861,
    4861, 4861, 4861, 4861, 4862, 4862, 4862, 4862, 4862, 4862, 4862, 4862, 4862,
    4862, 4862, 4862, 4863, 4863, 4863, 4863, 4863, 4863, 4863, 4863, 4863, 4863,
    4863, 4863, 4864, 4864, 4864, 4864, 4864, 4864, 4864, 4864, 4864, 4864, 4864,
    4864, 4865, 4865, 4865, 4865, 4865, 4865, 4865, 4865, 4865, 4865, 4865, 4865,
    4866, 4866, 4866, 4866, 4866, 4866, 4866, 4866, 4866, 4866, 4866, 4867, 4867,
    4867, 4867, 4867, 4867, 4867, 4867, 4867, 4867, 4867, 4867, 4868, 4868, 4868,
    4868, 4868, 4868, 4868, 4868, 4868, 4868, 4868, 4868, 4869, 4869, 4869, 4869,
    4869, 4869, 4869, 4869, 4869, 4869, 4869, 4869, 4870, 4870, 4870, 4870, 4870,
    4870, 4870, 4870, 4870, 4870, 4870, 4870, 4871, 4871, 4871, 4871, 4871, 4871,
    4871, 4871, 4871, 4871, 4871, 4871, 4872, 4872, 4872, 4872, 4872, 4872, 4872,
    4872, 4872, 4872, 4872, 4872, 4873, 4873, 4873, 4873, 4873, 4873, 4873, 4873,
    4873, 4873, 4873, 4873, 4874, 4874, 4874, 4874, 4874, 4874, 4874, 4874, 4874,
    4874, 4874, 4874, 4875, 4875, 4875, 4875, 4875, 4875, 4875, 4875, 4875, 4875,
    4875, 4875, 4876, 4876, 4876, 4876, 4876, 4876, 4876, 4876, 4876, 4876, 4876,
    4876, 4877, 4877, 4877, 4877, 4877, 4877, 4877, 4877, 4877, 4877, 4877, 4877,
    4878, 4878, 4878, 4878, 4878, 4878, 4878, 4878, 4878, 4878, 4878, 4878, 4879,
    4879, 4879, 4879, 4879, 4879, 4879, 4879, 4879, 4879, 4879, 4879, 4879, 4880,
    4880, 4880, 4880, 4880, 4880, 4880, 4880, 4880, 4880, 4880, 4880, 4881, 4881,
    4881, 4881, 4881, 4881, 4881, 4881, 4881, 4881, 4881, 4881, 4882, 4882, 4882,
    4882, 4882, 4882, 4882, 4882, 4882, 4882, 4882, 4882, 4883, 4883, 4883, 4883,
    4883, 4883, 4883, 4883, 4883, 4883, 4883, 4883, 4883, 4884, 4884, 4884, 4884,
    4884, 4884, 4884, 4884, 4884, 4884, 4884, 4884, 4885, 4885, 4885, 4885, 4885,
    4885, 4885, 4885, 4885, 4885, 4885, 4885, 4886, 4886, 4886, 4886, 4886, 4886,
    4886, 4886, 4886, 4886, 4886, 4886, 4887, 4887, 4887, 4887, 4887, 4887, 4887,
    4887, 4887, 4887, 4887, 4887, 4887, 4888, 4888, 4888, 4888, 4888, 4888, 4888,
    4888, 4888, 4888, 4888, 4888, 4889, 4889, 4889, 4889, 4889, 4889, 4889, 4889,
    4889, 4889, 4889, 4889, 4889, 4890, 4890, 4890, 4890, 4890, 4890, 4890, 4890,
    4890, 4890, 4890, 4890, 4891, 4891, 4891, 4891, 4891, 4891, 4891, 4891, 4891,
    4891, 4891, 4891, 4892, 4892, 4892, 4892, 4892, 4892, 4892, 4892, 4892, 4892,
    4892, 4892, 4892, 4893, 4893, 4893, 4893, 4893, 4893, 4893, 4893, 4893, 4893,
    4893, 4893, 4894, 4894, 4894, 4894, 4894, 4894, 4894, 4894, 4894, 4894, 4894,
    4894, 4894, 4895, 4895, 4895, 4895, 4895, 4895, 4895, 4895, 4895, 4895, 4895,
    4895, 4896, 4896, 4896, 4896, 4896, 4896, 4896, 4896, 4896, 4896, 4896, 4896,
    4896, 4897, 4897, 4897, 4897, 4897, 4897, 4897, 4897, 4897, 4897, 4897, 4897,
    4897, 4898, 4898, 4898, 4898, 4898, 4898, 4898, 4898, 4898, 4898, 4898, 4898,
    4899, 4899, 4899, 4899, 4899, 4899, 4899, 4899, 4899, 4899, 4899, 4899, 4899,
    4900, 4900, 4900, 4900, 4900, 4900, 4900, 4900, 4900, 4900, 4900, 4900, 4900,
    4901, 4901, 4901, 4901, 4901, 4901, 4901, 4901, 4901, 4901, 4901, 4901, 4902,
    4902, 4902, 4902, 4902, 4902, 4902, 4902, 4902, 4902, 4902, 4902, 4902, 4903,
    4903, 4903, 4903, 4903, 4903, 4903, 4903, 4903, 4903, 4903, 4903, 4903, 4904,
    4904, 4904, 4904, 4904, 4904, 4904, 4904, 4904, 4904, 4904, 4904, 4904, 4905,
    4905, 4905, 4905, 4905, 4905, 4905, 4905, 4905, 4905, 4905, 4905, 4906, 4906,
    4906, 4906, 4906, 4906, 4906, 4906, 4906, 4906, 4906, 4906, 4906, 4907, 4907,
    4907, 4907, 4907, 4907, 4907, 4907, 4907, 4907, 4907, 4907, 4907, 4908, 4908,
    4908, 4908, 4908, 4908, 4908, 4908, 4908, 4908, 4908, 4908, 4908, 4909, 4909,
    4909, 4909, 4909, 4909, 4909, 4909, 4909, 4909, 4909, 4909, 4909, 4910, 4910,
    4910, 4910, 4910, 4910, 4910, 4910, 4910, 4910, 4910, 4910, 4910, 4911, 4911,
    4911, 4911, 4911, 4911, 4911, 4911, 4911, 4911, 4911, 4911, 4911, 4912, 4912,
    4912, 4912, 4912, 4912, 4912, 4912, 4912, 4912, 4912, 4912, 4912, 4913, 4913,
    4913, 4913, 4913, 4913, 4913, 4913, 4913, 4913, 4913, 4913, 4913, 4914, 4914,
    4914, 4914, 4914, 4914, 4914, 4914, 4914, 4914, 4914, 4914, 4914, 4915, 4915,
    4915, 4915, 4915, 4915, 4915, 4915, 4915, 4915, 4915, 4915, 4915, 4916, 4916,
    4916, 4916, 4916, 4916, 4916, 4916, 4916, 4916, 4916, 4916, 4916, 4917, 4917,
    4917, 4917, 4917, 4917, 4917, 4917, 4917, 4917, 4917, 4917, 4917, 4918, 4918,
    4918, 4918, 4918, 4918, 4918, 4918, 4918, 4918, 4918, 4918, 4918, 4919, 4919,
    4919, 4919, 4919, 4919, 4919, 4919, 4919, 4919, 4919, 4919, 4919, 4920, 4920,
    4920, 4920, 4920, 4920, 4920, 4920, 4920, 4920, 4920, 4920, 4920, 4921, 4921,
    4921, 4921, 4921, 4921, 4921, 4921, 4921, 4921, 4921, 4921, 4921, 4922, 4922,
    4922, 4922, 4922, 4922, 4922, 4922, 4922, 4922, 4922, 4922, 4922, 4922, 4923,
    4923, 4923, 4923, 4923, 4923, 4923, 4923, 4923, 4923, 4923, 4923, 4923, 4924,
    4924, 4924, 4924, 4924, 4924, 4924, 4924, 4924, 4924, 4924, 4924, 4924, 4925,
    4925, 4925, 4925, 4925, 4925, 4925, 4925, 4925, 4925, 4925, 4925, 4925, 4926,
    4926, 4926, 4926, 4926, 4926, 4926, 4926, 4926, 4926, 4926, 4926, 4926, 4926,
    4927, 4927, 4927, 4927, 4927, 4927, 4927, 4927, 4927, 4927, 4927, 4927, 4927,
    4928, 4928, 4928, 4928, 4928, 4928, 4928, 4928, 4928, 4928, 4928, 4928, 4928,
    4928, 4929, 4929, 4929, 4929, 4929, 4929, 4929, 4929, 4929, 4929, 4929, 4929,
    4929, 4930, 4930, 4930, 4930, 4930, 4930, 4930, 4930, 4930, 4930, 4930, 4930,
    4930, 4931, 4931, 4931, 4931, 4931, 4931, 4931, 4931, 4931, 4931, 4931, 4931,
    4931, 4931, 4932, 4932, 4932, 4932, 4932, 4932, 4932, 4932, 4932, 4932, 4932,
    4932, 4932, 4933, 4933, 4933, 4933, 4933, 4933, 4933, 4933, 4933, 4933, 4933,
    4933, 4933, 4933, 4934, 4934, 4934, 4934, 4934, 4934, 4934, 4934, 4934, 4934,
    4934, 4934, 4934, 4935, 4935, 4935, 4935, 4935, 4935, 4935, 4935, 4935, 4935,
    4935, 4935, 4935, 4935, 4936, 4936, 4936, 4936, 4936, 4936, 4936, 4936, 4936,
    4936, 4936, 4936, 4936, 4936, 4937, 4937, 4937, 4937, 4937, 4937, 4937, 4937,
    4937, 4937, 4937, 4937, 4937, 4938, 4938, 4938, 4938, 4938, 4938, 4938, 4938,
    4938, 4938, 4938, 4938, 4938, 4938, 4939, 4939, 4939, 4939, 4939, 4939, 4939,
    4939, 4939, 4939, 4939, 4939, 4939, 4939, 4940, 4940, 4940, 4940, 4940, 4940,
    4940, 4940, 4940, 4940, 4940, 4940, 4940, 4941, 4941, 4941, 4941, 4941, 4941,
    4941, 4941, 4941, 4941, 4941, 4941, 4941, 4941, 4942, 4942, 4942, 4942, 4942,
    4942, 4942, 4942, 4942, 4942, 4942, 4942, 4942, 4942, 4943, 4943, 4943, 4943,
    4943, 4943, 4943, 4943, 4943, 4943, 4943, 4943, 4943, 4944, 4944, 4944, 4944,
    4944, 4944, 4944, 4944, 4944, 4944, 4944, 4944, 4944, 4944, 4945, 4945, 4945,
    4945, 4945, 4945, 4945, 4945, 4945, 4945, 4945, 4945, 4945, 4945, 4946, 4946,
    4946, 4946, 4946, 4946, 4946, 4946, 4946, 4946, 4946, 4946, 4946, 4946, 4947,
    4947, 4947, 4947, 4947, 4947, 4947, 4947, 4947, 4947, 4947, 4947, 4947, 4947,
    4948, 4948, 4948, 4948, 4948, 4948, 4948, 4948, 4948, 4948, 4948, 4948, 4948,
    4948, 4949, 4949, 4949, 4949, 4949, 4949, 4949, 4949, 4949, 4949, 4949, 4949,
    4949, 4949, 4950, 4950, 4950, 4950, 4950, 4950, 4950, 4950, 4950, 4950, 4950,
    4950, 4950, 4950, 4951, 4951, 4951, 4951, 4951, 4951, 4951, 4951, 4951, 4951,
    4951, 4951, 4951, 4951, 4952, 4952, 4952, 4952, 4952, 4952, 4952, 4952, 4952,
    4952, 4952, 4952, 4952, 4952, 4953, 4953, 4953, 4953, 4953, 4953, 4953, 4953,
    4953, 4953, 4953, 4953, 4953, 4953, 4954, 4954, 4954, 4954, 4954, 4954, 4954,
    4954, 4954, 4954, 4954, 4954, 4954, 4954, 4955, 4955, 4955, 4955, 4955, 4955,
    4955, 4955, 4955, 4955, 4955, 4955, 4955, 4955, 4956, 4956, 4956, 4956, 4956,
    4956, 4956, 4956, 4956, 4956, 4956, 4956, 4956, 4956, 4957, 4957, 4957, 4957,
    4957, 4957, 4957, 4957, 4957, 4957, 4957, 4957, 4957, 4957, 4958, 4958, 4958,
    4958, 4958, 4958, 4958, 4958, 4958, 4958, 4958, 4958, 4958, 4958, 4959, 4959,
    4959, 4959, 4959, 4959, 4959, 4959, 4959, 4959, 4959, 4959, 4959, 4959, 4959,
    4960, 4960, 4960, 4960, 4960, 4960, 4960, 4960, 4960, 4960, 4960, 4960, 4960,
    4960, 4961, 4961, 4961, 4961, 4961, 4961, 4961, 4961, 4961, 4961, 4961, 4961,
    4961, 4961, 4962, 4962, 4962, 4962, 4962, 4962, 4962, 4962, 4962, 4962, 4962,
    4962, 4962, 4962, 4963, 4963, 4963, 4963, 4963, 4963, 4963, 4963, 4963, 4963,
    4963, 4963, 4963, 4963, 4963, 4964, 4964, 4964, 4964, 4964, 4964, 4964, 4964,
    4964, 4964, 4964, 4964, 4964, 4964, 4965, 4965, 4965, 4965, 4965, 4965, 4965,
    4965, 4965, 4965, 4965, 4965, 4965, 4965, 4965, 4966, 4966, 4966, 4966, 4966,
    4966, 4966, 4966, 4966, 4966, 4966, 4966, 4966, 4966, 4967, 4967, 4967, 4967,
    4967, 4967, 4967, 4967, 4967, 4967, 4967, 4967, 4967, 4967, 4968, 4968, 4968,
    4968, 4968, 4968, 4968, 4968, 4968, 4968, 4968, 4968, 4968, 4968, 4968, 4969,
    4969, 4969, 4969, 4969, 4969, 4969, 4969, 4969, 4969, 4969, 4969, 4969, 4969,
    4970, 4970, 4970, 4970, 4970, 4970, 4970, 4970, 4970, 4970, 4970, 4970, 4970,
    4970, 4970, 4971, 4971, 4971, 4971, 4971, 4971, 4971, 4971, 4971, 4971, 4971,
    4971, 4971, 4971, 4972, 4972, 4972, 4972, 4972, 4972, 4972, 4972, 4972, 4972,
    4972, 4972, 4972, 4972, 4972, 4973, 4973, 4973, 4973, 4973, 4973, 4973, 4973,
    4973, 4973, 4973, 4973, 4973, 4973, 4973, 4974, 4974, 4974, 4974, 4974, 4974,
    4974, 4974, 4974, 4974, 4974, 4974, 4974, 4974, 4975, 4975, 4975, 4975, 4975,
    4975, 4975, 4975, 4975, 4975, 4975, 4975, 4975, 4975, 4975, 4976, 4976, 4976,
    4976, 4976, 4976, 4976, 4976, 4976, 4976, 4976, 4976, 4976, 4976, 4976, 4977,
    4977, 4977, 4977, 4977, 4977, 4977, 4977, 4977, 4977, 4977, 4977, 4977, 4977,
    4978, 4978, 4978, 4978, 4978, 4978, 4978, 4978, 4978, 4978, 4978, 4978, 4978,
    4978, 4978, 4979, 4979, 4979, 4979, 4979, 4979, 4979, 4979, 4979, 4979, 4979,
    4979, 4979, 4979, 4979, 4980, 4980, 4980, 4980, 4980, 4980, 4980, 4980, 4980,
    4980, 4980, 4980, 4980, 4980, 4980, 4981, 4981, 4981, 4981, 4981, 4981, 4981,
    4981, 4981, 4981, 4981, 4981, 4981, 4981, 4981, 4982, 4982, 4982, 4982, 4982,
    4982, 4982, 4982, 4982, 4982, 4982, 4982, 4982, 4982, 4983, 4983, 4983, 4983,
    4983, 4983, 4983, 4983, 4983, 4983, 4983, 4983, 4983, 4983, 4983, 4984, 4984,
    4984, 4984, 4984, 4984, 4984, 4984, 4984, 4984, 4984, 4984, 4984, 4984, 4984,
    4985, 4985, 4985, 4985, 4985, 4985, 4985, 4985, 4985, 4985, 4985, 4985, 4985,
    4985, 4985, 4986, 4986, 4986, 4986, 4986, 4986, 4986, 4986, 4986, 4986, 4986,
    4986, 4986, 4986, 4986, 4987, 4987, 4987, 4987, 4987, 4987, 4987, 4987, 4987,
    4987, 4987, 4987, 4987, 4987, 4987, 4988, 4988, 4988, 4988, 4988, 4988, 4988,
    4988, 4988, 4988, 4988, 4988, 4988, 4988, 4988, 4989, 4989, 4989, 4989, 4989,
    4989, 4989, 4989, 4989, 4989, 4989, 4989, 4989, 4989, 4989, 4990, 4990, 4990,
    4990, 4990, 4990, 4990, 4990, 4990, 4990, 4990, 4990, 4990, 4990, 4990, 4991,
    4991, 4991, 4991, 4991, 4991, 4991, 4991, 4991, 4991, 4991, 4991, 4991, 4991,
    4991, 4991, 4992, 4992, 4992, 4992, 4992, 4992, 4992, 4992, 4992, 4992, 4992,
    4992, 4992, 4992, 4992, 4993, 4993, 4993, 4993, 4993, 4993, 4993, 4993, 4993,
    4993, 4993, 4993, 4993, 4993, 4993, 4994, 4994, 4994, 4994, 4994, 4994, 4994,
    4994, 4994, 4994, 4994, 4994, 4994, 4994, 4994, 4995, 4995, 4995, 4995, 4995,
    4995, 4995, 4995, 4995, 4995, 4995, 4995, 4995, 4995, 4995, 4996, 4996, 4996,
    4996, 4996, 4996, 4996, 4996, 4996, 4996, 4996, 4996, 4996, 4996, 4996, 4996,
    4997, 4997, 4997, 4997, 4997, 4997, 4997, 4997, 4997, 4997, 4997, 4997, 4997,
    4997, 4997, 4998, 4998, 4998, 4998, 4998, 4998, 4998, 4998, 4998, 4998, 4998,
    4998, 4998, 4998, 4998, 4999, 4999, 4999, 4999, 4999, 4999, 4999, 4999, 4999,
    4999, 4999, 4999, 4999, 4999, 4999, 4999, 5000, 5000, 5000, 5000, 5000, 5000,
    5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5000, 5001, 5001, 5001, 5001,
    5001, 5001, 5001, 5001, 5001, 5001, 5001, 5001, 5001, 5001, 5001, 5001, 5002,
    5002, 5002, 5002, 5002, 5002, 5002, 5002, 5002, 5002, 5002, 5002, 5002, 5002,
    5002, 5003, 5003, 5003, 5003, 5003, 5003, 5003, 5003, 5003, 5003, 5003, 5003,
    5003, 5003, 5003, 5004, 5004, 5004, 5004, 5004, 5004, 5004, 5004, 5004, 5004,
    5004, 5004, 5004, 5004, 5004, 5004, 5005, 5005, 5005, 5005, 5005, 5005, 5005,
    5005, 5005, 5005, 5005, 5005, 5005, 5005, 5005, 5005, 5006, 5006, 5006, 5006,
    5006, 5006, 5006, 5006, 5006, 5006, 5006, 5006, 5006, 5006, 5006, 5007, 5007,
    5007, 5007, 5007, 5007, 5007, 5007, 5007, 5007, 5007, 5007, 5007, 5007, 5007,
    5007, 5008, 5008, 5008, 5008, 5008, 5008, 5008, 5008, 5008, 5008, 5008, 5008,
    5008, 5008, 5008, 5009, 5009, 5009, 5009, 5009, 5009, 5009, 5009, 5009, 5009,
    5009, 5009, 5009, 5009, 5009, 5009, 5010, 5010, 5010, 5010, 5010, 5010, 5010,
    5010, 5010, 5010, 5010, 5010, 5010, 5010, 5010, 5010, 5011, 5011, 5011, 5011,
    5011, 5011, 5011, 5011, 5011, 5011, 5011, 5011, 5011, 5011, 5011, 5011, 5012,
    5012, 5012, 5012, 5012, 5012, 5012, 5012, 5012, 5012, 5012, 5012, 5012, 5012,
    5012, 5013, 5013, 5013, 5013, 5013, 5013, 5013, 5013, 5013, 5013, 5013, 5013,
    5013, 5013, 5013, 5013, 5014, 5014, 5014, 5014, 5014, 5014, 5014, 5014, 5014,
    5014, 5014, 5014, 5014, 5014, 5014, 5014, 5015, 5015, 5015, 5015, 5015, 5015,
    5015, 5015, 5015, 5015, 5015, 5015, 5015, 5015, 5015, 5015, 5016, 5016, 5016,
    5016, 5016, 5016, 5016, 5016, 5016, 5016, 5016, 5016, 5016, 5016, 5016, 5016,
    5017, 5017, 5017, 5017, 5017, 5017, 5017, 5017, 5017, 5017, 5017, 5017, 5017,
    5017, 5017, 5017, 5018, 5018, 5018, 5018, 5018, 5018, 5018, 5018, 5018, 5018,
    5018, 5018, 5018, 5018, 5018, 5018, 5019, 5019, 5019, 5019, 5019, 5019, 5019,
    5019, 5019, 5019, 5019, 5019, 5019, 5019, 5019 };

  memcpy(&b_LUT[0], &iv3[0], sizeof(int16_T) << 13);
}

/* End of code generation (ldpcdec_fixpt.c) */
