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
static const char *ng0 = "C:/Users/152/CSM152A/lab3/lab3/counter.v";
static int ng1[] = {0, 0};
static int ng2[] = {5, 0};
static int ng3[] = {9, 0};
static int ng4[] = {1, 0};
static int ng5[] = {10, 0};
static int ng6[] = {6, 0};
static int ng7[] = {2, 0};

static void NetReassign_49_1(char *);
static void NetReassign_50_2(char *);


static void Always_33_0(char *t0)
{
    char t11[8];
    char t33[8];
    char t34[8];
    char t35[8];
    char t76[8];
    char t92[8];
    char t108[8];
    char t124[8];
    char t132[8];
    char t164[8];
    char t180[8];
    char t196[8];
    char t204[8];
    char t236[8];
    char t252[8];
    char t268[8];
    char t276[8];
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
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
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
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    int t156;
    int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    char *t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    char *t177;
    char *t178;
    char *t179;
    char *t181;
    char *t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    char *t195;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    char *t203;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    char *t208;
    char *t209;
    char *t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    char *t218;
    char *t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    int t228;
    int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    char *t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    char *t243;
    char *t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    char *t248;
    char *t249;
    char *t250;
    char *t251;
    char *t253;
    char *t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    char *t267;
    char *t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    char *t275;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    char *t280;
    char *t281;
    char *t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    char *t290;
    char *t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    int t300;
    int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    char *t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    char *t314;
    char *t315;

LAB0:    t1 = (t0 + 4608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 5424);
    *((int *)t2) = 1;
    t3 = (t0 + 4640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
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

LAB7:
LAB8:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t33, 0, 8);
    t12 = (t33 + 4);
    t13 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t33) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 0);
    t16 = (t10 & 1);
    *((unsigned int *)t12) = t16;
    xsi_vlogtype_concat(t11, 2, 2, 2U, t33, 1, t3, 1);
    t14 = (t0 + 3048);
    xsi_vlogvar_assign_value(t14, t11, 0, 0, 2);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t33, 0, 8);
    t12 = (t33 + 4);
    t13 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t33) = t8;
    t9 = *((unsigned int *)t13);
    t10 = (t9 >> 0);
    t16 = (t10 & 1);
    *((unsigned int *)t12) = t16;
    xsi_vlogtype_concat(t11, 2, 2, 2U, t33, 1, t3, 1);
    t14 = (t0 + 3208);
    xsi_vlogvar_assign_value(t14, t11, 0, 0, 2);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3368);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 7220);
    *((int *)t3) = 1;
    NetReassign_49_1(t0);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3528);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 7224);
    *((int *)t3) = 1;
    NetReassign_50_2(t0);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t5) != 0)
        goto LAB21;

LAB22:    t13 = (t11 + 4);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t13);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB23;

LAB24:    memcpy(t35, t11, 8);

LAB25:    t66 = (t35 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t35);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB37;

LAB38:
LAB39:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB133;

LAB134:    if (*((unsigned int *)t5) != 0)
        goto LAB135;

LAB136:    t13 = (t11 + 4);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t13);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB137;

LAB138:    memcpy(t34, t11, 8);

LAB139:    t48 = (t34 + 4);
    t61 = *((unsigned int *)t48);
    t62 = (~(t61));
    t63 = *((unsigned int *)t34);
    t64 = (t63 & t62);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB147;

LAB148:
LAB149:    goto LAB2;

LAB6:    xsi_set_current_line(36, ng0);
    t12 = (t0 + 3688);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t11, 0, 8);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t14);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t15) == 0)
        goto LAB9;

LAB11:    t21 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t21) = 1;

LAB12:    t22 = (t11 + 4);
    t23 = (t14 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    *((unsigned int *)t11) = t25;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB14;

LAB13:    t30 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t30 & 1U);
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 1U);
    t32 = (t0 + 3688);
    xsi_vlogvar_assign_value(t32, t11, 0, 0, 1);
    goto LAB8;

LAB9:    *((unsigned int *)t11) = 1;
    goto LAB12;

LAB14:    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t11) = (t26 | t27);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t22) = (t28 | t29);
    goto LAB13;

LAB15:    xsi_set_current_line(38, ng0);

LAB18:    xsi_set_current_line(39, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB17;

LAB19:    *((unsigned int *)t11) = 1;
    goto LAB22;

LAB21:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB22;

LAB23:    t14 = (t0 + 2008U);
    t15 = *((char **)t14);
    memset(t33, 0, 8);
    t14 = (t15 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (~(t19));
    t24 = *((unsigned int *)t15);
    t25 = (t24 & t20);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB29;

LAB27:    if (*((unsigned int *)t14) == 0)
        goto LAB26;

LAB28:    t21 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t21) = 1;

LAB29:    memset(t34, 0, 8);
    t22 = (t33 + 4);
    t27 = *((unsigned int *)t22);
    t28 = (~(t27));
    t29 = *((unsigned int *)t33);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t22) != 0)
        goto LAB32;

LAB33:    t36 = *((unsigned int *)t11);
    t37 = *((unsigned int *)t34);
    t38 = (t36 & t37);
    *((unsigned int *)t35) = t38;
    t32 = (t11 + 4);
    t39 = (t34 + 4);
    t40 = (t35 + 4);
    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB25;

LAB26:    *((unsigned int *)t33) = 1;
    goto LAB29;

LAB30:    *((unsigned int *)t34) = 1;
    goto LAB33;

LAB32:    t23 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB33;

LAB34:    t46 = *((unsigned int *)t35);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t35) = (t46 | t47);
    t48 = (t11 + 4);
    t49 = (t34 + 4);
    t50 = *((unsigned int *)t11);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t64 & t60);
    t65 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t65 & t61);
    goto LAB36;

LAB37:    xsi_set_current_line(52, ng0);

LAB40:    xsi_set_current_line(53, ng0);
    t72 = (t0 + 2568);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    t75 = ((char*)((ng2)));
    memset(t76, 0, 8);
    t77 = (t74 + 4);
    t78 = (t75 + 4);
    t79 = *((unsigned int *)t74);
    t80 = *((unsigned int *)t75);
    t81 = (t79 ^ t80);
    t82 = *((unsigned int *)t77);
    t83 = *((unsigned int *)t78);
    t84 = (t82 ^ t83);
    t85 = (t81 | t84);
    t86 = *((unsigned int *)t77);
    t87 = *((unsigned int *)t78);
    t88 = (t86 | t87);
    t89 = (~(t88));
    t90 = (t85 & t89);
    if (t90 != 0)
        goto LAB44;

LAB41:    if (t88 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t76) = 1;

LAB44:    memset(t92, 0, 8);
    t93 = (t76 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t76);
    t97 = (t96 & t95);
    t98 = (t97 & 1U);
    if (t98 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t93) != 0)
        goto LAB47;

LAB48:    t100 = (t92 + 4);
    t101 = *((unsigned int *)t92);
    t102 = *((unsigned int *)t100);
    t103 = (t101 || t102);
    if (t103 > 0)
        goto LAB49;

LAB50:    memcpy(t132, t92, 8);

LAB51:    memset(t164, 0, 8);
    t165 = (t132 + 4);
    t166 = *((unsigned int *)t165);
    t167 = (~(t166));
    t168 = *((unsigned int *)t132);
    t169 = (t168 & t167);
    t170 = (t169 & 1U);
    if (t170 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t165) != 0)
        goto LAB65;

LAB66:    t172 = (t164 + 4);
    t173 = *((unsigned int *)t164);
    t174 = *((unsigned int *)t172);
    t175 = (t173 || t174);
    if (t175 > 0)
        goto LAB67;

LAB68:    memcpy(t204, t164, 8);

LAB69:    memset(t236, 0, 8);
    t237 = (t204 + 4);
    t238 = *((unsigned int *)t237);
    t239 = (~(t238));
    t240 = *((unsigned int *)t204);
    t241 = (t240 & t239);
    t242 = (t241 & 1U);
    if (t242 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t237) != 0)
        goto LAB83;

LAB84:    t244 = (t236 + 4);
    t245 = *((unsigned int *)t236);
    t246 = *((unsigned int *)t244);
    t247 = (t245 || t246);
    if (t247 > 0)
        goto LAB85;

LAB86:    memcpy(t276, t236, 8);

LAB87:    t308 = (t276 + 4);
    t309 = *((unsigned int *)t308);
    t310 = (~(t309));
    t311 = *((unsigned int *)t276);
    t312 = (t311 & t310);
    t313 = (t312 != 0);
    if (t313 > 0)
        goto LAB99;

LAB100:
LAB101:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t13);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t13);
    t20 = (t18 | t19);
    t24 = (~(t20));
    t25 = (t17 & t24);
    if (t25 != 0)
        goto LAB105;

LAB102:    if (t20 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t11) = 1;

LAB105:    t15 = (t11 + 4);
    t26 = *((unsigned int *)t15);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB106;

LAB107:
LAB108:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t11, 0, 8);
    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t13);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t13);
    t20 = (t18 | t19);
    t24 = (~(t20));
    t25 = (t17 & t24);
    if (t25 != 0)
        goto LAB112;

LAB109:    if (t20 != 0)
        goto LAB111;

LAB110:    *((unsigned int *)t11) = 1;

LAB112:    t15 = (t11 + 4);
    t26 = *((unsigned int *)t15);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB113;

LAB114:
LAB115:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t11, 0, 8);
    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t13);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t13);
    t20 = (t18 | t19);
    t24 = (~(t20));
    t25 = (t17 & t24);
    if (t25 != 0)
        goto LAB120;

LAB117:    if (t20 != 0)
        goto LAB119;

LAB118:    *((unsigned int *)t11) = 1;

LAB120:    t15 = (t11 + 4);
    t26 = *((unsigned int *)t15);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB121;

LAB122:
LAB123:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t11, 0, 8);
    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t13);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t13);
    t20 = (t18 | t19);
    t24 = (~(t20));
    t25 = (t17 & t24);
    if (t25 != 0)
        goto LAB128;

LAB125:    if (t20 != 0)
        goto LAB127;

LAB126:    *((unsigned int *)t11) = 1;

LAB128:    t15 = (t11 + 4);
    t26 = *((unsigned int *)t15);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB129;

LAB130:
LAB131:    goto LAB39;

LAB43:    t91 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB44;

LAB45:    *((unsigned int *)t92) = 1;
    goto LAB48;

LAB47:    t99 = (t92 + 4);
    *((unsigned int *)t92) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB48;

LAB49:    t104 = (t0 + 2408);
    t105 = (t104 + 56U);
    t106 = *((char **)t105);
    t107 = ((char*)((ng3)));
    memset(t108, 0, 8);
    t109 = (t106 + 4);
    t110 = (t107 + 4);
    t111 = *((unsigned int *)t106);
    t112 = *((unsigned int *)t107);
    t113 = (t111 ^ t112);
    t114 = *((unsigned int *)t109);
    t115 = *((unsigned int *)t110);
    t116 = (t114 ^ t115);
    t117 = (t113 | t116);
    t118 = *((unsigned int *)t109);
    t119 = *((unsigned int *)t110);
    t120 = (t118 | t119);
    t121 = (~(t120));
    t122 = (t117 & t121);
    if (t122 != 0)
        goto LAB55;

LAB52:    if (t120 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t108) = 1;

LAB55:    memset(t124, 0, 8);
    t125 = (t108 + 4);
    t126 = *((unsigned int *)t125);
    t127 = (~(t126));
    t128 = *((unsigned int *)t108);
    t129 = (t128 & t127);
    t130 = (t129 & 1U);
    if (t130 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t125) != 0)
        goto LAB58;

LAB59:    t133 = *((unsigned int *)t92);
    t134 = *((unsigned int *)t124);
    t135 = (t133 & t134);
    *((unsigned int *)t132) = t135;
    t136 = (t92 + 4);
    t137 = (t124 + 4);
    t138 = (t132 + 4);
    t139 = *((unsigned int *)t136);
    t140 = *((unsigned int *)t137);
    t141 = (t139 | t140);
    *((unsigned int *)t138) = t141;
    t142 = *((unsigned int *)t138);
    t143 = (t142 != 0);
    if (t143 == 1)
        goto LAB60;

LAB61:
LAB62:    goto LAB51;

LAB54:    t123 = (t108 + 4);
    *((unsigned int *)t108) = 1;
    *((unsigned int *)t123) = 1;
    goto LAB55;

LAB56:    *((unsigned int *)t124) = 1;
    goto LAB59;

LAB58:    t131 = (t124 + 4);
    *((unsigned int *)t124) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB59;

LAB60:    t144 = *((unsigned int *)t132);
    t145 = *((unsigned int *)t138);
    *((unsigned int *)t132) = (t144 | t145);
    t146 = (t92 + 4);
    t147 = (t124 + 4);
    t148 = *((unsigned int *)t92);
    t149 = (~(t148));
    t150 = *((unsigned int *)t146);
    t151 = (~(t150));
    t152 = *((unsigned int *)t124);
    t153 = (~(t152));
    t154 = *((unsigned int *)t147);
    t155 = (~(t154));
    t156 = (t149 & t151);
    t157 = (t153 & t155);
    t158 = (~(t156));
    t159 = (~(t157));
    t160 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t160 & t158);
    t161 = *((unsigned int *)t138);
    *((unsigned int *)t138) = (t161 & t159);
    t162 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t162 & t158);
    t163 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t163 & t159);
    goto LAB62;

LAB63:    *((unsigned int *)t164) = 1;
    goto LAB66;

LAB65:    t171 = (t164 + 4);
    *((unsigned int *)t164) = 1;
    *((unsigned int *)t171) = 1;
    goto LAB66;

LAB67:    t176 = (t0 + 2888);
    t177 = (t176 + 56U);
    t178 = *((char **)t177);
    t179 = ((char*)((ng2)));
    memset(t180, 0, 8);
    t181 = (t178 + 4);
    t182 = (t179 + 4);
    t183 = *((unsigned int *)t178);
    t184 = *((unsigned int *)t179);
    t185 = (t183 ^ t184);
    t186 = *((unsigned int *)t181);
    t187 = *((unsigned int *)t182);
    t188 = (t186 ^ t187);
    t189 = (t185 | t188);
    t190 = *((unsigned int *)t181);
    t191 = *((unsigned int *)t182);
    t192 = (t190 | t191);
    t193 = (~(t192));
    t194 = (t189 & t193);
    if (t194 != 0)
        goto LAB73;

LAB70:    if (t192 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t180) = 1;

LAB73:    memset(t196, 0, 8);
    t197 = (t180 + 4);
    t198 = *((unsigned int *)t197);
    t199 = (~(t198));
    t200 = *((unsigned int *)t180);
    t201 = (t200 & t199);
    t202 = (t201 & 1U);
    if (t202 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t197) != 0)
        goto LAB76;

LAB77:    t205 = *((unsigned int *)t164);
    t206 = *((unsigned int *)t196);
    t207 = (t205 & t206);
    *((unsigned int *)t204) = t207;
    t208 = (t164 + 4);
    t209 = (t196 + 4);
    t210 = (t204 + 4);
    t211 = *((unsigned int *)t208);
    t212 = *((unsigned int *)t209);
    t213 = (t211 | t212);
    *((unsigned int *)t210) = t213;
    t214 = *((unsigned int *)t210);
    t215 = (t214 != 0);
    if (t215 == 1)
        goto LAB78;

LAB79:
LAB80:    goto LAB69;

LAB72:    t195 = (t180 + 4);
    *((unsigned int *)t180) = 1;
    *((unsigned int *)t195) = 1;
    goto LAB73;

LAB74:    *((unsigned int *)t196) = 1;
    goto LAB77;

LAB76:    t203 = (t196 + 4);
    *((unsigned int *)t196) = 1;
    *((unsigned int *)t203) = 1;
    goto LAB77;

LAB78:    t216 = *((unsigned int *)t204);
    t217 = *((unsigned int *)t210);
    *((unsigned int *)t204) = (t216 | t217);
    t218 = (t164 + 4);
    t219 = (t196 + 4);
    t220 = *((unsigned int *)t164);
    t221 = (~(t220));
    t222 = *((unsigned int *)t218);
    t223 = (~(t222));
    t224 = *((unsigned int *)t196);
    t225 = (~(t224));
    t226 = *((unsigned int *)t219);
    t227 = (~(t226));
    t228 = (t221 & t223);
    t229 = (t225 & t227);
    t230 = (~(t228));
    t231 = (~(t229));
    t232 = *((unsigned int *)t210);
    *((unsigned int *)t210) = (t232 & t230);
    t233 = *((unsigned int *)t210);
    *((unsigned int *)t210) = (t233 & t231);
    t234 = *((unsigned int *)t204);
    *((unsigned int *)t204) = (t234 & t230);
    t235 = *((unsigned int *)t204);
    *((unsigned int *)t204) = (t235 & t231);
    goto LAB80;

LAB81:    *((unsigned int *)t236) = 1;
    goto LAB84;

LAB83:    t243 = (t236 + 4);
    *((unsigned int *)t236) = 1;
    *((unsigned int *)t243) = 1;
    goto LAB84;

LAB85:    t248 = (t0 + 2728);
    t249 = (t248 + 56U);
    t250 = *((char **)t249);
    t251 = ((char*)((ng3)));
    memset(t252, 0, 8);
    t253 = (t250 + 4);
    t254 = (t251 + 4);
    t255 = *((unsigned int *)t250);
    t256 = *((unsigned int *)t251);
    t257 = (t255 ^ t256);
    t258 = *((unsigned int *)t253);
    t259 = *((unsigned int *)t254);
    t260 = (t258 ^ t259);
    t261 = (t257 | t260);
    t262 = *((unsigned int *)t253);
    t263 = *((unsigned int *)t254);
    t264 = (t262 | t263);
    t265 = (~(t264));
    t266 = (t261 & t265);
    if (t266 != 0)
        goto LAB91;

LAB88:    if (t264 != 0)
        goto LAB90;

LAB89:    *((unsigned int *)t252) = 1;

LAB91:    memset(t268, 0, 8);
    t269 = (t252 + 4);
    t270 = *((unsigned int *)t269);
    t271 = (~(t270));
    t272 = *((unsigned int *)t252);
    t273 = (t272 & t271);
    t274 = (t273 & 1U);
    if (t274 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t269) != 0)
        goto LAB94;

LAB95:    t277 = *((unsigned int *)t236);
    t278 = *((unsigned int *)t268);
    t279 = (t277 & t278);
    *((unsigned int *)t276) = t279;
    t280 = (t236 + 4);
    t281 = (t268 + 4);
    t282 = (t276 + 4);
    t283 = *((unsigned int *)t280);
    t284 = *((unsigned int *)t281);
    t285 = (t283 | t284);
    *((unsigned int *)t282) = t285;
    t286 = *((unsigned int *)t282);
    t287 = (t286 != 0);
    if (t287 == 1)
        goto LAB96;

LAB97:
LAB98:    goto LAB87;

LAB90:    t267 = (t252 + 4);
    *((unsigned int *)t252) = 1;
    *((unsigned int *)t267) = 1;
    goto LAB91;

LAB92:    *((unsigned int *)t268) = 1;
    goto LAB95;

LAB94:    t275 = (t268 + 4);
    *((unsigned int *)t268) = 1;
    *((unsigned int *)t275) = 1;
    goto LAB95;

LAB96:    t288 = *((unsigned int *)t276);
    t289 = *((unsigned int *)t282);
    *((unsigned int *)t276) = (t288 | t289);
    t290 = (t236 + 4);
    t291 = (t268 + 4);
    t292 = *((unsigned int *)t236);
    t293 = (~(t292));
    t294 = *((unsigned int *)t290);
    t295 = (~(t294));
    t296 = *((unsigned int *)t268);
    t297 = (~(t296));
    t298 = *((unsigned int *)t291);
    t299 = (~(t298));
    t300 = (t293 & t295);
    t301 = (t297 & t299);
    t302 = (~(t300));
    t303 = (~(t301));
    t304 = *((unsigned int *)t282);
    *((unsigned int *)t282) = (t304 & t302);
    t305 = *((unsigned int *)t282);
    *((unsigned int *)t282) = (t305 & t303);
    t306 = *((unsigned int *)t276);
    *((unsigned int *)t276) = (t306 & t302);
    t307 = *((unsigned int *)t276);
    *((unsigned int *)t276) = (t307 & t303);
    goto LAB98;

LAB99:    xsi_set_current_line(54, ng0);
    t314 = ((char*)((ng4)));
    t315 = (t0 + 3688);
    xsi_vlogvar_assign_value(t315, t314, 0, 0, 1);
    goto LAB101;

LAB104:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(56, ng0);
    t21 = (t0 + 2728);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t32 = ((char*)((ng4)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 32, t23, 4, t32, 32);
    t39 = (t0 + 2728);
    xsi_vlogvar_assign_value(t39, t33, 0, 0, 4);
    goto LAB108;

LAB111:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB112;

LAB113:    xsi_set_current_line(58, ng0);

LAB116:    xsi_set_current_line(59, ng0);
    t21 = (t0 + 2888);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t32 = ((char*)((ng4)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 32, t23, 4, t32, 32);
    t39 = (t0 + 2888);
    xsi_vlogvar_assign_value(t39, t33, 0, 0, 4);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB115;

LAB119:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB120;

LAB121:    xsi_set_current_line(63, ng0);

LAB124:    xsi_set_current_line(64, ng0);
    t21 = (t0 + 2408);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t32 = ((char*)((ng4)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 32, t23, 4, t32, 32);
    t39 = (t0 + 2408);
    xsi_vlogvar_assign_value(t39, t33, 0, 0, 4);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB123;

LAB127:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB128;

LAB129:    xsi_set_current_line(68, ng0);

LAB132:    xsi_set_current_line(69, ng0);
    t21 = (t0 + 2568);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t32 = ((char*)((ng4)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 32, t23, 4, t32, 32);
    t39 = (t0 + 2568);
    xsi_vlogvar_assign_value(t39, t33, 0, 0, 4);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB131;

LAB133:    *((unsigned int *)t11) = 1;
    goto LAB136;

LAB135:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB136;

LAB137:    t14 = (t0 + 2008U);
    t15 = *((char **)t14);
    memset(t33, 0, 8);
    t14 = (t15 + 4);
    t19 = *((unsigned int *)t14);
    t20 = (~(t19));
    t24 = *((unsigned int *)t15);
    t25 = (t24 & t20);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB140;

LAB141:    if (*((unsigned int *)t14) != 0)
        goto LAB142;

LAB143:    t27 = *((unsigned int *)t11);
    t28 = *((unsigned int *)t33);
    t29 = (t27 & t28);
    *((unsigned int *)t34) = t29;
    t22 = (t11 + 4);
    t23 = (t33 + 4);
    t32 = (t34 + 4);
    t30 = *((unsigned int *)t22);
    t31 = *((unsigned int *)t23);
    t36 = (t30 | t31);
    *((unsigned int *)t32) = t36;
    t37 = *((unsigned int *)t32);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB144;

LAB145:
LAB146:    goto LAB139;

LAB140:    *((unsigned int *)t33) = 1;
    goto LAB143;

LAB142:    t21 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB143;

LAB144:    t41 = *((unsigned int *)t34);
    t42 = *((unsigned int *)t32);
    *((unsigned int *)t34) = (t41 | t42);
    t39 = (t11 + 4);
    t40 = (t33 + 4);
    t43 = *((unsigned int *)t11);
    t44 = (~(t43));
    t45 = *((unsigned int *)t39);
    t46 = (~(t45));
    t47 = *((unsigned int *)t33);
    t50 = (~(t47));
    t51 = *((unsigned int *)t40);
    t52 = (~(t51));
    t58 = (t44 & t46);
    t59 = (t50 & t52);
    t53 = (~(t58));
    t54 = (~(t59));
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t56 & t54);
    t57 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t57 & t53);
    t60 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t60 & t54);
    goto LAB146;

LAB147:    xsi_set_current_line(74, ng0);

LAB150:    xsi_set_current_line(75, ng0);
    t49 = (t0 + 1848U);
    t66 = *((char **)t49);
    t49 = ((char*)((ng1)));
    memset(t35, 0, 8);
    t72 = (t66 + 4);
    t73 = (t49 + 4);
    t67 = *((unsigned int *)t66);
    t68 = *((unsigned int *)t49);
    t69 = (t67 ^ t68);
    t70 = *((unsigned int *)t72);
    t71 = *((unsigned int *)t73);
    t79 = (t70 ^ t71);
    t80 = (t69 | t79);
    t81 = *((unsigned int *)t72);
    t82 = *((unsigned int *)t73);
    t83 = (t81 | t82);
    t84 = (~(t83));
    t85 = (t80 & t84);
    if (t85 != 0)
        goto LAB154;

LAB151:    if (t83 != 0)
        goto LAB153;

LAB152:    *((unsigned int *)t35) = 1;

LAB154:    t75 = (t35 + 4);
    t86 = *((unsigned int *)t75);
    t87 = (~(t86));
    t88 = *((unsigned int *)t35);
    t89 = (t88 & t87);
    t90 = (t89 != 0);
    if (t90 > 0)
        goto LAB155;

LAB156:    xsi_set_current_line(87, ng0);

LAB175:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 4, t5, 32);
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t11, 0, 8);
    t12 = (t4 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB177;

LAB176:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB177;

LAB180:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB179;

LAB178:    *((unsigned int *)t11) = 1;

LAB179:    t15 = (t11 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB181;

LAB182:
LAB183:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t11, 0, 8);
    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t13);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t13);
    t20 = (t18 | t19);
    t24 = (~(t20));
    t25 = (t17 & t24);
    if (t25 != 0)
        goto LAB188;

LAB185:    if (t20 != 0)
        goto LAB187;

LAB186:    *((unsigned int *)t11) = 1;

LAB188:    t15 = (t11 + 4);
    t26 = *((unsigned int *)t15);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB189;

LAB190:
LAB191:
LAB157:    goto LAB149;

LAB153:    t74 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB154;

LAB155:    xsi_set_current_line(76, ng0);

LAB158:    xsi_set_current_line(77, ng0);
    t77 = (t0 + 2408);
    t78 = (t77 + 56U);
    t91 = *((char **)t78);
    t93 = ((char*)((ng7)));
    memset(t76, 0, 8);
    xsi_vlog_unsigned_add(t76, 32, t91, 4, t93, 32);
    t99 = (t0 + 2408);
    xsi_vlogvar_assign_value(t99, t76, 0, 0, 4);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t11, 0, 8);
    t12 = (t4 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB160;

LAB159:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB160;

LAB163:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB162;

LAB161:    *((unsigned int *)t11) = 1;

LAB162:    t15 = (t11 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t11);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB164;

LAB165:
LAB166:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t11, 0, 8);
    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t13);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t13);
    t20 = (t18 | t19);
    t24 = (~(t20));
    t25 = (t17 & t24);
    if (t25 != 0)
        goto LAB171;

LAB168:    if (t20 != 0)
        goto LAB170;

LAB169:    *((unsigned int *)t11) = 1;

LAB171:    t15 = (t11 + 4);
    t26 = *((unsigned int *)t15);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB172;

LAB173:
LAB174:    goto LAB157;

LAB160:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB162;

LAB164:    xsi_set_current_line(79, ng0);

LAB167:    xsi_set_current_line(80, ng0);
    t21 = (t0 + 2568);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t32 = ((char*)((ng4)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 32, t23, 4, t32, 32);
    t39 = (t0 + 2568);
    xsi_vlogvar_assign_value(t39, t33, 0, 0, 4);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_mod(t11, 32, t4, 4, t5, 32);
    t12 = (t0 + 2408);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    goto LAB166;

LAB170:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB171;

LAB172:    xsi_set_current_line(84, ng0);
    t21 = ((char*)((ng1)));
    t22 = (t0 + 2568);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 4);
    goto LAB174;

LAB177:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB179;

LAB181:    xsi_set_current_line(90, ng0);

LAB184:    xsi_set_current_line(91, ng0);
    t21 = (t0 + 2888);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t32 = ((char*)((ng4)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 32, t23, 4, t32, 32);
    t39 = (t0 + 2888);
    xsi_vlogvar_assign_value(t39, t33, 0, 0, 4);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_mod(t11, 32, t4, 4, t5, 32);
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    goto LAB183;

LAB187:    t14 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB188;

LAB189:    xsi_set_current_line(95, ng0);
    t21 = ((char*)((ng1)));
    t22 = (t0 + 2888);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 4);
    goto LAB191;

}

static void NetReassign_49_1(char *t0)
{
    char t4[8];
    char t7[8];
    char t23[8];
    char t38[8];
    char t47[8];
    char t55[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;

LAB0:    t1 = (t0 + 4856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t3 = 0;
    t2 = (t0 + 3048);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 1);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t8) = t15;
    memset(t4, 0, 8);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t7);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t16) == 0)
        goto LAB4;

LAB6:    t22 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;

LAB7:    memset(t23, 0, 8);
    t24 = (t4 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    memcpy(t55, t23, 8);

LAB14:    t87 = (t0 + 7220);
    if (*((int *)t87) > 0)
        goto LAB22;

LAB23:    if (t3 > 0)
        goto LAB24;

LAB25:    t90 = (t0 + 5440);
    *((int *)t90) = 0;

LAB26:
LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t23) = 1;
    goto LAB11;

LAB10:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = (t0 + 3048);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t38, 0, 8);
    t39 = (t38 + 4);
    t40 = (t37 + 4);
    t41 = *((unsigned int *)t37);
    t42 = (t41 >> 0);
    t43 = (t42 & 1);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 >> 0);
    t46 = (t45 & 1);
    *((unsigned int *)t39) = t46;
    memset(t47, 0, 8);
    t48 = (t38 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t38);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t48) != 0)
        goto LAB17;

LAB18:    t56 = *((unsigned int *)t23);
    t57 = *((unsigned int *)t47);
    t58 = (t56 & t57);
    *((unsigned int *)t55) = t58;
    t59 = (t23 + 4);
    t60 = (t47 + 4);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t60);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB14;

LAB15:    *((unsigned int *)t47) = 1;
    goto LAB18;

LAB17:    t54 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB18;

LAB19:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t55) = (t67 | t68);
    t69 = (t23 + 4);
    t70 = (t47 + 4);
    t71 = *((unsigned int *)t23);
    t72 = (~(t71));
    t73 = *((unsigned int *)t69);
    t74 = (~(t73));
    t75 = *((unsigned int *)t47);
    t76 = (~(t75));
    t77 = *((unsigned int *)t70);
    t78 = (~(t77));
    t79 = (t72 & t74);
    t80 = (t76 & t78);
    t81 = (~(t79));
    t82 = (~(t80));
    t83 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t83 & t81);
    t84 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t84 & t82);
    t85 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t85 & t81);
    t86 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t86 & t82);
    goto LAB21;

LAB22:    t88 = (t0 + 3368);
    xsi_vlogvar_assignassignvalue(t88, t55, 0, 0, 0, 1, ((int*)(t87)));
    t3 = 1;
    goto LAB23;

LAB24:    t89 = (t0 + 5440);
    *((int *)t89) = 1;
    goto LAB26;

}

static void NetReassign_50_2(char *t0)
{
    char t4[8];
    char t7[8];
    char t23[8];
    char t38[8];
    char t47[8];
    char t55[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;

LAB0:    t1 = (t0 + 5104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t3 = 0;
    t2 = (t0 + 3208);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 1);
    t12 = (t11 & 1);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t8) = t15;
    memset(t4, 0, 8);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t7);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t16) == 0)
        goto LAB4;

LAB6:    t22 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;

LAB7:    memset(t23, 0, 8);
    t24 = (t4 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    memcpy(t55, t23, 8);

LAB14:    t87 = (t0 + 7224);
    if (*((int *)t87) > 0)
        goto LAB22;

LAB23:    if (t3 > 0)
        goto LAB24;

LAB25:    t90 = (t0 + 5456);
    *((int *)t90) = 0;

LAB26:
LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t23) = 1;
    goto LAB11;

LAB10:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = (t0 + 3208);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t38, 0, 8);
    t39 = (t38 + 4);
    t40 = (t37 + 4);
    t41 = *((unsigned int *)t37);
    t42 = (t41 >> 0);
    t43 = (t42 & 1);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 >> 0);
    t46 = (t45 & 1);
    *((unsigned int *)t39) = t46;
    memset(t47, 0, 8);
    t48 = (t38 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t38);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t48) != 0)
        goto LAB17;

LAB18:    t56 = *((unsigned int *)t23);
    t57 = *((unsigned int *)t47);
    t58 = (t56 & t57);
    *((unsigned int *)t55) = t58;
    t59 = (t23 + 4);
    t60 = (t47 + 4);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t60);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB14;

LAB15:    *((unsigned int *)t47) = 1;
    goto LAB18;

LAB17:    t54 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB18;

LAB19:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t55) = (t67 | t68);
    t69 = (t23 + 4);
    t70 = (t47 + 4);
    t71 = *((unsigned int *)t23);
    t72 = (~(t71));
    t73 = *((unsigned int *)t69);
    t74 = (~(t73));
    t75 = *((unsigned int *)t47);
    t76 = (~(t75));
    t77 = *((unsigned int *)t70);
    t78 = (~(t77));
    t79 = (t72 & t74);
    t80 = (t76 & t78);
    t81 = (~(t79));
    t82 = (~(t80));
    t83 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t83 & t81);
    t84 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t84 & t82);
    t85 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t85 & t81);
    t86 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t86 & t82);
    goto LAB21;

LAB22:    t88 = (t0 + 3528);
    xsi_vlogvar_assignassignvalue(t88, t55, 0, 0, 0, 1, ((int*)(t87)));
    t3 = 1;
    goto LAB23;

LAB24:    t89 = (t0 + 5456);
    *((int *)t89) = 1;
    goto LAB26;

}


extern void work_m_00000000001478836286_2582214024_init()
{
	static char *pe[] = {(void *)Always_33_0,(void *)NetReassign_49_1,(void *)NetReassign_50_2};
	xsi_register_didat("work_m_00000000001478836286_2582214024", "isim/counter_tb_isim_beh.exe.sim/work/m_00000000001478836286_2582214024.didat");
	xsi_register_executes(pe);
}
