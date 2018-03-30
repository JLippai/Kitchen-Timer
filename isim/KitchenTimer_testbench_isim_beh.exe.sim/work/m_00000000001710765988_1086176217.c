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
static const char *ng0 = "//ad/eng/users/j/l/jlippai/My Documents/EC311/Labs/ProjectFinal/seven_alternate.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {14U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {13U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {11U, 0U};
static unsigned int ng7[] = {7U, 0U};
static int ng8[] = {0, 0};



static void Always_33_0(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(47, ng0);

LAB19:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 12);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 12);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 15U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 15U);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t11, 0, 0, 4);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);

LAB16:    xsi_set_current_line(36, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 1928);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 4);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 0);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 15U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 15U);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t11, 0, 0, 4);
    goto LAB15;

LAB9:    xsi_set_current_line(39, ng0);

LAB17:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 4);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 4);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 15U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 15U);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t11, 0, 0, 4);
    goto LAB15;

LAB11:    xsi_set_current_line(43, ng0);

LAB18:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 8);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 8);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 15U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 15U);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t11, 0, 0, 4);
    goto LAB15;

}

static void Always_54_1(char *t0)
{
    char t13[8];
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

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3592);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 2, t4, 2, t5, 2);
    t11 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 2, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(55, ng0);

LAB9:    xsi_set_current_line(56, ng0);
    t11 = ((char*)((ng8)));
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB8;

}


extern void work_m_00000000001710765988_1086176217_init()
{
	static char *pe[] = {(void *)Always_33_0,(void *)Always_54_1};
	xsi_register_didat("work_m_00000000001710765988_1086176217", "isim/KitchenTimer_testbench_isim_beh.exe.sim/work/m_00000000001710765988_1086176217.didat");
	xsi_register_executes(pe);
}
