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
static const char *ng0 = "C:/Users/David/Desktop/2.3.1/Conv_8_tb.vhd";



static void work_a_3332848918_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3200);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3200);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3332848918_2372691052_p_1(char *t0)
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

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3448);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2288U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 3448);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 6344);
    t6 = (t0 + 4088);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2408U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (20 * t3);
    t2 = (t0 + 3448);
    xsi_process_wait(t2, t5);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 0)
        goto LAB16;

LAB17:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 6357);
    t6 = (t0 + 4088);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2408U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (20 * t3);
    t2 = (t0 + 3448);
    xsi_process_wait(t2, t5);

LAB20:    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    t2 = (t0 + 6352);
    xsi_report(t2, 5U, (unsigned char)3);
    goto LAB17;

LAB18:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 6365);
    t11 = 1;
    if (11U == 11U)
        goto LAB24;

LAB25:    t11 = 0;

LAB26:    if (t11 == 0)
        goto LAB22;

LAB23:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t11 = *((unsigned char *)t4);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 0)
        goto LAB30;

LAB31:    xsi_set_current_line(118, ng0);
    if ((unsigned char)0 == 0)
        goto LAB32;

LAB33:    xsi_set_current_line(122, ng0);

LAB36:    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB19:    goto LAB18;

LAB21:    goto LAB19;

LAB22:    t9 = (t0 + 6376);
    xsi_report(t9, 5U, (unsigned char)3);
    goto LAB23;

LAB24:    t13 = 0;

LAB27:    if (t13 < 11U)
        goto LAB28;
    else
        goto LAB26;

LAB28:    t7 = (t4 + t13);
    t8 = (t2 + t13);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB25;

LAB29:    t13 = (t13 + 1);
    goto LAB27;

LAB30:    t2 = (t0 + 6381);
    xsi_report(t2, 5U, (unsigned char)3);
    goto LAB31;

LAB32:    t2 = (t0 + 6386);
    xsi_report(t2, 11U, (unsigned char)3);
    goto LAB33;

LAB34:    goto LAB2;

LAB35:    goto LAB34;

LAB37:    goto LAB35;

}


extern void work_a_3332848918_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3332848918_2372691052_p_0,(void *)work_a_3332848918_2372691052_p_1};
	xsi_register_didat("work_a_3332848918_2372691052", "isim/Conv_8_tb_isim_beh.exe.sim/work/a_3332848918_2372691052.didat");
	xsi_register_executes(pe);
}
