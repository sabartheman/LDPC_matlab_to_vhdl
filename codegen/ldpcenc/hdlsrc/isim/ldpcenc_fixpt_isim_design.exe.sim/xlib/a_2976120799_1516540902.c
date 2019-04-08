/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/sky/Documents/MATLAB/Low_density_parity_code/codegen/ldpcenc/hdlsrc/ldpcenc_fixpt_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;
extern char *XLIB_P_4004838454;
extern char *STD_STANDARD;

unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );
void ieee_p_3564397177_sub_1675032430035817134_91900896(char *, char *, char *, char *);
char *xlib_p_4004838454_sub_2063504136543877411_4217348002(char *, char *, char *, char *);


static void xlib_a_2976120799_1516540902_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(89, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 14608);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 14112);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2976120799_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 != (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 14672);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 14128);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 14672);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void xlib_a_2976120799_1516540902_p_2(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(95, ng0);

LAB3:    t1 = (2 * 1000LL);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 14736);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t9 = (t0 + 14736);
    xsi_driver_intertial_reject(t9, t1, t1);

LAB2:    t10 = (t0 + 14144);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2976120799_1516540902_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(97, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 14800);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 14160);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2976120799_1516540902_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;

LAB0:    t1 = (t0 + 8088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 14864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(102, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 7896);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 14864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(104, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 7896);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)3);
    if (t9 != 0)
        goto LAB12;

LAB14:
LAB13:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 14864);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(107, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 7896);
    xsi_process_wait(t2, t7);

LAB17:    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB15:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 14864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(109, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 7896);
    xsi_process_wait(t2, t7);

LAB21:    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB16:    goto LAB15;

LAB18:    goto LAB16;

LAB19:    xsi_set_current_line(110, ng0);

LAB25:    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

LAB23:    goto LAB13;

LAB24:    goto LAB23;

LAB26:    goto LAB24;

}

static void xlib_a_2976120799_1516540902_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;

LAB0:    t1 = (t0 + 8336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 14928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(117, ng0);
    t7 = (20 * 1000LL);
    t2 = (t0 + 8144);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(118, ng0);

LAB10:    t2 = (t0 + 14176);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t4 = (t0 + 14176);
    *((int *)t4) = 0;
    xsi_set_current_line(119, ng0);
    t7 = (2 * 1000LL);
    t2 = (t0 + 8144);
    xsi_process_wait(t2, t7);

LAB17:    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB9:    t3 = (t0 + 992U);
    t9 = xsi_signal_has_event(t3);
    if (t9 == 1)
        goto LAB12;

LAB13:    t8 = (unsigned char)0;

LAB14:    if (t8 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t8 = t11;
    goto LAB14;

LAB15:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 14928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(121, ng0);

LAB21:    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB16:    goto LAB15;

LAB18:    goto LAB16;

LAB19:    goto LAB2;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

}

static void xlib_a_2976120799_1516540902_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(124, ng0);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 14992);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 14192);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2976120799_1516540902_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(126, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 15056);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 14208);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2976120799_1516540902_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 15120);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 14224);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t1 = (t0 + 15120);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void xlib_a_2976120799_1516540902_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(132, ng0);

LAB3:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t1 = (t0 + 2792U);
    t6 = *((char **)t1);
    t7 = *((unsigned char *)t6);
    t8 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t5, t7);
    t9 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t8);
    t1 = (t0 + 15184);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t1);

LAB2:    t14 = (t0 + 14240);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2976120799_1516540902_p_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(134, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2152U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 15248);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 14256);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2976120799_1516540902_p_11(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 14272);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(143, ng0);
    t1 = (t0 + 15312);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 3112U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 1992U);
    t7 = *((char **)t2);
    t13 = *((unsigned char *)t7);
    t14 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t13);
    t2 = (t0 + 15312);
    t8 = (t2 + 56U);
    t15 = *((char **)t8);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t14;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

}

static void xlib_a_2976120799_1516540902_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(153, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 15376);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 14288);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 15376);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void xlib_a_2976120799_1516540902_p_13(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(156, ng0);

LAB3:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 15440);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 14304);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2976120799_1516540902_p_14(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 14320);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 15504);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 1832U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 1512U);
    t7 = *((char **)t2);
    t13 = *((unsigned char *)t7);
    t2 = (t0 + 15504);
    t8 = (t2 + 56U);
    t14 = *((char **)t8);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t13;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

}

static void xlib_a_2976120799_1516540902_p_15(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(171, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 != (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t9 = (t0 + 15568);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 14336);
    *((int *)t14) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 15568);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void xlib_a_2976120799_1516540902_p_16(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(174, ng0);

LAB3:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t1 = (t0 + 2792U);
    t6 = *((char **)t1);
    t7 = *((unsigned char *)t6);
    t8 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t5, t7);
    t9 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t8);
    t1 = (t0 + 15632);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t1);

LAB2:    t14 = (t0 + 14352);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2976120799_1516540902_p_17(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(182, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 14368);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(183, ng0);
    t1 = (t0 + 15696);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(185, ng0);
    t2 = (t0 + 3752U);
    t6 = *((char **)t2);
    t11 = *((unsigned char *)t6);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 3432U);
    t7 = *((char **)t2);
    t13 = *((unsigned char *)t7);
    t14 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t13);
    t2 = (t0 + 15696);
    t8 = (t2 + 56U);
    t15 = *((char **)t8);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t14;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

}

static void xlib_a_2976120799_1516540902_p_18(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(192, ng0);

LAB3:    t1 = (1 * 1000LL);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 15760);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t9 = (t0 + 15760);
    xsi_driver_intertial_reject(t9, t1, t1);

LAB2:    t10 = (t0 + 14384);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2976120799_1516540902_p_19(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    xsi_set_current_line(201, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 != (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1672U);
    t6 = *((char **)t1);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t5 = (unsigned char)0;

LAB9:    if (t5 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(209, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    t6 = (t0 + 5648U);
    t11 = *((char **)t6);
    t14 = (0 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t6 = (t11 + t17);
    t3 = *((unsigned char *)t6);
    *((unsigned char *)t2) = t3;
    t2 = (t2 + 1U);
    t12 = (t0 + 5648U);
    t13 = *((char **)t12);
    t18 = (1 - 0);
    t19 = (t18 * 1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t12 = (t13 + t21);
    t4 = *((unsigned char *)t12);
    *((unsigned char *)t2) = t4;
    t2 = (t2 + 1U);
    t22 = (t0 + 5648U);
    t23 = *((char **)t22);
    t24 = (2 - 0);
    t25 = (t24 * 1);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t22 = (t23 + t27);
    t5 = *((unsigned char *)t22);
    *((unsigned char *)t2) = t5;
    t2 = (t2 + 1U);
    t28 = (t0 + 5648U);
    t29 = *((char **)t28);
    t30 = (3 - 0);
    t31 = (t30 * 1);
    t32 = (1U * t31);
    t33 = (0 + t32);
    t28 = (t29 + t33);
    t7 = *((unsigned char *)t28);
    *((unsigned char *)t2) = t7;
    t34 = (t0 + 15824);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memcpy(t38, t1, 4U);
    xsi_driver_first_trans_fast(t34);
    t1 = (t0 + 14400);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    goto LAB3;

LAB5:    xsi_set_current_line(203, ng0);
    t11 = (t0 + 11616);
    t12 = (t0 + 6096U);
    t13 = (t0 + 6376U);
    std_textio_readline(STD_TEXTIO, t11, t12, t13);
    xsi_set_current_line(204, ng0);
    t1 = (t0 + 11616);
    t2 = (t0 + 6376U);
    t6 = (t0 + 5648U);
    t11 = *((char **)t6);
    t14 = (0 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t6 = (t11 + t17);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t1, t2, t6);
    xsi_set_current_line(205, ng0);
    t1 = (t0 + 11616);
    t2 = (t0 + 6376U);
    t6 = (t0 + 5648U);
    t11 = *((char **)t6);
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t6 = (t11 + t17);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t1, t2, t6);
    xsi_set_current_line(206, ng0);
    t1 = (t0 + 11616);
    t2 = (t0 + 6376U);
    t6 = (t0 + 5648U);
    t11 = *((char **)t6);
    t14 = (2 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t6 = (t11 + t17);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t1, t2, t6);
    xsi_set_current_line(207, ng0);
    t1 = (t0 + 11616);
    t2 = (t0 + 6376U);
    t6 = (t0 + 5648U);
    t11 = *((char **)t6);
    t14 = (3 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t6 = (t11 + t17);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t1, t2, t6);
    goto LAB3;

LAB7:    t1 = (t0 + 6096U);
    t9 = std_textio_endfile(t1);
    t10 = (!(t9));
    t5 = t10;
    goto LAB9;

}

static void xlib_a_2976120799_1516540902_p_20(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;

LAB0:    xsi_set_current_line(215, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 14416);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(216, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t5 = t1;
    memset(t5, (unsigned char)1, 4U);
    t6 = (t0 + 15888);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(218, ng0);
    t2 = (t0 + 4072U);
    t6 = *((char **)t2);
    t2 = (t0 + 15888);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 4U);
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

}

static void xlib_a_2976120799_1516540902_p_21(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(224, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(227, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t1 = (t0 + 15952);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 14432);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(225, ng0);
    t1 = (t0 + 4232U);
    t5 = *((char **)t1);
    t1 = (t0 + 15952);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 4U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void xlib_a_2976120799_1516540902_p_22(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(231, ng0);

LAB3:    t1 = (2 * 1000LL);
    t2 = (t0 + 4392U);
    t3 = *((char **)t2);
    t2 = (t0 + 16016);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 4U);
    xsi_driver_first_trans_delta(t2, 0U, 4U, t1);
    t8 = (t0 + 16016);
    xsi_driver_intertial_reject(t8, t1, t1);

LAB2:    t9 = (t0 + 14448);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2976120799_1516540902_p_23(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(233, ng0);

LAB3:    t1 = (1 * 1000LL);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 16080);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t9 = (t0 + 16080);
    xsi_driver_intertial_reject(t9, t1, t1);

LAB2:    t10 = (t0 + 14464);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2976120799_1516540902_p_24(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;

LAB0:    xsi_set_current_line(242, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 != (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1672U);
    t6 = *((char **)t1);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t5 = (unsigned char)0;

LAB9:    if (t5 != 0)
        goto LAB5;

LAB6:
LAB3:    xsi_set_current_line(253, ng0);
    t1 = xsi_get_transient_memory(7U);
    memset(t1, 0, 7U);
    t2 = t1;
    t6 = (t0 + 5768U);
    t11 = *((char **)t6);
    t14 = (0 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t6 = (t11 + t17);
    t3 = *((unsigned char *)t6);
    *((unsigned char *)t2) = t3;
    t2 = (t2 + 1U);
    t12 = (t0 + 5768U);
    t13 = *((char **)t12);
    t18 = (1 - 0);
    t19 = (t18 * 1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t12 = (t13 + t21);
    t4 = *((unsigned char *)t12);
    *((unsigned char *)t2) = t4;
    t2 = (t2 + 1U);
    t22 = (t0 + 5768U);
    t23 = *((char **)t22);
    t24 = (2 - 0);
    t25 = (t24 * 1);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t22 = (t23 + t27);
    t5 = *((unsigned char *)t22);
    *((unsigned char *)t2) = t5;
    t2 = (t2 + 1U);
    t28 = (t0 + 5768U);
    t29 = *((char **)t28);
    t30 = (3 - 0);
    t31 = (t30 * 1);
    t32 = (1U * t31);
    t33 = (0 + t32);
    t28 = (t29 + t33);
    t7 = *((unsigned char *)t28);
    *((unsigned char *)t2) = t7;
    t2 = (t2 + 1U);
    t34 = (t0 + 5768U);
    t35 = *((char **)t34);
    t36 = (4 - 0);
    t37 = (t36 * 1);
    t38 = (1U * t37);
    t39 = (0 + t38);
    t34 = (t35 + t39);
    t8 = *((unsigned char *)t34);
    *((unsigned char *)t2) = t8;
    t2 = (t2 + 1U);
    t40 = (t0 + 5768U);
    t41 = *((char **)t40);
    t42 = (5 - 0);
    t43 = (t42 * 1);
    t44 = (1U * t43);
    t45 = (0 + t44);
    t40 = (t41 + t45);
    t9 = *((unsigned char *)t40);
    *((unsigned char *)t2) = t9;
    t2 = (t2 + 1U);
    t46 = (t0 + 5768U);
    t47 = *((char **)t46);
    t48 = (6 - 0);
    t49 = (t48 * 1);
    t50 = (1U * t49);
    t51 = (0 + t50);
    t46 = (t47 + t51);
    t10 = *((unsigned char *)t46);
    *((unsigned char *)t2) = t10;
    t52 = (t0 + 16144);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memcpy(t56, t1, 7U);
    xsi_driver_first_trans_fast(t52);
    t1 = (t0 + 14480);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    goto LAB3;

LAB5:    xsi_set_current_line(244, ng0);
    t11 = (t0 + 12856);
    t12 = (t0 + 6200U);
    t13 = (t0 + 6448U);
    std_textio_readline(STD_TEXTIO, t11, t12, t13);
    xsi_set_current_line(245, ng0);
    t1 = (t0 + 12856);
    t2 = (t0 + 6448U);
    t6 = (t0 + 5768U);
    t11 = *((char **)t6);
    t14 = (0 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t6 = (t11 + t17);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t1, t2, t6);
    xsi_set_current_line(246, ng0);
    t1 = (t0 + 12856);
    t2 = (t0 + 6448U);
    t6 = (t0 + 5768U);
    t11 = *((char **)t6);
    t14 = (1 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t6 = (t11 + t17);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t1, t2, t6);
    xsi_set_current_line(247, ng0);
    t1 = (t0 + 12856);
    t2 = (t0 + 6448U);
    t6 = (t0 + 5768U);
    t11 = *((char **)t6);
    t14 = (2 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t6 = (t11 + t17);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t1, t2, t6);
    xsi_set_current_line(248, ng0);
    t1 = (t0 + 12856);
    t2 = (t0 + 6448U);
    t6 = (t0 + 5768U);
    t11 = *((char **)t6);
    t14 = (3 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t6 = (t11 + t17);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t1, t2, t6);
    xsi_set_current_line(249, ng0);
    t1 = (t0 + 12856);
    t2 = (t0 + 6448U);
    t6 = (t0 + 5768U);
    t11 = *((char **)t6);
    t14 = (4 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t6 = (t11 + t17);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t1, t2, t6);
    xsi_set_current_line(250, ng0);
    t1 = (t0 + 12856);
    t2 = (t0 + 6448U);
    t6 = (t0 + 5768U);
    t11 = *((char **)t6);
    t14 = (5 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t6 = (t11 + t17);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t1, t2, t6);
    xsi_set_current_line(251, ng0);
    t1 = (t0 + 12856);
    t2 = (t0 + 6448U);
    t6 = (t0 + 5768U);
    t11 = *((char **)t6);
    t14 = (6 - 0);
    t15 = (t14 * 1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t6 = (t11 + t17);
    ieee_p_3564397177_sub_1675032430035817134_91900896(IEEE_P_3564397177, t1, t2, t6);
    goto LAB3;

LAB7:    t1 = (t0 + 6200U);
    t9 = std_textio_endfile(t1);
    t10 = (!(t9));
    t5 = t10;
    goto LAB9;

}

static void xlib_a_2976120799_1516540902_p_25(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(256, ng0);

LAB3:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t1 = (t0 + 16208);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 7U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 14496);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_2976120799_1516540902_p_26(char *t0)
{
    char t22[16];
    char t23[16];
    char t24[16];
    char t26[16];
    char t29[16];
    char t31[16];
    char t35[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t25;
    char *t27;
    char *t28;
    char *t30;
    char *t32;
    char *t33;
    int t34;
    char *t36;
    char *t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;

LAB0:    xsi_set_current_line(260, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 14512);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(261, ng0);
    t1 = (t0 + 16272);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(263, ng0);
    t2 = (t0 + 2952U);
    t6 = *((char **)t2);
    t12 = *((unsigned char *)t6);
    t13 = (t12 == (unsigned char)3);
    if (t13 == 1)
        goto LAB13;

LAB14:    t11 = (unsigned char)0;

LAB15:    if (t11 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(264, ng0);
    t17 = (t0 + 16272);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(265, ng0);
    if ((unsigned char)0 == 0)
        goto LAB22;

LAB23:    goto LAB11;

LAB13:    t2 = (t0 + 4712U);
    t7 = *((char **)t2);
    t2 = (t0 + 5192U);
    t8 = *((char **)t2);
    t14 = 1;
    if (7U == 7U)
        goto LAB16;

LAB17:    t14 = 0;

LAB18:    t11 = (!(t14));
    goto LAB15;

LAB16:    t15 = 0;

LAB19:    if (t15 < 7U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t2 = (t7 + t15);
    t16 = (t8 + t15);
    if (*((unsigned char *)t2) != *((unsigned char *)t16))
        goto LAB17;

LAB21:    t15 = (t15 + 1);
    goto LAB19;

LAB22:    t1 = (t0 + 25127);
    t5 = (t0 + 5192U);
    t6 = *((char **)t5);
    t5 = (t0 + 24824U);
    t7 = xlib_p_4004838454_sub_2063504136543877411_4217348002(XLIB_P_4004838454, t22, t6, t5);
    t16 = ((STD_STANDARD) + 984);
    t17 = (t24 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 1;
    t18 = (t17 + 4U);
    *((int *)t18) = 30;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t25 = (30 - 1);
    t15 = (t25 * 1);
    t15 = (t15 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t15;
    t8 = xsi_base_array_concat(t8, t23, t16, (char)97, t1, t24, (char)97, t7, t22, (char)101);
    t18 = (t0 + 25157);
    t20 = (t0 + 4712U);
    t21 = *((char **)t20);
    t20 = (t0 + 24792U);
    t27 = xlib_p_4004838454_sub_2063504136543877411_4217348002(XLIB_P_4004838454, t26, t21, t20);
    t30 = ((STD_STANDARD) + 984);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 1;
    t33 = (t32 + 4U);
    *((int *)t33) = 8;
    t33 = (t32 + 8U);
    *((int *)t33) = 1;
    t34 = (8 - 1);
    t15 = (t34 * 1);
    t15 = (t15 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t15;
    t28 = xsi_base_array_concat(t28, t29, t30, (char)97, t18, t31, (char)97, t27, t26, (char)101);
    t36 = ((STD_STANDARD) + 984);
    t33 = xsi_base_array_concat(t33, t35, t36, (char)97, t8, t23, (char)97, t28, t29, (char)101);
    t37 = (t22 + 12U);
    t15 = *((unsigned int *)t37);
    t15 = (t15 * 1U);
    t38 = (30U + t15);
    t39 = (t26 + 12U);
    t40 = *((unsigned int *)t39);
    t40 = (t40 * 1U);
    t41 = (8U + t40);
    t42 = (t38 + t41);
    xsi_report(t33, t42, (unsigned char)2);
    goto LAB23;

}

static void xlib_a_2976120799_1516540902_p_27(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;

LAB0:    xsi_set_current_line(274, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 14528);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(275, ng0);
    t4 = (t0 + 2312U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(276, ng0);
    t4 = (t0 + 5352U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)2);
    if (t13 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(281, ng0);
    if ((unsigned char)0 == 0)
        goto LAB16;

LAB17:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(277, ng0);
    if ((unsigned char)0 == 0)
        goto LAB14;

LAB15:    goto LAB12;

LAB14:    t4 = (t0 + 25165);
    xsi_report(t4, 51U, (unsigned char)0);
    goto LAB15;

LAB16:    t2 = (t0 + 25216);
    xsi_report(t2, 51U, (unsigned char)0);
    goto LAB17;

}


extern void xlib_a_2976120799_1516540902_init()
{
	static char *pe[] = {(void *)xlib_a_2976120799_1516540902_p_0,(void *)xlib_a_2976120799_1516540902_p_1,(void *)xlib_a_2976120799_1516540902_p_2,(void *)xlib_a_2976120799_1516540902_p_3,(void *)xlib_a_2976120799_1516540902_p_4,(void *)xlib_a_2976120799_1516540902_p_5,(void *)xlib_a_2976120799_1516540902_p_6,(void *)xlib_a_2976120799_1516540902_p_7,(void *)xlib_a_2976120799_1516540902_p_8,(void *)xlib_a_2976120799_1516540902_p_9,(void *)xlib_a_2976120799_1516540902_p_10,(void *)xlib_a_2976120799_1516540902_p_11,(void *)xlib_a_2976120799_1516540902_p_12,(void *)xlib_a_2976120799_1516540902_p_13,(void *)xlib_a_2976120799_1516540902_p_14,(void *)xlib_a_2976120799_1516540902_p_15,(void *)xlib_a_2976120799_1516540902_p_16,(void *)xlib_a_2976120799_1516540902_p_17,(void *)xlib_a_2976120799_1516540902_p_18,(void *)xlib_a_2976120799_1516540902_p_19,(void *)xlib_a_2976120799_1516540902_p_20,(void *)xlib_a_2976120799_1516540902_p_21,(void *)xlib_a_2976120799_1516540902_p_22,(void *)xlib_a_2976120799_1516540902_p_23,(void *)xlib_a_2976120799_1516540902_p_24,(void *)xlib_a_2976120799_1516540902_p_25,(void *)xlib_a_2976120799_1516540902_p_26,(void *)xlib_a_2976120799_1516540902_p_27};
	xsi_register_didat("xlib_a_2976120799_1516540902", "isim/ldpcenc_fixpt_isim_design.exe.sim/xlib/a_2976120799_1516540902.didat");
	xsi_register_executes(pe);
}
