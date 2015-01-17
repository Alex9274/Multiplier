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
static const char *ng0 = "C:/Users/Alex/Desktop/SED/2.2.2/Mux_tb.vhd";



static void work_a_1921371486_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 4032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 4664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2928U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3840);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2928U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3840);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1921371486_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned int t11;

LAB0:    t1 = (t0 + 4280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(112, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 7696);
    t5 = (t0 + 4728);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3048U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, t3);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(122, ng0);
    t3 = (20 * 1000LL);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, t3);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t2 = (t0 + 7700);
    t10 = 1;
    if (4U == 4U)
        goto LAB18;

LAB19:    t10 = 0;

LAB20:    if (t10 == 0)
        goto LAB16;

LAB17:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 7709);
    t5 = (t0 + 4792);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 3048U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, t3);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    t8 = (t0 + 7704);
    xsi_report(t8, 5U, (unsigned char)3);
    goto LAB17;

LAB18:    t11 = 0;

LAB21:    if (t11 < 4U)
        goto LAB22;
    else
        goto LAB20;

LAB22:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB19;

LAB23:    t11 = (t11 + 1);
    goto LAB21;

LAB24:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 7713);
    t5 = (t0 + 4856);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(130, ng0);
    t3 = (20 * 1000LL);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, t3);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t2 = (t0 + 7716);
    t10 = 1;
    if (4U == 4U)
        goto LAB34;

LAB35:    t10 = 0;

LAB36:    if (t10 == 0)
        goto LAB32;

LAB33:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 7725);
    t5 = (t0 + 4920);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3048U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, t3);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    t8 = (t0 + 7720);
    xsi_report(t8, 5U, (unsigned char)3);
    goto LAB33;

LAB34:    t11 = 0;

LAB37:    if (t11 < 4U)
        goto LAB38;
    else
        goto LAB36;

LAB38:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB35;

LAB39:    t11 = (t11 + 1);
    goto LAB37;

LAB40:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 7729);
    t5 = (t0 + 4856);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(138, ng0);
    t3 = (20 * 1000LL);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, t3);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t2 = (t0 + 7732);
    t10 = 1;
    if (4U == 4U)
        goto LAB50;

LAB51:    t10 = 0;

LAB52:    if (t10 == 0)
        goto LAB48;

LAB49:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 7741);
    t5 = (t0 + 4984);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 3048U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, t3);

LAB58:    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

LAB48:    t8 = (t0 + 7736);
    xsi_report(t8, 5U, (unsigned char)3);
    goto LAB49;

LAB50:    t11 = 0;

LAB53:    if (t11 < 4U)
        goto LAB54;
    else
        goto LAB52;

LAB54:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB51;

LAB55:    t11 = (t11 + 1);
    goto LAB53;

LAB56:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 7745);
    t5 = (t0 + 4856);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(146, ng0);
    t3 = (20 * 1000LL);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, t3);

LAB62:    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB57:    goto LAB56;

LAB59:    goto LAB57;

LAB60:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t2 = (t0 + 7748);
    t10 = 1;
    if (4U == 4U)
        goto LAB66;

LAB67:    t10 = 0;

LAB68:    if (t10 == 0)
        goto LAB64;

LAB65:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 7757);
    t5 = (t0 + 5048);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 3048U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, t3);

LAB74:    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB61:    goto LAB60;

LAB63:    goto LAB61;

LAB64:    t8 = (t0 + 7752);
    xsi_report(t8, 5U, (unsigned char)3);
    goto LAB65;

LAB66:    t11 = 0;

LAB69:    if (t11 < 4U)
        goto LAB70;
    else
        goto LAB68;

LAB70:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB67;

LAB71:    t11 = (t11 + 1);
    goto LAB69;

LAB72:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 7761);
    t5 = (t0 + 4856);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(154, ng0);
    t3 = (20 * 1000LL);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, t3);

LAB78:    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB73:    goto LAB72;

LAB75:    goto LAB73;

LAB76:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t2 = (t0 + 7764);
    t10 = 1;
    if (4U == 4U)
        goto LAB82;

LAB83:    t10 = 0;

LAB84:    if (t10 == 0)
        goto LAB80;

LAB81:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 7773);
    t5 = (t0 + 5112);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 3048U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, t3);

LAB90:    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB77:    goto LAB76;

LAB79:    goto LAB77;

LAB80:    t8 = (t0 + 7768);
    xsi_report(t8, 5U, (unsigned char)3);
    goto LAB81;

LAB82:    t11 = 0;

LAB85:    if (t11 < 4U)
        goto LAB86;
    else
        goto LAB84;

LAB86:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB83;

LAB87:    t11 = (t11 + 1);
    goto LAB85;

LAB88:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 7777);
    t5 = (t0 + 4856);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(162, ng0);
    t3 = (20 * 1000LL);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, t3);

LAB94:    *((char **)t1) = &&LAB95;
    goto LAB1;

LAB89:    goto LAB88;

LAB91:    goto LAB89;

LAB92:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t2 = (t0 + 7780);
    t10 = 1;
    if (4U == 4U)
        goto LAB98;

LAB99:    t10 = 0;

LAB100:    if (t10 == 0)
        goto LAB96;

LAB97:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 7789);
    t5 = (t0 + 5176);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 3048U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, t3);

LAB106:    *((char **)t1) = &&LAB107;
    goto LAB1;

LAB93:    goto LAB92;

LAB95:    goto LAB93;

LAB96:    t8 = (t0 + 7784);
    xsi_report(t8, 5U, (unsigned char)3);
    goto LAB97;

LAB98:    t11 = 0;

LAB101:    if (t11 < 4U)
        goto LAB102;
    else
        goto LAB100;

LAB102:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB99;

LAB103:    t11 = (t11 + 1);
    goto LAB101;

LAB104:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 7793);
    t5 = (t0 + 4856);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(170, ng0);
    t3 = (20 * 1000LL);
    t2 = (t0 + 4088);
    xsi_process_wait(t2, t3);

LAB110:    *((char **)t1) = &&LAB111;
    goto LAB1;

LAB105:    goto LAB104;

LAB107:    goto LAB105;

LAB108:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t2 = (t0 + 7796);
    t10 = 1;
    if (4U == 4U)
        goto LAB114;

LAB115:    t10 = 0;

LAB116:    if (t10 == 0)
        goto LAB112;

LAB113:    xsi_set_current_line(175, ng0);
    if ((unsigned char)0 == 0)
        goto LAB120;

LAB121:    goto LAB2;

LAB109:    goto LAB108;

LAB111:    goto LAB109;

LAB112:    t8 = (t0 + 7800);
    xsi_report(t8, 5U, (unsigned char)3);
    goto LAB113;

LAB114:    t11 = 0;

LAB117:    if (t11 < 4U)
        goto LAB118;
    else
        goto LAB116;

LAB118:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB115;

LAB119:    t11 = (t11 + 1);
    goto LAB117;

LAB120:    t2 = (t0 + 7805);
    xsi_report(t2, 11U, (unsigned char)3);
    goto LAB121;

}


extern void work_a_1921371486_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1921371486_2372691052_p_0,(void *)work_a_1921371486_2372691052_p_1};
	xsi_register_didat("work_a_1921371486_2372691052", "isim/Mux_tb_isim_beh.exe.sim/work/a_1921371486_2372691052.didat");
	xsi_register_executes(pe);
}
