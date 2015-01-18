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
static const char *ng0 = "C:/Users/Alex/Desktop/2.5/FSM.vhd";
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

LAB0:    xsi_set_current_line(61, ng0);
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
LAB3:    t1 = (t0 + 4040);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 4136);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1832U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 4136);
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
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6};

LAB0:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 4056);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(113, ng0);
    t4 = (t0 + 6583);
    t6 = (t0 + 4200);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 3U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t11 = (t3 == (unsigned char)3);
    if (t11 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4264);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB8:    goto LAB2;

LAB4:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 6586);
    t3 = 1;
    if (2U == 2U)
        goto LAB13;

LAB14:    t3 = 0;

LAB15:    if (t3 != 0)
        goto LAB10;

LAB12:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 6593);
    t3 = 1;
    if (2U == 2U)
        goto LAB21;

LAB22:    t3 = 0;

LAB23:    if (t3 != 0)
        goto LAB19;

LAB20:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 6600);
    t3 = 1;
    if (2U == 2U)
        goto LAB29;

LAB30:    t3 = 0;

LAB31:    if (t3 != 0)
        goto LAB27;

LAB28:
LAB11:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t11 = (t3 == (unsigned char)3);
    if (t11 != 0)
        goto LAB35;

LAB37:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4264);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB36:    goto LAB2;

LAB5:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 6607);
    t3 = 1;
    if (2U == 2U)
        goto LAB41;

LAB42:    t3 = 0;

LAB43:    if (t3 != 0)
        goto LAB38;

LAB40:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 6614);
    t3 = 1;
    if (2U == 2U)
        goto LAB49;

LAB50:    t3 = 0;

LAB51:    if (t3 != 0)
        goto LAB47;

LAB48:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 6621);
    t3 = 1;
    if (2U == 2U)
        goto LAB57;

LAB58:    t3 = 0;

LAB59:    if (t3 != 0)
        goto LAB55;

LAB56:
LAB39:    xsi_set_current_line(153, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t11 = (t3 == (unsigned char)3);
    if (t11 != 0)
        goto LAB63;

LAB65:    xsi_set_current_line(156, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4264);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB64:    goto LAB2;

LAB6:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 6628);
    t3 = 1;
    if (2U == 2U)
        goto LAB69;

LAB70:    t3 = 0;

LAB71:    if (t3 != 0)
        goto LAB66;

LAB68:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 6635);
    t3 = 1;
    if (2U == 2U)
        goto LAB77;

LAB78:    t3 = 0;

LAB79:    if (t3 != 0)
        goto LAB75;

LAB76:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 6642);
    t3 = 1;
    if (2U == 2U)
        goto LAB85;

LAB86:    t3 = 0;

LAB87:    if (t3 != 0)
        goto LAB83;

LAB84:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 6649);
    t3 = 1;
    if (2U == 2U)
        goto LAB93;

LAB94:    t3 = 0;

LAB95:    if (t3 != 0)
        goto LAB91;

LAB92:
LAB67:    xsi_set_current_line(175, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t11 = (t3 == (unsigned char)3);
    if (t11 != 0)
        goto LAB99;

LAB101:    xsi_set_current_line(178, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4264);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB100:    goto LAB2;

LAB7:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 4264);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB10:    xsi_set_current_line(124, ng0);
    t7 = (t0 + 6588);
    t9 = (t0 + 4200);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 3U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(125, ng0);
    t1 = (t0 + 6591);
    t4 = (t0 + 4328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB11;

LAB13:    t12 = 0;

LAB16:    if (t12 < 2U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t5 = (t2 + t12);
    t6 = (t1 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB14;

LAB18:    t12 = (t12 + 1);
    goto LAB16;

LAB19:    xsi_set_current_line(127, ng0);
    t7 = (t0 + 6595);
    t9 = (t0 + 4200);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 3U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 6598);
    t4 = (t0 + 4328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB11;

LAB21:    t12 = 0;

LAB24:    if (t12 < 2U)
        goto LAB25;
    else
        goto LAB23;

LAB25:    t5 = (t2 + t12);
    t6 = (t1 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB22;

LAB26:    t12 = (t12 + 1);
    goto LAB24;

LAB27:    xsi_set_current_line(130, ng0);
    t7 = (t0 + 6602);
    t9 = (t0 + 4200);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 3U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(131, ng0);
    t1 = (t0 + 6605);
    t4 = (t0 + 4328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB11;

LAB29:    t12 = 0;

LAB32:    if (t12 < 2U)
        goto LAB33;
    else
        goto LAB31;

LAB33:    t5 = (t2 + t12);
    t6 = (t1 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB30;

LAB34:    t12 = (t12 + 1);
    goto LAB32;

LAB35:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 4264);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB36;

LAB38:    xsi_set_current_line(143, ng0);
    t7 = (t0 + 6609);
    t9 = (t0 + 4200);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 3U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(144, ng0);
    t1 = (t0 + 6612);
    t4 = (t0 + 4392);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB39;

LAB41:    t12 = 0;

LAB44:    if (t12 < 2U)
        goto LAB45;
    else
        goto LAB43;

LAB45:    t5 = (t2 + t12);
    t6 = (t1 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB42;

LAB46:    t12 = (t12 + 1);
    goto LAB44;

LAB47:    xsi_set_current_line(146, ng0);
    t7 = (t0 + 6616);
    t9 = (t0 + 4200);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 3U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(147, ng0);
    t1 = (t0 + 6619);
    t4 = (t0 + 4392);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB39;

LAB49:    t12 = 0;

LAB52:    if (t12 < 2U)
        goto LAB53;
    else
        goto LAB51;

LAB53:    t5 = (t2 + t12);
    t6 = (t1 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB50;

LAB54:    t12 = (t12 + 1);
    goto LAB52;

LAB55:    xsi_set_current_line(149, ng0);
    t7 = (t0 + 6623);
    t9 = (t0 + 4200);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 3U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(150, ng0);
    t1 = (t0 + 6626);
    t4 = (t0 + 4392);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB39;

LAB57:    t12 = 0;

LAB60:    if (t12 < 2U)
        goto LAB61;
    else
        goto LAB59;

LAB61:    t5 = (t2 + t12);
    t6 = (t1 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB58;

LAB62:    t12 = (t12 + 1);
    goto LAB60;

LAB63:    xsi_set_current_line(154, ng0);
    t1 = (t0 + 4264);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB64;

LAB66:    xsi_set_current_line(162, ng0);
    t7 = (t0 + 6630);
    t9 = (t0 + 4200);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 3U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(163, ng0);
    t1 = (t0 + 6633);
    t4 = (t0 + 4456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB67;

LAB69:    t12 = 0;

LAB72:    if (t12 < 2U)
        goto LAB73;
    else
        goto LAB71;

LAB73:    t5 = (t2 + t12);
    t6 = (t1 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB70;

LAB74:    t12 = (t12 + 1);
    goto LAB72;

LAB75:    xsi_set_current_line(165, ng0);
    t7 = (t0 + 6637);
    t9 = (t0 + 4200);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 3U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(166, ng0);
    t1 = (t0 + 6640);
    t4 = (t0 + 4456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB67;

LAB77:    t12 = 0;

LAB80:    if (t12 < 2U)
        goto LAB81;
    else
        goto LAB79;

LAB81:    t5 = (t2 + t12);
    t6 = (t1 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB78;

LAB82:    t12 = (t12 + 1);
    goto LAB80;

LAB83:    xsi_set_current_line(168, ng0);
    t7 = (t0 + 6644);
    t9 = (t0 + 4200);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 3U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(169, ng0);
    t1 = (t0 + 6647);
    t4 = (t0 + 4456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB67;

LAB85:    t12 = 0;

LAB88:    if (t12 < 2U)
        goto LAB89;
    else
        goto LAB87;

LAB89:    t5 = (t2 + t12);
    t6 = (t1 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB86;

LAB90:    t12 = (t12 + 1);
    goto LAB88;

LAB91:    xsi_set_current_line(171, ng0);
    t7 = (t0 + 6651);
    t9 = (t0 + 4200);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 3U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(172, ng0);
    t1 = (t0 + 6654);
    t4 = (t0 + 4456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB67;

LAB93:    t12 = 0;

LAB96:    if (t12 < 2U)
        goto LAB97;
    else
        goto LAB95;

LAB97:    t5 = (t2 + t12);
    t6 = (t1 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB94;

LAB98:    t12 = (t12 + 1);
    goto LAB96;

LAB99:    xsi_set_current_line(176, ng0);
    t1 = (t0 + 4264);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB100;

}


extern void work_a_3643194780_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3643194780_3212880686_p_0,(void *)work_a_3643194780_3212880686_p_1};
	xsi_register_didat("work_a_3643194780_3212880686", "isim/FSM_tb_isim_beh.exe.sim/work/a_3643194780_3212880686.didat");
	xsi_register_executes(pe);
}
