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

/* This file is designed for use with ISim build 0xa0883be4 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//ad/eng/users/j/l/jlippai/My Documents/EC311/Labs/ProjectFinal/KitchenTimer.v";
static int ng1[] = {60, 0};
static int ng2[] = {10, 0};
static int ng3[] = {3, 0};
static int ng4[] = {0, 0};
static int ng5[] = {7, 0};
static int ng6[] = {4, 0};
static int ng7[] = {11, 0};
static int ng8[] = {8, 0};
static int ng9[] = {15, 0};
static int ng10[] = {12, 0};
static unsigned int ng11[] = {100000000U, 0U};
static unsigned int ng12[] = {1U, 0U};
static int ng13[] = {1, 0};
static unsigned int ng14[] = {20000000U, 0U};
static unsigned int ng15[] = {0U, 0U};
static unsigned int ng16[] = {2U, 0U};
static unsigned int ng17[] = {3U, 0U};
static int ng18[] = {2, 0};
static unsigned int ng19[] = {100000U, 0U};



static void Always_92_0(char *t0)
{
    char t8[8];
    char t10[8];
    char t12[8];
    char t13[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t11;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    int t22;
    char *t23;
    unsigned int t24;
    int t25;
    int t26;
    char *t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;

LAB0:    t1 = (t0 + 6752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 7568);
    *((int *)t2) = 1;
    t3 = (t0 + 6784);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(92, ng0);

LAB5:    xsi_set_current_line(93, ng0);
    t4 = (t0 + 5192);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_mod(t8, 32, t6, 12, t7, 32);
    t9 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_mod(t10, 32, t8, 32, t9, 32);
    t11 = (t0 + 5832);
    t15 = (t0 + 5832);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng3)));
    t19 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t12, t13, t14, ((int*)(t17)), 2, t18, 32, 1, t19, 32, 1);
    t20 = (t12 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (!(t21));
    t23 = (t13 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    t26 = (t22 && t25);
    t27 = (t14 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t26 && t29);
    if (t30 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 5192);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_mod(t8, 32, t4, 12, t5, 32);
    t6 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_divide(t10, 32, t8, 32, t6, 32);
    t7 = (t0 + 5832);
    t9 = (t0 + 5832);
    t11 = (t9 + 72U);
    t15 = *((char **)t11);
    t16 = ((char*)((ng5)));
    t17 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t12, t13, t14, ((int*)(t15)), 2, t16, 32, 1, t17, 32, 1);
    t18 = (t12 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    t19 = (t13 + 4);
    t24 = *((unsigned int *)t19);
    t25 = (!(t24));
    t26 = (t22 && t25);
    t20 = (t14 + 4);
    t28 = *((unsigned int *)t20);
    t29 = (!(t28));
    t30 = (t26 && t29);
    if (t30 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 5192);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_divide(t8, 32, t4, 12, t5, 32);
    t6 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_mod(t10, 32, t8, 32, t6, 32);
    t7 = (t0 + 5832);
    t9 = (t0 + 5832);
    t11 = (t9 + 72U);
    t15 = *((char **)t11);
    t16 = ((char*)((ng7)));
    t17 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t12, t13, t14, ((int*)(t15)), 2, t16, 32, 1, t17, 32, 1);
    t18 = (t12 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    t19 = (t13 + 4);
    t24 = *((unsigned int *)t19);
    t25 = (!(t24));
    t26 = (t22 && t25);
    t20 = (t14 + 4);
    t28 = *((unsigned int *)t20);
    t29 = (!(t28));
    t30 = (t26 && t29);
    if (t30 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 5192);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_divide(t8, 32, t4, 12, t5, 32);
    t6 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_divide(t10, 32, t8, 32, t6, 32);
    t7 = (t0 + 5832);
    t9 = (t0 + 5832);
    t11 = (t9 + 72U);
    t15 = *((char **)t11);
    t16 = ((char*)((ng9)));
    t17 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t12, t13, t14, ((int*)(t15)), 2, t16, 32, 1, t17, 32, 1);
    t18 = (t12 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (!(t21));
    t19 = (t13 + 4);
    t24 = *((unsigned int *)t19);
    t25 = (!(t24));
    t26 = (t22 && t25);
    t20 = (t14 + 4);
    t28 = *((unsigned int *)t20);
    t29 = (!(t28));
    t30 = (t26 && t29);
    if (t30 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5352);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_mod(t12, 27, t4, 27, t5, 27);
    t6 = ((char*)((ng11)));
    t7 = ((char*)((ng12)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 27, t6, 27, t7, 27);
    memset(t14, 0, 8);
    t9 = (t12 + 4);
    t11 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t13);
    t28 = (t21 ^ t24);
    t31 = *((unsigned int *)t9);
    t33 = *((unsigned int *)t11);
    t34 = (t31 ^ t33);
    t37 = (t28 | t34);
    t38 = *((unsigned int *)t9);
    t39 = *((unsigned int *)t11);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB17;

LAB14:    if (t40 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t14) = 1;

LAB17:    memset(t10, 0, 8);
    t16 = (t14 + 4);
    t43 = *((unsigned int *)t16);
    t44 = (~(t43));
    t45 = *((unsigned int *)t14);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t16) != 0)
        goto LAB20;

LAB21:    t18 = (t10 + 4);
    t48 = *((unsigned int *)t10);
    t49 = *((unsigned int *)t18);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB22;

LAB23:    t51 = *((unsigned int *)t10);
    t52 = (~(t51));
    t53 = *((unsigned int *)t18);
    t54 = (t52 || t53);
    if (t54 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t18) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t10) > 0)
        goto LAB28;

LAB29:    memcpy(t8, t20, 8);

LAB30:    t23 = (t0 + 5672);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 5352);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng14)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_mod(t12, 27, t4, 27, t5, 27);
    t6 = ((char*)((ng14)));
    t7 = ((char*)((ng12)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 27, t6, 27, t7, 27);
    memset(t14, 0, 8);
    t9 = (t12 + 4);
    t11 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t13);
    t28 = (t21 ^ t24);
    t31 = *((unsigned int *)t9);
    t33 = *((unsigned int *)t11);
    t34 = (t31 ^ t33);
    t37 = (t28 | t34);
    t38 = *((unsigned int *)t9);
    t39 = *((unsigned int *)t11);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB34;

LAB31:    if (t40 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t14) = 1;

LAB34:    memset(t10, 0, 8);
    t16 = (t14 + 4);
    t43 = *((unsigned int *)t16);
    t44 = (~(t43));
    t45 = *((unsigned int *)t14);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t16) != 0)
        goto LAB37;

LAB38:    t18 = (t10 + 4);
    t48 = *((unsigned int *)t10);
    t49 = *((unsigned int *)t18);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB39;

LAB40:    t51 = *((unsigned int *)t10);
    t52 = (~(t51));
    t53 = *((unsigned int *)t18);
    t54 = (t52 || t53);
    if (t54 > 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t18) > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t10) > 0)
        goto LAB45;

LAB46:    memcpy(t8, t20, 8);

LAB47:    t23 = (t0 + 5512);
    xsi_vlogvar_assign_value(t23, t8, 0, 0, 1);
    goto LAB2;

LAB6:    t31 = *((unsigned int *)t14);
    t32 = (t31 + 0);
    t33 = *((unsigned int *)t12);
    t34 = *((unsigned int *)t13);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t11, t10, t32, *((unsigned int *)t13), t36);
    goto LAB7;

LAB8:    t31 = *((unsigned int *)t14);
    t32 = (t31 + 0);
    t33 = *((unsigned int *)t12);
    t34 = *((unsigned int *)t13);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t7, t10, t32, *((unsigned int *)t13), t36);
    goto LAB9;

LAB10:    t31 = *((unsigned int *)t14);
    t32 = (t31 + 0);
    t33 = *((unsigned int *)t12);
    t34 = *((unsigned int *)t13);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t7, t10, t32, *((unsigned int *)t13), t36);
    goto LAB11;

LAB12:    t31 = *((unsigned int *)t14);
    t32 = (t31 + 0);
    t33 = *((unsigned int *)t12);
    t34 = *((unsigned int *)t13);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t7, t10, t32, *((unsigned int *)t13), t36);
    goto LAB13;

LAB16:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t10) = 1;
    goto LAB21;

LAB20:    t17 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB21;

LAB22:    t19 = ((char*)((ng13)));
    goto LAB23;

LAB24:    t20 = ((char*)((ng4)));
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t8, 32, t19, 32, t20, 32);
    goto LAB30;

LAB28:    memcpy(t8, t19, 8);
    goto LAB30;

LAB33:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB34;

LAB35:    *((unsigned int *)t10) = 1;
    goto LAB38;

LAB37:    t17 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB38;

LAB39:    t19 = ((char*)((ng13)));
    goto LAB40;

LAB41:    t20 = ((char*)((ng4)));
    goto LAB42;

LAB43:    xsi_vlog_unsigned_bit_combine(t8, 32, t19, 32, t20, 32);
    goto LAB47;

LAB45:    memcpy(t8, t19, 8);
    goto LAB47;

}

static void Always_111_1(char *t0)
{
    char t16[8];
    char t19[8];
    char t20[8];
    char t55[8];
    char t63[8];
    char t102[8];
    char t103[8];
    char t104[8];
    char t111[8];
    char t119[8];
    char t151[8];
    char t159[8];
    char t207[8];
    char t208[8];
    char t209[8];
    char t210[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    int t143;
    int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t163;
    char *t164;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    char *t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    char *t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    char *t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    char *t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    char *t203;
    char *t204;
    char *t205;
    char *t206;
    char *t211;

LAB0:    t1 = (t0 + 7000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 7584);
    *((int *)t2) = 1;
    t3 = (t0 + 7032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(111, ng0);

LAB5:    xsi_set_current_line(114, ng0);
    t4 = (t0 + 3512U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(120, ng0);

LAB10:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 5032);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng16)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB16;

LAB17:
LAB19:
LAB18:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 2552U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB163;

LAB164:
LAB165:
LAB20:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(114, ng0);

LAB9:    xsi_set_current_line(115, ng0);
    t11 = ((char*)((ng15)));
    t12 = (t0 + 4872);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5192);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 12, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 27, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5032);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(126, ng0);
    t11 = (t0 + 4152U);
    t12 = *((char **)t11);
    t11 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(128, ng0);

LAB24:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3672U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3832U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB29;

LAB30:
LAB31:
LAB23:    goto LAB20;

LAB14:    xsi_set_current_line(142, ng0);
    t3 = (t0 + 3992U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(144, ng0);

LAB36:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 5352);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng11)));
    t12 = ((char*)((ng12)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 27, t11, 27, t12, 27);
    memset(t19, 0, 8);
    t14 = (t5 + 4);
    t15 = (t16 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t16);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t14);
    t10 = *((unsigned int *)t15);
    t23 = (t9 ^ t10);
    t24 = (t8 | t23);
    t25 = *((unsigned int *)t14);
    t26 = *((unsigned int *)t15);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB40;

LAB37:    if (t27 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t19) = 1;

LAB40:    t18 = (t19 + 4);
    t30 = *((unsigned int *)t18);
    t31 = (~(t30));
    t32 = *((unsigned int *)t19);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 5352);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng12)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 27, t5, 27, t11, 27);
    t12 = (t0 + 5352);
    xsi_vlogvar_wait_assign_value(t12, t16, 0, 0, 27, 0LL);

LAB43:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 2552U);
    t3 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB47;

LAB45:    if (*((unsigned int *)t2) == 0)
        goto LAB44;

LAB46:    t5 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t5) = 1;

LAB47:    t11 = (t16 + 4);
    t12 = (t3 + 4);
    t23 = *((unsigned int *)t3);
    t24 = (~(t23));
    *((unsigned int *)t16) = t24;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB49;

LAB48:    t29 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t29 & 1U);
    t30 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t30 & 1U);
    memset(t19, 0, 8);
    t14 = (t16 + 4);
    t31 = *((unsigned int *)t14);
    t32 = (~(t31));
    t33 = *((unsigned int *)t16);
    t34 = (t33 & t32);
    t35 = (t34 & 1U);
    if (t35 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t14) != 0)
        goto LAB52;

LAB53:    t17 = (t19 + 4);
    t36 = *((unsigned int *)t19);
    t37 = *((unsigned int *)t17);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB54;

LAB55:    memcpy(t63, t19, 8);

LAB56:    t94 = (t63 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t63);
    t98 = (t97 & t96);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(156, ng0);

LAB72:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 2552U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng12)));
    memset(t16, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t23 = (t9 ^ t10);
    t24 = (t8 | t23);
    t25 = *((unsigned int *)t5);
    t26 = *((unsigned int *)t11);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB76;

LAB73:    if (t27 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t16) = 1;

LAB76:    memset(t19, 0, 8);
    t14 = (t16 + 4);
    t30 = *((unsigned int *)t14);
    t31 = (~(t30));
    t32 = *((unsigned int *)t16);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t14) != 0)
        goto LAB79;

LAB80:    t17 = (t19 + 4);
    t35 = *((unsigned int *)t19);
    t36 = *((unsigned int *)t17);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB81;

LAB82:    memcpy(t63, t19, 8);

LAB83:    t94 = (t63 + 4);
    t93 = *((unsigned int *)t94);
    t95 = (~(t93));
    t96 = *((unsigned int *)t63);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB95;

LAB96:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 5192);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 2712U);
    t12 = *((char **)t11);
    memset(t20, 0, 8);
    t11 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t11) != 0)
        goto LAB101;

LAB102:    t15 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = *((unsigned int *)t15);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB103;

LAB104:    memcpy(t63, t20, 8);

LAB105:    memset(t102, 0, 8);
    t67 = (t63 + 4);
    t61 = *((unsigned int *)t67);
    t64 = (~(t61));
    t65 = *((unsigned int *)t63);
    t66 = (t65 & t64);
    t70 = (t66 & 1U);
    if (t70 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t67) != 0)
        goto LAB115;

LAB116:    t69 = (t102 + 4);
    t71 = *((unsigned int *)t102);
    t72 = (!(t71));
    t73 = *((unsigned int *)t69);
    t74 = (t72 || t73);
    if (t74 > 0)
        goto LAB117;

LAB118:    memcpy(t159, t102, 8);

LAB119:    memset(t19, 0, 8);
    t187 = (t159 + 4);
    t188 = *((unsigned int *)t187);
    t189 = (~(t188));
    t190 = *((unsigned int *)t159);
    t191 = (t190 & t189);
    t192 = (t191 & 1U);
    if (t192 != 0)
        goto LAB147;

LAB148:    if (*((unsigned int *)t187) != 0)
        goto LAB149;

LAB150:    t194 = (t19 + 4);
    t195 = *((unsigned int *)t19);
    t196 = *((unsigned int *)t194);
    t197 = (t195 || t196);
    if (t197 > 0)
        goto LAB151;

LAB152:    t199 = *((unsigned int *)t19);
    t200 = (~(t199));
    t201 = *((unsigned int *)t194);
    t202 = (t200 || t201);
    if (t202 > 0)
        goto LAB153;

LAB154:    if (*((unsigned int *)t194) > 0)
        goto LAB155;

LAB156:    if (*((unsigned int *)t19) > 0)
        goto LAB157;

LAB158:    memcpy(t16, t203, 8);

LAB159:    t204 = ((char*)((ng18)));
    t205 = (t0 + 2552U);
    t206 = *((char **)t205);
    memset(t207, 0, 8);
    xsi_vlog_unsigned_multiply(t207, 32, t204, 32, t206, 1);
    t205 = ((char*)((ng12)));
    memset(t208, 0, 8);
    xsi_vlog_unsigned_minus(t208, 32, t207, 32, t205, 32);
    memset(t209, 0, 8);
    xsi_vlog_unsigned_multiply(t209, 32, t16, 32, t208, 32);
    memset(t210, 0, 8);
    xsi_vlog_unsigned_add(t210, 32, t5, 12, t209, 32);
    t211 = (t0 + 5192);
    xsi_vlogvar_wait_assign_value(t211, t210, 0, 0, 12, 0LL);

LAB97:
LAB70:
LAB35:    goto LAB20;

LAB16:    xsi_set_current_line(172, ng0);
    t3 = (t0 + 3992U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB160;

LAB161:
LAB162:    goto LAB20;

LAB21:    xsi_set_current_line(127, ng0);
    t14 = ((char*)((ng12)));
    t15 = (t0 + 5032);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 2, 0LL);
    goto LAB23;

LAB25:    xsi_set_current_line(129, ng0);

LAB28:    xsi_set_current_line(130, ng0);
    t5 = (t0 + 5192);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng1)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_mod(t16, 32, t12, 12, t14, 32);
    t15 = ((char*)((ng1)));
    t17 = (t0 + 2872U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_multiply(t19, 32, t15, 32, t18, 6);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t16, 32, t19, 32);
    t17 = (t0 + 5192);
    xsi_vlogvar_wait_assign_value(t17, t20, 0, 0, 12, 0LL);
    goto LAB27;

LAB29:    xsi_set_current_line(132, ng0);

LAB32:    xsi_set_current_line(133, ng0);
    t5 = (t0 + 5192);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t14 = (t0 + 5192);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    t18 = ((char*)((ng1)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_mod(t16, 32, t17, 12, t18, 32);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_minus(t19, 32, t12, 12, t16, 32);
    t21 = (t0 + 2872U);
    t22 = *((char **)t21);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t19, 32, t22, 6);
    t21 = (t0 + 5192);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 12, 0LL);
    goto LAB31;

LAB33:    xsi_set_current_line(143, ng0);
    t11 = ((char*)((ng16)));
    t12 = (t0 + 5032);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB35;

LAB39:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(147, ng0);
    t21 = ((char*)((ng4)));
    t22 = (t0 + 5352);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 27, 0LL);
    goto LAB43;

LAB44:    *((unsigned int *)t16) = 1;
    goto LAB47;

LAB49:    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t12);
    *((unsigned int *)t16) = (t25 | t26);
    t27 = *((unsigned int *)t11);
    t28 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t27 | t28);
    goto LAB48;

LAB50:    *((unsigned int *)t19) = 1;
    goto LAB53;

LAB52:    t15 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB53;

LAB54:    t18 = (t0 + 5192);
    t21 = (t18 + 56U);
    t22 = *((char **)t21);
    t39 = ((char*)((ng4)));
    memset(t20, 0, 8);
    t40 = (t22 + 4);
    t41 = (t39 + 4);
    t42 = *((unsigned int *)t22);
    t43 = *((unsigned int *)t39);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB60;

LAB57:    if (t51 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t20) = 1;

LAB60:    memset(t55, 0, 8);
    t56 = (t20 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t20);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t56) != 0)
        goto LAB63;

LAB64:    t64 = *((unsigned int *)t19);
    t65 = *((unsigned int *)t55);
    t66 = (t64 & t65);
    *((unsigned int *)t63) = t66;
    t67 = (t19 + 4);
    t68 = (t55 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB65;

LAB66:
LAB67:    goto LAB56;

LAB59:    t54 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB60;

LAB61:    *((unsigned int *)t55) = 1;
    goto LAB64;

LAB63:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB64;

LAB65:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t19 + 4);
    t78 = (t55 + 4);
    t79 = *((unsigned int *)t19);
    t80 = (~(t79));
    t81 = *((unsigned int *)t77);
    t82 = (~(t81));
    t83 = *((unsigned int *)t55);
    t84 = (~(t83));
    t85 = *((unsigned int *)t78);
    t86 = (~(t85));
    t13 = (t80 & t82);
    t87 = (t84 & t86);
    t88 = (~(t13));
    t89 = (~(t87));
    t90 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t90 & t88);
    t91 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t91 & t89);
    t92 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t92 & t88);
    t93 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t93 & t89);
    goto LAB67;

LAB68:    xsi_set_current_line(151, ng0);

LAB71:    xsi_set_current_line(152, ng0);
    t100 = ((char*)((ng12)));
    t101 = (t0 + 4872);
    xsi_vlogvar_wait_assign_value(t101, t100, 0, 0, 1, 0LL);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 5032);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB70;

LAB75:    t12 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB76;

LAB77:    *((unsigned int *)t19) = 1;
    goto LAB80;

LAB79:    t15 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB80;

LAB81:    t18 = (t0 + 5192);
    t21 = (t18 + 56U);
    t22 = *((char **)t21);
    t39 = (t0 + 472);
    t40 = *((char **)t39);
    memset(t20, 0, 8);
    t39 = (t22 + 4);
    t41 = (t40 + 4);
    t38 = *((unsigned int *)t22);
    t42 = *((unsigned int *)t40);
    t43 = (t38 ^ t42);
    t44 = *((unsigned int *)t39);
    t45 = *((unsigned int *)t41);
    t46 = (t44 ^ t45);
    t47 = (t43 | t46);
    t48 = *((unsigned int *)t39);
    t49 = *((unsigned int *)t41);
    t50 = (t48 | t49);
    t51 = (~(t50));
    t52 = (t47 & t51);
    if (t52 != 0)
        goto LAB87;

LAB84:    if (t50 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t20) = 1;

LAB87:    memset(t55, 0, 8);
    t56 = (t20 + 4);
    t53 = *((unsigned int *)t56);
    t57 = (~(t53));
    t58 = *((unsigned int *)t20);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t56) != 0)
        goto LAB90;

LAB91:    t61 = *((unsigned int *)t19);
    t64 = *((unsigned int *)t55);
    t65 = (t61 & t64);
    *((unsigned int *)t63) = t65;
    t67 = (t19 + 4);
    t68 = (t55 + 4);
    t69 = (t63 + 4);
    t66 = *((unsigned int *)t67);
    t70 = *((unsigned int *)t68);
    t71 = (t66 | t70);
    *((unsigned int *)t69) = t71;
    t72 = *((unsigned int *)t69);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB92;

LAB93:
LAB94:    goto LAB83;

LAB86:    t54 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB87;

LAB88:    *((unsigned int *)t55) = 1;
    goto LAB91;

LAB90:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB91;

LAB92:    t74 = *((unsigned int *)t63);
    t75 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t74 | t75);
    t77 = (t19 + 4);
    t78 = (t55 + 4);
    t76 = *((unsigned int *)t19);
    t79 = (~(t76));
    t80 = *((unsigned int *)t77);
    t81 = (~(t80));
    t82 = *((unsigned int *)t55);
    t83 = (~(t82));
    t84 = *((unsigned int *)t78);
    t85 = (~(t84));
    t13 = (t79 & t81);
    t87 = (t83 & t85);
    t86 = (~(t13));
    t88 = (~(t87));
    t89 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t89 & t86);
    t90 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t90 & t88);
    t91 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t91 & t86);
    t92 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t92 & t88);
    goto LAB94;

LAB95:    xsi_set_current_line(157, ng0);

LAB98:    xsi_set_current_line(158, ng0);
    t100 = ((char*)((ng15)));
    t101 = (t0 + 5192);
    xsi_vlogvar_wait_assign_value(t101, t100, 0, 0, 12, 0LL);
    goto LAB97;

LAB99:    *((unsigned int *)t20) = 1;
    goto LAB102;

LAB101:    t14 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB102;

LAB103:    t17 = (t0 + 5512);
    t18 = (t17 + 56U);
    t21 = *((char **)t18);
    memset(t55, 0, 8);
    t22 = (t21 + 4);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t21);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t22) != 0)
        goto LAB108;

LAB109:    t31 = *((unsigned int *)t20);
    t32 = *((unsigned int *)t55);
    t33 = (t31 & t32);
    *((unsigned int *)t63) = t33;
    t40 = (t20 + 4);
    t41 = (t55 + 4);
    t54 = (t63 + 4);
    t34 = *((unsigned int *)t40);
    t35 = *((unsigned int *)t41);
    t36 = (t34 | t35);
    *((unsigned int *)t54) = t36;
    t37 = *((unsigned int *)t54);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB110;

LAB111:
LAB112:    goto LAB105;

LAB106:    *((unsigned int *)t55) = 1;
    goto LAB109;

LAB108:    t39 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB109;

LAB110:    t42 = *((unsigned int *)t63);
    t43 = *((unsigned int *)t54);
    *((unsigned int *)t63) = (t42 | t43);
    t56 = (t20 + 4);
    t62 = (t55 + 4);
    t44 = *((unsigned int *)t20);
    t45 = (~(t44));
    t46 = *((unsigned int *)t56);
    t47 = (~(t46));
    t48 = *((unsigned int *)t55);
    t49 = (~(t48));
    t50 = *((unsigned int *)t62);
    t51 = (~(t50));
    t13 = (t45 & t47);
    t87 = (t49 & t51);
    t52 = (~(t13));
    t53 = (~(t87));
    t57 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t57 & t52);
    t58 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t58 & t53);
    t59 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t59 & t52);
    t60 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t60 & t53);
    goto LAB112;

LAB113:    *((unsigned int *)t102) = 1;
    goto LAB116;

LAB115:    t68 = (t102 + 4);
    *((unsigned int *)t102) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB116;

LAB117:    t77 = (t0 + 2712U);
    t78 = *((char **)t77);
    memset(t103, 0, 8);
    t77 = (t78 + 4);
    t75 = *((unsigned int *)t77);
    t76 = (~(t75));
    t79 = *((unsigned int *)t78);
    t80 = (t79 & t76);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB123;

LAB121:    if (*((unsigned int *)t77) == 0)
        goto LAB120;

LAB122:    t94 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t94) = 1;

LAB123:    t100 = (t103 + 4);
    t101 = (t78 + 4);
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    *((unsigned int *)t103) = t83;
    *((unsigned int *)t100) = 0;
    if (*((unsigned int *)t101) != 0)
        goto LAB125;

LAB124:    t89 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t89 & 1U);
    t90 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t90 & 1U);
    memset(t104, 0, 8);
    t105 = (t103 + 4);
    t91 = *((unsigned int *)t105);
    t92 = (~(t91));
    t93 = *((unsigned int *)t103);
    t95 = (t93 & t92);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB126;

LAB127:    if (*((unsigned int *)t105) != 0)
        goto LAB128;

LAB129:    t107 = (t104 + 4);
    t97 = *((unsigned int *)t104);
    t98 = *((unsigned int *)t107);
    t99 = (t97 || t98);
    if (t99 > 0)
        goto LAB130;

LAB131:    memcpy(t119, t104, 8);

LAB132:    memset(t151, 0, 8);
    t152 = (t119 + 4);
    t153 = *((unsigned int *)t152);
    t154 = (~(t153));
    t155 = *((unsigned int *)t119);
    t156 = (t155 & t154);
    t157 = (t156 & 1U);
    if (t157 != 0)
        goto LAB140;

LAB141:    if (*((unsigned int *)t152) != 0)
        goto LAB142;

LAB143:    t160 = *((unsigned int *)t102);
    t161 = *((unsigned int *)t151);
    t162 = (t160 | t161);
    *((unsigned int *)t159) = t162;
    t163 = (t102 + 4);
    t164 = (t151 + 4);
    t165 = (t159 + 4);
    t166 = *((unsigned int *)t163);
    t167 = *((unsigned int *)t164);
    t168 = (t166 | t167);
    *((unsigned int *)t165) = t168;
    t169 = *((unsigned int *)t165);
    t170 = (t169 != 0);
    if (t170 == 1)
        goto LAB144;

LAB145:
LAB146:    goto LAB119;

LAB120:    *((unsigned int *)t103) = 1;
    goto LAB123;

LAB125:    t84 = *((unsigned int *)t103);
    t85 = *((unsigned int *)t101);
    *((unsigned int *)t103) = (t84 | t85);
    t86 = *((unsigned int *)t100);
    t88 = *((unsigned int *)t101);
    *((unsigned int *)t100) = (t86 | t88);
    goto LAB124;

LAB126:    *((unsigned int *)t104) = 1;
    goto LAB129;

LAB128:    t106 = (t104 + 4);
    *((unsigned int *)t104) = 1;
    *((unsigned int *)t106) = 1;
    goto LAB129;

LAB130:    t108 = (t0 + 5672);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    memset(t111, 0, 8);
    t112 = (t110 + 4);
    t113 = *((unsigned int *)t112);
    t114 = (~(t113));
    t115 = *((unsigned int *)t110);
    t116 = (t115 & t114);
    t117 = (t116 & 1U);
    if (t117 != 0)
        goto LAB133;

LAB134:    if (*((unsigned int *)t112) != 0)
        goto LAB135;

LAB136:    t120 = *((unsigned int *)t104);
    t121 = *((unsigned int *)t111);
    t122 = (t120 & t121);
    *((unsigned int *)t119) = t122;
    t123 = (t104 + 4);
    t124 = (t111 + 4);
    t125 = (t119 + 4);
    t126 = *((unsigned int *)t123);
    t127 = *((unsigned int *)t124);
    t128 = (t126 | t127);
    *((unsigned int *)t125) = t128;
    t129 = *((unsigned int *)t125);
    t130 = (t129 != 0);
    if (t130 == 1)
        goto LAB137;

LAB138:
LAB139:    goto LAB132;

LAB133:    *((unsigned int *)t111) = 1;
    goto LAB136;

LAB135:    t118 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t118) = 1;
    goto LAB136;

LAB137:    t131 = *((unsigned int *)t119);
    t132 = *((unsigned int *)t125);
    *((unsigned int *)t119) = (t131 | t132);
    t133 = (t104 + 4);
    t134 = (t111 + 4);
    t135 = *((unsigned int *)t104);
    t136 = (~(t135));
    t137 = *((unsigned int *)t133);
    t138 = (~(t137));
    t139 = *((unsigned int *)t111);
    t140 = (~(t139));
    t141 = *((unsigned int *)t134);
    t142 = (~(t141));
    t143 = (t136 & t138);
    t144 = (t140 & t142);
    t145 = (~(t143));
    t146 = (~(t144));
    t147 = *((unsigned int *)t125);
    *((unsigned int *)t125) = (t147 & t145);
    t148 = *((unsigned int *)t125);
    *((unsigned int *)t125) = (t148 & t146);
    t149 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t149 & t145);
    t150 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t150 & t146);
    goto LAB139;

LAB140:    *((unsigned int *)t151) = 1;
    goto LAB143;

LAB142:    t158 = (t151 + 4);
    *((unsigned int *)t151) = 1;
    *((unsigned int *)t158) = 1;
    goto LAB143;

LAB144:    t171 = *((unsigned int *)t159);
    t172 = *((unsigned int *)t165);
    *((unsigned int *)t159) = (t171 | t172);
    t173 = (t102 + 4);
    t174 = (t151 + 4);
    t175 = *((unsigned int *)t173);
    t176 = (~(t175));
    t177 = *((unsigned int *)t102);
    t178 = (t177 & t176);
    t179 = *((unsigned int *)t174);
    t180 = (~(t179));
    t181 = *((unsigned int *)t151);
    t182 = (t181 & t180);
    t183 = (~(t178));
    t184 = (~(t182));
    t185 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t185 & t183);
    t186 = *((unsigned int *)t165);
    *((unsigned int *)t165) = (t186 & t184);
    goto LAB146;

LAB147:    *((unsigned int *)t19) = 1;
    goto LAB150;

LAB149:    t193 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t193) = 1;
    goto LAB150;

LAB151:    t198 = ((char*)((ng13)));
    goto LAB152;

LAB153:    t203 = ((char*)((ng4)));
    goto LAB154;

LAB155:    xsi_vlog_unsigned_bit_combine(t16, 32, t198, 32, t203, 32);
    goto LAB159;

LAB157:    memcpy(t16, t198, 8);
    goto LAB159;

LAB160:    xsi_set_current_line(173, ng0);
    t11 = ((char*)((ng12)));
    t12 = (t0 + 5032);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB162;

LAB163:    xsi_set_current_line(179, ng0);

LAB166:    xsi_set_current_line(180, ng0);
    t5 = ((char*)((ng12)));
    t11 = (t0 + 5192);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 12, 0LL);
    xsi_set_current_line(181, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4872);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5032);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB165;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 7248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng19)));
    t3 = (t0 + 7664);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 134217727U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 26);

LAB1:    return;
}


extern void work_m_00000000000801859663_1885593124_init()
{
	static char *pe[] = {(void *)Always_92_0,(void *)Always_111_1,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000000801859663_1885593124", "isim/KitchenTimer_testbench_isim_beh.exe.sim/work/m_00000000000801859663_1885593124.didat");
	xsi_register_executes(pe);
}
