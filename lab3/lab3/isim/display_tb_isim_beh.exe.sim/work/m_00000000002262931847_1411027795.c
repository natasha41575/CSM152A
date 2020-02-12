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
static const char *ng0 = "C:/Users/152/Desktop/CSM152A/lab3/lab3/display.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {192U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {249U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {164U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {176U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {153U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {146U, 0U};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {130U, 0U};
static unsigned int ng15[] = {7U, 0U};
static unsigned int ng16[] = {248U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {128U, 0U};
static unsigned int ng19[] = {9U, 0U};
static unsigned int ng20[] = {144U, 0U};
static int ng21[] = {0, 0};
static int ng22[] = {1, 0};
static unsigned int ng23[] = {15U, 0U};
static unsigned int ng24[] = {11U, 0U};
static int ng25[] = {2, 0};
static unsigned int ng26[] = {13U, 0U};
static int ng27[] = {3, 0};
static unsigned int ng28[] = {14U, 0U};
static int ng29[] = {4, 0};



static int sp_set_display_segs(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;

LAB0:    t0 = 1;
    xsi_set_current_line(28, ng0);
    t3 = (t1 + 3640);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB2:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 4);
    if (t7 == 1)
        goto LAB3;

LAB4:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB5;

LAB6:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB7;

LAB8:    t3 = ((char*)((ng7)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB9;

LAB10:    t3 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB11;

LAB12:    t3 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB13;

LAB14:    t3 = ((char*)((ng13)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB15;

LAB16:    t3 = ((char*)((ng15)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB17;

LAB18:    t3 = ((char*)((ng17)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB19;

LAB20:    t3 = ((char*)((ng19)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB21;

LAB22:
LAB23:    t0 = 0;

LAB1:    return t0;
LAB3:    xsi_set_current_line(29, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t1 + 3480);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 8);
    goto LAB23;

LAB5:    xsi_set_current_line(30, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 3480);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB23;

LAB7:    xsi_set_current_line(31, ng0);
    t4 = ((char*)((ng6)));
    t6 = (t1 + 3480);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB23;

LAB9:    xsi_set_current_line(32, ng0);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 3480);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB23;

LAB11:    xsi_set_current_line(33, ng0);
    t4 = ((char*)((ng10)));
    t6 = (t1 + 3480);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB23;

LAB13:    xsi_set_current_line(34, ng0);
    t4 = ((char*)((ng12)));
    t6 = (t1 + 3480);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB23;

LAB15:    xsi_set_current_line(35, ng0);
    t4 = ((char*)((ng14)));
    t6 = (t1 + 3480);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB23;

LAB17:    xsi_set_current_line(36, ng0);
    t4 = ((char*)((ng16)));
    t6 = (t1 + 3480);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB23;

LAB19:    xsi_set_current_line(37, ng0);
    t4 = ((char*)((ng18)));
    t6 = (t1 + 3480);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB23;

LAB21:    xsi_set_current_line(38, ng0);
    t4 = ((char*)((ng20)));
    t6 = (t1 + 3480);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 8);
    goto LAB23;

}

static void Initial_42_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(43, ng0);
    t1 = ((char*)((ng21)));
    t2 = (t0 + 3320);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);

LAB1:    return;
}

static void Always_45_1(char *t0)
{
    char t11[8];
    char t27[8];
    char t41[8];
    char t57[8];
    char t65[8];
    char t97[8];
    char t111[8];
    char t118[8];
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
    char *t12;
    char *t13;
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
    unsigned int t25;
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
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
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    int t142;
    int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    char *t157;

LAB0:    t1 = (t0 + 4808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5128);
    *((int *)t2) = 1;
    t3 = (t0 + 4840);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 3320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng22)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng25)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng27)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng22)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 2, t5, 32);
    t7 = ((char*)((ng29)));
    memset(t27, 0, 8);
    xsi_vlog_unsigned_mod(t27, 32, t11, 32, t7, 32);
    t9 = (t0 + 3320);
    xsi_vlogvar_wait_assign_value(t9, t27, 0, 0, 2, 0LL);
    goto LAB2;

LAB7:    xsi_set_current_line(49, ng0);

LAB16:    xsi_set_current_line(50, ng0);
    t9 = (t0 + 2280U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng22)));
    memset(t11, 0, 8);
    t12 = (t10 + 4);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB20;

LAB17:    if (t23 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t11) = 1;

LAB20:    memset(t27, 0, 8);
    t28 = (t11 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t28) != 0)
        goto LAB23;

LAB24:    t35 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t35);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB25;

LAB26:    memcpy(t65, t27, 8);

LAB27:    memset(t97, 0, 8);
    t98 = (t65 + 4);
    t99 = *((unsigned int *)t98);
    t100 = (~(t99));
    t101 = *((unsigned int *)t65);
    t102 = (t101 & t100);
    t103 = (t102 & 1U);
    if (t103 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t98) != 0)
        goto LAB41;

LAB42:    t105 = (t97 + 4);
    t106 = *((unsigned int *)t97);
    t107 = *((unsigned int *)t105);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB43;

LAB44:    memcpy(t118, t97, 8);

LAB45:    t150 = (t118 + 4);
    t151 = *((unsigned int *)t150);
    t152 = (~(t151));
    t153 = *((unsigned int *)t118);
    t154 = (t153 & t152);
    t155 = (t154 != 0);
    if (t155 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB55:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = (t0 + 4616);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    t7 = (t0 + 3640);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);

LAB56:    t9 = (t0 + 4712);
    t10 = *((char **)t9);
    t12 = (t10 + 80U);
    t13 = *((char **)t12);
    t26 = (t13 + 272U);
    t28 = *((char **)t26);
    t34 = (t28 + 0U);
    t35 = *((char **)t34);
    t8 = ((int  (*)(char *, char *))t35)(t0, t10);
    if (t8 != 0)
        goto LAB58;

LAB57:    t10 = (t0 + 4712);
    t39 = *((char **)t10);
    t10 = (t0 + 3480);
    t40 = (t10 + 56U);
    t42 = *((char **)t40);
    memcpy(t11, t42, 8);
    t43 = (t0 + 848);
    t56 = (t0 + 4616);
    t58 = 0;
    xsi_delete_subprogram_invocation(t43, t39, t0, t56, t58);
    t64 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t64, t11, 0, 0, 8, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(57, ng0);

LAB59:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 2280U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng22)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB63;

LAB60:    if (t23 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t11) = 1;

LAB63:    memset(t27, 0, 8);
    t10 = (t11 + 4);
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t10) != 0)
        goto LAB66;

LAB67:    t13 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t13);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB68;

LAB69:    memcpy(t65, t27, 8);

LAB70:    memset(t97, 0, 8);
    t70 = (t65 + 4);
    t99 = *((unsigned int *)t70);
    t100 = (~(t99));
    t101 = *((unsigned int *)t65);
    t102 = (t101 & t100);
    t103 = (t102 & 1U);
    if (t103 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t70) != 0)
        goto LAB84;

LAB85:    t79 = (t97 + 4);
    t106 = *((unsigned int *)t97);
    t107 = *((unsigned int *)t79);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB86;

LAB87:    memcpy(t118, t97, 8);

LAB88:    t123 = (t118 + 4);
    t151 = *((unsigned int *)t123);
    t152 = (~(t151));
    t153 = *((unsigned int *)t118);
    t154 = (t153 & t152);
    t155 = (t154 != 0);
    if (t155 > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB98:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 4616);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    t7 = (t0 + 3640);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);

LAB99:    t9 = (t0 + 4712);
    t10 = *((char **)t9);
    t12 = (t10 + 80U);
    t13 = *((char **)t12);
    t26 = (t13 + 272U);
    t28 = *((char **)t26);
    t34 = (t28 + 0U);
    t35 = *((char **)t34);
    t8 = ((int  (*)(char *, char *))t35)(t0, t10);
    if (t8 != 0)
        goto LAB101;

LAB100:    t10 = (t0 + 4712);
    t39 = *((char **)t10);
    t10 = (t0 + 3480);
    t40 = (t10 + 56U);
    t42 = *((char **)t40);
    memcpy(t11, t42, 8);
    t43 = (t0 + 848);
    t56 = (t0 + 4616);
    t58 = 0;
    xsi_delete_subprogram_invocation(t43, t39, t0, t56, t58);
    t64 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t64, t11, 0, 0, 8, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(65, ng0);

LAB102:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 2280U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng22)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB106;

LAB103:    if (t23 != 0)
        goto LAB105;

LAB104:    *((unsigned int *)t11) = 1;

LAB106:    memset(t27, 0, 8);
    t10 = (t11 + 4);
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t10) != 0)
        goto LAB109;

LAB110:    t13 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t13);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB111;

LAB112:    memcpy(t65, t27, 8);

LAB113:    memset(t97, 0, 8);
    t70 = (t65 + 4);
    t99 = *((unsigned int *)t70);
    t100 = (~(t99));
    t101 = *((unsigned int *)t65);
    t102 = (t101 & t100);
    t103 = (t102 & 1U);
    if (t103 != 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t70) != 0)
        goto LAB127;

LAB128:    t79 = (t97 + 4);
    t106 = *((unsigned int *)t97);
    t107 = *((unsigned int *)t79);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB129;

LAB130:    memcpy(t118, t97, 8);

LAB131:    t123 = (t118 + 4);
    t151 = *((unsigned int *)t123);
    t152 = (~(t151));
    t153 = *((unsigned int *)t118);
    t154 = (t153 & t152);
    t155 = (t154 != 0);
    if (t155 > 0)
        goto LAB139;

LAB140:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB141:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = (t0 + 4616);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    t7 = (t0 + 3640);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);

LAB142:    t9 = (t0 + 4712);
    t10 = *((char **)t9);
    t12 = (t10 + 80U);
    t13 = *((char **)t12);
    t26 = (t13 + 272U);
    t28 = *((char **)t26);
    t34 = (t28 + 0U);
    t35 = *((char **)t34);
    t8 = ((int  (*)(char *, char *))t35)(t0, t10);
    if (t8 != 0)
        goto LAB144;

LAB143:    t10 = (t0 + 4712);
    t39 = *((char **)t10);
    t10 = (t0 + 3480);
    t40 = (t10 + 56U);
    t42 = *((char **)t40);
    memcpy(t11, t42, 8);
    t43 = (t0 + 848);
    t56 = (t0 + 4616);
    t58 = 0;
    xsi_delete_subprogram_invocation(t43, t39, t0, t56, t58);
    t64 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t64, t11, 0, 0, 8, 0LL);
    goto LAB15;

LAB13:    xsi_set_current_line(73, ng0);

LAB145:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 2280U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng22)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB149;

LAB146:    if (t23 != 0)
        goto LAB148;

LAB147:    *((unsigned int *)t11) = 1;

LAB149:    memset(t27, 0, 8);
    t10 = (t11 + 4);
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB150;

LAB151:    if (*((unsigned int *)t10) != 0)
        goto LAB152;

LAB153:    t13 = (t27 + 4);
    t36 = *((unsigned int *)t27);
    t37 = *((unsigned int *)t13);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB154;

LAB155:    memcpy(t65, t27, 8);

LAB156:    memset(t97, 0, 8);
    t70 = (t65 + 4);
    t99 = *((unsigned int *)t70);
    t100 = (~(t99));
    t101 = *((unsigned int *)t65);
    t102 = (t101 & t100);
    t103 = (t102 & 1U);
    if (t103 != 0)
        goto LAB168;

LAB169:    if (*((unsigned int *)t70) != 0)
        goto LAB170;

LAB171:    t79 = (t97 + 4);
    t106 = *((unsigned int *)t97);
    t107 = *((unsigned int *)t79);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB172;

LAB173:    memcpy(t118, t97, 8);

LAB174:    t123 = (t118 + 4);
    t151 = *((unsigned int *)t123);
    t152 = (~(t151));
    t153 = *((unsigned int *)t118);
    t154 = (t153 & t152);
    t155 = (t154 != 0);
    if (t155 > 0)
        goto LAB182;

LAB183:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng28)));
    t3 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB184:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = (t0 + 4616);
    t4 = (t0 + 848);
    t5 = xsi_create_subprogram_invocation(t2, 0, t0, t4, 0, 0);
    t7 = (t0 + 3640);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);

LAB185:    t9 = (t0 + 4712);
    t10 = *((char **)t9);
    t12 = (t10 + 80U);
    t13 = *((char **)t12);
    t26 = (t13 + 272U);
    t28 = *((char **)t26);
    t34 = (t28 + 0U);
    t35 = *((char **)t34);
    t8 = ((int  (*)(char *, char *))t35)(t0, t10);
    if (t8 != 0)
        goto LAB187;

LAB186:    t10 = (t0 + 4712);
    t39 = *((char **)t10);
    t10 = (t0 + 3480);
    t40 = (t10 + 56U);
    t42 = *((char **)t40);
    memcpy(t11, t42, 8);
    t43 = (t0 + 848);
    t56 = (t0 + 4616);
    t58 = 0;
    xsi_delete_subprogram_invocation(t43, t39, t0, t56, t58);
    t64 = (t0 + 3160);
    xsi_vlogvar_wait_assign_value(t64, t11, 0, 0, 8, 0LL);
    goto LAB15;

LAB19:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t27) = 1;
    goto LAB24;

LAB23:    t34 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB24;

LAB25:    t39 = (t0 + 2120U);
    t40 = *((char **)t39);
    t39 = ((char*)((ng22)));
    memset(t41, 0, 8);
    t42 = (t40 + 4);
    t43 = (t39 + 4);
    t44 = *((unsigned int *)t40);
    t45 = *((unsigned int *)t39);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t42);
    t48 = *((unsigned int *)t43);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB31;

LAB28:    if (t53 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t41) = 1;

LAB31:    memset(t57, 0, 8);
    t58 = (t41 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t58) != 0)
        goto LAB34;

LAB35:    t66 = *((unsigned int *)t27);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t69 = (t27 + 4);
    t70 = (t57 + 4);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t69);
    t73 = *((unsigned int *)t70);
    t74 = (t72 | t73);
    *((unsigned int *)t71) = t74;
    t75 = *((unsigned int *)t71);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB27;

LAB30:    t56 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB31;

LAB32:    *((unsigned int *)t57) = 1;
    goto LAB35;

LAB34:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB35;

LAB36:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t65) = (t77 | t78);
    t79 = (t27 + 4);
    t80 = (t57 + 4);
    t81 = *((unsigned int *)t27);
    t82 = (~(t81));
    t83 = *((unsigned int *)t79);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t80);
    t88 = (~(t87));
    t89 = (t82 & t84);
    t90 = (t86 & t88);
    t91 = (~(t89));
    t92 = (~(t90));
    t93 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t93 & t91);
    t94 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB38;

LAB39:    *((unsigned int *)t97) = 1;
    goto LAB42;

LAB41:    t104 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB42;

LAB43:    t109 = (t0 + 2600U);
    t110 = *((char **)t109);
    memset(t111, 0, 8);
    t109 = (t110 + 4);
    t112 = *((unsigned int *)t109);
    t113 = (~(t112));
    t114 = *((unsigned int *)t110);
    t115 = (t114 & t113);
    t116 = (t115 & 1U);
    if (t116 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t109) != 0)
        goto LAB48;

LAB49:    t119 = *((unsigned int *)t97);
    t120 = *((unsigned int *)t111);
    t121 = (t119 & t120);
    *((unsigned int *)t118) = t121;
    t122 = (t97 + 4);
    t123 = (t111 + 4);
    t124 = (t118 + 4);
    t125 = *((unsigned int *)t122);
    t126 = *((unsigned int *)t123);
    t127 = (t125 | t126);
    *((unsigned int *)t124) = t127;
    t128 = *((unsigned int *)t124);
    t129 = (t128 != 0);
    if (t129 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB45;

LAB46:    *((unsigned int *)t111) = 1;
    goto LAB49;

LAB48:    t117 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t117) = 1;
    goto LAB49;

LAB50:    t130 = *((unsigned int *)t118);
    t131 = *((unsigned int *)t124);
    *((unsigned int *)t118) = (t130 | t131);
    t132 = (t97 + 4);
    t133 = (t111 + 4);
    t134 = *((unsigned int *)t97);
    t135 = (~(t134));
    t136 = *((unsigned int *)t132);
    t137 = (~(t136));
    t138 = *((unsigned int *)t111);
    t139 = (~(t138));
    t140 = *((unsigned int *)t133);
    t141 = (~(t140));
    t142 = (t135 & t137);
    t143 = (t139 & t141);
    t144 = (~(t142));
    t145 = (~(t143));
    t146 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t146 & t144);
    t147 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t147 & t145);
    t148 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t148 & t144);
    t149 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t149 & t145);
    goto LAB52;

LAB53:    xsi_set_current_line(51, ng0);
    t156 = ((char*)((ng23)));
    t157 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t157, t156, 0, 0, 4, 0LL);
    goto LAB55;

LAB58:    t9 = (t0 + 4808U);
    *((char **)t9) = &&LAB56;
    goto LAB1;

LAB62:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB63;

LAB64:    *((unsigned int *)t27) = 1;
    goto LAB67;

LAB66:    t12 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB67;

LAB68:    t26 = (t0 + 2120U);
    t28 = *((char **)t26);
    t26 = ((char*)((ng22)));
    memset(t41, 0, 8);
    t34 = (t28 + 4);
    t35 = (t26 + 4);
    t44 = *((unsigned int *)t28);
    t45 = *((unsigned int *)t26);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t34);
    t48 = *((unsigned int *)t35);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t34);
    t52 = *((unsigned int *)t35);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB74;

LAB71:    if (t53 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t41) = 1;

LAB74:    memset(t57, 0, 8);
    t40 = (t41 + 4);
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t40) != 0)
        goto LAB77;

LAB78:    t66 = *((unsigned int *)t27);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t43 = (t27 + 4);
    t56 = (t57 + 4);
    t58 = (t65 + 4);
    t72 = *((unsigned int *)t43);
    t73 = *((unsigned int *)t56);
    t74 = (t72 | t73);
    *((unsigned int *)t58) = t74;
    t75 = *((unsigned int *)t58);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB79;

LAB80:
LAB81:    goto LAB70;

LAB73:    t39 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB74;

LAB75:    *((unsigned int *)t57) = 1;
    goto LAB78;

LAB77:    t42 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB78;

LAB79:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t58);
    *((unsigned int *)t65) = (t77 | t78);
    t64 = (t27 + 4);
    t69 = (t57 + 4);
    t81 = *((unsigned int *)t27);
    t82 = (~(t81));
    t83 = *((unsigned int *)t64);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t69);
    t88 = (~(t87));
    t89 = (t82 & t84);
    t90 = (t86 & t88);
    t91 = (~(t89));
    t92 = (~(t90));
    t93 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t93 & t91);
    t94 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB81;

LAB82:    *((unsigned int *)t97) = 1;
    goto LAB85;

LAB84:    t71 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB85;

LAB86:    t80 = (t0 + 2600U);
    t98 = *((char **)t80);
    memset(t111, 0, 8);
    t80 = (t98 + 4);
    t112 = *((unsigned int *)t80);
    t113 = (~(t112));
    t114 = *((unsigned int *)t98);
    t115 = (t114 & t113);
    t116 = (t115 & 1U);
    if (t116 != 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t80) != 0)
        goto LAB91;

LAB92:    t119 = *((unsigned int *)t97);
    t120 = *((unsigned int *)t111);
    t121 = (t119 & t120);
    *((unsigned int *)t118) = t121;
    t105 = (t97 + 4);
    t109 = (t111 + 4);
    t110 = (t118 + 4);
    t125 = *((unsigned int *)t105);
    t126 = *((unsigned int *)t109);
    t127 = (t125 | t126);
    *((unsigned int *)t110) = t127;
    t128 = *((unsigned int *)t110);
    t129 = (t128 != 0);
    if (t129 == 1)
        goto LAB93;

LAB94:
LAB95:    goto LAB88;

LAB89:    *((unsigned int *)t111) = 1;
    goto LAB92;

LAB91:    t104 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB92;

LAB93:    t130 = *((unsigned int *)t118);
    t131 = *((unsigned int *)t110);
    *((unsigned int *)t118) = (t130 | t131);
    t117 = (t97 + 4);
    t122 = (t111 + 4);
    t134 = *((unsigned int *)t97);
    t135 = (~(t134));
    t136 = *((unsigned int *)t117);
    t137 = (~(t136));
    t138 = *((unsigned int *)t111);
    t139 = (~(t138));
    t140 = *((unsigned int *)t122);
    t141 = (~(t140));
    t142 = (t135 & t137);
    t143 = (t139 & t141);
    t144 = (~(t142));
    t145 = (~(t143));
    t146 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t146 & t144);
    t147 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t147 & t145);
    t148 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t148 & t144);
    t149 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t149 & t145);
    goto LAB95;

LAB96:    xsi_set_current_line(59, ng0);
    t124 = ((char*)((ng23)));
    t132 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t132, t124, 0, 0, 4, 0LL);
    goto LAB98;

LAB101:    t9 = (t0 + 4808U);
    *((char **)t9) = &&LAB99;
    goto LAB1;

LAB105:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB106;

LAB107:    *((unsigned int *)t27) = 1;
    goto LAB110;

LAB109:    t12 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB110;

LAB111:    t26 = (t0 + 2120U);
    t28 = *((char **)t26);
    t26 = ((char*)((ng22)));
    memset(t41, 0, 8);
    t34 = (t28 + 4);
    t35 = (t26 + 4);
    t44 = *((unsigned int *)t28);
    t45 = *((unsigned int *)t26);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t34);
    t48 = *((unsigned int *)t35);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t34);
    t52 = *((unsigned int *)t35);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB117;

LAB114:    if (t53 != 0)
        goto LAB116;

LAB115:    *((unsigned int *)t41) = 1;

LAB117:    memset(t57, 0, 8);
    t40 = (t41 + 4);
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t40) != 0)
        goto LAB120;

LAB121:    t66 = *((unsigned int *)t27);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t43 = (t27 + 4);
    t56 = (t57 + 4);
    t58 = (t65 + 4);
    t72 = *((unsigned int *)t43);
    t73 = *((unsigned int *)t56);
    t74 = (t72 | t73);
    *((unsigned int *)t58) = t74;
    t75 = *((unsigned int *)t58);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB122;

LAB123:
LAB124:    goto LAB113;

LAB116:    t39 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB117;

LAB118:    *((unsigned int *)t57) = 1;
    goto LAB121;

LAB120:    t42 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB121;

LAB122:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t58);
    *((unsigned int *)t65) = (t77 | t78);
    t64 = (t27 + 4);
    t69 = (t57 + 4);
    t81 = *((unsigned int *)t27);
    t82 = (~(t81));
    t83 = *((unsigned int *)t64);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t69);
    t88 = (~(t87));
    t89 = (t82 & t84);
    t90 = (t86 & t88);
    t91 = (~(t89));
    t92 = (~(t90));
    t93 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t93 & t91);
    t94 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB124;

LAB125:    *((unsigned int *)t97) = 1;
    goto LAB128;

LAB127:    t71 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB128;

LAB129:    t80 = (t0 + 2600U);
    t98 = *((char **)t80);
    memset(t111, 0, 8);
    t80 = (t98 + 4);
    t112 = *((unsigned int *)t80);
    t113 = (~(t112));
    t114 = *((unsigned int *)t98);
    t115 = (t114 & t113);
    t116 = (t115 & 1U);
    if (t116 != 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t80) != 0)
        goto LAB134;

LAB135:    t119 = *((unsigned int *)t97);
    t120 = *((unsigned int *)t111);
    t121 = (t119 & t120);
    *((unsigned int *)t118) = t121;
    t105 = (t97 + 4);
    t109 = (t111 + 4);
    t110 = (t118 + 4);
    t125 = *((unsigned int *)t105);
    t126 = *((unsigned int *)t109);
    t127 = (t125 | t126);
    *((unsigned int *)t110) = t127;
    t128 = *((unsigned int *)t110);
    t129 = (t128 != 0);
    if (t129 == 1)
        goto LAB136;

LAB137:
LAB138:    goto LAB131;

LAB132:    *((unsigned int *)t111) = 1;
    goto LAB135;

LAB134:    t104 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB135;

LAB136:    t130 = *((unsigned int *)t118);
    t131 = *((unsigned int *)t110);
    *((unsigned int *)t118) = (t130 | t131);
    t117 = (t97 + 4);
    t122 = (t111 + 4);
    t134 = *((unsigned int *)t97);
    t135 = (~(t134));
    t136 = *((unsigned int *)t117);
    t137 = (~(t136));
    t138 = *((unsigned int *)t111);
    t139 = (~(t138));
    t140 = *((unsigned int *)t122);
    t141 = (~(t140));
    t142 = (t135 & t137);
    t143 = (t139 & t141);
    t144 = (~(t142));
    t145 = (~(t143));
    t146 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t146 & t144);
    t147 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t147 & t145);
    t148 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t148 & t144);
    t149 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t149 & t145);
    goto LAB138;

LAB139:    xsi_set_current_line(67, ng0);
    t124 = ((char*)((ng23)));
    t132 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t132, t124, 0, 0, 4, 0LL);
    goto LAB141;

LAB144:    t9 = (t0 + 4808U);
    *((char **)t9) = &&LAB142;
    goto LAB1;

LAB148:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB149;

LAB150:    *((unsigned int *)t27) = 1;
    goto LAB153;

LAB152:    t12 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB153;

LAB154:    t26 = (t0 + 2120U);
    t28 = *((char **)t26);
    t26 = ((char*)((ng22)));
    memset(t41, 0, 8);
    t34 = (t28 + 4);
    t35 = (t26 + 4);
    t44 = *((unsigned int *)t28);
    t45 = *((unsigned int *)t26);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t34);
    t48 = *((unsigned int *)t35);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t34);
    t52 = *((unsigned int *)t35);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB160;

LAB157:    if (t53 != 0)
        goto LAB159;

LAB158:    *((unsigned int *)t41) = 1;

LAB160:    memset(t57, 0, 8);
    t40 = (t41 + 4);
    t59 = *((unsigned int *)t40);
    t60 = (~(t59));
    t61 = *((unsigned int *)t41);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB161;

LAB162:    if (*((unsigned int *)t40) != 0)
        goto LAB163;

LAB164:    t66 = *((unsigned int *)t27);
    t67 = *((unsigned int *)t57);
    t68 = (t66 & t67);
    *((unsigned int *)t65) = t68;
    t43 = (t27 + 4);
    t56 = (t57 + 4);
    t58 = (t65 + 4);
    t72 = *((unsigned int *)t43);
    t73 = *((unsigned int *)t56);
    t74 = (t72 | t73);
    *((unsigned int *)t58) = t74;
    t75 = *((unsigned int *)t58);
    t76 = (t75 != 0);
    if (t76 == 1)
        goto LAB165;

LAB166:
LAB167:    goto LAB156;

LAB159:    t39 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB160;

LAB161:    *((unsigned int *)t57) = 1;
    goto LAB164;

LAB163:    t42 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB164;

LAB165:    t77 = *((unsigned int *)t65);
    t78 = *((unsigned int *)t58);
    *((unsigned int *)t65) = (t77 | t78);
    t64 = (t27 + 4);
    t69 = (t57 + 4);
    t81 = *((unsigned int *)t27);
    t82 = (~(t81));
    t83 = *((unsigned int *)t64);
    t84 = (~(t83));
    t85 = *((unsigned int *)t57);
    t86 = (~(t85));
    t87 = *((unsigned int *)t69);
    t88 = (~(t87));
    t89 = (t82 & t84);
    t90 = (t86 & t88);
    t91 = (~(t89));
    t92 = (~(t90));
    t93 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t93 & t91);
    t94 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t94 & t92);
    t95 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t95 & t91);
    t96 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t96 & t92);
    goto LAB167;

LAB168:    *((unsigned int *)t97) = 1;
    goto LAB171;

LAB170:    t71 = (t97 + 4);
    *((unsigned int *)t97) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB171;

LAB172:    t80 = (t0 + 2600U);
    t98 = *((char **)t80);
    memset(t111, 0, 8);
    t80 = (t98 + 4);
    t112 = *((unsigned int *)t80);
    t113 = (~(t112));
    t114 = *((unsigned int *)t98);
    t115 = (t114 & t113);
    t116 = (t115 & 1U);
    if (t116 != 0)
        goto LAB175;

LAB176:    if (*((unsigned int *)t80) != 0)
        goto LAB177;

LAB178:    t119 = *((unsigned int *)t97);
    t120 = *((unsigned int *)t111);
    t121 = (t119 & t120);
    *((unsigned int *)t118) = t121;
    t105 = (t97 + 4);
    t109 = (t111 + 4);
    t110 = (t118 + 4);
    t125 = *((unsigned int *)t105);
    t126 = *((unsigned int *)t109);
    t127 = (t125 | t126);
    *((unsigned int *)t110) = t127;
    t128 = *((unsigned int *)t110);
    t129 = (t128 != 0);
    if (t129 == 1)
        goto LAB179;

LAB180:
LAB181:    goto LAB174;

LAB175:    *((unsigned int *)t111) = 1;
    goto LAB178;

LAB177:    t104 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB178;

LAB179:    t130 = *((unsigned int *)t118);
    t131 = *((unsigned int *)t110);
    *((unsigned int *)t118) = (t130 | t131);
    t117 = (t97 + 4);
    t122 = (t111 + 4);
    t134 = *((unsigned int *)t97);
    t135 = (~(t134));
    t136 = *((unsigned int *)t117);
    t137 = (~(t136));
    t138 = *((unsigned int *)t111);
    t139 = (~(t138));
    t140 = *((unsigned int *)t122);
    t141 = (~(t140));
    t142 = (t135 & t137);
    t143 = (t139 & t141);
    t144 = (~(t142));
    t145 = (~(t143));
    t146 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t146 & t144);
    t147 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t147 & t145);
    t148 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t148 & t144);
    t149 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t149 & t145);
    goto LAB181;

LAB182:    xsi_set_current_line(75, ng0);
    t124 = ((char*)((ng23)));
    t132 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t132, t124, 0, 0, 4, 0LL);
    goto LAB184;

LAB187:    t9 = (t0 + 4808U);
    *((char **)t9) = &&LAB185;
    goto LAB1;

}


extern void work_m_00000000002262931847_1411027795_init()
{
	static char *pe[] = {(void *)Initial_42_0,(void *)Always_45_1};
	static char *se[] = {(void *)sp_set_display_segs};
	xsi_register_didat("work_m_00000000002262931847_1411027795", "isim/display_tb_isim_beh.exe.sim/work/m_00000000002262931847_1411027795.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
