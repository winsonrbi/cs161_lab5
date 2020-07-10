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
static const char *ng0 = "/home/csmajs/wbi002/cs161l_lab5/datapath.v";
static int ng1[] = {4, 0};
static const char *ng2 = "";



static void Always_141_0(char *t0)
{
    char t8[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
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
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 7960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 8280);
    *((int *)t2) = 1;
    t3 = (t0 + 7992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(141, ng0);

LAB5:    xsi_set_current_line(142, ng0);
    t4 = (t0 + 6888);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 32, t6, 32, t7, 32);
    t9 = (t0 + 7048);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 26);
    *((unsigned int *)t8) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 26);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 63U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 63U);
    t5 = (t0 + 5128);
    xsi_vlogvar_assign_value(t5, t8, 0, 0, 6);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 26);
    *((unsigned int *)t8) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 26);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 63U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 63U);
    xsi_vlogfile_write(1, 0, 0, ng2, 2, t0, (char)118, t8, 6);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 26);
    *((unsigned int *)t8) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 26);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t14 & 63U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 63U);
    t5 = (t0 + 5448);
    xsi_vlogvar_assign_value(t5, t8, 0, 0, 6);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 4248U);
    t4 = *((char **)t2);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t4);
    t12 = (t10 & t11);
    *((unsigned int *)t8) = t12;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t8 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t5);
    t15 = (t13 | t14);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t6);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB6;

LAB7:
LAB8:    t36 = (t0 + 6568);
    xsi_vlogvar_assign_value(t36, t8, 0, 0, 1);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 7048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4088U);
    t6 = *((char **)t5);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_multiply(t8, 32, t6, 32, t5, 32);
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 32, t4, 32, t8, 32);
    t7 = (t0 + 6728);
    xsi_vlogvar_assign_value(t7, t37, 0, 0, 32);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 4568U);
    t3 = *((char **)t2);
    t2 = (t0 + 6888);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    goto LAB2;

LAB6:    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t8) = (t18 | t19);
    t7 = (t3 + 4);
    t9 = (t4 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t7);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t32 & t30);
    t33 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t33 & t31);
    t34 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t34 & t30);
    t35 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t35 & t31);
    goto LAB8;

}


extern void work_m_02997609417078200504_1040310148_init()
{
	static char *pe[] = {(void *)Always_141_0};
	xsi_register_didat("work_m_02997609417078200504_1040310148", "isim/cs161_processor_isim_beh.exe.sim/work/m_02997609417078200504_1040310148.didat");
	xsi_register_executes(pe);
}
