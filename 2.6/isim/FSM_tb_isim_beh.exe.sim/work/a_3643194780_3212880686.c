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
static const char *ng0 = "C:/Users/Alex/Desktop/SED/2.5/FSM.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3643194780_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4200);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 4296);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1992U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 4296);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

}

static void work_a_3643194780_3212880686_p_1(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    char *t14;
    char *t15;
    static char *nl0[] = {&&LAB6, &&LAB7, &&LAB8, &&LAB9};
    static char *nl1[] = {&&LAB14, &&LAB15, &&LAB16, &&LAB17};

LAB0:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB10;

LAB12:
LAB11:    t1 = (t0 + 4216);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 1832U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (char *)((nl0) + t5);
    goto **((char **)t3);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(71, ng0);
    t6 = (t0 + 4360);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t6);
    goto LAB5;

LAB7:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 4360);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB8:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 4360);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB9:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 4360);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB5;

LAB10:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 1832U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (char *)((nl1) + t5);
    goto **((char **)t3);

LAB13:    goto LAB11;

LAB14:    xsi_set_current_line(84, ng0);
    t6 = (t0 + 6947);
    t8 = (t0 + 4424);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t6, 3U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 6950);
    t4 = (t0 + 4488);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB13;

LAB15:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t1 = (t0 + 6954);
    t2 = 1;
    if (2U == 2U)
        goto LAB21;

LAB22:    t2 = 0;

LAB23:    if (t2 != 0)
        goto LAB18;

LAB20:    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t1 = (t0 + 6965);
    t2 = 1;
    if (2U == 2U)
        goto LAB29;

LAB30:    t2 = 0;

LAB31:    if (t2 != 0)
        goto LAB27;

LAB28:    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t1 = (t0 + 6976);
    t2 = 1;
    if (2U == 2U)
        goto LAB37;

LAB38:    t2 = 0;

LAB39:    if (t2 != 0)
        goto LAB35;

LAB36:
LAB19:    goto LAB13;

LAB16:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 6987);
    t2 = 1;
    if (2U == 2U)
        goto LAB46;

LAB47:    t2 = 0;

LAB48:    if (t2 != 0)
        goto LAB43;

LAB45:    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 6998);
    t2 = 1;
    if (2U == 2U)
        goto LAB54;

LAB55:    t2 = 0;

LAB56:    if (t2 != 0)
        goto LAB52;

LAB53:    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 7009);
    t2 = 1;
    if (2U == 2U)
        goto LAB62;

LAB63:    t2 = 0;

LAB64:    if (t2 != 0)
        goto LAB60;

LAB61:
LAB44:    goto LAB13;

LAB17:    xsi_set_current_line(136, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 7020);
    t2 = 1;
    if (2U == 2U)
        goto LAB71;

LAB72:    t2 = 0;

LAB73:    if (t2 != 0)
        goto LAB68;

LAB70:    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 7031);
    t2 = 1;
    if (2U == 2U)
        goto LAB79;

LAB80:    t2 = 0;

LAB81:    if (t2 != 0)
        goto LAB77;

LAB78:    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 7042);
    t2 = 1;
    if (2U == 2U)
        goto LAB87;

LAB88:    t2 = 0;

LAB89:    if (t2 != 0)
        goto LAB85;

LAB86:    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 7053);
    t2 = 1;
    if (2U == 2U)
        goto LAB95;

LAB96:    t2 = 0;

LAB97:    if (t2 != 0)
        goto LAB93;

LAB94:
LAB69:    goto LAB13;

LAB18:    xsi_set_current_line(97, ng0);
    t8 = (t0 + 6956);
    t10 = (t0 + 4424);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t8, 3U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 6959);
    t4 = (t0 + 4488);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 6963);
    t4 = (t0 + 4552);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB19;

LAB21:    t13 = 0;

LAB24:    if (t13 < 2U)
        goto LAB25;
    else
        goto LAB23;

LAB25:    t6 = (t3 + t13);
    t7 = (t1 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB22;

LAB26:    t13 = (t13 + 1);
    goto LAB24;

LAB27:    xsi_set_current_line(101, ng0);
    t8 = (t0 + 6967);
    t10 = (t0 + 4424);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t8, 3U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 6970);
    t4 = (t0 + 4488);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 6974);
    t4 = (t0 + 4552);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB19;

LAB29:    t13 = 0;

LAB32:    if (t13 < 2U)
        goto LAB33;
    else
        goto LAB31;

LAB33:    t6 = (t3 + t13);
    t7 = (t1 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB30;

LAB34:    t13 = (t13 + 1);
    goto LAB32;

LAB35:    xsi_set_current_line(105, ng0);
    t8 = (t0 + 6978);
    t10 = (t0 + 4424);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t8, 3U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 6981);
    t4 = (t0 + 4488);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 6985);
    t4 = (t0 + 4552);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB19;

LAB37:    t13 = 0;

LAB40:    if (t13 < 2U)
        goto LAB41;
    else
        goto LAB39;

LAB41:    t6 = (t3 + t13);
    t7 = (t1 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB38;

LAB42:    t13 = (t13 + 1);
    goto LAB40;

LAB43:    xsi_set_current_line(117, ng0);
    t8 = (t0 + 6989);
    t10 = (t0 + 4424);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t8, 3U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 6992);
    t4 = (t0 + 4488);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(119, ng0);
    t1 = (t0 + 6996);
    t4 = (t0 + 4616);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB44;

LAB46:    t13 = 0;

LAB49:    if (t13 < 2U)
        goto LAB50;
    else
        goto LAB48;

LAB50:    t6 = (t3 + t13);
    t7 = (t1 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB47;

LAB51:    t13 = (t13 + 1);
    goto LAB49;

LAB52:    xsi_set_current_line(121, ng0);
    t8 = (t0 + 7000);
    t10 = (t0 + 4424);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t8, 3U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 7003);
    t4 = (t0 + 4488);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 7007);
    t4 = (t0 + 4616);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB44;

LAB54:    t13 = 0;

LAB57:    if (t13 < 2U)
        goto LAB58;
    else
        goto LAB56;

LAB58:    t6 = (t3 + t13);
    t7 = (t1 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB55;

LAB59:    t13 = (t13 + 1);
    goto LAB57;

LAB60:    xsi_set_current_line(125, ng0);
    t8 = (t0 + 7011);
    t10 = (t0 + 4424);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t8, 3U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 7014);
    t4 = (t0 + 4488);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 7018);
    t4 = (t0 + 4616);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB44;

LAB62:    t13 = 0;

LAB65:    if (t13 < 2U)
        goto LAB66;
    else
        goto LAB64;

LAB66:    t6 = (t3 + t13);
    t7 = (t1 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB63;

LAB67:    t13 = (t13 + 1);
    goto LAB65;

LAB68:    xsi_set_current_line(137, ng0);
    t8 = (t0 + 7022);
    t10 = (t0 + 4424);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t8, 3U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(138, ng0);
    t1 = (t0 + 7025);
    t4 = (t0 + 4488);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(139, ng0);
    t1 = (t0 + 7029);
    t4 = (t0 + 4680);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB69;

LAB71:    t13 = 0;

LAB74:    if (t13 < 2U)
        goto LAB75;
    else
        goto LAB73;

LAB75:    t6 = (t3 + t13);
    t7 = (t1 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB72;

LAB76:    t13 = (t13 + 1);
    goto LAB74;

LAB77:    xsi_set_current_line(141, ng0);
    t8 = (t0 + 7033);
    t10 = (t0 + 4424);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t8, 3U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 7036);
    t4 = (t0 + 4488);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(143, ng0);
    t1 = (t0 + 7040);
    t4 = (t0 + 4680);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB69;

LAB79:    t13 = 0;

LAB82:    if (t13 < 2U)
        goto LAB83;
    else
        goto LAB81;

LAB83:    t6 = (t3 + t13);
    t7 = (t1 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB80;

LAB84:    t13 = (t13 + 1);
    goto LAB82;

LAB85:    xsi_set_current_line(145, ng0);
    t8 = (t0 + 7044);
    t10 = (t0 + 4424);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t8, 3U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(146, ng0);
    t1 = (t0 + 7047);
    t4 = (t0 + 4488);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(147, ng0);
    t1 = (t0 + 7051);
    t4 = (t0 + 4680);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB69;

LAB87:    t13 = 0;

LAB90:    if (t13 < 2U)
        goto LAB91;
    else
        goto LAB89;

LAB91:    t6 = (t3 + t13);
    t7 = (t1 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB88;

LAB92:    t13 = (t13 + 1);
    goto LAB90;

LAB93:    xsi_set_current_line(149, ng0);
    t8 = (t0 + 7055);
    t10 = (t0 + 4424);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t8, 3U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(150, ng0);
    t1 = (t0 + 7058);
    t4 = (t0 + 4488);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(151, ng0);
    t1 = (t0 + 7062);
    t4 = (t0 + 4680);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB69;

LAB95:    t13 = 0;

LAB98:    if (t13 < 2U)
        goto LAB99;
    else
        goto LAB97;

LAB99:    t6 = (t3 + t13);
    t7 = (t1 + t13);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB96;

LAB100:    t13 = (t13 + 1);
    goto LAB98;

}


extern void work_a_3643194780_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3643194780_3212880686_p_0,(void *)work_a_3643194780_3212880686_p_1};
	xsi_register_didat("work_a_3643194780_3212880686", "isim/FSM_tb_isim_beh.exe.sim/work/a_3643194780_3212880686.didat");
	xsi_register_executes(pe);
}
