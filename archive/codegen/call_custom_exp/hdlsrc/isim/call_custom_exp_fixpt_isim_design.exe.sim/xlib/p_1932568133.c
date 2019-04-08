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
extern char *STD_STANDARD;
extern char *IEEE_P_2592010699;



char *xlib_p_1932568133_sub_2063504136543877411_3457376708(char *t1, char *t2, char *t3, char *t4)
{
    char t5[744];
    char t6[24];
    char t7[16];
    char t31[8];
    char t37[8];
    char t43[8];
    char t49[8];
    char t52[16];
    char t59[1024];
    char *t0;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t50;
    char *t51;
    char *t53;
    char *t54;
    int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned char t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    unsigned char t85;
    int t86;
    unsigned int t87;
    unsigned int t88;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 256;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (256 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t5 + 4U);
    t12 = ((STD_STANDARD) + 984);
    t13 = (t9 + 88U);
    *((char **)t13) = t12;
    t14 = xsi_get_memory(256U);
    t15 = (t9 + 56U);
    *((char **)t15) = t14;
    xsi_type_set_default_value(t12, t14, t7);
    t16 = (t9 + 64U);
    *((char **)t16) = t7;
    t17 = (t9 + 80U);
    *((unsigned int *)t17) = 256U;
    t18 = (t9 + 128U);
    *((char **)t18) = t14;
    t19 = (t9 + 120U);
    *((int *)t19) = 0;
    t20 = (t9 + 124U);
    t21 = (t7 + 12U);
    t11 = *((unsigned int *)t21);
    t22 = (t11 - 1);
    *((int *)t20) = t22;
    t23 = (t9 + 116U);
    t25 = (256U > 2147483644);
    if (t25 == 1)
        goto LAB2;

LAB3:    t26 = (256U + 3);
    t27 = (t26 / 16);
    t24 = t27;

LAB4:    *((unsigned int *)t23) = t24;
    t28 = (t5 + 140U);
    t29 = ((STD_STANDARD) + 384);
    t30 = (t28 + 88U);
    *((char **)t30) = t29;
    t32 = (t28 + 56U);
    *((char **)t32) = t31;
    xsi_type_set_default_value(t29, t31, 0);
    t33 = (t28 + 80U);
    *((unsigned int *)t33) = 4U;
    t34 = (t5 + 260U);
    t35 = ((STD_STANDARD) + 384);
    t36 = (t34 + 88U);
    *((char **)t36) = t35;
    t38 = (t34 + 56U);
    *((char **)t38) = t37;
    xsi_type_set_default_value(t35, t37, 0);
    t39 = (t34 + 80U);
    *((unsigned int *)t39) = 4U;
    t40 = (t5 + 380U);
    t41 = ((STD_STANDARD) + 384);
    t42 = (t40 + 88U);
    *((char **)t42) = t41;
    t44 = (t40 + 56U);
    *((char **)t44) = t43;
    xsi_type_set_default_value(t41, t43, 0);
    t45 = (t40 + 80U);
    *((unsigned int *)t45) = 4U;
    t46 = (t5 + 500U);
    t47 = ((STD_STANDARD) + 384);
    t48 = (t46 + 88U);
    *((char **)t48) = t47;
    t50 = (t46 + 56U);
    *((char **)t50) = t49;
    xsi_type_set_default_value(t47, t49, 0);
    t51 = (t46 + 80U);
    *((unsigned int *)t51) = 4U;
    t53 = (t52 + 0U);
    t54 = (t53 + 0U);
    *((int *)t54) = 1023;
    t54 = (t53 + 4U);
    *((int *)t54) = 0;
    t54 = (t53 + 8U);
    *((int *)t54) = -1;
    t55 = (0 - 1023);
    t56 = (t55 * -1);
    t56 = (t56 + 1);
    t54 = (t53 + 12U);
    *((unsigned int *)t54) = t56;
    t54 = (t5 + 620U);
    t57 = ((IEEE_P_2592010699) + 4000);
    t58 = (t54 + 88U);
    *((char **)t58) = t57;
    t60 = (t54 + 56U);
    *((char **)t60) = t59;
    xsi_type_set_default_value(t57, t59, t52);
    t61 = (t54 + 64U);
    *((char **)t61) = t52;
    t62 = (t54 + 80U);
    *((unsigned int *)t62) = 1024U;
    t63 = (t6 + 4U);
    t64 = (t3 != 0);
    if (t64 == 1)
        goto LAB6;

LAB5:    t65 = (t6 + 12U);
    *((char **)t65) = t4;
    t66 = (t52 + 12U);
    t56 = *((unsigned int *)t66);
    t56 = (t56 * 1U);
    t67 = xsi_get_transient_memory(t56);
    memset(t67, 0, t56);
    t68 = t67;
    memset(t68, (unsigned char)2, t56);
    t69 = (t54 + 56U);
    t70 = *((char **)t69);
    t69 = (t70 + 0);
    t71 = (t52 + 12U);
    t72 = *((unsigned int *)t71);
    t72 = (t72 * 1U);
    memcpy(t69, t67, t72);
    t8 = (t4 + 0U);
    t10 = *((int *)t8);
    t12 = (t4 + 4U);
    t22 = *((int *)t12);
    t64 = (t10 > t22);
    if (t64 != 0)
        goto LAB7;

LAB9:    t8 = (t40 + 56U);
    t12 = *((char **)t8);
    t8 = (t12 + 0);
    *((int *)t8) = 0;
    t8 = (t46 + 56U);
    t12 = *((char **)t8);
    t8 = (t12 + 0);
    *((int *)t8) = 1;

LAB8:    t8 = (t4 + 8U);
    t10 = *((int *)t8);
    t12 = (t4 + 4U);
    t22 = *((int *)t12);
    t13 = (t4 + 0U);
    t55 = *((int *)t13);
    t73 = t55;
    t74 = t22;

LAB10:    t75 = (t74 * t10);
    t76 = (t73 * t10);
    if (t76 <= t75)
        goto LAB11;

LAB13:    t8 = (t4 + 12U);
    t11 = *((unsigned int *)t8);
    t10 = (t11 - 1);
    t12 = (t28 + 56U);
    t13 = *((char **)t12);
    t12 = (t13 + 0);
    *((int *)t12) = t10;
    t8 = (t4 + 12U);
    t11 = *((unsigned int *)t8);
    t10 = xsi_vhdl_mod(t11, 4);
    t12 = (t34 + 56U);
    t13 = *((char **)t12);
    t12 = (t13 + 0);
    *((int *)t12) = t10;
    t8 = (t34 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t64 = (t10 == 1);
    if (t64 != 0)
        goto LAB15;

LAB17:    t8 = (t34 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t64 = (t10 == 2);
    if (t64 != 0)
        goto LAB18;

LAB19:    t8 = (t34 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t64 = (t10 == 3);
    if (t64 != 0)
        goto LAB20;

LAB21:
LAB16:    t8 = (t40 + 56U);
    t12 = *((char **)t8);
    t8 = (t12 + 0);
    *((int *)t8) = 1;

LAB22:    t8 = (t28 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t64 = (t10 >= 3);
    if (t64 != 0)
        goto LAB23;

LAB25:    t8 = (t9 + 56U);
    t12 = *((char **)t8);
    t8 = (t7 + 0U);
    t10 = *((int *)t8);
    t11 = (1 - t10);
    t13 = (t40 + 56U);
    t14 = *((char **)t13);
    t22 = *((int *)t14);
    t55 = (t22 - 1);
    t13 = (t7 + 4U);
    t73 = *((int *)t13);
    t15 = (t7 + 8U);
    t74 = *((int *)t15);
    xsi_vhdl_check_range_of_slice(t10, t73, t74, 1, t55, 1);
    t24 = (t11 * 1U);
    t25 = (0 + t24);
    t16 = (t12 + t25);
    t17 = (t40 + 56U);
    t18 = *((char **)t17);
    t75 = *((int *)t18);
    t76 = (t75 - 1);
    t77 = (t76 - 1);
    t26 = (t77 * 1);
    t26 = (t26 + 1);
    t27 = (1U * t26);
    t0 = xsi_get_transient_memory(t27);
    memcpy(t0, t16, t27);
    t17 = (t40 + 56U);
    t19 = *((char **)t17);
    t78 = *((int *)t19);
    t79 = (t78 - 1);
    t17 = (t2 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = 1;
    t20 = (t17 + 4U);
    *((int *)t20) = t79;
    t20 = (t17 + 8U);
    *((int *)t20) = 1;
    t80 = (t79 - 1);
    t56 = (t80 * 1);
    t56 = (t56 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t56;

LAB1:    t8 = (t9 + 80);
    t10 = *((int *)t8);
    t12 = (t9 + 128U);
    t13 = *((char **)t12);
    xsi_put_memory(t10, t13);
    return t0;
LAB2:    t24 = 2147483647;
    goto LAB4;

LAB6:    *((char **)t63) = t3;
    goto LAB5;

LAB7:    t13 = (t4 + 12U);
    t11 = *((unsigned int *)t13);
    t55 = (t11 - 1);
    t14 = (t40 + 56U);
    t15 = *((char **)t14);
    t14 = (t15 + 0);
    *((int *)t14) = t55;
    t10 = (-(1));
    t8 = (t46 + 56U);
    t12 = *((char **)t8);
    t8 = (t12 + 0);
    *((int *)t8) = t10;
    goto LAB8;

LAB11:    t14 = (t4 + 0U);
    t77 = *((int *)t14);
    t15 = (t4 + 8U);
    t78 = *((int *)t15);
    t79 = (t73 - t77);
    t11 = (t79 * t78);
    t24 = (1U * t11);
    t25 = (0 + t24);
    t16 = (t3 + t25);
    t64 = *((unsigned char *)t16);
    t17 = (t54 + 56U);
    t18 = *((char **)t17);
    t17 = (t40 + 56U);
    t19 = *((char **)t17);
    t80 = *((int *)t19);
    t17 = (t52 + 0U);
    t81 = *((int *)t17);
    t20 = (t52 + 8U);
    t82 = *((int *)t20);
    t83 = (t80 - t81);
    t26 = (t83 * t82);
    t21 = (t52 + 4U);
    t84 = *((int *)t21);
    xsi_vhdl_check_range_of_index(t81, t84, t82, t80);
    t27 = (1U * t26);
    t56 = (0 + t27);
    t23 = (t18 + t56);
    *((unsigned char *)t23) = t64;
    t8 = (t40 + 56U);
    t12 = *((char **)t8);
    t22 = *((int *)t12);
    t8 = (t46 + 56U);
    t13 = *((char **)t8);
    t55 = *((int *)t13);
    t75 = (t22 + t55);
    t8 = (t40 + 56U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    *((int *)t8) = t75;

LAB12:    if (t73 == t74)
        goto LAB13;

LAB14:    t22 = (t73 + t10);
    t73 = t22;
    goto LAB10;

LAB15:    t8 = (t28 + 56U);
    t13 = *((char **)t8);
    t22 = *((int *)t13);
    t55 = (t22 + 3);
    t8 = (t28 + 56U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    *((int *)t8) = t55;
    goto LAB16;

LAB18:    t8 = (t28 + 56U);
    t13 = *((char **)t8);
    t22 = *((int *)t13);
    t55 = (t22 + 2);
    t8 = (t28 + 56U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    *((int *)t8) = t55;
    goto LAB16;

LAB20:    t8 = (t28 + 56U);
    t13 = *((char **)t8);
    t22 = *((int *)t13);
    t55 = (t22 + 1);
    t8 = (t28 + 56U);
    t14 = *((char **)t8);
    t8 = (t14 + 0);
    *((int *)t8) = t55;
    goto LAB16;

LAB23:    t8 = (t54 + 56U);
    t13 = *((char **)t8);
    t8 = (t52 + 0U);
    t22 = *((int *)t8);
    t14 = (t28 + 56U);
    t15 = *((char **)t14);
    t55 = *((int *)t15);
    t11 = (t22 - t55);
    t14 = (t28 + 56U);
    t16 = *((char **)t14);
    t73 = *((int *)t16);
    t74 = (t73 - 3);
    t14 = (t52 + 4U);
    t75 = *((int *)t14);
    t17 = (t52 + 8U);
    t76 = *((int *)t17);
    xsi_vhdl_check_range_of_slice(t22, t75, t76, t55, t74, -1);
    t24 = (t11 * 1U);
    t25 = (0 + t24);
    t18 = (t13 + t25);
    t19 = (t28 + 56U);
    t20 = *((char **)t19);
    t77 = *((int *)t20);
    t19 = (t28 + 56U);
    t21 = *((char **)t19);
    t78 = *((int *)t21);
    t79 = (t78 - 3);
    t80 = (t79 - t77);
    t26 = (t80 * -1);
    t26 = (t26 + 1);
    t27 = (1U * t26);
    t19 = (t1 + 3648);
    t85 = 1;
    if (t27 == 4U)
        goto LAB29;

LAB30:    t85 = 0;

LAB31:    if (t85 != 0)
        goto LAB26;

LAB28:    t8 = (t54 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t28 + 56U);
    t14 = *((char **)t13);
    t22 = *((int *)t14);
    t11 = (t10 - t22);
    t13 = (t28 + 56U);
    t15 = *((char **)t13);
    t55 = *((int *)t15);
    t73 = (t55 - 3);
    t13 = (t52 + 4U);
    t74 = *((int *)t13);
    t16 = (t52 + 8U);
    t75 = *((int *)t16);
    xsi_vhdl_check_range_of_slice(t10, t74, t75, t22, t73, -1);
    t24 = (t11 * 1U);
    t25 = (0 + t24);
    t17 = (t12 + t25);
    t18 = (t28 + 56U);
    t19 = *((char **)t18);
    t76 = *((int *)t19);
    t18 = (t28 + 56U);
    t20 = *((char **)t18);
    t77 = *((int *)t20);
    t78 = (t77 - 3);
    t79 = (t78 - t76);
    t26 = (t79 * -1);
    t26 = (t26 + 1);
    t27 = (1U * t26);
    t18 = (t1 + 3652);
    t64 = 1;
    if (t27 == 4U)
        goto LAB37;

LAB38:    t64 = 0;

LAB39:    if (t64 != 0)
        goto LAB35;

LAB36:    t8 = (t54 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t28 + 56U);
    t14 = *((char **)t13);
    t22 = *((int *)t14);
    t11 = (t10 - t22);
    t13 = (t28 + 56U);
    t15 = *((char **)t13);
    t55 = *((int *)t15);
    t73 = (t55 - 3);
    t13 = (t52 + 4U);
    t74 = *((int *)t13);
    t16 = (t52 + 8U);
    t75 = *((int *)t16);
    xsi_vhdl_check_range_of_slice(t10, t74, t75, t22, t73, -1);
    t24 = (t11 * 1U);
    t25 = (0 + t24);
    t17 = (t12 + t25);
    t18 = (t28 + 56U);
    t19 = *((char **)t18);
    t76 = *((int *)t19);
    t18 = (t28 + 56U);
    t20 = *((char **)t18);
    t77 = *((int *)t20);
    t78 = (t77 - 3);
    t79 = (t78 - t76);
    t26 = (t79 * -1);
    t26 = (t26 + 1);
    t27 = (1U * t26);
    t18 = (t1 + 3656);
    t64 = 1;
    if (t27 == 4U)
        goto LAB45;

LAB46:    t64 = 0;

LAB47:    if (t64 != 0)
        goto LAB43;

LAB44:    t8 = (t54 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t28 + 56U);
    t14 = *((char **)t13);
    t22 = *((int *)t14);
    t11 = (t10 - t22);
    t13 = (t28 + 56U);
    t15 = *((char **)t13);
    t55 = *((int *)t15);
    t73 = (t55 - 3);
    t13 = (t52 + 4U);
    t74 = *((int *)t13);
    t16 = (t52 + 8U);
    t75 = *((int *)t16);
    xsi_vhdl_check_range_of_slice(t10, t74, t75, t22, t73, -1);
    t24 = (t11 * 1U);
    t25 = (0 + t24);
    t17 = (t12 + t25);
    t18 = (t28 + 56U);
    t19 = *((char **)t18);
    t76 = *((int *)t19);
    t18 = (t28 + 56U);
    t20 = *((char **)t18);
    t77 = *((int *)t20);
    t78 = (t77 - 3);
    t79 = (t78 - t76);
    t26 = (t79 * -1);
    t26 = (t26 + 1);
    t27 = (1U * t26);
    t18 = (t1 + 3660);
    t64 = 1;
    if (t27 == 4U)
        goto LAB53;

LAB54:    t64 = 0;

LAB55:    if (t64 != 0)
        goto LAB51;

LAB52:    t8 = (t54 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t28 + 56U);
    t14 = *((char **)t13);
    t22 = *((int *)t14);
    t11 = (t10 - t22);
    t13 = (t28 + 56U);
    t15 = *((char **)t13);
    t55 = *((int *)t15);
    t73 = (t55 - 3);
    t13 = (t52 + 4U);
    t74 = *((int *)t13);
    t16 = (t52 + 8U);
    t75 = *((int *)t16);
    xsi_vhdl_check_range_of_slice(t10, t74, t75, t22, t73, -1);
    t24 = (t11 * 1U);
    t25 = (0 + t24);
    t17 = (t12 + t25);
    t18 = (t28 + 56U);
    t19 = *((char **)t18);
    t76 = *((int *)t19);
    t18 = (t28 + 56U);
    t20 = *((char **)t18);
    t77 = *((int *)t20);
    t78 = (t77 - 3);
    t79 = (t78 - t76);
    t26 = (t79 * -1);
    t26 = (t26 + 1);
    t27 = (1U * t26);
    t18 = (t1 + 3664);
    t64 = 1;
    if (t27 == 4U)
        goto LAB61;

LAB62:    t64 = 0;

LAB63:    if (t64 != 0)
        goto LAB59;

LAB60:    t8 = (t54 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t28 + 56U);
    t14 = *((char **)t13);
    t22 = *((int *)t14);
    t11 = (t10 - t22);
    t13 = (t28 + 56U);
    t15 = *((char **)t13);
    t55 = *((int *)t15);
    t73 = (t55 - 3);
    t13 = (t52 + 4U);
    t74 = *((int *)t13);
    t16 = (t52 + 8U);
    t75 = *((int *)t16);
    xsi_vhdl_check_range_of_slice(t10, t74, t75, t22, t73, -1);
    t24 = (t11 * 1U);
    t25 = (0 + t24);
    t17 = (t12 + t25);
    t18 = (t28 + 56U);
    t19 = *((char **)t18);
    t76 = *((int *)t19);
    t18 = (t28 + 56U);
    t20 = *((char **)t18);
    t77 = *((int *)t20);
    t78 = (t77 - 3);
    t79 = (t78 - t76);
    t26 = (t79 * -1);
    t26 = (t26 + 1);
    t27 = (1U * t26);
    t18 = (t1 + 3668);
    t64 = 1;
    if (t27 == 4U)
        goto LAB69;

LAB70:    t64 = 0;

LAB71:    if (t64 != 0)
        goto LAB67;

LAB68:    t8 = (t54 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t28 + 56U);
    t14 = *((char **)t13);
    t22 = *((int *)t14);
    t11 = (t10 - t22);
    t13 = (t28 + 56U);
    t15 = *((char **)t13);
    t55 = *((int *)t15);
    t73 = (t55 - 3);
    t13 = (t52 + 4U);
    t74 = *((int *)t13);
    t16 = (t52 + 8U);
    t75 = *((int *)t16);
    xsi_vhdl_check_range_of_slice(t10, t74, t75, t22, t73, -1);
    t24 = (t11 * 1U);
    t25 = (0 + t24);
    t17 = (t12 + t25);
    t18 = (t28 + 56U);
    t19 = *((char **)t18);
    t76 = *((int *)t19);
    t18 = (t28 + 56U);
    t20 = *((char **)t18);
    t77 = *((int *)t20);
    t78 = (t77 - 3);
    t79 = (t78 - t76);
    t26 = (t79 * -1);
    t26 = (t26 + 1);
    t27 = (1U * t26);
    t18 = (t1 + 3672);
    t64 = 1;
    if (t27 == 4U)
        goto LAB77;

LAB78:    t64 = 0;

LAB79:    if (t64 != 0)
        goto LAB75;

LAB76:    t8 = (t54 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t28 + 56U);
    t14 = *((char **)t13);
    t22 = *((int *)t14);
    t11 = (t10 - t22);
    t13 = (t28 + 56U);
    t15 = *((char **)t13);
    t55 = *((int *)t15);
    t73 = (t55 - 3);
    t13 = (t52 + 4U);
    t74 = *((int *)t13);
    t16 = (t52 + 8U);
    t75 = *((int *)t16);
    xsi_vhdl_check_range_of_slice(t10, t74, t75, t22, t73, -1);
    t24 = (t11 * 1U);
    t25 = (0 + t24);
    t17 = (t12 + t25);
    t18 = (t28 + 56U);
    t19 = *((char **)t18);
    t76 = *((int *)t19);
    t18 = (t28 + 56U);
    t20 = *((char **)t18);
    t77 = *((int *)t20);
    t78 = (t77 - 3);
    t79 = (t78 - t76);
    t26 = (t79 * -1);
    t26 = (t26 + 1);
    t27 = (1U * t26);
    t18 = (t1 + 3676);
    t64 = 1;
    if (t27 == 4U)
        goto LAB85;

LAB86:    t64 = 0;

LAB87:    if (t64 != 0)
        goto LAB83;

LAB84:    t8 = (t54 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t28 + 56U);
    t14 = *((char **)t13);
    t22 = *((int *)t14);
    t11 = (t10 - t22);
    t13 = (t28 + 56U);
    t15 = *((char **)t13);
    t55 = *((int *)t15);
    t73 = (t55 - 3);
    t13 = (t52 + 4U);
    t74 = *((int *)t13);
    t16 = (t52 + 8U);
    t75 = *((int *)t16);
    xsi_vhdl_check_range_of_slice(t10, t74, t75, t22, t73, -1);
    t24 = (t11 * 1U);
    t25 = (0 + t24);
    t17 = (t12 + t25);
    t18 = (t28 + 56U);
    t19 = *((char **)t18);
    t76 = *((int *)t19);
    t18 = (t28 + 56U);
    t20 = *((char **)t18);
    t77 = *((int *)t20);
    t78 = (t77 - 3);
    t79 = (t78 - t76);
    t26 = (t79 * -1);
    t26 = (t26 + 1);
    t27 = (1U * t26);
    t18 = (t1 + 3680);
    t64 = 1;
    if (t27 == 4U)
        goto LAB93;

LAB94:    t64 = 0;

LAB95:    if (t64 != 0)
        goto LAB91;

LAB92:    t8 = (t54 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t28 + 56U);
    t14 = *((char **)t13);
    t22 = *((int *)t14);
    t11 = (t10 - t22);
    t13 = (t28 + 56U);
    t15 = *((char **)t13);
    t55 = *((int *)t15);
    t73 = (t55 - 3);
    t13 = (t52 + 4U);
    t74 = *((int *)t13);
    t16 = (t52 + 8U);
    t75 = *((int *)t16);
    xsi_vhdl_check_range_of_slice(t10, t74, t75, t22, t73, -1);
    t24 = (t11 * 1U);
    t25 = (0 + t24);
    t17 = (t12 + t25);
    t18 = (t28 + 56U);
    t19 = *((char **)t18);
    t76 = *((int *)t19);
    t18 = (t28 + 56U);
    t20 = *((char **)t18);
    t77 = *((int *)t20);
    t78 = (t77 - 3);
    t79 = (t78 - t76);
    t26 = (t79 * -1);
    t26 = (t26 + 1);
    t27 = (1U * t26);
    t18 = (t1 + 3684);
    t64 = 1;
    if (t27 == 4U)
        goto LAB101;

LAB102:    t64 = 0;

LAB103:    if (t64 != 0)
        goto LAB99;

LAB100:    t8 = (t54 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t28 + 56U);
    t14 = *((char **)t13);
    t22 = *((int *)t14);
    t11 = (t10 - t22);
    t13 = (t28 + 56U);
    t15 = *((char **)t13);
    t55 = *((int *)t15);
    t73 = (t55 - 3);
    t13 = (t52 + 4U);
    t74 = *((int *)t13);
    t16 = (t52 + 8U);
    t75 = *((int *)t16);
    xsi_vhdl_check_range_of_slice(t10, t74, t75, t22, t73, -1);
    t24 = (t11 * 1U);
    t25 = (0 + t24);
    t17 = (t12 + t25);
    t18 = (t28 + 56U);
    t19 = *((char **)t18);
    t76 = *((int *)t19);
    t18 = (t28 + 56U);
    t20 = *((char **)t18);
    t77 = *((int *)t20);
    t78 = (t77 - 3);
    t79 = (t78 - t76);
    t26 = (t79 * -1);
    t26 = (t26 + 1);
    t27 = (1U * t26);
    t18 = (t1 + 3688);
    t64 = 1;
    if (t27 == 4U)
        goto LAB109;

LAB110:    t64 = 0;

LAB111:    if (t64 != 0)
        goto LAB107;

LAB108:    t8 = (t54 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t28 + 56U);
    t14 = *((char **)t13);
    t22 = *((int *)t14);
    t11 = (t10 - t22);
    t13 = (t28 + 56U);
    t15 = *((char **)t13);
    t55 = *((int *)t15);
    t73 = (t55 - 3);
    t13 = (t52 + 4U);
    t74 = *((int *)t13);
    t16 = (t52 + 8U);
    t75 = *((int *)t16);
    xsi_vhdl_check_range_of_slice(t10, t74, t75, t22, t73, -1);
    t24 = (t11 * 1U);
    t25 = (0 + t24);
    t17 = (t12 + t25);
    t18 = (t28 + 56U);
    t19 = *((char **)t18);
    t76 = *((int *)t19);
    t18 = (t28 + 56U);
    t20 = *((char **)t18);
    t77 = *((int *)t20);
    t78 = (t77 - 3);
    t79 = (t78 - t76);
    t26 = (t79 * -1);
    t26 = (t26 + 1);
    t27 = (1U * t26);
    t18 = (t1 + 3692);
    t64 = 1;
    if (t27 == 4U)
        goto LAB117;

LAB118:    t64 = 0;

LAB119:    if (t64 != 0)
        goto LAB115;

LAB116:    t8 = (t54 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t28 + 56U);
    t14 = *((char **)t13);
    t22 = *((int *)t14);
    t11 = (t10 - t22);
    t13 = (t28 + 56U);
    t15 = *((char **)t13);
    t55 = *((int *)t15);
    t73 = (t55 - 3);
    t13 = (t52 + 4U);
    t74 = *((int *)t13);
    t16 = (t52 + 8U);
    t75 = *((int *)t16);
    xsi_vhdl_check_range_of_slice(t10, t74, t75, t22, t73, -1);
    t24 = (t11 * 1U);
    t25 = (0 + t24);
    t17 = (t12 + t25);
    t18 = (t28 + 56U);
    t19 = *((char **)t18);
    t76 = *((int *)t19);
    t18 = (t28 + 56U);
    t20 = *((char **)t18);
    t77 = *((int *)t20);
    t78 = (t77 - 3);
    t79 = (t78 - t76);
    t26 = (t79 * -1);
    t26 = (t26 + 1);
    t27 = (1U * t26);
    t18 = (t1 + 3696);
    t64 = 1;
    if (t27 == 4U)
        goto LAB125;

LAB126:    t64 = 0;

LAB127:    if (t64 != 0)
        goto LAB123;

LAB124:    t8 = (t54 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t28 + 56U);
    t14 = *((char **)t13);
    t22 = *((int *)t14);
    t11 = (t10 - t22);
    t13 = (t28 + 56U);
    t15 = *((char **)t13);
    t55 = *((int *)t15);
    t73 = (t55 - 3);
    t13 = (t52 + 4U);
    t74 = *((int *)t13);
    t16 = (t52 + 8U);
    t75 = *((int *)t16);
    xsi_vhdl_check_range_of_slice(t10, t74, t75, t22, t73, -1);
    t24 = (t11 * 1U);
    t25 = (0 + t24);
    t17 = (t12 + t25);
    t18 = (t28 + 56U);
    t19 = *((char **)t18);
    t76 = *((int *)t19);
    t18 = (t28 + 56U);
    t20 = *((char **)t18);
    t77 = *((int *)t20);
    t78 = (t77 - 3);
    t79 = (t78 - t76);
    t26 = (t79 * -1);
    t26 = (t26 + 1);
    t27 = (1U * t26);
    t18 = (t1 + 3700);
    t64 = 1;
    if (t27 == 4U)
        goto LAB133;

LAB134:    t64 = 0;

LAB135:    if (t64 != 0)
        goto LAB131;

LAB132:    t8 = (t54 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t28 + 56U);
    t14 = *((char **)t13);
    t22 = *((int *)t14);
    t11 = (t10 - t22);
    t13 = (t28 + 56U);
    t15 = *((char **)t13);
    t55 = *((int *)t15);
    t73 = (t55 - 3);
    t13 = (t52 + 4U);
    t74 = *((int *)t13);
    t16 = (t52 + 8U);
    t75 = *((int *)t16);
    xsi_vhdl_check_range_of_slice(t10, t74, t75, t22, t73, -1);
    t24 = (t11 * 1U);
    t25 = (0 + t24);
    t17 = (t12 + t25);
    t18 = (t28 + 56U);
    t19 = *((char **)t18);
    t76 = *((int *)t19);
    t18 = (t28 + 56U);
    t20 = *((char **)t18);
    t77 = *((int *)t20);
    t78 = (t77 - 3);
    t79 = (t78 - t76);
    t26 = (t79 * -1);
    t26 = (t26 + 1);
    t27 = (1U * t26);
    t18 = (t1 + 3704);
    t64 = 1;
    if (t27 == 4U)
        goto LAB141;

LAB142:    t64 = 0;

LAB143:    if (t64 != 0)
        goto LAB139;

LAB140:    t8 = (t54 + 56U);
    t12 = *((char **)t8);
    t8 = (t52 + 0U);
    t10 = *((int *)t8);
    t13 = (t28 + 56U);
    t14 = *((char **)t13);
    t22 = *((int *)t14);
    t11 = (t10 - t22);
    t13 = (t28 + 56U);
    t15 = *((char **)t13);
    t55 = *((int *)t15);
    t73 = (t55 - 3);
    t13 = (t52 + 4U);
    t74 = *((int *)t13);
    t16 = (t52 + 8U);
    t75 = *((int *)t16);
    xsi_vhdl_check_range_of_slice(t10, t74, t75, t22, t73, -1);
    t24 = (t11 * 1U);
    t25 = (0 + t24);
    t17 = (t12 + t25);
    t18 = (t28 + 56U);
    t19 = *((char **)t18);
    t76 = *((int *)t19);
    t18 = (t28 + 56U);
    t20 = *((char **)t18);
    t77 = *((int *)t20);
    t78 = (t77 - 3);
    t79 = (t78 - t76);
    t26 = (t79 * -1);
    t26 = (t26 + 1);
    t27 = (1U * t26);
    t18 = (t1 + 3708);
    t64 = 1;
    if (t27 == 4U)
        goto LAB149;

LAB150:    t64 = 0;

LAB151:    if (t64 != 0)
        goto LAB147;

LAB148:    t8 = (t9 + 56U);
    t12 = *((char **)t8);
    t8 = (t40 + 56U);
    t13 = *((char **)t8);
    t10 = *((int *)t13);
    t8 = (t7 + 0U);
    t22 = *((int *)t8);
    t14 = (t7 + 8U);
    t55 = *((int *)t14);
    t73 = (t10 - t22);
    t11 = (t73 * t55);
    t15 = (t7 + 4U);
    t74 = *((int *)t15);
    xsi_vhdl_check_range_of_index(t22, t74, t55, t10);
    t24 = (1U * t11);
    t25 = (0 + t24);
    t16 = (t12 + t25);
    *((unsigned char *)t16) = (unsigned char)88;

LAB27:    t8 = (t28 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t22 = (t10 - 4);
    t8 = (t28 + 56U);
    t13 = *((char **)t8);
    t8 = (t13 + 0);
    *((int *)t8) = t22;
    t8 = (t40 + 56U);
    t12 = *((char **)t8);
    t10 = *((int *)t12);
    t22 = (t10 + 1);
    t8 = (t40 + 56U);
    t13 = *((char **)t8);
    t8 = (t13 + 0);
    *((int *)t8) = t22;
    goto LAB22;

LAB24:;
LAB26:    t32 = (t9 + 56U);
    t33 = *((char **)t32);
    t32 = (t40 + 56U);
    t35 = *((char **)t32);
    t81 = *((int *)t35);
    t32 = (t7 + 0U);
    t82 = *((int *)t32);
    t36 = (t7 + 8U);
    t83 = *((int *)t36);
    t84 = (t81 - t82);
    t72 = (t84 * t83);
    t38 = (t7 + 4U);
    t86 = *((int *)t38);
    xsi_vhdl_check_range_of_index(t82, t86, t83, t81);
    t87 = (1U * t72);
    t88 = (0 + t87);
    t39 = (t33 + t88);
    *((unsigned char *)t39) = (unsigned char)48;
    goto LAB27;

LAB29:    t56 = 0;

LAB32:    if (t56 < t27)
        goto LAB33;
    else
        goto LAB31;

LAB33:    t29 = (t18 + t56);
    t30 = (t19 + t56);
    if (*((unsigned char *)t29) != *((unsigned char *)t30))
        goto LAB30;

LAB34:    t56 = (t56 + 1);
    goto LAB32;

LAB35:    t30 = (t9 + 56U);
    t32 = *((char **)t30);
    t30 = (t40 + 56U);
    t33 = *((char **)t30);
    t80 = *((int *)t33);
    t30 = (t7 + 0U);
    t81 = *((int *)t30);
    t35 = (t7 + 8U);
    t82 = *((int *)t35);
    t83 = (t80 - t81);
    t72 = (t83 * t82);
    t36 = (t7 + 4U);
    t84 = *((int *)t36);
    xsi_vhdl_check_range_of_index(t81, t84, t82, t80);
    t87 = (1U * t72);
    t88 = (0 + t87);
    t38 = (t32 + t88);
    *((unsigned char *)t38) = (unsigned char)49;
    goto LAB27;

LAB37:    t56 = 0;

LAB40:    if (t56 < t27)
        goto LAB41;
    else
        goto LAB39;

LAB41:    t23 = (t17 + t56);
    t29 = (t18 + t56);
    if (*((unsigned char *)t23) != *((unsigned char *)t29))
        goto LAB38;

LAB42:    t56 = (t56 + 1);
    goto LAB40;

LAB43:    t30 = (t9 + 56U);
    t32 = *((char **)t30);
    t30 = (t40 + 56U);
    t33 = *((char **)t30);
    t80 = *((int *)t33);
    t30 = (t7 + 0U);
    t81 = *((int *)t30);
    t35 = (t7 + 8U);
    t82 = *((int *)t35);
    t83 = (t80 - t81);
    t72 = (t83 * t82);
    t36 = (t7 + 4U);
    t84 = *((int *)t36);
    xsi_vhdl_check_range_of_index(t81, t84, t82, t80);
    t87 = (1U * t72);
    t88 = (0 + t87);
    t38 = (t32 + t88);
    *((unsigned char *)t38) = (unsigned char)50;
    goto LAB27;

LAB45:    t56 = 0;

LAB48:    if (t56 < t27)
        goto LAB49;
    else
        goto LAB47;

LAB49:    t23 = (t17 + t56);
    t29 = (t18 + t56);
    if (*((unsigned char *)t23) != *((unsigned char *)t29))
        goto LAB46;

LAB50:    t56 = (t56 + 1);
    goto LAB48;

LAB51:    t30 = (t9 + 56U);
    t32 = *((char **)t30);
    t30 = (t40 + 56U);
    t33 = *((char **)t30);
    t80 = *((int *)t33);
    t30 = (t7 + 0U);
    t81 = *((int *)t30);
    t35 = (t7 + 8U);
    t82 = *((int *)t35);
    t83 = (t80 - t81);
    t72 = (t83 * t82);
    t36 = (t7 + 4U);
    t84 = *((int *)t36);
    xsi_vhdl_check_range_of_index(t81, t84, t82, t80);
    t87 = (1U * t72);
    t88 = (0 + t87);
    t38 = (t32 + t88);
    *((unsigned char *)t38) = (unsigned char)51;
    goto LAB27;

LAB53:    t56 = 0;

LAB56:    if (t56 < t27)
        goto LAB57;
    else
        goto LAB55;

LAB57:    t23 = (t17 + t56);
    t29 = (t18 + t56);
    if (*((unsigned char *)t23) != *((unsigned char *)t29))
        goto LAB54;

LAB58:    t56 = (t56 + 1);
    goto LAB56;

LAB59:    t30 = (t9 + 56U);
    t32 = *((char **)t30);
    t30 = (t40 + 56U);
    t33 = *((char **)t30);
    t80 = *((int *)t33);
    t30 = (t7 + 0U);
    t81 = *((int *)t30);
    t35 = (t7 + 8U);
    t82 = *((int *)t35);
    t83 = (t80 - t81);
    t72 = (t83 * t82);
    t36 = (t7 + 4U);
    t84 = *((int *)t36);
    xsi_vhdl_check_range_of_index(t81, t84, t82, t80);
    t87 = (1U * t72);
    t88 = (0 + t87);
    t38 = (t32 + t88);
    *((unsigned char *)t38) = (unsigned char)52;
    goto LAB27;

LAB61:    t56 = 0;

LAB64:    if (t56 < t27)
        goto LAB65;
    else
        goto LAB63;

LAB65:    t23 = (t17 + t56);
    t29 = (t18 + t56);
    if (*((unsigned char *)t23) != *((unsigned char *)t29))
        goto LAB62;

LAB66:    t56 = (t56 + 1);
    goto LAB64;

LAB67:    t30 = (t9 + 56U);
    t32 = *((char **)t30);
    t30 = (t40 + 56U);
    t33 = *((char **)t30);
    t80 = *((int *)t33);
    t30 = (t7 + 0U);
    t81 = *((int *)t30);
    t35 = (t7 + 8U);
    t82 = *((int *)t35);
    t83 = (t80 - t81);
    t72 = (t83 * t82);
    t36 = (t7 + 4U);
    t84 = *((int *)t36);
    xsi_vhdl_check_range_of_index(t81, t84, t82, t80);
    t87 = (1U * t72);
    t88 = (0 + t87);
    t38 = (t32 + t88);
    *((unsigned char *)t38) = (unsigned char)53;
    goto LAB27;

LAB69:    t56 = 0;

LAB72:    if (t56 < t27)
        goto LAB73;
    else
        goto LAB71;

LAB73:    t23 = (t17 + t56);
    t29 = (t18 + t56);
    if (*((unsigned char *)t23) != *((unsigned char *)t29))
        goto LAB70;

LAB74:    t56 = (t56 + 1);
    goto LAB72;

LAB75:    t30 = (t9 + 56U);
    t32 = *((char **)t30);
    t30 = (t40 + 56U);
    t33 = *((char **)t30);
    t80 = *((int *)t33);
    t30 = (t7 + 0U);
    t81 = *((int *)t30);
    t35 = (t7 + 8U);
    t82 = *((int *)t35);
    t83 = (t80 - t81);
    t72 = (t83 * t82);
    t36 = (t7 + 4U);
    t84 = *((int *)t36);
    xsi_vhdl_check_range_of_index(t81, t84, t82, t80);
    t87 = (1U * t72);
    t88 = (0 + t87);
    t38 = (t32 + t88);
    *((unsigned char *)t38) = (unsigned char)54;
    goto LAB27;

LAB77:    t56 = 0;

LAB80:    if (t56 < t27)
        goto LAB81;
    else
        goto LAB79;

LAB81:    t23 = (t17 + t56);
    t29 = (t18 + t56);
    if (*((unsigned char *)t23) != *((unsigned char *)t29))
        goto LAB78;

LAB82:    t56 = (t56 + 1);
    goto LAB80;

LAB83:    t30 = (t9 + 56U);
    t32 = *((char **)t30);
    t30 = (t40 + 56U);
    t33 = *((char **)t30);
    t80 = *((int *)t33);
    t30 = (t7 + 0U);
    t81 = *((int *)t30);
    t35 = (t7 + 8U);
    t82 = *((int *)t35);
    t83 = (t80 - t81);
    t72 = (t83 * t82);
    t36 = (t7 + 4U);
    t84 = *((int *)t36);
    xsi_vhdl_check_range_of_index(t81, t84, t82, t80);
    t87 = (1U * t72);
    t88 = (0 + t87);
    t38 = (t32 + t88);
    *((unsigned char *)t38) = (unsigned char)55;
    goto LAB27;

LAB85:    t56 = 0;

LAB88:    if (t56 < t27)
        goto LAB89;
    else
        goto LAB87;

LAB89:    t23 = (t17 + t56);
    t29 = (t18 + t56);
    if (*((unsigned char *)t23) != *((unsigned char *)t29))
        goto LAB86;

LAB90:    t56 = (t56 + 1);
    goto LAB88;

LAB91:    t30 = (t9 + 56U);
    t32 = *((char **)t30);
    t30 = (t40 + 56U);
    t33 = *((char **)t30);
    t80 = *((int *)t33);
    t30 = (t7 + 0U);
    t81 = *((int *)t30);
    t35 = (t7 + 8U);
    t82 = *((int *)t35);
    t83 = (t80 - t81);
    t72 = (t83 * t82);
    t36 = (t7 + 4U);
    t84 = *((int *)t36);
    xsi_vhdl_check_range_of_index(t81, t84, t82, t80);
    t87 = (1U * t72);
    t88 = (0 + t87);
    t38 = (t32 + t88);
    *((unsigned char *)t38) = (unsigned char)56;
    goto LAB27;

LAB93:    t56 = 0;

LAB96:    if (t56 < t27)
        goto LAB97;
    else
        goto LAB95;

LAB97:    t23 = (t17 + t56);
    t29 = (t18 + t56);
    if (*((unsigned char *)t23) != *((unsigned char *)t29))
        goto LAB94;

LAB98:    t56 = (t56 + 1);
    goto LAB96;

LAB99:    t30 = (t9 + 56U);
    t32 = *((char **)t30);
    t30 = (t40 + 56U);
    t33 = *((char **)t30);
    t80 = *((int *)t33);
    t30 = (t7 + 0U);
    t81 = *((int *)t30);
    t35 = (t7 + 8U);
    t82 = *((int *)t35);
    t83 = (t80 - t81);
    t72 = (t83 * t82);
    t36 = (t7 + 4U);
    t84 = *((int *)t36);
    xsi_vhdl_check_range_of_index(t81, t84, t82, t80);
    t87 = (1U * t72);
    t88 = (0 + t87);
    t38 = (t32 + t88);
    *((unsigned char *)t38) = (unsigned char)57;
    goto LAB27;

LAB101:    t56 = 0;

LAB104:    if (t56 < t27)
        goto LAB105;
    else
        goto LAB103;

LAB105:    t23 = (t17 + t56);
    t29 = (t18 + t56);
    if (*((unsigned char *)t23) != *((unsigned char *)t29))
        goto LAB102;

LAB106:    t56 = (t56 + 1);
    goto LAB104;

LAB107:    t30 = (t9 + 56U);
    t32 = *((char **)t30);
    t30 = (t40 + 56U);
    t33 = *((char **)t30);
    t80 = *((int *)t33);
    t30 = (t7 + 0U);
    t81 = *((int *)t30);
    t35 = (t7 + 8U);
    t82 = *((int *)t35);
    t83 = (t80 - t81);
    t72 = (t83 * t82);
    t36 = (t7 + 4U);
    t84 = *((int *)t36);
    xsi_vhdl_check_range_of_index(t81, t84, t82, t80);
    t87 = (1U * t72);
    t88 = (0 + t87);
    t38 = (t32 + t88);
    *((unsigned char *)t38) = (unsigned char)65;
    goto LAB27;

LAB109:    t56 = 0;

LAB112:    if (t56 < t27)
        goto LAB113;
    else
        goto LAB111;

LAB113:    t23 = (t17 + t56);
    t29 = (t18 + t56);
    if (*((unsigned char *)t23) != *((unsigned char *)t29))
        goto LAB110;

LAB114:    t56 = (t56 + 1);
    goto LAB112;

LAB115:    t30 = (t9 + 56U);
    t32 = *((char **)t30);
    t30 = (t40 + 56U);
    t33 = *((char **)t30);
    t80 = *((int *)t33);
    t30 = (t7 + 0U);
    t81 = *((int *)t30);
    t35 = (t7 + 8U);
    t82 = *((int *)t35);
    t83 = (t80 - t81);
    t72 = (t83 * t82);
    t36 = (t7 + 4U);
    t84 = *((int *)t36);
    xsi_vhdl_check_range_of_index(t81, t84, t82, t80);
    t87 = (1U * t72);
    t88 = (0 + t87);
    t38 = (t32 + t88);
    *((unsigned char *)t38) = (unsigned char)66;
    goto LAB27;

LAB117:    t56 = 0;

LAB120:    if (t56 < t27)
        goto LAB121;
    else
        goto LAB119;

LAB121:    t23 = (t17 + t56);
    t29 = (t18 + t56);
    if (*((unsigned char *)t23) != *((unsigned char *)t29))
        goto LAB118;

LAB122:    t56 = (t56 + 1);
    goto LAB120;

LAB123:    t30 = (t9 + 56U);
    t32 = *((char **)t30);
    t30 = (t40 + 56U);
    t33 = *((char **)t30);
    t80 = *((int *)t33);
    t30 = (t7 + 0U);
    t81 = *((int *)t30);
    t35 = (t7 + 8U);
    t82 = *((int *)t35);
    t83 = (t80 - t81);
    t72 = (t83 * t82);
    t36 = (t7 + 4U);
    t84 = *((int *)t36);
    xsi_vhdl_check_range_of_index(t81, t84, t82, t80);
    t87 = (1U * t72);
    t88 = (0 + t87);
    t38 = (t32 + t88);
    *((unsigned char *)t38) = (unsigned char)67;
    goto LAB27;

LAB125:    t56 = 0;

LAB128:    if (t56 < t27)
        goto LAB129;
    else
        goto LAB127;

LAB129:    t23 = (t17 + t56);
    t29 = (t18 + t56);
    if (*((unsigned char *)t23) != *((unsigned char *)t29))
        goto LAB126;

LAB130:    t56 = (t56 + 1);
    goto LAB128;

LAB131:    t30 = (t9 + 56U);
    t32 = *((char **)t30);
    t30 = (t40 + 56U);
    t33 = *((char **)t30);
    t80 = *((int *)t33);
    t30 = (t7 + 0U);
    t81 = *((int *)t30);
    t35 = (t7 + 8U);
    t82 = *((int *)t35);
    t83 = (t80 - t81);
    t72 = (t83 * t82);
    t36 = (t7 + 4U);
    t84 = *((int *)t36);
    xsi_vhdl_check_range_of_index(t81, t84, t82, t80);
    t87 = (1U * t72);
    t88 = (0 + t87);
    t38 = (t32 + t88);
    *((unsigned char *)t38) = (unsigned char)68;
    goto LAB27;

LAB133:    t56 = 0;

LAB136:    if (t56 < t27)
        goto LAB137;
    else
        goto LAB135;

LAB137:    t23 = (t17 + t56);
    t29 = (t18 + t56);
    if (*((unsigned char *)t23) != *((unsigned char *)t29))
        goto LAB134;

LAB138:    t56 = (t56 + 1);
    goto LAB136;

LAB139:    t30 = (t9 + 56U);
    t32 = *((char **)t30);
    t30 = (t40 + 56U);
    t33 = *((char **)t30);
    t80 = *((int *)t33);
    t30 = (t7 + 0U);
    t81 = *((int *)t30);
    t35 = (t7 + 8U);
    t82 = *((int *)t35);
    t83 = (t80 - t81);
    t72 = (t83 * t82);
    t36 = (t7 + 4U);
    t84 = *((int *)t36);
    xsi_vhdl_check_range_of_index(t81, t84, t82, t80);
    t87 = (1U * t72);
    t88 = (0 + t87);
    t38 = (t32 + t88);
    *((unsigned char *)t38) = (unsigned char)69;
    goto LAB27;

LAB141:    t56 = 0;

LAB144:    if (t56 < t27)
        goto LAB145;
    else
        goto LAB143;

LAB145:    t23 = (t17 + t56);
    t29 = (t18 + t56);
    if (*((unsigned char *)t23) != *((unsigned char *)t29))
        goto LAB142;

LAB146:    t56 = (t56 + 1);
    goto LAB144;

LAB147:    t30 = (t9 + 56U);
    t32 = *((char **)t30);
    t30 = (t40 + 56U);
    t33 = *((char **)t30);
    t80 = *((int *)t33);
    t30 = (t7 + 0U);
    t81 = *((int *)t30);
    t35 = (t7 + 8U);
    t82 = *((int *)t35);
    t83 = (t80 - t81);
    t72 = (t83 * t82);
    t36 = (t7 + 4U);
    t84 = *((int *)t36);
    xsi_vhdl_check_range_of_index(t81, t84, t82, t80);
    t87 = (1U * t72);
    t88 = (0 + t87);
    t38 = (t32 + t88);
    *((unsigned char *)t38) = (unsigned char)70;
    goto LAB27;

LAB149:    t56 = 0;

LAB152:    if (t56 < t27)
        goto LAB153;
    else
        goto LAB151;

LAB153:    t23 = (t17 + t56);
    t29 = (t18 + t56);
    if (*((unsigned char *)t23) != *((unsigned char *)t29))
        goto LAB150;

LAB154:    t56 = (t56 + 1);
    goto LAB152;

LAB155:;
}

char *xlib_p_1932568133_sub_253532264356828385_3457376708(char *t1, char *t2, unsigned char t3)
{
    char t5[8];
    char t7[16];
    char *t0;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    char *t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;

LAB0:    t6 = (t5 + 4U);
    *((unsigned char *)t6) = t3;
    t8 = ((IEEE_P_2592010699) + 3216);
    t9 = xsi_char_to_mem(t3);
    t10 = xsi_string_variable_get_image(t7, t8, t9);
    t11 = (t7 + 12U);
    t12 = *((unsigned int *)t11);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t10, t12);
    t13 = (t7 + 0U);
    t14 = *((int *)t13);
    t15 = (t7 + 4U);
    t16 = *((int *)t15);
    t17 = (t7 + 8U);
    t18 = *((int *)t17);
    t19 = (t2 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = t14;
    t20 = (t19 + 4U);
    *((int *)t20) = t16;
    t20 = (t19 + 8U);
    *((int *)t20) = t18;
    t21 = (t16 - t14);
    t22 = (t21 * t18);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;

LAB1:    return t0;
LAB2:;
}

char *xlib_p_1932568133_sub_160277263155789415_3457376708(char *t1, char *t2, char *t3, char *t4)
{
    char t6[24];
    char t10[16];
    char *t0;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    int t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;

LAB0:    t7 = (t6 + 4U);
    t8 = (t3 != 0);
    if (t8 == 1)
        goto LAB3;

LAB2:    t9 = (t6 + 12U);
    *((char **)t9) = t4;
    t11 = xlib_p_1932568133_sub_2063504136543877411_3457376708(t1, t10, t3, t4);
    t12 = (t10 + 12U);
    t13 = *((unsigned int *)t12);
    t13 = (t13 * 1U);
    t0 = xsi_get_transient_memory(t13);
    memcpy(t0, t11, t13);
    t14 = (t10 + 0U);
    t15 = *((int *)t14);
    t16 = (t10 + 4U);
    t17 = *((int *)t16);
    t18 = (t10 + 8U);
    t19 = *((int *)t18);
    t20 = (t2 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = t15;
    t21 = (t20 + 4U);
    *((int *)t21) = t17;
    t21 = (t20 + 8U);
    *((int *)t21) = t19;
    t22 = (t17 - t15);
    t23 = (t22 * t19);
    t23 = (t23 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t23;

LAB1:    return t0;
LAB3:    *((char **)t7) = t3;
    goto LAB2;

LAB4:;
}

char *xlib_p_1932568133_sub_982892893545921282_3457376708(char *t1, char *t2, char *t3, char *t4)
{
    char t6[24];
    char t10[16];
    char *t0;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    int t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;

LAB0:    t7 = (t6 + 4U);
    t8 = (t3 != 0);
    if (t8 == 1)
        goto LAB3;

LAB2:    t9 = (t6 + 12U);
    *((char **)t9) = t4;
    t11 = xlib_p_1932568133_sub_2063504136543877411_3457376708(t1, t10, t3, t4);
    t12 = (t10 + 12U);
    t13 = *((unsigned int *)t12);
    t13 = (t13 * 1U);
    t0 = xsi_get_transient_memory(t13);
    memcpy(t0, t11, t13);
    t14 = (t10 + 0U);
    t15 = *((int *)t14);
    t16 = (t10 + 4U);
    t17 = *((int *)t16);
    t18 = (t10 + 8U);
    t19 = *((int *)t18);
    t20 = (t2 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = t15;
    t21 = (t20 + 4U);
    *((int *)t21) = t17;
    t21 = (t20 + 8U);
    *((int *)t21) = t19;
    t22 = (t17 - t15);
    t23 = (t22 * t19);
    t23 = (t23 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t23;

LAB1:    return t0;
LAB3:    *((char **)t7) = t3;
    goto LAB2;

LAB4:;
}

char *xlib_p_1932568133_sub_523704755548032828_3457376708(char *t1, char *t2, double t3)
{
    char t5[16];
    char t7[16];
    char *t0;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    char *t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;

LAB0:    t6 = (t5 + 4U);
    *((double *)t6) = t3;
    t8 = ((STD_STANDARD) + 464);
    t9 = xsi_double_to_mem(t3);
    t10 = xsi_string_variable_get_image(t7, t8, t9);
    t11 = (t7 + 12U);
    t12 = *((unsigned int *)t11);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t10, t12);
    t13 = (t7 + 0U);
    t14 = *((int *)t13);
    t15 = (t7 + 4U);
    t16 = *((int *)t15);
    t17 = (t7 + 8U);
    t18 = *((int *)t17);
    t19 = (t2 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = t14;
    t20 = (t19 + 4U);
    *((int *)t20) = t16;
    t20 = (t19 + 8U);
    *((int *)t20) = t18;
    t21 = (t16 - t14);
    t22 = (t21 * t18);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;

LAB1:    return t0;
LAB2:;
}


extern void xlib_p_1932568133_init()
{
	static char *se[] = {(void *)xlib_p_1932568133_sub_2063504136543877411_3457376708,(void *)xlib_p_1932568133_sub_253532264356828385_3457376708,(void *)xlib_p_1932568133_sub_160277263155789415_3457376708,(void *)xlib_p_1932568133_sub_982892893545921282_3457376708,(void *)xlib_p_1932568133_sub_523704755548032828_3457376708};
	xsi_register_didat("xlib_p_1932568133", "isim/call_custom_exp_fixpt_isim_design.exe.sim/xlib/p_1932568133.didat");
	xsi_register_subprogram_executes(se);
}
