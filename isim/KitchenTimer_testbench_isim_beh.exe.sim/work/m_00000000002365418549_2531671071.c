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
static const char *ng0 = "//ad/eng/users/j/l/jlippai/My Documents/EC311/Labs/ProjectFinal/ClockDivider.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static int ng4[] = {1, 0};



static void Always_31_0(char *t0)
{
    char t9[8];
    char t10[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 27, t8, 27, t7, 27);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB9;

LAB6:    if (t22 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t10) = 1;

LAB9:    t26 = (t10 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 27, t4, 27, t5, 27);
    t6 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t6, t9, 0, 0, 27, 0LL);

LAB12:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng1)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_minus(t9, 32, t6, 27, t5, 32);
    t7 = ((char*)((ng3)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_divide(t10, 32, t9, 32, t7, 32);
    memset(t34, 0, 8);
    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB14;

LAB13:    t11 = (t10 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB14;

LAB17:    if (*((unsigned int *)t4) < *((unsigned int *)t10))
        goto LAB16;

LAB15:    *((unsigned int *)t34) = 1;

LAB16:    t25 = (t34 + 4);
    t13 = *((unsigned int *)t25);
    t14 = (~(t13));
    t15 = *((unsigned int *)t34);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB20:    goto LAB2;

LAB8:    t25 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(33, ng0);
    t32 = ((char*)((ng2)));
    t33 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 27, 0LL);
    goto LAB12;

LAB14:    t12 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB16;

LAB18:    xsi_set_current_line(37, ng0);
    t26 = ((char*)((ng4)));
    t32 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t32, t26, 0, 0, 1, 0LL);
    goto LAB20;

}


extern void work_m_00000000002365418549_2531671071_init()
{
	static char *pe[] = {(void *)Always_31_0};
	xsi_register_didat("work_m_00000000002365418549_2531671071", "isim/KitchenTimer_testbench_isim_beh.exe.sim/work/m_00000000002365418549_2531671071.didat");
	xsi_register_executes(pe);
}
