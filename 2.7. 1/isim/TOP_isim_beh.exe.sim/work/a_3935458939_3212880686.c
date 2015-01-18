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
static const char *ng0 = "C:/Users/Alex/Desktop/2.5.1/Conv_8.vhd";
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

LAB0:    xsi_set_current_line(54, ng0);
    t1 = xsi_get_transient_memory(20U);
    memset(t1, 0, 20U);
    t2 = t1;
    memset(t2, (unsigned char)2, 20U);
    t3 = (t0 + 2128U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 20U);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t5 = (7 - 6);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t3 = (t0 + 2248U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 7U);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t1 = (t0 + 2128U);
    t3 = *((char **)t1);
    t5 = (19 - 9);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t3 + t7);
    memcpy(t1, t2, 7U);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 6171);
    *((int *)t1) = 0;
    t2 = (t0 + 6175);
    *((int *)t2) = 3;
    t8 = 0;
    t9 = 3;

LAB2:    if (t8 <= t9)
        goto LAB3;

LAB5:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t5 = (19 - 17);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t3 = (t0 + 3896);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    memcpy(t17, t1, 11U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t5 = (19 - 18);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t3 = (t0 + 3960);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    memcpy(t17, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t5 = (19 - 14);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t3 = (t0 + 4024);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    memcpy(t17, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t5 = (19 - 10);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t3 = (t0 + 4088);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    memcpy(t17, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    t1 = (t0 + 3800);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 2128U);
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
LAB7:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2128U);
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
LAB10:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2128U);
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
LAB13:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t5 = (19 - 16);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t3 = xsi_get_transient_memory(17U);
    memcpy(t3, t1, 17U);
    t4 = (t0 + 2128U);
    t11 = *((char **)t4);
    t14 = (19 - 17);
    t18 = (t14 * 1U);
    t19 = (0 + t18);
    t4 = (t11 + t19);
    memcpy(t4, t3, 17U);

LAB4:    t1 = (t0 + 6171);
    t8 = *((int *)t1);
    t2 = (t0 + 6175);
    t9 = *((int *)t2);
    if (t8 == t9)
        goto LAB5;

LAB15:    t13 = (t8 + 1);
    t8 = t13;
    t3 = (t0 + 6171);
    *((int *)t3) = t8;
    goto LAB2;

LAB6:    xsi_set_current_line(66, ng0);
    t12 = (t0 + 2128U);
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
    t25 = (t0 + 2128U);
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

LAB9:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 2128U);
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
    t21 = (t0 + 2128U);
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

LAB12:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 2128U);
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
    t21 = (t0 + 2128U);
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

static void work_a_3935458939_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(92, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (7 - 7);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 4152);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 3816);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3935458939_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3935458939_3212880686_p_0,(void *)work_a_3935458939_3212880686_p_1};
	xsi_register_didat("work_a_3935458939_3212880686", "isim/TOP_isim_beh.exe.sim/work/a_3935458939_3212880686.didat");
	xsi_register_executes(pe);
}
