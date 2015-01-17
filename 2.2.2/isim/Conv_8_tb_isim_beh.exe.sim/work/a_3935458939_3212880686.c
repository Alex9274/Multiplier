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
static const char *ng0 = "C:/Users/David/Desktop/2.2.2/Conv_8.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_2546454082_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_3935458939_3212880686_p_0(char *t0)
{
    char t10[16];
    char t16[16];
    char t20[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    int t8;
    int t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned char t15;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
    char *t22;
    int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;

LAB0:    xsi_set_current_line(51, ng0);
    t1 = xsi_get_transient_memory(20U);
    memset(t1, 0, 20U);
    t2 = t1;
    memset(t2, (unsigned char)2, 20U);
    t3 = (t0 + 1968U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 20U);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t5 = (7 - 6);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t3 = (t0 + 2088U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 7U);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2088U);
    t2 = *((char **)t1);
    t1 = (t0 + 1968U);
    t3 = *((char **)t1);
    t5 = (19 - 9);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t3 + t7);
    memcpy(t1, t2, 7U);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 5599);
    *((int *)t1) = 0;
    t2 = (t0 + 5603);
    *((int *)t2) = 3;
    t8 = 0;
    t9 = 3;

LAB2:    if (t8 <= t9)
        goto LAB3;

LAB5:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t5 = (19 - 17);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t3 = (t0 + 3472);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    memcpy(t17, t1, 11U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t5 = (19 - 17);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t3 = (t0 + 3536);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    memcpy(t17, t1, 3U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t5 = (19 - 14);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t3 = (t0 + 3600);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    memcpy(t17, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t5 = (19 - 10);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t3 = (t0 + 3664);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    memcpy(t17, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    t1 = (t0 + 3392);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1968U);
    t4 = *((char **)t3);
    t5 = (19 - 10);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t3 = (t4 + t7);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 10;
    t12 = (t11 + 4U);
    *((int *)t12) = 7;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t13 = (7 - 10);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t15 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t3, t10, 4);
    if (t15 != 0)
        goto LAB6;

LAB8:
LAB7:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t5 = (19 - 14);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t3 = (t10 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 14;
    t4 = (t3 + 4U);
    *((int *)t4) = 11;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t13 = (11 - 14);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t14;
    t15 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t10, 4);
    if (t15 != 0)
        goto LAB9;

LAB11:
LAB10:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t5 = (19 - 17);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t3 = (t10 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 17;
    t4 = (t3 + 4U);
    *((int *)t4) = 15;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t13 = (15 - 17);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t14;
    t15 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t10, 4);
    if (t15 != 0)
        goto LAB12;

LAB14:
LAB13:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1968U);
    t2 = *((char **)t1);
    t5 = (19 - 16);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t3 = xsi_get_transient_memory(17U);
    memcpy(t3, t1, 17U);
    t4 = (t0 + 1968U);
    t11 = *((char **)t4);
    t14 = (19 - 17);
    t18 = (t14 * 1U);
    t19 = (0 + t18);
    t4 = (t11 + t19);
    memcpy(t4, t3, 17U);

LAB4:    t1 = (t0 + 5599);
    t8 = *((int *)t1);
    t2 = (t0 + 5603);
    t9 = *((int *)t2);
    if (t8 == t9)
        goto LAB5;

LAB15:    t13 = (t8 + 1);
    t8 = t13;
    t3 = (t0 + 5599);
    *((int *)t3) = t8;
    goto LAB2;

LAB6:    xsi_set_current_line(63, ng0);
    t12 = (t0 + 1968U);
    t17 = *((char **)t12);
    t14 = (19 - 10);
    t18 = (t14 * 1U);
    t19 = (0 + t18);
    t12 = (t17 + t19);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 10;
    t22 = (t21 + 4U);
    *((int *)t22) = 7;
    t22 = (t21 + 8U);
    *((int *)t22) = -1;
    t23 = (7 - 10);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t24;
    t22 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t16, t12, t20, 3);
    t25 = (t0 + 1968U);
    t26 = *((char **)t25);
    t24 = (19 - 10);
    t27 = (t24 * 1U);
    t28 = (0 + t27);
    t25 = (t26 + t28);
    t29 = (t16 + 12U);
    t30 = *((unsigned int *)t29);
    t31 = (1U * t30);
    memcpy(t25, t22, t31);
    goto LAB7;

LAB9:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 1968U);
    t11 = *((char **)t4);
    t14 = (19 - 14);
    t18 = (t14 * 1U);
    t19 = (0 + t18);
    t4 = (t11 + t19);
    t12 = (t20 + 0U);
    t17 = (t12 + 0U);
    *((int *)t17) = 14;
    t17 = (t12 + 4U);
    *((int *)t17) = 11;
    t17 = (t12 + 8U);
    *((int *)t17) = -1;
    t23 = (11 - 14);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t17 = (t12 + 12U);
    *((unsigned int *)t17) = t24;
    t17 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t16, t4, t20, 3);
    t21 = (t0 + 1968U);
    t22 = *((char **)t21);
    t24 = (19 - 14);
    t27 = (t24 * 1U);
    t28 = (0 + t27);
    t21 = (t22 + t28);
    t25 = (t16 + 12U);
    t30 = *((unsigned int *)t25);
    t31 = (1U * t30);
    memcpy(t21, t17, t31);
    goto LAB10;

LAB12:    xsi_set_current_line(73, ng0);
    t4 = (t0 + 1968U);
    t11 = *((char **)t4);
    t14 = (19 - 17);
    t18 = (t14 * 1U);
    t19 = (0 + t18);
    t4 = (t11 + t19);
    t12 = (t20 + 0U);
    t17 = (t12 + 0U);
    *((int *)t17) = 17;
    t17 = (t12 + 4U);
    *((int *)t17) = 15;
    t17 = (t12 + 8U);
    *((int *)t17) = -1;
    t23 = (15 - 17);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t17 = (t12 + 12U);
    *((unsigned int *)t17) = t24;
    t17 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t16, t4, t20, 3);
    t21 = (t0 + 1968U);
    t22 = *((char **)t21);
    t24 = (19 - 17);
    t27 = (t24 * 1U);
    t28 = (0 + t27);
    t21 = (t22 + t28);
    t25 = (t16 + 12U);
    t30 = *((unsigned int *)t25);
    t31 = (1U * t30);
    memcpy(t21, t17, t31);
    goto LAB13;

}


extern void work_a_3935458939_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3935458939_3212880686_p_0};
	xsi_register_didat("work_a_3935458939_3212880686", "isim/Conv_8_tb_isim_beh.exe.sim/work/a_3935458939_3212880686.didat");
	xsi_register_executes(pe);
}
