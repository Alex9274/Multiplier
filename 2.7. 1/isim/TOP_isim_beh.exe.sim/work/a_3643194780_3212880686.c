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
static const char *ng0 = "C:/Users/Alex/Desktop/2.5.1/FSM.vhd";
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

LAB0:    xsi_set_current_line(65, ng0);
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
LAB3:    t1 = (t0 + 4680);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 4776);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2472U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 4776);
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
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5};

LAB0:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 4696);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(127, ng0);
    t4 = (t0 + 4840);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 4904);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7549);
    t3 = 1;
    if (2U == 2U)
        goto LAB9;

LAB10:    t3 = 0;

LAB11:    if (t3 != 0)
        goto LAB6;

LAB8:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7556);
    t3 = 1;
    if (2U == 2U)
        goto LAB17;

LAB18:    t3 = 0;

LAB19:    if (t3 != 0)
        goto LAB15;

LAB16:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7563);
    t3 = 1;
    if (2U == 2U)
        goto LAB25;

LAB26:    t3 = 0;

LAB27:    if (t3 != 0)
        goto LAB23;

LAB24:
LAB7:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t15 = (t3 == (unsigned char)3);
    if (t15 != 0)
        goto LAB31;

LAB33:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5096);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB32:    goto LAB2;

LAB4:    xsi_set_current_line(149, ng0);
    t1 = (t0 + 4840);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(150, ng0);
    t1 = (t0 + 4904);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(152, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 7570);
    t3 = 1;
    if (2U == 2U)
        goto LAB37;

LAB38:    t3 = 0;

LAB39:    if (t3 != 0)
        goto LAB34;

LAB36:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 7577);
    t3 = 1;
    if (2U == 2U)
        goto LAB45;

LAB46:    t3 = 0;

LAB47:    if (t3 != 0)
        goto LAB43;

LAB44:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 7584);
    t3 = 1;
    if (2U == 2U)
        goto LAB53;

LAB54:    t3 = 0;

LAB55:    if (t3 != 0)
        goto LAB51;

LAB52:
LAB35:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t15 = (t3 == (unsigned char)3);
    if (t15 != 0)
        goto LAB59;

LAB61:    xsi_set_current_line(166, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5096);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB60:    goto LAB2;

LAB5:    xsi_set_current_line(171, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 7591);
    t3 = 1;
    if (2U == 2U)
        goto LAB65;

LAB66:    t3 = 0;

LAB67:    if (t3 != 0)
        goto LAB62;

LAB64:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 7598);
    t3 = 1;
    if (2U == 2U)
        goto LAB73;

LAB74:    t3 = 0;

LAB75:    if (t3 != 0)
        goto LAB71;

LAB72:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 7605);
    t3 = 1;
    if (2U == 2U)
        goto LAB81;

LAB82:    t3 = 0;

LAB83:    if (t3 != 0)
        goto LAB79;

LAB80:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 7612);
    t3 = 1;
    if (2U == 2U)
        goto LAB89;

LAB90:    t3 = 0;

LAB91:    if (t3 != 0)
        goto LAB87;

LAB88:
LAB63:    xsi_set_current_line(185, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t15 = (t3 == (unsigned char)3);
    if (t15 != 0)
        goto LAB95;

LAB97:    xsi_set_current_line(188, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5096);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB96:    goto LAB2;

LAB6:    xsi_set_current_line(131, ng0);
    t7 = (t0 + 7551);
    t10 = (t0 + 4968);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t7, 3U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(132, ng0);
    t1 = (t0 + 7554);
    t4 = (t0 + 5032);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB7;

LAB9:    t9 = 0;

LAB12:    if (t9 < 2U)
        goto LAB13;
    else
        goto LAB11;

LAB13:    t5 = (t2 + t9);
    t6 = (t1 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB10;

LAB14:    t9 = (t9 + 1);
    goto LAB12;

LAB15:    xsi_set_current_line(134, ng0);
    t7 = (t0 + 7558);
    t10 = (t0 + 4968);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t7, 3U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 7561);
    t4 = (t0 + 5032);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB7;

LAB17:    t9 = 0;

LAB20:    if (t9 < 2U)
        goto LAB21;
    else
        goto LAB19;

LAB21:    t5 = (t2 + t9);
    t6 = (t1 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB18;

LAB22:    t9 = (t9 + 1);
    goto LAB20;

LAB23:    xsi_set_current_line(137, ng0);
    t7 = (t0 + 7565);
    t10 = (t0 + 4968);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t7, 3U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(138, ng0);
    t1 = (t0 + 7568);
    t4 = (t0 + 5032);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB7;

LAB25:    t9 = 0;

LAB28:    if (t9 < 2U)
        goto LAB29;
    else
        goto LAB27;

LAB29:    t5 = (t2 + t9);
    t6 = (t1 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB26;

LAB30:    t9 = (t9 + 1);
    goto LAB28;

LAB31:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 5096);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB32;

LAB34:    xsi_set_current_line(153, ng0);
    t7 = (t0 + 7572);
    t10 = (t0 + 4968);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t7, 3U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(154, ng0);
    t1 = (t0 + 7575);
    t4 = (t0 + 5160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB35;

LAB37:    t9 = 0;

LAB40:    if (t9 < 2U)
        goto LAB41;
    else
        goto LAB39;

LAB41:    t5 = (t2 + t9);
    t6 = (t1 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB38;

LAB42:    t9 = (t9 + 1);
    goto LAB40;

LAB43:    xsi_set_current_line(156, ng0);
    t7 = (t0 + 7579);
    t10 = (t0 + 4968);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t7, 3U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(157, ng0);
    t1 = (t0 + 7582);
    t4 = (t0 + 5160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB35;

LAB45:    t9 = 0;

LAB48:    if (t9 < 2U)
        goto LAB49;
    else
        goto LAB47;

LAB49:    t5 = (t2 + t9);
    t6 = (t1 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB46;

LAB50:    t9 = (t9 + 1);
    goto LAB48;

LAB51:    xsi_set_current_line(159, ng0);
    t7 = (t0 + 7586);
    t10 = (t0 + 4968);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t7, 3U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(160, ng0);
    t1 = (t0 + 7589);
    t4 = (t0 + 5160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB35;

LAB53:    t9 = 0;

LAB56:    if (t9 < 2U)
        goto LAB57;
    else
        goto LAB55;

LAB57:    t5 = (t2 + t9);
    t6 = (t1 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB54;

LAB58:    t9 = (t9 + 1);
    goto LAB56;

LAB59:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 5096);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB60;

LAB62:    xsi_set_current_line(172, ng0);
    t7 = (t0 + 7593);
    t10 = (t0 + 4968);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t7, 3U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(173, ng0);
    t1 = (t0 + 7596);
    t4 = (t0 + 5224);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB63;

LAB65:    t9 = 0;

LAB68:    if (t9 < 2U)
        goto LAB69;
    else
        goto LAB67;

LAB69:    t5 = (t2 + t9);
    t6 = (t1 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB66;

LAB70:    t9 = (t9 + 1);
    goto LAB68;

LAB71:    xsi_set_current_line(175, ng0);
    t7 = (t0 + 7600);
    t10 = (t0 + 4968);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t7, 3U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(176, ng0);
    t1 = (t0 + 7603);
    t4 = (t0 + 5224);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB63;

LAB73:    t9 = 0;

LAB76:    if (t9 < 2U)
        goto LAB77;
    else
        goto LAB75;

LAB77:    t5 = (t2 + t9);
    t6 = (t1 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB74;

LAB78:    t9 = (t9 + 1);
    goto LAB76;

LAB79:    xsi_set_current_line(178, ng0);
    t7 = (t0 + 7607);
    t10 = (t0 + 4968);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t7, 3U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(179, ng0);
    t1 = (t0 + 7610);
    t4 = (t0 + 5224);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB63;

LAB81:    t9 = 0;

LAB84:    if (t9 < 2U)
        goto LAB85;
    else
        goto LAB83;

LAB85:    t5 = (t2 + t9);
    t6 = (t1 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB82;

LAB86:    t9 = (t9 + 1);
    goto LAB84;

LAB87:    xsi_set_current_line(181, ng0);
    t7 = (t0 + 7614);
    t10 = (t0 + 4968);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t7, 3U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(182, ng0);
    t1 = (t0 + 7617);
    t4 = (t0 + 5224);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB63;

LAB89:    t9 = 0;

LAB92:    if (t9 < 2U)
        goto LAB93;
    else
        goto LAB91;

LAB93:    t5 = (t2 + t9);
    t6 = (t1 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB90;

LAB94:    t9 = (t9 + 1);
    goto LAB92;

LAB95:    xsi_set_current_line(186, ng0);
    t1 = (t0 + 5096);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB96;

}


extern void work_a_3643194780_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3643194780_3212880686_p_0,(void *)work_a_3643194780_3212880686_p_1};
	xsi_register_didat("work_a_3643194780_3212880686", "isim/TOP_isim_beh.exe.sim/work/a_3643194780_3212880686.didat");
	xsi_register_executes(pe);
}
