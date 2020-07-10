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
static int ng1[] = {0, 0};
static int ng2[] = {4, 0};
static const char *ng3 = "Current prog is ";
static const char *ng4 = "PC_in_line ";



static void Initial_79_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(79, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 6728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Cont_80_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 8048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 6728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 464162960);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t6, 8);
    xsi_driver_vfirst_trans(t7, 0, 31);
    t12 = (t0 + 8864);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Cont_81_2(char *t0)
{
    char t6[8];
    char t9[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    t1 = (t0 + 8296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 6728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 4088U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_multiply(t9, 32, t8, 32, t7, 32);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t6, 32, t9, 32);
    t11 = (t0 + 479985552);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t10, 8);
    xsi_driver_vfirst_trans(t11, 0, 31);
    t16 = (t0 + 8880);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_144_3(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
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

LAB0:    t1 = (t0 + 8544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 8896);
    *((int *)t2) = 1;
    t3 = (t0 + 8576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(144, ng0);

LAB5:    xsi_set_current_line(145, ng0);
    t4 = (t0 + 6728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng3, 2, t0, (char)118, t6, 32);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 26);
    *((unsigned int *)t7) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 26);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);
    t5 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t5, t7, 0, 0, 6, 0LL);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 26);
    *((unsigned int *)t7) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 26);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);
    t5 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t5, t7, 0, 0, 6, 0LL);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 4248U);
    t4 = *((char **)t2);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t4);
    t10 = (t8 & t9);
    *((unsigned int *)t7) = t10;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t7 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t5);
    t13 = (t11 | t12);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t6);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB6;

LAB7:
LAB8:    t36 = (t0 + 6408);
    xsi_vlogvar_wait_assign_value(t36, t7, 0, 0, 1, 0LL);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 4408U);
    t3 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng4, 2, t0, (char)118, t3, 32);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 4408U);
    t3 = *((char **)t2);
    t2 = (t0 + 6728);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 6728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    goto LAB2;

LAB6:    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t7) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t32 & t30);
    t33 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t33 & t31);
    t34 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t34 & t30);
    t35 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t35 & t31);
    goto LAB8;

}


extern void work_m_08481775191292377754_1040310148_init()
{
	static char *pe[] = {(void *)Initial_79_0,(void *)Cont_80_1,(void *)Cont_81_2,(void *)Always_144_3};
	xsi_register_didat("work_m_08481775191292377754_1040310148", "isim/cs161_processor_testbench_isim_beh.exe.sim/work/m_08481775191292377754_1040310148.didat");
	xsi_register_executes(pe);
}
