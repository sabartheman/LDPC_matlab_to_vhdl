/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * bf_wrapper_fixpt_hdl_mex_types.h
 *
 * Code generation for function 'bf_wrapper_fixpt'
 *
 */

#ifndef BF_WRAPPER_FIXPT_HDL_MEX_TYPES_H
#define BF_WRAPPER_FIXPT_HDL_MEX_TYPES_H

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef struct_emxArray_uint8_T
#define struct_emxArray_uint8_T

struct emxArray_uint8_T
{
  uint8_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray_uint8_T*/

#ifndef typedef_emxArray_uint8_T
#define typedef_emxArray_uint8_T

typedef struct emxArray_uint8_T emxArray_uint8_T;

#endif                                 /*typedef_emxArray_uint8_T*/

#ifndef typedef_struct1_T
#define typedef_struct1_T

typedef struct {
  emxArray_uint8_T *r;
  emxArray_uint8_T *iter;
} struct1_T;

#endif                                 /*typedef_struct1_T*/

#ifndef typedef_struct2_T
#define typedef_struct2_T

typedef struct {
  emxArray_uint8_T *out;
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

/* End of code generation (bf_wrapper_fixpt_hdl_mex_types.h) */
