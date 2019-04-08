/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * call_custom_exp_wrapper_fixpt_hdl_mex_types.h
 *
 * Code generation for function 'call_custom_exp_wrapper_fixpt'
 *
 */

#ifndef CALL_CUSTOM_EXP_WRAPPER_FIXPT_HDL_MEX_TYPES_H
#define CALL_CUSTOM_EXP_WRAPPER_FIXPT_HDL_MEX_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_int16_T
#define struct_emxArray_int16_T

struct emxArray_int16_T
{
  int16_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_int16_T*/

#ifndef typedef_emxArray_int16_T
#define typedef_emxArray_int16_T

typedef struct emxArray_int16_T emxArray_int16_T;

#endif                                 /*typedef_emxArray_int16_T*/

#ifndef typedef_struct1_T
#define typedef_struct1_T

typedef struct {
  emxArray_int16_T *x;
} struct1_T;

#endif                                 /*typedef_struct1_T*/

#ifndef typedef_struct2_T
#define typedef_struct2_T

typedef struct {
  emxArray_int16_T *y;
} struct2_T;

#endif                                 /*typedef_struct2_T*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  struct1_T inputs;
  struct2_T outputs;
  real_T iterCount;
} struct0_T;

#endif                                 /*typedef_struct0_T*/
#endif

/* End of code generation (call_custom_exp_wrapper_fixpt_hdl_mex_types.h) */
