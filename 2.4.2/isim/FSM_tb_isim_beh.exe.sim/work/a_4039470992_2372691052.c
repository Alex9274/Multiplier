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
static const char *ng0 = "C:/Users/Alex/Desktop/SED/2.4/FSM_tb.vhd";



static void work_a_4039470992_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2920);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2920);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_4039470992_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    unsigned int t10;
    char *t11;

LAB0:    t1 = (t0 + 3360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t3 = (20 * 1000LL);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(99, ng0);

LAB10:    t2 = (t0 + 3680);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t4 = (t0 + 3680);
    *((int *)t4) = 0;
    xsi_set_current_line(100, ng0);
    t3 = (2 * 1000LL);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 5944);
    t8 = 1;
    if (3U == 3U)
        goto LAB18;

LAB19:    t8 = 0;

LAB20:    if (t8 == 0)
        goto LAB16;

LAB17:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(105, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    t11 = (t0 + 5947);
    xsi_report(t11, 6U, (unsigned char)3);
    goto LAB17;

LAB18:    t10 = 0;

LAB21:    if (t10 < 3U)
        goto LAB22;
    else
        goto LAB20;

LAB22:    t6 = (t4 + t10);
    t7 = (t2 + t10);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB19;

LAB23:    t10 = (t10 + 1);
    goto LAB21;

LAB24:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(108, ng0);

LAB30:    t2 = (t0 + 3696);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    t4 = (t0 + 3696);
    *((int *)t4) = 0;
    xsi_set_current_line(109, ng0);
    t3 = (5 * 1000LL);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB28;
    else
        goto LAB30;

LAB31:    goto LAB29;

LAB32:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 5953);
    t8 = 1;
    if (3U == 3U)
        goto LAB38;

LAB39:    t8 = 0;

LAB40:    if (t8 == 0)
        goto LAB36;

LAB37:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(114, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    t11 = (t0 + 5956);
    xsi_report(t11, 6U, (unsigned char)3);
    goto LAB37;

LAB38:    t10 = 0;

LAB41:    if (t10 < 3U)
        goto LAB42;
    else
        goto LAB40;

LAB42:    t6 = (t4 + t10);
    t7 = (t2 + t10);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB39;

LAB43:    t10 = (t10 + 1);
    goto LAB41;

LAB44:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(117, ng0);

LAB50:    t2 = (t0 + 3712);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

LAB48:    t4 = (t0 + 3712);
    *((int *)t4) = 0;
    xsi_set_current_line(118, ng0);
    t3 = (5 * 1000LL);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB49:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB48;
    else
        goto LAB50;

LAB51:    goto LAB49;

LAB52:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 5962);
    t8 = 1;
    if (3U == 3U)
        goto LAB58;

LAB59:    t8 = 0;

LAB60:    if (t8 == 0)
        goto LAB56;

LAB57:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(123, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB66:    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

LAB56:    t11 = (t0 + 5965);
    xsi_report(t11, 6U, (unsigned char)3);
    goto LAB57;

LAB58:    t10 = 0;

LAB61:    if (t10 < 3U)
        goto LAB62;
    else
        goto LAB60;

LAB62:    t6 = (t4 + t10);
    t7 = (t2 + t10);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB59;

LAB63:    t10 = (t10 + 1);
    goto LAB61;

LAB64:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(126, ng0);

LAB70:    t2 = (t0 + 3728);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB65:    goto LAB64;

LAB67:    goto LAB65;

LAB68:    t4 = (t0 + 3728);
    *((int *)t4) = 0;
    xsi_set_current_line(127, ng0);
    t3 = (5 * 1000LL);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB74:    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB69:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t8 = *((unsigned char *)t5);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB68;
    else
        goto LAB70;

LAB71:    goto LAB69;

LAB72:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 5971);
    t8 = 1;
    if (3U == 3U)
        goto LAB78;

LAB79:    t8 = 0;

LAB80:    if (t8 == 0)
        goto LAB76;

LAB77:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3872);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(133, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 3168);
    xsi_process_wait(t2, t3);

LAB86:    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB73:    goto LAB72;

LAB75:    goto LAB73;

LAB76:    t11 = (t0 + 5974);
    xsi_report(t11, 6U, (unsigned char)3);
    goto LAB77;

LAB78:    t10 = 0;

LAB81:    if (t10 < 3U)
        goto LAB82;
    else
        goto LAB80;

LAB82:    t6 = (t4 + t10);
    t7 = (t2 + t10);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB79;

LAB83:    t10 = (t10 + 1);
    goto LAB81;

LAB84:    xsi_set_current_line(135, ng0);
    if ((unsigned char)0 == 0)
        goto LAB88;

LAB89:    goto LAB2;

LAB85:    goto LAB84;

LAB87:    goto LAB85;

LAB88:    t2 = (t0 + 5980);
    xsi_report(t2, 11U, (unsigned char)3);
    goto LAB89;

}


extern void work_a_4039470992_2372691052_init()
{
	static char *pe[] = {(void *)work_a_4039470992_2372691052_p_0,(void *)work_a_4039470992_2372691052_p_1};
	xsi_register_didat("work_a_4039470992_2372691052", "isim/FSM_tb_isim_beh.exe.sim/work/a_4039470992_2372691052.didat");
	xsi_register_executes(pe);
}
