/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * call_custom_exp_fixpt.c
 *
 * Code generation for function 'call_custom_exp_fixpt'
 *
 */

/* Include files */
#include <string.h>
#include "rt_nonfinite.h"
#include "call_custom_exp_fixpt_logger.h"
#include "call_custom_exp_wrapper_fixpt.h"
#include "call_custom_exp_fixpt.h"
#include "call_custom_exp_wrapper_fixpt_hdl_mex_data.h"

/* Function Definitions */
void replacement_custom_exp_init(void)
{
  static const uint16_T uv0[1000] = { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U,
    1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U,
    1U, 1U, 1U, 1U, 1U, 1U, 1U, 2U, 2U, 2U, 2U, 2U, 2U, 2U, 2U, 2U, 2U, 2U, 2U,
    2U, 2U, 2U, 2U, 2U, 2U, 2U, 2U, 3U, 3U, 3U, 3U, 3U, 3U, 3U, 3U, 3U, 3U, 3U,
    3U, 3U, 3U, 3U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 5U, 5U, 5U, 5U,
    5U, 5U, 5U, 5U, 5U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 7U, 7U, 7U, 7U, 7U, 7U,
    8U, 8U, 8U, 8U, 8U, 8U, 9U, 9U, 9U, 9U, 9U, 9U, 10U, 10U, 10U, 10U, 11U, 11U,
    11U, 11U, 11U, 12U, 12U, 12U, 12U, 13U, 13U, 13U, 14U, 14U, 14U, 14U, 15U,
    15U, 15U, 16U, 16U, 16U, 17U, 17U, 17U, 18U, 18U, 18U, 19U, 19U, 20U, 20U,
    20U, 21U, 21U, 22U, 22U, 23U, 23U, 24U, 24U, 25U, 25U, 26U, 26U, 27U, 27U,
    28U, 28U, 29U, 29U, 30U, 31U, 31U, 32U, 33U, 33U, 34U, 35U, 35U, 36U, 37U,
    38U, 38U, 39U, 40U, 41U, 42U, 43U, 43U, 44U, 45U, 46U, 47U, 48U, 49U, 50U,
    51U, 52U, 53U, 54U, 55U, 56U, 58U, 59U, 60U, 61U, 62U, 64U, 65U, 66U, 68U,
    69U, 70U, 72U, 73U, 75U, 76U, 78U, 79U, 81U, 83U, 84U, 86U, 88U, 90U, 92U,
    93U, 95U, 97U, 99U, 101U, 103U, 105U, 108U, 110U, 112U, 114U, 117U, 119U,
    121U, 124U, 126U, 129U, 131U, 134U, 137U, 140U, 142U, 145U, 148U, 151U, 154U,
    158U, 161U, 164U, 167U, 171U, 174U, 178U, 181U, 185U, 189U, 193U, 196U, 200U,
    204U, 209U, 213U, 217U, 222U, 226U, 231U, 235U, 240U, 245U, 250U, 255U, 260U,
    265U, 271U, 276U, 282U, 288U, 293U, 299U, 305U, 312U, 318U, 324U, 331U, 338U,
    344U, 351U, 359U, 366U, 373U, 381U, 388U, 396U, 404U, 413U, 421U, 429U, 438U,
    447U, 456U, 465U, 475U, 484U, 494U, 504U, 514U, 525U, 535U, 546U, 557U, 569U,
    580U, 592U, 604U, 616U, 628U, 641U, 654U, 667U, 681U, 695U, 709U, 723U, 738U,
    753U, 768U, 783U, 799U, 815U, 832U, 849U, 866U, 883U, 901U, 919U, 938U, 957U,
    976U, 996U, 1016U, 1037U, 1058U, 1079U, 1101U, 1123U, 1146U, 1169U, 1193U,
    1217U, 1242U, 1267U, 1292U, 1319U, 1345U, 1373U, 1400U, 1429U, 1458U, 1487U,
    1517U, 1548U, 1579U, 1611U, 1644U, 1677U, 1711U, 1745U, 1781U, 1817U, 1853U,
    1891U, 1929U, 1968U, 2008U, 2049U, 2090U, 2132U, 2175U, 2219U, 2264U, 2310U,
    2357U, 2405U, 2453U, 2503U, 2553U, 2605U, 2658U, 2712U, 2766U, 2822U, 2879U,
    2938U, 2997U, 3058U, 3120U, 3183U, 3247U, 3313U, 3380U, 3448U, 3518U, 3589U,
    3661U, 3736U, 3811U, 3888U, 3967U, 4047U, 4129U, 4212U, 4298U, 4384U, 4473U,
    4564U, 4656U, 4750U, 4846U, 4944U, 5044U, 5146U, 5250U, 5356U, 5465U, 5575U,
    5688U, 5803U, 5920U, 6040U, 6162U, 6287U, 6414U, 6544U, 6676U, 6811U, 6949U,
    7089U, 7233U, 7379U, 7528U, 7680U, 7836U, 7994U, 8156U, 8321U, 8489U, 8661U,
    8836U, 9015U, 9197U, 9383U, 9573U, 9766U, 9964U, 10165U, 10371U, 10580U,
    10794U, 11013U };

  memcpy(&LUT[0], &uv0[0], 1000U * sizeof(uint16_T));
}

/* End of code generation (call_custom_exp_fixpt.c) */
