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

/* This file is designed for use with ISim build 0xc3576ebc */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/David/Desktop/2.3.1/Conv_14_tb.vhd";



static void work_a_1965991870_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3360);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3360);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1965991870_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned int t13;

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2448U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 6588);
    t6 = (t0 + 4248);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 14U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2568U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (20 * t3);
    t2 = (t0 + 3608);
    xsi_process_wait(t2, t5);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 0)
        goto LAB16;

LAB17:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 6608);
    t11 = 1;
    if (15U == 15U)
        goto LAB20;

LAB21:    t11 = 0;

LAB22:    if (t11 == 0)
        goto LAB18;

LAB19:    xsi_set_current_line(119, ng0);
    if ((unsigned char)0 == 0)
        goto LAB26;

LAB27:    xsi_set_current_line(122, ng0);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    t2 = (t0 + 6602);
    xsi_report(t2, 6U, (unsigned char)3);
    goto LAB17;

LAB18:    t9 = (t0 + 6623);
    xsi_report(t9, 6U, (unsigned char)3);
    goto LAB19;

LAB20:    t13 = 0;

LAB23:    if (t13 < 15U)
        goto LAB24;
    else
        goto LAB22;

LAB24:    t7 = (t4 + t13);
    t8 = (t2 + t13);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB21;

LAB25:    t13 = (t13 + 1);
    goto LAB23;

LAB26:    t2 = (t0 + 6629);
    xsi_report(t2, 11U, (unsigned char)3);
    goto LAB27;

LAB28:    goto LAB2;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

}


extern void work_a_1965991870_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1965991870_2372691052_p_0,(void *)work_a_1965991870_2372691052_p_1};
	xsi_register_didat("work_a_1965991870_2372691052", "isim/Conv_14_tb_isim_beh.exe.sim/work/a_1965991870_2372691052.didat");
	xsi_register_executes(pe);
}
