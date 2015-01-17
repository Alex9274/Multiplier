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
static const char *ng0 = "D:/Program Files (x86)/Atlassian/Proyectos/Mux3/tb_Mux3.vhd";



static void work_a_3787402096_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int64 t4;
    int64 t5;

LAB0:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (t4 / 2);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t5);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t4 = *((int64 *)t3);
    t5 = (t4 / 2);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3787402096_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;

LAB0:    t1 = (t0 + 3520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2288U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3952);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(102, ng0);

LAB14:    t2 = (t0 + 3840);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t12 = (t0 + 3840);
    *((int *)t12) = 0;
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t9 = *((unsigned char *)t4);
    t2 = (t0 + 1032U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t9 == t13);
    if (t14 == 0)
        goto LAB22;

LAB23:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3952);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 4016);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 6463);
    t6 = (t0 + 4080);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 2U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(110, ng0);

LAB26:    t2 = (t0 + 3856);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB13:    t4 = (t0 + 1672U);
    t6 = *((char **)t4);
    t4 = (t0 + 6452);
    t9 = 1;
    if (2U == 2U)
        goto LAB16;

LAB17:    t9 = 0;

LAB18:    if (t9 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB16:    t10 = 0;

LAB19:    if (t10 < 2U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t8 = (t6 + t10);
    t11 = (t4 + t10);
    if (*((unsigned char *)t8) != *((unsigned char *)t11))
        goto LAB17;

LAB21:    t10 = (t10 + 1);
    goto LAB19;

LAB22:    t2 = (t0 + 6454);
    xsi_report(t2, 9U, (unsigned char)3);
    goto LAB23;

LAB24:    t12 = (t0 + 3856);
    *((int *)t12) = 0;
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t9 = *((unsigned char *)t4);
    t2 = (t0 + 1032U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t9 == t13);
    if (t14 == 0)
        goto LAB34;

LAB35:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 4016);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 4144);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(117, ng0);

LAB38:    t2 = (t0 + 3872);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB25:    t4 = (t0 + 1672U);
    t6 = *((char **)t4);
    t4 = (t0 + 6465);
    t9 = 1;
    if (2U == 2U)
        goto LAB28;

LAB29:    t9 = 0;

LAB30:    if (t9 == 1)
        goto LAB24;
    else
        goto LAB26;

LAB27:    goto LAB25;

LAB28:    t10 = 0;

LAB31:    if (t10 < 2U)
        goto LAB32;
    else
        goto LAB30;

LAB32:    t8 = (t6 + t10);
    t11 = (t4 + t10);
    if (*((unsigned char *)t8) != *((unsigned char *)t11))
        goto LAB29;

LAB33:    t10 = (t10 + 1);
    goto LAB31;

LAB34:    t2 = (t0 + 6467);
    xsi_report(t2, 9U, (unsigned char)3);
    goto LAB35;

LAB36:    t12 = (t0 + 3872);
    *((int *)t12) = 0;
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t9 = *((unsigned char *)t4);
    t2 = (t0 + 1352U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t9 == t13);
    if (t14 == 0)
        goto LAB46;

LAB47:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 4144);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 4208);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t9 = *((unsigned char *)t4);
    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t9 == t13);
    if (t14 == 0)
        goto LAB48;

LAB49:    xsi_set_current_line(128, ng0);

LAB52:    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB37:    t4 = (t0 + 1672U);
    t6 = *((char **)t4);
    t4 = (t0 + 6476);
    t9 = 1;
    if (2U == 2U)
        goto LAB40;

LAB41:    t9 = 0;

LAB42:    if (t9 == 1)
        goto LAB36;
    else
        goto LAB38;

LAB39:    goto LAB37;

LAB40:    t10 = 0;

LAB43:    if (t10 < 2U)
        goto LAB44;
    else
        goto LAB42;

LAB44:    t8 = (t6 + t10);
    t11 = (t4 + t10);
    if (*((unsigned char *)t8) != *((unsigned char *)t11))
        goto LAB41;

LAB45:    t10 = (t10 + 1);
    goto LAB43;

LAB46:    t2 = (t0 + 6478);
    xsi_report(t2, 9U, (unsigned char)3);
    goto LAB47;

LAB48:    t2 = (t0 + 6487);
    xsi_report(t2, 9U, (unsigned char)3);
    goto LAB49;

LAB50:    goto LAB2;

LAB51:    goto LAB50;

LAB53:    goto LAB51;

}


extern void work_a_3787402096_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3787402096_2372691052_p_0,(void *)work_a_3787402096_2372691052_p_1};
	xsi_register_didat("work_a_3787402096_2372691052", "isim/tb_Mux3_isim_beh.exe.sim/work/a_3787402096_2372691052.didat");
	xsi_register_executes(pe);
}
