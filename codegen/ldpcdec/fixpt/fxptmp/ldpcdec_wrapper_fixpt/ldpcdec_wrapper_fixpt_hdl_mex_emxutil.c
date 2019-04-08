/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * ldpcdec_wrapper_fixpt_hdl_mex_emxutil.c
 *
 * Code generation for function 'ldpcdec_wrapper_fixpt_hdl_mex_emxutil'
 *
 */

/* Include files */
#include <string.h>
#include "rt_nonfinite.h"
#include "ldpcdec_fixpt_logger.h"
#include "ldpcdec_wrapper_fixpt.h"
#include "ldpcdec_wrapper_fixpt_hdl_mex_emxutil.h"

/* Function Declarations */
static void emxFreeStruct_struct1_T(struct1_T *pStruct);
static void emxFreeStruct_struct2_T(struct2_T *pStruct);
static void emxInitStruct_struct1_T(const emlrtStack *sp, struct1_T *pStruct,
  const emlrtRTEInfo *srcLocation, boolean_T doPush);
static void emxInitStruct_struct2_T(const emlrtStack *sp, struct2_T *pStruct,
  const emlrtRTEInfo *srcLocation, boolean_T doPush);

/* Function Definitions */
static void emxFreeStruct_struct1_T(struct1_T *pStruct)
{
  emxFree_int8_T(&pStruct->r);
  emxFree_uint16_T(&pStruct->iter);
}

static void emxFreeStruct_struct2_T(struct2_T *pStruct)
{
  emxFree_int16_T(&pStruct->dec_out);
}

static void emxInitStruct_struct1_T(const emlrtStack *sp, struct1_T *pStruct,
  const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxInit_int8_T(sp, &pStruct->r, 2, srcLocation, doPush);
  emxInit_uint16_T(sp, &pStruct->iter, 2, srcLocation, doPush);
}

static void emxInitStruct_struct2_T(const emlrtStack *sp, struct2_T *pStruct,
  const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxInit_int16_T(sp, &pStruct->dec_out, 2, srcLocation, doPush);
}

void emxEnsureCapacity_int16_T(const emlrtStack *sp, emxArray_int16_T *emxArray,
  int32_T oldNumel, const emlrtRTEInfo *srcLocation)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)newNumel, (uint32_T)
      emxArray->size[i], srcLocation, sp);
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(int16_T));
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, sp);
    }

    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(int16_T) * oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (int16_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxEnsureCapacity_int8_T(const emlrtStack *sp, emxArray_int8_T *emxArray,
  int32_T oldNumel, const emlrtRTEInfo *srcLocation)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)newNumel, (uint32_T)
      emxArray->size[i], srcLocation, sp);
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(int8_T));
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, sp);
    }

    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(int8_T) * oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (int8_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxEnsureCapacity_uint16_T(const emlrtStack *sp, emxArray_uint16_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)newNumel, (uint32_T)
      emxArray->size[i], srcLocation, sp);
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = emlrtCallocMex((uint32_T)i, sizeof(uint16_T));
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, sp);
    }

    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(uint16_T) * oldNumel);
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = (uint16_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxFreeStruct_struct0_T(struct0_T *pStruct)
{
  emxFreeStruct_struct1_T(&pStruct->inputs);
  emxFreeStruct_struct2_T(&pStruct->outputs);
}

void emxFree_int16_T(emxArray_int16_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int16_T *)NULL) {
    if (((*pEmxArray)->data != (int16_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_int16_T *)NULL;
  }
}

void emxFree_int8_T(emxArray_int8_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int8_T *)NULL) {
    if (((*pEmxArray)->data != (int8_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_int8_T *)NULL;
  }
}

void emxFree_uint16_T(emxArray_uint16_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_uint16_T *)NULL) {
    if (((*pEmxArray)->data != (uint16_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((*pEmxArray)->data);
    }

    emlrtFreeMex((*pEmxArray)->size);
    emlrtFreeMex(*pEmxArray);
    *pEmxArray = (emxArray_uint16_T *)NULL;
  }
}

void emxInitStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct, const
  emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxInitStruct_struct1_T(sp, &pStruct->inputs, srcLocation, doPush);
  emxInitStruct_struct2_T(sp, &pStruct->outputs, srcLocation, doPush);
}

void emxInit_int16_T(const emlrtStack *sp, emxArray_int16_T **pEmxArray, int32_T
                     numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                     doPush)
{
  emxArray_int16_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int16_T *)emlrtMallocMex(sizeof(emxArray_int16_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_int16_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (int16_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_int8_T(const emlrtStack *sp, emxArray_int8_T **pEmxArray, int32_T
                    numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                    doPush)
{
  emxArray_int8_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int8_T *)emlrtMallocMex(sizeof(emxArray_int8_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_int8_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (int8_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_uint16_T(const emlrtStack *sp, emxArray_uint16_T **pEmxArray,
                      int32_T numDimensions, const emlrtRTEInfo *srcLocation,
                      boolean_T doPush)
{
  emxArray_uint16_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_uint16_T *)emlrtMallocMex(sizeof(emxArray_uint16_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_uint16_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (uint16_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex(sizeof(int32_T) * numDimensions);
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/* End of code generation (ldpcdec_wrapper_fixpt_hdl_mex_emxutil.c) */
