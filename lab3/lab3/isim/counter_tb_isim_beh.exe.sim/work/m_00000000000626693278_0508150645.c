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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/152/CSM152A/lab3/lab3/counter_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {1000, 0};
static int ng4[] = {500, 0};



static void Initial_59_0(char *t0)
{
    char t10[8];
    char t32[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
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
    char *t31;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);

LAB4:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3776);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 10);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3776);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(79, ng0);

LAB7:    t2 = ((char*)((ng2)));
    t3 = (t2 + 4);
    t4 = *((unsigned int *)t3);
    t5 = (~(t4));
    t6 = *((unsigned int *)t2);
    t7 = (t6 & t5);
    t8 = (t7 != 0);
    if (t8 > 0)
        goto LAB8;

LAB9:    goto LAB1;

LAB8:    xsi_set_current_line(80, ng0);

LAB10:    xsi_set_current_line(81, ng0);
    t9 = (t0 + 3776);
    xsi_process_wait(t9, 5000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(81, ng0);
    t11 = (t0 + 2248);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t10, 0, 8);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB15;

LAB13:    if (*((unsigned int *)t14) == 0)
        goto LAB12;

LAB14:    t20 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t20) = 1;

LAB15:    t21 = (t10 + 4);
    t22 = (t13 + 4);
    t23 = *((unsigned int *)t13);
    t24 = (~(t23));
    *((unsigned int *)t10) = t24;
    *((unsigned int *)t21) = 0;
    if (*((unsigned int *)t22) != 0)
        goto LAB17;

LAB16:    t29 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t29 & 1U);
    t30 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t30 & 1U);
    t31 = (t0 + 2248);
    xsi_vlogvar_assign_value(t31, t10, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t9 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t9, 10, t11, 32);
    t12 = ((char*)((ng3)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_mod(t32, 32, t10, 32, t12, 32);
    t13 = (t0 + 3048);
    xsi_vlogvar_assign_value(t13, t32, 0, 0, 10);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t9 = *((char **)t3);
    t11 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_mod(t10, 32, t9, 10, t11, 32);
    t12 = ((char*)((ng1)));
    memset(t32, 0, 8);
    t13 = (t10 + 4);
    t14 = (t12 + 4);
    t4 = *((unsigned int *)t10);
    t5 = *((unsigned int *)t12);
    t6 = (t4 ^ t5);
    t7 = *((unsigned int *)t13);
    t8 = *((unsigned int *)t14);
    t15 = (t7 ^ t8);
    t16 = (t6 | t15);
    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    t19 = (t17 | t18);
    t23 = (~(t19));
    t24 = (t16 & t23);
    if (t24 != 0)
        goto LAB21;

LAB18:    if (t19 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t32) = 1;

LAB21:    t21 = (t32 + 4);
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t32);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB22;

LAB23:
LAB24:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t9 = *((char **)t3);
    t11 = ((char*)((ng3)));
    memset(t10, 0, 8);
    t12 = (t9 + 4);
    t13 = (t11 + 4);
    t4 = *((unsigned int *)t9);
    t5 = *((unsigned int *)t11);
    t6 = (t4 ^ t5);
    t7 = *((unsigned int *)t12);
    t8 = *((unsigned int *)t13);
    t15 = (t7 ^ t8);
    t16 = (t6 | t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 | t18);
    t23 = (~(t19));
    t24 = (t16 & t23);
    if (t24 != 0)
        goto LAB34;

LAB31:    if (t19 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t10) = 1;

LAB34:    t20 = (t10 + 4);
    t25 = *((unsigned int *)t20);
    t26 = (~(t25));
    t27 = *((unsigned int *)t10);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB35;

LAB36:
LAB37:    goto LAB7;

LAB12:    *((unsigned int *)t10) = 1;
    goto LAB15;

LAB17:    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t22);
    *((unsigned int *)t10) = (t25 | t26);
    t27 = *((unsigned int *)t21);
    t28 = *((unsigned int *)t22);
    *((unsigned int *)t21) = (t27 | t28);
    goto LAB16;

LAB20:    t20 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(84, ng0);
    t22 = (t0 + 2568);
    t31 = (t22 + 56U);
    t34 = *((char **)t31);
    memset(t33, 0, 8);
    t35 = (t34 + 4);
    t30 = *((unsigned int *)t35);
    t36 = (~(t30));
    t37 = *((unsigned int *)t34);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t35) == 0)
        goto LAB25;

LAB27:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;

LAB28:    t41 = (t33 + 4);
    t42 = (t34 + 4);
    t43 = *((unsigned int *)t34);
    t44 = (~(t43));
    *((unsigned int *)t33) = t44;
    *((unsigned int *)t41) = 0;
    if (*((unsigned int *)t42) != 0)
        goto LAB30;

LAB29:    t49 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t49 & 1U);
    t50 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t50 & 1U);
    t51 = (t0 + 2568);
    xsi_vlogvar_assign_value(t51, t33, 0, 0, 1);
    goto LAB24;

LAB25:    *((unsigned int *)t33) = 1;
    goto LAB28;

LAB30:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t42);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = *((unsigned int *)t41);
    t48 = *((unsigned int *)t42);
    *((unsigned int *)t41) = (t47 | t48);
    goto LAB29;

LAB33:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(86, ng0);
    t21 = (t0 + 2408);
    t22 = (t21 + 56U);
    t31 = *((char **)t22);
    memset(t32, 0, 8);
    t34 = (t31 + 4);
    t30 = *((unsigned int *)t34);
    t36 = (~(t30));
    t37 = *((unsigned int *)t31);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB41;

LAB39:    if (*((unsigned int *)t34) == 0)
        goto LAB38;

LAB40:    t35 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t35) = 1;

LAB41:    t40 = (t32 + 4);
    t41 = (t31 + 4);
    t43 = *((unsigned int *)t31);
    t44 = (~(t43));
    *((unsigned int *)t32) = t44;
    *((unsigned int *)t40) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB43;

LAB42:    t49 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t49 & 1U);
    t50 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t50 & 1U);
    t42 = (t0 + 2408);
    xsi_vlogvar_assign_value(t42, t32, 0, 0, 1);
    goto LAB37;

LAB38:    *((unsigned int *)t32) = 1;
    goto LAB41;

LAB43:    t45 = *((unsigned int *)t32);
    t46 = *((unsigned int *)t41);
    *((unsigned int *)t32) = (t45 | t46);
    t47 = *((unsigned int *)t40);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t40) = (t47 | t48);
    goto LAB42;

}


extern void work_m_00000000000626693278_0508150645_init()
{
	static char *pe[] = {(void *)Initial_59_0};
	xsi_register_didat("work_m_00000000000626693278_0508150645", "isim/counter_tb_isim_beh.exe.sim/work/m_00000000000626693278_0508150645.didat");
	xsi_register_executes(pe);
}
