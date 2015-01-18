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
static const char *ng0 = "C:/Users/Alex/Desktop/2.5/Mux_tb.vhd";



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

LAB0:    t1 = (t0 + 4192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3088U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4000);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3088U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4000);
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

LAB0:    t1 = (t0 + 4440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(115, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 4248);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 7836);
    t5 = (t0 + 4888);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3208U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 4248);
    xsi_process_wait(t2, t3);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 7840);
    t5 = (t0 + 4952);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(125, ng0);
    t3 = (20 * 1000LL);
    t2 = (t0 + 4248);
    xsi_process_wait(t2, t3);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 2792U);
    t4 = *((char **)t2);
    t2 = (t0 + 7843);
    t10 = 1;
    if (4U == 4U)
        goto LAB18;

LAB19:    t10 = 0;

LAB20:    if (t10 == 0)
        goto LAB16;

LAB17:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 7852);
    t5 = (t0 + 5016);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3208U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 4248);
    xsi_process_wait(t2, t3);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    t8 = (t0 + 7847);
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

LAB24:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 7856);
    t5 = (t0 + 4952);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(133, ng0);
    t3 = (20 * 1000LL);
    t2 = (t0 + 4248);
    xsi_process_wait(t2, t3);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2792U);
    t4 = *((char **)t2);
    t2 = (t0 + 7859);
    t10 = 1;
    if (4U == 4U)
        goto LAB34;

LAB35:    t10 = 0;

LAB36:    if (t10 == 0)
        goto LAB32;

LAB33:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 7868);
    t5 = (t0 + 5080);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 3208U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 4248);
    xsi_process_wait(t2, t3);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    t8 = (t0 + 7863);
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

LAB40:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 7872);
    t5 = (t0 + 4952);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(141, ng0);
    t3 = (20 * 1000LL);
    t2 = (t0 + 4248);
    xsi_process_wait(t2, t3);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 2792U);
    t4 = *((char **)t2);
    t2 = (t0 + 7875);
    t10 = 1;
    if (4U == 4U)
        goto LAB50;

LAB51:    t10 = 0;

LAB52:    if (t10 == 0)
        goto LAB48;

LAB49:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t2 = (t0 + 7884);
    t10 = 1;
    if (4U == 4U)
        goto LAB58;

LAB59:    t10 = 0;

LAB60:    if (t10 == 0)
        goto LAB56;

LAB57:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 7894);
    t5 = (t0 + 5144);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 3208U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 4248);
    xsi_process_wait(t2, t3);

LAB66:    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

LAB48:    t8 = (t0 + 7879);
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

LAB56:    t8 = (t0 + 7888);
    xsi_report(t8, 6U, (unsigned char)3);
    goto LAB57;

LAB58:    t11 = 0;

LAB61:    if (t11 < 4U)
        goto LAB62;
    else
        goto LAB60;

LAB62:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB59;

LAB63:    t11 = (t11 + 1);
    goto LAB61;

LAB64:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 7898);
    t5 = (t0 + 4952);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(154, ng0);
    t3 = (20 * 1000LL);
    t2 = (t0 + 4248);
    xsi_process_wait(t2, t3);

LAB70:    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB65:    goto LAB64;

LAB67:    goto LAB65;

LAB68:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 2792U);
    t4 = *((char **)t2);
    t2 = (t0 + 7901);
    t10 = 1;
    if (4U == 4U)
        goto LAB74;

LAB75:    t10 = 0;

LAB76:    if (t10 == 0)
        goto LAB72;

LAB73:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 7910);
    t5 = (t0 + 5208);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 3208U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 4248);
    xsi_process_wait(t2, t3);

LAB82:    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB69:    goto LAB68;

LAB71:    goto LAB69;

LAB72:    t8 = (t0 + 7905);
    xsi_report(t8, 5U, (unsigned char)3);
    goto LAB73;

LAB74:    t11 = 0;

LAB77:    if (t11 < 4U)
        goto LAB78;
    else
        goto LAB76;

LAB78:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB75;

LAB79:    t11 = (t11 + 1);
    goto LAB77;

LAB80:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 7914);
    t5 = (t0 + 4952);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(162, ng0);
    t3 = (20 * 1000LL);
    t2 = (t0 + 4248);
    xsi_process_wait(t2, t3);

LAB86:    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB81:    goto LAB80;

LAB83:    goto LAB81;

LAB84:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 2792U);
    t4 = *((char **)t2);
    t2 = (t0 + 7917);
    t10 = 1;
    if (4U == 4U)
        goto LAB90;

LAB91:    t10 = 0;

LAB92:    if (t10 == 0)
        goto LAB88;

LAB89:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 7926);
    t5 = (t0 + 5272);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 3208U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 4248);
    xsi_process_wait(t2, t3);

LAB98:    *((char **)t1) = &&LAB99;
    goto LAB1;

LAB85:    goto LAB84;

LAB87:    goto LAB85;

LAB88:    t8 = (t0 + 7921);
    xsi_report(t8, 5U, (unsigned char)3);
    goto LAB89;

LAB90:    t11 = 0;

LAB93:    if (t11 < 4U)
        goto LAB94;
    else
        goto LAB92;

LAB94:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB91;

LAB95:    t11 = (t11 + 1);
    goto LAB93;

LAB96:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 7930);
    t5 = (t0 + 4952);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(170, ng0);
    t3 = (20 * 1000LL);
    t2 = (t0 + 4248);
    xsi_process_wait(t2, t3);

LAB102:    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB97:    goto LAB96;

LAB99:    goto LAB97;

LAB100:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 2792U);
    t4 = *((char **)t2);
    t2 = (t0 + 7933);
    t10 = 1;
    if (4U == 4U)
        goto LAB106;

LAB107:    t10 = 0;

LAB108:    if (t10 == 0)
        goto LAB104;

LAB105:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 7942);
    t5 = (t0 + 5336);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(176, ng0);
    t2 = (t0 + 3208U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 4248);
    xsi_process_wait(t2, t3);

LAB114:    *((char **)t1) = &&LAB115;
    goto LAB1;

LAB101:    goto LAB100;

LAB103:    goto LAB101;

LAB104:    t8 = (t0 + 7937);
    xsi_report(t8, 5U, (unsigned char)3);
    goto LAB105;

LAB106:    t11 = 0;

LAB109:    if (t11 < 4U)
        goto LAB110;
    else
        goto LAB108;

LAB110:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB107;

LAB111:    t11 = (t11 + 1);
    goto LAB109;

LAB112:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 7946);
    t5 = (t0 + 4952);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 3U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(178, ng0);
    t3 = (20 * 1000LL);
    t2 = (t0 + 4248);
    xsi_process_wait(t2, t3);

LAB118:    *((char **)t1) = &&LAB119;
    goto LAB1;

LAB113:    goto LAB112;

LAB115:    goto LAB113;

LAB116:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 2792U);
    t4 = *((char **)t2);
    t2 = (t0 + 7949);
    t10 = 1;
    if (4U == 4U)
        goto LAB122;

LAB123:    t10 = 0;

LAB124:    if (t10 == 0)
        goto LAB120;

LAB121:    xsi_set_current_line(183, ng0);
    if ((unsigned char)0 == 0)
        goto LAB128;

LAB129:    goto LAB2;

LAB117:    goto LAB116;

LAB119:    goto LAB117;

LAB120:    t8 = (t0 + 7953);
    xsi_report(t8, 5U, (unsigned char)3);
    goto LAB121;

LAB122:    t11 = 0;

LAB125:    if (t11 < 4U)
        goto LAB126;
    else
        goto LAB124;

LAB126:    t6 = (t4 + t11);
    t7 = (t2 + t11);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB123;

LAB127:    t11 = (t11 + 1);
    goto LAB125;

LAB128:    t2 = (t0 + 7958);
    xsi_report(t2, 11U, (unsigned char)3);
    goto LAB129;

}


extern void work_a_1921371486_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1921371486_2372691052_p_0,(void *)work_a_1921371486_2372691052_p_1};
	xsi_register_didat("work_a_1921371486_2372691052", "isim/Mux_tb_isim_beh.exe.sim/work/a_1921371486_2372691052.didat");
	xsi_register_executes(pe);
}
