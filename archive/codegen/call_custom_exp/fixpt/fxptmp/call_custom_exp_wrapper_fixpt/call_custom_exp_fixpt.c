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
void replacement_custom_fnc_init(void)
{
  static const uint16_T uv0[1024] = { 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
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
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
    0U, 0U, 0U, 0U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U,
    1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U,
    1U, 1U, 2U, 2U, 2U, 2U, 2U, 2U, 2U, 2U, 2U, 2U, 2U, 2U, 2U, 2U, 2U, 2U, 2U,
    2U, 2U, 2U, 2U, 3U, 3U, 3U, 3U, 3U, 3U, 3U, 3U, 3U, 3U, 3U, 3U, 3U, 3U, 4U,
    4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 5U, 5U, 5U, 5U, 5U, 5U, 5U, 5U,
    5U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 7U, 7U, 7U, 7U, 7U, 7U, 7U, 8U, 8U, 8U,
    8U, 8U, 8U, 9U, 9U, 9U, 9U, 9U, 10U, 10U, 10U, 10U, 10U, 11U, 11U, 11U, 11U,
    11U, 12U, 12U, 12U, 12U, 13U, 13U, 13U, 14U, 14U, 14U, 14U, 15U, 15U, 15U,
    16U, 16U, 16U, 17U, 17U, 17U, 18U, 18U, 18U, 19U, 19U, 19U, 20U, 20U, 21U,
    21U, 21U, 22U, 22U, 23U, 23U, 24U, 24U, 25U, 25U, 26U, 26U, 27U, 27U, 28U,
    28U, 29U, 30U, 30U, 31U, 31U, 32U, 33U, 33U, 34U, 35U, 35U, 36U, 37U, 37U,
    38U, 39U, 40U, 41U, 41U, 42U, 43U, 44U, 45U, 46U, 47U, 48U, 48U, 49U, 50U,
    51U, 52U, 54U, 55U, 56U, 57U, 58U, 59U, 60U, 61U, 63U, 64U, 65U, 66U, 68U,
    69U, 71U, 72U, 73U, 75U, 76U, 78U, 79U, 81U, 83U, 84U, 86U, 88U, 89U, 91U,
    93U, 95U, 97U, 99U, 100U, 102U, 104U, 107U, 109U, 111U, 113U, 115U, 118U,
    120U, 122U, 125U, 127U, 130U, 132U, 135U, 138U, 140U, 143U, 146U, 149U, 152U,
    155U, 158U, 161U, 164U, 167U, 171U, 174U, 177U, 181U, 185U, 188U, 192U, 196U,
    200U, 204U, 208U, 212U, 216U, 220U, 225U, 229U, 234U, 238U, 243U, 248U, 253U,
    258U, 263U, 268U, 273U, 279U, 284U, 290U, 295U, 301U, 307U, 313U, 319U, 326U,
    332U, 339U, 346U, 352U, 359U, 366U, 374U, 381U, 389U, 396U, 404U, 412U, 420U,
    429U, 437U, 446U, 454U, 463U, 473U, 482U, 491U, 501U, 511U, 521U, 531U, 542U,
    553U, 564U, 575U, 586U, 598U, 609U, 622U, 634U, 646U, 659U, 672U, 685U, 699U,
    713U, 727U, 741U, 756U, 771U, 786U, 801U, 817U, 833U, 850U, 867U, 884U, 901U,
    919U, 937U, 956U, 975U, 994U, 1014U, 1034U, 1054U, 1075U, 1096U, 1118U,
    1140U, 1162U, 1185U, 1209U, 1233U, 1257U, 1282U, 1307U, 1333U, 1359U, 1386U,
    1413U, 1441U, 1470U, 1499U, 1528U, 1559U, 1589U, 1621U, 1653U, 1685U, 1719U,
    1753U, 1787U, 1822U, 1858U, 1895U, 1933U, 1971U, 2010U, 2049U, 2090U, 2131U,
    2173U, 2216U, 2260U, 2304U, 2350U, 2396U, 2444U, 2492U, 2541U, 2591U, 2643U,
    2695U, 2748U, 2802U, 2858U, 2914U, 2971U, 3030U, 3090U, 3151U, 3213U, 3277U,
    3341U, 3407U, 3475U, 3543U, 3613U, 3685U, 3757U, 3831U, 3907U, 3984U, 4063U,
    4143U, 4225U, 4308U, 4393U, 4480U, 4569U, 4659U, 4751U, 4845U, 4940U, 5038U,
    5137U, 5239U, 5342U, 5448U, 5555U, 5665U, 5777U, 5891U, 6007U, 6126U, 6247U,
    6370U, 6496U, 6624U, 6755U, 6888U, 7024U, 7163U, 7304U, 7449U, 7596U, 7746U,
    7899U, 8054U, 8214U, 8376U, 8541U, 8710U, 8882U, 9057U, 9236U, 9418U, 9604U,
    9794U, 9987U, 10184U, 10385U, 10590U, 10800U, 11013U };

  memcpy(&LUT[0], &uv0[0], sizeof(uint16_T) << 10);
}

/* End of code generation (call_custom_exp_fixpt.c) */
