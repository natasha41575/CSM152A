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
static const char *ng0 = "C:/Users/152/Desktop/CSM152A/lab2/tb/model_uart.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {10, 0};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {0U, 0U, 0U, 0U};
static int ng7[] = {8, 0};
static int ng8[] = {13, 0};
static const char *ng9 = "%d %s Received sequence(%s)";
static int ng10[] = {1095914544, 0, 85, 0};



static int sp_tskRxData(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1256);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(57, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(59, ng0);
    t4 = (t1 + 2880);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3200);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    goto LAB4;

}

static int sp_tskTxData(char *t1, char *t2)
{
    char t5[8];
    char t7[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1688);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(67, ng0);

LAB5:    xsi_set_current_line(68, ng0);
    t6 = ((char*)((ng1)));
    t8 = (t1 + 3360);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t7, 0, 8);
    t11 = (t7 + 4);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 255U);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 & 255U);
    t19 = ((char*)((ng2)));
    xsi_vlogtype_concat(t5, 10, 10, 3U, t19, 1, t7, 8, t6, 1);
    t20 = (t1 + 3520);
    xsi_vlogvar_assign_value(t20, t5, 0, 0, 10);
    xsi_set_current_line(69, ng0);
    xsi_set_current_line(69, ng0);
    t4 = ((char*)((ng3)));
    t6 = (t1 + 3680);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 32);

LAB6:    t4 = (t1 + 3680);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t8, 32, t9, 32);
    t10 = (t5 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(75, ng0);
    t4 = (t1 + 6872);
    xsi_trigger(t4, -1, -1);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(70, ng0);

LAB9:    xsi_set_current_line(71, ng0);
    t11 = (t1 + 3520);
    t12 = (t11 + 56U);
    t19 = *((char **)t12);
    t20 = (t1 + 3520);
    t21 = (t20 + 72U);
    t22 = *((char **)t21);
    t23 = (t1 + 3680);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_get_index_select_value(t7, 1, t19, t22, 2, t25, 32, 1);
    t26 = (t1 + 2720);
    xsi_vlogvar_assign_value(t26, t7, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1000000LL);
    *((char **)t3) = &&LAB10;
    t0 = 1;
    goto LAB1;

LAB10:    xsi_set_current_line(73, ng0);
    t4 = (t1 + 6704);
    xsi_trigger(t4, -1, -1);
    xsi_set_current_line(69, ng0);
    t4 = (t1 + 3680);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t8, 32, t9, 32);
    t10 = (t1 + 3680);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 32);
    goto LAB6;

}

static void Initial_26_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(27, ng0);

LAB2:    xsi_set_current_line(28, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2720);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng6)));
    t2 = (t0 + 3040);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 40);

LAB1:    return;
}

static void Always_32_1(char *t0)
{
    char t12[8];
    char t13[8];
    char t32[8];
    char t52[16];
    char t53[16];
    char t54[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    int t9;
    char *t10;
    char *t11;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t55;
    unsigned int t56;
    char *t57;

LAB0:    t1 = (t0 + 4848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 5168);
    *((int *)t2) = 1;
    t3 = (t0 + 4880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2880);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4656);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t2);
    t9 = (t8 & t7);
    t4 = (t0 + 7600);
    *((int *)t4) = t9;

LAB7:    t5 = (t0 + 7600);
    if (*((int *)t5) > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t12, 0, 8);
    t10 = (t4 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t11);
    t16 = (t14 ^ t15);
    t18 = (t8 | t16);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB15;

LAB12:    if (t21 != 0)
        goto LAB14;

LAB13:    *((unsigned int *)t12) = 1;

LAB15:    t24 = (t12 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t12);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(48, ng0);

LAB20:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    xsi_vlog_unsigned_lshift(t52, 40, t4, 40, t5, 32);
    t10 = (t0 + 2880);
    t11 = (t10 + 56U);
    t17 = *((char **)t11);
    xsi_vlog_get_part_select_value(t53, 40, t17, 7, 0);
    t6 = 0;

LAB24:    t7 = (t6 < 2);
    if (t7 == 1)
        goto LAB25;

LAB26:    t57 = (t0 + 3040);
    xsi_vlogvar_assign_value(t57, t54, 0, 0, 40);

LAB18:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 6536);
    xsi_trigger(t2, -1, -1);
    goto LAB2;

LAB8:    xsi_set_current_line(37, ng0);

LAB10:    xsi_set_current_line(38, ng0);
    t10 = (t0 + 4656);
    xsi_process_wait(t10, 1000000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(38, ng0);
    t11 = (t0 + 6368);
    xsi_trigger(t11, -1, -1);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t10 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t10);
    t14 = (t8 >> 1);
    *((unsigned int *)t5) = t14;
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 & 127U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 127U);
    t11 = (t0 + 2320U);
    t17 = *((char **)t11);
    xsi_vlogtype_concat(t12, 8, 8, 2U, t17, 1, t13, 7);
    t11 = (t0 + 2880);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 8);
    t2 = (t0 + 7600);
    t9 = *((int *)t2);
    *((int *)t2) = (t9 - 1);
    goto LAB7;

LAB14:    t17 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(43, ng0);

LAB19:    xsi_set_current_line(44, ng0);
    *((int *)t13) = xsi_vlog_stime(1000.0000000000000, 1000.0000000000000);
    t30 = (t13 + 4);
    *((int *)t30) = 0;
    t31 = ((char*)((ng10)));
    t33 = (t0 + 3040);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t32, 0, 8);
    t36 = (t32 + 4);
    t37 = (t35 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 8);
    *((unsigned int *)t32) = t39;
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 8);
    *((unsigned int *)t36) = t41;
    t42 = (t35 + 8);
    t43 = (t35 + 12);
    t44 = *((unsigned int *)t42);
    t45 = (t44 << 24);
    t46 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t46 | t45);
    t47 = *((unsigned int *)t43);
    t48 = (t47 << 24);
    t49 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t49 | t48);
    t50 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t50 & 4294967295U);
    t51 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t51 & 4294967295U);
    xsi_vlogfile_write(1, 0, 0, ng9, 4, t0, (char)118, t13, 32, (char)118, t31, 40, (char)118, t32, 32);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 40);
    goto LAB18;

LAB21:    t28 = (t6 * 8);
    t29 = *((unsigned int *)t31);
    t38 = *((unsigned int *)t35);
    *((unsigned int *)t31) = (t29 | t38);
    t36 = (t52 + t28);
    t39 = (t28 + 4);
    t37 = (t52 + t39);
    t42 = (t53 + t28);
    t40 = (t28 + 4);
    t43 = (t53 + t40);
    t41 = *((unsigned int *)t37);
    t44 = (~(t41));
    t45 = *((unsigned int *)t36);
    t9 = (t45 & t44);
    t46 = *((unsigned int *)t43);
    t47 = (~(t46));
    t48 = *((unsigned int *)t42);
    t55 = (t48 & t47);
    t49 = (~(t9));
    t50 = (~(t55));
    t51 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t51 & t49);
    t56 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t56 & t50);

LAB23:    t6 = (t6 + 1);
    goto LAB24;

LAB22:    goto LAB23;

LAB25:    t8 = (t6 * 8);
    t24 = (t52 + t8);
    t30 = (t53 + t8);
    t31 = (t54 + t8);
    t14 = *((unsigned int *)t24);
    t15 = *((unsigned int *)t30);
    t16 = (t14 | t15);
    *((unsigned int *)t31) = t16;
    t18 = (t6 * 8);
    t19 = (t18 + 4);
    t33 = (t52 + t19);
    t20 = (t18 + 4);
    t34 = (t53 + t20);
    t21 = (t18 + 4);
    t35 = (t54 + t21);
    t22 = *((unsigned int *)t33);
    t23 = *((unsigned int *)t34);
    t25 = (t22 | t23);
    *((unsigned int *)t35) = t25;
    t26 = *((unsigned int *)t35);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB21;
    else
        goto LAB22;

}


extern void work_m_00000000001760192745_1746683258_init()
{
	static char *pe[] = {(void *)Initial_26_0,(void *)Always_32_1};
	static char *se[] = {(void *)sp_tskRxData,(void *)sp_tskTxData};
	xsi_register_didat("work_m_00000000001760192745_1746683258", "isim/tb_isim_beh.exe.sim/work/m_00000000001760192745_1746683258.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
