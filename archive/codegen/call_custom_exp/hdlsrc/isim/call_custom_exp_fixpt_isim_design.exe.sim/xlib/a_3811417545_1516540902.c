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
static const char *ng0 = "/home/sky/Documents/MATLAB/Low_density_parity_code/archive/codegen/call_custom_exp/hdlsrc/call_custom_exp_fixpt_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;
extern char *XLIB_P_1932568133;
extern char *STD_STANDARD;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
unsigned char ieee_p_1242562249_sub_1434214030532789707_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_1434220770680401498_1035706684(char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1701011461141717515_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_3044629854704842352_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );
void ieee_p_3564397177_sub_2863978933202788330_91900896(char *, char *, char *, char *, char *);
char *xlib_p_1932568133_sub_160277263155789415_3457376708(char *, char *, char *, char *);


static void xlib_a_3811417545_1516540902_p_0(char *t0)
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

LAB0:    xsi_set_current_line(91, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1672U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 15456);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 14928);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_3811417545_1516540902_p_1(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    unsigned char t5;
    char *t6;
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

LAB0:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 27648U);
    t4 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t3, 2047, 11);
    t5 = ieee_p_1242562249_sub_1434220770680401498_1035706684(IEEE_P_1242562249, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 15520);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 14944);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t6 = (t0 + 15520);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB6:    goto LAB2;

}

static void xlib_a_3811417545_1516540902_p_2(char *t0)
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

LAB0:    xsi_set_current_line(97, ng0);

LAB3:    t1 = (2 * 1000LL);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 15584);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t9 = (t0 + 15584);
    xsi_driver_intertial_reject(t9, t1, t1);

LAB2:    t10 = (t0 + 14960);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_3811417545_1516540902_p_3(char *t0)
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

LAB0:    xsi_set_current_line(99, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 15648);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 14976);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_3811417545_1516540902_p_4(char *t0)
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

LAB0:    t1 = (t0 + 8408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 15712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(104, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 8216);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 15712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(106, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 8216);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(107, ng0);
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

LAB12:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 15712);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(109, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 8216);
    xsi_process_wait(t2, t7);

LAB17:    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB15:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 15712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(111, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 8216);
    xsi_process_wait(t2, t7);

LAB21:    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB16:    goto LAB15;

LAB18:    goto LAB16;

LAB19:    xsi_set_current_line(112, ng0);

LAB25:    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

LAB23:    goto LAB13;

LAB24:    goto LAB23;

LAB26:    goto LAB24;

}

static void xlib_a_3811417545_1516540902_p_5(char *t0)
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

LAB0:    t1 = (t0 + 8656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 15776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(119, ng0);
    t7 = (20 * 1000LL);
    t2 = (t0 + 8464);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(120, ng0);

LAB10:    t2 = (t0 + 14992);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t4 = (t0 + 14992);
    *((int *)t4) = 0;
    xsi_set_current_line(121, ng0);
    t7 = (2 * 1000LL);
    t2 = (t0 + 8464);
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

LAB15:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 15776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(123, ng0);

LAB21:    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB16:    goto LAB15;

LAB18:    goto LAB16;

LAB19:    goto LAB2;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

}

static void xlib_a_3811417545_1516540902_p_6(char *t0)
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

LAB0:    xsi_set_current_line(126, ng0);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 15840);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 15008);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_3811417545_1516540902_p_7(char *t0)
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

LAB0:    xsi_set_current_line(128, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 15904);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 15024);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_3811417545_1516540902_p_8(char *t0)
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

LAB0:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 15968);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 15040);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t1 = (t0 + 15968);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void xlib_a_3811417545_1516540902_p_9(char *t0)
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

LAB0:    xsi_set_current_line(134, ng0);

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
    t1 = (t0 + 16032);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t1);

LAB2:    t14 = (t0 + 15056);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_3811417545_1516540902_p_10(char *t0)
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

LAB0:    xsi_set_current_line(136, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2152U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 16096);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 15072);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_3811417545_1516540902_p_11(char *t0)
{
    char t5[16];
    char t15[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB9;

LAB10:    t3 = (unsigned char)0;

LAB11:    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 15088);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(145, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 0, 11);
    t6 = (11U != 11U);
    if (t6 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 16160);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 11U);
    xsi_driver_first_trans_fast(t7);
    goto LAB3;

LAB5:    xsi_size_not_matching(11U, 11U, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 3112U);
    t8 = *((char **)t2);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB12;

LAB14:
LAB13:    goto LAB3;

LAB9:    t2 = (t0 + 1032U);
    t7 = *((char **)t2);
    t6 = *((unsigned char *)t7);
    t12 = (t6 == (unsigned char)3);
    t3 = t12;
    goto LAB11;

LAB12:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 1992U);
    t9 = *((char **)t2);
    t2 = (t0 + 27648U);
    t10 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t15, 1, 11);
    t11 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t5, t9, t2, t10, t15);
    t16 = (t5 + 12U);
    t17 = *((unsigned int *)t16);
    t18 = (1U * t17);
    t19 = (11U != t18);
    if (t19 == 1)
        goto LAB15;

LAB16:    t20 = (t0 + 16160);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t11, 11U);
    xsi_driver_first_trans_fast(t20);
    goto LAB13;

LAB15:    xsi_size_not_matching(11U, t18, 0);
    goto LAB16;

}

static void xlib_a_3811417545_1516540902_p_12(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    unsigned char t5;
    char *t6;
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

LAB0:    xsi_set_current_line(155, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 27648U);
    t4 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t3, 2047, 11);
    t5 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 16224);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 15104);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t6 = (t0 + 16224);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB6:    goto LAB2;

}

static void xlib_a_3811417545_1516540902_p_13(char *t0)
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

LAB0:    xsi_set_current_line(158, ng0);

LAB3:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 16288);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 15120);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_3811417545_1516540902_p_14(char *t0)
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

LAB0:    xsi_set_current_line(163, ng0);
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
LAB3:    t1 = (t0 + 15136);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 16352);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(166, ng0);
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

LAB10:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 1512U);
    t7 = *((char **)t2);
    t13 = *((unsigned char *)t7);
    t2 = (t0 + 16352);
    t8 = (t2 + 56U);
    t14 = *((char **)t8);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t13;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

}

static void xlib_a_3811417545_1516540902_p_15(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    unsigned char t5;
    char *t6;
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

LAB0:    xsi_set_current_line(173, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 27664U);
    t4 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t3, 2047, 11);
    t5 = ieee_p_1242562249_sub_1434220770680401498_1035706684(IEEE_P_1242562249, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 16416);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 15152);
    *((int *)t16) = 1;

LAB1:    return;
LAB3:    t6 = (t0 + 16416);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB6:    goto LAB2;

}

static void xlib_a_3811417545_1516540902_p_16(char *t0)
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

LAB0:    xsi_set_current_line(176, ng0);

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
    t1 = (t0 + 16480);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t1);

LAB2:    t14 = (t0 + 15168);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_3811417545_1516540902_p_17(char *t0)
{
    char t5[16];
    char t15[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(184, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB9;

LAB10:    t3 = (unsigned char)0;

LAB11:    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 15184);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(185, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 0, 11);
    t6 = (11U != 11U);
    if (t6 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 16544);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 11U);
    xsi_driver_first_trans_fast(t7);
    goto LAB3;

LAB5:    xsi_size_not_matching(11U, 11U, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 3752U);
    t8 = *((char **)t2);
    t13 = *((unsigned char *)t8);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB12;

LAB14:
LAB13:    goto LAB3;

LAB9:    t2 = (t0 + 1032U);
    t7 = *((char **)t2);
    t6 = *((unsigned char *)t7);
    t12 = (t6 == (unsigned char)3);
    t3 = t12;
    goto LAB11;

LAB12:    xsi_set_current_line(188, ng0);
    t2 = (t0 + 3432U);
    t9 = *((char **)t2);
    t2 = (t0 + 27664U);
    t10 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t15, 1, 11);
    t11 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t5, t9, t2, t10, t15);
    t16 = (t5 + 12U);
    t17 = *((unsigned int *)t16);
    t18 = (1U * t17);
    t19 = (11U != t18);
    if (t19 == 1)
        goto LAB15;

LAB16:    t20 = (t0 + 16544);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t11, 11U);
    xsi_driver_first_trans_fast(t20);
    goto LAB13;

LAB15:    xsi_size_not_matching(11U, t18, 0);
    goto LAB16;

}

static void xlib_a_3811417545_1516540902_p_18(char *t0)
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

LAB0:    xsi_set_current_line(194, ng0);

LAB3:    t1 = (1 * 1000LL);
    t2 = (t0 + 3432U);
    t3 = *((char **)t2);
    t2 = (t0 + 16608);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 11U);
    xsi_driver_first_trans_delta(t2, 0U, 11U, t1);
    t8 = (t0 + 16608);
    xsi_driver_intertial_reject(t8, t1, t1);

LAB2:    t9 = (t0 + 15200);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_3811417545_1516540902_p_19(char *t0)
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;

LAB0:    xsi_set_current_line(203, ng0);
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
LAB3:    xsi_set_current_line(208, ng0);
    t1 = (t0 + 5968U);
    t2 = *((char **)t1);
    t14 = (15 - 13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t6 = (t0 + 16672);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t17 = *((char **)t13);
    memcpy(t17, t1, 14U);
    xsi_driver_first_trans_fast(t6);
    t1 = (t0 + 15216);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    goto LAB3;

LAB5:    xsi_set_current_line(205, ng0);
    t11 = (t0 + 11936);
    t12 = (t0 + 6416U);
    t13 = (t0 + 6696U);
    std_textio_readline(STD_TEXTIO, t11, t12, t13);
    xsi_set_current_line(206, ng0);
    t1 = (t0 + 11936);
    t2 = (t0 + 6696U);
    t6 = (t0 + 5968U);
    t11 = *((char **)t6);
    t6 = (t0 + 27856U);
    ieee_p_3564397177_sub_2863978933202788330_91900896(IEEE_P_3564397177, t1, t2, t11, t6);
    goto LAB3;

LAB7:    t1 = (t0 + 6416U);
    t9 = std_textio_endfile(t1);
    t10 = (!(t9));
    t5 = t10;
    goto LAB9;

}

static void xlib_a_3811417545_1516540902_p_20(char *t0)
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

LAB0:    xsi_set_current_line(214, ng0);
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
LAB3:    t1 = (t0 + 15232);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(215, ng0);
    t1 = xsi_get_transient_memory(14U);
    memset(t1, 0, 14U);
    t5 = t1;
    memset(t5, (unsigned char)1, 14U);
    t6 = (t0 + 16736);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 14U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(217, ng0);
    t2 = (t0 + 4072U);
    t6 = *((char **)t2);
    t2 = (t0 + 16736);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 14U);
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

}

static void xlib_a_3811417545_1516540902_p_21(char *t0)
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

LAB0:    xsi_set_current_line(223, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(226, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t1 = (t0 + 16800);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 14U);
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 15248);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(224, ng0);
    t1 = (t0 + 4232U);
    t5 = *((char **)t1);
    t1 = (t0 + 16800);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 14U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void xlib_a_3811417545_1516540902_p_22(char *t0)
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

LAB0:    xsi_set_current_line(230, ng0);

LAB3:    t1 = (2 * 1000LL);
    t2 = (t0 + 4392U);
    t3 = *((char **)t2);
    t2 = (t0 + 16864);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 14U);
    xsi_driver_first_trans_delta(t2, 0U, 14U, t1);
    t8 = (t0 + 16864);
    xsi_driver_intertial_reject(t8, t1, t1);

LAB2:    t9 = (t0 + 15264);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_3811417545_1516540902_p_23(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(232, ng0);

LAB3:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t1 = (t0 + 16928);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 14U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 15280);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_3811417545_1516540902_p_24(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(234, ng0);

LAB3:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t1 = (t0 + 16992);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 14U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 15296);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_3811417545_1516540902_p_25(char *t0)
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

LAB0:    xsi_set_current_line(236, ng0);

LAB3:    t1 = (1 * 1000LL);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 17056);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 11U);
    xsi_driver_first_trans_delta(t2, 0U, 11U, t1);
    t8 = (t0 + 17056);
    xsi_driver_intertial_reject(t8, t1, t1);

LAB2:    t9 = (t0 + 15312);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_3811417545_1516540902_p_26(char *t0)
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;

LAB0:    xsi_set_current_line(245, ng0);
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
LAB3:    xsi_set_current_line(250, ng0);
    t1 = (t0 + 6088U);
    t2 = *((char **)t1);
    t14 = (15 - 13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t6 = (t0 + 17120);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t17 = *((char **)t13);
    memcpy(t17, t1, 14U);
    xsi_driver_first_trans_fast(t6);
    t1 = (t0 + 15328);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    goto LAB3;

LAB5:    xsi_set_current_line(247, ng0);
    t11 = (t0 + 13672);
    t12 = (t0 + 6520U);
    t13 = (t0 + 6768U);
    std_textio_readline(STD_TEXTIO, t11, t12, t13);
    xsi_set_current_line(248, ng0);
    t1 = (t0 + 13672);
    t2 = (t0 + 6768U);
    t6 = (t0 + 6088U);
    t11 = *((char **)t6);
    t6 = (t0 + 27872U);
    ieee_p_3564397177_sub_2863978933202788330_91900896(IEEE_P_3564397177, t1, t2, t11, t6);
    goto LAB3;

LAB7:    t1 = (t0 + 6520U);
    t9 = std_textio_endfile(t1);
    t10 = (!(t9));
    t5 = t10;
    goto LAB9;

}

static void xlib_a_3811417545_1516540902_p_27(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(253, ng0);

LAB3:    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    t1 = (t0 + 17184);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 14U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 15344);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void xlib_a_3811417545_1516540902_p_28(char *t0)
{
    char t21[16];
    char t22[16];
    char t23[16];
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
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t24;
    unsigned int t25;
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

LAB0:    xsi_set_current_line(257, ng0);
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
LAB3:    t1 = (t0 + 15360);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(258, ng0);
    t1 = (t0 + 17248);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(260, ng0);
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

LAB10:    xsi_set_current_line(261, ng0);
    t16 = (t0 + 17248);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)3;
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(262, ng0);
    if ((unsigned char)0 == 0)
        goto LAB16;

LAB17:    goto LAB11;

LAB13:    t2 = (t0 + 5032U);
    t7 = *((char **)t2);
    t2 = (t0 + 27792U);
    t8 = (t0 + 5512U);
    t14 = *((char **)t8);
    t8 = (t0 + 27840U);
    t15 = ieee_p_1242562249_sub_3044629854704842352_1035706684(IEEE_P_1242562249, t7, t2, t14, t8);
    t11 = t15;
    goto LAB15;

LAB16:    t1 = (t0 + 28280);
    t5 = (t0 + 5512U);
    t6 = *((char **)t5);
    t5 = (t0 + 27840U);
    t7 = xlib_p_1932568133_sub_160277263155789415_3457376708(XLIB_P_1932568133, t21, t6, t5);
    t14 = ((STD_STANDARD) + 984);
    t16 = (t23 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 1;
    t17 = (t16 + 4U);
    *((int *)t17) = 28;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t24 = (28 - 1);
    t25 = (t24 * 1);
    t25 = (t25 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t25;
    t8 = xsi_base_array_concat(t8, t22, t14, (char)97, t1, t23, (char)97, t7, t21, (char)101);
    t17 = (t0 + 28308);
    t19 = (t0 + 5032U);
    t20 = *((char **)t19);
    t19 = (t0 + 27792U);
    t27 = xlib_p_1932568133_sub_160277263155789415_3457376708(XLIB_P_1932568133, t26, t20, t19);
    t30 = ((STD_STANDARD) + 984);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 1;
    t33 = (t32 + 4U);
    *((int *)t33) = 8;
    t33 = (t32 + 8U);
    *((int *)t33) = 1;
    t34 = (8 - 1);
    t25 = (t34 * 1);
    t25 = (t25 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t25;
    t28 = xsi_base_array_concat(t28, t29, t30, (char)97, t17, t31, (char)97, t27, t26, (char)101);
    t36 = ((STD_STANDARD) + 984);
    t33 = xsi_base_array_concat(t33, t35, t36, (char)97, t8, t22, (char)97, t28, t29, (char)101);
    t37 = (t21 + 12U);
    t25 = *((unsigned int *)t37);
    t25 = (t25 * 1U);
    t38 = (28U + t25);
    t39 = (t26 + 12U);
    t40 = *((unsigned int *)t39);
    t40 = (t40 * 1U);
    t41 = (8U + t40);
    t42 = (t38 + t41);
    xsi_report(t33, t42, (unsigned char)2);
    goto LAB17;

}

static void xlib_a_3811417545_1516540902_p_29(char *t0)
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

LAB0:    xsi_set_current_line(271, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 15376);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(272, ng0);
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

LAB8:    xsi_set_current_line(273, ng0);
    t4 = (t0 + 5672U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)2);
    if (t13 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(278, ng0);
    if ((unsigned char)0 == 0)
        goto LAB16;

LAB17:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(274, ng0);
    if ((unsigned char)0 == 0)
        goto LAB14;

LAB15:    goto LAB12;

LAB14:    t4 = (t0 + 28316);
    xsi_report(t4, 51U, (unsigned char)0);
    goto LAB15;

LAB16:    t2 = (t0 + 28367);
    xsi_report(t2, 51U, (unsigned char)0);
    goto LAB17;

}


extern void xlib_a_3811417545_1516540902_init()
{
	static char *pe[] = {(void *)xlib_a_3811417545_1516540902_p_0,(void *)xlib_a_3811417545_1516540902_p_1,(void *)xlib_a_3811417545_1516540902_p_2,(void *)xlib_a_3811417545_1516540902_p_3,(void *)xlib_a_3811417545_1516540902_p_4,(void *)xlib_a_3811417545_1516540902_p_5,(void *)xlib_a_3811417545_1516540902_p_6,(void *)xlib_a_3811417545_1516540902_p_7,(void *)xlib_a_3811417545_1516540902_p_8,(void *)xlib_a_3811417545_1516540902_p_9,(void *)xlib_a_3811417545_1516540902_p_10,(void *)xlib_a_3811417545_1516540902_p_11,(void *)xlib_a_3811417545_1516540902_p_12,(void *)xlib_a_3811417545_1516540902_p_13,(void *)xlib_a_3811417545_1516540902_p_14,(void *)xlib_a_3811417545_1516540902_p_15,(void *)xlib_a_3811417545_1516540902_p_16,(void *)xlib_a_3811417545_1516540902_p_17,(void *)xlib_a_3811417545_1516540902_p_18,(void *)xlib_a_3811417545_1516540902_p_19,(void *)xlib_a_3811417545_1516540902_p_20,(void *)xlib_a_3811417545_1516540902_p_21,(void *)xlib_a_3811417545_1516540902_p_22,(void *)xlib_a_3811417545_1516540902_p_23,(void *)xlib_a_3811417545_1516540902_p_24,(void *)xlib_a_3811417545_1516540902_p_25,(void *)xlib_a_3811417545_1516540902_p_26,(void *)xlib_a_3811417545_1516540902_p_27,(void *)xlib_a_3811417545_1516540902_p_28,(void *)xlib_a_3811417545_1516540902_p_29};
	xsi_register_didat("xlib_a_3811417545_1516540902", "isim/call_custom_exp_fixpt_isim_design.exe.sim/xlib/a_3811417545_1516540902.didat");
	xsi_register_executes(pe);
}
