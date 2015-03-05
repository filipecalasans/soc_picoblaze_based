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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Filipe/Documents/TCC/TCC_SoC/SystemOnChipDesign/Project5/ise_project/cellram_parameters.vh";
static unsigned int ng1[] = {2U, 0U};
static unsigned int ng2[] = {3U, 0U};
static unsigned int ng3[] = {4U, 0U};
static unsigned int ng4[] = {5U, 0U};
static unsigned int ng5[] = {6U, 0U};
static unsigned int ng6[] = {0U, 0U};
static const char *ng7 = "C:/Users/Filipe/Documents/TCC/TCC_SoC/SystemOnChipDesign/Project5/ise_project/cellram.v";
static int ng8[] = {0, 0};
static int ng9[] = {1, 0};
static const char *ng10 = "%t  WARN: Illegal Address = %h.  Address range is NULL";
static const char *ng11 = "%t  WARN: Illegal Address = %h.  Address range is %h - %h";
static const char *ng12 = "%t  WARN: Illegal Address = %h.  Max Address is %h";
static unsigned int ng13[] = {65535U, 0U};
static int ng14[] = {8, 0};
static const char *ng15 = "%t ERROR: Memory overflow.  Write to Address %h with Data %h will be lost.\nYou must increase the MEM_BITS parameter.";
static unsigned int ng16[] = {65535U, 65535U};
static unsigned int ng17[] = {1U, 0U};
static unsigned int ng18[] = {8U, 0U};
static const char *ng19 = "%t ERROR: Deep Power Down cannot be enabled or disabled using the software access sequence";
static const char *ng20 = "%t ERROR:  tDPD violation on CE# by %t";
static const char *ng21 = "%t  INFO: Deep Power Down Exit";
static const char *ng22 = "%t  INFO: Register Select = BCR";
static unsigned int ng23[] = {261439U, 0U};
static unsigned int ng24[] = {40223U, 0U};
static const char *ng25 = "%t ERROR: Reserved bits in BCR cannot be changed from their default value.";
static unsigned int ng26[] = {7U, 0U};
static unsigned int ng27[] = {9U, 8U};
static const char *ng28 = "%t  INFO: Burst Length =  4 words";
static unsigned int ng29[] = {10U, 8U};
static const char *ng30 = "%t  INFO: Burst Length =  8 words";
static unsigned int ng31[] = {11U, 8U};
static const char *ng32 = "%t  INFO: Burst Length = 16 words";
static unsigned int ng33[] = {12U, 0U};
static const char *ng34 = "%t  INFO: Burst Length = 32 words";
static unsigned int ng35[] = {15U, 8U};
static const char *ng36 = "%t  INFO: Burst Length = continuous";
static const char *ng37 = "%t ERROR: Illegal Burst Length = %h";
static const char *ng38 = "%t  INFO: Burst Wrap = Burst wraps within the burst length";
static const char *ng39 = "%t  INFO: Burst Wrap = Burst no wrap";
static const char *ng40 = "%t ERROR: Illegal Burst Wrap = %h";
static const char *ng41 = "%t  INFO: Drive Strength = Full";
static const char *ng42 = "%t  INFO: Drive Strength = 1/2";
static const char *ng43 = "%t  INFO: Drive Strength = 1/4";
static const char *ng44 = "%t ERROR: Illegal Drive Strength = %h";
static const char *ng45 = "%t  INFO: Clock Configuration = Rising edge";
static const char *ng46 = "%t ERROR: Illegal Clock Configuration = %h";
static const char *ng47 = "%t  INFO: WAIT Configuration = Asserted during delay";
static const char *ng48 = "%t  INFO: WAIT Configuration = Asserted one data cycle before delay";
static const char *ng49 = "%t ERROR: Illegal WAIT Configuration = %h";
static const char *ng50 = "%t  INFO: CR1.5 WAIT Behavior";
static const char *ng51 = "%t  INFO: CR2.0 WAIT Behavior";
static const char *ng52 = "%t ERROR: Illegal CR2.0 WAIT Behavior = %h";
static const char *ng53 = "%t  INFO: Wait Polarity = Active LOW";
static const char *ng54 = "%t  INFO: Wait Polarity = Active HIGH";
static const char *ng55 = "%t ERROR: Illegal Wait Polarity = %h";
static unsigned int ng56[] = {18U, 16U};
static const char *ng57 = "%t  INFO: Latency Counter = Code 2";
static unsigned int ng58[] = {19U, 16U};
static const char *ng59 = "%t  INFO: Latency Counter = Code 3";
static unsigned int ng60[] = {20U, 0U};
static const char *ng61 = "%t  INFO: Latency Counter = Code 4";
static unsigned int ng62[] = {21U, 0U};
static const char *ng63 = "%t  INFO: Latency Counter = Code 5";
static unsigned int ng64[] = {22U, 0U};
static const char *ng65 = "%t  INFO: Latency Counter = Code 6";
static unsigned int ng66[] = {24U, 0U};
static const char *ng67 = "%t  INFO: Latency Counter = Code 8";
static const char *ng68 = "%t ERROR: Illegal Latency Counter = %h";
static const char *ng69 = "%t  INFO: Initial Access Latency = Variable";
static const char *ng70 = "%t  INFO: Initial Access Latency = Fixed";
static const char *ng71 = "%t ERROR: Illegal Initial Access Latency = %h";
static const char *ng72 = "%t  INFO: Operating Mode = Synchronous burst access mode";
static const char *ng73 = "%t  INFO: Operating Mode = Asynchronous access mode";
static const char *ng74 = "%t ERROR: Illegal Operating Mode = %h";
static const char *ng75 = "%t  INFO: Register Select = RCR";
static unsigned int ng76[] = {196759U, 0U};
static unsigned int ng77[] = {16U, 0U};
static const char *ng78 = "%t ERROR: Reserved bits in RCR cannot be changed from their default value.";
static const char *ng79 = "%t  INFO: Partial Array Refresh =       Full array";
static const char *ng80 = "%t  INFO: Partial Array Refresh = Bottom 1/2 array";
static const char *ng81 = "%t  INFO: Partial Array Refresh = Bottom 1/4 array";
static int ng82[] = {2, 0};
static const char *ng83 = "%t  INFO: Partial Array Refresh = Bottom 1/8 array";
static int ng84[] = {3, 0};
static const char *ng85 = "%t  INFO: Partial Array Refresh =             None";
static const char *ng86 = "%t  INFO: Partial Array Refresh =    Top 1/2 array";
static const char *ng87 = "%t  INFO: Partial Array Refresh =    Top 1/4 array";
static const char *ng88 = "%t  INFO: Partial Array Refresh =    Top 1/8 array";
static const char *ng89 = "%t ERROR: Illegal Partial Array Refresh = %h";
static const char *ng90 = "%t  INFO: Deep Power Down = DPD Enable";
static const char *ng91 = "%t  INFO: Deep Power Down = DPD Disable";
static const char *ng92 = "%t ERROR: Illegal Deep Power Down = %h";
static const char *ng93 = "%t  INFO: Maximum Case Temp = 70 degrees C";
static const char *ng94 = "%t  INFO: Maximum Case Temp = 45 degrees C";
static const char *ng95 = "%t  INFO: Maximum Case Temp = 15 degrees C";
static const char *ng96 = "%t  INFO: Maximum Case Temp = 85 degrees C";
static const char *ng97 = "%t ERROR: Illegal Maximum Case Temp = %h";
static const char *ng98 = "%t  INFO: Page Mode = Page Mode Disabled";
static const char *ng99 = "%t  INFO: Page Mode = Page Mode Enable";
static const char *ng100 = "%t ERROR: Illegal Page Mode = %h";
static const char *ng101 = "%t  INFO: Register Select = DIDR";
static const char *ng102 = "%t ERROR: DIDR Configuration Register is read-only";
static const char *ng103 = "%t ERROR: Illegal Register Select = %d";
static const char *ng104 = "%t ERROR:   tPC violation on ADDR bit %d by %t";
static unsigned int ng105[] = {835U, 0U};
static unsigned int ng106[] = {1U, 1U};
static unsigned int ng107[] = {0U, 1U};
static unsigned int ng108[] = {4294967295U, 4294967295U};
static int ng109[] = {16, 0};
static int ng110[] = {9, 0};
static const char *ng111 = " ns";
static int ng112[] = {0, 0, 0, 0};
static const char *ng113 = "===============================================================";
static const char *ng114 = "%t ERROR: Data at address 'h%h has been corrupted because CE# was deasserted prior to the first data transfer.";
static const char *ng115 = "%t  INFO: Async - Deep Power Down Entry";
static const char *ng116 = "%t ERROR: tDPDX violation on CE# by %t";
static const char *ng117 = "%t ERROR:   tCW violation on CE# by %t";
static const char *ng118 = "%t ERROR:   tVS violation on ADV# by %t";
static const char *ng119 = "%t ERROR:   tBW violation on BY# by %t";
static const char *ng120 = "%t ERROR:   tWP violation on WE# by %t";
static const char *ng121 = "%t ERROR:   tAW violation on CRE by %t";
static const char *ng122 = "%t ERROR:   tAW violation on ADDR by %t";
static const char *ng123 = "%t ERROR:   tDW violation on DQ by %t";
static const char *ng124 = "%t ERROR:   tWC violation on ADDR";
static unsigned int ng125[] = {8388607U, 0U};
static const char *ng126 = "%t ERROR: Async - Illegal Register Select = %h";
static const char *ng127 = "%t  INFO: Async - Software Access Unlock = %d, Register Select = %h";
static const char *ng128 = "%t  INFO: Async - Software Access Write, Data = %h";
static const char *ng129 = "%t  INFO: Async - Write data latched, addr = %h, Mask = %h, Data = %h";
static const char *ng130 = "%t  INFO: Async - Configuration Register Write data latched, Register Select = %h, Data = %h";
static const char *ng131 = "%t ERROR:   tRC violation on ADDR";
static const char *ng132 = "%t ERROR: Async - Illegal or unintended Page Mode Write.";
static const char *ng133 = "%t  INFO: Async - Write";
static const char *ng134 = "%t ERROR: Async - Page Mode Configuration Register Write is Illegal.";
static const char *ng135 = "%t  INFO: Async - Configuration Register Write";
static const char *ng136 = "%t ERROR: Async - Illegal or unintended Page Mode Read.  Page mode is disabled in BCR";
static const char *ng137 = "%t ERROR: Async - BY# must be LOW during READ cycles.";
static const char *ng138 = "%t  INFO: Async - Software Access Read, Data = %h";
static const char *ng139 = "%t  INFO: Async - Read, addr = %h, Data = %h";
static const char *ng140 = "%t  INFO: Async - Software Access Unlock = %d";
static const char *ng141 = "%t ERROR: Async - Page Mode Configuration Register Read is Illegal.";
static const char *ng142 = "%t ERROR: Async - Access using CRE is WRITE only.";
static const char *ng143 = "%t  INFO: Async - Configuration Register Read, Register Select = %h, Data = %h";
static const char *ng144 = "%t ERROR: Illegal burst interrupt.  Burst interrupt is illegal until after the first data word has been transferred.";
static const char *ng145 = "%t  INFO:  Sync - Configuration Register Write";
static const char *ng146 = "%t  INFO:  Sync - Write";
static const char *ng147 = "%t  INFO:  Sync - Configuration Register Read";
static const char *ng148 = "%t  INFO:  Sync - Read";
static const char *ng149 = "%t  INFO:  Sync - Read refresh collision of %d clocks has occurred.";
static const char *ng150 = "%t ERROR: Sync - OE# must be driven high during sync writes";
static const char *ng151 = "%t ERROR: Sync - BY# must be LOW during READ cycles.";
static const char *ng152 = "%t ERROR: CE# must go HIGH before the third CLK after the WAIT period asserts with BCR[8] = 0, or before the fourth CLK after WAIT asserts with BCR[8] = 1";
static const char *ng153 = "%t  INFO:  Sync - Write, addr = %h, Mask = %h, Data = %h - Row Boundary Crossing";
static int ng154[] = {6, 0};
static const char *ng155 = "%t  INFO:  Sync - Configuration Register Write data latched, Register Select = %h, Data = %h";
static const char *ng156 = "%t  INFO:  Sync - Write, addr = %h, Mask = %h, Data = %h";
static const char *ng157 = "%t ERROR:  Sync - Illegal Register Select = %h";
static const char *ng158 = "%t  INFO:  Sync - Configuration Register Read, Register Select = %h, Data = %h";
static const char *ng159 = "%t  INFO:  Sync - Read, addr = %h, Data = %h";
static int ng160[] = {4, 0};
static const char *ng161 = "%t  INFO:  Sync - increment addr = %h";
static unsigned int ng162[] = {127U, 0U};
static const char *ng163 = "%t ERROR:  tCSP violation on CE# by %t";
static const char *ng164 = "%t ERROR:   tSP violation on ADV# by %t";
static const char *ng165 = "%t ERROR:   tSP violation on BY# by %t";
static const char *ng166 = "%t ERROR:   tSP violation on WE# by %t";
static const char *ng167 = "%t ERROR:   tSP violation on CRE by %t";
static const char *ng168 = "%t ERROR:   tSP violation on ADDR by %t";
static const char *ng169 = "%t ERROR: Illegal latency counter = %h";
static const char *ng170 = "%t ERROR: Clock Period must be >= %f while Latency Counter = %h.  Actual Clock Period = %f";
static const char *ng171 = "%t ERROR:  tCLK minimum violation on CLK by %t";
static const char *ng172 = "%t ERROR:   tKP minimum violation on CLK by %t";
static const char *ng173 = "%t ERROR:   tHD violation on CE# by %t";
static const char *ng174 = "%t ERROR: tCBPH violation on CE# by %t";
static const char *ng175 = "%t ERROR:  tCPH violation on CE# by %t";
static const char *ng176 = "%t ERROR:   tWR violation on CE# by %t";
static const char *ng177 = "%t  WARN:   tPU violation on CE# by %t";
static const char *ng178 = "%t ERROR:   tHD violation on ADV# by %t";
static const char *ng179 = "%t ERROR:  tCVS violation on CE# by %t";
static const char *ng180 = "%t ERROR:   tVP violation on ADV# by %t";
static const char *ng181 = "%t ERROR:  tAVS violation on CRE by %t";
static const char *ng182 = "%t ERROR:  tAVS violation on ADDR by %t";
static const char *ng183 = "%t ERROR:  tAVH violation on CRE by %t";
static const char *ng184 = "%t ERROR:  tAVH violation on ADDR by %t";
static const char *ng185 = "%t ERROR:   tVPH violation on ADV# by %t";
static const char *ng186 = "%t ERROR:   tHD violation on WE# by %t";
static const char *ng187 = "%t ERROR:   tWPH violation on WE# by %t";
static const char *ng188 = "%t ERROR:   tAS violation on ADV# by %t";
static const char *ng189 = "%t ERROR:   tAS violation on ADDR by %t";
static const char *ng190 = "%t ERROR:   tHD violation on BY# by %t";
static const char *ng191 = "%t ERROR:   tHD violation on CRE by %t";
static const char *ng192 = "%t ERROR:   tHD violation on ADDR by %t";
static const char *ng193 = "%t ERROR:  tDH violation on DQ by %t";
static unsigned int ng194[] = {0U, 65535U};
static const char *ng195 = "%t ERROR:  tOW violation on DQ";
static const char *ng196 = "%t ERROR:  tCEM violation on CE#";



static int sp_min_clk_period(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;

LAB0:    t0 = 1;
    xsi_set_current_line(215, ng0);

LAB2:    xsi_set_current_line(216, ng0);
    t3 = (t1 + 39232);
    xsi_vlogvar_assign_value_double(t3, 0.00000000000000000, 0);
    xsi_set_current_line(217, ng0);
    t3 = (t1 + 39392);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB3;

LAB4:    xsi_set_current_line(255, ng0);

LAB21:    xsi_set_current_line(273, ng0);
    t3 = (t1 + 39552);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB22:    t6 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 3);
    if (t16 == 1)
        goto LAB23;

LAB24:    t3 = ((char*)((ng2)));
    t16 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 3);
    if (t16 == 1)
        goto LAB25;

LAB26:
LAB27:
LAB5:    t0 = 0;

LAB1:    return t0;
LAB3:    xsi_set_current_line(217, ng0);

LAB6:    xsi_set_current_line(246, ng0);
    t12 = (t1 + 39552);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);

LAB7:    t15 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t14, 3, t15, 3);
    if (t16 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng2)));
    t16 = xsi_vlog_unsigned_case_compare(t14, 3, t3, 3);
    if (t16 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng3)));
    t16 = xsi_vlog_unsigned_case_compare(t14, 3, t3, 3);
    if (t16 == 1)
        goto LAB12;

LAB13:    t3 = ((char*)((ng4)));
    t16 = xsi_vlog_unsigned_case_compare(t14, 3, t3, 3);
    if (t16 == 1)
        goto LAB14;

LAB15:    t3 = ((char*)((ng5)));
    t16 = xsi_vlog_unsigned_case_compare(t14, 3, t3, 3);
    if (t16 == 1)
        goto LAB16;

LAB17:    t3 = ((char*)((ng6)));
    t16 = xsi_vlog_unsigned_case_compare(t14, 3, t3, 3);
    if (t16 == 1)
        goto LAB18;

LAB19:
LAB20:    goto LAB5;

LAB8:    xsi_set_current_line(247, ng0);
    t17 = (t1 + 39232);
    xsi_vlogvar_assign_value_double(t17, 50.000000000000000, 0);
    goto LAB20;

LAB10:    xsi_set_current_line(248, ng0);
    t4 = (t1 + 39232);
    xsi_vlogvar_assign_value_double(t4, 30.000000000000000, 0);
    goto LAB20;

LAB12:    xsi_set_current_line(249, ng0);
    t4 = (t1 + 39232);
    xsi_vlogvar_assign_value_double(t4, 25.000000000000000, 0);
    goto LAB20;

LAB14:    xsi_set_current_line(250, ng0);
    t4 = (t1 + 39232);
    xsi_vlogvar_assign_value_double(t4, 19.199999999999999, 0);
    goto LAB20;

LAB16:    xsi_set_current_line(251, ng0);
    t4 = (t1 + 39232);
    xsi_vlogvar_assign_value_double(t4, 15.000000000000000, 0);
    goto LAB20;

LAB18:    xsi_set_current_line(252, ng0);
    t4 = (t1 + 39232);
    xsi_vlogvar_assign_value_double(t4, 15.000000000000000, 0);
    goto LAB20;

LAB23:    xsi_set_current_line(274, ng0);
    t12 = (t1 + 39232);
    xsi_vlogvar_assign_value_double(t12, 25.000000000000000, 0);
    goto LAB27;

LAB25:    xsi_set_current_line(275, ng0);
    t4 = (t1 + 39232);
    xsi_vlogvar_assign_value_double(t4, 15.000000000000000, 0);
    goto LAB27;

}

static int sp_memory_addr_exists(char *t1, char *t2)
{
    char t10[8];
    char t23[8];
    char t36[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    xsi_set_current_line(661, ng7);

LAB4:    t4 = (t1 + 576);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB5);
    xsi_vlog_namedbase_pushprocess(t4, t2);

LAB6:    xsi_set_current_line(662, ng7);
    t5 = ((char*)((ng8)));
    t6 = (t1 + 39872);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(663, ng7);
    xsi_set_current_line(663, ng7);
    t4 = ((char*)((ng8)));
    t5 = (t1 + 26592);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 11);

LAB7:    t4 = (t1 + 26592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 26752);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB9;

LAB8:    t12 = (t9 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB12:    if (*((unsigned int *)t6) < *((unsigned int *)t9))
        goto LAB10;

LAB11:    t14 = (t10 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t10);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB13;

LAB14:    t4 = (t1 + 576);
    xsi_vlog_namedbase_popprocess(t4);

LAB5:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t13 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB11;

LAB10:    *((unsigned int *)t10) = 1;
    goto LAB11;

LAB13:    xsi_set_current_line(663, ng7);

LAB15:    xsi_set_current_line(664, ng7);
    t20 = (t1 + 26432);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t24 = (t1 + 26432);
    t25 = (t24 + 72U);
    t26 = *((char **)t25);
    t27 = (t1 + 26432);
    t28 = (t27 + 64U);
    t29 = *((char **)t28);
    t30 = (t1 + 26592);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    xsi_vlog_generic_get_array_select_value(t23, 23, t22, t26, t29, 2, 1, t32, 11, 2);
    t33 = (t1 + 40032);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t37 = (t23 + 4);
    t38 = (t35 + 4);
    t39 = *((unsigned int *)t23);
    t40 = *((unsigned int *)t35);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB19;

LAB16:    if (t48 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t36) = 1;

LAB19:    t52 = (t36 + 4);
    t53 = *((unsigned int *)t52);
    t54 = (~(t53));
    t55 = *((unsigned int *)t36);
    t56 = (t55 & t54);
    t57 = (t56 != 0);
    if (t57 > 0)
        goto LAB20;

LAB21:
LAB22:    xsi_set_current_line(663, ng7);
    t4 = (t1 + 26592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng9)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t6, 11, t7, 32);
    t8 = (t1 + 26592);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 11);
    goto LAB7;

LAB18:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(664, ng7);

LAB23:    xsi_set_current_line(665, ng7);
    t58 = ((char*)((ng9)));
    t59 = (t1 + 39872);
    xsi_vlogvar_assign_value(t59, t58, 0, 0, 1);
    xsi_set_current_line(666, ng7);
    goto LAB5;

LAB24:    goto LAB22;

}

static int sp_memory_write(char *t1, char *t2)
{
    char t9[8];
    char t25[8];
    char t41[8];
    char t49[8];
    char t88[8];
    char t94[8];
    char t98[8];
    char t101[8];
    char t107[8];
    char t110[8];
    char t141[8];
    char t154[8];
    char t156[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    int t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    double t87;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t95;
    char *t96;
    char *t97;
    char *t99;
    char *t100;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t108;
    char *t109;
    char *t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    int t127;
    int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    char *t151;
    char *t152;
    char *t153;
    char *t155;
    char *t157;
    int t158;
    int t159;
    int t160;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 14024);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(680, ng7);

LAB5:    t5 = (t1 + 872);
    xsi_vlog_namedbase_setdisablestate(t5, &&LAB6);
    xsi_vlog_namedbase_pushprocess(t5, t2);

LAB7:    xsi_set_current_line(681, ng7);
    t6 = (t1 + 26112);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t10) != 0)
        goto LAB10;

LAB11:    t17 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t17);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB12;

LAB13:    memcpy(t49, t9, 8);

LAB14:    t81 = (t49 + 4);
    t82 = *((unsigned int *)t81);
    t83 = (~(t82));
    t84 = *((unsigned int *)t49);
    t85 = (t84 & t83);
    t86 = (t85 != 0);
    if (t86 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(684, ng7);
    t4 = (t1 + 26112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t7) != 0)
        goto LAB33;

LAB34:    t10 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB35;

LAB36:    memcpy(t110, t9, 8);

LAB37:    t135 = (t110 + 4);
    t136 = *((unsigned int *)t135);
    t137 = (~(t136));
    t138 = *((unsigned int *)t110);
    t139 = (t138 & t137);
    t140 = (t139 != 0);
    if (t140 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(687, ng7);
    t4 = (t1 + 40192);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng9)));
    t8 = (t1 + 5848);
    t10 = *((char **)t8);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_lshift(t9, 32, t7, 32, t10, 32);
    t8 = ((char*)((ng9)));
    memset(t25, 0, 8);
    xsi_vlog_unsigned_minus(t25, 32, t9, 32, t8, 32);
    memset(t41, 0, 8);
    t16 = (t6 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB75;

LAB74:    t17 = (t25 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB75;

LAB78:    if (*((unsigned int *)t6) > *((unsigned int *)t25))
        goto LAB76;

LAB77:    t22 = (t41 + 4);
    t11 = *((unsigned int *)t22);
    t12 = (~(t11));
    t13 = *((unsigned int *)t41);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB79;

LAB80:    xsi_set_current_line(690, ng7);
    t4 = (t1 + 40352);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t8 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t18 = (t14 ^ t15);
    t19 = (t13 | t18);
    t20 = *((unsigned int *)t8);
    t28 = *((unsigned int *)t10);
    t29 = (t20 | t28);
    t30 = (~(t29));
    t31 = (t19 & t30);
    if (t31 != 0)
        goto LAB87;

LAB84:    if (t29 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t9) = 1;

LAB87:    t17 = (t9 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t9);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(692, ng7);
    t4 = (t1 + 40352);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    memset(t9, 0, 8);
    t8 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t18 = (t14 ^ t15);
    t19 = (t13 | t18);
    t20 = *((unsigned int *)t8);
    t28 = *((unsigned int *)t10);
    t29 = (t20 | t28);
    t30 = (~(t29));
    t31 = (t19 & t30);
    if (t31 != 0)
        goto LAB96;

LAB93:    if (t29 != 0)
        goto LAB95;

LAB94:    *((unsigned int *)t9) = 1;

LAB96:    t17 = (t9 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t9);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(694, ng7);

LAB104:    xsi_set_current_line(695, ng7);
    t4 = ((char*)((ng8)));
    t5 = (t1 + 40672);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(696, ng7);
    xsi_set_current_line(696, ng7);
    t4 = ((char*)((ng8)));
    t5 = (t1 + 40992);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB105:    t4 = (t1 + 40992);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 5712);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    xsi_vlog_signed_less(t9, 32, t6, 32, t8, 32);
    t7 = (t9 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB106;

LAB107:    xsi_set_current_line(699, ng7);
    t4 = (t1 + 40512);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 40672);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t10);
    t13 = (t11 & t12);
    *((unsigned int *)t9) = t13;
    t16 = (t6 + 4);
    t17 = (t10 + 4);
    t21 = (t9 + 4);
    t14 = *((unsigned int *)t16);
    t15 = *((unsigned int *)t17);
    t18 = (t14 | t15);
    *((unsigned int *)t21) = t18;
    t19 = *((unsigned int *)t21);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB116;

LAB117:
LAB118:    t24 = (t1 + 40192);
    t26 = (t24 + 56U);
    t27 = *((char **)t26);
    t40 = (t2 + 56U);
    t42 = *((char **)t40);
    t48 = (t1 + 14456);
    t53 = xsi_create_subprogram_invocation(t42, 0, t1, t48, 0, t2);
    t54 = (t1 + 41312);
    xsi_vlogvar_assign_value(t54, t27, 0, 0, 23);

LAB119:    t55 = (t2 + 64U);
    t63 = *((char **)t55);
    t64 = (t63 + 80U);
    t81 = *((char **)t64);
    t89 = (t81 + 272U);
    t90 = *((char **)t89);
    t91 = (t90 + 0U);
    t92 = *((char **)t91);
    t127 = ((int  (*)(char *, char *))t92)(t1, t63);
    if (t127 != 0)
        goto LAB121;

LAB120:    t63 = (t2 + 64U);
    t93 = *((char **)t63);
    t63 = (t1 + 41152);
    t95 = (t63 + 56U);
    t96 = *((char **)t95);
    memcpy(t25, t96, 8);
    t97 = (t1 + 14456);
    t99 = (t2 + 56U);
    t100 = *((char **)t99);
    xsi_delete_subprogram_invocation(t97, t93, t1, t100, t2);
    t102 = (t1 + 40672);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    memset(t41, 0, 8);
    t105 = (t41 + 4);
    t106 = (t104 + 4);
    t47 = *((unsigned int *)t104);
    t50 = (~(t47));
    *((unsigned int *)t41) = t50;
    *((unsigned int *)t105) = 0;
    if (*((unsigned int *)t106) != 0)
        goto LAB123;

LAB122:    t58 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t58 & 65535U);
    t59 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t59 & 65535U);
    t60 = *((unsigned int *)t25);
    t61 = *((unsigned int *)t41);
    t62 = (t60 & t61);
    *((unsigned int *)t49) = t62;
    t108 = (t25 + 4);
    t109 = (t41 + 4);
    t111 = (t49 + 4);
    t65 = *((unsigned int *)t108);
    t66 = *((unsigned int *)t109);
    t67 = (t65 | t66);
    *((unsigned int *)t111) = t67;
    t68 = *((unsigned int *)t111);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB124;

LAB125:
LAB126:    t116 = *((unsigned int *)t9);
    t119 = *((unsigned int *)t49);
    t120 = (t116 | t119);
    *((unsigned int *)t88) = t120;
    t117 = (t9 + 4);
    t118 = (t49 + 4);
    t135 = (t88 + 4);
    t121 = *((unsigned int *)t117);
    t122 = *((unsigned int *)t118);
    t123 = (t121 | t122);
    *((unsigned int *)t135) = t123;
    t124 = *((unsigned int *)t135);
    t125 = (t124 != 0);
    if (t125 == 1)
        goto LAB127;

LAB128:
LAB129:    t144 = (t1 + 40832);
    xsi_vlogvar_assign_value(t144, t88, 0, 0, 16);

LAB99:
LAB90:
LAB81:
LAB71:
LAB28:    xsi_set_current_line(702, ng7);
    t4 = (t1 + 26752);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng9)));
    t8 = (t1 + 6120);
    t10 = *((char **)t8);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_lshift(t9, 32, t7, 32, t10, 32);
    memset(t25, 0, 8);
    t8 = (t6 + 4);
    t16 = (t9 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t9);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t16);
    t18 = (t14 ^ t15);
    t19 = (t13 | t18);
    t20 = *((unsigned int *)t8);
    t28 = *((unsigned int *)t16);
    t29 = (t20 | t28);
    t30 = (~(t29));
    t31 = (t19 & t30);
    if (t31 != 0)
        goto LAB133;

LAB130:    if (t29 != 0)
        goto LAB132;

LAB131:    *((unsigned int *)t25) = 1;

LAB133:    t21 = (t25 + 4);
    t32 = *((unsigned int *)t21);
    t33 = (~(t32));
    t34 = *((unsigned int *)t25);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB134;

LAB135:    xsi_set_current_line(705, ng7);

LAB138:    xsi_set_current_line(706, ng7);
    t4 = (t1 + 40192);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t10 = (t1 + 13592);
    t16 = xsi_create_subprogram_invocation(t8, 0, t1, t10, 0, t2);
    t17 = (t1 + 40032);
    xsi_vlogvar_assign_value(t17, t6, 0, 0, 23);

LAB139:    t21 = (t2 + 64U);
    t22 = *((char **)t21);
    t23 = (t22 + 80U);
    t24 = *((char **)t23);
    t26 = (t24 + 272U);
    t27 = *((char **)t26);
    t40 = (t27 + 0U);
    t42 = *((char **)t40);
    t73 = ((int  (*)(char *, char *))t42)(t1, t22);
    if (t73 != 0)
        goto LAB141;

LAB140:    t22 = (t2 + 64U);
    t48 = *((char **)t22);
    t22 = (t1 + 39872);
    t53 = (t22 + 56U);
    t54 = *((char **)t53);
    memcpy(t25, t54, 8);
    t55 = (t1 + 13592);
    t63 = (t2 + 56U);
    t64 = *((char **)t63);
    xsi_delete_subprogram_invocation(t55, t48, t1, t64, t2);
    memset(t9, 0, 8);
    t81 = (t25 + 4);
    t11 = *((unsigned int *)t81);
    t12 = (~(t11));
    t13 = *((unsigned int *)t25);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB145;

LAB143:    if (*((unsigned int *)t81) == 0)
        goto LAB142;

LAB144:    t89 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t89) = 1;

LAB145:    t90 = (t9 + 4);
    t18 = *((unsigned int *)t90);
    t19 = (~(t18));
    t20 = *((unsigned int *)t9);
    t28 = (t20 & t19);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB146;

LAB147:
LAB148:    xsi_set_current_line(709, ng7);
    t4 = (t1 + 40192);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 26432);
    t8 = (t1 + 26432);
    t10 = (t8 + 72U);
    t16 = *((char **)t10);
    t17 = (t1 + 26432);
    t21 = (t17 + 64U);
    t22 = *((char **)t21);
    t23 = (t1 + 26592);
    t24 = (t23 + 56U);
    t26 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t9, t25, t16, t22, 2, 1, t26, 11, 2);
    t27 = (t9 + 4);
    t11 = *((unsigned int *)t27);
    t73 = (!(t11));
    t40 = (t25 + 4);
    t12 = *((unsigned int *)t40);
    t74 = (!(t12));
    t127 = (t73 && t74);
    if (t127 == 1)
        goto LAB150;

LAB151:    xsi_set_current_line(710, ng7);
    t4 = (t1 + 40832);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 26272);
    t8 = (t1 + 26272);
    t10 = (t8 + 72U);
    t16 = *((char **)t10);
    t17 = (t1 + 26272);
    t21 = (t17 + 64U);
    t22 = *((char **)t21);
    t23 = (t1 + 26592);
    t24 = (t23 + 56U);
    t26 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t9, t25, t16, t22, 2, 1, t26, 11, 2);
    t27 = (t9 + 4);
    t11 = *((unsigned int *)t27);
    t73 = (!(t11));
    t40 = (t25 + 4);
    t12 = *((unsigned int *)t40);
    t74 = (!(t12));
    t127 = (t73 && t74);
    if (t127 == 1)
        goto LAB152;

LAB153:
LAB136:    t4 = (t1 + 872);
    xsi_vlog_namedbase_popprocess(t4);

LAB6:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    *((unsigned int *)t9) = 1;
    goto LAB11;

LAB10:    t16 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB11;

LAB12:    t21 = (t1 + 34752);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng8)));
    memset(t25, 0, 8);
    t26 = (t23 + 4);
    t27 = (t24 + 4);
    t28 = *((unsigned int *)t23);
    t29 = *((unsigned int *)t24);
    t30 = (t28 ^ t29);
    t31 = *((unsigned int *)t26);
    t32 = *((unsigned int *)t27);
    t33 = (t31 ^ t32);
    t34 = (t30 | t33);
    t35 = *((unsigned int *)t26);
    t36 = *((unsigned int *)t27);
    t37 = (t35 | t36);
    t38 = (~(t37));
    t39 = (t34 & t38);
    if (t39 != 0)
        goto LAB18;

LAB15:    if (t37 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t25) = 1;

LAB18:    memset(t41, 0, 8);
    t42 = (t25 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (~(t43));
    t45 = *((unsigned int *)t25);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t42) != 0)
        goto LAB21;

LAB22:    t50 = *((unsigned int *)t9);
    t51 = *((unsigned int *)t41);
    t52 = (t50 & t51);
    *((unsigned int *)t49) = t52;
    t53 = (t9 + 4);
    t54 = (t41 + 4);
    t55 = (t49 + 4);
    t56 = *((unsigned int *)t53);
    t57 = *((unsigned int *)t54);
    t58 = (t56 | t57);
    *((unsigned int *)t55) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 != 0);
    if (t60 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t40 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t41) = 1;
    goto LAB22;

LAB21:    t48 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB22;

LAB23:    t61 = *((unsigned int *)t49);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t49) = (t61 | t62);
    t63 = (t9 + 4);
    t64 = (t41 + 4);
    t65 = *((unsigned int *)t9);
    t66 = (~(t65));
    t67 = *((unsigned int *)t63);
    t68 = (~(t67));
    t69 = *((unsigned int *)t41);
    t70 = (~(t69));
    t71 = *((unsigned int *)t64);
    t72 = (~(t71));
    t73 = (t66 & t68);
    t74 = (t70 & t72);
    t75 = (~(t73));
    t76 = (~(t74));
    t77 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t77 & t75);
    t78 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t78 & t76);
    t79 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t79 & t75);
    t80 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t80 & t76);
    goto LAB25;

LAB26:    xsi_set_current_line(681, ng7);

LAB29:    xsi_set_current_line(682, ng7);
    t87 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t88) = t87;
    t89 = (t1 + 40192);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    t92 = (t1 + 872);
    xsi_vlogfile_write(1, 0, 0, ng10, 3, t92, (char)114, t88, 64, (char)118, t91, 23);
    xsi_set_current_line(683, ng7);
    goto LAB6;

LAB30:    goto LAB28;

LAB31:    *((unsigned int *)t9) = 1;
    goto LAB34;

LAB33:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB34;

LAB35:    t16 = (t1 + 40192);
    t17 = (t16 + 56U);
    t21 = *((char **)t17);
    t22 = (t1 + 34592);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    t26 = (t21 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB39;

LAB38:    t27 = (t24 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB39;

LAB42:    if (*((unsigned int *)t21) < *((unsigned int *)t24))
        goto LAB40;

LAB41:    memset(t41, 0, 8);
    t42 = (t25 + 4);
    t28 = *((unsigned int *)t42);
    t29 = (~(t28));
    t30 = *((unsigned int *)t25);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t42) != 0)
        goto LAB45;

LAB46:    t53 = (t41 + 4);
    t33 = *((unsigned int *)t41);
    t34 = (!(t33));
    t35 = *((unsigned int *)t53);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB47;

LAB48:    memcpy(t101, t41, 8);

LAB49:    memset(t107, 0, 8);
    t108 = (t101 + 4);
    t72 = *((unsigned int *)t108);
    t75 = (~(t72));
    t76 = *((unsigned int *)t101);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t108) != 0)
        goto LAB64;

LAB65:    t79 = *((unsigned int *)t9);
    t80 = *((unsigned int *)t107);
    t82 = (t79 & t80);
    *((unsigned int *)t110) = t82;
    t111 = (t9 + 4);
    t112 = (t107 + 4);
    t113 = (t110 + 4);
    t83 = *((unsigned int *)t111);
    t84 = *((unsigned int *)t112);
    t85 = (t83 | t84);
    *((unsigned int *)t113) = t85;
    t86 = *((unsigned int *)t113);
    t114 = (t86 != 0);
    if (t114 == 1)
        goto LAB66;

LAB67:
LAB68:    goto LAB37;

LAB39:    t40 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB41;

LAB40:    *((unsigned int *)t25) = 1;
    goto LAB41;

LAB43:    *((unsigned int *)t41) = 1;
    goto LAB46;

LAB45:    t48 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB46;

LAB47:    t54 = (t1 + 40192);
    t55 = (t54 + 56U);
    t63 = *((char **)t55);
    t64 = (t1 + 34592);
    t81 = (t64 + 56U);
    t89 = *((char **)t81);
    t90 = (t1 + 34752);
    t91 = (t90 + 56U);
    t92 = *((char **)t91);
    memset(t49, 0, 8);
    xsi_vlog_unsigned_add(t49, 32, t89, 24, t92, 24);
    t93 = ((char*)((ng9)));
    memset(t88, 0, 8);
    xsi_vlog_unsigned_minus(t88, 32, t49, 32, t93, 32);
    memset(t94, 0, 8);
    t95 = (t63 + 4);
    if (*((unsigned int *)t95) != 0)
        goto LAB51;

LAB50:    t96 = (t88 + 4);
    if (*((unsigned int *)t96) != 0)
        goto LAB51;

LAB54:    if (*((unsigned int *)t63) > *((unsigned int *)t88))
        goto LAB52;

LAB53:    memset(t98, 0, 8);
    t99 = (t94 + 4);
    t37 = *((unsigned int *)t99);
    t38 = (~(t37));
    t39 = *((unsigned int *)t94);
    t43 = (t39 & t38);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t99) != 0)
        goto LAB57;

LAB58:    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t98);
    t47 = (t45 | t46);
    *((unsigned int *)t101) = t47;
    t102 = (t41 + 4);
    t103 = (t98 + 4);
    t104 = (t101 + 4);
    t50 = *((unsigned int *)t102);
    t51 = *((unsigned int *)t103);
    t52 = (t50 | t51);
    *((unsigned int *)t104) = t52;
    t56 = *((unsigned int *)t104);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB59;

LAB60:
LAB61:    goto LAB49;

LAB51:    t97 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB53;

LAB52:    *((unsigned int *)t94) = 1;
    goto LAB53;

LAB55:    *((unsigned int *)t98) = 1;
    goto LAB58;

LAB57:    t100 = (t98 + 4);
    *((unsigned int *)t98) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB58;

LAB59:    t58 = *((unsigned int *)t101);
    t59 = *((unsigned int *)t104);
    *((unsigned int *)t101) = (t58 | t59);
    t105 = (t41 + 4);
    t106 = (t98 + 4);
    t60 = *((unsigned int *)t105);
    t61 = (~(t60));
    t62 = *((unsigned int *)t41);
    t73 = (t62 & t61);
    t65 = *((unsigned int *)t106);
    t66 = (~(t65));
    t67 = *((unsigned int *)t98);
    t74 = (t67 & t66);
    t68 = (~(t73));
    t69 = (~(t74));
    t70 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t70 & t68);
    t71 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t71 & t69);
    goto LAB61;

LAB62:    *((unsigned int *)t107) = 1;
    goto LAB65;

LAB64:    t109 = (t107 + 4);
    *((unsigned int *)t107) = 1;
    *((unsigned int *)t109) = 1;
    goto LAB65;

LAB66:    t115 = *((unsigned int *)t110);
    t116 = *((unsigned int *)t113);
    *((unsigned int *)t110) = (t115 | t116);
    t117 = (t9 + 4);
    t118 = (t107 + 4);
    t119 = *((unsigned int *)t9);
    t120 = (~(t119));
    t121 = *((unsigned int *)t117);
    t122 = (~(t121));
    t123 = *((unsigned int *)t107);
    t124 = (~(t123));
    t125 = *((unsigned int *)t118);
    t126 = (~(t125));
    t127 = (t120 & t122);
    t128 = (t124 & t126);
    t129 = (~(t127));
    t130 = (~(t128));
    t131 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t131 & t129);
    t132 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t132 & t130);
    t133 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t133 & t129);
    t134 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t134 & t130);
    goto LAB68;

LAB69:    xsi_set_current_line(684, ng7);

LAB72:    xsi_set_current_line(685, ng7);
    t87 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t141) = t87;
    t142 = (t1 + 40192);
    t143 = (t142 + 56U);
    t144 = *((char **)t143);
    t145 = (t1 + 34592);
    t146 = (t145 + 56U);
    t147 = *((char **)t146);
    t148 = (t1 + 34592);
    t149 = (t148 + 56U);
    t150 = *((char **)t149);
    t151 = (t1 + 34752);
    t152 = (t151 + 56U);
    t153 = *((char **)t152);
    memset(t154, 0, 8);
    xsi_vlog_unsigned_add(t154, 32, t150, 24, t153, 24);
    t155 = ((char*)((ng9)));
    memset(t156, 0, 8);
    xsi_vlog_unsigned_minus(t156, 32, t154, 32, t155, 32);
    t157 = (t1 + 872);
    xsi_vlogfile_write(1, 0, 0, ng11, 5, t157, (char)114, t141, 64, (char)118, t144, 23, (char)118, t147, 24, (char)118, t156, 32);
    xsi_set_current_line(686, ng7);
    goto LAB6;

LAB73:    goto LAB71;

LAB75:    t21 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB77;

LAB76:    *((unsigned int *)t41) = 1;
    goto LAB77;

LAB79:    xsi_set_current_line(687, ng7);

LAB82:    xsi_set_current_line(688, ng7);
    t87 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t49) = t87;
    t23 = (t1 + 40192);
    t24 = (t23 + 56U);
    t26 = *((char **)t24);
    t27 = ((char*)((ng9)));
    t40 = (t1 + 5848);
    t42 = *((char **)t40);
    memset(t88, 0, 8);
    xsi_vlog_signed_lshift(t88, 32, t27, 32, t42, 32);
    t40 = ((char*)((ng9)));
    memset(t94, 0, 8);
    xsi_vlog_signed_minus(t94, 32, t88, 32, t40, 32);
    t48 = (t1 + 872);
    xsi_vlogfile_write(1, 0, 0, ng12, 4, t48, (char)114, t49, 64, (char)118, t26, 23, (char)119, t94, 32);
    xsi_set_current_line(689, ng7);
    goto LAB6;

LAB83:    goto LAB81;

LAB86:    t16 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB87;

LAB88:    xsi_set_current_line(690, ng7);

LAB91:    xsi_set_current_line(691, ng7);
    goto LAB6;

LAB92:    goto LAB90;

LAB95:    t16 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB96;

LAB97:    xsi_set_current_line(692, ng7);

LAB100:    xsi_set_current_line(693, ng7);
    t21 = ((char*)((ng13)));
    t22 = (t1 + 40512);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t37 = *((unsigned int *)t21);
    t38 = *((unsigned int *)t24);
    t39 = (t37 & t38);
    *((unsigned int *)t25) = t39;
    t26 = (t21 + 4);
    t27 = (t24 + 4);
    t40 = (t25 + 4);
    t43 = *((unsigned int *)t26);
    t44 = *((unsigned int *)t27);
    t45 = (t43 | t44);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t40);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB101;

LAB102:
LAB103:    t53 = (t1 + 40832);
    xsi_vlogvar_assign_value(t53, t25, 0, 0, 16);
    goto LAB99;

LAB101:    t50 = *((unsigned int *)t25);
    t51 = *((unsigned int *)t40);
    *((unsigned int *)t25) = (t50 | t51);
    t42 = (t21 + 4);
    t48 = (t24 + 4);
    t52 = *((unsigned int *)t21);
    t56 = (~(t52));
    t57 = *((unsigned int *)t42);
    t58 = (~(t57));
    t59 = *((unsigned int *)t24);
    t60 = (~(t59));
    t61 = *((unsigned int *)t48);
    t62 = (~(t61));
    t73 = (t56 & t58);
    t74 = (t60 & t62);
    t65 = (~(t73));
    t66 = (~(t74));
    t67 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t67 & t65);
    t68 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t68 & t66);
    t69 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t69 & t65);
    t70 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t70 & t66);
    goto LAB103;

LAB106:    xsi_set_current_line(696, ng7);

LAB108:    xsi_set_current_line(697, ng7);
    t10 = (t1 + 40672);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    t21 = ((char*)((ng14)));
    t22 = (t1 + 40352);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t26 = (t1 + 40352);
    t27 = (t26 + 72U);
    t40 = *((char **)t27);
    t42 = (t1 + 40992);
    t48 = (t42 + 56U);
    t53 = *((char **)t48);
    xsi_vlog_generic_get_index_select_value(t49, 1, t24, t40, 2, t53, 32, 1);
    memset(t41, 0, 8);
    t54 = (t49 + 4);
    t18 = *((unsigned int *)t54);
    t19 = (~(t18));
    t20 = *((unsigned int *)t49);
    t28 = (t20 & t19);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB112;

LAB110:    if (*((unsigned int *)t54) == 0)
        goto LAB109;

LAB111:    t55 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t55) = 1;

LAB112:    xsi_vlog_mul_concat(t25, 16, 1, t21, 1U, t41, 1);
    t63 = (t1 + 40992);
    t64 = (t63 + 56U);
    t81 = *((char **)t64);
    t89 = (t1 + 5576);
    t90 = *((char **)t89);
    t89 = (t1 + 5712);
    t91 = *((char **)t89);
    memset(t88, 0, 8);
    xsi_vlog_signed_divide(t88, 32, t90, 32, t91, 32);
    memset(t94, 0, 8);
    xsi_vlog_signed_multiply(t94, 32, t81, 32, t88, 32);
    memset(t98, 0, 8);
    xsi_vlog_unsigned_lshift(t98, 16, t25, 16, t94, 32);
    t30 = *((unsigned int *)t17);
    t31 = *((unsigned int *)t98);
    t32 = (t30 | t31);
    *((unsigned int *)t101) = t32;
    t89 = (t17 + 4);
    t92 = (t98 + 4);
    t93 = (t101 + 4);
    t33 = *((unsigned int *)t89);
    t34 = *((unsigned int *)t92);
    t35 = (t33 | t34);
    *((unsigned int *)t93) = t35;
    t36 = *((unsigned int *)t93);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB113;

LAB114:
LAB115:    t97 = (t1 + 40672);
    xsi_vlogvar_assign_value(t97, t101, 0, 0, 16);
    xsi_set_current_line(696, ng7);
    t4 = (t1 + 40992);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng9)));
    memset(t9, 0, 8);
    xsi_vlog_signed_add(t9, 32, t6, 32, t7, 32);
    t8 = (t1 + 40992);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 32);
    goto LAB105;

LAB109:    *((unsigned int *)t41) = 1;
    goto LAB112;

LAB113:    t38 = *((unsigned int *)t101);
    t39 = *((unsigned int *)t93);
    *((unsigned int *)t101) = (t38 | t39);
    t95 = (t17 + 4);
    t96 = (t98 + 4);
    t43 = *((unsigned int *)t95);
    t44 = (~(t43));
    t45 = *((unsigned int *)t17);
    t73 = (t45 & t44);
    t46 = *((unsigned int *)t96);
    t47 = (~(t46));
    t50 = *((unsigned int *)t98);
    t74 = (t50 & t47);
    t51 = (~(t73));
    t52 = (~(t74));
    t56 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t56 & t51);
    t57 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t57 & t52);
    goto LAB115;

LAB116:    t28 = *((unsigned int *)t9);
    t29 = *((unsigned int *)t21);
    *((unsigned int *)t9) = (t28 | t29);
    t22 = (t6 + 4);
    t23 = (t10 + 4);
    t30 = *((unsigned int *)t6);
    t31 = (~(t30));
    t32 = *((unsigned int *)t22);
    t33 = (~(t32));
    t34 = *((unsigned int *)t10);
    t35 = (~(t34));
    t36 = *((unsigned int *)t23);
    t37 = (~(t36));
    t73 = (t31 & t33);
    t74 = (t35 & t37);
    t38 = (~(t73));
    t39 = (~(t74));
    t43 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t43 & t38);
    t44 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t44 & t39);
    t45 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t45 & t38);
    t46 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t46 & t39);
    goto LAB118;

LAB121:    t55 = (t2 + 48U);
    *((char **)t55) = &&LAB119;
    goto LAB1;

LAB123:    t51 = *((unsigned int *)t41);
    t52 = *((unsigned int *)t106);
    *((unsigned int *)t41) = (t51 | t52);
    t56 = *((unsigned int *)t105);
    t57 = *((unsigned int *)t106);
    *((unsigned int *)t105) = (t56 | t57);
    goto LAB122;

LAB124:    t70 = *((unsigned int *)t49);
    t71 = *((unsigned int *)t111);
    *((unsigned int *)t49) = (t70 | t71);
    t112 = (t25 + 4);
    t113 = (t41 + 4);
    t72 = *((unsigned int *)t25);
    t75 = (~(t72));
    t76 = *((unsigned int *)t112);
    t77 = (~(t76));
    t78 = *((unsigned int *)t41);
    t79 = (~(t78));
    t80 = *((unsigned int *)t113);
    t82 = (~(t80));
    t128 = (t75 & t77);
    t158 = (t79 & t82);
    t83 = (~(t128));
    t84 = (~(t158));
    t85 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t85 & t83);
    t86 = *((unsigned int *)t111);
    *((unsigned int *)t111) = (t86 & t84);
    t114 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t114 & t83);
    t115 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t115 & t84);
    goto LAB126;

LAB127:    t126 = *((unsigned int *)t88);
    t129 = *((unsigned int *)t135);
    *((unsigned int *)t88) = (t126 | t129);
    t142 = (t9 + 4);
    t143 = (t49 + 4);
    t130 = *((unsigned int *)t142);
    t131 = (~(t130));
    t132 = *((unsigned int *)t9);
    t159 = (t132 & t131);
    t133 = *((unsigned int *)t143);
    t134 = (~(t133));
    t136 = *((unsigned int *)t49);
    t160 = (t136 & t134);
    t137 = (~(t159));
    t138 = (~(t160));
    t139 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t139 & t137);
    t140 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t140 & t138);
    goto LAB129;

LAB132:    t17 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB133;

LAB134:    xsi_set_current_line(702, ng7);

LAB137:    xsi_set_current_line(703, ng7);
    t87 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t41) = t87;
    t22 = (t1 + 40192);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t26 = (t1 + 40512);
    t27 = (t26 + 56U);
    t40 = *((char **)t27);
    t42 = (t1 + 872);
    xsi_vlogfile_write(1, 0, 0, ng15, 4, t42, (char)114, t41, 64, (char)118, t24, 23, (char)118, t40, 16);
    xsi_set_current_line(704, ng7);
    t4 = ((char*)((ng8)));
    xsi_vlog_stop(*((unsigned int *)t4));
    goto LAB136;

LAB141:    t21 = (t2 + 48U);
    *((char **)t21) = &&LAB139;
    goto LAB1;

LAB142:    *((unsigned int *)t9) = 1;
    goto LAB145;

LAB146:    xsi_set_current_line(706, ng7);

LAB149:    xsi_set_current_line(707, ng7);
    t91 = (t1 + 26752);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    t95 = ((char*)((ng9)));
    memset(t41, 0, 8);
    xsi_vlog_unsigned_add(t41, 32, t93, 11, t95, 32);
    t96 = (t1 + 26752);
    xsi_vlogvar_assign_value(t96, t41, 0, 0, 11);
    goto LAB148;

LAB150:    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t25);
    t128 = (t13 - t14);
    t158 = (t128 + 1);
    xsi_vlogvar_assign_value(t7, t6, 0, *((unsigned int *)t25), t158);
    goto LAB151;

LAB152:    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t25);
    t128 = (t13 - t14);
    t158 = (t128 + 1);
    xsi_vlogvar_assign_value(t7, t6, 0, *((unsigned int *)t25), t158);
    goto LAB153;

}

static int sp_memory_read(char *t1, char *t2)
{
    char t7[8];
    char t30[8];
    char t44[8];
    char t46[8];
    char t47[8];
    char t51[8];
    char t54[8];
    char t85[8];
    char t98[8];
    char t100[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    double t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t48;
    char *t49;
    char *t50;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t99;
    char *t101;

LAB0:    t0 = 1;
    xsi_set_current_line(717, ng7);

LAB2:    xsi_set_current_line(718, ng7);
    t3 = (t1 + 34752);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng8)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB6;

LAB3:    if (t19 != 0)
        goto LAB5;

LAB4:    *((unsigned int *)t7) = 1;

LAB6:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(721, ng7);
    t3 = (t1 + 41312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t1 + 34592);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t22 = (t5 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB12;

LAB11:    t23 = (t9 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB15:    if (*((unsigned int *)t5) < *((unsigned int *)t9))
        goto LAB13;

LAB14:    memset(t30, 0, 8);
    t32 = (t7 + 4);
    t10 = *((unsigned int *)t32);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t32) != 0)
        goto LAB18;

LAB19:    t34 = (t30 + 4);
    t15 = *((unsigned int *)t30);
    t16 = (!(t15));
    t17 = *((unsigned int *)t34);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB20;

LAB21:    memcpy(t54, t30, 8);

LAB22:    t79 = (t54 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (~(t80));
    t82 = *((unsigned int *)t54);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(724, ng7);

LAB39:    xsi_set_current_line(725, ng7);
    t3 = (t1 + 41312);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 13592);
    t22 = xsi_create_subprogram_invocation(t8, 0, t1, t9, 0, t2);
    t23 = (t1 + 40032);
    xsi_vlogvar_assign_value(t23, t5, 0, 0, 23);

LAB40:    t31 = (t2 + 64U);
    t32 = *((char **)t31);
    t33 = (t32 + 80U);
    t34 = *((char **)t33);
    t35 = (t34 + 272U);
    t36 = *((char **)t35);
    t37 = (t36 + 0U);
    t38 = *((char **)t37);
    t70 = ((int  (*)(char *, char *))t38)(t1, t32);
    if (t70 != 0)
        goto LAB42;

LAB41:    t32 = (t2 + 64U);
    t39 = *((char **)t32);
    t32 = (t1 + 39872);
    t40 = (t32 + 56U);
    t41 = *((char **)t40);
    memcpy(t7, t41, 8);
    t42 = (t1 + 13592);
    t43 = (t2 + 56U);
    t45 = *((char **)t43);
    xsi_delete_subprogram_invocation(t42, t39, t1, t45, t2);
    t48 = (t7 + 4);
    t10 = *((unsigned int *)t48);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(727, ng7);

LAB47:    xsi_set_current_line(728, ng7);
    t3 = ((char*)((ng16)));
    t4 = (t1 + 41152);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);

LAB45:
LAB37:
LAB9:    t0 = 0;

LAB1:    return t0;
LAB5:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB6;

LAB7:    xsi_set_current_line(718, ng7);

LAB10:    xsi_set_current_line(719, ng7);
    t29 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t30) = t29;
    t31 = (t1 + 41312);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t1 + 14456);
    xsi_vlogfile_write(1, 0, 0, ng10, 3, t34, (char)114, t30, 64, (char)118, t33, 23);
    xsi_set_current_line(720, ng7);
    t3 = ((char*)((ng16)));
    t4 = (t1 + 41152);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB9;

LAB12:    t31 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB14;

LAB13:    *((unsigned int *)t7) = 1;
    goto LAB14;

LAB16:    *((unsigned int *)t30) = 1;
    goto LAB19;

LAB18:    t33 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB19;

LAB20:    t35 = (t1 + 41312);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t1 + 34592);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = (t1 + 34752);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t44, 0, 8);
    xsi_vlog_unsigned_add(t44, 32, t40, 24, t43, 24);
    t45 = ((char*)((ng9)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_minus(t46, 32, t44, 32, t45, 32);
    memset(t47, 0, 8);
    t48 = (t37 + 4);
    if (*((unsigned int *)t48) != 0)
        goto LAB24;

LAB23:    t49 = (t46 + 4);
    if (*((unsigned int *)t49) != 0)
        goto LAB24;

LAB27:    if (*((unsigned int *)t37) > *((unsigned int *)t46))
        goto LAB25;

LAB26:    memset(t51, 0, 8);
    t52 = (t47 + 4);
    t19 = *((unsigned int *)t52);
    t20 = (~(t19));
    t21 = *((unsigned int *)t47);
    t24 = (t21 & t20);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t52) != 0)
        goto LAB30;

LAB31:    t26 = *((unsigned int *)t30);
    t27 = *((unsigned int *)t51);
    t28 = (t26 | t27);
    *((unsigned int *)t54) = t28;
    t55 = (t30 + 4);
    t56 = (t51 + 4);
    t57 = (t54 + 4);
    t58 = *((unsigned int *)t55);
    t59 = *((unsigned int *)t56);
    t60 = (t58 | t59);
    *((unsigned int *)t57) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 != 0);
    if (t62 == 1)
        goto LAB32;

LAB33:
LAB34:    goto LAB22;

LAB24:    t50 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB26;

LAB25:    *((unsigned int *)t47) = 1;
    goto LAB26;

LAB28:    *((unsigned int *)t51) = 1;
    goto LAB31;

LAB30:    t53 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB31;

LAB32:    t63 = *((unsigned int *)t54);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t54) = (t63 | t64);
    t65 = (t30 + 4);
    t66 = (t51 + 4);
    t67 = *((unsigned int *)t65);
    t68 = (~(t67));
    t69 = *((unsigned int *)t30);
    t70 = (t69 & t68);
    t71 = *((unsigned int *)t66);
    t72 = (~(t71));
    t73 = *((unsigned int *)t51);
    t74 = (t73 & t72);
    t75 = (~(t70));
    t76 = (~(t74));
    t77 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t77 & t75);
    t78 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t78 & t76);
    goto LAB34;

LAB35:    xsi_set_current_line(721, ng7);

LAB38:    xsi_set_current_line(722, ng7);
    t29 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t85) = t29;
    t86 = (t1 + 41312);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = (t1 + 34592);
    t90 = (t89 + 56U);
    t91 = *((char **)t90);
    t92 = (t1 + 34592);
    t93 = (t92 + 56U);
    t94 = *((char **)t93);
    t95 = (t1 + 34752);
    t96 = (t95 + 56U);
    t97 = *((char **)t96);
    memset(t98, 0, 8);
    xsi_vlog_unsigned_add(t98, 32, t94, 24, t97, 24);
    t99 = ((char*)((ng9)));
    memset(t100, 0, 8);
    xsi_vlog_unsigned_minus(t100, 32, t98, 32, t99, 32);
    t101 = (t1 + 14456);
    xsi_vlogfile_write(1, 0, 0, ng11, 5, t101, (char)114, t85, 64, (char)118, t88, 23, (char)118, t91, 24, (char)118, t100, 32);
    xsi_set_current_line(723, ng7);
    t3 = ((char*)((ng16)));
    t4 = (t1 + 41152);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB37;

LAB42:    t31 = (t2 + 48U);
    *((char **)t31) = &&LAB40;
    goto LAB1;

LAB43:    xsi_set_current_line(725, ng7);

LAB46:    xsi_set_current_line(726, ng7);
    t49 = (t1 + 26272);
    t50 = (t49 + 56U);
    t52 = *((char **)t50);
    t53 = (t1 + 26272);
    t55 = (t53 + 72U);
    t56 = *((char **)t55);
    t57 = (t1 + 26272);
    t65 = (t57 + 64U);
    t66 = *((char **)t65);
    t79 = (t1 + 26592);
    t86 = (t79 + 56U);
    t87 = *((char **)t86);
    xsi_vlog_generic_get_array_select_value(t30, 16, t52, t56, t66, 2, 1, t87, 11, 2);
    t88 = (t1 + 41152);
    xsi_vlogvar_assign_value(t88, t30, 0, 0, 16);
    goto LAB45;

}

static int sp_register_write(char *t1, char *t2)
{
    char t10[8];
    char t29[8];
    char t30[8];
    char t31[8];
    char t53[8];
    char t90[8];
    char t120[8];
    char t133[8];
    char t134[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    double t119;
    char *t121;
    double t122;
    double t123;
    double t124;
    double t125;
    double t126;
    double t127;
    double t128;
    double t129;
    double t130;
    int t131;
    int t132;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 14888);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(738, ng7);

LAB5:    xsi_set_current_line(740, ng7);
    t5 = (t1 + 41472);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);

LAB6:    t8 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 2, t8, 2);
    if (t9 == 1)
        goto LAB7;

LAB8:    t4 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t7, 2, t4, 2);
    if (t9 == 1)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(782, ng7);
    t4 = (t1 + 41792);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 4);
    t16 = *((unsigned int *)t8);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB122;

LAB123:
LAB124:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(741, ng7);

LAB12:    xsi_set_current_line(742, ng7);
    t11 = (t1 + 41632);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t10, 0, 8);
    t14 = (t10 + 4);
    t15 = (t13 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (t16 >> 0);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 7U);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 & 7U);
    t22 = (t1 + 32192);
    xsi_vlogvar_assign_value(t22, t10, 0, 0, 3);
    xsi_set_current_line(743, ng7);
    t4 = (t1 + 41632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t11 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (t16 >> 3);
    t18 = (t17 & 1);
    *((unsigned int *)t10) = t18;
    t19 = *((unsigned int *)t11);
    t20 = (t19 >> 3);
    t21 = (t20 & 1);
    *((unsigned int *)t8) = t21;
    t12 = (t1 + 32352);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 1);
    xsi_set_current_line(744, ng7);
    t4 = (t1 + 41632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t11 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (t16 >> 4);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t11);
    t19 = (t18 >> 4);
    *((unsigned int *)t8) = t19;
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 3U);
    t21 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t21 & 3U);
    t12 = (t1 + 32512);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 2);
    xsi_set_current_line(745, ng7);
    t4 = (t1 + 41632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t11 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (t16 >> 6);
    t18 = (t17 & 1);
    *((unsigned int *)t10) = t18;
    t19 = *((unsigned int *)t11);
    t20 = (t19 >> 6);
    t21 = (t20 & 1);
    *((unsigned int *)t8) = t21;
    t12 = (t1 + 32672);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 1);
    xsi_set_current_line(746, ng7);
    t4 = (t1 + 41632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t11 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (t16 >> 8);
    t18 = (t17 & 1);
    *((unsigned int *)t10) = t18;
    t19 = *((unsigned int *)t11);
    t20 = (t19 >> 8);
    t21 = (t20 & 1);
    *((unsigned int *)t8) = t21;
    t12 = (t1 + 32832);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 1);
    xsi_set_current_line(747, ng7);
    t4 = (t1 + 41632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t11 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (t16 >> 9);
    t18 = (t17 & 1);
    *((unsigned int *)t10) = t18;
    t19 = *((unsigned int *)t11);
    t20 = (t19 >> 9);
    t21 = (t20 & 1);
    *((unsigned int *)t8) = t21;
    t12 = (t1 + 32992);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 1);
    xsi_set_current_line(748, ng7);
    t4 = (t1 + 32992);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng17)));
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    t12 = (t8 + 4);
    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t8);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 ^ t20);
    t23 = (t18 | t21);
    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t12);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB16;

LAB13:    if (t26 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t10) = 1;

LAB16:    t14 = (t1 + 33152);
    xsi_vlogvar_assign_value(t14, t10, 0, 0, 1);
    xsi_set_current_line(749, ng7);
    t4 = (t1 + 41632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t11 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (t16 >> 10);
    t18 = (t17 & 1);
    *((unsigned int *)t10) = t18;
    t19 = *((unsigned int *)t11);
    t20 = (t19 >> 10);
    t21 = (t20 & 1);
    *((unsigned int *)t8) = t21;
    t12 = (t1 + 33312);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 1);
    xsi_set_current_line(750, ng7);
    t4 = (t1 + 41632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t30, 0, 8);
    t8 = (t30 + 4);
    t11 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (t16 >> 11);
    *((unsigned int *)t30) = t17;
    t18 = *((unsigned int *)t11);
    t19 = (t18 >> 11);
    *((unsigned int *)t8) = t19;
    t20 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t20 & 7U);
    t21 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t21 & 7U);
    t12 = ((char*)((ng6)));
    memset(t31, 0, 8);
    t13 = (t30 + 4);
    t14 = (t12 + 4);
    t23 = *((unsigned int *)t30);
    t24 = *((unsigned int *)t12);
    t25 = (t23 ^ t24);
    t26 = *((unsigned int *)t13);
    t27 = *((unsigned int *)t14);
    t28 = (t26 ^ t27);
    t32 = (t25 | t28);
    t33 = *((unsigned int *)t13);
    t34 = *((unsigned int *)t14);
    t35 = (t33 | t34);
    t36 = (~(t35));
    t37 = (t32 & t36);
    if (t37 != 0)
        goto LAB20;

LAB17:    if (t35 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t31) = 1;

LAB20:    memset(t29, 0, 8);
    t22 = (t31 + 4);
    t38 = *((unsigned int *)t22);
    t39 = (~(t38));
    t40 = *((unsigned int *)t31);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t22) != 0)
        goto LAB23;

LAB24:    t44 = (t29 + 4);
    t45 = *((unsigned int *)t29);
    t46 = *((unsigned int *)t44);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB25;

LAB26:    t49 = *((unsigned int *)t29);
    t50 = (~(t49));
    t51 = *((unsigned int *)t44);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t44) > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t29) > 0)
        goto LAB31;

LAB32:    memcpy(t10, t53, 8);

LAB33:    t65 = (t1 + 33472);
    xsi_vlogvar_assign_value(t65, t10, 0, 0, 4);
    xsi_set_current_line(751, ng7);
    t4 = (t1 + 41632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t11 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (t16 >> 14);
    t18 = (t17 & 1);
    *((unsigned int *)t10) = t18;
    t19 = *((unsigned int *)t11);
    t20 = (t19 >> 14);
    t21 = (t20 & 1);
    *((unsigned int *)t8) = t21;
    t12 = (t1 + 33632);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 1);
    xsi_set_current_line(752, ng7);
    t4 = (t1 + 33792);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t10, 0, 8);
    t8 = (t6 + 4);
    t16 = *((unsigned int *)t8);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB37;

LAB35:    if (*((unsigned int *)t8) == 0)
        goto LAB34;

LAB36:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;

LAB37:    memset(t29, 0, 8);
    t12 = (t10 + 4);
    t21 = *((unsigned int *)t12);
    t23 = (~(t21));
    t24 = *((unsigned int *)t10);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t12) != 0)
        goto LAB40;

LAB41:    t14 = (t29 + 4);
    t27 = *((unsigned int *)t29);
    t28 = *((unsigned int *)t14);
    t32 = (t27 || t28);
    if (t32 > 0)
        goto LAB42;

LAB43:    memcpy(t53, t29, 8);

LAB44:    t80 = (t53 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t53);
    t84 = (t83 & t82);
    t85 = (t84 != 0);
    if (t85 > 0)
        goto LAB52;

LAB53:
LAB54:    xsi_set_current_line(755, ng7);
    t4 = (t1 + 41632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t11 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (t16 >> 15);
    t18 = (t17 & 1);
    *((unsigned int *)t10) = t18;
    t19 = *((unsigned int *)t11);
    t20 = (t19 >> 15);
    t21 = (t20 & 1);
    *((unsigned int *)t8) = t21;
    t12 = (t1 + 33792);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 1);
    goto LAB11;

LAB9:    xsi_set_current_line(757, ng7);

LAB56:    xsi_set_current_line(758, ng7);
    t5 = (t1 + 41632);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memset(t10, 0, 8);
    t11 = (t10 + 4);
    t12 = (t8 + 4);
    t16 = *((unsigned int *)t8);
    t17 = (t16 >> 0);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t12);
    t19 = (t18 >> 0);
    *((unsigned int *)t11) = t19;
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 7U);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 7U);
    t13 = (t1 + 33952);
    xsi_vlogvar_assign_value(t13, t10, 0, 0, 3);
    xsi_set_current_line(759, ng7);
    t4 = (t1 + 26912);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 4);
    t16 = *((unsigned int *)t8);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB57;

LAB58:
LAB59:    xsi_set_current_line(764, ng7);
    t4 = (t1 + 34112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t10, 0, 8);
    t8 = (t6 + 4);
    t16 = *((unsigned int *)t8);
    t17 = (~(t16));
    t18 = *((unsigned int *)t6);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB88;

LAB86:    if (*((unsigned int *)t8) == 0)
        goto LAB85;

LAB87:    t11 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t11) = 1;

LAB88:    memset(t29, 0, 8);
    t12 = (t10 + 4);
    t21 = *((unsigned int *)t12);
    t23 = (~(t21));
    t24 = *((unsigned int *)t10);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t12) != 0)
        goto LAB91;

LAB92:    t14 = (t29 + 4);
    t27 = *((unsigned int *)t29);
    t28 = *((unsigned int *)t14);
    t32 = (t27 || t28);
    if (t32 > 0)
        goto LAB93;

LAB94:    memcpy(t53, t29, 8);

LAB95:    t80 = (t53 + 4);
    t81 = *((unsigned int *)t80);
    t82 = (~(t81));
    t83 = *((unsigned int *)t53);
    t84 = (t83 & t82);
    t85 = (t84 != 0);
    if (t85 > 0)
        goto LAB103;

LAB104:
LAB105:    xsi_set_current_line(776, ng7);
    t4 = (t1 + 41632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t11 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (t16 >> 4);
    t18 = (t17 & 1);
    *((unsigned int *)t10) = t18;
    t19 = *((unsigned int *)t11);
    t20 = (t19 >> 4);
    t21 = (t20 & 1);
    *((unsigned int *)t8) = t21;
    t12 = (t1 + 34112);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 1);
    xsi_set_current_line(777, ng7);
    t4 = (t1 + 41632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t11 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (t16 >> 5);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t11);
    t19 = (t18 >> 5);
    *((unsigned int *)t8) = t19;
    t20 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t20 & 3U);
    t21 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t21 & 3U);
    t12 = (t1 + 34272);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 2);
    xsi_set_current_line(778, ng7);
    t4 = (t1 + 41632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t10, 0, 8);
    t8 = (t10 + 4);
    t11 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (t16 >> 7);
    t18 = (t17 & 1);
    *((unsigned int *)t10) = t18;
    t19 = *((unsigned int *)t11);
    t20 = (t19 >> 7);
    t21 = (t20 & 1);
    *((unsigned int *)t8) = t21;
    t12 = (t1 + 34432);
    xsi_vlogvar_assign_value(t12, t10, 0, 0, 1);
    goto LAB11;

LAB15:    t13 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB16;

LAB19:    t15 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t29) = 1;
    goto LAB24;

LAB23:    t43 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB24;

LAB25:    t48 = ((char*)((ng18)));
    goto LAB26;

LAB27:    t54 = (t1 + 41632);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memset(t53, 0, 8);
    t57 = (t53 + 4);
    t58 = (t56 + 4);
    t59 = *((unsigned int *)t56);
    t60 = (t59 >> 11);
    *((unsigned int *)t53) = t60;
    t61 = *((unsigned int *)t58);
    t62 = (t61 >> 11);
    *((unsigned int *)t57) = t62;
    t63 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t63 & 7U);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t64 & 7U);
    goto LAB28;

LAB29:    xsi_vlog_unsigned_bit_combine(t10, 4, t48, 4, t53, 4);
    goto LAB33;

LAB31:    memcpy(t10, t48, 8);
    goto LAB33;

LAB34:    *((unsigned int *)t10) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t29) = 1;
    goto LAB41;

LAB40:    t13 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB41;

LAB42:    t15 = (t1 + 41632);
    t22 = (t15 + 56U);
    t43 = *((char **)t22);
    memset(t30, 0, 8);
    t44 = (t30 + 4);
    t48 = (t43 + 4);
    t33 = *((unsigned int *)t43);
    t34 = (t33 >> 15);
    t35 = (t34 & 1);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t48);
    t37 = (t36 >> 15);
    t38 = (t37 & 1);
    *((unsigned int *)t44) = t38;
    memset(t31, 0, 8);
    t54 = (t30 + 4);
    t39 = *((unsigned int *)t54);
    t40 = (~(t39));
    t41 = *((unsigned int *)t30);
    t42 = (t41 & t40);
    t45 = (t42 & 1U);
    if (t45 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t54) != 0)
        goto LAB47;

LAB48:    t46 = *((unsigned int *)t29);
    t47 = *((unsigned int *)t31);
    t49 = (t46 & t47);
    *((unsigned int *)t53) = t49;
    t56 = (t29 + 4);
    t57 = (t31 + 4);
    t58 = (t53 + 4);
    t50 = *((unsigned int *)t56);
    t51 = *((unsigned int *)t57);
    t52 = (t50 | t51);
    *((unsigned int *)t58) = t52;
    t59 = *((unsigned int *)t58);
    t60 = (t59 != 0);
    if (t60 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB44;

LAB45:    *((unsigned int *)t31) = 1;
    goto LAB48;

LAB47:    t55 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB48;

LAB49:    t61 = *((unsigned int *)t53);
    t62 = *((unsigned int *)t58);
    *((unsigned int *)t53) = (t61 | t62);
    t65 = (t29 + 4);
    t66 = (t31 + 4);
    t63 = *((unsigned int *)t29);
    t64 = (~(t63));
    t67 = *((unsigned int *)t65);
    t68 = (~(t67));
    t69 = *((unsigned int *)t31);
    t70 = (~(t69));
    t71 = *((unsigned int *)t66);
    t72 = (~(t71));
    t9 = (t64 & t68);
    t73 = (t70 & t72);
    t74 = (~(t9));
    t75 = (~(t73));
    t76 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t76 & t74);
    t77 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t77 & t75);
    t78 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t78 & t74);
    t79 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t79 & t75);
    goto LAB51;

LAB52:    xsi_set_current_line(752, ng7);

LAB55:    xsi_set_current_line(753, ng7);
    t86 = (t1 + 33472);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    t89 = (t1 + 30592);
    xsi_vlogvar_assign_value(t89, t88, 0, 0, 3);
    goto LAB54;

LAB57:    xsi_set_current_line(759, ng7);

LAB60:    xsi_set_current_line(760, ng7);
    t11 = ((char*)((ng1)));
    t12 = ((char*)((ng17)));
    memset(t10, 0, 8);
    t13 = (t11 + 4);
    t14 = (t12 + 4);
    t21 = *((unsigned int *)t11);
    t23 = *((unsigned int *)t12);
    t24 = (t21 ^ t23);
    t25 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t14);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t32 = *((unsigned int *)t13);
    t33 = *((unsigned int *)t14);
    t34 = (t32 | t33);
    t35 = (~(t34));
    t36 = (t28 & t35);
    if (t36 != 0)
        goto LAB64;

LAB61:    if (t34 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t10) = 1;

LAB64:    memset(t29, 0, 8);
    t22 = (t10 + 4);
    t37 = *((unsigned int *)t22);
    t38 = (~(t37));
    t39 = *((unsigned int *)t10);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t22) != 0)
        goto LAB67;

LAB68:    t44 = (t29 + 4);
    t42 = *((unsigned int *)t29);
    t45 = *((unsigned int *)t44);
    t46 = (t42 || t45);
    if (t46 > 0)
        goto LAB69;

LAB70:    memcpy(t90, t29, 8);

LAB71:    t113 = (t90 + 4);
    t114 = *((unsigned int *)t113);
    t115 = (~(t114));
    t116 = *((unsigned int *)t90);
    t117 = (t116 & t115);
    t118 = (t117 != 0);
    if (t118 > 0)
        goto LAB82;

LAB83:
LAB84:    goto LAB59;

LAB63:    t15 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB64;

LAB65:    *((unsigned int *)t29) = 1;
    goto LAB68;

LAB67:    t43 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB68;

LAB69:    t48 = (t1 + 34112);
    t54 = (t48 + 56U);
    t55 = *((char **)t54);
    t56 = (t1 + 41632);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memset(t30, 0, 8);
    t65 = (t30 + 4);
    t66 = (t58 + 4);
    t47 = *((unsigned int *)t58);
    t49 = (t47 >> 4);
    t50 = (t49 & 1);
    *((unsigned int *)t30) = t50;
    t51 = *((unsigned int *)t66);
    t52 = (t51 >> 4);
    t59 = (t52 & 1);
    *((unsigned int *)t65) = t59;
    t60 = *((unsigned int *)t55);
    t61 = *((unsigned int *)t30);
    t62 = (t60 ^ t61);
    *((unsigned int *)t31) = t62;
    t80 = (t55 + 4);
    t86 = (t30 + 4);
    t87 = (t31 + 4);
    t63 = *((unsigned int *)t80);
    t64 = *((unsigned int *)t86);
    t67 = (t63 | t64);
    *((unsigned int *)t87) = t67;
    t68 = *((unsigned int *)t87);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB72;

LAB73:
LAB74:    memset(t53, 0, 8);
    t88 = (t31 + 4);
    t72 = *((unsigned int *)t88);
    t74 = (~(t72));
    t75 = *((unsigned int *)t31);
    t76 = (t75 & t74);
    t77 = (t76 & 1U);
    if (t77 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t88) != 0)
        goto LAB77;

LAB78:    t78 = *((unsigned int *)t29);
    t79 = *((unsigned int *)t53);
    t81 = (t78 & t79);
    *((unsigned int *)t90) = t81;
    t91 = (t29 + 4);
    t92 = (t53 + 4);
    t93 = (t90 + 4);
    t82 = *((unsigned int *)t91);
    t83 = *((unsigned int *)t92);
    t84 = (t82 | t83);
    *((unsigned int *)t93) = t84;
    t85 = *((unsigned int *)t93);
    t94 = (t85 != 0);
    if (t94 == 1)
        goto LAB79;

LAB80:
LAB81:    goto LAB71;

LAB72:    t70 = *((unsigned int *)t31);
    t71 = *((unsigned int *)t87);
    *((unsigned int *)t31) = (t70 | t71);
    goto LAB74;

LAB75:    *((unsigned int *)t53) = 1;
    goto LAB78;

LAB77:    t89 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB78;

LAB79:    t95 = *((unsigned int *)t90);
    t96 = *((unsigned int *)t93);
    *((unsigned int *)t90) = (t95 | t96);
    t97 = (t29 + 4);
    t98 = (t53 + 4);
    t99 = *((unsigned int *)t29);
    t100 = (~(t99));
    t101 = *((unsigned int *)t97);
    t102 = (~(t101));
    t103 = *((unsigned int *)t53);
    t104 = (~(t103));
    t105 = *((unsigned int *)t98);
    t106 = (~(t105));
    t9 = (t100 & t102);
    t73 = (t104 & t106);
    t107 = (~(t9));
    t108 = (~(t73));
    t109 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t109 & t107);
    t110 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t110 & t108);
    t111 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t111 & t107);
    t112 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t112 & t108);
    goto LAB81;

LAB82:    xsi_set_current_line(761, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t120) = t119;
    t121 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng19, 2, t121, (char)114, t120, 64);
    goto LAB84;

LAB85:    *((unsigned int *)t10) = 1;
    goto LAB88;

LAB89:    *((unsigned int *)t29) = 1;
    goto LAB92;

LAB91:    t13 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB92;

LAB93:    t15 = (t1 + 41632);
    t22 = (t15 + 56U);
    t43 = *((char **)t22);
    memset(t30, 0, 8);
    t44 = (t30 + 4);
    t48 = (t43 + 4);
    t33 = *((unsigned int *)t43);
    t34 = (t33 >> 4);
    t35 = (t34 & 1);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t48);
    t37 = (t36 >> 4);
    t38 = (t37 & 1);
    *((unsigned int *)t44) = t38;
    memset(t31, 0, 8);
    t54 = (t30 + 4);
    t39 = *((unsigned int *)t54);
    t40 = (~(t39));
    t41 = *((unsigned int *)t30);
    t42 = (t41 & t40);
    t45 = (t42 & 1U);
    if (t45 != 0)
        goto LAB96;

LAB97:    if (*((unsigned int *)t54) != 0)
        goto LAB98;

LAB99:    t46 = *((unsigned int *)t29);
    t47 = *((unsigned int *)t31);
    t49 = (t46 & t47);
    *((unsigned int *)t53) = t49;
    t56 = (t29 + 4);
    t57 = (t31 + 4);
    t58 = (t53 + 4);
    t50 = *((unsigned int *)t56);
    t51 = *((unsigned int *)t57);
    t52 = (t50 | t51);
    *((unsigned int *)t58) = t52;
    t59 = *((unsigned int *)t58);
    t60 = (t59 != 0);
    if (t60 == 1)
        goto LAB100;

LAB101:
LAB102:    goto LAB95;

LAB96:    *((unsigned int *)t31) = 1;
    goto LAB99;

LAB98:    t55 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB99;

LAB100:    t61 = *((unsigned int *)t53);
    t62 = *((unsigned int *)t58);
    *((unsigned int *)t53) = (t61 | t62);
    t65 = (t29 + 4);
    t66 = (t31 + 4);
    t63 = *((unsigned int *)t29);
    t64 = (~(t63));
    t67 = *((unsigned int *)t65);
    t68 = (~(t67));
    t69 = *((unsigned int *)t31);
    t70 = (~(t69));
    t71 = *((unsigned int *)t66);
    t72 = (~(t71));
    t9 = (t64 & t68);
    t73 = (t70 & t72);
    t74 = (~(t9));
    t75 = (~(t73));
    t76 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t76 & t74);
    t77 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t77 & t75);
    t78 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t78 & t74);
    t79 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t79 & t75);
    goto LAB102;

LAB103:    xsi_set_current_line(764, ng7);

LAB106:    xsi_set_current_line(765, ng7);
    t86 = ((char*)((ng1)));
    t87 = ((char*)((ng17)));
    memset(t90, 0, 8);
    t88 = (t86 + 4);
    t89 = (t87 + 4);
    t94 = *((unsigned int *)t86);
    t95 = *((unsigned int *)t87);
    t96 = (t94 ^ t95);
    t99 = *((unsigned int *)t88);
    t100 = *((unsigned int *)t89);
    t101 = (t99 ^ t100);
    t102 = (t96 | t101);
    t103 = *((unsigned int *)t88);
    t104 = *((unsigned int *)t89);
    t105 = (t103 | t104);
    t106 = (~(t105));
    t107 = (t102 & t106);
    if (t107 != 0)
        goto LAB110;

LAB107:    if (t105 != 0)
        goto LAB109;

LAB108:    *((unsigned int *)t90) = 1;

LAB110:    t92 = (t90 + 4);
    t108 = *((unsigned int *)t92);
    t109 = (~(t108));
    t110 = *((unsigned int *)t90);
    t111 = (t110 & t109);
    t112 = (t111 != 0);
    if (t112 > 0)
        goto LAB111;

LAB112:    xsi_set_current_line(767, ng7);

LAB115:    xsi_set_current_line(768, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t4 = (t1 + 35712);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t122 = *((double *)t6);
    t123 = (t119 - t122);
    t8 = (t1 + 11424);
    t11 = *((char **)t8);
    t124 = *((double *)t11);
    t16 = (t123 < t124);
    *((unsigned int *)t10) = t16;
    t8 = (t10 + 4);
    *((unsigned int *)t8) = 0U;
    t12 = (t10 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (~(t17));
    t19 = *((unsigned int *)t10);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB116;

LAB117:
LAB118:    xsi_set_current_line(770, ng7);
    t4 = ((char*)((ng17)));
    t5 = (t1 + 28032);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(771, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t4 = (t1 + 35872);
    xsi_vlogvar_wait_assign_value(t4, t10, 0, 0, 1, 0LL);

LAB113:    xsi_set_current_line(773, ng7);
    t4 = ((char*)((ng17)));
    t5 = (t4 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB119;

LAB120:
LAB121:    goto LAB105;

LAB109:    t91 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t91) = 1;
    goto LAB110;

LAB111:    xsi_set_current_line(765, ng7);

LAB114:    xsi_set_current_line(766, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t120) = t119;
    t93 = (t1 + 38752);
    xsi_vlogvar_wait_assign_value(t93, t120, 0, 0, 1, 0LL);
    goto LAB113;

LAB116:    xsi_set_current_line(769, ng7);
    t125 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t29) = t125;
    t13 = (t1 + 35712);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t126 = *((double *)t15);
    t22 = (t1 + 11424);
    t43 = *((char **)t22);
    t127 = *((double *)t43);
    t128 = (t126 + t127);
    t129 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t130 = (t128 - t129);
    *((double *)t30) = t130;
    t22 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng20, 3, t22, (char)114, t29, 64, (char)114, t30, 64);
    goto LAB118;

LAB119:    xsi_set_current_line(774, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t6 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng21, 2, t6, (char)114, t10, 64);
    goto LAB121;

LAB122:    xsi_set_current_line(782, ng7);

LAB125:    xsi_set_current_line(783, ng7);
    t11 = (t1 + 41472);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);

LAB126:    t14 = ((char*)((ng1)));
    t15 = ((char*)((ng2)));
    t21 = *((unsigned int *)t14);
    t23 = *((unsigned int *)t15);
    t24 = (t21 & t23);
    *((unsigned int *)t10) = t24;
    t22 = (t14 + 4);
    t43 = (t15 + 4);
    t44 = (t10 + 4);
    t25 = *((unsigned int *)t22);
    t26 = *((unsigned int *)t43);
    t27 = (t25 | t26);
    *((unsigned int *)t44) = t27;
    t28 = *((unsigned int *)t44);
    t32 = (t28 != 0);
    if (t32 == 1)
        goto LAB136;

LAB137:
LAB138:    t131 = xsi_vlog_unsigned_case_compare(t13, 2, t10, 2);
    if (t131 == 1)
        goto LAB127;

LAB128:    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng2)));
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 & t17);
    *((unsigned int *)t10) = t18;
    t6 = (t4 + 4);
    t8 = (t5 + 4);
    t48 = (t10 + 4);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    *((unsigned int *)t48) = t21;
    t23 = *((unsigned int *)t48);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB310;

LAB311:
LAB312:    t131 = xsi_vlog_unsigned_case_compare(t13, 2, t10, 2);
    if (t131 == 1)
        goto LAB129;

LAB130:    t4 = ((char*)((ng17)));
    t5 = ((char*)((ng2)));
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 & t17);
    *((unsigned int *)t10) = t18;
    t6 = (t4 + 4);
    t8 = (t5 + 4);
    t56 = (t10 + 4);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    *((unsigned int *)t56) = t21;
    t23 = *((unsigned int *)t56);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB407;

LAB408:
LAB409:    t131 = xsi_vlog_unsigned_case_compare(t13, 2, t10, 2);
    if (t131 == 1)
        goto LAB131;

LAB132:
LAB134:
LAB133:    xsi_set_current_line(926, ng7);

LAB411:    xsi_set_current_line(927, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t4 = (t1 + 41472);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng103, 3, t8, (char)114, t10, 64, (char)118, t6, 2);

LAB135:    goto LAB124;

LAB127:    xsi_set_current_line(784, ng7);

LAB139:    xsi_set_current_line(785, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t29) = t119;
    t55 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng22, 2, t55, (char)114, t29, 64);
    xsi_set_current_line(786, ng7);
    t4 = ((char*)((ng23)));
    memset(t10, 0, 8);
    t5 = (t10 + 4);
    t6 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (~(t16));
    *((unsigned int *)t10) = t17;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB141;

LAB140:    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 262143U);
    t24 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t24 & 262143U);
    t8 = (t1 + 41632);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t12);
    t27 = (t25 & t26);
    *((unsigned int *)t29) = t27;
    t14 = (t10 + 4);
    t15 = (t12 + 4);
    t22 = (t29 + 4);
    t28 = *((unsigned int *)t14);
    t32 = *((unsigned int *)t15);
    t33 = (t28 | t32);
    *((unsigned int *)t22) = t33;
    t34 = *((unsigned int *)t22);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB142;

LAB143:
LAB144:    t48 = ((char*)((ng23)));
    memset(t30, 0, 8);
    t54 = (t30 + 4);
    t55 = (t48 + 4);
    t61 = *((unsigned int *)t48);
    t62 = (~(t61));
    *((unsigned int *)t30) = t62;
    *((unsigned int *)t54) = 0;
    if (*((unsigned int *)t55) != 0)
        goto LAB146;

LAB145:    t69 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t69 & 262143U);
    t70 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t70 & 262143U);
    t56 = ((char*)((ng24)));
    t71 = *((unsigned int *)t30);
    t72 = *((unsigned int *)t56);
    t74 = (t71 & t72);
    *((unsigned int *)t31) = t74;
    t57 = (t30 + 4);
    t58 = (t56 + 4);
    t65 = (t31 + 4);
    t75 = *((unsigned int *)t57);
    t76 = *((unsigned int *)t58);
    t77 = (t75 | t76);
    *((unsigned int *)t65) = t77;
    t78 = *((unsigned int *)t65);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB147;

LAB148:
LAB149:    memset(t53, 0, 8);
    if (*((unsigned int *)t29) != *((unsigned int *)t31))
        goto LAB151;

LAB150:    t86 = (t29 + 4);
    t87 = (t31 + 4);
    if (*((unsigned int *)t86) != *((unsigned int *)t87))
        goto LAB151;

LAB152:    t88 = (t53 + 4);
    t107 = *((unsigned int *)t88);
    t108 = (~(t107));
    t109 = *((unsigned int *)t53);
    t110 = (t109 & t108);
    t111 = (t110 != 0);
    if (t111 > 0)
        goto LAB153;

LAB154:
LAB155:    xsi_set_current_line(789, ng7);
    t4 = ((char*)((ng26)));
    memset(t10, 0, 8);
    t5 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    if (t18 != 7U)
        goto LAB157;

LAB156:    if (*((unsigned int *)t5) == 0)
        goto LAB158;

LAB159:    t6 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t6) = 1;

LAB157:    t8 = (t10 + 4);
    t19 = *((unsigned int *)t8);
    t20 = (~(t19));
    t21 = *((unsigned int *)t10);
    t23 = (t21 & t20);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB160;

LAB161:
LAB162:    xsi_set_current_line(800, ng7);
    t4 = ((char*)((ng17)));
    t5 = (t4 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB183;

LAB184:
LAB185:    xsi_set_current_line(808, ng7);
    t4 = ((char*)((ng2)));
    memset(t10, 0, 8);
    t5 = (t4 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 & 3U);
    if (t20 != 0)
        goto LAB195;

LAB196:    if (*((unsigned int *)t5) != 0)
        goto LAB197;

LAB198:    t8 = (t10 + 4);
    t21 = *((unsigned int *)t8);
    t23 = (~(t21));
    t24 = *((unsigned int *)t10);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB199;

LAB200:
LAB201:    xsi_set_current_line(817, ng7);
    t4 = ((char*)((ng6)));
    t5 = (t4 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB216;

LAB217:
LAB218:    xsi_set_current_line(824, ng7);
    t4 = ((char*)((ng17)));
    t5 = (t4 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB226;

LAB227:
LAB228:    xsi_set_current_line(832, ng7);
    t4 = ((char*)((ng6)));
    t5 = (t4 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB238;

LAB239:
LAB240:    xsi_set_current_line(840, ng7);
    t4 = ((char*)((ng17)));
    t5 = (t4 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB250;

LAB251:
LAB252:    xsi_set_current_line(848, ng7);
    t4 = ((char*)((ng26)));
    memset(t10, 0, 8);
    t5 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    if (t18 != 7U)
        goto LAB263;

LAB262:    if (*((unsigned int *)t5) == 0)
        goto LAB264;

LAB265:    t6 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t6) = 1;

LAB263:    t8 = (t10 + 4);
    t19 = *((unsigned int *)t8);
    t20 = (~(t19));
    t21 = *((unsigned int *)t10);
    t23 = (t21 & t20);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB266;

LAB267:
LAB268:    xsi_set_current_line(860, ng7);
    t4 = ((char*)((ng17)));
    t5 = (t4 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB286;

LAB287:
LAB288:    xsi_set_current_line(868, ng7);
    t4 = ((char*)((ng17)));
    t5 = (t4 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB298;

LAB299:
LAB300:    goto LAB135;

LAB129:    xsi_set_current_line(877, ng7);

LAB313:    xsi_set_current_line(878, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t53) = t119;
    t56 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng75, 2, t56, (char)114, t53, 64);
    xsi_set_current_line(879, ng7);
    t4 = ((char*)((ng76)));
    memset(t10, 0, 8);
    t5 = (t10 + 4);
    t6 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (~(t16));
    *((unsigned int *)t10) = t17;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t6) != 0)
        goto LAB315;

LAB314:    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 262143U);
    t24 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t24 & 262143U);
    t8 = (t1 + 41632);
    t48 = (t8 + 56U);
    t54 = *((char **)t48);
    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t54);
    t27 = (t25 & t26);
    *((unsigned int *)t53) = t27;
    t55 = (t10 + 4);
    t56 = (t54 + 4);
    t57 = (t53 + 4);
    t28 = *((unsigned int *)t55);
    t32 = *((unsigned int *)t56);
    t33 = (t28 | t32);
    *((unsigned int *)t57) = t33;
    t34 = *((unsigned int *)t57);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB316;

LAB317:
LAB318:    t66 = ((char*)((ng76)));
    memset(t90, 0, 8);
    t80 = (t90 + 4);
    t86 = (t66 + 4);
    t61 = *((unsigned int *)t66);
    t62 = (~(t61));
    *((unsigned int *)t90) = t62;
    *((unsigned int *)t80) = 0;
    if (*((unsigned int *)t86) != 0)
        goto LAB320;

LAB319:    t69 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t69 & 262143U);
    t70 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t70 & 262143U);
    t87 = ((char*)((ng77)));
    t71 = *((unsigned int *)t90);
    t72 = *((unsigned int *)t87);
    t74 = (t71 & t72);
    *((unsigned int *)t120) = t74;
    t88 = (t90 + 4);
    t89 = (t87 + 4);
    t91 = (t120 + 4);
    t75 = *((unsigned int *)t88);
    t76 = *((unsigned int *)t89);
    t77 = (t75 | t76);
    *((unsigned int *)t91) = t77;
    t78 = *((unsigned int *)t91);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB321;

LAB322:
LAB323:    memset(t133, 0, 8);
    if (*((unsigned int *)t53) != *((unsigned int *)t120))
        goto LAB325;

LAB324:    t97 = (t53 + 4);
    t98 = (t120 + 4);
    if (*((unsigned int *)t97) != *((unsigned int *)t98))
        goto LAB325;

LAB326:    t113 = (t133 + 4);
    t107 = *((unsigned int *)t113);
    t108 = (~(t107));
    t109 = *((unsigned int *)t133);
    t110 = (t109 & t108);
    t111 = (t110 != 0);
    if (t111 > 0)
        goto LAB327;

LAB328:
LAB329:    xsi_set_current_line(882, ng7);
    t4 = ((char*)((ng26)));
    t5 = (t4 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB330;

LAB331:
LAB332:    xsi_set_current_line(896, ng7);
    t4 = ((char*)((ng17)));
    t5 = (t4 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB363;

LAB364:
LAB365:    xsi_set_current_line(904, ng7);
    t4 = ((char*)((ng6)));
    memset(t10, 0, 8);
    t5 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    if (t18 != 3U)
        goto LAB376;

LAB375:    if (*((unsigned int *)t5) == 0)
        goto LAB377;

LAB378:    t6 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t6) = 1;

LAB376:    t8 = (t10 + 4);
    t19 = *((unsigned int *)t8);
    t20 = (~(t19));
    t21 = *((unsigned int *)t10);
    t23 = (t21 & t20);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB379;

LAB380:
LAB381:    xsi_set_current_line(914, ng7);
    t4 = ((char*)((ng17)));
    t5 = (t4 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB395;

LAB396:
LAB397:    goto LAB135;

LAB131:    xsi_set_current_line(922, ng7);

LAB410:    xsi_set_current_line(923, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t53) = t119;
    t66 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng101, 2, t66, (char)114, t53, 64);
    xsi_set_current_line(924, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t4 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng102, 2, t4, (char)114, t10, 64);
    goto LAB135;

LAB136:    t33 = *((unsigned int *)t10);
    t34 = *((unsigned int *)t44);
    *((unsigned int *)t10) = (t33 | t34);
    t48 = (t14 + 4);
    t54 = (t15 + 4);
    t35 = *((unsigned int *)t14);
    t36 = (~(t35));
    t37 = *((unsigned int *)t48);
    t38 = (~(t37));
    t39 = *((unsigned int *)t15);
    t40 = (~(t39));
    t41 = *((unsigned int *)t54);
    t42 = (~(t41));
    t9 = (t36 & t38);
    t73 = (t40 & t42);
    t45 = (~(t9));
    t46 = (~(t73));
    t47 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t47 & t45);
    t49 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t49 & t46);
    t50 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t50 & t45);
    t51 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t51 & t46);
    goto LAB138;

LAB141:    t18 = *((unsigned int *)t10);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t10) = (t18 | t19);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t6);
    *((unsigned int *)t5) = (t20 | t21);
    goto LAB140;

LAB142:    t36 = *((unsigned int *)t29);
    t37 = *((unsigned int *)t22);
    *((unsigned int *)t29) = (t36 | t37);
    t43 = (t10 + 4);
    t44 = (t12 + 4);
    t38 = *((unsigned int *)t10);
    t39 = (~(t38));
    t40 = *((unsigned int *)t43);
    t41 = (~(t40));
    t42 = *((unsigned int *)t12);
    t45 = (~(t42));
    t46 = *((unsigned int *)t44);
    t47 = (~(t46));
    t9 = (t39 & t41);
    t73 = (t45 & t47);
    t49 = (~(t9));
    t50 = (~(t73));
    t51 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t51 & t49);
    t52 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t52 & t50);
    t59 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t59 & t49);
    t60 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t60 & t50);
    goto LAB144;

LAB146:    t63 = *((unsigned int *)t30);
    t64 = *((unsigned int *)t55);
    *((unsigned int *)t30) = (t63 | t64);
    t67 = *((unsigned int *)t54);
    t68 = *((unsigned int *)t55);
    *((unsigned int *)t54) = (t67 | t68);
    goto LAB145;

LAB147:    t81 = *((unsigned int *)t31);
    t82 = *((unsigned int *)t65);
    *((unsigned int *)t31) = (t81 | t82);
    t66 = (t30 + 4);
    t80 = (t56 + 4);
    t83 = *((unsigned int *)t30);
    t84 = (~(t83));
    t85 = *((unsigned int *)t66);
    t94 = (~(t85));
    t95 = *((unsigned int *)t56);
    t96 = (~(t95));
    t99 = *((unsigned int *)t80);
    t100 = (~(t99));
    t131 = (t84 & t94);
    t132 = (t96 & t100);
    t101 = (~(t131));
    t102 = (~(t132));
    t103 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t103 & t101);
    t104 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t104 & t102);
    t105 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t105 & t101);
    t106 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t106 & t102);
    goto LAB149;

LAB151:    *((unsigned int *)t53) = 1;
    goto LAB152;

LAB153:    xsi_set_current_line(787, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t90) = t119;
    t89 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng25, 2, t89, (char)114, t90, 64);
    goto LAB155;

LAB158:    *((unsigned int *)t10) = 1;
    goto LAB157;

LAB160:    xsi_set_current_line(789, ng7);

LAB163:    xsi_set_current_line(790, ng7);
    t11 = (t1 + 32192);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng1)));
    t22 = ((char*)((ng17)));
    memset(t30, 0, 8);
    t43 = (t15 + 4);
    if (*((unsigned int *)t43) != 0)
        goto LAB179;

LAB178:    t44 = (t22 + 4);
    if (*((unsigned int *)t44) != 0)
        goto LAB179;

LAB182:    if (*((unsigned int *)t15) > *((unsigned int *)t22))
        goto LAB180;

LAB181:    xsi_vlogtype_concat(t29, 4, 4, 2U, t30, 1, t14, 3);

LAB164:    t54 = ((char*)((ng27)));
    t9 = xsi_vlog_unsigned_case_xcompare(t29, 4, t54, 4);
    if (t9 == 1)
        goto LAB165;

LAB166:    t4 = ((char*)((ng29)));
    t9 = xsi_vlog_unsigned_case_xcompare(t29, 4, t4, 4);
    if (t9 == 1)
        goto LAB167;

LAB168:    t4 = ((char*)((ng31)));
    t9 = xsi_vlog_unsigned_case_xcompare(t29, 4, t4, 4);
    if (t9 == 1)
        goto LAB169;

LAB170:    t4 = ((char*)((ng33)));
    t9 = xsi_vlog_unsigned_case_xcompare(t29, 4, t4, 4);
    if (t9 == 1)
        goto LAB171;

LAB172:    t4 = ((char*)((ng35)));
    t9 = xsi_vlog_unsigned_case_xcompare(t29, 4, t4, 4);
    if (t9 == 1)
        goto LAB173;

LAB174:
LAB176:
LAB175:    xsi_set_current_line(796, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t4 = (t1 + 32192);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng37, 3, t8, (char)114, t10, 64, (char)118, t6, 3);

LAB177:    goto LAB162;

LAB165:    xsi_set_current_line(791, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t31) = t119;
    t55 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng28, 2, t55, (char)114, t31, 64);
    goto LAB177;

LAB167:    xsi_set_current_line(792, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng30, 2, t5, (char)114, t10, 64);
    goto LAB177;

LAB169:    xsi_set_current_line(793, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng32, 2, t5, (char)114, t10, 64);
    goto LAB177;

LAB171:    xsi_set_current_line(794, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng34, 2, t5, (char)114, t10, 64);
    goto LAB177;

LAB173:    xsi_set_current_line(795, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng36, 2, t5, (char)114, t10, 64);
    goto LAB177;

LAB179:    t48 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB181;

LAB180:    *((unsigned int *)t30) = 1;
    goto LAB181;

LAB183:    xsi_set_current_line(800, ng7);

LAB186:    xsi_set_current_line(801, ng7);
    t6 = (t1 + 32352);
    t8 = (t6 + 56U);
    t11 = *((char **)t8);

LAB187:    t12 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t11, 1, t12, 1);
    if (t9 == 1)
        goto LAB188;

LAB189:    t4 = ((char*)((ng17)));
    t9 = xsi_vlog_unsigned_case_compare(t11, 1, t4, 1);
    if (t9 == 1)
        goto LAB190;

LAB191:
LAB193:
LAB192:    xsi_set_current_line(804, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t4 = (t1 + 32352);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng40, 3, t8, (char)114, t10, 64, (char)118, t6, 1);

LAB194:    goto LAB185;

LAB188:    xsi_set_current_line(802, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t14 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng38, 2, t14, (char)114, t10, 64);
    goto LAB194;

LAB190:    xsi_set_current_line(803, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng39, 2, t5, (char)114, t10, 64);
    goto LAB194;

LAB195:    *((unsigned int *)t10) = 1;
    goto LAB198;

LAB197:    t6 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB198;

LAB199:    xsi_set_current_line(808, ng7);

LAB202:    xsi_set_current_line(809, ng7);
    t12 = (t1 + 32512);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    t22 = ((char*)((ng2)));
    t27 = *((unsigned int *)t15);
    t28 = *((unsigned int *)t22);
    t32 = (t27 & t28);
    *((unsigned int *)t30) = t32;
    t43 = (t15 + 4);
    t44 = (t22 + 4);
    t48 = (t30 + 4);
    t33 = *((unsigned int *)t43);
    t34 = *((unsigned int *)t44);
    t35 = (t33 | t34);
    *((unsigned int *)t48) = t35;
    t36 = *((unsigned int *)t48);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB213;

LAB214:
LAB215:
LAB203:    t56 = ((char*)((ng6)));
    t131 = xsi_vlog_unsigned_case_compare(t30, 2, t56, 2);
    if (t131 == 1)
        goto LAB204;

LAB205:    t4 = ((char*)((ng17)));
    t9 = xsi_vlog_unsigned_case_compare(t30, 2, t4, 2);
    if (t9 == 1)
        goto LAB206;

LAB207:    t4 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t30, 2, t4, 2);
    if (t9 == 1)
        goto LAB208;

LAB209:
LAB211:
LAB210:    xsi_set_current_line(813, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t4 = (t1 + 32512);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng44, 3, t8, (char)114, t10, 64, (char)118, t6, 2);

LAB212:    goto LAB201;

LAB204:    xsi_set_current_line(810, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t31) = t119;
    t57 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng41, 2, t57, (char)114, t31, 64);
    goto LAB212;

LAB206:    xsi_set_current_line(811, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng42, 2, t5, (char)114, t10, 64);
    goto LAB212;

LAB208:    xsi_set_current_line(812, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng43, 2, t5, (char)114, t10, 64);
    goto LAB212;

LAB213:    t38 = *((unsigned int *)t30);
    t39 = *((unsigned int *)t48);
    *((unsigned int *)t30) = (t38 | t39);
    t54 = (t15 + 4);
    t55 = (t22 + 4);
    t40 = *((unsigned int *)t15);
    t41 = (~(t40));
    t42 = *((unsigned int *)t54);
    t45 = (~(t42));
    t46 = *((unsigned int *)t22);
    t47 = (~(t46));
    t49 = *((unsigned int *)t55);
    t50 = (~(t49));
    t9 = (t41 & t45);
    t73 = (t47 & t50);
    t51 = (~(t9));
    t52 = (~(t73));
    t59 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t59 & t51);
    t60 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t60 & t52);
    t61 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t61 & t51);
    t62 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t62 & t52);
    goto LAB215;

LAB216:    xsi_set_current_line(817, ng7);

LAB219:    xsi_set_current_line(818, ng7);
    t6 = (t1 + 32672);
    t8 = (t6 + 56U);
    t12 = *((char **)t8);

LAB220:    t14 = ((char*)((ng17)));
    t9 = xsi_vlog_unsigned_case_compare(t12, 1, t14, 1);
    if (t9 == 1)
        goto LAB221;

LAB222:
LAB224:
LAB223:    xsi_set_current_line(820, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t4 = (t1 + 32672);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng46, 3, t8, (char)114, t10, 64, (char)118, t6, 1);

LAB225:    goto LAB218;

LAB221:    xsi_set_current_line(819, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t15 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng45, 2, t15, (char)114, t10, 64);
    goto LAB225;

LAB226:    xsi_set_current_line(824, ng7);

LAB229:    xsi_set_current_line(825, ng7);
    t6 = (t1 + 32832);
    t8 = (t6 + 56U);
    t14 = *((char **)t8);

LAB230:    t15 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t14, 1, t15, 1);
    if (t9 == 1)
        goto LAB231;

LAB232:    t4 = ((char*)((ng17)));
    t9 = xsi_vlog_unsigned_case_compare(t14, 1, t4, 1);
    if (t9 == 1)
        goto LAB233;

LAB234:
LAB236:
LAB235:    xsi_set_current_line(828, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t4 = (t1 + 32832);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng49, 3, t8, (char)114, t10, 64, (char)118, t6, 1);

LAB237:    goto LAB228;

LAB231:    xsi_set_current_line(826, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t22 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng47, 2, t22, (char)114, t10, 64);
    goto LAB237;

LAB233:    xsi_set_current_line(827, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng48, 2, t5, (char)114, t10, 64);
    goto LAB237;

LAB238:    xsi_set_current_line(832, ng7);

LAB241:    xsi_set_current_line(833, ng7);
    t6 = (t1 + 33152);
    t8 = (t6 + 56U);
    t15 = *((char **)t8);

LAB242:    t22 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t15, 1, t22, 1);
    if (t9 == 1)
        goto LAB243;

LAB244:    t4 = ((char*)((ng17)));
    t9 = xsi_vlog_unsigned_case_compare(t15, 1, t4, 1);
    if (t9 == 1)
        goto LAB245;

LAB246:
LAB248:
LAB247:    xsi_set_current_line(836, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t4 = (t1 + 33152);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng52, 3, t8, (char)114, t10, 64, (char)118, t6, 1);

LAB249:    goto LAB240;

LAB243:    xsi_set_current_line(834, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t43 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng50, 2, t43, (char)114, t10, 64);
    goto LAB249;

LAB245:    xsi_set_current_line(835, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng51, 2, t5, (char)114, t10, 64);
    goto LAB249;

LAB250:    xsi_set_current_line(840, ng7);

LAB253:    xsi_set_current_line(841, ng7);
    t6 = (t1 + 33312);
    t8 = (t6 + 56U);
    t22 = *((char **)t8);

LAB254:    t43 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t22, 1, t43, 1);
    if (t9 == 1)
        goto LAB255;

LAB256:    t4 = ((char*)((ng17)));
    t9 = xsi_vlog_unsigned_case_compare(t22, 1, t4, 1);
    if (t9 == 1)
        goto LAB257;

LAB258:
LAB260:
LAB259:    xsi_set_current_line(844, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t4 = (t1 + 33312);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng55, 3, t8, (char)114, t10, 64, (char)118, t6, 1);

LAB261:    goto LAB252;

LAB255:    xsi_set_current_line(842, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t44 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng53, 2, t44, (char)114, t10, 64);
    goto LAB261;

LAB257:    xsi_set_current_line(843, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng54, 2, t5, (char)114, t10, 64);
    goto LAB261;

LAB264:    *((unsigned int *)t10) = 1;
    goto LAB263;

LAB266:    xsi_set_current_line(848, ng7);

LAB269:    xsi_set_current_line(849, ng7);
    t43 = (t1 + 33472);
    t44 = (t43 + 56U);
    t48 = *((char **)t44);
    t54 = (t1 + 33632);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    xsi_vlogtype_concat(t31, 5, 5, 2U, t56, 1, t48, 4);

LAB270:    t57 = ((char*)((ng56)));
    t9 = xsi_vlog_unsigned_case_xcompare(t31, 5, t57, 5);
    if (t9 == 1)
        goto LAB271;

LAB272:    t4 = ((char*)((ng58)));
    t9 = xsi_vlog_unsigned_case_xcompare(t31, 5, t4, 5);
    if (t9 == 1)
        goto LAB273;

LAB274:    t4 = ((char*)((ng60)));
    t9 = xsi_vlog_unsigned_case_xcompare(t31, 5, t4, 5);
    if (t9 == 1)
        goto LAB275;

LAB276:    t4 = ((char*)((ng62)));
    t9 = xsi_vlog_unsigned_case_xcompare(t31, 5, t4, 5);
    if (t9 == 1)
        goto LAB277;

LAB278:    t4 = ((char*)((ng64)));
    t9 = xsi_vlog_unsigned_case_xcompare(t31, 5, t4, 5);
    if (t9 == 1)
        goto LAB279;

LAB280:    t4 = ((char*)((ng66)));
    t9 = xsi_vlog_unsigned_case_xcompare(t31, 5, t4, 5);
    if (t9 == 1)
        goto LAB281;

LAB282:
LAB284:
LAB283:    xsi_set_current_line(856, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t4 = (t1 + 33472);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng68, 3, t8, (char)114, t10, 64, (char)118, t6, 4);

LAB285:    goto LAB268;

LAB271:    xsi_set_current_line(850, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t53) = t119;
    t58 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng57, 2, t58, (char)114, t53, 64);
    goto LAB285;

LAB273:    xsi_set_current_line(851, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng59, 2, t5, (char)114, t10, 64);
    goto LAB285;

LAB275:    xsi_set_current_line(852, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng61, 2, t5, (char)114, t10, 64);
    goto LAB285;

LAB277:    xsi_set_current_line(853, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng63, 2, t5, (char)114, t10, 64);
    goto LAB285;

LAB279:    xsi_set_current_line(854, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng65, 2, t5, (char)114, t10, 64);
    goto LAB285;

LAB281:    xsi_set_current_line(855, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng67, 2, t5, (char)114, t10, 64);
    goto LAB285;

LAB286:    xsi_set_current_line(860, ng7);

LAB289:    xsi_set_current_line(861, ng7);
    t6 = (t1 + 33632);
    t8 = (t6 + 56U);
    t43 = *((char **)t8);

LAB290:    t44 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t43, 1, t44, 1);
    if (t9 == 1)
        goto LAB291;

LAB292:    t4 = ((char*)((ng17)));
    t9 = xsi_vlog_unsigned_case_compare(t43, 1, t4, 1);
    if (t9 == 1)
        goto LAB293;

LAB294:
LAB296:
LAB295:    xsi_set_current_line(864, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t4 = (t1 + 33632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng71, 3, t8, (char)114, t10, 64, (char)118, t6, 1);

LAB297:    goto LAB288;

LAB291:    xsi_set_current_line(862, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t48 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng69, 2, t48, (char)114, t10, 64);
    goto LAB297;

LAB293:    xsi_set_current_line(863, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng70, 2, t5, (char)114, t10, 64);
    goto LAB297;

LAB298:    xsi_set_current_line(868, ng7);

LAB301:    xsi_set_current_line(869, ng7);
    t6 = (t1 + 33792);
    t8 = (t6 + 56U);
    t44 = *((char **)t8);

LAB302:    t48 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t44, 1, t48, 1);
    if (t9 == 1)
        goto LAB303;

LAB304:    t4 = ((char*)((ng17)));
    t9 = xsi_vlog_unsigned_case_compare(t44, 1, t4, 1);
    if (t9 == 1)
        goto LAB305;

LAB306:
LAB308:
LAB307:    xsi_set_current_line(872, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t4 = (t1 + 33792);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng74, 3, t8, (char)114, t10, 64, (char)118, t6, 1);

LAB309:    goto LAB300;

LAB303:    xsi_set_current_line(870, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t54 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng72, 2, t54, (char)114, t10, 64);
    goto LAB309;

LAB305:    xsi_set_current_line(871, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng73, 2, t5, (char)114, t10, 64);
    goto LAB309;

LAB310:    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t48);
    *((unsigned int *)t10) = (t25 | t26);
    t54 = (t4 + 4);
    t55 = (t5 + 4);
    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t32 = *((unsigned int *)t54);
    t33 = (~(t32));
    t34 = *((unsigned int *)t5);
    t35 = (~(t34));
    t36 = *((unsigned int *)t55);
    t37 = (~(t36));
    t9 = (t28 & t33);
    t73 = (t35 & t37);
    t38 = (~(t9));
    t39 = (~(t73));
    t40 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t40 & t38);
    t41 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t41 & t39);
    t42 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t42 & t38);
    t45 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t45 & t39);
    goto LAB312;

LAB315:    t18 = *((unsigned int *)t10);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t10) = (t18 | t19);
    t20 = *((unsigned int *)t5);
    t21 = *((unsigned int *)t6);
    *((unsigned int *)t5) = (t20 | t21);
    goto LAB314;

LAB316:    t36 = *((unsigned int *)t53);
    t37 = *((unsigned int *)t57);
    *((unsigned int *)t53) = (t36 | t37);
    t58 = (t10 + 4);
    t65 = (t54 + 4);
    t38 = *((unsigned int *)t10);
    t39 = (~(t38));
    t40 = *((unsigned int *)t58);
    t41 = (~(t40));
    t42 = *((unsigned int *)t54);
    t45 = (~(t42));
    t46 = *((unsigned int *)t65);
    t47 = (~(t46));
    t9 = (t39 & t41);
    t73 = (t45 & t47);
    t49 = (~(t9));
    t50 = (~(t73));
    t51 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t51 & t49);
    t52 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t52 & t50);
    t59 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t59 & t49);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t60 & t50);
    goto LAB318;

LAB320:    t63 = *((unsigned int *)t90);
    t64 = *((unsigned int *)t86);
    *((unsigned int *)t90) = (t63 | t64);
    t67 = *((unsigned int *)t80);
    t68 = *((unsigned int *)t86);
    *((unsigned int *)t80) = (t67 | t68);
    goto LAB319;

LAB321:    t81 = *((unsigned int *)t120);
    t82 = *((unsigned int *)t91);
    *((unsigned int *)t120) = (t81 | t82);
    t92 = (t90 + 4);
    t93 = (t87 + 4);
    t83 = *((unsigned int *)t90);
    t84 = (~(t83));
    t85 = *((unsigned int *)t92);
    t94 = (~(t85));
    t95 = *((unsigned int *)t87);
    t96 = (~(t95));
    t99 = *((unsigned int *)t93);
    t100 = (~(t99));
    t131 = (t84 & t94);
    t132 = (t96 & t100);
    t101 = (~(t131));
    t102 = (~(t132));
    t103 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t103 & t101);
    t104 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t104 & t102);
    t105 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t105 & t101);
    t106 = *((unsigned int *)t120);
    *((unsigned int *)t120) = (t106 & t102);
    goto LAB323;

LAB325:    *((unsigned int *)t133) = 1;
    goto LAB326;

LAB327:    xsi_set_current_line(880, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t134) = t119;
    t121 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng78, 2, t121, (char)114, t134, 64);
    goto LAB329;

LAB330:    xsi_set_current_line(882, ng7);

LAB333:    xsi_set_current_line(883, ng7);
    t6 = (t1 + 33952);
    t8 = (t6 + 56U);
    t48 = *((char **)t8);

LAB334:    t54 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t48, 3, t54, 3);
    if (t9 == 1)
        goto LAB335;

LAB336:    t4 = ((char*)((ng17)));
    t9 = xsi_vlog_unsigned_case_compare(t48, 3, t4, 3);
    if (t9 == 1)
        goto LAB337;

LAB338:    t4 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t48, 3, t4, 3);
    if (t9 == 1)
        goto LAB339;

LAB340:    t4 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_compare(t48, 3, t4, 3);
    if (t9 == 1)
        goto LAB341;

LAB342:    t4 = ((char*)((ng3)));
    t9 = xsi_vlog_unsigned_case_compare(t48, 3, t4, 3);
    if (t9 == 1)
        goto LAB343;

LAB344:    t4 = ((char*)((ng4)));
    t9 = xsi_vlog_unsigned_case_compare(t48, 3, t4, 3);
    if (t9 == 1)
        goto LAB345;

LAB346:    t4 = ((char*)((ng5)));
    t9 = xsi_vlog_unsigned_case_compare(t48, 3, t4, 3);
    if (t9 == 1)
        goto LAB347;

LAB348:    t4 = ((char*)((ng26)));
    t9 = xsi_vlog_unsigned_case_compare(t48, 3, t4, 3);
    if (t9 == 1)
        goto LAB349;

LAB350:
LAB352:
LAB351:    xsi_set_current_line(892, ng7);

LAB362:    xsi_set_current_line(892, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t4 = (t1 + 33952);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng89, 3, t8, (char)114, t10, 64, (char)118, t6, 3);

LAB353:    goto LAB332;

LAB335:    xsi_set_current_line(884, ng7);

LAB354:    xsi_set_current_line(884, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t55 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng79, 2, t55, (char)114, t10, 64);
    xsi_set_current_line(884, ng7);
    t4 = ((char*)((ng9)));
    t5 = (t1 + 5848);
    t6 = *((char **)t5);
    t5 = ((char*)((ng8)));
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 32, t6, 32, t5, 32);
    memset(t53, 0, 8);
    xsi_vlog_signed_lshift(t53, 32, t4, 32, t10, 32);
    t8 = (t1 + 34752);
    xsi_vlogvar_assign_value(t8, t53, 0, 0, 24);
    xsi_set_current_line(884, ng7);
    t4 = ((char*)((ng8)));
    t5 = (t1 + 34592);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 24);
    goto LAB353;

LAB337:    xsi_set_current_line(885, ng7);

LAB355:    xsi_set_current_line(885, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng80, 2, t5, (char)114, t10, 64);
    xsi_set_current_line(885, ng7);
    t4 = ((char*)((ng9)));
    t5 = (t1 + 5848);
    t6 = *((char **)t5);
    t5 = ((char*)((ng9)));
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 32, t6, 32, t5, 32);
    memset(t53, 0, 8);
    xsi_vlog_signed_lshift(t53, 32, t4, 32, t10, 32);
    t8 = (t1 + 34752);
    xsi_vlogvar_assign_value(t8, t53, 0, 0, 24);
    xsi_set_current_line(885, ng7);
    t4 = ((char*)((ng8)));
    t5 = (t1 + 34592);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 24);
    goto LAB353;

LAB339:    xsi_set_current_line(886, ng7);

LAB356:    xsi_set_current_line(886, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng81, 2, t5, (char)114, t10, 64);
    xsi_set_current_line(886, ng7);
    t4 = ((char*)((ng9)));
    t5 = (t1 + 5848);
    t6 = *((char **)t5);
    t5 = ((char*)((ng82)));
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 32, t6, 32, t5, 32);
    memset(t53, 0, 8);
    xsi_vlog_signed_lshift(t53, 32, t4, 32, t10, 32);
    t8 = (t1 + 34752);
    xsi_vlogvar_assign_value(t8, t53, 0, 0, 24);
    xsi_set_current_line(886, ng7);
    t4 = ((char*)((ng8)));
    t5 = (t1 + 34592);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 24);
    goto LAB353;

LAB341:    xsi_set_current_line(887, ng7);

LAB357:    xsi_set_current_line(887, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng83, 2, t5, (char)114, t10, 64);
    xsi_set_current_line(887, ng7);
    t4 = ((char*)((ng9)));
    t5 = (t1 + 5848);
    t6 = *((char **)t5);
    t5 = ((char*)((ng84)));
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 32, t6, 32, t5, 32);
    memset(t53, 0, 8);
    xsi_vlog_signed_lshift(t53, 32, t4, 32, t10, 32);
    t8 = (t1 + 34752);
    xsi_vlogvar_assign_value(t8, t53, 0, 0, 24);
    xsi_set_current_line(887, ng7);
    t4 = ((char*)((ng8)));
    t5 = (t1 + 34592);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 24);
    goto LAB353;

LAB343:    xsi_set_current_line(888, ng7);

LAB358:    xsi_set_current_line(888, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng85, 2, t5, (char)114, t10, 64);
    xsi_set_current_line(888, ng7);
    t4 = ((char*)((ng8)));
    t5 = (t1 + 34752);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 24);
    xsi_set_current_line(888, ng7);
    t4 = ((char*)((ng8)));
    t5 = (t1 + 34592);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 24);
    goto LAB353;

LAB345:    xsi_set_current_line(889, ng7);

LAB359:    xsi_set_current_line(889, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng86, 2, t5, (char)114, t10, 64);
    xsi_set_current_line(889, ng7);
    t4 = ((char*)((ng9)));
    t5 = (t1 + 5848);
    t6 = *((char **)t5);
    t5 = ((char*)((ng9)));
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 32, t6, 32, t5, 32);
    memset(t53, 0, 8);
    xsi_vlog_signed_lshift(t53, 32, t4, 32, t10, 32);
    t8 = (t1 + 34752);
    xsi_vlogvar_assign_value(t8, t53, 0, 0, 24);
    xsi_set_current_line(889, ng7);
    t4 = ((char*)((ng9)));
    t5 = (t1 + 5848);
    t6 = *((char **)t5);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 32, t4, 32, t6, 32);
    t5 = (t1 + 34752);
    t8 = (t5 + 56U);
    t54 = *((char **)t8);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_minus(t53, 32, t10, 32, t54, 24);
    t55 = (t1 + 34592);
    xsi_vlogvar_assign_value(t55, t53, 0, 0, 24);
    goto LAB353;

LAB347:    xsi_set_current_line(890, ng7);

LAB360:    xsi_set_current_line(890, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng87, 2, t5, (char)114, t10, 64);
    xsi_set_current_line(890, ng7);
    t4 = ((char*)((ng9)));
    t5 = (t1 + 5848);
    t6 = *((char **)t5);
    t5 = ((char*)((ng82)));
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 32, t6, 32, t5, 32);
    memset(t53, 0, 8);
    xsi_vlog_signed_lshift(t53, 32, t4, 32, t10, 32);
    t8 = (t1 + 34752);
    xsi_vlogvar_assign_value(t8, t53, 0, 0, 24);
    xsi_set_current_line(890, ng7);
    t4 = ((char*)((ng9)));
    t5 = (t1 + 5848);
    t6 = *((char **)t5);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 32, t4, 32, t6, 32);
    t5 = (t1 + 34752);
    t8 = (t5 + 56U);
    t54 = *((char **)t8);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_minus(t53, 32, t10, 32, t54, 24);
    t55 = (t1 + 34592);
    xsi_vlogvar_assign_value(t55, t53, 0, 0, 24);
    goto LAB353;

LAB349:    xsi_set_current_line(891, ng7);

LAB361:    xsi_set_current_line(891, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng88, 2, t5, (char)114, t10, 64);
    xsi_set_current_line(891, ng7);
    t4 = ((char*)((ng9)));
    t5 = (t1 + 5848);
    t6 = *((char **)t5);
    t5 = ((char*)((ng84)));
    memset(t10, 0, 8);
    xsi_vlog_signed_minus(t10, 32, t6, 32, t5, 32);
    memset(t53, 0, 8);
    xsi_vlog_signed_lshift(t53, 32, t4, 32, t10, 32);
    t8 = (t1 + 34752);
    xsi_vlogvar_assign_value(t8, t53, 0, 0, 24);
    xsi_set_current_line(891, ng7);
    t4 = ((char*)((ng9)));
    t5 = (t1 + 5848);
    t6 = *((char **)t5);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 32, t4, 32, t6, 32);
    t5 = (t1 + 34752);
    t8 = (t5 + 56U);
    t54 = *((char **)t8);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_minus(t53, 32, t10, 32, t54, 24);
    t55 = (t1 + 34592);
    xsi_vlogvar_assign_value(t55, t53, 0, 0, 24);
    goto LAB353;

LAB363:    xsi_set_current_line(896, ng7);

LAB366:    xsi_set_current_line(897, ng7);
    t6 = (t1 + 34112);
    t8 = (t6 + 56U);
    t54 = *((char **)t8);

LAB367:    t55 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t54, 1, t55, 1);
    if (t9 == 1)
        goto LAB368;

LAB369:    t4 = ((char*)((ng17)));
    t9 = xsi_vlog_unsigned_case_compare(t54, 1, t4, 1);
    if (t9 == 1)
        goto LAB370;

LAB371:
LAB373:
LAB372:    xsi_set_current_line(900, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t4 = (t1 + 34112);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng92, 3, t8, (char)114, t10, 64, (char)118, t6, 1);

LAB374:    goto LAB365;

LAB368:    xsi_set_current_line(898, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t56 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng90, 2, t56, (char)114, t10, 64);
    goto LAB374;

LAB370:    xsi_set_current_line(899, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng91, 2, t5, (char)114, t10, 64);
    goto LAB374;

LAB377:    *((unsigned int *)t10) = 1;
    goto LAB376;

LAB379:    xsi_set_current_line(904, ng7);

LAB382:    xsi_set_current_line(905, ng7);
    t55 = (t1 + 34272);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);

LAB383:    t58 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t57, 2, t58, 2);
    if (t9 == 1)
        goto LAB384;

LAB385:    t4 = ((char*)((ng17)));
    t9 = xsi_vlog_unsigned_case_compare(t57, 2, t4, 2);
    if (t9 == 1)
        goto LAB386;

LAB387:    t4 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t57, 2, t4, 2);
    if (t9 == 1)
        goto LAB388;

LAB389:    t4 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_compare(t57, 2, t4, 2);
    if (t9 == 1)
        goto LAB390;

LAB391:
LAB393:
LAB392:    xsi_set_current_line(910, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t4 = (t1 + 34272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng97, 3, t8, (char)114, t10, 64, (char)118, t6, 2);

LAB394:    goto LAB381;

LAB384:    xsi_set_current_line(906, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t53) = t119;
    t65 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng93, 2, t65, (char)114, t53, 64);
    goto LAB394;

LAB386:    xsi_set_current_line(907, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng94, 2, t5, (char)114, t10, 64);
    goto LAB394;

LAB388:    xsi_set_current_line(908, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng95, 2, t5, (char)114, t10, 64);
    goto LAB394;

LAB390:    xsi_set_current_line(909, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng96, 2, t5, (char)114, t10, 64);
    goto LAB394;

LAB395:    xsi_set_current_line(914, ng7);

LAB398:    xsi_set_current_line(915, ng7);
    t6 = (t1 + 34432);
    t8 = (t6 + 56U);
    t55 = *((char **)t8);

LAB399:    t56 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t55, 1, t56, 1);
    if (t9 == 1)
        goto LAB400;

LAB401:    t4 = ((char*)((ng17)));
    t9 = xsi_vlog_unsigned_case_compare(t55, 1, t4, 1);
    if (t9 == 1)
        goto LAB402;

LAB403:
LAB405:
LAB404:    xsi_set_current_line(918, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t4 = (t1 + 34432);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng100, 3, t8, (char)114, t10, 64, (char)118, t6, 1);

LAB406:    goto LAB397;

LAB400:    xsi_set_current_line(916, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t58 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng98, 2, t58, (char)114, t10, 64);
    goto LAB406;

LAB402:    xsi_set_current_line(917, ng7);
    t119 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t10) = t119;
    t5 = (t1 + 14888);
    xsi_vlogfile_write(1, 0, 0, ng99, 2, t5, (char)114, t10, 64);
    goto LAB406;

LAB407:    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t56);
    *((unsigned int *)t10) = (t25 | t26);
    t58 = (t4 + 4);
    t65 = (t5 + 4);
    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t32 = *((unsigned int *)t58);
    t33 = (~(t32));
    t34 = *((unsigned int *)t5);
    t35 = (~(t34));
    t36 = *((unsigned int *)t65);
    t37 = (~(t36));
    t9 = (t28 & t33);
    t73 = (t35 & t37);
    t38 = (~(t9));
    t39 = (~(t73));
    t40 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t40 & t38);
    t41 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t41 & t39);
    t42 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t42 & t38);
    t45 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t45 & t39);
    goto LAB409;

}

static int sp_addr_timing_check(char *t1, char *t2)
{
    char t5[8];
    char t14[8];
    char t26[8];
    char t35[8];
    char t43[8];
    char t75[8];
    char t87[8];
    char t96[8];
    char t104[8];
    char t136[8];
    char t150[8];
    char t157[8];
    char t189[8];
    char t203[8];
    char t219[8];
    char t227[8];
    char t280[8];
    char t288[8];
    char t302[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    int t128;
    int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    int t181;
    int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    char *t196;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t201;
    char *t202;
    char *t204;
    char *t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    char *t218;
    char *t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    char *t226;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    char *t231;
    char *t232;
    char *t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    char *t241;
    char *t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    int t251;
    int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    char *t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    char *t265;
    char *t266;
    char *t267;
    char *t268;
    int t269;
    double t270;
    char *t271;
    char *t272;
    char *t273;
    double t274;
    double t275;
    char *t276;
    char *t277;
    double t278;
    unsigned int t279;
    char *t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    unsigned int t286;
    double t287;
    char *t289;
    char *t290;
    char *t291;
    char *t292;
    char *t293;
    char *t294;
    double t295;
    char *t296;
    char *t297;
    double t298;
    double t299;
    double t300;
    double t301;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 15320);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(1271, ng7);

LAB5:    xsi_set_current_line(1272, ng7);
    t6 = (t1 + 16592U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t6) == 0)
        goto LAB6;

LAB8:    t13 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t13) = 1;

LAB9:    memset(t14, 0, 8);
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t5);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t15) != 0)
        goto LAB12;

LAB13:    t22 = (t14 + 4);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t22);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB14;

LAB15:    memcpy(t43, t14, 8);

LAB16:    memset(t75, 0, 8);
    t76 = (t43 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t43);
    t80 = (t79 & t78);
    t81 = (t80 & 1U);
    if (t81 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t76) != 0)
        goto LAB30;

LAB31:    t83 = (t75 + 4);
    t84 = *((unsigned int *)t75);
    t85 = *((unsigned int *)t83);
    t86 = (t84 || t85);
    if (t86 > 0)
        goto LAB32;

LAB33:    memcpy(t104, t75, 8);

LAB34:    memset(t136, 0, 8);
    t137 = (t104 + 4);
    t138 = *((unsigned int *)t137);
    t139 = (~(t138));
    t140 = *((unsigned int *)t104);
    t141 = (t140 & t139);
    t142 = (t141 & 1U);
    if (t142 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t137) != 0)
        goto LAB48;

LAB49:    t144 = (t136 + 4);
    t145 = *((unsigned int *)t136);
    t146 = *((unsigned int *)t144);
    t147 = (t145 || t146);
    if (t147 > 0)
        goto LAB50;

LAB51:    memcpy(t157, t136, 8);

LAB52:    memset(t189, 0, 8);
    t190 = (t157 + 4);
    t191 = *((unsigned int *)t190);
    t192 = (~(t191));
    t193 = *((unsigned int *)t157);
    t194 = (t193 & t192);
    t195 = (t194 & 1U);
    if (t195 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t190) != 0)
        goto LAB62;

LAB63:    t197 = (t189 + 4);
    t198 = *((unsigned int *)t189);
    t199 = *((unsigned int *)t197);
    t200 = (t198 || t199);
    if (t200 > 0)
        goto LAB64;

LAB65:    memcpy(t227, t189, 8);

LAB66:    t259 = (t227 + 4);
    t260 = *((unsigned int *)t259);
    t261 = (~(t260));
    t262 = *((unsigned int *)t227);
    t263 = (t262 & t261);
    t264 = (t263 != 0);
    if (t264 > 0)
        goto LAB78;

LAB79:
LAB80:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    *((unsigned int *)t5) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t14) = 1;
    goto LAB13;

LAB12:    t21 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB14:    t27 = (t1 + 18352U);
    t28 = *((char **)t27);
    memset(t26, 0, 8);
    t27 = (t28 + 4);
    t29 = *((unsigned int *)t27);
    t30 = (~(t29));
    t31 = *((unsigned int *)t28);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t27) == 0)
        goto LAB17;

LAB19:    t34 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t34) = 1;

LAB20:    memset(t35, 0, 8);
    t36 = (t26 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t26);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t36) != 0)
        goto LAB23;

LAB24:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t35);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t14 + 4);
    t48 = (t35 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB17:    *((unsigned int *)t26) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t35) = 1;
    goto LAB24;

LAB23:    t42 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB24;

LAB25:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t14 + 4);
    t58 = (t35 + 4);
    t59 = *((unsigned int *)t14);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB27;

LAB28:    *((unsigned int *)t75) = 1;
    goto LAB31;

LAB30:    t82 = (t75 + 4);
    *((unsigned int *)t75) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB31;

LAB32:    t88 = (t1 + 16752U);
    t89 = *((char **)t88);
    memset(t87, 0, 8);
    t88 = (t89 + 4);
    t90 = *((unsigned int *)t88);
    t91 = (~(t90));
    t92 = *((unsigned int *)t89);
    t93 = (t92 & t91);
    t94 = (t93 & 1U);
    if (t94 != 0)
        goto LAB38;

LAB36:    if (*((unsigned int *)t88) == 0)
        goto LAB35;

LAB37:    t95 = (t87 + 4);
    *((unsigned int *)t87) = 1;
    *((unsigned int *)t95) = 1;

LAB38:    memset(t96, 0, 8);
    t97 = (t87 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t87);
    t101 = (t100 & t99);
    t102 = (t101 & 1U);
    if (t102 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t97) != 0)
        goto LAB41;

LAB42:    t105 = *((unsigned int *)t75);
    t106 = *((unsigned int *)t96);
    t107 = (t105 & t106);
    *((unsigned int *)t104) = t107;
    t108 = (t75 + 4);
    t109 = (t96 + 4);
    t110 = (t104 + 4);
    t111 = *((unsigned int *)t108);
    t112 = *((unsigned int *)t109);
    t113 = (t111 | t112);
    *((unsigned int *)t110) = t113;
    t114 = *((unsigned int *)t110);
    t115 = (t114 != 0);
    if (t115 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB34;

LAB35:    *((unsigned int *)t87) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t96) = 1;
    goto LAB42;

LAB41:    t103 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB42;

LAB43:    t116 = *((unsigned int *)t104);
    t117 = *((unsigned int *)t110);
    *((unsigned int *)t104) = (t116 | t117);
    t118 = (t75 + 4);
    t119 = (t96 + 4);
    t120 = *((unsigned int *)t75);
    t121 = (~(t120));
    t122 = *((unsigned int *)t118);
    t123 = (~(t122));
    t124 = *((unsigned int *)t96);
    t125 = (~(t124));
    t126 = *((unsigned int *)t119);
    t127 = (~(t126));
    t128 = (t121 & t123);
    t129 = (t125 & t127);
    t130 = (~(t128));
    t131 = (~(t129));
    t132 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t132 & t130);
    t133 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t133 & t131);
    t134 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t134 & t130);
    t135 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t135 & t131);
    goto LAB45;

LAB46:    *((unsigned int *)t136) = 1;
    goto LAB49;

LAB48:    t143 = (t136 + 4);
    *((unsigned int *)t136) = 1;
    *((unsigned int *)t143) = 1;
    goto LAB49;

LAB50:    t148 = (t1 + 16912U);
    t149 = *((char **)t148);
    memset(t150, 0, 8);
    t148 = (t149 + 4);
    t151 = *((unsigned int *)t148);
    t152 = (~(t151));
    t153 = *((unsigned int *)t149);
    t154 = (t153 & t152);
    t155 = (t154 & 1U);
    if (t155 != 0)
        goto LAB53;

LAB54:    if (*((unsigned int *)t148) != 0)
        goto LAB55;

LAB56:    t158 = *((unsigned int *)t136);
    t159 = *((unsigned int *)t150);
    t160 = (t158 & t159);
    *((unsigned int *)t157) = t160;
    t161 = (t136 + 4);
    t162 = (t150 + 4);
    t163 = (t157 + 4);
    t164 = *((unsigned int *)t161);
    t165 = *((unsigned int *)t162);
    t166 = (t164 | t165);
    *((unsigned int *)t163) = t166;
    t167 = *((unsigned int *)t163);
    t168 = (t167 != 0);
    if (t168 == 1)
        goto LAB57;

LAB58:
LAB59:    goto LAB52;

LAB53:    *((unsigned int *)t150) = 1;
    goto LAB56;

LAB55:    t156 = (t150 + 4);
    *((unsigned int *)t150) = 1;
    *((unsigned int *)t156) = 1;
    goto LAB56;

LAB57:    t169 = *((unsigned int *)t157);
    t170 = *((unsigned int *)t163);
    *((unsigned int *)t157) = (t169 | t170);
    t171 = (t136 + 4);
    t172 = (t150 + 4);
    t173 = *((unsigned int *)t136);
    t174 = (~(t173));
    t175 = *((unsigned int *)t171);
    t176 = (~(t175));
    t177 = *((unsigned int *)t150);
    t178 = (~(t177));
    t179 = *((unsigned int *)t172);
    t180 = (~(t179));
    t181 = (t174 & t176);
    t182 = (t178 & t180);
    t183 = (~(t181));
    t184 = (~(t182));
    t185 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t185 & t183);
    t186 = *((unsigned int *)t163);
    *((unsigned int *)t163) = (t186 & t184);
    t187 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t187 & t183);
    t188 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t188 & t184);
    goto LAB59;

LAB60:    *((unsigned int *)t189) = 1;
    goto LAB63;

LAB62:    t196 = (t189 + 4);
    *((unsigned int *)t189) = 1;
    *((unsigned int *)t196) = 1;
    goto LAB63;

LAB64:    t201 = (t1 + 17392U);
    t202 = *((char **)t201);
    t201 = ((char*)((ng6)));
    memset(t203, 0, 8);
    t204 = (t202 + 4);
    t205 = (t201 + 4);
    t206 = *((unsigned int *)t202);
    t207 = *((unsigned int *)t201);
    t208 = (t206 ^ t207);
    t209 = *((unsigned int *)t204);
    t210 = *((unsigned int *)t205);
    t211 = (t209 ^ t210);
    t212 = (t208 | t211);
    t213 = *((unsigned int *)t204);
    t214 = *((unsigned int *)t205);
    t215 = (t213 | t214);
    t216 = (~(t215));
    t217 = (t212 & t216);
    if (t217 != 0)
        goto LAB70;

LAB67:    if (t215 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t203) = 1;

LAB70:    memset(t219, 0, 8);
    t220 = (t203 + 4);
    t221 = *((unsigned int *)t220);
    t222 = (~(t221));
    t223 = *((unsigned int *)t203);
    t224 = (t223 & t222);
    t225 = (t224 & 1U);
    if (t225 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t220) != 0)
        goto LAB73;

LAB74:    t228 = *((unsigned int *)t189);
    t229 = *((unsigned int *)t219);
    t230 = (t228 & t229);
    *((unsigned int *)t227) = t230;
    t231 = (t189 + 4);
    t232 = (t219 + 4);
    t233 = (t227 + 4);
    t234 = *((unsigned int *)t231);
    t235 = *((unsigned int *)t232);
    t236 = (t234 | t235);
    *((unsigned int *)t233) = t236;
    t237 = *((unsigned int *)t233);
    t238 = (t237 != 0);
    if (t238 == 1)
        goto LAB75;

LAB76:
LAB77:    goto LAB66;

LAB69:    t218 = (t203 + 4);
    *((unsigned int *)t203) = 1;
    *((unsigned int *)t218) = 1;
    goto LAB70;

LAB71:    *((unsigned int *)t219) = 1;
    goto LAB74;

LAB73:    t226 = (t219 + 4);
    *((unsigned int *)t219) = 1;
    *((unsigned int *)t226) = 1;
    goto LAB74;

LAB75:    t239 = *((unsigned int *)t227);
    t240 = *((unsigned int *)t233);
    *((unsigned int *)t227) = (t239 | t240);
    t241 = (t189 + 4);
    t242 = (t219 + 4);
    t243 = *((unsigned int *)t189);
    t244 = (~(t243));
    t245 = *((unsigned int *)t241);
    t246 = (~(t245));
    t247 = *((unsigned int *)t219);
    t248 = (~(t247));
    t249 = *((unsigned int *)t242);
    t250 = (~(t249));
    t251 = (t244 & t246);
    t252 = (t248 & t250);
    t253 = (~(t251));
    t254 = (~(t252));
    t255 = *((unsigned int *)t233);
    *((unsigned int *)t233) = (t255 & t253);
    t256 = *((unsigned int *)t233);
    *((unsigned int *)t233) = (t256 & t254);
    t257 = *((unsigned int *)t227);
    *((unsigned int *)t227) = (t257 & t253);
    t258 = *((unsigned int *)t227);
    *((unsigned int *)t227) = (t258 & t254);
    goto LAB77;

LAB78:    xsi_set_current_line(1272, ng7);

LAB81:    xsi_set_current_line(1273, ng7);
    t265 = (t1 + 41952);
    t266 = (t265 + 56U);
    t267 = *((char **)t266);

LAB82:    t268 = ((char*)((ng84)));
    t269 = xsi_vlog_signed_case_compare(t267, 32, t268, 32);
    if (t269 == 1)
        goto LAB83;

LAB84:    t4 = ((char*)((ng82)));
    t67 = xsi_vlog_signed_case_compare(t267, 32, t4, 32);
    if (t67 == 1)
        goto LAB85;

LAB86:    t4 = ((char*)((ng9)));
    t67 = xsi_vlog_signed_case_compare(t267, 32, t4, 32);
    if (t67 == 1)
        goto LAB87;

LAB88:    t4 = ((char*)((ng8)));
    t67 = xsi_vlog_signed_case_compare(t267, 32, t4, 32);
    if (t67 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB80;

LAB83:    xsi_set_current_line(1274, ng7);

LAB92:    xsi_set_current_line(1274, ng7);
    t270 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t271 = (t1 + 37952);
    t272 = (t271 + 56U);
    t273 = *((char **)t272);
    t274 = *((double *)t273);
    t275 = (t270 - t274);
    t276 = (t1 + 2720);
    t277 = *((char **)t276);
    t278 = *((double *)t277);
    t279 = (t275 < t278);
    *((unsigned int *)t280) = t279;
    t276 = (t280 + 4);
    *((unsigned int *)t276) = 0U;
    t281 = (t280 + 4);
    t282 = *((unsigned int *)t281);
    t283 = (~(t282));
    t284 = *((unsigned int *)t280);
    t285 = (t284 & t283);
    t286 = (t285 != 0);
    if (t286 > 0)
        goto LAB93;

LAB94:
LAB95:    xsi_set_current_line(1274, ng7);
    t270 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t5) = t270;
    t4 = (t1 + 37952);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    goto LAB91;

LAB85:    xsi_set_current_line(1275, ng7);

LAB96:    xsi_set_current_line(1275, ng7);
    t270 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t6 = (t1 + 38112);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    t274 = *((double *)t13);
    t275 = (t270 - t274);
    t15 = (t1 + 2720);
    t21 = *((char **)t15);
    t278 = *((double *)t21);
    t8 = (t275 < t278);
    *((unsigned int *)t5) = t8;
    t15 = (t5 + 4);
    *((unsigned int *)t15) = 0U;
    t22 = (t5 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t16 = (t12 != 0);
    if (t16 > 0)
        goto LAB97;

LAB98:
LAB99:    xsi_set_current_line(1275, ng7);
    t270 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t5) = t270;
    t4 = (t1 + 38112);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    goto LAB91;

LAB87:    xsi_set_current_line(1276, ng7);

LAB100:    xsi_set_current_line(1276, ng7);
    t270 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t6 = (t1 + 38272);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    t274 = *((double *)t13);
    t275 = (t270 - t274);
    t15 = (t1 + 2720);
    t21 = *((char **)t15);
    t278 = *((double *)t21);
    t8 = (t275 < t278);
    *((unsigned int *)t5) = t8;
    t15 = (t5 + 4);
    *((unsigned int *)t15) = 0U;
    t22 = (t5 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t16 = (t12 != 0);
    if (t16 > 0)
        goto LAB101;

LAB102:
LAB103:    xsi_set_current_line(1276, ng7);
    t270 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t5) = t270;
    t4 = (t1 + 38272);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    goto LAB91;

LAB89:    xsi_set_current_line(1277, ng7);

LAB104:    xsi_set_current_line(1277, ng7);
    t270 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t6 = (t1 + 38432);
    t7 = (t6 + 56U);
    t13 = *((char **)t7);
    t274 = *((double *)t13);
    t275 = (t270 - t274);
    t15 = (t1 + 2720);
    t21 = *((char **)t15);
    t278 = *((double *)t21);
    t8 = (t275 < t278);
    *((unsigned int *)t5) = t8;
    t15 = (t5 + 4);
    *((unsigned int *)t15) = 0U;
    t22 = (t5 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t16 = (t12 != 0);
    if (t16 > 0)
        goto LAB105;

LAB106:
LAB107:    xsi_set_current_line(1277, ng7);
    t270 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t5) = t270;
    t4 = (t1 + 38432);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    goto LAB91;

LAB93:    xsi_set_current_line(1274, ng7);
    t287 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t288) = t287;
    t289 = (t1 + 41952);
    t290 = (t289 + 56U);
    t291 = *((char **)t290);
    t292 = (t1 + 37952);
    t293 = (t292 + 56U);
    t294 = *((char **)t293);
    t295 = *((double *)t294);
    t296 = (t1 + 2720);
    t297 = *((char **)t296);
    t298 = *((double *)t297);
    t299 = (t295 + t298);
    t300 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t301 = (t299 - t300);
    *((double *)t302) = t301;
    t296 = (t1 + 15320);
    xsi_vlogfile_write(1, 0, 0, ng104, 4, t296, (char)114, t288, 64, (char)119, t291, 32, (char)114, t302, 64);
    goto LAB95;

LAB97:    xsi_set_current_line(1275, ng7);
    t287 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t14) = t287;
    t27 = (t1 + 41952);
    t28 = (t27 + 56U);
    t34 = *((char **)t28);
    t36 = (t1 + 38112);
    t42 = (t36 + 56U);
    t47 = *((char **)t42);
    t295 = *((double *)t47);
    t48 = (t1 + 2720);
    t49 = *((char **)t48);
    t298 = *((double *)t49);
    t299 = (t295 + t298);
    t300 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t301 = (t299 - t300);
    *((double *)t26) = t301;
    t48 = (t1 + 15320);
    xsi_vlogfile_write(1, 0, 0, ng104, 4, t48, (char)114, t14, 64, (char)119, t34, 32, (char)114, t26, 64);
    goto LAB99;

LAB101:    xsi_set_current_line(1276, ng7);
    t287 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t14) = t287;
    t27 = (t1 + 41952);
    t28 = (t27 + 56U);
    t34 = *((char **)t28);
    t36 = (t1 + 38272);
    t42 = (t36 + 56U);
    t47 = *((char **)t42);
    t295 = *((double *)t47);
    t48 = (t1 + 2720);
    t49 = *((char **)t48);
    t298 = *((double *)t49);
    t299 = (t295 + t298);
    t300 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t301 = (t299 - t300);
    *((double *)t26) = t301;
    t48 = (t1 + 15320);
    xsi_vlogfile_write(1, 0, 0, ng104, 4, t48, (char)114, t14, 64, (char)119, t34, 32, (char)114, t26, 64);
    goto LAB103;

LAB105:    xsi_set_current_line(1277, ng7);
    t287 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t14) = t287;
    t27 = (t1 + 41952);
    t28 = (t27 + 56U);
    t34 = *((char **)t28);
    t36 = (t1 + 38432);
    t42 = (t36 + 56U);
    t47 = *((char **)t42);
    t295 = *((double *)t47);
    t48 = (t1 + 2720);
    t49 = *((char **)t48);
    t298 = *((double *)t49);
    t299 = (t295 + t298);
    t300 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t301 = (t299 - t300);
    *((double *)t26) = t301;
    t48 = (t1 + 15320);
    xsi_vlogfile_write(1, 0, 0, ng104, 4, t48, (char)114, t14, 64, (char)119, t34, 32, (char)114, t26, 64);
    goto LAB107;

}

static void NetDecl_123_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 42872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(123, ng7);
    t2 = (t0 + 17072U);
    t4 = *((char **)t2);
    t2 = (t0 + 17232U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 2, 2, 2U, t5, 1, t4, 1);
    t2 = (t0 + 57464);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 3U;
    t11 = t10;
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 1U);
    t18 = (t0 + 56584);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_128_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 43120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(128, ng7);
    t2 = (t0 + 17712U);
    t3 = *((char **)t2);
    t2 = (t0 + 57528);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 15U);
    t16 = (t0 + 56600);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_129_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 43368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(129, ng7);
    t2 = (t0 + 17872U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 65535U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 65535U);
    t12 = (t0 + 57592);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 65535U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 15);
    t25 = (t0 + 56616);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_136_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 43616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(136, ng7);
    t2 = (t0 + 15952U);
    t3 = *((char **)t2);
    t2 = (t0 + 57656);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 56632);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_137_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 43864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(137, ng7);
    t2 = (t0 + 16112U);
    t3 = *((char **)t2);
    t2 = (t0 + 57720);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 56648);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_138_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t36[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;

LAB0:    t1 = (t0 + 44112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(138, ng7);
    t2 = ((char*)((ng1)));
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t2 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t72 = *((unsigned int *)t4);
    t73 = (~(t72));
    t74 = *((unsigned int *)t29);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t77, 8);

LAB20:    t76 = (t0 + 57784);
    t78 = (t76 + 56U);
    t79 = *((char **)t78);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    memset(t81, 0, 8);
    t82 = 1U;
    t83 = t82;
    t84 = (t3 + 4);
    t85 = *((unsigned int *)t3);
    t82 = (t82 & t85);
    t86 = *((unsigned int *)t84);
    t83 = (t83 & t86);
    t87 = (t81 + 4);
    t88 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t88 | t82);
    t89 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t89 | t83);
    xsi_driver_vfirst_trans(t76, 0, 0);
    t90 = (t0 + 56664);
    *((int *)t90) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 16272U);
    t34 = *((char **)t33);
    t33 = (t0 + 18032U);
    t35 = *((char **)t33);
    memset(t36, 0, 8);
    t33 = (t36 + 4);
    t37 = (t35 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 15);
    t40 = (t39 & 1);
    *((unsigned int *)t36) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 >> 15);
    t43 = (t42 & 1);
    *((unsigned int *)t33) = t43;
    t45 = *((unsigned int *)t34);
    t46 = *((unsigned int *)t36);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = (t34 + 4);
    t49 = (t36 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB13;

LAB14:    t76 = (t0 + 16272U);
    t77 = *((char **)t76);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t44, 1, t77, 1);
    goto LAB20;

LAB18:    memcpy(t3, t44, 8);
    goto LAB20;

LAB21:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t34 + 4);
    t59 = (t36 + 4);
    t60 = *((unsigned int *)t58);
    t61 = (~(t60));
    t62 = *((unsigned int *)t34);
    t63 = (t62 & t61);
    t64 = *((unsigned int *)t59);
    t65 = (~(t64));
    t66 = *((unsigned int *)t36);
    t67 = (t66 & t65);
    t68 = (~(t63));
    t69 = (~(t67));
    t70 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t70 & t68);
    t71 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t71 & t69);
    goto LAB23;

}

static void Cont_139_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 44360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(139, ng7);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 57848);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void Cont_140_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 44608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(140, ng7);
    t2 = (t0 + 18832U);
    t3 = *((char **)t2);
    t2 = (t0 + 57912);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 56680);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Initial_141_8(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(141, ng7);
    t1 = ((char*)((ng17)));
    t2 = (t0 + 26112);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void NetDecl_219_9(char *t0)
{
    char t3[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;

LAB0:    t1 = (t0 + 45104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(219, ng7);
    t2 = (t0 + 32192);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 32352);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 32512);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 32672);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng6)));
    t16 = (t0 + 32832);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 32992);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t0 + 33312);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t26 = (t0 + 33472);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t25, 0, 8);
    t29 = (t25 + 4);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = (t31 >> 0);
    *((unsigned int *)t25) = t32;
    t33 = *((unsigned int *)t30);
    t34 = (t33 >> 0);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t35 & 7U);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 & 7U);
    t37 = (t0 + 33632);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t0 + 33792);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    xsi_vlogtype_concat(t3, 16, 16, 11U, t42, 1, t39, 1, t25, 3, t24, 1, t21, 1, t18, 1, t15, 1, t14, 1, t11, 2, t8, 1, t5, 3);
    t43 = (t0 + 57976);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t47, 0, 8);
    t48 = 65535U;
    t49 = t48;
    t50 = (t3 + 4);
    t51 = *((unsigned int *)t3);
    t48 = (t48 & t51);
    t52 = *((unsigned int *)t50);
    t49 = (t49 & t52);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t54 | t48);
    t55 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t55 | t49);
    xsi_driver_vfirst_trans(t43, 0, 15U);
    t56 = (t0 + 56696);
    *((int *)t56) = 1;

LAB1:    return;
}

static void NetDecl_228_10(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;

LAB0:    t1 = (t0 + 45352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(228, ng7);
    t2 = (t0 + 33952);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = ((char*)((ng6)));
    t7 = (t0 + 34112);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 34272);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t0 + 34432);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    xsi_vlogtype_concat(t3, 8, 8, 5U, t15, 1, t12, 2, t9, 1, t6, 1, t5, 3);
    t16 = (t0 + 58040);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t20, 0, 8);
    t21 = 255U;
    t22 = t21;
    t23 = (t3 + 4);
    t24 = *((unsigned int *)t3);
    t21 = (t21 & t24);
    t25 = *((unsigned int *)t23);
    t22 = (t22 & t25);
    t26 = (t20 + 4);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 | t21);
    t28 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t28 | t22);
    xsi_driver_vfirst_trans(t16, 0, 7U);
    t29 = (t0 + 56712);
    *((int *)t29) = 1;

LAB1:    return;
}

static void NetDecl_232_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 45600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(232, ng7);
    t2 = ((char*)((ng105)));
    t3 = (t0 + 58104);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 15U);

LAB1:    return;
}

static void Cont_265_12(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;

LAB0:    t1 = (t0 + 45848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(265, ng7);
    t2 = (t0 + 19312U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t38 = *((unsigned int *)t4);
    t39 = (~(t38));
    t40 = *((unsigned int *)t12);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t42, 8);

LAB16:    t43 = (t0 + 58168);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memset(t47, 0, 8);
    t48 = 1U;
    t49 = t48;
    t50 = (t3 + 4);
    t51 = *((unsigned int *)t3);
    t48 = (t48 & t51);
    t52 = *((unsigned int *)t50);
    t49 = (t49 & t52);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t54 | t48);
    t55 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t55 | t49);
    xsi_driver_vfirst_trans(t43, 0, 0);
    t56 = (t0 + 56728);
    *((int *)t56) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 19472U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t19 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t18) != 0)
        goto LAB19;

LAB20:    t26 = (t17 + 4);
    t27 = *((unsigned int *)t17);
    t28 = *((unsigned int *)t26);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB21;

LAB22:    t33 = *((unsigned int *)t17);
    t34 = (~(t33));
    t35 = *((unsigned int *)t26);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t26) > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t17) > 0)
        goto LAB27;

LAB28:    memcpy(t16, t37, 8);

LAB29:    goto LAB9;

LAB10:    t42 = ((char*)((ng107)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t42, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t17) = 1;
    goto LAB20;

LAB19:    t25 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB20;

LAB21:    t30 = (t0 + 29792);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    goto LAB22;

LAB23:    t37 = ((char*)((ng106)));
    goto LAB24;

LAB25:    xsi_vlog_unsigned_bit_combine(t16, 1, t32, 1, t37, 1);
    goto LAB29;

LAB27:    memcpy(t16, t32, 8);
    goto LAB29;

}

static void NetDecl_268_13(char *t0)
{
    char t3[8];
    char t4[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 46096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(268, ng7);
    t2 = (t0 + 19152U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t25 = (t0 + 58232);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t3, 8);
    xsi_driver_vfirst_trans(t25, 0, 31U);
    t30 = (t0 + 56744);
    *((int *)t30) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 32032);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t19, t18, 8);
    goto LAB9;

LAB10:    t24 = ((char*)((ng108)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t19, 32, t24, 32);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

}

static void Gate_269_14(char *t0)
{
    char t4[8];
    char t5[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;

LAB0:    t1 = (t0 + 46344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 20112U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng109)));
    t6 = (t0 + 18992U);
    t7 = *((char **)t6);
    xsi_vlog_mul_concat(t5, 16, 1, t2, 1U, t7, 1);
    t6 = (t0 + 31712);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t9);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t14 = (t5 + 4);
    t15 = (t9 + 4);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t15);
    t19 = (t17 | t18);
    *((unsigned int *)t16) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB4;

LAB5:
LAB6:    t42 = ((char*)((ng6)));
    xsi_vlogtype_concat(t4, 32, 32, 2U, t42, 16, t10, 16);
    t43 = (t0 + 58296);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    xsi_vlog_bufIf1ArrayGate(t47, 32, t3, t4);
    t48 = (t0 + 58296);
    xsi_driver_vfirst_trans_bufif(t48, 0, 31);
    t49 = (t0 + 56760);
    *((int *)t49) = 1;

LAB1:    return;
LAB4:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t10) = (t22 | t23);
    t24 = (t5 + 4);
    t25 = (t9 + 4);
    t26 = *((unsigned int *)t5);
    t27 = (~(t26));
    t28 = *((unsigned int *)t24);
    t29 = (~(t28));
    t30 = *((unsigned int *)t9);
    t31 = (~(t30));
    t32 = *((unsigned int *)t25);
    t33 = (~(t32));
    t34 = (t27 & t29);
    t35 = (t31 & t33);
    t36 = (~(t34));
    t37 = (~(t35));
    t38 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t38 & t36);
    t39 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t39 & t37);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t36);
    t41 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t41 & t37);
    goto LAB6;

}

static void NetDecl_300_15(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 46592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(300, ng7);
    t2 = (t0 + 18192U);
    t3 = *((char **)t2);
    t2 = (t0 + 58360);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans_delayed(t2, 0, 0U, 1000LL, 0);
    t16 = (t0 + 56776);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_301_16(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 46840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(301, ng7);
    t2 = (t0 + 18352U);
    t3 = *((char **)t2);
    t2 = (t0 + 58424);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans_delayed(t2, 0, 0U, 1000LL, 0);
    t16 = (t0 + 56792);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_302_17(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 47088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(302, ng7);
    t2 = (t0 + 16752U);
    t3 = *((char **)t2);
    t2 = (t0 + 58488);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans_delayed(t2, 0, 0U, 1000LL, 0);
    t16 = (t0 + 56808);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_303_18(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 47336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(303, ng7);
    t2 = (t0 + 16592U);
    t3 = *((char **)t2);
    t2 = (t0 + 58552);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans_delayed(t2, 0, 0U, 1000LL, 0);
    t16 = (t0 + 56824);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_304_19(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 47584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(304, ng7);
    t2 = (t0 + 21552U);
    t3 = *((char **)t2);
    t2 = (t0 + 58616);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans_delayed(t2, 0, 0U, 1000LL, 0);
    t16 = (t0 + 56840);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_305_20(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 47832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(305, ng7);
    t2 = (t0 + 16912U);
    t3 = *((char **)t2);
    t2 = (t0 + 58680);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans_delayed(t2, 0, 0U, 1000LL, 0);
    t16 = (t0 + 56856);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_306_21(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 48080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(306, ng7);
    t2 = (t0 + 18512U);
    t3 = *((char **)t2);
    t2 = (t0 + 58744);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans_delayed(t2, 0, 0U, 1000LL, 0);
    t16 = (t0 + 56872);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_307_22(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 48328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(307, ng7);
    t2 = (t0 + 17392U);
    t3 = *((char **)t2);
    t2 = (t0 + 58808);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 3U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans_delayed(t2, 0, 1U, 1000LL, 0);
    t16 = (t0 + 56888);
    *((int *)t16) = 1;

LAB1:    return;
}

static void NetDecl_308_23(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 48576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(308, ng7);
    t2 = (t0 + 18032U);
    t3 = *((char **)t2);
    t2 = (t0 + 58872);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans_delayed(t2, 0, 15U, 1000LL, 0);
    t16 = (t0 + 56904);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Initial_311_24(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    double t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t1 = (t0 + 48824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(311, ng7);

LAB4:    xsi_set_current_line(312, ng7);
    t2 = ((char*)((ng110)));
    memset(t3, 0, 8);
    xsi_vlog_signed_unary_minus(t3, 32, t2, 32);
    t4 = ((char*)((ng84)));
    t5 = ((char*)((ng9)));
    xsi_vlog_setTimeFormat(*((unsigned int *)t3), *((unsigned int *)t4), ng111, 0, *((unsigned int *)t5));
    xsi_set_current_line(313, ng7);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 28512);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(314, ng7);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 27232);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(315, ng7);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 27552);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(316, ng7);
    t2 = ((char*)((ng112)));
    t4 = (t0 + 31392);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 64, 0LL);
    xsi_set_current_line(317, ng7);
    t6 = 0.00000000000000000;
    *((double *)t3) = t6;
    t2 = (t0 + 38752);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(318, ng7);
    t2 = ((char*)((ng1)));
    t4 = ((char*)((ng24)));
    t5 = ((char*)((ng6)));
    t7 = (t0 + 48632);
    t8 = (t0 + 14888);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 41472);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 2);
    t11 = (t0 + 41632);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 16);
    t12 = (t0 + 41792);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 1);

LAB7:    t13 = (t0 + 48728);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB9:    if (t21 != 0)
        goto LAB10;

LAB5:    t14 = (t0 + 14888);
    xsi_vlog_subprogram_popinvocation(t14);

LAB6:    t22 = (t0 + 48728);
    t23 = *((char **)t22);
    t22 = (t0 + 14888);
    t24 = (t0 + 48632);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(319, ng7);
    t2 = ((char*)((ng6)));
    t4 = ((char*)((ng77)));
    t5 = ((char*)((ng6)));
    t7 = (t0 + 48632);
    t8 = (t0 + 14888);
    t9 = xsi_create_subprogram_invocation(t7, 0, t0, t8, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t8, t9);
    t10 = (t0 + 41472);
    xsi_vlogvar_assign_value(t10, t2, 0, 0, 2);
    t11 = (t0 + 41632);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 16);
    t12 = (t0 + 41792);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 1);

LAB13:    t13 = (t0 + 48728);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = ((int  (*)(char *, char *))t20)(t0, t14);

LAB15:    if (t21 != 0)
        goto LAB16;

LAB11:    t14 = (t0 + 14888);
    xsi_vlog_subprogram_popinvocation(t14);

LAB12:    t22 = (t0 + 48728);
    t23 = *((char **)t22);
    t22 = (t0 + 14888);
    t24 = (t0 + 48632);
    t25 = 0;
    xsi_delete_subprogram_invocation(t22, t23, t0, t24, t25);
    xsi_set_current_line(320, ng7);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 26752);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 11);

LAB1:    return;
LAB8:;
LAB10:    t13 = (t0 + 48824U);
    *((char **)t13) = &&LAB7;
    goto LAB1;

LAB14:;
LAB16:    t13 = (t0 + 48824U);
    *((char **)t13) = &&LAB13;
    goto LAB1;

}

static void Always_323_25(char *t0)
{
    char t4[8];
    char t26[8];
    char t31[8];
    char t35[8];
    char t41[8];
    char t119[8];
    char t129[8];
    char t130[8];
    char t134[8];
    char t165[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    int t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    double t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    double t120;
    double t121;
    double t122;
    double t123;
    double t124;
    double t125;
    double t126;
    double t127;
    double t128;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    char *t188;
    char *t189;
    char *t190;
    char *t191;
    char *t192;
    char *t193;
    char *t194;
    char *t195;
    char *t196;
    char *t197;
    char *t198;
    char *t199;
    char *t200;
    int t201;
    char *t202;
    char *t203;
    char *t204;
    char *t205;

LAB0:    t1 = (t0 + 49072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(323, ng7);
    t2 = (t0 + 56920);
    *((int *)t2) = 1;
    t3 = (t0 + 49104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(323, ng7);

LAB5:    xsi_set_current_line(324, ng7);
    t5 = (t0 + 16592U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(328, ng7);

LAB17:    xsi_set_current_line(329, ng7);
    t2 = (t0 + 30912);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB21;

LAB19:    if (*((unsigned int *)t6) == 0)
        goto LAB18;

LAB20:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB21:    memset(t26, 0, 8);
    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t13) != 0)
        goto LAB24;

LAB25:    t20 = (t26 + 4);
    t21 = *((unsigned int *)t26);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB26;

LAB27:    memcpy(t41, t26, 8);

LAB28:    t73 = (t41 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t41);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB41;

LAB42:
LAB43:    xsi_set_current_line(333, ng7);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 28832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(334, ng7);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 29632);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(335, ng7);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 30272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(336, ng7);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 30752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(337, ng7);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 30912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB12:    xsi_set_current_line(341, ng7);
    t2 = (t0 + 24912U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB54;

LAB52:    if (*((unsigned int *)t2) == 0)
        goto LAB51;

LAB53:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB54:    memset(t26, 0, 8);
    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t6) != 0)
        goto LAB57;

LAB58:    t13 = (t26 + 4);
    t21 = *((unsigned int *)t26);
    t22 = *((unsigned int *)t13);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB59;

LAB60:    memcpy(t35, t26, 8);

LAB61:    t34 = (t35 + 4);
    t74 = *((unsigned int *)t34);
    t75 = (~(t74));
    t76 = *((unsigned int *)t35);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(353, ng7);
    t2 = (t0 + 24912U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t2) != 0)
        goto LAB93;

LAB94:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t6);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB95;

LAB96:    memcpy(t35, t4, 8);

LAB97:    t34 = (t35 + 4);
    t74 = *((unsigned int *)t34);
    t75 = (~(t74));
    t76 = *((unsigned int *)t35);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB109;

LAB110:
LAB111:
LAB71:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(324, ng7);

LAB13:    xsi_set_current_line(325, ng7);
    t19 = ((char*)((ng17)));
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(327, ng7);
    t2 = (t0 + 33312);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 29792);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(326, ng7);
    xsi_vlogfile_write(1, 0, 0, ng113, 1, t0);
    goto LAB16;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB22:    *((unsigned int *)t26) = 1;
    goto LAB25;

LAB24:    t19 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB25;

LAB26:    t27 = (t0 + 29632);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng8)));
    memset(t31, 0, 8);
    t32 = (t29 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB30;

LAB29:    t33 = (t30 + 4);
    if (*((unsigned int *)t33) != 0)
        goto LAB30;

LAB33:    if (*((unsigned int *)t29) > *((unsigned int *)t30))
        goto LAB31;

LAB32:    memset(t35, 0, 8);
    t36 = (t31 + 4);
    t24 = *((unsigned int *)t36);
    t25 = (~(t24));
    t37 = *((unsigned int *)t31);
    t38 = (t37 & t25);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t36) != 0)
        goto LAB36;

LAB37:    t42 = *((unsigned int *)t26);
    t43 = *((unsigned int *)t35);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t45 = (t26 + 4);
    t46 = (t35 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB38;

LAB39:
LAB40:    goto LAB28;

LAB30:    t34 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB32;

LAB31:    *((unsigned int *)t31) = 1;
    goto LAB32;

LAB34:    *((unsigned int *)t35) = 1;
    goto LAB37;

LAB36:    t40 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB37;

LAB38:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t26 + 4);
    t56 = (t35 + 4);
    t57 = *((unsigned int *)t26);
    t58 = (~(t57));
    t59 = *((unsigned int *)t55);
    t60 = (~(t59));
    t61 = *((unsigned int *)t35);
    t62 = (~(t61));
    t63 = *((unsigned int *)t56);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t69 & t67);
    t70 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t70 & t68);
    t71 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t71 & t67);
    t72 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t72 & t68);
    goto LAB40;

LAB41:    xsi_set_current_line(329, ng7);

LAB44:    xsi_set_current_line(330, ng7);
    t79 = (t0 + 28992);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t82 = ((char*)((ng6)));
    t83 = ((char*)((ng16)));
    t84 = (t0 + 48880);
    t85 = (t0 + 14024);
    t86 = xsi_create_subprogram_invocation(t84, 0, t0, t85, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t85, t86);
    t87 = (t0 + 40192);
    xsi_vlogvar_assign_value(t87, t81, 0, 0, 23);
    t88 = (t0 + 40352);
    xsi_vlogvar_assign_value(t88, t82, 0, 0, 2);
    t89 = (t0 + 40512);
    xsi_vlogvar_assign_value(t89, t83, 0, 0, 16);

LAB47:    t90 = (t0 + 48976);
    t91 = *((char **)t90);
    t92 = (t91 + 80U);
    t93 = *((char **)t92);
    t94 = (t93 + 272U);
    t95 = *((char **)t94);
    t96 = (t95 + 0U);
    t97 = *((char **)t96);
    t98 = ((int  (*)(char *, char *))t97)(t0, t91);

LAB49:    if (t98 != 0)
        goto LAB50;

LAB45:    t91 = (t0 + 14024);
    xsi_vlog_subprogram_popinvocation(t91);

LAB46:    t99 = (t0 + 48976);
    t100 = *((char **)t99);
    t99 = (t0 + 14024);
    t101 = (t0 + 48880);
    t102 = 0;
    xsi_delete_subprogram_invocation(t99, t100, t0, t101, t102);
    xsi_set_current_line(331, ng7);
    t103 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t4) = t103;
    t2 = (t0 + 28992);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng114, 3, t0, (char)114, t4, 64, (char)118, t5, 23);
    goto LAB43;

LAB48:;
LAB50:    t90 = (t0 + 49072U);
    *((char **)t90) = &&LAB47;
    goto LAB1;

LAB51:    *((unsigned int *)t4) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t26) = 1;
    goto LAB58;

LAB57:    t12 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB58;

LAB59:    t19 = (t0 + 16592U);
    t20 = *((char **)t19);
    memset(t31, 0, 8);
    t19 = (t20 + 4);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t37 = *((unsigned int *)t20);
    t38 = (t37 & t25);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t19) != 0)
        goto LAB64;

LAB65:    t42 = *((unsigned int *)t26);
    t43 = *((unsigned int *)t31);
    t44 = (t42 & t43);
    *((unsigned int *)t35) = t44;
    t28 = (t26 + 4);
    t29 = (t31 + 4);
    t30 = (t35 + 4);
    t48 = *((unsigned int *)t28);
    t49 = *((unsigned int *)t29);
    t50 = (t48 | t49);
    *((unsigned int *)t30) = t50;
    t51 = *((unsigned int *)t30);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB66;

LAB67:
LAB68:    goto LAB61;

LAB62:    *((unsigned int *)t31) = 1;
    goto LAB65;

LAB64:    t27 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB65;

LAB66:    t53 = *((unsigned int *)t35);
    t54 = *((unsigned int *)t30);
    *((unsigned int *)t35) = (t53 | t54);
    t32 = (t26 + 4);
    t33 = (t31 + 4);
    t57 = *((unsigned int *)t26);
    t58 = (~(t57));
    t59 = *((unsigned int *)t32);
    t60 = (~(t59));
    t61 = *((unsigned int *)t31);
    t62 = (~(t61));
    t63 = *((unsigned int *)t33);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t69 & t67);
    t70 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t70 & t68);
    t71 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t71 & t67);
    t72 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t72 & t68);
    goto LAB68;

LAB69:    xsi_set_current_line(341, ng7);

LAB72:    xsi_set_current_line(342, ng7);
    t36 = (t0 + 34112);
    t40 = (t36 + 56U);
    t45 = *((char **)t40);
    memset(t41, 0, 8);
    t46 = (t45 + 4);
    t104 = *((unsigned int *)t46);
    t105 = (~(t104));
    t106 = *((unsigned int *)t45);
    t107 = (t106 & t105);
    t108 = (t107 & 1U);
    if (t108 != 0)
        goto LAB76;

LAB74:    if (*((unsigned int *)t46) == 0)
        goto LAB73;

LAB75:    t47 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t47) = 1;

LAB76:    t55 = (t41 + 4);
    t109 = *((unsigned int *)t55);
    t110 = (~(t109));
    t111 = *((unsigned int *)t41);
    t112 = (t111 & t110);
    t113 = (t112 != 0);
    if (t113 > 0)
        goto LAB77;

LAB78:
LAB79:    xsi_set_current_line(347, ng7);
    t2 = (t0 + 28032);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB84;

LAB85:
LAB86:    goto LAB71;

LAB73:    *((unsigned int *)t41) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(342, ng7);

LAB80:    xsi_set_current_line(343, ng7);
    t56 = ((char*)((ng17)));
    t73 = (t56 + 4);
    t114 = *((unsigned int *)t73);
    t115 = (~(t114));
    t116 = *((unsigned int *)t56);
    t117 = (t116 & t115);
    t118 = (t117 != 0);
    if (t118 > 0)
        goto LAB81;

LAB82:
LAB83:    xsi_set_current_line(345, ng7);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 26752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 11);
    goto LAB79;

LAB81:    xsi_set_current_line(344, ng7);
    t103 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t119) = t103;
    xsi_vlogfile_write(1, 0, 0, ng115, 2, t0, (char)114, t119, 64);
    goto LAB83;

LAB84:    xsi_set_current_line(347, ng7);

LAB87:    xsi_set_current_line(348, ng7);
    t103 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t12 = (t0 + 35872);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t120 = *((double *)t19);
    t121 = (t103 - t120);
    t20 = (t0 + 4488);
    t27 = *((char **)t20);
    t122 = *((double *)t27);
    t14 = (t121 < t122);
    *((unsigned int *)t4) = t14;
    t20 = (t4 + 4);
    *((unsigned int *)t20) = 0U;
    t28 = (t4 + 4);
    t15 = *((unsigned int *)t28);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t21 = (t18 != 0);
    if (t21 > 0)
        goto LAB88;

LAB89:
LAB90:    xsi_set_current_line(350, ng7);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 28032);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(351, ng7);
    t103 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t4) = t103;
    t2 = (t0 + 38752);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 1, 0LL);
    goto LAB86;

LAB88:    xsi_set_current_line(349, ng7);
    t123 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t26) = t123;
    t29 = (t0 + 35872);
    t30 = (t29 + 56U);
    t32 = *((char **)t30);
    t124 = *((double *)t32);
    t33 = (t0 + 4488);
    t34 = *((char **)t33);
    t125 = *((double *)t34);
    t126 = (t124 + t125);
    t127 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t128 = (t126 - t127);
    *((double *)t31) = t128;
    xsi_vlogfile_write(1, 0, 0, ng116, 3, t0, (char)114, t26, 64, (char)114, t31, 64);
    goto LAB90;

LAB91:    *((unsigned int *)t4) = 1;
    goto LAB94;

LAB93:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB94;

LAB95:    t12 = (t0 + 16592U);
    t13 = *((char **)t12);
    memset(t26, 0, 8);
    t12 = (t13 + 4);
    t17 = *((unsigned int *)t12);
    t18 = (~(t17));
    t21 = *((unsigned int *)t13);
    t22 = (t21 & t18);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB101;

LAB99:    if (*((unsigned int *)t12) == 0)
        goto LAB98;

LAB100:    t19 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t19) = 1;

LAB101:    memset(t31, 0, 8);
    t20 = (t26 + 4);
    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t37 = *((unsigned int *)t26);
    t38 = (t37 & t25);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t20) != 0)
        goto LAB104;

LAB105:    t42 = *((unsigned int *)t4);
    t43 = *((unsigned int *)t31);
    t44 = (t42 & t43);
    *((unsigned int *)t35) = t44;
    t28 = (t4 + 4);
    t29 = (t31 + 4);
    t30 = (t35 + 4);
    t48 = *((unsigned int *)t28);
    t49 = *((unsigned int *)t29);
    t50 = (t48 | t49);
    *((unsigned int *)t30) = t50;
    t51 = *((unsigned int *)t30);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB106;

LAB107:
LAB108:    goto LAB97;

LAB98:    *((unsigned int *)t26) = 1;
    goto LAB101;

LAB102:    *((unsigned int *)t31) = 1;
    goto LAB105;

LAB104:    t27 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB105;

LAB106:    t53 = *((unsigned int *)t35);
    t54 = *((unsigned int *)t30);
    *((unsigned int *)t35) = (t53 | t54);
    t32 = (t4 + 4);
    t33 = (t31 + 4);
    t57 = *((unsigned int *)t4);
    t58 = (~(t57));
    t59 = *((unsigned int *)t32);
    t60 = (~(t59));
    t61 = *((unsigned int *)t31);
    t62 = (~(t61));
    t63 = *((unsigned int *)t33);
    t64 = (~(t63));
    t65 = (t58 & t60);
    t66 = (t62 & t64);
    t67 = (~(t65));
    t68 = (~(t66));
    t69 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t69 & t67);
    t70 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t70 & t68);
    t71 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t71 & t67);
    t72 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t72 & t68);
    goto LAB108;

LAB109:    xsi_set_current_line(353, ng7);

LAB112:    xsi_set_current_line(356, ng7);
    t36 = ((char*)((ng1)));
    t40 = ((char*)((ng17)));
    memset(t41, 0, 8);
    t45 = (t36 + 4);
    if (*((unsigned int *)t45) != 0)
        goto LAB114;

LAB113:    t46 = (t40 + 4);
    if (*((unsigned int *)t46) != 0)
        goto LAB114;

LAB117:    if (*((unsigned int *)t36) > *((unsigned int *)t40))
        goto LAB115;

LAB116:    memset(t119, 0, 8);
    t55 = (t41 + 4);
    t104 = *((unsigned int *)t55);
    t105 = (~(t104));
    t106 = *((unsigned int *)t41);
    t107 = (t106 & t105);
    t108 = (t107 & 1U);
    if (t108 != 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t55) != 0)
        goto LAB120;

LAB121:    t73 = (t119 + 4);
    t109 = *((unsigned int *)t119);
    t110 = *((unsigned int *)t73);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB122;

LAB123:    memcpy(t134, t119, 8);

LAB124:    t91 = (t134 + 4);
    t160 = *((unsigned int *)t91);
    t161 = (~(t160));
    t162 = *((unsigned int *)t134);
    t163 = (t162 & t161);
    t164 = (t163 != 0);
    if (t164 > 0)
        goto LAB136;

LAB137:
LAB138:    goto LAB111;

LAB114:    t47 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB116;

LAB115:    *((unsigned int *)t41) = 1;
    goto LAB116;

LAB118:    *((unsigned int *)t119) = 1;
    goto LAB121;

LAB120:    t56 = (t119 + 4);
    *((unsigned int *)t119) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB121;

LAB122:    t79 = (t0 + 34112);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    memset(t129, 0, 8);
    t82 = (t81 + 4);
    t112 = *((unsigned int *)t82);
    t113 = (~(t112));
    t114 = *((unsigned int *)t81);
    t115 = (t114 & t113);
    t116 = (t115 & 1U);
    if (t116 != 0)
        goto LAB128;

LAB126:    if (*((unsigned int *)t82) == 0)
        goto LAB125;

LAB127:    t83 = (t129 + 4);
    *((unsigned int *)t129) = 1;
    *((unsigned int *)t83) = 1;

LAB128:    memset(t130, 0, 8);
    t84 = (t129 + 4);
    t117 = *((unsigned int *)t84);
    t118 = (~(t117));
    t131 = *((unsigned int *)t129);
    t132 = (t131 & t118);
    t133 = (t132 & 1U);
    if (t133 != 0)
        goto LAB129;

LAB130:    if (*((unsigned int *)t84) != 0)
        goto LAB131;

LAB132:    t135 = *((unsigned int *)t119);
    t136 = *((unsigned int *)t130);
    t137 = (t135 & t136);
    *((unsigned int *)t134) = t137;
    t86 = (t119 + 4);
    t87 = (t130 + 4);
    t88 = (t134 + 4);
    t138 = *((unsigned int *)t86);
    t139 = *((unsigned int *)t87);
    t140 = (t138 | t139);
    *((unsigned int *)t88) = t140;
    t141 = *((unsigned int *)t88);
    t142 = (t141 != 0);
    if (t142 == 1)
        goto LAB133;

LAB134:
LAB135:    goto LAB124;

LAB125:    *((unsigned int *)t129) = 1;
    goto LAB128;

LAB129:    *((unsigned int *)t130) = 1;
    goto LAB132;

LAB131:    t85 = (t130 + 4);
    *((unsigned int *)t130) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB132;

LAB133:    t143 = *((unsigned int *)t134);
    t144 = *((unsigned int *)t88);
    *((unsigned int *)t134) = (t143 | t144);
    t89 = (t119 + 4);
    t90 = (t130 + 4);
    t145 = *((unsigned int *)t119);
    t146 = (~(t145));
    t147 = *((unsigned int *)t89);
    t148 = (~(t147));
    t149 = *((unsigned int *)t130);
    t150 = (~(t149));
    t151 = *((unsigned int *)t90);
    t152 = (~(t151));
    t98 = (t146 & t148);
    t153 = (t150 & t152);
    t154 = (~(t98));
    t155 = (~(t153));
    t156 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t156 & t154);
    t157 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t157 & t155);
    t158 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t158 & t154);
    t159 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t159 & t155);
    goto LAB135;

LAB136:    xsi_set_current_line(356, ng7);

LAB139:    xsi_set_current_line(357, ng7);
    t92 = ((char*)((ng6)));
    t93 = (t0 + 19792U);
    t94 = *((char **)t93);
    t93 = ((char*)((ng77)));
    t166 = *((unsigned int *)t94);
    t167 = *((unsigned int *)t93);
    t168 = (t166 | t167);
    *((unsigned int *)t165) = t168;
    t95 = (t94 + 4);
    t96 = (t93 + 4);
    t97 = (t165 + 4);
    t169 = *((unsigned int *)t95);
    t170 = *((unsigned int *)t96);
    t171 = (t169 | t170);
    *((unsigned int *)t97) = t171;
    t172 = *((unsigned int *)t97);
    t173 = (t172 != 0);
    if (t173 == 1)
        goto LAB140;

LAB141:
LAB142:    t101 = ((char*)((ng6)));
    t102 = (t0 + 48880);
    t188 = (t0 + 14888);
    t189 = xsi_create_subprogram_invocation(t102, 0, t0, t188, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t188, t189);
    t190 = (t0 + 41472);
    xsi_vlogvar_assign_value(t190, t92, 0, 0, 2);
    t191 = (t0 + 41632);
    xsi_vlogvar_assign_value(t191, t165, 0, 0, 16);
    t192 = (t0 + 41792);
    xsi_vlogvar_assign_value(t192, t101, 0, 0, 1);

LAB145:    t193 = (t0 + 48976);
    t194 = *((char **)t193);
    t195 = (t194 + 80U);
    t196 = *((char **)t195);
    t197 = (t196 + 272U);
    t198 = *((char **)t197);
    t199 = (t198 + 0U);
    t200 = *((char **)t199);
    t201 = ((int  (*)(char *, char *))t200)(t0, t194);

LAB147:    if (t201 != 0)
        goto LAB148;

LAB143:    t194 = (t0 + 14888);
    xsi_vlog_subprogram_popinvocation(t194);

LAB144:    t202 = (t0 + 48976);
    t203 = *((char **)t202);
    t202 = (t0 + 14888);
    t204 = (t0 + 48880);
    t205 = 0;
    xsi_delete_subprogram_invocation(t202, t203, t0, t204, t205);
    goto LAB138;

LAB140:    t174 = *((unsigned int *)t165);
    t175 = *((unsigned int *)t97);
    *((unsigned int *)t165) = (t174 | t175);
    t99 = (t94 + 4);
    t100 = (t93 + 4);
    t176 = *((unsigned int *)t99);
    t177 = (~(t176));
    t178 = *((unsigned int *)t94);
    t179 = (t178 & t177);
    t180 = *((unsigned int *)t100);
    t181 = (~(t180));
    t182 = *((unsigned int *)t93);
    t183 = (t182 & t181);
    t184 = (~(t179));
    t185 = (~(t183));
    t186 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t186 & t184);
    t187 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t187 & t185);
    goto LAB142;

LAB146:;
LAB148:    t193 = (t0 + 49072U);
    *((char **)t193) = &&LAB145;
    goto LAB1;

}

static void Always_364_26(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    double t21;

LAB0:    t1 = (t0 + 49320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(364, ng7);
    t2 = (t0 + 56936);
    *((int *)t2) = 1;
    t3 = (t0 + 49352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(364, ng7);

LAB5:    xsi_set_current_line(365, ng7);
    t5 = (t0 + 18352U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(365, ng7);

LAB13:    xsi_set_current_line(366, ng7);
    t19 = (t0 + 17552U);
    t20 = *((char **)t19);
    t19 = (t0 + 27872);
    xsi_vlogvar_wait_assign_value(t19, t20, 0, 0, 23, 0LL);
    xsi_set_current_line(367, ng7);
    t21 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t4) = t21;
    t2 = (t0 + 37472);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 1, 0LL);
    goto LAB12;

}

static void Always_370_27(char *t0)
{
    char t4[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    double t19;
    char *t21;

LAB0:    t1 = (t0 + 49568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(370, ng7);
    t2 = (t0 + 56952);
    *((int *)t2) = 1;
    t3 = (t0 + 49600);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(370, ng7);

LAB5:    xsi_set_current_line(371, ng7);
    t5 = (t0 + 18352U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(371, ng7);

LAB13:    xsi_set_current_line(372, ng7);
    t19 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t20) = t19;
    t21 = (t0 + 37632);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 1, 0LL);
    goto LAB12;

}

static void Always_377_28(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    double t21;

LAB0:    t1 = (t0 + 49816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(377, ng7);
    t2 = (t0 + 56968);
    *((int *)t2) = 1;
    t3 = (t0 + 49848);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(377, ng7);

LAB5:    xsi_set_current_line(378, ng7);
    t5 = (t0 + 18352U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(378, ng7);

LAB13:    xsi_set_current_line(379, ng7);
    t19 = (t0 + 18512U);
    t20 = *((char **)t19);
    t19 = (t0 + 27712);
    xsi_vlogvar_wait_assign_value(t19, t20, 0, 0, 1, 0LL);
    xsi_set_current_line(380, ng7);
    t21 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t4) = t21;
    t2 = (t0 + 37152);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 1, 0LL);
    goto LAB12;

}

static void Cont_420_29(char *t0)
{
    char t4[8];
    char t17[8];
    char t24[8];
    char t56[8];
    char t70[8];
    char t77[8];
    char t109[8];
    char t123[8];
    char t130[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    int t101;
    int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    int t154;
    int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    char *t163;
    char *t164;
    char *t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;

LAB0:    t1 = (t0 + 50064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(420, ng7);
    t2 = (t0 + 21072U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t11 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t11);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB8;

LAB9:    memcpy(t24, t4, 8);

LAB10:    memset(t56, 0, 8);
    t57 = (t24 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t24);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t57) != 0)
        goto LAB20;

LAB21:    t64 = (t56 + 4);
    t65 = *((unsigned int *)t56);
    t66 = *((unsigned int *)t64);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB22;

LAB23:    memcpy(t77, t56, 8);

LAB24:    memset(t109, 0, 8);
    t110 = (t77 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t77);
    t114 = (t113 & t112);
    t115 = (t114 & 1U);
    if (t115 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t110) != 0)
        goto LAB34;

LAB35:    t117 = (t109 + 4);
    t118 = *((unsigned int *)t109);
    t119 = *((unsigned int *)t117);
    t120 = (t118 || t119);
    if (t120 > 0)
        goto LAB36;

LAB37:    memcpy(t130, t109, 8);

LAB38:    t162 = (t0 + 58936);
    t163 = (t162 + 56U);
    t164 = *((char **)t163);
    t165 = (t164 + 56U);
    t166 = *((char **)t165);
    memset(t166, 0, 8);
    t167 = 1U;
    t168 = t167;
    t169 = (t130 + 4);
    t170 = *((unsigned int *)t130);
    t167 = (t167 & t170);
    t171 = *((unsigned int *)t169);
    t168 = (t168 & t171);
    t172 = (t166 + 4);
    t173 = *((unsigned int *)t166);
    *((unsigned int *)t166) = (t173 | t167);
    t174 = *((unsigned int *)t172);
    *((unsigned int *)t172) = (t174 | t168);
    xsi_driver_vfirst_trans(t162, 0, 0);
    t175 = (t0 + 56984);
    *((int *)t175) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB8:    t15 = (t0 + 22192U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    t15 = (t16 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (~(t18));
    t20 = *((unsigned int *)t16);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t15) != 0)
        goto LAB13;

LAB14:    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t17);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t28 = (t4 + 4);
    t29 = (t17 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t17) = 1;
    goto LAB14;

LAB13:    t23 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB14;

LAB15:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t4 + 4);
    t39 = (t17 + 4);
    t40 = *((unsigned int *)t4);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t17);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    goto LAB17;

LAB18:    *((unsigned int *)t56) = 1;
    goto LAB21;

LAB20:    t63 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB21;

LAB22:    t68 = (t0 + 22992U);
    t69 = *((char **)t68);
    memset(t70, 0, 8);
    t68 = (t69 + 4);
    t71 = *((unsigned int *)t68);
    t72 = (~(t71));
    t73 = *((unsigned int *)t69);
    t74 = (t73 & t72);
    t75 = (t74 & 1U);
    if (t75 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t68) != 0)
        goto LAB27;

LAB28:    t78 = *((unsigned int *)t56);
    t79 = *((unsigned int *)t70);
    t80 = (t78 & t79);
    *((unsigned int *)t77) = t80;
    t81 = (t56 + 4);
    t82 = (t70 + 4);
    t83 = (t77 + 4);
    t84 = *((unsigned int *)t81);
    t85 = *((unsigned int *)t82);
    t86 = (t84 | t85);
    *((unsigned int *)t83) = t86;
    t87 = *((unsigned int *)t83);
    t88 = (t87 != 0);
    if (t88 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB24;

LAB25:    *((unsigned int *)t70) = 1;
    goto LAB28;

LAB27:    t76 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB28;

LAB29:    t89 = *((unsigned int *)t77);
    t90 = *((unsigned int *)t83);
    *((unsigned int *)t77) = (t89 | t90);
    t91 = (t56 + 4);
    t92 = (t70 + 4);
    t93 = *((unsigned int *)t56);
    t94 = (~(t93));
    t95 = *((unsigned int *)t91);
    t96 = (~(t95));
    t97 = *((unsigned int *)t70);
    t98 = (~(t97));
    t99 = *((unsigned int *)t92);
    t100 = (~(t99));
    t101 = (t94 & t96);
    t102 = (t98 & t100);
    t103 = (~(t101));
    t104 = (~(t102));
    t105 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t105 & t103);
    t106 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t106 & t104);
    t107 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t107 & t103);
    t108 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t108 & t104);
    goto LAB31;

LAB32:    *((unsigned int *)t109) = 1;
    goto LAB35;

LAB34:    t116 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t116) = 1;
    goto LAB35;

LAB36:    t121 = (t0 + 23472U);
    t122 = *((char **)t121);
    memset(t123, 0, 8);
    t121 = (t122 + 4);
    t124 = *((unsigned int *)t121);
    t125 = (~(t124));
    t126 = *((unsigned int *)t122);
    t127 = (t126 & t125);
    t128 = (t127 & 1U);
    if (t128 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t121) != 0)
        goto LAB41;

LAB42:    t131 = *((unsigned int *)t109);
    t132 = *((unsigned int *)t123);
    t133 = (t131 & t132);
    *((unsigned int *)t130) = t133;
    t134 = (t109 + 4);
    t135 = (t123 + 4);
    t136 = (t130 + 4);
    t137 = *((unsigned int *)t134);
    t138 = *((unsigned int *)t135);
    t139 = (t137 | t138);
    *((unsigned int *)t136) = t139;
    t140 = *((unsigned int *)t136);
    t141 = (t140 != 0);
    if (t141 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB38;

LAB39:    *((unsigned int *)t123) = 1;
    goto LAB42;

LAB41:    t129 = (t123 + 4);
    *((unsigned int *)t123) = 1;
    *((unsigned int *)t129) = 1;
    goto LAB42;

LAB43:    t142 = *((unsigned int *)t130);
    t143 = *((unsigned int *)t136);
    *((unsigned int *)t130) = (t142 | t143);
    t144 = (t109 + 4);
    t145 = (t123 + 4);
    t146 = *((unsigned int *)t109);
    t147 = (~(t146));
    t148 = *((unsigned int *)t144);
    t149 = (~(t148));
    t150 = *((unsigned int *)t123);
    t151 = (~(t150));
    t152 = *((unsigned int *)t145);
    t153 = (~(t152));
    t154 = (t147 & t149);
    t155 = (t151 & t153);
    t156 = (~(t154));
    t157 = (~(t155));
    t158 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t158 & t156);
    t159 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t159 & t157);
    t160 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t160 & t156);
    t161 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t161 & t157);
    goto LAB45;

}

static void Cont_421_30(char *t0)
{
    char t3[8];
    char t13[8];
    char t25[8];
    char t36[8];
    char t44[8];
    char t76[8];
    char t91[8];
    char t99[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    int t123;
    int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;

LAB0:    t1 = (t0 + 50312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(421, ng7);
    t2 = (t0 + 33792);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t6) == 0)
        goto LAB4;

LAB6:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    memset(t13, 0, 8);
    t14 = (t3 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t3);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t14) != 0)
        goto LAB10;

LAB11:    t21 = (t13 + 4);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB12;

LAB13:    memcpy(t44, t13, 8);

LAB14:    memset(t76, 0, 8);
    t77 = (t44 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t44);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t77) != 0)
        goto LAB28;

LAB29:    t84 = (t76 + 4);
    t85 = *((unsigned int *)t76);
    t86 = *((unsigned int *)t84);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB30;

LAB31:    memcpy(t99, t76, 8);

LAB32:    t131 = (t0 + 59000);
    t132 = (t131 + 56U);
    t133 = *((char **)t132);
    t134 = (t133 + 56U);
    t135 = *((char **)t134);
    memset(t135, 0, 8);
    t136 = 1U;
    t137 = t136;
    t138 = (t99 + 4);
    t139 = *((unsigned int *)t99);
    t136 = (t136 & t139);
    t140 = *((unsigned int *)t138);
    t137 = (t137 & t140);
    t141 = (t135 + 4);
    t142 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t142 | t136);
    t143 = *((unsigned int *)t141);
    *((unsigned int *)t141) = (t143 | t137);
    xsi_driver_vfirst_trans(t131, 0, 0);
    t144 = (t0 + 57000);
    *((int *)t144) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t13) = 1;
    goto LAB11;

LAB10:    t20 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB11;

LAB12:    t26 = (t0 + 33632);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t25, 0, 8);
    t29 = (t28 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t29) == 0)
        goto LAB15;

LAB17:    t35 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t35) = 1;

LAB18:    memset(t36, 0, 8);
    t37 = (t25 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t25);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t37) != 0)
        goto LAB21;

LAB22:    t45 = *((unsigned int *)t13);
    t46 = *((unsigned int *)t36);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t13 + 4);
    t49 = (t36 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB15:    *((unsigned int *)t25) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t36) = 1;
    goto LAB22;

LAB21:    t43 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB22;

LAB23:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t13 + 4);
    t59 = (t36 + 4);
    t60 = *((unsigned int *)t13);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t36);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB25;

LAB26:    *((unsigned int *)t76) = 1;
    goto LAB29;

LAB28:    t83 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB29;

LAB30:    t88 = (t0 + 28512);
    t89 = (t88 + 56U);
    t90 = *((char **)t89);
    memset(t91, 0, 8);
    t92 = (t90 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t90);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t92) != 0)
        goto LAB35;

LAB36:    t100 = *((unsigned int *)t76);
    t101 = *((unsigned int *)t91);
    t102 = (t100 & t101);
    *((unsigned int *)t99) = t102;
    t103 = (t76 + 4);
    t104 = (t91 + 4);
    t105 = (t99 + 4);
    t106 = *((unsigned int *)t103);
    t107 = *((unsigned int *)t104);
    t108 = (t106 | t107);
    *((unsigned int *)t105) = t108;
    t109 = *((unsigned int *)t105);
    t110 = (t109 != 0);
    if (t110 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB32;

LAB33:    *((unsigned int *)t91) = 1;
    goto LAB36;

LAB35:    t98 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB36;

LAB37:    t111 = *((unsigned int *)t99);
    t112 = *((unsigned int *)t105);
    *((unsigned int *)t99) = (t111 | t112);
    t113 = (t76 + 4);
    t114 = (t91 + 4);
    t115 = *((unsigned int *)t76);
    t116 = (~(t115));
    t117 = *((unsigned int *)t113);
    t118 = (~(t117));
    t119 = *((unsigned int *)t91);
    t120 = (~(t119));
    t121 = *((unsigned int *)t114);
    t122 = (~(t121));
    t123 = (t116 & t118);
    t124 = (t120 & t122);
    t125 = (~(t123));
    t126 = (~(t124));
    t127 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t127 & t125);
    t128 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t128 & t126);
    t129 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t129 & t125);
    t130 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t130 & t126);
    goto LAB39;

}

static void Cont_422_31(char *t0)
{
    char t4[8];
    char t15[8];
    char t24[8];
    char t38[8];
    char t45[8];
    char t77[8];
    char t91[8];
    char t98[8];
    char t130[8];
    char t144[8];
    char t151[8];
    char t183[8];
    char t197[8];
    char t204[8];
    char t236[8];
    char t250[8];
    char t257[8];
    char t289[8];
    char t304[8];
    char t317[8];
    char t324[8];
    char t356[8];
    char t370[8];
    char t377[8];
    char t409[8];
    char t417[8];
    char t445[8];
    char t453[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    int t122;
    int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    char *t143;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    char *t156;
    char *t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    int t175;
    int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    char *t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    char *t195;
    char *t196;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    char *t203;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    char *t208;
    char *t209;
    char *t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    char *t218;
    char *t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    int t228;
    int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    char *t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    char *t243;
    char *t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    char *t248;
    char *t249;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    char *t256;
    unsigned int t258;
    unsigned int t259;
    unsigned int t260;
    char *t261;
    char *t262;
    char *t263;
    unsigned int t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    char *t271;
    char *t272;
    unsigned int t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    int t281;
    int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    char *t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    char *t296;
    char *t297;
    unsigned int t298;
    unsigned int t299;
    unsigned int t300;
    unsigned int t301;
    char *t302;
    char *t303;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    char *t310;
    char *t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    char *t315;
    char *t316;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    char *t323;
    unsigned int t325;
    unsigned int t326;
    unsigned int t327;
    char *t328;
    char *t329;
    char *t330;
    unsigned int t331;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    unsigned int t335;
    unsigned int t336;
    unsigned int t337;
    char *t338;
    char *t339;
    unsigned int t340;
    unsigned int t341;
    unsigned int t342;
    unsigned int t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    unsigned int t347;
    int t348;
    int t349;
    unsigned int t350;
    unsigned int t351;
    unsigned int t352;
    unsigned int t353;
    unsigned int t354;
    unsigned int t355;
    char *t357;
    unsigned int t358;
    unsigned int t359;
    unsigned int t360;
    unsigned int t361;
    unsigned int t362;
    char *t363;
    char *t364;
    unsigned int t365;
    unsigned int t366;
    unsigned int t367;
    char *t368;
    char *t369;
    unsigned int t371;
    unsigned int t372;
    unsigned int t373;
    unsigned int t374;
    unsigned int t375;
    char *t376;
    unsigned int t378;
    unsigned int t379;
    unsigned int t380;
    char *t381;
    char *t382;
    char *t383;
    unsigned int t384;
    unsigned int t385;
    unsigned int t386;
    unsigned int t387;
    unsigned int t388;
    unsigned int t389;
    unsigned int t390;
    char *t391;
    char *t392;
    unsigned int t393;
    unsigned int t394;
    unsigned int t395;
    unsigned int t396;
    unsigned int t397;
    unsigned int t398;
    unsigned int t399;
    unsigned int t400;
    int t401;
    int t402;
    unsigned int t403;
    unsigned int t404;
    unsigned int t405;
    unsigned int t406;
    unsigned int t407;
    unsigned int t408;
    char *t410;
    unsigned int t411;
    unsigned int t412;
    unsigned int t413;
    unsigned int t414;
    unsigned int t415;
    char *t416;
    unsigned int t418;
    unsigned int t419;
    unsigned int t420;
    char *t421;
    char *t422;
    char *t423;
    unsigned int t424;
    unsigned int t425;
    unsigned int t426;
    unsigned int t427;
    unsigned int t428;
    unsigned int t429;
    unsigned int t430;
    char *t431;
    char *t432;
    unsigned int t433;
    unsigned int t434;
    unsigned int t435;
    int t436;
    unsigned int t437;
    unsigned int t438;
    unsigned int t439;
    int t440;
    unsigned int t441;
    unsigned int t442;
    unsigned int t443;
    unsigned int t444;
    char *t446;
    unsigned int t447;
    unsigned int t448;
    unsigned int t449;
    unsigned int t450;
    unsigned int t451;
    char *t452;
    unsigned int t454;
    unsigned int t455;
    unsigned int t456;
    char *t457;
    char *t458;
    char *t459;
    unsigned int t460;
    unsigned int t461;
    unsigned int t462;
    unsigned int t463;
    unsigned int t464;
    unsigned int t465;
    unsigned int t466;
    char *t467;
    char *t468;
    unsigned int t469;
    unsigned int t470;
    unsigned int t471;
    unsigned int t472;
    unsigned int t473;
    unsigned int t474;
    unsigned int t475;
    unsigned int t476;
    int t477;
    int t478;
    unsigned int t479;
    unsigned int t480;
    unsigned int t481;
    unsigned int t482;
    unsigned int t483;
    unsigned int t484;
    char *t485;
    char *t486;
    char *t487;
    char *t488;
    char *t489;
    unsigned int t490;
    unsigned int t491;
    char *t492;
    unsigned int t493;
    unsigned int t494;
    char *t495;
    unsigned int t496;
    unsigned int t497;
    char *t498;

LAB0:    t1 = (t0 + 50560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(422, ng7);
    t2 = (t0 + 23152U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t11 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t11);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB8;

LAB9:    memcpy(t453, t4, 8);

LAB10:    t485 = (t0 + 59064);
    t486 = (t485 + 56U);
    t487 = *((char **)t486);
    t488 = (t487 + 56U);
    t489 = *((char **)t488);
    memset(t489, 0, 8);
    t490 = 1U;
    t491 = t490;
    t492 = (t453 + 4);
    t493 = *((unsigned int *)t453);
    t490 = (t490 & t493);
    t494 = *((unsigned int *)t492);
    t491 = (t491 & t494);
    t495 = (t489 + 4);
    t496 = *((unsigned int *)t489);
    *((unsigned int *)t489) = (t496 | t490);
    t497 = *((unsigned int *)t495);
    *((unsigned int *)t495) = (t497 | t491);
    xsi_driver_vfirst_trans(t485, 0, 0);
    t498 = (t0 + 57016);
    *((int *)t498) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 24272U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t16 = (t17 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (~(t18));
    t20 = *((unsigned int *)t17);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t16) == 0)
        goto LAB11;

LAB13:    t23 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t23) = 1;

LAB14:    memset(t24, 0, 8);
    t25 = (t15 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t15);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t25) != 0)
        goto LAB17;

LAB18:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB19;

LAB20:    memcpy(t45, t24, 8);

LAB21:    memset(t77, 0, 8);
    t78 = (t45 + 4);
    t79 = *((unsigned int *)t78);
    t80 = (~(t79));
    t81 = *((unsigned int *)t45);
    t82 = (t81 & t80);
    t83 = (t82 & 1U);
    if (t83 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t78) != 0)
        goto LAB31;

LAB32:    t85 = (t77 + 4);
    t86 = *((unsigned int *)t77);
    t87 = *((unsigned int *)t85);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB33;

LAB34:    memcpy(t98, t77, 8);

LAB35:    memset(t130, 0, 8);
    t131 = (t98 + 4);
    t132 = *((unsigned int *)t131);
    t133 = (~(t132));
    t134 = *((unsigned int *)t98);
    t135 = (t134 & t133);
    t136 = (t135 & 1U);
    if (t136 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t131) != 0)
        goto LAB45;

LAB46:    t138 = (t130 + 4);
    t139 = *((unsigned int *)t130);
    t140 = *((unsigned int *)t138);
    t141 = (t139 || t140);
    if (t141 > 0)
        goto LAB47;

LAB48:    memcpy(t151, t130, 8);

LAB49:    memset(t183, 0, 8);
    t184 = (t151 + 4);
    t185 = *((unsigned int *)t184);
    t186 = (~(t185));
    t187 = *((unsigned int *)t151);
    t188 = (t187 & t186);
    t189 = (t188 & 1U);
    if (t189 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t184) != 0)
        goto LAB59;

LAB60:    t191 = (t183 + 4);
    t192 = *((unsigned int *)t183);
    t193 = *((unsigned int *)t191);
    t194 = (t192 || t193);
    if (t194 > 0)
        goto LAB61;

LAB62:    memcpy(t204, t183, 8);

LAB63:    memset(t236, 0, 8);
    t237 = (t204 + 4);
    t238 = *((unsigned int *)t237);
    t239 = (~(t238));
    t240 = *((unsigned int *)t204);
    t241 = (t240 & t239);
    t242 = (t241 & 1U);
    if (t242 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t237) != 0)
        goto LAB73;

LAB74:    t244 = (t236 + 4);
    t245 = *((unsigned int *)t236);
    t246 = *((unsigned int *)t244);
    t247 = (t245 || t246);
    if (t247 > 0)
        goto LAB75;

LAB76:    memcpy(t257, t236, 8);

LAB77:    memset(t289, 0, 8);
    t290 = (t257 + 4);
    t291 = *((unsigned int *)t290);
    t292 = (~(t291));
    t293 = *((unsigned int *)t257);
    t294 = (t293 & t292);
    t295 = (t294 & 1U);
    if (t295 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t290) != 0)
        goto LAB87;

LAB88:    t297 = (t289 + 4);
    t298 = *((unsigned int *)t289);
    t299 = (!(t298));
    t300 = *((unsigned int *)t297);
    t301 = (t299 || t300);
    if (t301 > 0)
        goto LAB89;

LAB90:    memcpy(t417, t289, 8);

LAB91:    memset(t445, 0, 8);
    t446 = (t417 + 4);
    t447 = *((unsigned int *)t446);
    t448 = (~(t447));
    t449 = *((unsigned int *)t417);
    t450 = (t449 & t448);
    t451 = (t450 & 1U);
    if (t451 != 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t446) != 0)
        goto LAB129;

LAB130:    t454 = *((unsigned int *)t4);
    t455 = *((unsigned int *)t445);
    t456 = (t454 & t455);
    *((unsigned int *)t453) = t456;
    t457 = (t4 + 4);
    t458 = (t445 + 4);
    t459 = (t453 + 4);
    t460 = *((unsigned int *)t457);
    t461 = *((unsigned int *)t458);
    t462 = (t460 | t461);
    *((unsigned int *)t459) = t462;
    t463 = *((unsigned int *)t459);
    t464 = (t463 != 0);
    if (t464 == 1)
        goto LAB131;

LAB132:
LAB133:    goto LAB10;

LAB11:    *((unsigned int *)t15) = 1;
    goto LAB14;

LAB15:    *((unsigned int *)t24) = 1;
    goto LAB18;

LAB17:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB18;

LAB19:    t36 = (t0 + 21232U);
    t37 = *((char **)t36);
    memset(t38, 0, 8);
    t36 = (t37 + 4);
    t39 = *((unsigned int *)t36);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t36) != 0)
        goto LAB24;

LAB25:    t46 = *((unsigned int *)t24);
    t47 = *((unsigned int *)t38);
    t48 = (t46 & t47);
    *((unsigned int *)t45) = t48;
    t49 = (t24 + 4);
    t50 = (t38 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB21;

LAB22:    *((unsigned int *)t38) = 1;
    goto LAB25;

LAB24:    t44 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB25;

LAB26:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t24 + 4);
    t60 = (t38 + 4);
    t61 = *((unsigned int *)t24);
    t62 = (~(t61));
    t63 = *((unsigned int *)t59);
    t64 = (~(t63));
    t65 = *((unsigned int *)t38);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t69 = (t62 & t64);
    t70 = (t66 & t68);
    t71 = (~(t69));
    t72 = (~(t70));
    t73 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t73 & t71);
    t74 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t74 & t72);
    t75 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t75 & t71);
    t76 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t76 & t72);
    goto LAB28;

LAB29:    *((unsigned int *)t77) = 1;
    goto LAB32;

LAB31:    t84 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t84) = 1;
    goto LAB32;

LAB33:    t89 = (t0 + 22352U);
    t90 = *((char **)t89);
    memset(t91, 0, 8);
    t89 = (t90 + 4);
    t92 = *((unsigned int *)t89);
    t93 = (~(t92));
    t94 = *((unsigned int *)t90);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t89) != 0)
        goto LAB38;

LAB39:    t99 = *((unsigned int *)t77);
    t100 = *((unsigned int *)t91);
    t101 = (t99 & t100);
    *((unsigned int *)t98) = t101;
    t102 = (t77 + 4);
    t103 = (t91 + 4);
    t104 = (t98 + 4);
    t105 = *((unsigned int *)t102);
    t106 = *((unsigned int *)t103);
    t107 = (t105 | t106);
    *((unsigned int *)t104) = t107;
    t108 = *((unsigned int *)t104);
    t109 = (t108 != 0);
    if (t109 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB35;

LAB36:    *((unsigned int *)t91) = 1;
    goto LAB39;

LAB38:    t97 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB39;

LAB40:    t110 = *((unsigned int *)t98);
    t111 = *((unsigned int *)t104);
    *((unsigned int *)t98) = (t110 | t111);
    t112 = (t77 + 4);
    t113 = (t91 + 4);
    t114 = *((unsigned int *)t77);
    t115 = (~(t114));
    t116 = *((unsigned int *)t112);
    t117 = (~(t116));
    t118 = *((unsigned int *)t91);
    t119 = (~(t118));
    t120 = *((unsigned int *)t113);
    t121 = (~(t120));
    t122 = (t115 & t117);
    t123 = (t119 & t121);
    t124 = (~(t122));
    t125 = (~(t123));
    t126 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t126 & t124);
    t127 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t127 & t125);
    t128 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t128 & t124);
    t129 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t129 & t125);
    goto LAB42;

LAB43:    *((unsigned int *)t130) = 1;
    goto LAB46;

LAB45:    t137 = (t130 + 4);
    *((unsigned int *)t130) = 1;
    *((unsigned int *)t137) = 1;
    goto LAB46;

LAB47:    t142 = (t0 + 23632U);
    t143 = *((char **)t142);
    memset(t144, 0, 8);
    t142 = (t143 + 4);
    t145 = *((unsigned int *)t142);
    t146 = (~(t145));
    t147 = *((unsigned int *)t143);
    t148 = (t147 & t146);
    t149 = (t148 & 1U);
    if (t149 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t142) != 0)
        goto LAB52;

LAB53:    t152 = *((unsigned int *)t130);
    t153 = *((unsigned int *)t144);
    t154 = (t152 & t153);
    *((unsigned int *)t151) = t154;
    t155 = (t130 + 4);
    t156 = (t144 + 4);
    t157 = (t151 + 4);
    t158 = *((unsigned int *)t155);
    t159 = *((unsigned int *)t156);
    t160 = (t158 | t159);
    *((unsigned int *)t157) = t160;
    t161 = *((unsigned int *)t157);
    t162 = (t161 != 0);
    if (t162 == 1)
        goto LAB54;

LAB55:
LAB56:    goto LAB49;

LAB50:    *((unsigned int *)t144) = 1;
    goto LAB53;

LAB52:    t150 = (t144 + 4);
    *((unsigned int *)t144) = 1;
    *((unsigned int *)t150) = 1;
    goto LAB53;

LAB54:    t163 = *((unsigned int *)t151);
    t164 = *((unsigned int *)t157);
    *((unsigned int *)t151) = (t163 | t164);
    t165 = (t130 + 4);
    t166 = (t144 + 4);
    t167 = *((unsigned int *)t130);
    t168 = (~(t167));
    t169 = *((unsigned int *)t165);
    t170 = (~(t169));
    t171 = *((unsigned int *)t144);
    t172 = (~(t171));
    t173 = *((unsigned int *)t166);
    t174 = (~(t173));
    t175 = (t168 & t170);
    t176 = (t172 & t174);
    t177 = (~(t175));
    t178 = (~(t176));
    t179 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t179 & t177);
    t180 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t180 & t178);
    t181 = *((unsigned int *)t151);
    *((unsigned int *)t151) = (t181 & t177);
    t182 = *((unsigned int *)t151);
    *((unsigned int *)t151) = (t182 & t178);
    goto LAB56;

LAB57:    *((unsigned int *)t183) = 1;
    goto LAB60;

LAB59:    t190 = (t183 + 4);
    *((unsigned int *)t183) = 1;
    *((unsigned int *)t190) = 1;
    goto LAB60;

LAB61:    t195 = (t0 + 20592U);
    t196 = *((char **)t195);
    memset(t197, 0, 8);
    t195 = (t196 + 4);
    t198 = *((unsigned int *)t195);
    t199 = (~(t198));
    t200 = *((unsigned int *)t196);
    t201 = (t200 & t199);
    t202 = (t201 & 1U);
    if (t202 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t195) != 0)
        goto LAB66;

LAB67:    t205 = *((unsigned int *)t183);
    t206 = *((unsigned int *)t197);
    t207 = (t205 & t206);
    *((unsigned int *)t204) = t207;
    t208 = (t183 + 4);
    t209 = (t197 + 4);
    t210 = (t204 + 4);
    t211 = *((unsigned int *)t208);
    t212 = *((unsigned int *)t209);
    t213 = (t211 | t212);
    *((unsigned int *)t210) = t213;
    t214 = *((unsigned int *)t210);
    t215 = (t214 != 0);
    if (t215 == 1)
        goto LAB68;

LAB69:
LAB70:    goto LAB63;

LAB64:    *((unsigned int *)t197) = 1;
    goto LAB67;

LAB66:    t203 = (t197 + 4);
    *((unsigned int *)t197) = 1;
    *((unsigned int *)t203) = 1;
    goto LAB67;

LAB68:    t216 = *((unsigned int *)t204);
    t217 = *((unsigned int *)t210);
    *((unsigned int *)t204) = (t216 | t217);
    t218 = (t183 + 4);
    t219 = (t197 + 4);
    t220 = *((unsigned int *)t183);
    t221 = (~(t220));
    t222 = *((unsigned int *)t218);
    t223 = (~(t222));
    t224 = *((unsigned int *)t197);
    t225 = (~(t224));
    t226 = *((unsigned int *)t219);
    t227 = (~(t226));
    t228 = (t221 & t223);
    t229 = (t225 & t227);
    t230 = (~(t228));
    t231 = (~(t229));
    t232 = *((unsigned int *)t210);
    *((unsigned int *)t210) = (t232 & t230);
    t233 = *((unsigned int *)t210);
    *((unsigned int *)t210) = (t233 & t231);
    t234 = *((unsigned int *)t204);
    *((unsigned int *)t204) = (t234 & t230);
    t235 = *((unsigned int *)t204);
    *((unsigned int *)t204) = (t235 & t231);
    goto LAB70;

LAB71:    *((unsigned int *)t236) = 1;
    goto LAB74;

LAB73:    t243 = (t236 + 4);
    *((unsigned int *)t236) = 1;
    *((unsigned int *)t243) = 1;
    goto LAB74;

LAB75:    t248 = (t0 + 23792U);
    t249 = *((char **)t248);
    memset(t250, 0, 8);
    t248 = (t249 + 4);
    t251 = *((unsigned int *)t248);
    t252 = (~(t251));
    t253 = *((unsigned int *)t249);
    t254 = (t253 & t252);
    t255 = (t254 & 1U);
    if (t255 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t248) != 0)
        goto LAB80;

LAB81:    t258 = *((unsigned int *)t236);
    t259 = *((unsigned int *)t250);
    t260 = (t258 & t259);
    *((unsigned int *)t257) = t260;
    t261 = (t236 + 4);
    t262 = (t250 + 4);
    t263 = (t257 + 4);
    t264 = *((unsigned int *)t261);
    t265 = *((unsigned int *)t262);
    t266 = (t264 | t265);
    *((unsigned int *)t263) = t266;
    t267 = *((unsigned int *)t263);
    t268 = (t267 != 0);
    if (t268 == 1)
        goto LAB82;

LAB83:
LAB84:    goto LAB77;

LAB78:    *((unsigned int *)t250) = 1;
    goto LAB81;

LAB80:    t256 = (t250 + 4);
    *((unsigned int *)t250) = 1;
    *((unsigned int *)t256) = 1;
    goto LAB81;

LAB82:    t269 = *((unsigned int *)t257);
    t270 = *((unsigned int *)t263);
    *((unsigned int *)t257) = (t269 | t270);
    t271 = (t236 + 4);
    t272 = (t250 + 4);
    t273 = *((unsigned int *)t236);
    t274 = (~(t273));
    t275 = *((unsigned int *)t271);
    t276 = (~(t275));
    t277 = *((unsigned int *)t250);
    t278 = (~(t277));
    t279 = *((unsigned int *)t272);
    t280 = (~(t279));
    t281 = (t274 & t276);
    t282 = (t278 & t280);
    t283 = (~(t281));
    t284 = (~(t282));
    t285 = *((unsigned int *)t263);
    *((unsigned int *)t263) = (t285 & t283);
    t286 = *((unsigned int *)t263);
    *((unsigned int *)t263) = (t286 & t284);
    t287 = *((unsigned int *)t257);
    *((unsigned int *)t257) = (t287 & t283);
    t288 = *((unsigned int *)t257);
    *((unsigned int *)t257) = (t288 & t284);
    goto LAB84;

LAB85:    *((unsigned int *)t289) = 1;
    goto LAB88;

LAB87:    t296 = (t289 + 4);
    *((unsigned int *)t289) = 1;
    *((unsigned int *)t296) = 1;
    goto LAB88;

LAB89:    t302 = (t0 + 24272U);
    t303 = *((char **)t302);
    memset(t304, 0, 8);
    t302 = (t303 + 4);
    t305 = *((unsigned int *)t302);
    t306 = (~(t305));
    t307 = *((unsigned int *)t303);
    t308 = (t307 & t306);
    t309 = (t308 & 1U);
    if (t309 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t302) != 0)
        goto LAB94;

LAB95:    t311 = (t304 + 4);
    t312 = *((unsigned int *)t304);
    t313 = *((unsigned int *)t311);
    t314 = (t312 || t313);
    if (t314 > 0)
        goto LAB96;

LAB97:    memcpy(t324, t304, 8);

LAB98:    memset(t356, 0, 8);
    t357 = (t324 + 4);
    t358 = *((unsigned int *)t357);
    t359 = (~(t358));
    t360 = *((unsigned int *)t324);
    t361 = (t360 & t359);
    t362 = (t361 & 1U);
    if (t362 != 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t357) != 0)
        goto LAB108;

LAB109:    t364 = (t356 + 4);
    t365 = *((unsigned int *)t356);
    t366 = *((unsigned int *)t364);
    t367 = (t365 || t366);
    if (t367 > 0)
        goto LAB110;

LAB111:    memcpy(t377, t356, 8);

LAB112:    memset(t409, 0, 8);
    t410 = (t377 + 4);
    t411 = *((unsigned int *)t410);
    t412 = (~(t411));
    t413 = *((unsigned int *)t377);
    t414 = (t413 & t412);
    t415 = (t414 & 1U);
    if (t415 != 0)
        goto LAB120;

LAB121:    if (*((unsigned int *)t410) != 0)
        goto LAB122;

LAB123:    t418 = *((unsigned int *)t289);
    t419 = *((unsigned int *)t409);
    t420 = (t418 | t419);
    *((unsigned int *)t417) = t420;
    t421 = (t289 + 4);
    t422 = (t409 + 4);
    t423 = (t417 + 4);
    t424 = *((unsigned int *)t421);
    t425 = *((unsigned int *)t422);
    t426 = (t424 | t425);
    *((unsigned int *)t423) = t426;
    t427 = *((unsigned int *)t423);
    t428 = (t427 != 0);
    if (t428 == 1)
        goto LAB124;

LAB125:
LAB126:    goto LAB91;

LAB92:    *((unsigned int *)t304) = 1;
    goto LAB95;

LAB94:    t310 = (t304 + 4);
    *((unsigned int *)t304) = 1;
    *((unsigned int *)t310) = 1;
    goto LAB95;

LAB96:    t315 = (t0 + 22512U);
    t316 = *((char **)t315);
    memset(t317, 0, 8);
    t315 = (t316 + 4);
    t318 = *((unsigned int *)t315);
    t319 = (~(t318));
    t320 = *((unsigned int *)t316);
    t321 = (t320 & t319);
    t322 = (t321 & 1U);
    if (t322 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t315) != 0)
        goto LAB101;

LAB102:    t325 = *((unsigned int *)t304);
    t326 = *((unsigned int *)t317);
    t327 = (t325 & t326);
    *((unsigned int *)t324) = t327;
    t328 = (t304 + 4);
    t329 = (t317 + 4);
    t330 = (t324 + 4);
    t331 = *((unsigned int *)t328);
    t332 = *((unsigned int *)t329);
    t333 = (t331 | t332);
    *((unsigned int *)t330) = t333;
    t334 = *((unsigned int *)t330);
    t335 = (t334 != 0);
    if (t335 == 1)
        goto LAB103;

LAB104:
LAB105:    goto LAB98;

LAB99:    *((unsigned int *)t317) = 1;
    goto LAB102;

LAB101:    t323 = (t317 + 4);
    *((unsigned int *)t317) = 1;
    *((unsigned int *)t323) = 1;
    goto LAB102;

LAB103:    t336 = *((unsigned int *)t324);
    t337 = *((unsigned int *)t330);
    *((unsigned int *)t324) = (t336 | t337);
    t338 = (t304 + 4);
    t339 = (t317 + 4);
    t340 = *((unsigned int *)t304);
    t341 = (~(t340));
    t342 = *((unsigned int *)t338);
    t343 = (~(t342));
    t344 = *((unsigned int *)t317);
    t345 = (~(t344));
    t346 = *((unsigned int *)t339);
    t347 = (~(t346));
    t348 = (t341 & t343);
    t349 = (t345 & t347);
    t350 = (~(t348));
    t351 = (~(t349));
    t352 = *((unsigned int *)t330);
    *((unsigned int *)t330) = (t352 & t350);
    t353 = *((unsigned int *)t330);
    *((unsigned int *)t330) = (t353 & t351);
    t354 = *((unsigned int *)t324);
    *((unsigned int *)t324) = (t354 & t350);
    t355 = *((unsigned int *)t324);
    *((unsigned int *)t324) = (t355 & t351);
    goto LAB105;

LAB106:    *((unsigned int *)t356) = 1;
    goto LAB109;

LAB108:    t363 = (t356 + 4);
    *((unsigned int *)t356) = 1;
    *((unsigned int *)t363) = 1;
    goto LAB109;

LAB110:    t368 = (t0 + 24112U);
    t369 = *((char **)t368);
    memset(t370, 0, 8);
    t368 = (t369 + 4);
    t371 = *((unsigned int *)t368);
    t372 = (~(t371));
    t373 = *((unsigned int *)t369);
    t374 = (t373 & t372);
    t375 = (t374 & 1U);
    if (t375 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t368) != 0)
        goto LAB115;

LAB116:    t378 = *((unsigned int *)t356);
    t379 = *((unsigned int *)t370);
    t380 = (t378 & t379);
    *((unsigned int *)t377) = t380;
    t381 = (t356 + 4);
    t382 = (t370 + 4);
    t383 = (t377 + 4);
    t384 = *((unsigned int *)t381);
    t385 = *((unsigned int *)t382);
    t386 = (t384 | t385);
    *((unsigned int *)t383) = t386;
    t387 = *((unsigned int *)t383);
    t388 = (t387 != 0);
    if (t388 == 1)
        goto LAB117;

LAB118:
LAB119:    goto LAB112;

LAB113:    *((unsigned int *)t370) = 1;
    goto LAB116;

LAB115:    t376 = (t370 + 4);
    *((unsigned int *)t370) = 1;
    *((unsigned int *)t376) = 1;
    goto LAB116;

LAB117:    t389 = *((unsigned int *)t377);
    t390 = *((unsigned int *)t383);
    *((unsigned int *)t377) = (t389 | t390);
    t391 = (t356 + 4);
    t392 = (t370 + 4);
    t393 = *((unsigned int *)t356);
    t394 = (~(t393));
    t395 = *((unsigned int *)t391);
    t396 = (~(t395));
    t397 = *((unsigned int *)t370);
    t398 = (~(t397));
    t399 = *((unsigned int *)t392);
    t400 = (~(t399));
    t401 = (t394 & t396);
    t402 = (t398 & t400);
    t403 = (~(t401));
    t404 = (~(t402));
    t405 = *((unsigned int *)t383);
    *((unsigned int *)t383) = (t405 & t403);
    t406 = *((unsigned int *)t383);
    *((unsigned int *)t383) = (t406 & t404);
    t407 = *((unsigned int *)t377);
    *((unsigned int *)t377) = (t407 & t403);
    t408 = *((unsigned int *)t377);
    *((unsigned int *)t377) = (t408 & t404);
    goto LAB119;

LAB120:    *((unsigned int *)t409) = 1;
    goto LAB123;

LAB122:    t416 = (t409 + 4);
    *((unsigned int *)t409) = 1;
    *((unsigned int *)t416) = 1;
    goto LAB123;

LAB124:    t429 = *((unsigned int *)t417);
    t430 = *((unsigned int *)t423);
    *((unsigned int *)t417) = (t429 | t430);
    t431 = (t289 + 4);
    t432 = (t409 + 4);
    t433 = *((unsigned int *)t431);
    t434 = (~(t433));
    t435 = *((unsigned int *)t289);
    t436 = (t435 & t434);
    t437 = *((unsigned int *)t432);
    t438 = (~(t437));
    t439 = *((unsigned int *)t409);
    t440 = (t439 & t438);
    t441 = (~(t436));
    t442 = (~(t440));
    t443 = *((unsigned int *)t423);
    *((unsigned int *)t423) = (t443 & t441);
    t444 = *((unsigned int *)t423);
    *((unsigned int *)t423) = (t444 & t442);
    goto LAB126;

LAB127:    *((unsigned int *)t445) = 1;
    goto LAB130;

LAB129:    t452 = (t445 + 4);
    *((unsigned int *)t445) = 1;
    *((unsigned int *)t452) = 1;
    goto LAB130;

LAB131:    t465 = *((unsigned int *)t453);
    t466 = *((unsigned int *)t459);
    *((unsigned int *)t453) = (t465 | t466);
    t467 = (t4 + 4);
    t468 = (t445 + 4);
    t469 = *((unsigned int *)t4);
    t470 = (~(t469));
    t471 = *((unsigned int *)t467);
    t472 = (~(t471));
    t473 = *((unsigned int *)t445);
    t474 = (~(t473));
    t475 = *((unsigned int *)t468);
    t476 = (~(t475));
    t477 = (t470 & t472);
    t478 = (t474 & t476);
    t479 = (~(t477));
    t480 = (~(t478));
    t481 = *((unsigned int *)t459);
    *((unsigned int *)t459) = (t481 & t479);
    t482 = *((unsigned int *)t459);
    *((unsigned int *)t459) = (t482 & t480);
    t483 = *((unsigned int *)t453);
    *((unsigned int *)t453) = (t483 & t479);
    t484 = *((unsigned int *)t453);
    *((unsigned int *)t453) = (t484 & t480);
    goto LAB133;

}

static void Cont_423_32(char *t0)
{
    char t3[8];
    char t4[8];
    char t20[8];
    char t33[8];
    char t47[8];
    char t54[8];
    char t82[8];
    char t90[8];
    char t122[8];
    char t136[8];
    char t143[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    int t114;
    int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    char *t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    int t167;
    int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    char *t179;
    char *t180;
    char *t181;
    char *t182;
    char *t183;
    char *t184;
    unsigned int t185;
    unsigned int t186;
    char *t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    char *t193;

LAB0:    t1 = (t0 + 50808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(423, ng7);
    t2 = (t0 + 33152);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t175 = *((unsigned int *)t4);
    t176 = (~(t175));
    t177 = *((unsigned int *)t14);
    t178 = (t176 || t177);
    if (t178 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t180, 8);

LAB16:    t179 = (t0 + 59128);
    t181 = (t179 + 56U);
    t182 = *((char **)t181);
    t183 = (t182 + 56U);
    t184 = *((char **)t183);
    memset(t184, 0, 8);
    t185 = 1U;
    t186 = t185;
    t187 = (t3 + 4);
    t188 = *((unsigned int *)t3);
    t185 = (t185 & t188);
    t189 = *((unsigned int *)t187);
    t186 = (t186 & t189);
    t190 = (t184 + 4);
    t191 = *((unsigned int *)t184);
    *((unsigned int *)t184) = (t191 | t185);
    t192 = *((unsigned int *)t190);
    *((unsigned int *)t190) = (t192 | t186);
    xsi_driver_vfirst_trans(t179, 0, 0);
    t193 = (t0 + 57032);
    *((int *)t193) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 21712U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t19 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t18) != 0)
        goto LAB19;

LAB20:    t27 = (t20 + 4);
    t28 = *((unsigned int *)t20);
    t29 = *((unsigned int *)t27);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB21;

LAB22:    memcpy(t90, t20, 8);

LAB23:    memset(t122, 0, 8);
    t123 = (t90 + 4);
    t124 = *((unsigned int *)t123);
    t125 = (~(t124));
    t126 = *((unsigned int *)t90);
    t127 = (t126 & t125);
    t128 = (t127 & 1U);
    if (t128 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t123) != 0)
        goto LAB47;

LAB48:    t130 = (t122 + 4);
    t131 = *((unsigned int *)t122);
    t132 = *((unsigned int *)t130);
    t133 = (t131 || t132);
    if (t133 > 0)
        goto LAB49;

LAB50:    memcpy(t143, t122, 8);

LAB51:    goto LAB9;

LAB10:    t179 = (t0 + 21712U);
    t180 = *((char **)t179);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t143, 1, t180, 1);
    goto LAB16;

LAB14:    memcpy(t3, t143, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t20) = 1;
    goto LAB20;

LAB19:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB20;

LAB21:    t31 = (t0 + 22672U);
    t32 = *((char **)t31);
    memset(t33, 0, 8);
    t31 = (t32 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (~(t34));
    t36 = *((unsigned int *)t32);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t31) != 0)
        goto LAB26;

LAB27:    t40 = (t33 + 4);
    t41 = *((unsigned int *)t33);
    t42 = (!(t41));
    t43 = *((unsigned int *)t40);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB28;

LAB29:    memcpy(t54, t33, 8);

LAB30:    memset(t82, 0, 8);
    t83 = (t54 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (~(t84));
    t86 = *((unsigned int *)t54);
    t87 = (t86 & t85);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t83) != 0)
        goto LAB40;

LAB41:    t91 = *((unsigned int *)t20);
    t92 = *((unsigned int *)t82);
    t93 = (t91 & t92);
    *((unsigned int *)t90) = t93;
    t94 = (t20 + 4);
    t95 = (t82 + 4);
    t96 = (t90 + 4);
    t97 = *((unsigned int *)t94);
    t98 = *((unsigned int *)t95);
    t99 = (t97 | t98);
    *((unsigned int *)t96) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 != 0);
    if (t101 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB23;

LAB24:    *((unsigned int *)t33) = 1;
    goto LAB27;

LAB26:    t39 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB27;

LAB28:    t45 = (t0 + 20272U);
    t46 = *((char **)t45);
    memset(t47, 0, 8);
    t45 = (t46 + 4);
    t48 = *((unsigned int *)t45);
    t49 = (~(t48));
    t50 = *((unsigned int *)t46);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t45) != 0)
        goto LAB33;

LAB34:    t55 = *((unsigned int *)t33);
    t56 = *((unsigned int *)t47);
    t57 = (t55 | t56);
    *((unsigned int *)t54) = t57;
    t58 = (t33 + 4);
    t59 = (t47 + 4);
    t60 = (t54 + 4);
    t61 = *((unsigned int *)t58);
    t62 = *((unsigned int *)t59);
    t63 = (t61 | t62);
    *((unsigned int *)t60) = t63;
    t64 = *((unsigned int *)t60);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB30;

LAB31:    *((unsigned int *)t47) = 1;
    goto LAB34;

LAB33:    t53 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB34;

LAB35:    t66 = *((unsigned int *)t54);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t54) = (t66 | t67);
    t68 = (t33 + 4);
    t69 = (t47 + 4);
    t70 = *((unsigned int *)t68);
    t71 = (~(t70));
    t72 = *((unsigned int *)t33);
    t73 = (t72 & t71);
    t74 = *((unsigned int *)t69);
    t75 = (~(t74));
    t76 = *((unsigned int *)t47);
    t77 = (t76 & t75);
    t78 = (~(t73));
    t79 = (~(t77));
    t80 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t80 & t78);
    t81 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t81 & t79);
    goto LAB37;

LAB38:    *((unsigned int *)t82) = 1;
    goto LAB41;

LAB40:    t89 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB41;

LAB42:    t102 = *((unsigned int *)t90);
    t103 = *((unsigned int *)t96);
    *((unsigned int *)t90) = (t102 | t103);
    t104 = (t20 + 4);
    t105 = (t82 + 4);
    t106 = *((unsigned int *)t20);
    t107 = (~(t106));
    t108 = *((unsigned int *)t104);
    t109 = (~(t108));
    t110 = *((unsigned int *)t82);
    t111 = (~(t110));
    t112 = *((unsigned int *)t105);
    t113 = (~(t112));
    t114 = (t107 & t109);
    t115 = (t111 & t113);
    t116 = (~(t114));
    t117 = (~(t115));
    t118 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t118 & t116);
    t119 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t119 & t117);
    t120 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t120 & t116);
    t121 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t121 & t117);
    goto LAB44;

LAB45:    *((unsigned int *)t122) = 1;
    goto LAB48;

LAB47:    t129 = (t122 + 4);
    *((unsigned int *)t122) = 1;
    *((unsigned int *)t129) = 1;
    goto LAB48;

LAB49:    t134 = (t0 + 23312U);
    t135 = *((char **)t134);
    memset(t136, 0, 8);
    t134 = (t135 + 4);
    t137 = *((unsigned int *)t134);
    t138 = (~(t137));
    t139 = *((unsigned int *)t135);
    t140 = (t139 & t138);
    t141 = (t140 & 1U);
    if (t141 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t134) != 0)
        goto LAB54;

LAB55:    t144 = *((unsigned int *)t122);
    t145 = *((unsigned int *)t136);
    t146 = (t144 & t145);
    *((unsigned int *)t143) = t146;
    t147 = (t122 + 4);
    t148 = (t136 + 4);
    t149 = (t143 + 4);
    t150 = *((unsigned int *)t147);
    t151 = *((unsigned int *)t148);
    t152 = (t150 | t151);
    *((unsigned int *)t149) = t152;
    t153 = *((unsigned int *)t149);
    t154 = (t153 != 0);
    if (t154 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB51;

LAB52:    *((unsigned int *)t136) = 1;
    goto LAB55;

LAB54:    t142 = (t136 + 4);
    *((unsigned int *)t136) = 1;
    *((unsigned int *)t142) = 1;
    goto LAB55;

LAB56:    t155 = *((unsigned int *)t143);
    t156 = *((unsigned int *)t149);
    *((unsigned int *)t143) = (t155 | t156);
    t157 = (t122 + 4);
    t158 = (t136 + 4);
    t159 = *((unsigned int *)t122);
    t160 = (~(t159));
    t161 = *((unsigned int *)t157);
    t162 = (~(t161));
    t163 = *((unsigned int *)t136);
    t164 = (~(t163));
    t165 = *((unsigned int *)t158);
    t166 = (~(t165));
    t167 = (t160 & t162);
    t168 = (t164 & t166);
    t169 = (~(t167));
    t170 = (~(t168));
    t171 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t171 & t169);
    t172 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t172 & t170);
    t173 = *((unsigned int *)t143);
    *((unsigned int *)t143) = (t173 & t169);
    t174 = *((unsigned int *)t143);
    *((unsigned int *)t143) = (t174 & t170);
    goto LAB58;

}

static void Cont_424_33(char *t0)
{
    char t3[8];
    char t4[8];
    char t20[8];
    char t33[8];
    char t47[8];
    char t54[8];
    char t82[8];
    char t90[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    int t114;
    int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;

LAB0:    t1 = (t0 + 51056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(424, ng7);
    t2 = (t0 + 33152);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t122 = *((unsigned int *)t4);
    t123 = (~(t122));
    t124 = *((unsigned int *)t14);
    t125 = (t123 || t124);
    if (t125 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t127, 8);

LAB16:    t126 = (t0 + 59192);
    t128 = (t126 + 56U);
    t129 = *((char **)t128);
    t130 = (t129 + 56U);
    t131 = *((char **)t130);
    memset(t131, 0, 8);
    t132 = 1U;
    t133 = t132;
    t134 = (t3 + 4);
    t135 = *((unsigned int *)t3);
    t132 = (t132 & t135);
    t136 = *((unsigned int *)t134);
    t133 = (t133 & t136);
    t137 = (t131 + 4);
    t138 = *((unsigned int *)t131);
    *((unsigned int *)t131) = (t138 | t132);
    t139 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t139 | t133);
    xsi_driver_vfirst_trans(t126, 0, 0);
    t140 = (t0 + 57048);
    *((int *)t140) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 21872U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t18 = (t19 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t18) != 0)
        goto LAB19;

LAB20:    t27 = (t20 + 4);
    t28 = *((unsigned int *)t20);
    t29 = *((unsigned int *)t27);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB21;

LAB22:    memcpy(t90, t20, 8);

LAB23:    goto LAB9;

LAB10:    t126 = (t0 + 21872U);
    t127 = *((char **)t126);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t90, 1, t127, 1);
    goto LAB16;

LAB14:    memcpy(t3, t90, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t20) = 1;
    goto LAB20;

LAB19:    t26 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB20;

LAB21:    t31 = (t0 + 22832U);
    t32 = *((char **)t31);
    memset(t33, 0, 8);
    t31 = (t32 + 4);
    t34 = *((unsigned int *)t31);
    t35 = (~(t34));
    t36 = *((unsigned int *)t32);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t31) != 0)
        goto LAB26;

LAB27:    t40 = (t33 + 4);
    t41 = *((unsigned int *)t33);
    t42 = (!(t41));
    t43 = *((unsigned int *)t40);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB28;

LAB29:    memcpy(t54, t33, 8);

LAB30:    memset(t82, 0, 8);
    t83 = (t54 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (~(t84));
    t86 = *((unsigned int *)t54);
    t87 = (t86 & t85);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t83) != 0)
        goto LAB40;

LAB41:    t91 = *((unsigned int *)t20);
    t92 = *((unsigned int *)t82);
    t93 = (t91 & t92);
    *((unsigned int *)t90) = t93;
    t94 = (t20 + 4);
    t95 = (t82 + 4);
    t96 = (t90 + 4);
    t97 = *((unsigned int *)t94);
    t98 = *((unsigned int *)t95);
    t99 = (t97 | t98);
    *((unsigned int *)t96) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 != 0);
    if (t101 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB23;

LAB24:    *((unsigned int *)t33) = 1;
    goto LAB27;

LAB26:    t39 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB27;

LAB28:    t45 = (t0 + 20272U);
    t46 = *((char **)t45);
    memset(t47, 0, 8);
    t45 = (t46 + 4);
    t48 = *((unsigned int *)t45);
    t49 = (~(t48));
    t50 = *((unsigned int *)t46);
    t51 = (t50 & t49);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t45) != 0)
        goto LAB33;

LAB34:    t55 = *((unsigned int *)t33);
    t56 = *((unsigned int *)t47);
    t57 = (t55 | t56);
    *((unsigned int *)t54) = t57;
    t58 = (t33 + 4);
    t59 = (t47 + 4);
    t60 = (t54 + 4);
    t61 = *((unsigned int *)t58);
    t62 = *((unsigned int *)t59);
    t63 = (t61 | t62);
    *((unsigned int *)t60) = t63;
    t64 = *((unsigned int *)t60);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB30;

LAB31:    *((unsigned int *)t47) = 1;
    goto LAB34;

LAB33:    t53 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB34;

LAB35:    t66 = *((unsigned int *)t54);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t54) = (t66 | t67);
    t68 = (t33 + 4);
    t69 = (t47 + 4);
    t70 = *((unsigned int *)t68);
    t71 = (~(t70));
    t72 = *((unsigned int *)t33);
    t73 = (t72 & t71);
    t74 = *((unsigned int *)t69);
    t75 = (~(t74));
    t76 = *((unsigned int *)t47);
    t77 = (t76 & t75);
    t78 = (~(t73));
    t79 = (~(t77));
    t80 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t80 & t78);
    t81 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t81 & t79);
    goto LAB37;

LAB38:    *((unsigned int *)t82) = 1;
    goto LAB41;

LAB40:    t89 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB41;

LAB42:    t102 = *((unsigned int *)t90);
    t103 = *((unsigned int *)t96);
    *((unsigned int *)t90) = (t102 | t103);
    t104 = (t20 + 4);
    t105 = (t82 + 4);
    t106 = *((unsigned int *)t20);
    t107 = (~(t106));
    t108 = *((unsigned int *)t104);
    t109 = (~(t108));
    t110 = *((unsigned int *)t82);
    t111 = (~(t110));
    t112 = *((unsigned int *)t105);
    t113 = (~(t112));
    t114 = (t107 & t109);
    t115 = (t111 & t113);
    t116 = (~(t114));
    t117 = (~(t115));
    t118 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t118 & t116);
    t119 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t119 & t117);
    t120 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t120 & t116);
    t121 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t121 & t117);
    goto LAB44;

}

static void Always_426_34(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 51304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(426, ng7);
    t2 = (t0 + 57064);
    *((int *)t2) = 1;
    t3 = (t0 + 51336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(426, ng7);
    t5 = (t0 + 16592U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t0 + 28512);
    xsi_vlogvar_wait_assign_value(t13, t4, 0, 0, 1, 0LL);
    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

}

static void Always_427_35(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 51552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(427, ng7);
    t2 = (t0 + 57080);
    *((int *)t2) = 1;
    t3 = (t0 + 51584);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(427, ng7);

LAB5:    xsi_set_current_line(428, ng7);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 28512);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Always_432_36(char *t0)
{
    char t15[8];
    char t23[8];
    char t36[8];
    char t47[8];
    char t56[8];
    char t64[8];
    char t96[8];
    char t109[8];
    char t118[8];
    char t132[8];
    char t139[8];
    char t171[8];
    char t179[8];
    char t207[8];
    char t220[8];
    char t221[8];
    char t235[8];
    char t273[8];
    char t281[8];
    char t309[8];
    char t317[8];
    char t365[8];
    char t373[8];
    char t384[8];
    char t403[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    char *t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    int t163;
    int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t178;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    char *t184;
    char *t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    char *t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    char *t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    char *t214;
    char *t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    char *t222;
    char *t223;
    char *t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    char *t233;
    char *t234;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    char *t239;
    char *t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    char *t248;
    char *t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    int t258;
    int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    char *t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    char *t272;
    char *t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    char *t280;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    char *t285;
    char *t286;
    char *t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    char *t295;
    char *t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    int t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    unsigned int t308;
    char *t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    unsigned int t314;
    unsigned int t315;
    char *t316;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    char *t321;
    char *t322;
    char *t323;
    unsigned int t324;
    unsigned int t325;
    unsigned int t326;
    unsigned int t327;
    unsigned int t328;
    unsigned int t329;
    unsigned int t330;
    char *t331;
    char *t332;
    unsigned int t333;
    unsigned int t334;
    unsigned int t335;
    unsigned int t336;
    unsigned int t337;
    unsigned int t338;
    unsigned int t339;
    unsigned int t340;
    int t341;
    int t342;
    unsigned int t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    unsigned int t347;
    unsigned int t348;
    char *t349;
    unsigned int t350;
    unsigned int t351;
    unsigned int t352;
    unsigned int t353;
    unsigned int t354;
    double t355;
    char *t356;
    char *t357;
    char *t358;
    double t359;
    double t360;
    char *t361;
    char *t362;
    double t363;
    unsigned int t364;
    char *t366;
    unsigned int t367;
    unsigned int t368;
    unsigned int t369;
    unsigned int t370;
    unsigned int t371;
    double t372;
    char *t374;
    char *t375;
    char *t376;
    double t377;
    char *t378;
    char *t379;
    double t380;
    double t381;
    double t382;
    double t383;
    unsigned int t385;
    unsigned int t386;
    unsigned int t387;
    unsigned int t388;
    unsigned int t389;
    unsigned int t390;
    unsigned int t391;
    unsigned int t392;
    unsigned int t393;
    unsigned int t394;
    unsigned int t395;
    char *t396;
    char *t397;
    unsigned int t398;
    unsigned int t399;
    unsigned int t400;
    unsigned int t401;
    unsigned int t402;

LAB0:    t1 = (t0 + 51800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(432, ng7);
    t2 = (t0 + 57096);
    *((int *)t2) = 1;
    t3 = (t0 + 51832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(432, ng7);

LAB5:    xsi_set_current_line(433, ng7);
    t4 = (t0 + 28512);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(436, ng7);

LAB10:    xsi_set_current_line(439, ng7);
    t2 = (t0 + 27392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8704);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t16 = (t11 ^ t12);
    t17 = (t10 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB14;

LAB11:    if (t20 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t15) = 1;

LAB14:    memset(t23, 0, 8);
    t14 = (t15 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    t26 = *((unsigned int *)t15);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t14) != 0)
        goto LAB17;

LAB18:    t30 = (t23 + 4);
    t31 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB19;

LAB20:    memcpy(t317, t23, 8);

LAB21:    t349 = (t317 + 4);
    t350 = *((unsigned int *)t349);
    t351 = (~(t350));
    t352 = *((unsigned int *)t317);
    t353 = (t352 & t351);
    t354 = (t353 != 0);
    if (t354 > 0)
        goto LAB102;

LAB103:
LAB104:    xsi_set_current_line(485, ng7);
    t2 = (t0 + 27392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9112);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t16 = (t11 ^ t12);
    t17 = (t10 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB240;

LAB237:    if (t20 != 0)
        goto LAB239;

LAB238:    *((unsigned int *)t15) = 1;

LAB240:    memset(t23, 0, 8);
    t14 = (t15 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    t26 = *((unsigned int *)t15);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB241;

LAB242:    if (*((unsigned int *)t14) != 0)
        goto LAB243;

LAB244:    t30 = (t23 + 4);
    t31 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB245;

LAB246:    memcpy(t221, t23, 8);

LAB247:    t234 = (t221 + 4);
    t252 = *((unsigned int *)t234);
    t253 = (~(t252));
    t254 = *((unsigned int *)t221);
    t255 = (t254 & t253);
    t256 = (t255 != 0);
    if (t256 > 0)
        goto LAB305;

LAB306:
LAB307:    xsi_set_current_line(515, ng7);
    t2 = (t0 + 27392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8840);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t16 = (t11 ^ t12);
    t17 = (t10 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB359;

LAB356:    if (t20 != 0)
        goto LAB358;

LAB357:    *((unsigned int *)t15) = 1;

LAB359:    t14 = (t15 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    t26 = *((unsigned int *)t15);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB360;

LAB361:
LAB362:    xsi_set_current_line(530, ng7);
    t2 = (t0 + 25232U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB440;

LAB438:    if (*((unsigned int *)t2) == 0)
        goto LAB437;

LAB439:    t4 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t4) = 1;

LAB440:    memset(t23, 0, 8);
    t5 = (t15 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB441;

LAB442:    if (*((unsigned int *)t5) != 0)
        goto LAB443;

LAB444:    t7 = (t23 + 4);
    t21 = *((unsigned int *)t23);
    t22 = *((unsigned int *)t7);
    t24 = (t21 || t22);
    if (t24 > 0)
        goto LAB445;

LAB446:    memcpy(t47, t23, 8);

LAB447:    t48 = (t47 + 4);
    t72 = *((unsigned int *)t48);
    t73 = (~(t72));
    t74 = *((unsigned int *)t47);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB455;

LAB456:
LAB457:    xsi_set_current_line(534, ng7);
    t2 = (t0 + 25072U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB459;

LAB460:    if (*((unsigned int *)t2) != 0)
        goto LAB461;

LAB462:    t5 = (t15 + 4);
    t16 = *((unsigned int *)t15);
    t17 = *((unsigned int *)t5);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB463;

LAB464:    memcpy(t47, t15, 8);

LAB465:    t48 = (t47 + 4);
    t72 = *((unsigned int *)t48);
    t73 = (~(t72));
    t74 = *((unsigned int *)t47);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB477;

LAB478:
LAB479:    xsi_set_current_line(539, ng7);
    t2 = (t0 + 27552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB484;

LAB482:    if (*((unsigned int *)t5) == 0)
        goto LAB481;

LAB483:    t6 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t6) = 1;

LAB484:    memset(t23, 0, 8);
    t7 = (t15 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB485;

LAB486:    if (*((unsigned int *)t7) != 0)
        goto LAB487;

LAB488:    t14 = (t23 + 4);
    t21 = *((unsigned int *)t23);
    t22 = *((unsigned int *)t14);
    t24 = (t21 || t22);
    if (t24 > 0)
        goto LAB489;

LAB490:    memcpy(t47, t23, 8);

LAB491:    memset(t56, 0, 8);
    t55 = (t47 + 4);
    t72 = *((unsigned int *)t55);
    t73 = (~(t72));
    t74 = *((unsigned int *)t47);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB499;

LAB500:    if (*((unsigned int *)t55) != 0)
        goto LAB501;

LAB502:    t63 = (t56 + 4);
    t77 = *((unsigned int *)t56);
    t80 = *((unsigned int *)t63);
    t81 = (t77 || t80);
    if (t81 > 0)
        goto LAB503;

LAB504:    memcpy(t118, t56, 8);

LAB505:    memset(t132, 0, 8);
    t117 = (t118 + 4);
    t133 = *((unsigned int *)t117);
    t134 = (~(t133));
    t135 = *((unsigned int *)t118);
    t136 = (t135 & t134);
    t137 = (t136 & 1U);
    if (t137 != 0)
        goto LAB517;

LAB518:    if (*((unsigned int *)t117) != 0)
        goto LAB519;

LAB520:    t125 = (t132 + 4);
    t140 = *((unsigned int *)t132);
    t141 = *((unsigned int *)t125);
    t142 = (t140 || t141);
    if (t142 > 0)
        goto LAB521;

LAB522:    memcpy(t179, t132, 8);

LAB523:    t184 = (t179 + 4);
    t191 = *((unsigned int *)t184);
    t192 = (~(t191));
    t195 = *((unsigned int *)t179);
    t196 = (t195 & t192);
    t197 = (t196 != 0);
    if (t197 > 0)
        goto LAB535;

LAB536:
LAB537:    xsi_set_current_line(550, ng7);
    t2 = (t0 + 27552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB553;

LAB551:    if (*((unsigned int *)t5) == 0)
        goto LAB550;

LAB552:    t6 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t6) = 1;

LAB553:    memset(t23, 0, 8);
    t7 = (t15 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB554;

LAB555:    if (*((unsigned int *)t7) != 0)
        goto LAB556;

LAB557:    t14 = (t23 + 4);
    t21 = *((unsigned int *)t23);
    t22 = *((unsigned int *)t14);
    t24 = (t21 || t22);
    if (t24 > 0)
        goto LAB558;

LAB559:    memcpy(t47, t23, 8);

LAB560:    memset(t56, 0, 8);
    t55 = (t47 + 4);
    t72 = *((unsigned int *)t55);
    t73 = (~(t72));
    t74 = *((unsigned int *)t47);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB568;

LAB569:    if (*((unsigned int *)t55) != 0)
        goto LAB570;

LAB571:    t63 = (t56 + 4);
    t77 = *((unsigned int *)t56);
    t80 = *((unsigned int *)t63);
    t81 = (t77 || t80);
    if (t81 > 0)
        goto LAB572;

LAB573:    memcpy(t118, t56, 8);

LAB574:    memset(t132, 0, 8);
    t117 = (t118 + 4);
    t133 = *((unsigned int *)t117);
    t134 = (~(t133));
    t135 = *((unsigned int *)t118);
    t136 = (t135 & t134);
    t137 = (t136 & 1U);
    if (t137 != 0)
        goto LAB586;

LAB587:    if (*((unsigned int *)t117) != 0)
        goto LAB588;

LAB589:    t125 = (t132 + 4);
    t140 = *((unsigned int *)t132);
    t141 = *((unsigned int *)t125);
    t142 = (t140 || t141);
    if (t142 > 0)
        goto LAB590;

LAB591:    memcpy(t221, t132, 8);

LAB592:    memset(t235, 0, 8);
    t234 = (t221 + 4);
    t243 = *((unsigned int *)t234);
    t244 = (~(t243));
    t245 = *((unsigned int *)t221);
    t246 = (t245 & t244);
    t247 = (t246 & 1U);
    if (t247 != 0)
        goto LAB618;

LAB619:    if (*((unsigned int *)t234) != 0)
        goto LAB620;

LAB621:    t240 = (t235 + 4);
    t250 = *((unsigned int *)t235);
    t251 = *((unsigned int *)t240);
    t252 = (t250 || t251);
    if (t252 > 0)
        goto LAB622;

LAB623:    memcpy(t373, t235, 8);

LAB624:    t362 = (t373 + 4);
    t364 = *((unsigned int *)t362);
    t367 = (~(t364));
    t368 = *((unsigned int *)t373);
    t369 = (t368 & t367);
    t370 = (t369 != 0);
    if (t370 > 0)
        goto LAB650;

LAB651:
LAB652:    xsi_set_current_line(561, ng7);
    t2 = (t0 + 21552U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB665;

LAB666:    if (*((unsigned int *)t2) != 0)
        goto LAB667;

LAB668:    t5 = (t15 + 4);
    t16 = *((unsigned int *)t15);
    t17 = *((unsigned int *)t5);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB669;

LAB670:    memcpy(t47, t15, 8);

LAB671:    memset(t56, 0, 8);
    t48 = (t47 + 4);
    t72 = *((unsigned int *)t48);
    t73 = (~(t72));
    t74 = *((unsigned int *)t47);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB683;

LAB684:    if (*((unsigned int *)t48) != 0)
        goto LAB685;

LAB686:    t55 = (t56 + 4);
    t77 = *((unsigned int *)t56);
    t80 = *((unsigned int *)t55);
    t81 = (t77 || t80);
    if (t81 > 0)
        goto LAB687;

LAB688:    memcpy(t109, t56, 8);

LAB689:    memset(t118, 0, 8);
    t103 = (t109 + 4);
    t123 = *((unsigned int *)t103);
    t124 = (~(t123));
    t127 = *((unsigned int *)t109);
    t128 = (t127 & t124);
    t129 = (t128 & 1U);
    if (t129 != 0)
        goto LAB697;

LAB698:    if (*((unsigned int *)t103) != 0)
        goto LAB699;

LAB700:    t110 = (t118 + 4);
    t133 = *((unsigned int *)t118);
    t134 = *((unsigned int *)t110);
    t135 = (t133 || t134);
    if (t135 > 0)
        goto LAB701;

LAB702:    memcpy(t171, t118, 8);

LAB703:    t154 = (t171 + 4);
    t186 = *((unsigned int *)t154);
    t187 = (~(t186));
    t188 = *((unsigned int *)t171);
    t189 = (t188 & t187);
    t190 = (t189 != 0);
    if (t190 > 0)
        goto LAB715;

LAB716:
LAB717:    xsi_set_current_line(601, ng7);
    t2 = (t0 + 21552U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB852;

LAB853:    if (*((unsigned int *)t2) != 0)
        goto LAB854;

LAB855:    t5 = (t15 + 4);
    t16 = *((unsigned int *)t15);
    t17 = *((unsigned int *)t5);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB856;

LAB857:    memcpy(t47, t15, 8);

LAB858:    memset(t56, 0, 8);
    t48 = (t47 + 4);
    t72 = *((unsigned int *)t48);
    t73 = (~(t72));
    t74 = *((unsigned int *)t47);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB870;

LAB871:    if (*((unsigned int *)t48) != 0)
        goto LAB872;

LAB873:    t55 = (t56 + 4);
    t77 = *((unsigned int *)t56);
    t80 = *((unsigned int *)t55);
    t81 = (t77 || t80);
    if (t81 > 0)
        goto LAB874;

LAB875:    memcpy(t109, t56, 8);

LAB876:    memset(t118, 0, 8);
    t103 = (t109 + 4);
    t123 = *((unsigned int *)t103);
    t124 = (~(t123));
    t127 = *((unsigned int *)t109);
    t128 = (t127 & t124);
    t129 = (t128 & 1U);
    if (t129 != 0)
        goto LAB884;

LAB885:    if (*((unsigned int *)t103) != 0)
        goto LAB886;

LAB887:    t111 = (t118 + 4);
    t133 = *((unsigned int *)t118);
    t134 = *((unsigned int *)t111);
    t135 = (t133 || t134);
    if (t135 > 0)
        goto LAB888;

LAB889:    memcpy(t139, t118, 8);

LAB890:    t153 = (t139 + 4);
    t176 = *((unsigned int *)t153);
    t177 = (~(t176));
    t180 = *((unsigned int *)t139);
    t181 = (t180 & t177);
    t182 = (t181 != 0);
    if (t182 > 0)
        goto LAB898;

LAB899:
LAB900:    xsi_set_current_line(626, ng7);
    t2 = (t0 + 21552U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB972;

LAB973:
LAB974:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(433, ng7);

LAB9:    xsi_set_current_line(434, ng7);
    t13 = ((char*)((ng6)));
    t14 = (t0 + 26912);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 2, 0LL);
    xsi_set_current_line(435, ng7);
    t2 = (t0 + 8568);
    t3 = *((char **)t2);
    t2 = (t0 + 27392);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB8;

LAB13:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB15:    *((unsigned int *)t23) = 1;
    goto LAB18;

LAB17:    t29 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB18;

LAB19:    t34 = (t0 + 25072U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t34 = (t35 + 4);
    t37 = *((unsigned int *)t34);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t34) != 0)
        goto LAB24;

LAB25:    t43 = (t36 + 4);
    t44 = *((unsigned int *)t36);
    t45 = *((unsigned int *)t43);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB26;

LAB27:    memcpy(t64, t36, 8);

LAB28:    memset(t96, 0, 8);
    t97 = (t64 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t64);
    t101 = (t100 & t99);
    t102 = (t101 & 1U);
    if (t102 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t97) != 0)
        goto LAB42;

LAB43:    t104 = (t96 + 4);
    t105 = *((unsigned int *)t96);
    t106 = (!(t105));
    t107 = *((unsigned int *)t104);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB44;

LAB45:    memcpy(t179, t96, 8);

LAB46:    memset(t207, 0, 8);
    t208 = (t179 + 4);
    t209 = *((unsigned int *)t208);
    t210 = (~(t209));
    t211 = *((unsigned int *)t179);
    t212 = (t211 & t210);
    t213 = (t212 & 1U);
    if (t213 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t208) != 0)
        goto LAB74;

LAB75:    t215 = (t207 + 4);
    t216 = *((unsigned int *)t207);
    t217 = (!(t216));
    t218 = *((unsigned int *)t215);
    t219 = (t217 || t218);
    if (t219 > 0)
        goto LAB76;

LAB77:    memcpy(t281, t207, 8);

LAB78:    memset(t309, 0, 8);
    t310 = (t281 + 4);
    t311 = *((unsigned int *)t310);
    t312 = (~(t311));
    t313 = *((unsigned int *)t281);
    t314 = (t313 & t312);
    t315 = (t314 & 1U);
    if (t315 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t310) != 0)
        goto LAB97;

LAB98:    t318 = *((unsigned int *)t23);
    t319 = *((unsigned int *)t309);
    t320 = (t318 & t319);
    *((unsigned int *)t317) = t320;
    t321 = (t23 + 4);
    t322 = (t309 + 4);
    t323 = (t317 + 4);
    t324 = *((unsigned int *)t321);
    t325 = *((unsigned int *)t322);
    t326 = (t324 | t325);
    *((unsigned int *)t323) = t326;
    t327 = *((unsigned int *)t323);
    t328 = (t327 != 0);
    if (t328 == 1)
        goto LAB99;

LAB100:
LAB101:    goto LAB21;

LAB22:    *((unsigned int *)t36) = 1;
    goto LAB25;

LAB24:    t42 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB25;

LAB26:    t48 = (t0 + 21552U);
    t49 = *((char **)t48);
    memset(t47, 0, 8);
    t48 = (t49 + 4);
    t50 = *((unsigned int *)t48);
    t51 = (~(t50));
    t52 = *((unsigned int *)t49);
    t53 = (t52 & t51);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB32;

LAB30:    if (*((unsigned int *)t48) == 0)
        goto LAB29;

LAB31:    t55 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t55) = 1;

LAB32:    memset(t56, 0, 8);
    t57 = (t47 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t47);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t57) != 0)
        goto LAB35;

LAB36:    t65 = *((unsigned int *)t36);
    t66 = *((unsigned int *)t56);
    t67 = (t65 & t66);
    *((unsigned int *)t64) = t67;
    t68 = (t36 + 4);
    t69 = (t56 + 4);
    t70 = (t64 + 4);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB28;

LAB29:    *((unsigned int *)t47) = 1;
    goto LAB32;

LAB33:    *((unsigned int *)t56) = 1;
    goto LAB36;

LAB35:    t63 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB36;

LAB37:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t64) = (t76 | t77);
    t78 = (t36 + 4);
    t79 = (t56 + 4);
    t80 = *((unsigned int *)t36);
    t81 = (~(t80));
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t56);
    t85 = (~(t84));
    t86 = *((unsigned int *)t79);
    t87 = (~(t86));
    t88 = (t81 & t83);
    t89 = (t85 & t87);
    t90 = (~(t88));
    t91 = (~(t89));
    t92 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t92 & t90);
    t93 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t93 & t91);
    t94 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t94 & t90);
    t95 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t95 & t91);
    goto LAB39;

LAB40:    *((unsigned int *)t96) = 1;
    goto LAB43;

LAB42:    t103 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB43;

LAB44:    t110 = (t0 + 25232U);
    t111 = *((char **)t110);
    memset(t109, 0, 8);
    t110 = (t111 + 4);
    t112 = *((unsigned int *)t110);
    t113 = (~(t112));
    t114 = *((unsigned int *)t111);
    t115 = (t114 & t113);
    t116 = (t115 & 1U);
    if (t116 != 0)
        goto LAB50;

LAB48:    if (*((unsigned int *)t110) == 0)
        goto LAB47;

LAB49:    t117 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t117) = 1;

LAB50:    memset(t118, 0, 8);
    t119 = (t109 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t109);
    t123 = (t122 & t121);
    t124 = (t123 & 1U);
    if (t124 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t119) != 0)
        goto LAB53;

LAB54:    t126 = (t118 + 4);
    t127 = *((unsigned int *)t118);
    t128 = *((unsigned int *)t126);
    t129 = (t127 || t128);
    if (t129 > 0)
        goto LAB55;

LAB56:    memcpy(t139, t118, 8);

LAB57:    memset(t171, 0, 8);
    t172 = (t139 + 4);
    t173 = *((unsigned int *)t172);
    t174 = (~(t173));
    t175 = *((unsigned int *)t139);
    t176 = (t175 & t174);
    t177 = (t176 & 1U);
    if (t177 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t172) != 0)
        goto LAB67;

LAB68:    t180 = *((unsigned int *)t96);
    t181 = *((unsigned int *)t171);
    t182 = (t180 | t181);
    *((unsigned int *)t179) = t182;
    t183 = (t96 + 4);
    t184 = (t171 + 4);
    t185 = (t179 + 4);
    t186 = *((unsigned int *)t183);
    t187 = *((unsigned int *)t184);
    t188 = (t186 | t187);
    *((unsigned int *)t185) = t188;
    t189 = *((unsigned int *)t185);
    t190 = (t189 != 0);
    if (t190 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB46;

LAB47:    *((unsigned int *)t109) = 1;
    goto LAB50;

LAB51:    *((unsigned int *)t118) = 1;
    goto LAB54;

LAB53:    t125 = (t118 + 4);
    *((unsigned int *)t118) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB54;

LAB55:    t130 = (t0 + 16912U);
    t131 = *((char **)t130);
    memset(t132, 0, 8);
    t130 = (t131 + 4);
    t133 = *((unsigned int *)t130);
    t134 = (~(t133));
    t135 = *((unsigned int *)t131);
    t136 = (t135 & t134);
    t137 = (t136 & 1U);
    if (t137 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t130) != 0)
        goto LAB60;

LAB61:    t140 = *((unsigned int *)t118);
    t141 = *((unsigned int *)t132);
    t142 = (t140 & t141);
    *((unsigned int *)t139) = t142;
    t143 = (t118 + 4);
    t144 = (t132 + 4);
    t145 = (t139 + 4);
    t146 = *((unsigned int *)t143);
    t147 = *((unsigned int *)t144);
    t148 = (t146 | t147);
    *((unsigned int *)t145) = t148;
    t149 = *((unsigned int *)t145);
    t150 = (t149 != 0);
    if (t150 == 1)
        goto LAB62;

LAB63:
LAB64:    goto LAB57;

LAB58:    *((unsigned int *)t132) = 1;
    goto LAB61;

LAB60:    t138 = (t132 + 4);
    *((unsigned int *)t132) = 1;
    *((unsigned int *)t138) = 1;
    goto LAB61;

LAB62:    t151 = *((unsigned int *)t139);
    t152 = *((unsigned int *)t145);
    *((unsigned int *)t139) = (t151 | t152);
    t153 = (t118 + 4);
    t154 = (t132 + 4);
    t155 = *((unsigned int *)t118);
    t156 = (~(t155));
    t157 = *((unsigned int *)t153);
    t158 = (~(t157));
    t159 = *((unsigned int *)t132);
    t160 = (~(t159));
    t161 = *((unsigned int *)t154);
    t162 = (~(t161));
    t163 = (t156 & t158);
    t164 = (t160 & t162);
    t165 = (~(t163));
    t166 = (~(t164));
    t167 = *((unsigned int *)t145);
    *((unsigned int *)t145) = (t167 & t165);
    t168 = *((unsigned int *)t145);
    *((unsigned int *)t145) = (t168 & t166);
    t169 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t169 & t165);
    t170 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t170 & t166);
    goto LAB64;

LAB65:    *((unsigned int *)t171) = 1;
    goto LAB68;

LAB67:    t178 = (t171 + 4);
    *((unsigned int *)t171) = 1;
    *((unsigned int *)t178) = 1;
    goto LAB68;

LAB69:    t191 = *((unsigned int *)t179);
    t192 = *((unsigned int *)t185);
    *((unsigned int *)t179) = (t191 | t192);
    t193 = (t96 + 4);
    t194 = (t171 + 4);
    t195 = *((unsigned int *)t193);
    t196 = (~(t195));
    t197 = *((unsigned int *)t96);
    t198 = (t197 & t196);
    t199 = *((unsigned int *)t194);
    t200 = (~(t199));
    t201 = *((unsigned int *)t171);
    t202 = (t201 & t200);
    t203 = (~(t198));
    t204 = (~(t202));
    t205 = *((unsigned int *)t185);
    *((unsigned int *)t185) = (t205 & t203);
    t206 = *((unsigned int *)t185);
    *((unsigned int *)t185) = (t206 & t204);
    goto LAB71;

LAB72:    *((unsigned int *)t207) = 1;
    goto LAB75;

LAB74:    t214 = (t207 + 4);
    *((unsigned int *)t207) = 1;
    *((unsigned int *)t214) = 1;
    goto LAB75;

LAB76:    t222 = (t0 + 25552U);
    t223 = *((char **)t222);
    memset(t221, 0, 8);
    t222 = (t221 + 4);
    t224 = (t223 + 4);
    t225 = *((unsigned int *)t223);
    t226 = (~(t225));
    *((unsigned int *)t221) = t226;
    *((unsigned int *)t222) = 0;
    if (*((unsigned int *)t224) != 0)
        goto LAB80;

LAB79:    t231 = *((unsigned int *)t221);
    *((unsigned int *)t221) = (t231 & 3U);
    t232 = *((unsigned int *)t222);
    *((unsigned int *)t222) = (t232 & 3U);
    t233 = (t0 + 17392U);
    t234 = *((char **)t233);
    t236 = *((unsigned int *)t221);
    t237 = *((unsigned int *)t234);
    t238 = (t236 & t237);
    *((unsigned int *)t235) = t238;
    t233 = (t221 + 4);
    t239 = (t234 + 4);
    t240 = (t235 + 4);
    t241 = *((unsigned int *)t233);
    t242 = *((unsigned int *)t239);
    t243 = (t241 | t242);
    *((unsigned int *)t240) = t243;
    t244 = *((unsigned int *)t240);
    t245 = (t244 != 0);
    if (t245 == 1)
        goto LAB81;

LAB82:
LAB83:    memset(t220, 0, 8);
    t266 = (t235 + 4);
    t267 = *((unsigned int *)t266);
    t268 = (~(t267));
    t269 = *((unsigned int *)t235);
    t270 = (t269 & t268);
    t271 = (t270 & 3U);
    if (t271 != 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t266) != 0)
        goto LAB86;

LAB87:    memset(t273, 0, 8);
    t274 = (t220 + 4);
    t275 = *((unsigned int *)t274);
    t276 = (~(t275));
    t277 = *((unsigned int *)t220);
    t278 = (t277 & t276);
    t279 = (t278 & 1U);
    if (t279 != 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t274) != 0)
        goto LAB90;

LAB91:    t282 = *((unsigned int *)t207);
    t283 = *((unsigned int *)t273);
    t284 = (t282 | t283);
    *((unsigned int *)t281) = t284;
    t285 = (t207 + 4);
    t286 = (t273 + 4);
    t287 = (t281 + 4);
    t288 = *((unsigned int *)t285);
    t289 = *((unsigned int *)t286);
    t290 = (t288 | t289);
    *((unsigned int *)t287) = t290;
    t291 = *((unsigned int *)t287);
    t292 = (t291 != 0);
    if (t292 == 1)
        goto LAB92;

LAB93:
LAB94:    goto LAB78;

LAB80:    t227 = *((unsigned int *)t221);
    t228 = *((unsigned int *)t224);
    *((unsigned int *)t221) = (t227 | t228);
    t229 = *((unsigned int *)t222);
    t230 = *((unsigned int *)t224);
    *((unsigned int *)t222) = (t229 | t230);
    goto LAB79;

LAB81:    t246 = *((unsigned int *)t235);
    t247 = *((unsigned int *)t240);
    *((unsigned int *)t235) = (t246 | t247);
    t248 = (t221 + 4);
    t249 = (t234 + 4);
    t250 = *((unsigned int *)t221);
    t251 = (~(t250));
    t252 = *((unsigned int *)t248);
    t253 = (~(t252));
    t254 = *((unsigned int *)t234);
    t255 = (~(t254));
    t256 = *((unsigned int *)t249);
    t257 = (~(t256));
    t258 = (t251 & t253);
    t259 = (t255 & t257);
    t260 = (~(t258));
    t261 = (~(t259));
    t262 = *((unsigned int *)t240);
    *((unsigned int *)t240) = (t262 & t260);
    t263 = *((unsigned int *)t240);
    *((unsigned int *)t240) = (t263 & t261);
    t264 = *((unsigned int *)t235);
    *((unsigned int *)t235) = (t264 & t260);
    t265 = *((unsigned int *)t235);
    *((unsigned int *)t235) = (t265 & t261);
    goto LAB83;

LAB84:    *((unsigned int *)t220) = 1;
    goto LAB87;

LAB86:    t272 = (t220 + 4);
    *((unsigned int *)t220) = 1;
    *((unsigned int *)t272) = 1;
    goto LAB87;

LAB88:    *((unsigned int *)t273) = 1;
    goto LAB91;

LAB90:    t280 = (t273 + 4);
    *((unsigned int *)t273) = 1;
    *((unsigned int *)t280) = 1;
    goto LAB91;

LAB92:    t293 = *((unsigned int *)t281);
    t294 = *((unsigned int *)t287);
    *((unsigned int *)t281) = (t293 | t294);
    t295 = (t207 + 4);
    t296 = (t273 + 4);
    t297 = *((unsigned int *)t295);
    t298 = (~(t297));
    t299 = *((unsigned int *)t207);
    t300 = (t299 & t298);
    t301 = *((unsigned int *)t296);
    t302 = (~(t301));
    t303 = *((unsigned int *)t273);
    t304 = (t303 & t302);
    t305 = (~(t300));
    t306 = (~(t304));
    t307 = *((unsigned int *)t287);
    *((unsigned int *)t287) = (t307 & t305);
    t308 = *((unsigned int *)t287);
    *((unsigned int *)t287) = (t308 & t306);
    goto LAB94;

LAB95:    *((unsigned int *)t309) = 1;
    goto LAB98;

LAB97:    t316 = (t309 + 4);
    *((unsigned int *)t309) = 1;
    *((unsigned int *)t316) = 1;
    goto LAB98;

LAB99:    t329 = *((unsigned int *)t317);
    t330 = *((unsigned int *)t323);
    *((unsigned int *)t317) = (t329 | t330);
    t331 = (t23 + 4);
    t332 = (t309 + 4);
    t333 = *((unsigned int *)t23);
    t334 = (~(t333));
    t335 = *((unsigned int *)t331);
    t336 = (~(t335));
    t337 = *((unsigned int *)t309);
    t338 = (~(t337));
    t339 = *((unsigned int *)t332);
    t340 = (~(t339));
    t341 = (t334 & t336);
    t342 = (t338 & t340);
    t343 = (~(t341));
    t344 = (~(t342));
    t345 = *((unsigned int *)t323);
    *((unsigned int *)t323) = (t345 & t343);
    t346 = *((unsigned int *)t323);
    *((unsigned int *)t323) = (t346 & t344);
    t347 = *((unsigned int *)t317);
    *((unsigned int *)t317) = (t347 & t343);
    t348 = *((unsigned int *)t317);
    *((unsigned int *)t317) = (t348 & t344);
    goto LAB101;

LAB102:    xsi_set_current_line(439, ng7);

LAB105:    xsi_set_current_line(440, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t356 = (t0 + 35552);
    t357 = (t356 + 56U);
    t358 = *((char **)t357);
    t359 = *((double *)t358);
    t360 = (t355 - t359);
    t361 = (t0 + 2312);
    t362 = *((char **)t361);
    t363 = *((double *)t362);
    t364 = (t360 < t363);
    *((unsigned int *)t365) = t364;
    t361 = (t365 + 4);
    *((unsigned int *)t361) = 0U;
    t366 = (t365 + 4);
    t367 = *((unsigned int *)t366);
    t368 = (~(t367));
    t369 = *((unsigned int *)t365);
    t370 = (t369 & t368);
    t371 = (t370 != 0);
    if (t371 > 0)
        goto LAB106;

LAB107:
LAB108:    xsi_set_current_line(442, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 36352);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t359 = *((double *)t4);
    t360 = (t355 - t359);
    t5 = (t0 + 3264);
    t6 = *((char **)t5);
    t363 = *((double *)t6);
    t8 = (t360 < t363);
    *((unsigned int *)t15) = t8;
    t5 = (t15 + 4);
    *((unsigned int *)t5) = 0U;
    t7 = (t15 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t15);
    t12 = (t11 & t10);
    t16 = (t12 != 0);
    if (t16 > 0)
        goto LAB109;

LAB110:
LAB111:    xsi_set_current_line(444, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 36832);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t359 = *((double *)t4);
    t360 = (t355 - t359);
    t5 = (t0 + 1768);
    t6 = *((char **)t5);
    t363 = *((double *)t6);
    t8 = (t360 < t363);
    *((unsigned int *)t15) = t8;
    t5 = (t15 + 4);
    *((unsigned int *)t5) = 0U;
    t7 = (t15 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t15);
    t12 = (t11 & t10);
    t16 = (t12 != 0);
    if (t16 > 0)
        goto LAB112;

LAB113:
LAB114:    xsi_set_current_line(446, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 36512);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t359 = *((double *)t4);
    t360 = (t355 - t359);
    t5 = (t0 + 3536);
    t6 = *((char **)t5);
    t363 = *((double *)t6);
    t8 = (t360 < t363);
    *((unsigned int *)t15) = t8;
    t5 = (t15 + 4);
    *((unsigned int *)t5) = 0U;
    t7 = (t15 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t15);
    t12 = (t11 & t10);
    t16 = (t12 != 0);
    if (t16 > 0)
        goto LAB115;

LAB116:
LAB117:    xsi_set_current_line(448, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 37152);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t359 = *((double *)t4);
    t360 = (t355 - t359);
    t5 = (t0 + 1632);
    t6 = *((char **)t5);
    t363 = *((double *)t6);
    t8 = (t360 < t363);
    *((unsigned int *)t15) = t8;
    t5 = (t15 + 4);
    *((unsigned int *)t5) = 0U;
    t7 = (t15 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t15);
    t12 = (t11 & t10);
    t16 = (t12 != 0);
    if (t16 > 0)
        goto LAB118;

LAB119:
LAB120:    xsi_set_current_line(450, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 37472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t359 = *((double *)t4);
    t360 = (t355 - t359);
    t5 = (t0 + 1632);
    t6 = *((char **)t5);
    t363 = *((double *)t6);
    t8 = (t360 < t363);
    *((unsigned int *)t15) = t8;
    t5 = (t15 + 4);
    *((unsigned int *)t5) = 0U;
    t7 = (t15 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t15);
    t12 = (t11 & t10);
    t16 = (t12 != 0);
    if (t16 > 0)
        goto LAB121;

LAB122:
LAB123:    xsi_set_current_line(452, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 37792);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t359 = *((double *)t4);
    t360 = (t355 - t359);
    t5 = (t0 + 4624);
    t6 = *((char **)t5);
    t363 = *((double *)t6);
    t8 = (t360 < t363);
    *((unsigned int *)t15) = t8;
    t5 = (t15 + 4);
    *((unsigned int *)t5) = 0U;
    t7 = (t15 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t15);
    t12 = (t11 & t10);
    t16 = (t12 != 0);
    if (t16 > 0)
        goto LAB124;

LAB125:
LAB126:    xsi_set_current_line(454, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 37472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t359 = *((double *)t4);
    t360 = (t355 - t359);
    t5 = (t0 + 3400);
    t6 = *((char **)t5);
    t363 = *((double *)t6);
    t8 = (t360 < t363);
    *((unsigned int *)t15) = t8;
    t5 = (t15 + 4);
    *((unsigned int *)t5) = 0U;
    memset(t23, 0, 8);
    t7 = (t15 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t15);
    t12 = (t11 & t10);
    t16 = (t12 & 1U);
    if (t16 != 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t7) != 0)
        goto LAB129;

LAB130:    t14 = (t23 + 4);
    t17 = *((unsigned int *)t23);
    t18 = (!(t17));
    t19 = *((unsigned int *)t14);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB131;

LAB132:    memcpy(t56, t23, 8);

LAB133:    t69 = (t56 + 4);
    t61 = *((unsigned int *)t69);
    t62 = (~(t61));
    t65 = *((unsigned int *)t56);
    t66 = (t65 & t62);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB141;

LAB142:
LAB143:    xsi_set_current_line(457, ng7);
    t2 = (t0 + 27872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng125)));
    memset(t15, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t16 = (t11 ^ t12);
    t17 = (t10 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB147;

LAB144:    if (t20 != 0)
        goto LAB146;

LAB145:    *((unsigned int *)t15) = 1;

LAB147:    memset(t23, 0, 8);
    t14 = (t15 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    t26 = *((unsigned int *)t15);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB148;

LAB149:    if (*((unsigned int *)t14) != 0)
        goto LAB150;

LAB151:    t30 = (t23 + 4);
    t31 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB152;

LAB153:    memcpy(t56, t23, 8);

LAB154:    t97 = (t56 + 4);
    t95 = *((unsigned int *)t97);
    t98 = (~(t95));
    t99 = *((unsigned int *)t56);
    t100 = (t99 & t98);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB166;

LAB167:    xsi_set_current_line(467, ng7);
    t2 = (t0 + 27872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng125)));
    memset(t15, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t16 = (t11 ^ t12);
    t17 = (t10 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB195;

LAB192:    if (t20 != 0)
        goto LAB194;

LAB193:    *((unsigned int *)t15) = 1;

LAB195:    memset(t23, 0, 8);
    t14 = (t15 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    t26 = *((unsigned int *)t15);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB196;

LAB197:    if (*((unsigned int *)t14) != 0)
        goto LAB198;

LAB199:    t30 = (t23 + 4);
    t31 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB200;

LAB201:    memcpy(t56, t23, 8);

LAB202:    t97 = (t56 + 4);
    t95 = *((unsigned int *)t97);
    t98 = (~(t95));
    t99 = *((unsigned int *)t56);
    t100 = (t99 & t98);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB214;

LAB215:    xsi_set_current_line(472, ng7);

LAB227:    xsi_set_current_line(473, ng7);
    t2 = (t0 + 27872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 25552U);
    t6 = *((char **)t5);
    t5 = (t0 + 25712U);
    t7 = *((char **)t5);
    t5 = (t0 + 51608);
    t13 = (t0 + 14024);
    t14 = xsi_create_subprogram_invocation(t5, 0, t0, t13, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t13, t14);
    t29 = (t0 + 40192);
    xsi_vlogvar_assign_value(t29, t4, 0, 0, 23);
    t30 = (t0 + 40352);
    xsi_vlogvar_assign_value(t30, t6, 0, 0, 2);
    t34 = (t0 + 40512);
    xsi_vlogvar_assign_value(t34, t7, 0, 0, 16);

LAB230:    t35 = (t0 + 51704);
    t42 = *((char **)t35);
    t43 = (t42 + 80U);
    t48 = *((char **)t43);
    t49 = (t48 + 272U);
    t55 = *((char **)t49);
    t57 = (t55 + 0U);
    t63 = *((char **)t57);
    t88 = ((int  (*)(char *, char *))t63)(t0, t42);

LAB232:    if (t88 != 0)
        goto LAB233;

LAB228:    t42 = (t0 + 14024);
    xsi_vlog_subprogram_popinvocation(t42);

LAB229:    t68 = (t0 + 51704);
    t69 = *((char **)t68);
    t68 = (t0 + 14024);
    t70 = (t0 + 51608);
    t78 = 0;
    xsi_delete_subprogram_invocation(t68, t69, t0, t70, t78);
    xsi_set_current_line(474, ng7);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 26912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(475, ng7);
    t2 = ((char*)((ng17)));
    t3 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t2);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB234;

LAB235:
LAB236:
LAB216:
LAB168:    xsi_set_current_line(478, ng7);
    t2 = (t0 + 8568);
    t3 = *((char **)t2);
    t2 = (t0 + 27392);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(479, ng7);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 27552);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(480, ng7);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 28352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 2000LL);
    xsi_set_current_line(481, ng7);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 28192);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 5000LL);
    goto LAB104;

LAB106:    xsi_set_current_line(441, ng7);
    t372 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t373) = t372;
    t374 = (t0 + 35552);
    t375 = (t374 + 56U);
    t376 = *((char **)t375);
    t377 = *((double *)t376);
    t378 = (t0 + 2312);
    t379 = *((char **)t378);
    t380 = *((double *)t379);
    t381 = (t377 + t380);
    t382 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t383 = (t381 - t382);
    *((double *)t384) = t383;
    xsi_vlogfile_write(1, 0, 0, ng117, 3, t0, (char)114, t373, 64, (char)114, t384, 64);
    goto LAB108;

LAB109:    xsi_set_current_line(443, ng7);
    t372 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t23) = t372;
    t13 = (t0 + 36352);
    t14 = (t13 + 56U);
    t29 = *((char **)t14);
    t377 = *((double *)t29);
    t30 = (t0 + 3264);
    t34 = *((char **)t30);
    t380 = *((double *)t34);
    t381 = (t377 + t380);
    t382 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t383 = (t381 - t382);
    *((double *)t36) = t383;
    xsi_vlogfile_write(1, 0, 0, ng118, 3, t0, (char)114, t23, 64, (char)114, t36, 64);
    goto LAB111;

LAB112:    xsi_set_current_line(445, ng7);
    t372 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t23) = t372;
    t13 = (t0 + 36832);
    t14 = (t13 + 56U);
    t29 = *((char **)t14);
    t377 = *((double *)t29);
    t30 = (t0 + 1768);
    t34 = *((char **)t30);
    t380 = *((double *)t34);
    t381 = (t377 + t380);
    t382 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t383 = (t381 - t382);
    *((double *)t36) = t383;
    xsi_vlogfile_write(1, 0, 0, ng119, 3, t0, (char)114, t23, 64, (char)114, t36, 64);
    goto LAB114;

LAB115:    xsi_set_current_line(447, ng7);
    t372 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t23) = t372;
    t13 = (t0 + 36512);
    t14 = (t13 + 56U);
    t29 = *((char **)t14);
    t377 = *((double *)t29);
    t30 = (t0 + 3536);
    t34 = *((char **)t30);
    t380 = *((double *)t34);
    t381 = (t377 + t380);
    t382 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t383 = (t381 - t382);
    *((double *)t36) = t383;
    xsi_vlogfile_write(1, 0, 0, ng120, 3, t0, (char)114, t23, 64, (char)114, t36, 64);
    goto LAB117;

LAB118:    xsi_set_current_line(449, ng7);
    t372 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t23) = t372;
    t13 = (t0 + 37152);
    t14 = (t13 + 56U);
    t29 = *((char **)t14);
    t377 = *((double *)t29);
    t30 = (t0 + 1632);
    t34 = *((char **)t30);
    t380 = *((double *)t34);
    t381 = (t377 + t380);
    t382 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t383 = (t381 - t382);
    *((double *)t36) = t383;
    xsi_vlogfile_write(1, 0, 0, ng121, 3, t0, (char)114, t23, 64, (char)114, t36, 64);
    goto LAB120;

LAB121:    xsi_set_current_line(451, ng7);
    t372 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t23) = t372;
    t13 = (t0 + 37472);
    t14 = (t13 + 56U);
    t29 = *((char **)t14);
    t377 = *((double *)t29);
    t30 = (t0 + 1632);
    t34 = *((char **)t30);
    t380 = *((double *)t34);
    t381 = (t377 + t380);
    t382 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t383 = (t381 - t382);
    *((double *)t36) = t383;
    xsi_vlogfile_write(1, 0, 0, ng122, 3, t0, (char)114, t23, 64, (char)114, t36, 64);
    goto LAB123;

LAB124:    xsi_set_current_line(453, ng7);
    t372 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t23) = t372;
    t13 = (t0 + 37792);
    t14 = (t13 + 56U);
    t29 = *((char **)t14);
    t377 = *((double *)t29);
    t30 = (t0 + 4624);
    t34 = *((char **)t30);
    t380 = *((double *)t34);
    t381 = (t377 + t380);
    t382 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t383 = (t381 - t382);
    *((double *)t36) = t383;
    xsi_vlogfile_write(1, 0, 0, ng123, 3, t0, (char)114, t23, 64, (char)114, t36, 64);
    goto LAB126;

LAB127:    *((unsigned int *)t23) = 1;
    goto LAB130;

LAB129:    t13 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB130;

LAB131:    t372 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t29 = (t0 + 35552);
    t30 = (t29 + 56U);
    t34 = *((char **)t30);
    t377 = *((double *)t34);
    t380 = (t372 - t377);
    t35 = (t0 + 3400);
    t42 = *((char **)t35);
    t381 = *((double *)t42);
    t21 = (t380 < t381);
    *((unsigned int *)t36) = t21;
    t35 = (t36 + 4);
    *((unsigned int *)t35) = 0U;
    memset(t47, 0, 8);
    t43 = (t36 + 4);
    t22 = *((unsigned int *)t43);
    t24 = (~(t22));
    t25 = *((unsigned int *)t36);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB134;

LAB135:    if (*((unsigned int *)t43) != 0)
        goto LAB136;

LAB137:    t28 = *((unsigned int *)t23);
    t31 = *((unsigned int *)t47);
    t32 = (t28 | t31);
    *((unsigned int *)t56) = t32;
    t49 = (t23 + 4);
    t55 = (t47 + 4);
    t57 = (t56 + 4);
    t33 = *((unsigned int *)t49);
    t37 = *((unsigned int *)t55);
    t38 = (t33 | t37);
    *((unsigned int *)t57) = t38;
    t39 = *((unsigned int *)t57);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB138;

LAB139:
LAB140:    goto LAB133;

LAB134:    *((unsigned int *)t47) = 1;
    goto LAB137;

LAB136:    t48 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB137;

LAB138:    t41 = *((unsigned int *)t56);
    t44 = *((unsigned int *)t57);
    *((unsigned int *)t56) = (t41 | t44);
    t63 = (t23 + 4);
    t68 = (t47 + 4);
    t45 = *((unsigned int *)t63);
    t46 = (~(t45));
    t50 = *((unsigned int *)t23);
    t88 = (t50 & t46);
    t51 = *((unsigned int *)t68);
    t52 = (~(t51));
    t53 = *((unsigned int *)t47);
    t89 = (t53 & t52);
    t54 = (~(t88));
    t58 = (~(t89));
    t59 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t59 & t54);
    t60 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t60 & t58);
    goto LAB140;

LAB141:    xsi_set_current_line(455, ng7);
    t382 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t64) = t382;
    xsi_vlogfile_write(1, 0, 0, ng124, 2, t0, (char)114, t64, 64);
    goto LAB143;

LAB146:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB147;

LAB148:    *((unsigned int *)t23) = 1;
    goto LAB151;

LAB150:    t29 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB151;

LAB152:    t34 = (t0 + 26912);
    t35 = (t34 + 56U);
    t42 = *((char **)t35);
    t43 = ((char*)((ng82)));
    memset(t36, 0, 8);
    t48 = (t42 + 4);
    t49 = (t43 + 4);
    t37 = *((unsigned int *)t42);
    t38 = *((unsigned int *)t43);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t48);
    t41 = *((unsigned int *)t49);
    t44 = (t40 ^ t41);
    t45 = (t39 | t44);
    t46 = *((unsigned int *)t48);
    t50 = *((unsigned int *)t49);
    t51 = (t46 | t50);
    t52 = (~(t51));
    t53 = (t45 & t52);
    if (t53 != 0)
        goto LAB158;

LAB155:    if (t51 != 0)
        goto LAB157;

LAB156:    *((unsigned int *)t36) = 1;

LAB158:    memset(t47, 0, 8);
    t57 = (t36 + 4);
    t54 = *((unsigned int *)t57);
    t58 = (~(t54));
    t59 = *((unsigned int *)t36);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB159;

LAB160:    if (*((unsigned int *)t57) != 0)
        goto LAB161;

LAB162:    t62 = *((unsigned int *)t23);
    t65 = *((unsigned int *)t47);
    t66 = (t62 & t65);
    *((unsigned int *)t56) = t66;
    t68 = (t23 + 4);
    t69 = (t47 + 4);
    t70 = (t56 + 4);
    t67 = *((unsigned int *)t68);
    t71 = *((unsigned int *)t69);
    t72 = (t67 | t71);
    *((unsigned int *)t70) = t72;
    t73 = *((unsigned int *)t70);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB163;

LAB164:
LAB165:    goto LAB154;

LAB157:    t55 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB158;

LAB159:    *((unsigned int *)t47) = 1;
    goto LAB162;

LAB161:    t63 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB162;

LAB163:    t75 = *((unsigned int *)t56);
    t76 = *((unsigned int *)t70);
    *((unsigned int *)t56) = (t75 | t76);
    t78 = (t23 + 4);
    t79 = (t47 + 4);
    t77 = *((unsigned int *)t23);
    t80 = (~(t77));
    t81 = *((unsigned int *)t78);
    t82 = (~(t81));
    t83 = *((unsigned int *)t47);
    t84 = (~(t83));
    t85 = *((unsigned int *)t79);
    t86 = (~(t85));
    t88 = (t80 & t82);
    t89 = (t84 & t86);
    t87 = (~(t88));
    t90 = (~(t89));
    t91 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t91 & t87);
    t92 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t92 & t90);
    t93 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t93 & t87);
    t94 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t94 & t90);
    goto LAB165;

LAB166:    xsi_set_current_line(457, ng7);

LAB169:    xsi_set_current_line(458, ng7);
    t103 = (t0 + 25712U);
    t104 = *((char **)t103);
    memset(t64, 0, 8);
    t103 = (t64 + 4);
    t110 = (t104 + 4);
    t102 = *((unsigned int *)t104);
    t105 = (t102 >> 0);
    *((unsigned int *)t64) = t105;
    t106 = *((unsigned int *)t110);
    t107 = (t106 >> 0);
    *((unsigned int *)t103) = t107;
    t108 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t108 & 3U);
    t112 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t112 & 3U);

LAB170:    t111 = ((char*)((ng6)));
    t117 = ((char*)((ng2)));
    t113 = *((unsigned int *)t111);
    t114 = *((unsigned int *)t117);
    t115 = (t113 & t114);
    *((unsigned int *)t96) = t115;
    t119 = (t111 + 4);
    t125 = (t117 + 4);
    t126 = (t96 + 4);
    t116 = *((unsigned int *)t119);
    t120 = *((unsigned int *)t125);
    t121 = (t116 | t120);
    *((unsigned int *)t126) = t121;
    t122 = *((unsigned int *)t126);
    t123 = (t122 != 0);
    if (t123 == 1)
        goto LAB180;

LAB181:
LAB182:    t198 = xsi_vlog_unsigned_case_compare(t64, 2, t96, 2);
    if (t198 == 1)
        goto LAB171;

LAB172:    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng2)));
    t8 = *((unsigned int *)t2);
    t9 = *((unsigned int *)t3);
    t10 = (t8 & t9);
    *((unsigned int *)t15) = t10;
    t4 = (t2 + 4);
    t5 = (t3 + 4);
    t6 = (t15 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t16 = (t11 | t12);
    *((unsigned int *)t6) = t16;
    t17 = *((unsigned int *)t6);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB183;

LAB184:
LAB185:    t163 = xsi_vlog_unsigned_case_compare(t64, 2, t15, 2);
    if (t163 == 1)
        goto LAB173;

LAB174:    t2 = ((char*)((ng17)));
    t3 = ((char*)((ng2)));
    t8 = *((unsigned int *)t2);
    t9 = *((unsigned int *)t3);
    t10 = (t8 & t9);
    *((unsigned int *)t15) = t10;
    t4 = (t2 + 4);
    t5 = (t3 + 4);
    t6 = (t15 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t16 = (t11 | t12);
    *((unsigned int *)t6) = t16;
    t17 = *((unsigned int *)t6);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB186;

LAB187:
LAB188:    t163 = xsi_vlog_unsigned_case_compare(t64, 2, t15, 2);
    if (t163 == 1)
        goto LAB175;

LAB176:
LAB178:
LAB177:    xsi_set_current_line(462, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t15) = t355;
    t2 = (t0 + 25712U);
    t3 = *((char **)t2);
    memset(t23, 0, 8);
    t2 = (t23 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t23) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t12 & 3U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 3U);
    xsi_vlogfile_write(1, 0, 0, ng126, 3, t0, (char)114, t15, 64, (char)118, t23, 2);

LAB179:    xsi_set_current_line(464, ng7);
    t2 = ((char*)((ng17)));
    t3 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t2);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB189;

LAB190:
LAB191:    xsi_set_current_line(466, ng7);
    t2 = (t0 + 26912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t4, 2, t5, 32);
    t6 = (t0 + 26912);
    xsi_vlogvar_wait_assign_value(t6, t15, 0, 0, 2, 0LL);
    goto LAB168;

LAB171:    xsi_set_current_line(459, ng7);
    t138 = ((char*)((ng6)));
    t143 = (t0 + 27072);
    xsi_vlogvar_wait_assign_value(t143, t138, 0, 0, 2, 0LL);
    goto LAB179;

LAB173:    xsi_set_current_line(460, ng7);
    t14 = ((char*)((ng17)));
    t29 = (t0 + 27072);
    xsi_vlogvar_wait_assign_value(t29, t14, 0, 0, 2, 0LL);
    goto LAB179;

LAB175:    xsi_set_current_line(461, ng7);
    t14 = ((char*)((ng1)));
    t29 = (t0 + 27072);
    xsi_vlogvar_wait_assign_value(t29, t14, 0, 0, 2, 0LL);
    goto LAB179;

LAB180:    t124 = *((unsigned int *)t96);
    t127 = *((unsigned int *)t126);
    *((unsigned int *)t96) = (t124 | t127);
    t130 = (t111 + 4);
    t131 = (t117 + 4);
    t128 = *((unsigned int *)t111);
    t129 = (~(t128));
    t133 = *((unsigned int *)t130);
    t134 = (~(t133));
    t135 = *((unsigned int *)t117);
    t136 = (~(t135));
    t137 = *((unsigned int *)t131);
    t140 = (~(t137));
    t163 = (t129 & t134);
    t164 = (t136 & t140);
    t141 = (~(t163));
    t142 = (~(t164));
    t146 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t146 & t141);
    t147 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t147 & t142);
    t148 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t148 & t141);
    t149 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t149 & t142);
    goto LAB182;

LAB183:    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t6);
    *((unsigned int *)t15) = (t19 | t20);
    t7 = (t2 + 4);
    t13 = (t3 + 4);
    t21 = *((unsigned int *)t2);
    t22 = (~(t21));
    t24 = *((unsigned int *)t7);
    t25 = (~(t24));
    t26 = *((unsigned int *)t3);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t31 = (~(t28));
    t88 = (t22 & t25);
    t89 = (t27 & t31);
    t32 = (~(t88));
    t33 = (~(t89));
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t32);
    t38 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t38 & t33);
    t39 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t39 & t32);
    t40 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t40 & t33);
    goto LAB185;

LAB186:    t19 = *((unsigned int *)t15);
    t20 = *((unsigned int *)t6);
    *((unsigned int *)t15) = (t19 | t20);
    t7 = (t2 + 4);
    t13 = (t3 + 4);
    t21 = *((unsigned int *)t2);
    t22 = (~(t21));
    t24 = *((unsigned int *)t7);
    t25 = (~(t24));
    t26 = *((unsigned int *)t3);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t31 = (~(t28));
    t88 = (t22 & t25);
    t89 = (t27 & t31);
    t32 = (~(t88));
    t33 = (~(t89));
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t32);
    t38 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t38 & t33);
    t39 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t39 & t32);
    t40 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t40 & t33);
    goto LAB188;

LAB189:    xsi_set_current_line(465, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t15) = t355;
    t4 = (t0 + 26912);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 25712U);
    t13 = *((char **)t7);
    memset(t23, 0, 8);
    t7 = (t23 + 4);
    t14 = (t13 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (t16 >> 0);
    *((unsigned int *)t23) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 0);
    *((unsigned int *)t7) = t19;
    t20 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t20 & 3U);
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t21 & 3U);
    xsi_vlogfile_write(1, 0, 0, ng127, 4, t0, (char)114, t15, 64, (char)118, t6, 2, (char)118, t23, 2);
    goto LAB191;

LAB194:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB195;

LAB196:    *((unsigned int *)t23) = 1;
    goto LAB199;

LAB198:    t29 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB199;

LAB200:    t34 = (t0 + 26912);
    t35 = (t34 + 56U);
    t42 = *((char **)t35);
    t43 = ((char*)((ng84)));
    memset(t36, 0, 8);
    t48 = (t42 + 4);
    t49 = (t43 + 4);
    t37 = *((unsigned int *)t42);
    t38 = *((unsigned int *)t43);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t48);
    t41 = *((unsigned int *)t49);
    t44 = (t40 ^ t41);
    t45 = (t39 | t44);
    t46 = *((unsigned int *)t48);
    t50 = *((unsigned int *)t49);
    t51 = (t46 | t50);
    t52 = (~(t51));
    t53 = (t45 & t52);
    if (t53 != 0)
        goto LAB206;

LAB203:    if (t51 != 0)
        goto LAB205;

LAB204:    *((unsigned int *)t36) = 1;

LAB206:    memset(t47, 0, 8);
    t57 = (t36 + 4);
    t54 = *((unsigned int *)t57);
    t58 = (~(t54));
    t59 = *((unsigned int *)t36);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB207;

LAB208:    if (*((unsigned int *)t57) != 0)
        goto LAB209;

LAB210:    t62 = *((unsigned int *)t23);
    t65 = *((unsigned int *)t47);
    t66 = (t62 & t65);
    *((unsigned int *)t56) = t66;
    t68 = (t23 + 4);
    t69 = (t47 + 4);
    t70 = (t56 + 4);
    t67 = *((unsigned int *)t68);
    t71 = *((unsigned int *)t69);
    t72 = (t67 | t71);
    *((unsigned int *)t70) = t72;
    t73 = *((unsigned int *)t70);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB211;

LAB212:
LAB213:    goto LAB202;

LAB205:    t55 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB206;

LAB207:    *((unsigned int *)t47) = 1;
    goto LAB210;

LAB209:    t63 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB210;

LAB211:    t75 = *((unsigned int *)t56);
    t76 = *((unsigned int *)t70);
    *((unsigned int *)t56) = (t75 | t76);
    t78 = (t23 + 4);
    t79 = (t47 + 4);
    t77 = *((unsigned int *)t23);
    t80 = (~(t77));
    t81 = *((unsigned int *)t78);
    t82 = (~(t81));
    t83 = *((unsigned int *)t47);
    t84 = (~(t83));
    t85 = *((unsigned int *)t79);
    t86 = (~(t85));
    t88 = (t80 & t82);
    t89 = (t84 & t86);
    t87 = (~(t88));
    t90 = (~(t89));
    t91 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t91 & t87);
    t92 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t92 & t90);
    t93 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t93 & t87);
    t94 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t94 & t90);
    goto LAB213;

LAB214:    xsi_set_current_line(467, ng7);

LAB217:    xsi_set_current_line(468, ng7);
    t103 = ((char*)((ng17)));
    t104 = (t103 + 4);
    t102 = *((unsigned int *)t104);
    t105 = (~(t102));
    t106 = *((unsigned int *)t103);
    t107 = (t106 & t105);
    t108 = (t107 != 0);
    if (t108 > 0)
        goto LAB218;

LAB219:
LAB220:    xsi_set_current_line(470, ng7);
    t2 = (t0 + 27072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 25712U);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t15) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t12 & 65535U);
    t16 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t16 & 65535U);
    t13 = ((char*)((ng17)));
    t14 = (t0 + 51608);
    t29 = (t0 + 14888);
    t30 = xsi_create_subprogram_invocation(t14, 0, t0, t29, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t29, t30);
    t34 = (t0 + 41472);
    xsi_vlogvar_assign_value(t34, t4, 0, 0, 2);
    t35 = (t0 + 41632);
    xsi_vlogvar_assign_value(t35, t15, 0, 0, 16);
    t42 = (t0 + 41792);
    xsi_vlogvar_assign_value(t42, t13, 0, 0, 1);

LAB223:    t43 = (t0 + 51704);
    t48 = *((char **)t43);
    t49 = (t48 + 80U);
    t55 = *((char **)t49);
    t57 = (t55 + 272U);
    t63 = *((char **)t57);
    t68 = (t63 + 0U);
    t69 = *((char **)t68);
    t88 = ((int  (*)(char *, char *))t69)(t0, t48);

LAB225:    if (t88 != 0)
        goto LAB226;

LAB221:    t48 = (t0 + 14888);
    xsi_vlog_subprogram_popinvocation(t48);

LAB222:    t70 = (t0 + 51704);
    t78 = *((char **)t70);
    t70 = (t0 + 14888);
    t79 = (t0 + 51608);
    t97 = 0;
    xsi_delete_subprogram_invocation(t70, t78, t0, t79, t97);
    xsi_set_current_line(471, ng7);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 26912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB216;

LAB218:    xsi_set_current_line(469, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t96) = t355;
    t110 = (t0 + 25712U);
    t111 = *((char **)t110);
    memset(t109, 0, 8);
    t110 = (t109 + 4);
    t117 = (t111 + 4);
    t112 = *((unsigned int *)t111);
    t113 = (t112 >> 0);
    *((unsigned int *)t109) = t113;
    t114 = *((unsigned int *)t117);
    t115 = (t114 >> 0);
    *((unsigned int *)t110) = t115;
    t116 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t116 & 65535U);
    t120 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t120 & 65535U);
    xsi_vlogfile_write(1, 0, 0, ng128, 3, t0, (char)114, t96, 64, (char)118, t109, 16);
    goto LAB220;

LAB224:;
LAB226:    t43 = (t0 + 51800U);
    *((char **)t43) = &&LAB223;
    goto LAB1;

LAB231:;
LAB233:    t35 = (t0 + 51800U);
    *((char **)t35) = &&LAB230;
    goto LAB1;

LAB234:    xsi_set_current_line(476, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t15) = t355;
    t4 = (t0 + 27872);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 25552U);
    t13 = *((char **)t7);
    t7 = (t0 + 25712U);
    t14 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng129, 5, t0, (char)114, t15, 64, (char)118, t6, 23, (char)118, t13, 2, (char)118, t14, 16);
    goto LAB236;

LAB239:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB240;

LAB241:    *((unsigned int *)t23) = 1;
    goto LAB244;

LAB243:    t29 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB244;

LAB245:    t34 = (t0 + 25072U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t34 = (t35 + 4);
    t37 = *((unsigned int *)t34);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB248;

LAB249:    if (*((unsigned int *)t34) != 0)
        goto LAB250;

LAB251:    t43 = (t36 + 4);
    t44 = *((unsigned int *)t36);
    t45 = *((unsigned int *)t43);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB252;

LAB253:    memcpy(t96, t36, 8);

LAB254:    memset(t109, 0, 8);
    t97 = (t96 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t96);
    t101 = (t100 & t99);
    t102 = (t101 & 1U);
    if (t102 != 0)
        goto LAB266;

LAB267:    if (*((unsigned int *)t97) != 0)
        goto LAB268;

LAB269:    t104 = (t109 + 4);
    t105 = *((unsigned int *)t109);
    t106 = (!(t105));
    t107 = *((unsigned int *)t104);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB270;

LAB271:    memcpy(t207, t109, 8);

LAB272:    memset(t220, 0, 8);
    t208 = (t207 + 4);
    t209 = *((unsigned int *)t208);
    t210 = (~(t209));
    t211 = *((unsigned int *)t207);
    t212 = (t211 & t210);
    t213 = (t212 & 1U);
    if (t213 != 0)
        goto LAB298;

LAB299:    if (*((unsigned int *)t208) != 0)
        goto LAB300;

LAB301:    t216 = *((unsigned int *)t23);
    t217 = *((unsigned int *)t220);
    t218 = (t216 & t217);
    *((unsigned int *)t221) = t218;
    t215 = (t23 + 4);
    t222 = (t220 + 4);
    t223 = (t221 + 4);
    t219 = *((unsigned int *)t215);
    t225 = *((unsigned int *)t222);
    t226 = (t219 | t225);
    *((unsigned int *)t223) = t226;
    t227 = *((unsigned int *)t223);
    t228 = (t227 != 0);
    if (t228 == 1)
        goto LAB302;

LAB303:
LAB304:    goto LAB247;

LAB248:    *((unsigned int *)t36) = 1;
    goto LAB251;

LAB250:    t42 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB251;

LAB252:    t48 = (t0 + 21552U);
    t49 = *((char **)t48);
    memset(t47, 0, 8);
    t48 = (t49 + 4);
    t50 = *((unsigned int *)t48);
    t51 = (~(t50));
    t52 = *((unsigned int *)t49);
    t53 = (t52 & t51);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB258;

LAB256:    if (*((unsigned int *)t48) == 0)
        goto LAB255;

LAB257:    t55 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t55) = 1;

LAB258:    memset(t56, 0, 8);
    t57 = (t47 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t47);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB259;

LAB260:    if (*((unsigned int *)t57) != 0)
        goto LAB261;

LAB262:    t65 = *((unsigned int *)t36);
    t66 = *((unsigned int *)t56);
    t67 = (t65 & t66);
    *((unsigned int *)t96) = t67;
    t68 = (t36 + 4);
    t69 = (t56 + 4);
    t70 = (t96 + 4);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB263;

LAB264:
LAB265:    goto LAB254;

LAB255:    *((unsigned int *)t47) = 1;
    goto LAB258;

LAB259:    *((unsigned int *)t56) = 1;
    goto LAB262;

LAB261:    t63 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB262;

LAB263:    t76 = *((unsigned int *)t96);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t96) = (t76 | t77);
    t78 = (t36 + 4);
    t79 = (t56 + 4);
    t80 = *((unsigned int *)t36);
    t81 = (~(t80));
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t56);
    t85 = (~(t84));
    t86 = *((unsigned int *)t79);
    t87 = (~(t86));
    t88 = (t81 & t83);
    t89 = (t85 & t87);
    t90 = (~(t88));
    t91 = (~(t89));
    t92 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t92 & t90);
    t93 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t93 & t91);
    t94 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t94 & t90);
    t95 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t95 & t91);
    goto LAB265;

LAB266:    *((unsigned int *)t109) = 1;
    goto LAB269;

LAB268:    t103 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB269;

LAB270:    t110 = (t0 + 25232U);
    t111 = *((char **)t110);
    memset(t118, 0, 8);
    t110 = (t111 + 4);
    t112 = *((unsigned int *)t110);
    t113 = (~(t112));
    t114 = *((unsigned int *)t111);
    t115 = (t114 & t113);
    t116 = (t115 & 1U);
    if (t116 != 0)
        goto LAB276;

LAB274:    if (*((unsigned int *)t110) == 0)
        goto LAB273;

LAB275:    t117 = (t118 + 4);
    *((unsigned int *)t118) = 1;
    *((unsigned int *)t117) = 1;

LAB276:    memset(t132, 0, 8);
    t119 = (t118 + 4);
    t120 = *((unsigned int *)t119);
    t121 = (~(t120));
    t122 = *((unsigned int *)t118);
    t123 = (t122 & t121);
    t124 = (t123 & 1U);
    if (t124 != 0)
        goto LAB277;

LAB278:    if (*((unsigned int *)t119) != 0)
        goto LAB279;

LAB280:    t126 = (t132 + 4);
    t127 = *((unsigned int *)t132);
    t128 = *((unsigned int *)t126);
    t129 = (t127 || t128);
    if (t129 > 0)
        goto LAB281;

LAB282:    memcpy(t171, t132, 8);

LAB283:    memset(t179, 0, 8);
    t172 = (t171 + 4);
    t173 = *((unsigned int *)t172);
    t174 = (~(t173));
    t175 = *((unsigned int *)t171);
    t176 = (t175 & t174);
    t177 = (t176 & 1U);
    if (t177 != 0)
        goto LAB291;

LAB292:    if (*((unsigned int *)t172) != 0)
        goto LAB293;

LAB294:    t180 = *((unsigned int *)t109);
    t181 = *((unsigned int *)t179);
    t182 = (t180 | t181);
    *((unsigned int *)t207) = t182;
    t183 = (t109 + 4);
    t184 = (t179 + 4);
    t185 = (t207 + 4);
    t186 = *((unsigned int *)t183);
    t187 = *((unsigned int *)t184);
    t188 = (t186 | t187);
    *((unsigned int *)t185) = t188;
    t189 = *((unsigned int *)t185);
    t190 = (t189 != 0);
    if (t190 == 1)
        goto LAB295;

LAB296:
LAB297:    goto LAB272;

LAB273:    *((unsigned int *)t118) = 1;
    goto LAB276;

LAB277:    *((unsigned int *)t132) = 1;
    goto LAB280;

LAB279:    t125 = (t132 + 4);
    *((unsigned int *)t132) = 1;
    *((unsigned int *)t125) = 1;
    goto LAB280;

LAB281:    t130 = (t0 + 16912U);
    t131 = *((char **)t130);
    memset(t139, 0, 8);
    t130 = (t131 + 4);
    t133 = *((unsigned int *)t130);
    t134 = (~(t133));
    t135 = *((unsigned int *)t131);
    t136 = (t135 & t134);
    t137 = (t136 & 1U);
    if (t137 != 0)
        goto LAB284;

LAB285:    if (*((unsigned int *)t130) != 0)
        goto LAB286;

LAB287:    t140 = *((unsigned int *)t132);
    t141 = *((unsigned int *)t139);
    t142 = (t140 & t141);
    *((unsigned int *)t171) = t142;
    t143 = (t132 + 4);
    t144 = (t139 + 4);
    t145 = (t171 + 4);
    t146 = *((unsigned int *)t143);
    t147 = *((unsigned int *)t144);
    t148 = (t146 | t147);
    *((unsigned int *)t145) = t148;
    t149 = *((unsigned int *)t145);
    t150 = (t149 != 0);
    if (t150 == 1)
        goto LAB288;

LAB289:
LAB290:    goto LAB283;

LAB284:    *((unsigned int *)t139) = 1;
    goto LAB287;

LAB286:    t138 = (t139 + 4);
    *((unsigned int *)t139) = 1;
    *((unsigned int *)t138) = 1;
    goto LAB287;

LAB288:    t151 = *((unsigned int *)t171);
    t152 = *((unsigned int *)t145);
    *((unsigned int *)t171) = (t151 | t152);
    t153 = (t132 + 4);
    t154 = (t139 + 4);
    t155 = *((unsigned int *)t132);
    t156 = (~(t155));
    t157 = *((unsigned int *)t153);
    t158 = (~(t157));
    t159 = *((unsigned int *)t139);
    t160 = (~(t159));
    t161 = *((unsigned int *)t154);
    t162 = (~(t161));
    t163 = (t156 & t158);
    t164 = (t160 & t162);
    t165 = (~(t163));
    t166 = (~(t164));
    t167 = *((unsigned int *)t145);
    *((unsigned int *)t145) = (t167 & t165);
    t168 = *((unsigned int *)t145);
    *((unsigned int *)t145) = (t168 & t166);
    t169 = *((unsigned int *)t171);
    *((unsigned int *)t171) = (t169 & t165);
    t170 = *((unsigned int *)t171);
    *((unsigned int *)t171) = (t170 & t166);
    goto LAB290;

LAB291:    *((unsigned int *)t179) = 1;
    goto LAB294;

LAB293:    t178 = (t179 + 4);
    *((unsigned int *)t179) = 1;
    *((unsigned int *)t178) = 1;
    goto LAB294;

LAB295:    t191 = *((unsigned int *)t207);
    t192 = *((unsigned int *)t185);
    *((unsigned int *)t207) = (t191 | t192);
    t193 = (t109 + 4);
    t194 = (t179 + 4);
    t195 = *((unsigned int *)t193);
    t196 = (~(t195));
    t197 = *((unsigned int *)t109);
    t198 = (t197 & t196);
    t199 = *((unsigned int *)t194);
    t200 = (~(t199));
    t201 = *((unsigned int *)t179);
    t202 = (t201 & t200);
    t203 = (~(t198));
    t204 = (~(t202));
    t205 = *((unsigned int *)t185);
    *((unsigned int *)t185) = (t205 & t203);
    t206 = *((unsigned int *)t185);
    *((unsigned int *)t185) = (t206 & t204);
    goto LAB297;

LAB298:    *((unsigned int *)t220) = 1;
    goto LAB301;

LAB300:    t214 = (t220 + 4);
    *((unsigned int *)t220) = 1;
    *((unsigned int *)t214) = 1;
    goto LAB301;

LAB302:    t229 = *((unsigned int *)t221);
    t230 = *((unsigned int *)t223);
    *((unsigned int *)t221) = (t229 | t230);
    t224 = (t23 + 4);
    t233 = (t220 + 4);
    t231 = *((unsigned int *)t23);
    t232 = (~(t231));
    t236 = *((unsigned int *)t224);
    t237 = (~(t236));
    t238 = *((unsigned int *)t220);
    t241 = (~(t238));
    t242 = *((unsigned int *)t233);
    t243 = (~(t242));
    t258 = (t232 & t237);
    t259 = (t241 & t243);
    t244 = (~(t258));
    t245 = (~(t259));
    t246 = *((unsigned int *)t223);
    *((unsigned int *)t223) = (t246 & t244);
    t247 = *((unsigned int *)t223);
    *((unsigned int *)t223) = (t247 & t245);
    t250 = *((unsigned int *)t221);
    *((unsigned int *)t221) = (t250 & t244);
    t251 = *((unsigned int *)t221);
    *((unsigned int *)t221) = (t251 & t245);
    goto LAB304;

LAB305:    xsi_set_current_line(485, ng7);

LAB308:    xsi_set_current_line(486, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t239 = (t0 + 35552);
    t240 = (t239 + 56U);
    t248 = *((char **)t240);
    t359 = *((double *)t248);
    t360 = (t355 - t359);
    t249 = (t0 + 2312);
    t266 = *((char **)t249);
    t363 = *((double *)t266);
    t257 = (t360 < t363);
    *((unsigned int *)t235) = t257;
    t249 = (t235 + 4);
    *((unsigned int *)t249) = 0U;
    t272 = (t235 + 4);
    t260 = *((unsigned int *)t272);
    t261 = (~(t260));
    t262 = *((unsigned int *)t235);
    t263 = (t262 & t261);
    t264 = (t263 != 0);
    if (t264 > 0)
        goto LAB309;

LAB310:
LAB311:    xsi_set_current_line(488, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 36352);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t359 = *((double *)t4);
    t360 = (t355 - t359);
    t5 = (t0 + 3264);
    t6 = *((char **)t5);
    t363 = *((double *)t6);
    t8 = (t360 < t363);
    *((unsigned int *)t15) = t8;
    t5 = (t15 + 4);
    *((unsigned int *)t5) = 0U;
    t7 = (t15 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t15);
    t12 = (t11 & t10);
    t16 = (t12 != 0);
    if (t16 > 0)
        goto LAB312;

LAB313:
LAB314:    xsi_set_current_line(490, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 36832);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t359 = *((double *)t4);
    t360 = (t355 - t359);
    t5 = (t0 + 1768);
    t6 = *((char **)t5);
    t363 = *((double *)t6);
    t8 = (t360 < t363);
    *((unsigned int *)t15) = t8;
    t5 = (t15 + 4);
    *((unsigned int *)t5) = 0U;
    t7 = (t15 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t15);
    t12 = (t11 & t10);
    t16 = (t12 != 0);
    if (t16 > 0)
        goto LAB315;

LAB316:
LAB317:    xsi_set_current_line(492, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 36512);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t359 = *((double *)t4);
    t360 = (t355 - t359);
    t5 = (t0 + 3536);
    t6 = *((char **)t5);
    t363 = *((double *)t6);
    t8 = (t360 < t363);
    *((unsigned int *)t15) = t8;
    t5 = (t15 + 4);
    *((unsigned int *)t5) = 0U;
    t7 = (t15 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t15);
    t12 = (t11 & t10);
    t16 = (t12 != 0);
    if (t16 > 0)
        goto LAB318;

LAB319:
LAB320:    xsi_set_current_line(494, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 37152);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t359 = *((double *)t4);
    t360 = (t355 - t359);
    t5 = (t0 + 1632);
    t6 = *((char **)t5);
    t363 = *((double *)t6);
    t8 = (t360 < t363);
    *((unsigned int *)t15) = t8;
    t5 = (t15 + 4);
    *((unsigned int *)t5) = 0U;
    t7 = (t15 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t15);
    t12 = (t11 & t10);
    t16 = (t12 != 0);
    if (t16 > 0)
        goto LAB321;

LAB322:
LAB323:    xsi_set_current_line(496, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 37472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t359 = *((double *)t4);
    t360 = (t355 - t359);
    t5 = (t0 + 1632);
    t6 = *((char **)t5);
    t363 = *((double *)t6);
    t8 = (t360 < t363);
    *((unsigned int *)t15) = t8;
    t5 = (t15 + 4);
    *((unsigned int *)t5) = 0U;
    t7 = (t15 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t15);
    t12 = (t11 & t10);
    t16 = (t12 != 0);
    if (t16 > 0)
        goto LAB324;

LAB325:
LAB326:    xsi_set_current_line(498, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 37792);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t359 = *((double *)t4);
    t360 = (t355 - t359);
    t5 = (t0 + 4624);
    t6 = *((char **)t5);
    t363 = *((double *)t6);
    t8 = (t360 < t363);
    *((unsigned int *)t15) = t8;
    t5 = (t15 + 4);
    *((unsigned int *)t5) = 0U;
    t7 = (t15 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t15);
    t12 = (t11 & t10);
    t16 = (t12 != 0);
    if (t16 > 0)
        goto LAB327;

LAB328:
LAB329:    xsi_set_current_line(500, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 37472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t359 = *((double *)t4);
    t360 = (t355 - t359);
    t5 = (t0 + 3400);
    t6 = *((char **)t5);
    t363 = *((double *)t6);
    t8 = (t360 < t363);
    *((unsigned int *)t15) = t8;
    t5 = (t15 + 4);
    *((unsigned int *)t5) = 0U;
    memset(t23, 0, 8);
    t7 = (t15 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t15);
    t12 = (t11 & t10);
    t16 = (t12 & 1U);
    if (t16 != 0)
        goto LAB330;

LAB331:    if (*((unsigned int *)t7) != 0)
        goto LAB332;

LAB333:    t14 = (t23 + 4);
    t17 = *((unsigned int *)t23);
    t18 = (!(t17));
    t19 = *((unsigned int *)t14);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB334;

LAB335:    memcpy(t56, t23, 8);

LAB336:    t69 = (t56 + 4);
    t61 = *((unsigned int *)t69);
    t62 = (~(t61));
    t65 = *((unsigned int *)t56);
    t66 = (t65 & t62);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB344;

LAB345:
LAB346:    xsi_set_current_line(503, ng7);
    t2 = ((char*)((ng17)));
    t3 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t2);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB347;

LAB348:
LAB349:    xsi_set_current_line(505, ng7);
    t2 = (t0 + 27872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6664);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_rshift(t15, 23, t4, 23, t6, 32);
    t5 = (t0 + 27872);
    t7 = (t5 + 56U);
    t13 = *((char **)t7);
    memset(t23, 0, 8);
    t14 = (t23 + 4);
    t29 = (t13 + 4);
    t8 = *((unsigned int *)t13);
    t9 = (t8 >> 0);
    *((unsigned int *)t23) = t9;
    t10 = *((unsigned int *)t29);
    t11 = (t10 >> 0);
    *((unsigned int *)t14) = t11;
    t12 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t12 & 65535U);
    t16 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t16 & 65535U);
    t30 = ((char*)((ng17)));
    t34 = (t0 + 51608);
    t35 = (t0 + 14888);
    t42 = xsi_create_subprogram_invocation(t34, 0, t0, t35, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t35, t42);
    t43 = (t0 + 41472);
    xsi_vlogvar_assign_value(t43, t15, 0, 0, 2);
    t48 = (t0 + 41632);
    xsi_vlogvar_assign_value(t48, t23, 0, 0, 16);
    t49 = (t0 + 41792);
    xsi_vlogvar_assign_value(t49, t30, 0, 0, 1);

LAB352:    t55 = (t0 + 51704);
    t57 = *((char **)t55);
    t63 = (t57 + 80U);
    t68 = *((char **)t63);
    t69 = (t68 + 272U);
    t70 = *((char **)t69);
    t78 = (t70 + 0U);
    t79 = *((char **)t78);
    t88 = ((int  (*)(char *, char *))t79)(t0, t57);

LAB354:    if (t88 != 0)
        goto LAB355;

LAB350:    t57 = (t0 + 14888);
    xsi_vlog_subprogram_popinvocation(t57);

LAB351:    t97 = (t0 + 51704);
    t103 = *((char **)t97);
    t97 = (t0 + 14888);
    t104 = (t0 + 51608);
    t110 = 0;
    xsi_delete_subprogram_invocation(t97, t103, t0, t104, t110);
    xsi_set_current_line(506, ng7);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 26912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(507, ng7);
    t2 = (t0 + 8568);
    t3 = *((char **)t2);
    t2 = (t0 + 27392);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(508, ng7);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 27552);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(509, ng7);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 28192);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 5000LL);
    xsi_set_current_line(510, ng7);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 28352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 2000LL);
    xsi_set_current_line(511, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 38592);
    xsi_vlogvar_assign_value_double(t2, t355, 0);
    goto LAB307;

LAB309:    xsi_set_current_line(487, ng7);
    t372 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t273) = t372;
    t274 = (t0 + 35552);
    t280 = (t274 + 56U);
    t285 = *((char **)t280);
    t377 = *((double *)t285);
    t286 = (t0 + 2312);
    t287 = *((char **)t286);
    t380 = *((double *)t287);
    t381 = (t377 + t380);
    t382 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t383 = (t381 - t382);
    *((double *)t281) = t383;
    xsi_vlogfile_write(1, 0, 0, ng117, 3, t0, (char)114, t273, 64, (char)114, t281, 64);
    goto LAB311;

LAB312:    xsi_set_current_line(489, ng7);
    t372 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t23) = t372;
    t13 = (t0 + 36352);
    t14 = (t13 + 56U);
    t29 = *((char **)t14);
    t377 = *((double *)t29);
    t30 = (t0 + 3264);
    t34 = *((char **)t30);
    t380 = *((double *)t34);
    t381 = (t377 + t380);
    t382 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t383 = (t381 - t382);
    *((double *)t36) = t383;
    xsi_vlogfile_write(1, 0, 0, ng118, 3, t0, (char)114, t23, 64, (char)114, t36, 64);
    goto LAB314;

LAB315:    xsi_set_current_line(491, ng7);
    t372 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t23) = t372;
    t13 = (t0 + 36832);
    t14 = (t13 + 56U);
    t29 = *((char **)t14);
    t377 = *((double *)t29);
    t30 = (t0 + 1768);
    t34 = *((char **)t30);
    t380 = *((double *)t34);
    t381 = (t377 + t380);
    t382 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t383 = (t381 - t382);
    *((double *)t36) = t383;
    xsi_vlogfile_write(1, 0, 0, ng119, 3, t0, (char)114, t23, 64, (char)114, t36, 64);
    goto LAB317;

LAB318:    xsi_set_current_line(493, ng7);
    t372 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t23) = t372;
    t13 = (t0 + 36512);
    t14 = (t13 + 56U);
    t29 = *((char **)t14);
    t377 = *((double *)t29);
    t30 = (t0 + 3536);
    t34 = *((char **)t30);
    t380 = *((double *)t34);
    t381 = (t377 + t380);
    t382 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t383 = (t381 - t382);
    *((double *)t36) = t383;
    xsi_vlogfile_write(1, 0, 0, ng120, 3, t0, (char)114, t23, 64, (char)114, t36, 64);
    goto LAB320;

LAB321:    xsi_set_current_line(495, ng7);
    t372 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t23) = t372;
    t13 = (t0 + 37152);
    t14 = (t13 + 56U);
    t29 = *((char **)t14);
    t377 = *((double *)t29);
    t30 = (t0 + 1632);
    t34 = *((char **)t30);
    t380 = *((double *)t34);
    t381 = (t377 + t380);
    t382 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t383 = (t381 - t382);
    *((double *)t36) = t383;
    xsi_vlogfile_write(1, 0, 0, ng121, 3, t0, (char)114, t23, 64, (char)114, t36, 64);
    goto LAB323;

LAB324:    xsi_set_current_line(497, ng7);
    t372 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t23) = t372;
    t13 = (t0 + 37472);
    t14 = (t13 + 56U);
    t29 = *((char **)t14);
    t377 = *((double *)t29);
    t30 = (t0 + 1632);
    t34 = *((char **)t30);
    t380 = *((double *)t34);
    t381 = (t377 + t380);
    t382 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t383 = (t381 - t382);
    *((double *)t36) = t383;
    xsi_vlogfile_write(1, 0, 0, ng122, 3, t0, (char)114, t23, 64, (char)114, t36, 64);
    goto LAB326;

LAB327:    xsi_set_current_line(499, ng7);
    t372 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t23) = t372;
    t13 = (t0 + 37792);
    t14 = (t13 + 56U);
    t29 = *((char **)t14);
    t377 = *((double *)t29);
    t30 = (t0 + 4624);
    t34 = *((char **)t30);
    t380 = *((double *)t34);
    t381 = (t377 + t380);
    t382 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t383 = (t381 - t382);
    *((double *)t36) = t383;
    xsi_vlogfile_write(1, 0, 0, ng123, 3, t0, (char)114, t23, 64, (char)114, t36, 64);
    goto LAB329;

LAB330:    *((unsigned int *)t23) = 1;
    goto LAB333;

LAB332:    t13 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB333;

LAB334:    t372 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t29 = (t0 + 35552);
    t30 = (t29 + 56U);
    t34 = *((char **)t30);
    t377 = *((double *)t34);
    t380 = (t372 - t377);
    t35 = (t0 + 3400);
    t42 = *((char **)t35);
    t381 = *((double *)t42);
    t21 = (t380 < t381);
    *((unsigned int *)t36) = t21;
    t35 = (t36 + 4);
    *((unsigned int *)t35) = 0U;
    memset(t47, 0, 8);
    t43 = (t36 + 4);
    t22 = *((unsigned int *)t43);
    t24 = (~(t22));
    t25 = *((unsigned int *)t36);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB337;

LAB338:    if (*((unsigned int *)t43) != 0)
        goto LAB339;

LAB340:    t28 = *((unsigned int *)t23);
    t31 = *((unsigned int *)t47);
    t32 = (t28 | t31);
    *((unsigned int *)t56) = t32;
    t49 = (t23 + 4);
    t55 = (t47 + 4);
    t57 = (t56 + 4);
    t33 = *((unsigned int *)t49);
    t37 = *((unsigned int *)t55);
    t38 = (t33 | t37);
    *((unsigned int *)t57) = t38;
    t39 = *((unsigned int *)t57);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB341;

LAB342:
LAB343:    goto LAB336;

LAB337:    *((unsigned int *)t47) = 1;
    goto LAB340;

LAB339:    t48 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB340;

LAB341:    t41 = *((unsigned int *)t56);
    t44 = *((unsigned int *)t57);
    *((unsigned int *)t56) = (t41 | t44);
    t63 = (t23 + 4);
    t68 = (t47 + 4);
    t45 = *((unsigned int *)t63);
    t46 = (~(t45));
    t50 = *((unsigned int *)t23);
    t88 = (t50 & t46);
    t51 = *((unsigned int *)t68);
    t52 = (~(t51));
    t53 = *((unsigned int *)t47);
    t89 = (t53 & t52);
    t54 = (~(t88));
    t58 = (~(t89));
    t59 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t59 & t54);
    t60 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t60 & t58);
    goto LAB343;

LAB344:    xsi_set_current_line(501, ng7);
    t382 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t96) = t382;
    xsi_vlogfile_write(1, 0, 0, ng124, 2, t0, (char)114, t96, 64);
    goto LAB346;

LAB347:    xsi_set_current_line(504, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t15) = t355;
    t4 = (t0 + 27872);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 6664);
    t13 = *((char **)t7);
    memset(t23, 0, 8);
    xsi_vlog_unsigned_rshift(t23, 23, t6, 23, t13, 32);
    t7 = (t0 + 27872);
    t14 = (t7 + 56U);
    t29 = *((char **)t14);
    xsi_vlogfile_write(1, 0, 0, ng130, 4, t0, (char)114, t15, 64, (char)118, t23, 23, (char)118, t29, 23);
    goto LAB349;

LAB353:;
LAB355:    t55 = (t0 + 51800U);
    *((char **)t55) = &&LAB352;
    goto LAB1;

LAB358:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB359;

LAB360:    xsi_set_current_line(515, ng7);

LAB363:    xsi_set_current_line(516, ng7);
    t29 = (t0 + 25072U);
    t30 = *((char **)t29);
    memset(t23, 0, 8);
    t29 = (t30 + 4);
    t31 = *((unsigned int *)t29);
    t32 = (~(t31));
    t33 = *((unsigned int *)t30);
    t37 = (t33 & t32);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB364;

LAB365:    if (*((unsigned int *)t29) != 0)
        goto LAB366;

LAB367:    t35 = (t23 + 4);
    t39 = *((unsigned int *)t23);
    t40 = *((unsigned int *)t35);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB368;

LAB369:    memcpy(t56, t23, 8);

LAB370:    t78 = (t56 + 4);
    t93 = *((unsigned int *)t78);
    t94 = (~(t93));
    t95 = *((unsigned int *)t56);
    t98 = (t95 & t94);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB382;

LAB383:    xsi_set_current_line(524, ng7);
    t2 = (t0 + 24752U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB418;

LAB416:    if (*((unsigned int *)t2) == 0)
        goto LAB415;

LAB417:    t4 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t4) = 1;

LAB418:    memset(t23, 0, 8);
    t5 = (t15 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB419;

LAB420:    if (*((unsigned int *)t5) != 0)
        goto LAB421;

LAB422:    t7 = (t23 + 4);
    t21 = *((unsigned int *)t23);
    t22 = *((unsigned int *)t7);
    t24 = (t21 || t22);
    if (t24 > 0)
        goto LAB423;

LAB424:    memcpy(t47, t23, 8);

LAB425:    t48 = (t47 + 4);
    t72 = *((unsigned int *)t48);
    t73 = (~(t72));
    t74 = *((unsigned int *)t47);
    t75 = (t74 & t73);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB433;

LAB434:
LAB435:
LAB384:    goto LAB362;

LAB364:    *((unsigned int *)t23) = 1;
    goto LAB367;

LAB366:    t34 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB367;

LAB368:    t42 = (t0 + 21552U);
    t43 = *((char **)t42);
    memset(t36, 0, 8);
    t42 = (t43 + 4);
    t44 = *((unsigned int *)t42);
    t45 = (~(t44));
    t46 = *((unsigned int *)t43);
    t50 = (t46 & t45);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB374;

LAB372:    if (*((unsigned int *)t42) == 0)
        goto LAB371;

LAB373:    t48 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t48) = 1;

LAB374:    memset(t47, 0, 8);
    t49 = (t36 + 4);
    t52 = *((unsigned int *)t49);
    t53 = (~(t52));
    t54 = *((unsigned int *)t36);
    t58 = (t54 & t53);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB375;

LAB376:    if (*((unsigned int *)t49) != 0)
        goto LAB377;

LAB378:    t60 = *((unsigned int *)t23);
    t61 = *((unsigned int *)t47);
    t62 = (t60 & t61);
    *((unsigned int *)t56) = t62;
    t57 = (t23 + 4);
    t63 = (t47 + 4);
    t68 = (t56 + 4);
    t65 = *((unsigned int *)t57);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t68) = t67;
    t71 = *((unsigned int *)t68);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB379;

LAB380:
LAB381:    goto LAB370;

LAB371:    *((unsigned int *)t36) = 1;
    goto LAB374;

LAB375:    *((unsigned int *)t47) = 1;
    goto LAB378;

LAB377:    t55 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB378;

LAB379:    t73 = *((unsigned int *)t56);
    t74 = *((unsigned int *)t68);
    *((unsigned int *)t56) = (t73 | t74);
    t69 = (t23 + 4);
    t70 = (t47 + 4);
    t75 = *((unsigned int *)t23);
    t76 = (~(t75));
    t77 = *((unsigned int *)t69);
    t80 = (~(t77));
    t81 = *((unsigned int *)t47);
    t82 = (~(t81));
    t83 = *((unsigned int *)t70);
    t84 = (~(t83));
    t88 = (t76 & t80);
    t89 = (t82 & t84);
    t85 = (~(t88));
    t86 = (~(t89));
    t87 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t87 & t85);
    t90 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t90 & t86);
    t91 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t91 & t85);
    t92 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t92 & t86);
    goto LAB381;

LAB382:    xsi_set_current_line(516, ng7);

LAB385:    xsi_set_current_line(517, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t79 = (t0 + 37632);
    t97 = (t79 + 56U);
    t103 = *((char **)t97);
    t359 = *((double *)t103);
    t360 = (t355 - t359);
    t104 = (t0 + 2856);
    t110 = *((char **)t104);
    t363 = *((double *)t110);
    t100 = (t360 < t363);
    *((unsigned int *)t96) = t100;
    t104 = (t96 + 4);
    *((unsigned int *)t104) = 0U;
    memset(t109, 0, 8);
    t111 = (t96 + 4);
    t101 = *((unsigned int *)t111);
    t102 = (~(t101));
    t105 = *((unsigned int *)t96);
    t106 = (t105 & t102);
    t107 = (t106 & 1U);
    if (t107 != 0)
        goto LAB386;

LAB387:    if (*((unsigned int *)t111) != 0)
        goto LAB388;

LAB389:    t119 = (t109 + 4);
    t108 = *((unsigned int *)t109);
    t112 = (!(t108));
    t113 = *((unsigned int *)t119);
    t114 = (t112 || t113);
    if (t114 > 0)
        goto LAB390;

LAB391:    memcpy(t139, t109, 8);

LAB392:    t183 = (t139 + 4);
    t156 = *((unsigned int *)t183);
    t157 = (~(t156));
    t158 = *((unsigned int *)t139);
    t159 = (t158 & t157);
    t160 = (t159 != 0);
    if (t160 > 0)
        goto LAB400;

LAB401:
LAB402:    xsi_set_current_line(519, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 37952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t359 = *((double *)t4);
    t360 = (t355 - t359);
    t5 = (t0 + 2720);
    t6 = *((char **)t5);
    t363 = *((double *)t6);
    t8 = (t360 < t363);
    *((unsigned int *)t15) = t8;
    t5 = (t15 + 4);
    *((unsigned int *)t5) = 0U;
    t7 = (t15 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t15);
    t12 = (t11 & t10);
    t16 = (t12 != 0);
    if (t16 > 0)
        goto LAB403;

LAB404:
LAB405:    xsi_set_current_line(520, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 38112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t359 = *((double *)t4);
    t360 = (t355 - t359);
    t5 = (t0 + 2720);
    t6 = *((char **)t5);
    t363 = *((double *)t6);
    t8 = (t360 < t363);
    *((unsigned int *)t15) = t8;
    t5 = (t15 + 4);
    *((unsigned int *)t5) = 0U;
    t7 = (t15 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t15);
    t12 = (t11 & t10);
    t16 = (t12 != 0);
    if (t16 > 0)
        goto LAB406;

LAB407:
LAB408:    xsi_set_current_line(521, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 38272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t359 = *((double *)t4);
    t360 = (t355 - t359);
    t5 = (t0 + 2720);
    t6 = *((char **)t5);
    t363 = *((double *)t6);
    t8 = (t360 < t363);
    *((unsigned int *)t15) = t8;
    t5 = (t15 + 4);
    *((unsigned int *)t5) = 0U;
    t7 = (t15 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t15);
    t12 = (t11 & t10);
    t16 = (t12 != 0);
    if (t16 > 0)
        goto LAB409;

LAB410:
LAB411:    xsi_set_current_line(522, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 38432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t359 = *((double *)t4);
    t360 = (t355 - t359);
    t5 = (t0 + 2720);
    t6 = *((char **)t5);
    t363 = *((double *)t6);
    t8 = (t360 < t363);
    *((unsigned int *)t15) = t8;
    t5 = (t15 + 4);
    *((unsigned int *)t5) = 0U;
    t7 = (t15 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t15);
    t12 = (t11 & t10);
    t16 = (t12 != 0);
    if (t16 > 0)
        goto LAB412;

LAB413:
LAB414:    xsi_set_current_line(523, ng7);
    t2 = (t0 + 8568);
    t3 = *((char **)t2);
    t2 = (t0 + 27392);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB384;

LAB386:    *((unsigned int *)t109) = 1;
    goto LAB389;

LAB388:    t117 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t117) = 1;
    goto LAB389;

LAB390:    t372 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t125 = (t0 + 35552);
    t126 = (t125 + 56U);
    t130 = *((char **)t126);
    t377 = *((double *)t130);
    t380 = (t372 - t377);
    t131 = (t0 + 2856);
    t138 = *((char **)t131);
    t381 = *((double *)t138);
    t115 = (t380 < t381);
    *((unsigned int *)t118) = t115;
    t131 = (t118 + 4);
    *((unsigned int *)t131) = 0U;
    memset(t132, 0, 8);
    t143 = (t118 + 4);
    t116 = *((unsigned int *)t143);
    t120 = (~(t116));
    t121 = *((unsigned int *)t118);
    t122 = (t121 & t120);
    t123 = (t122 & 1U);
    if (t123 != 0)
        goto LAB393;

LAB394:    if (*((unsigned int *)t143) != 0)
        goto LAB395;

LAB396:    t124 = *((unsigned int *)t109);
    t127 = *((unsigned int *)t132);
    t128 = (t124 | t127);
    *((unsigned int *)t139) = t128;
    t145 = (t109 + 4);
    t153 = (t132 + 4);
    t154 = (t139 + 4);
    t129 = *((unsigned int *)t145);
    t133 = *((unsigned int *)t153);
    t134 = (t129 | t133);
    *((unsigned int *)t154) = t134;
    t135 = *((unsigned int *)t154);
    t136 = (t135 != 0);
    if (t136 == 1)
        goto LAB397;

LAB398:
LAB399:    goto LAB392;

LAB393:    *((unsigned int *)t132) = 1;
    goto LAB396;

LAB395:    t144 = (t132 + 4);
    *((unsigned int *)t132) = 1;
    *((unsigned int *)t144) = 1;
    goto LAB396;

LAB397:    t137 = *((unsigned int *)t139);
    t140 = *((unsigned int *)t154);
    *((unsigned int *)t139) = (t137 | t140);
    t172 = (t109 + 4);
    t178 = (t132 + 4);
    t141 = *((unsigned int *)t172);
    t142 = (~(t141));
    t146 = *((unsigned int *)t109);
    t163 = (t146 & t142);
    t147 = *((unsigned int *)t178);
    t148 = (~(t147));
    t149 = *((unsigned int *)t132);
    t164 = (t149 & t148);
    t150 = (~(t163));
    t151 = (~(t164));
    t152 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t152 & t150);
    t155 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t155 & t151);
    goto LAB399;

LAB400:    xsi_set_current_line(518, ng7);
    t382 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t171) = t382;
    xsi_vlogfile_write(1, 0, 0, ng131, 2, t0, (char)114, t171, 64);
    goto LAB402;

LAB403:    xsi_set_current_line(519, ng7);
    t372 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t23) = t372;
    t13 = (t0 + 30432);
    t14 = (t13 + 56U);
    t29 = *((char **)t14);
    t30 = (t0 + 37952);
    t34 = (t30 + 56U);
    t35 = *((char **)t34);
    t377 = *((double *)t35);
    t42 = (t0 + 2720);
    t43 = *((char **)t42);
    t380 = *((double *)t43);
    t381 = (t377 + t380);
    t382 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t383 = (t381 - t382);
    *((double *)t36) = t383;
    xsi_vlogfile_write(1, 0, 0, ng104, 4, t0, (char)114, t23, 64, (char)119, t29, 32, (char)114, t36, 64);
    goto LAB405;

LAB406:    xsi_set_current_line(520, ng7);
    t372 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t23) = t372;
    t13 = (t0 + 30432);
    t14 = (t13 + 56U);
    t29 = *((char **)t14);
    t30 = (t0 + 38112);
    t34 = (t30 + 56U);
    t35 = *((char **)t34);
    t377 = *((double *)t35);
    t42 = (t0 + 2720);
    t43 = *((char **)t42);
    t380 = *((double *)t43);
    t381 = (t377 + t380);
    t382 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t383 = (t381 - t382);
    *((double *)t36) = t383;
    xsi_vlogfile_write(1, 0, 0, ng104, 4, t0, (char)114, t23, 64, (char)119, t29, 32, (char)114, t36, 64);
    goto LAB408;

LAB409:    xsi_set_current_line(521, ng7);
    t372 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t23) = t372;
    t13 = (t0 + 30432);
    t14 = (t13 + 56U);
    t29 = *((char **)t14);
    t30 = (t0 + 38272);
    t34 = (t30 + 56U);
    t35 = *((char **)t34);
    t377 = *((double *)t35);
    t42 = (t0 + 2720);
    t43 = *((char **)t42);
    t380 = *((double *)t43);
    t381 = (t377 + t380);
    t382 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t383 = (t381 - t382);
    *((double *)t36) = t383;
    xsi_vlogfile_write(1, 0, 0, ng104, 4, t0, (char)114, t23, 64, (char)119, t29, 32, (char)114, t36, 64);
    goto LAB411;

LAB412:    xsi_set_current_line(522, ng7);
    t372 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t23) = t372;
    t13 = (t0 + 30432);
    t14 = (t13 + 56U);
    t29 = *((char **)t14);
    t30 = (t0 + 38432);
    t34 = (t30 + 56U);
    t35 = *((char **)t34);
    t377 = *((double *)t35);
    t42 = (t0 + 2720);
    t43 = *((char **)t42);
    t380 = *((double *)t43);
    t381 = (t377 + t380);
    t382 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t383 = (t381 - t382);
    *((double *)t36) = t383;
    xsi_vlogfile_write(1, 0, 0, ng104, 4, t0, (char)114, t23, 64, (char)119, t29, 32, (char)114, t36, 64);
    goto LAB414;

LAB415:    *((unsigned int *)t15) = 1;
    goto LAB418;

LAB419:    *((unsigned int *)t23) = 1;
    goto LAB422;

LAB421:    t6 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB422;

LAB423:    t13 = (t0 + 16752U);
    t14 = *((char **)t13);
    memset(t36, 0, 8);
    t13 = (t14 + 4);
    t25 = *((unsigned int *)t13);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t31 = (t28 & 1U);
    if (t31 != 0)
        goto LAB426;

LAB427:    if (*((unsigned int *)t13) != 0)
        goto LAB428;

LAB429:    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t36);
    t37 = (t32 & t33);
    *((unsigned int *)t47) = t37;
    t30 = (t23 + 4);
    t34 = (t36 + 4);
    t35 = (t47 + 4);
    t38 = *((unsigned int *)t30);
    t39 = *((unsigned int *)t34);
    t40 = (t38 | t39);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t35);
    t44 = (t41 != 0);
    if (t44 == 1)
        goto LAB430;

LAB431:
LAB432:    goto LAB425;

LAB426:    *((unsigned int *)t36) = 1;
    goto LAB429;

LAB428:    t29 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB429;

LAB430:    t45 = *((unsigned int *)t47);
    t46 = *((unsigned int *)t35);
    *((unsigned int *)t47) = (t45 | t46);
    t42 = (t23 + 4);
    t43 = (t36 + 4);
    t50 = *((unsigned int *)t23);
    t51 = (~(t50));
    t52 = *((unsigned int *)t42);
    t53 = (~(t52));
    t54 = *((unsigned int *)t36);
    t58 = (~(t54));
    t59 = *((unsigned int *)t43);
    t60 = (~(t59));
    t88 = (t51 & t53);
    t89 = (t58 & t60);
    t61 = (~(t88));
    t62 = (~(t89));
    t65 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t65 & t61);
    t66 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t66 & t62);
    t67 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t67 & t61);
    t71 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t71 & t62);
    goto LAB432;

LAB433:    xsi_set_current_line(524, ng7);

LAB436:    xsi_set_current_line(525, ng7);
    t49 = (t0 + 8568);
    t55 = *((char **)t49);
    t49 = (t0 + 27392);
    xsi_vlogvar_assign_value(t49, t55, 0, 0, 3);
    goto LAB435;

LAB437:    *((unsigned int *)t15) = 1;
    goto LAB440;

LAB441:    *((unsigned int *)t23) = 1;
    goto LAB444;

LAB443:    t6 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB444;

LAB445:    t13 = (t0 + 16912U);
    t14 = *((char **)t13);
    memset(t36, 0, 8);
    t13 = (t14 + 4);
    t25 = *((unsigned int *)t13);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t31 = (t28 & 1U);
    if (t31 != 0)
        goto LAB448;

LAB449:    if (*((unsigned int *)t13) != 0)
        goto LAB450;

LAB451:    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t36);
    t37 = (t32 & t33);
    *((unsigned int *)t47) = t37;
    t30 = (t23 + 4);
    t34 = (t36 + 4);
    t35 = (t47 + 4);
    t38 = *((unsigned int *)t30);
    t39 = *((unsigned int *)t34);
    t40 = (t38 | t39);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t35);
    t44 = (t41 != 0);
    if (t44 == 1)
        goto LAB452;

LAB453:
LAB454:    goto LAB447;

LAB448:    *((unsigned int *)t36) = 1;
    goto LAB451;

LAB450:    t29 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB451;

LAB452:    t45 = *((unsigned int *)t47);
    t46 = *((unsigned int *)t35);
    *((unsigned int *)t47) = (t45 | t46);
    t42 = (t23 + 4);
    t43 = (t36 + 4);
    t50 = *((unsigned int *)t23);
    t51 = (~(t50));
    t52 = *((unsigned int *)t42);
    t53 = (~(t52));
    t54 = *((unsigned int *)t36);
    t58 = (~(t54));
    t59 = *((unsigned int *)t43);
    t60 = (~(t59));
    t88 = (t51 & t53);
    t89 = (t58 & t60);
    t61 = (~(t88));
    t62 = (~(t89));
    t65 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t65 & t61);
    t66 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t66 & t62);
    t67 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t67 & t61);
    t71 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t71 & t62);
    goto LAB454;

LAB455:    xsi_set_current_line(530, ng7);

LAB458:    xsi_set_current_line(531, ng7);
    t49 = ((char*)((ng8)));
    t55 = (t0 + 27552);
    xsi_vlogvar_assign_value(t55, t49, 0, 0, 1);
    goto LAB457;

LAB459:    *((unsigned int *)t15) = 1;
    goto LAB462;

LAB461:    t4 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB462;

LAB463:    t6 = (t0 + 21552U);
    t7 = *((char **)t6);
    memset(t23, 0, 8);
    t6 = (t7 + 4);
    t19 = *((unsigned int *)t6);
    t20 = (~(t19));
    t21 = *((unsigned int *)t7);
    t22 = (t21 & t20);
    t24 = (t22 & 1U);
    if (t24 != 0)
        goto LAB469;

LAB467:    if (*((unsigned int *)t6) == 0)
        goto LAB466;

LAB468:    t13 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t13) = 1;

LAB469:    memset(t36, 0, 8);
    t14 = (t23 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (t27 & t26);
    t31 = (t28 & 1U);
    if (t31 != 0)
        goto LAB470;

LAB471:    if (*((unsigned int *)t14) != 0)
        goto LAB472;

LAB473:    t32 = *((unsigned int *)t15);
    t33 = *((unsigned int *)t36);
    t37 = (t32 & t33);
    *((unsigned int *)t47) = t37;
    t30 = (t15 + 4);
    t34 = (t36 + 4);
    t35 = (t47 + 4);
    t38 = *((unsigned int *)t30);
    t39 = *((unsigned int *)t34);
    t40 = (t38 | t39);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t35);
    t44 = (t41 != 0);
    if (t44 == 1)
        goto LAB474;

LAB475:
LAB476:    goto LAB465;

LAB466:    *((unsigned int *)t23) = 1;
    goto LAB469;

LAB470:    *((unsigned int *)t36) = 1;
    goto LAB473;

LAB472:    t29 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB473;

LAB474:    t45 = *((unsigned int *)t47);
    t46 = *((unsigned int *)t35);
    *((unsigned int *)t47) = (t45 | t46);
    t42 = (t15 + 4);
    t43 = (t36 + 4);
    t50 = *((unsigned int *)t15);
    t51 = (~(t50));
    t52 = *((unsigned int *)t42);
    t53 = (~(t52));
    t54 = *((unsigned int *)t36);
    t58 = (~(t54));
    t59 = *((unsigned int *)t43);
    t60 = (~(t59));
    t88 = (t51 & t53);
    t89 = (t58 & t60);
    t61 = (~(t88));
    t62 = (~(t89));
    t65 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t65 & t61);
    t66 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t66 & t62);
    t67 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t67 & t61);
    t71 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t71 & t62);
    goto LAB476;

LAB477:    xsi_set_current_line(534, ng7);

LAB480:    xsi_set_current_line(535, ng7);
    t49 = ((char*)((ng6)));
    t55 = (t0 + 28352);
    xsi_vlogvar_wait_assign_value(t55, t49, 0, 0, 1, 2000LL);
    goto LAB479;

LAB481:    *((unsigned int *)t15) = 1;
    goto LAB484;

LAB485:    *((unsigned int *)t23) = 1;
    goto LAB488;

LAB487:    t13 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB488;

LAB489:    t29 = (t0 + 21552U);
    t30 = *((char **)t29);
    memset(t36, 0, 8);
    t29 = (t30 + 4);
    t25 = *((unsigned int *)t29);
    t26 = (~(t25));
    t27 = *((unsigned int *)t30);
    t28 = (t27 & t26);
    t31 = (t28 & 1U);
    if (t31 != 0)
        goto LAB492;

LAB493:    if (*((unsigned int *)t29) != 0)
        goto LAB494;

LAB495:    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t36);
    t37 = (t32 & t33);
    *((unsigned int *)t47) = t37;
    t35 = (t23 + 4);
    t42 = (t36 + 4);
    t43 = (t47 + 4);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t42);
    t40 = (t38 | t39);
    *((unsigned int *)t43) = t40;
    t41 = *((unsigned int *)t43);
    t44 = (t41 != 0);
    if (t44 == 1)
        goto LAB496;

LAB497:
LAB498:    goto LAB491;

LAB492:    *((unsigned int *)t36) = 1;
    goto LAB495;

LAB494:    t34 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB495;

LAB496:    t45 = *((unsigned int *)t47);
    t46 = *((unsigned int *)t43);
    *((unsigned int *)t47) = (t45 | t46);
    t48 = (t23 + 4);
    t49 = (t36 + 4);
    t50 = *((unsigned int *)t23);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t36);
    t58 = (~(t54));
    t59 = *((unsigned int *)t49);
    t60 = (~(t59));
    t88 = (t51 & t53);
    t89 = (t58 & t60);
    t61 = (~(t88));
    t62 = (~(t89));
    t65 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t65 & t61);
    t66 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t66 & t62);
    t67 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t67 & t61);
    t71 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t71 & t62);
    goto LAB498;

LAB499:    *((unsigned int *)t56) = 1;
    goto LAB502;

LAB501:    t57 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB502;

LAB503:    t68 = (t0 + 16912U);
    t69 = *((char **)t68);
    memset(t96, 0, 8);
    t68 = (t69 + 4);
    t82 = *((unsigned int *)t68);
    t83 = (~(t82));
    t84 = *((unsigned int *)t69);
    t85 = (t84 & t83);
    t86 = (t85 & 1U);
    if (t86 != 0)
        goto LAB509;

LAB507:    if (*((unsigned int *)t68) == 0)
        goto LAB506;

LAB508:    t70 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t70) = 1;

LAB509:    memset(t109, 0, 8);
    t78 = (t96 + 4);
    t87 = *((unsigned int *)t78);
    t90 = (~(t87));
    t91 = *((unsigned int *)t96);
    t92 = (t91 & t90);
    t93 = (t92 & 1U);
    if (t93 != 0)
        goto LAB510;

LAB511:    if (*((unsigned int *)t78) != 0)
        goto LAB512;

LAB513:    t94 = *((unsigned int *)t56);
    t95 = *((unsigned int *)t109);
    t98 = (t94 & t95);
    *((unsigned int *)t118) = t98;
    t97 = (t56 + 4);
    t103 = (t109 + 4);
    t104 = (t118 + 4);
    t99 = *((unsigned int *)t97);
    t100 = *((unsigned int *)t103);
    t101 = (t99 | t100);
    *((unsigned int *)t104) = t101;
    t102 = *((unsigned int *)t104);
    t105 = (t102 != 0);
    if (t105 == 1)
        goto LAB514;

LAB515:
LAB516:    goto LAB505;

LAB506:    *((unsigned int *)t96) = 1;
    goto LAB509;

LAB510:    *((unsigned int *)t109) = 1;
    goto LAB513;

LAB512:    t79 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB513;

LAB514:    t106 = *((unsigned int *)t118);
    t107 = *((unsigned int *)t104);
    *((unsigned int *)t118) = (t106 | t107);
    t110 = (t56 + 4);
    t111 = (t109 + 4);
    t108 = *((unsigned int *)t56);
    t112 = (~(t108));
    t113 = *((unsigned int *)t110);
    t114 = (~(t113));
    t115 = *((unsigned int *)t109);
    t116 = (~(t115));
    t120 = *((unsigned int *)t111);
    t121 = (~(t120));
    t163 = (t112 & t114);
    t164 = (t116 & t121);
    t122 = (~(t163));
    t123 = (~(t164));
    t124 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t124 & t122);
    t127 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t127 & t123);
    t128 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t128 & t122);
    t129 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t129 & t123);
    goto LAB516;

LAB517:    *((unsigned int *)t132) = 1;
    goto LAB520;

LAB519:    t119 = (t132 + 4);
    *((unsigned int *)t132) = 1;
    *((unsigned int *)t119) = 1;
    goto LAB520;

LAB521:    t126 = (t0 + 27712);
    t130 = (t126 + 56U);
    t131 = *((char **)t130);
    memset(t139, 0, 8);
    t138 = (t131 + 4);
    t146 = *((unsigned int *)t138);
    t147 = (~(t146));
    t148 = *((unsigned int *)t131);
    t149 = (t148 & t147);
    t150 = (t149 & 1U);
    if (t150 != 0)
        goto LAB527;

LAB525:    if (*((unsigned int *)t138) == 0)
        goto LAB524;

LAB526:    t143 = (t139 + 4);
    *((unsigned int *)t139) = 1;
    *((unsigned int *)t143) = 1;

LAB527:    memset(t171, 0, 8);
    t144 = (t139 + 4);
    t151 = *((unsigned int *)t144);
    t152 = (~(t151));
    t155 = *((unsigned int *)t139);
    t156 = (t155 & t152);
    t157 = (t156 & 1U);
    if (t157 != 0)
        goto LAB528;

LAB529:    if (*((unsigned int *)t144) != 0)
        goto LAB530;

LAB531:    t158 = *((unsigned int *)t132);
    t159 = *((unsigned int *)t171);
    t160 = (t158 & t159);
    *((unsigned int *)t179) = t160;
    t153 = (t132 + 4);
    t154 = (t171 + 4);
    t172 = (t179 + 4);
    t161 = *((unsigned int *)t153);
    t162 = *((unsigned int *)t154);
    t165 = (t161 | t162);
    *((unsigned int *)t172) = t165;
    t166 = *((unsigned int *)t172);
    t167 = (t166 != 0);
    if (t167 == 1)
        goto LAB532;

LAB533:
LAB534:    goto LAB523;

LAB524:    *((unsigned int *)t139) = 1;
    goto LAB527;

LAB528:    *((unsigned int *)t171) = 1;
    goto LAB531;

LAB530:    t145 = (t171 + 4);
    *((unsigned int *)t171) = 1;
    *((unsigned int *)t145) = 1;
    goto LAB531;

LAB532:    t168 = *((unsigned int *)t179);
    t169 = *((unsigned int *)t172);
    *((unsigned int *)t179) = (t168 | t169);
    t178 = (t132 + 4);
    t183 = (t171 + 4);
    t170 = *((unsigned int *)t132);
    t173 = (~(t170));
    t174 = *((unsigned int *)t178);
    t175 = (~(t174));
    t176 = *((unsigned int *)t171);
    t177 = (~(t176));
    t180 = *((unsigned int *)t183);
    t181 = (~(t180));
    t198 = (t173 & t175);
    t202 = (t177 & t181);
    t182 = (~(t198));
    t186 = (~(t202));
    t187 = *((unsigned int *)t172);
    *((unsigned int *)t172) = (t187 & t182);
    t188 = *((unsigned int *)t172);
    *((unsigned int *)t172) = (t188 & t186);
    t189 = *((unsigned int *)t179);
    *((unsigned int *)t179) = (t189 & t182);
    t190 = *((unsigned int *)t179);
    *((unsigned int *)t179) = (t190 & t186);
    goto LAB534;

LAB535:    xsi_set_current_line(539, ng7);

LAB538:    xsi_set_current_line(540, ng7);
    t185 = (t0 + 27392);
    t193 = (t185 + 56U);
    t194 = *((char **)t193);
    t208 = (t0 + 8704);
    t214 = *((char **)t208);
    memset(t207, 0, 8);
    t208 = (t194 + 4);
    t215 = (t214 + 4);
    t199 = *((unsigned int *)t194);
    t200 = *((unsigned int *)t214);
    t201 = (t199 ^ t200);
    t203 = *((unsigned int *)t208);
    t204 = *((unsigned int *)t215);
    t205 = (t203 ^ t204);
    t206 = (t201 | t205);
    t209 = *((unsigned int *)t208);
    t210 = *((unsigned int *)t215);
    t211 = (t209 | t210);
    t212 = (~(t211));
    t213 = (t206 & t212);
    if (t213 != 0)
        goto LAB542;

LAB539:    if (t211 != 0)
        goto LAB541;

LAB540:    *((unsigned int *)t207) = 1;

LAB542:    t223 = (t207 + 4);
    t216 = *((unsigned int *)t223);
    t217 = (~(t216));
    t218 = *((unsigned int *)t207);
    t219 = (t218 & t217);
    t225 = (t219 != 0);
    if (t225 > 0)
        goto LAB543;

LAB544:
LAB545:    xsi_set_current_line(543, ng7);
    t2 = (t0 + 8704);
    t3 = *((char **)t2);
    t2 = (t0 + 27392);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(544, ng7);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 28672);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(545, ng7);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 28832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(546, ng7);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 28352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(547, ng7);
    t2 = ((char*)((ng17)));
    t3 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t2);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB547;

LAB548:
LAB549:    goto LAB537;

LAB541:    t222 = (t207 + 4);
    *((unsigned int *)t207) = 1;
    *((unsigned int *)t222) = 1;
    goto LAB542;

LAB543:    xsi_set_current_line(540, ng7);

LAB546:    xsi_set_current_line(541, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t220) = t355;
    xsi_vlogfile_write(1, 0, 0, ng132, 2, t0, (char)114, t220, 64);
    goto LAB545;

LAB547:    xsi_set_current_line(548, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t15) = t355;
    xsi_vlogfile_write(1, 0, 0, ng133, 2, t0, (char)114, t15, 64);
    goto LAB549;

LAB550:    *((unsigned int *)t15) = 1;
    goto LAB553;

LAB554:    *((unsigned int *)t23) = 1;
    goto LAB557;

LAB556:    t13 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB557;

LAB558:    t29 = (t0 + 21552U);
    t30 = *((char **)t29);
    memset(t36, 0, 8);
    t29 = (t30 + 4);
    t25 = *((unsigned int *)t29);
    t26 = (~(t25));
    t27 = *((unsigned int *)t30);
    t28 = (t27 & t26);
    t31 = (t28 & 1U);
    if (t31 != 0)
        goto LAB561;

LAB562:    if (*((unsigned int *)t29) != 0)
        goto LAB563;

LAB564:    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t36);
    t37 = (t32 & t33);
    *((unsigned int *)t47) = t37;
    t35 = (t23 + 4);
    t42 = (t36 + 4);
    t43 = (t47 + 4);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t42);
    t40 = (t38 | t39);
    *((unsigned int *)t43) = t40;
    t41 = *((unsigned int *)t43);
    t44 = (t41 != 0);
    if (t44 == 1)
        goto LAB565;

LAB566:
LAB567:    goto LAB560;

LAB561:    *((unsigned int *)t36) = 1;
    goto LAB564;

LAB563:    t34 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB564;

LAB565:    t45 = *((unsigned int *)t47);
    t46 = *((unsigned int *)t43);
    *((unsigned int *)t47) = (t45 | t46);
    t48 = (t23 + 4);
    t49 = (t36 + 4);
    t50 = *((unsigned int *)t23);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t36);
    t58 = (~(t54));
    t59 = *((unsigned int *)t49);
    t60 = (~(t59));
    t88 = (t51 & t53);
    t89 = (t58 & t60);
    t61 = (~(t88));
    t62 = (~(t89));
    t65 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t65 & t61);
    t66 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t66 & t62);
    t67 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t67 & t61);
    t71 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t71 & t62);
    goto LAB567;

LAB568:    *((unsigned int *)t56) = 1;
    goto LAB571;

LAB570:    t57 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB571;

LAB572:    t68 = (t0 + 16912U);
    t69 = *((char **)t68);
    memset(t96, 0, 8);
    t68 = (t69 + 4);
    t82 = *((unsigned int *)t68);
    t83 = (~(t82));
    t84 = *((unsigned int *)t69);
    t85 = (t84 & t83);
    t86 = (t85 & 1U);
    if (t86 != 0)
        goto LAB578;

LAB576:    if (*((unsigned int *)t68) == 0)
        goto LAB575;

LAB577:    t70 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t70) = 1;

LAB578:    memset(t109, 0, 8);
    t78 = (t96 + 4);
    t87 = *((unsigned int *)t78);
    t90 = (~(t87));
    t91 = *((unsigned int *)t96);
    t92 = (t91 & t90);
    t93 = (t92 & 1U);
    if (t93 != 0)
        goto LAB579;

LAB580:    if (*((unsigned int *)t78) != 0)
        goto LAB581;

LAB582:    t94 = *((unsigned int *)t56);
    t95 = *((unsigned int *)t109);
    t98 = (t94 & t95);
    *((unsigned int *)t118) = t98;
    t97 = (t56 + 4);
    t103 = (t109 + 4);
    t104 = (t118 + 4);
    t99 = *((unsigned int *)t97);
    t100 = *((unsigned int *)t103);
    t101 = (t99 | t100);
    *((unsigned int *)t104) = t101;
    t102 = *((unsigned int *)t104);
    t105 = (t102 != 0);
    if (t105 == 1)
        goto LAB583;

LAB584:
LAB585:    goto LAB574;

LAB575:    *((unsigned int *)t96) = 1;
    goto LAB578;

LAB579:    *((unsigned int *)t109) = 1;
    goto LAB582;

LAB581:    t79 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB582;

LAB583:    t106 = *((unsigned int *)t118);
    t107 = *((unsigned int *)t104);
    *((unsigned int *)t118) = (t106 | t107);
    t110 = (t56 + 4);
    t111 = (t109 + 4);
    t108 = *((unsigned int *)t56);
    t112 = (~(t108));
    t113 = *((unsigned int *)t110);
    t114 = (~(t113));
    t115 = *((unsigned int *)t109);
    t116 = (~(t115));
    t120 = *((unsigned int *)t111);
    t121 = (~(t120));
    t163 = (t112 & t114);
    t164 = (t116 & t121);
    t122 = (~(t163));
    t123 = (~(t164));
    t124 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t124 & t122);
    t127 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t127 & t123);
    t128 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t128 & t122);
    t129 = *((unsigned int *)t118);
    *((unsigned int *)t118) = (t129 & t123);
    goto LAB585;

LAB586:    *((unsigned int *)t132) = 1;
    goto LAB589;

LAB588:    t119 = (t132 + 4);
    *((unsigned int *)t132) = 1;
    *((unsigned int *)t119) = 1;
    goto LAB589;

LAB590:    t126 = (t0 + 27712);
    t130 = (t126 + 56U);
    t131 = *((char **)t130);
    memset(t139, 0, 8);
    t138 = (t131 + 4);
    t146 = *((unsigned int *)t138);
    t147 = (~(t146));
    t148 = *((unsigned int *)t131);
    t149 = (t148 & t147);
    t150 = (t149 & 1U);
    if (t150 != 0)
        goto LAB593;

LAB594:    if (*((unsigned int *)t138) != 0)
        goto LAB595;

LAB596:    t144 = (t139 + 4);
    t151 = *((unsigned int *)t139);
    t152 = (!(t151));
    t155 = *((unsigned int *)t144);
    t156 = (t152 || t155);
    if (t156 > 0)
        goto LAB597;

LAB598:    memcpy(t207, t139, 8);

LAB599:    memset(t220, 0, 8);
    t208 = (t207 + 4);
    t199 = *((unsigned int *)t208);
    t200 = (~(t199));
    t201 = *((unsigned int *)t207);
    t203 = (t201 & t200);
    t204 = (t203 & 1U);
    if (t204 != 0)
        goto LAB611;

LAB612:    if (*((unsigned int *)t208) != 0)
        goto LAB613;

LAB614:    t205 = *((unsigned int *)t132);
    t206 = *((unsigned int *)t220);
    t209 = (t205 & t206);
    *((unsigned int *)t221) = t209;
    t215 = (t132 + 4);
    t222 = (t220 + 4);
    t223 = (t221 + 4);
    t210 = *((unsigned int *)t215);
    t211 = *((unsigned int *)t222);
    t212 = (t210 | t211);
    *((unsigned int *)t223) = t212;
    t213 = *((unsigned int *)t223);
    t216 = (t213 != 0);
    if (t216 == 1)
        goto LAB615;

LAB616:
LAB617:    goto LAB592;

LAB593:    *((unsigned int *)t139) = 1;
    goto LAB596;

LAB595:    t143 = (t139 + 4);
    *((unsigned int *)t139) = 1;
    *((unsigned int *)t143) = 1;
    goto LAB596;

LAB597:    t145 = (t0 + 18672U);
    t153 = *((char **)t145);
    memset(t171, 0, 8);
    t145 = (t153 + 4);
    t157 = *((unsigned int *)t145);
    t158 = (~(t157));
    t159 = *((unsigned int *)t153);
    t160 = (t159 & t158);
    t161 = (t160 & 1U);
    if (t161 != 0)
        goto LAB603;

LAB601:    if (*((unsigned int *)t145) == 0)
        goto LAB600;

LAB602:    t154 = (t171 + 4);
    *((unsigned int *)t171) = 1;
    *((unsigned int *)t154) = 1;

LAB603:    memset(t179, 0, 8);
    t172 = (t171 + 4);
    t162 = *((unsigned int *)t172);
    t165 = (~(t162));
    t166 = *((unsigned int *)t171);
    t167 = (t166 & t165);
    t168 = (t167 & 1U);
    if (t168 != 0)
        goto LAB604;

LAB605:    if (*((unsigned int *)t172) != 0)
        goto LAB606;

LAB607:    t169 = *((unsigned int *)t139);
    t170 = *((unsigned int *)t179);
    t173 = (t169 | t170);
    *((unsigned int *)t207) = t173;
    t183 = (t139 + 4);
    t184 = (t179 + 4);
    t185 = (t207 + 4);
    t174 = *((unsigned int *)t183);
    t175 = *((unsigned int *)t184);
    t176 = (t174 | t175);
    *((unsigned int *)t185) = t176;
    t177 = *((unsigned int *)t185);
    t180 = (t177 != 0);
    if (t180 == 1)
        goto LAB608;

LAB609:
LAB610:    goto LAB599;

LAB600:    *((unsigned int *)t171) = 1;
    goto LAB603;

LAB604:    *((unsigned int *)t179) = 1;
    goto LAB607;

LAB606:    t178 = (t179 + 4);
    *((unsigned int *)t179) = 1;
    *((unsigned int *)t178) = 1;
    goto LAB607;

LAB608:    t181 = *((unsigned int *)t207);
    t182 = *((unsigned int *)t185);
    *((unsigned int *)t207) = (t181 | t182);
    t193 = (t139 + 4);
    t194 = (t179 + 4);
    t186 = *((unsigned int *)t193);
    t187 = (~(t186));
    t188 = *((unsigned int *)t139);
    t198 = (t188 & t187);
    t189 = *((unsigned int *)t194);
    t190 = (~(t189));
    t191 = *((unsigned int *)t179);
    t202 = (t191 & t190);
    t192 = (~(t198));
    t195 = (~(t202));
    t196 = *((unsigned int *)t185);
    *((unsigned int *)t185) = (t196 & t192);
    t197 = *((unsigned int *)t185);
    *((unsigned int *)t185) = (t197 & t195);
    goto LAB610;

LAB611:    *((unsigned int *)t220) = 1;
    goto LAB614;

LAB613:    t214 = (t220 + 4);
    *((unsigned int *)t220) = 1;
    *((unsigned int *)t214) = 1;
    goto LAB614;

LAB615:    t217 = *((unsigned int *)t221);
    t218 = *((unsigned int *)t223);
    *((unsigned int *)t221) = (t217 | t218);
    t224 = (t132 + 4);
    t233 = (t220 + 4);
    t219 = *((unsigned int *)t132);
    t225 = (~(t219));
    t226 = *((unsigned int *)t224);
    t227 = (~(t226));
    t228 = *((unsigned int *)t220);
    t229 = (~(t228));
    t230 = *((unsigned int *)t233);
    t231 = (~(t230));
    t258 = (t225 & t227);
    t259 = (t229 & t231);
    t232 = (~(t258));
    t236 = (~(t259));
    t237 = *((unsigned int *)t223);
    *((unsigned int *)t223) = (t237 & t232);
    t238 = *((unsigned int *)t223);
    *((unsigned int *)t223) = (t238 & t236);
    t241 = *((unsigned int *)t221);
    *((unsigned int *)t221) = (t241 & t232);
    t242 = *((unsigned int *)t221);
    *((unsigned int *)t221) = (t242 & t236);
    goto LAB617;

LAB618:    *((unsigned int *)t235) = 1;
    goto LAB621;

LAB620:    t239 = (t235 + 4);
    *((unsigned int *)t235) = 1;
    *((unsigned int *)t239) = 1;
    goto LAB621;

LAB622:    t248 = ((char*)((ng1)));
    t249 = ((char*)((ng2)));
    memset(t273, 0, 8);
    t266 = (t248 + 4);
    t272 = (t249 + 4);
    t253 = *((unsigned int *)t248);
    t254 = *((unsigned int *)t249);
    t255 = (t253 ^ t254);
    t256 = *((unsigned int *)t266);
    t257 = *((unsigned int *)t272);
    t260 = (t256 ^ t257);
    t261 = (t255 | t260);
    t262 = *((unsigned int *)t266);
    t263 = *((unsigned int *)t272);
    t264 = (t262 | t263);
    t265 = (~(t264));
    t267 = (t261 & t265);
    if (t267 != 0)
        goto LAB626;

LAB625:    if (t264 != 0)
        goto LAB627;

LAB628:    memset(t281, 0, 8);
    t280 = (t273 + 4);
    t268 = *((unsigned int *)t280);
    t269 = (~(t268));
    t270 = *((unsigned int *)t273);
    t271 = (t270 & t269);
    t275 = (t271 & 1U);
    if (t275 != 0)
        goto LAB629;

LAB630:    if (*((unsigned int *)t280) != 0)
        goto LAB631;

LAB632:    t286 = (t281 + 4);
    t276 = *((unsigned int *)t281);
    t277 = (!(t276));
    t278 = *((unsigned int *)t286);
    t279 = (t277 || t278);
    if (t279 > 0)
        goto LAB633;

LAB634:    memcpy(t317, t281, 8);

LAB635:    memset(t365, 0, 8);
    t331 = (t317 + 4);
    t318 = *((unsigned int *)t331);
    t319 = (~(t318));
    t320 = *((unsigned int *)t317);
    t324 = (t320 & t319);
    t325 = (t324 & 1U);
    if (t325 != 0)
        goto LAB643;

LAB644:    if (*((unsigned int *)t331) != 0)
        goto LAB645;

LAB646:    t326 = *((unsigned int *)t235);
    t327 = *((unsigned int *)t365);
    t328 = (t326 & t327);
    *((unsigned int *)t373) = t328;
    t349 = (t235 + 4);
    t356 = (t365 + 4);
    t357 = (t373 + 4);
    t329 = *((unsigned int *)t349);
    t330 = *((unsigned int *)t356);
    t333 = (t329 | t330);
    *((unsigned int *)t357) = t333;
    t334 = *((unsigned int *)t357);
    t335 = (t334 != 0);
    if (t335 == 1)
        goto LAB647;

LAB648:
LAB649:    goto LAB624;

LAB626:    *((unsigned int *)t273) = 1;
    goto LAB628;

LAB627:    t274 = (t273 + 4);
    *((unsigned int *)t273) = 1;
    *((unsigned int *)t274) = 1;
    goto LAB628;

LAB629:    *((unsigned int *)t281) = 1;
    goto LAB632;

LAB631:    t285 = (t281 + 4);
    *((unsigned int *)t281) = 1;
    *((unsigned int *)t285) = 1;
    goto LAB632;

LAB633:    t287 = (t0 + 16752U);
    t295 = *((char **)t287);
    memset(t309, 0, 8);
    t287 = (t295 + 4);
    t282 = *((unsigned int *)t287);
    t283 = (~(t282));
    t284 = *((unsigned int *)t295);
    t288 = (t284 & t283);
    t289 = (t288 & 1U);
    if (t289 != 0)
        goto LAB636;

LAB637:    if (*((unsigned int *)t287) != 0)
        goto LAB638;

LAB639:    t290 = *((unsigned int *)t281);
    t291 = *((unsigned int *)t309);
    t292 = (t290 | t291);
    *((unsigned int *)t317) = t292;
    t310 = (t281 + 4);
    t316 = (t309 + 4);
    t321 = (t317 + 4);
    t293 = *((unsigned int *)t310);
    t294 = *((unsigned int *)t316);
    t297 = (t293 | t294);
    *((unsigned int *)t321) = t297;
    t298 = *((unsigned int *)t321);
    t299 = (t298 != 0);
    if (t299 == 1)
        goto LAB640;

LAB641:
LAB642:    goto LAB635;

LAB636:    *((unsigned int *)t309) = 1;
    goto LAB639;

LAB638:    t296 = (t309 + 4);
    *((unsigned int *)t309) = 1;
    *((unsigned int *)t296) = 1;
    goto LAB639;

LAB640:    t301 = *((unsigned int *)t317);
    t302 = *((unsigned int *)t321);
    *((unsigned int *)t317) = (t301 | t302);
    t322 = (t281 + 4);
    t323 = (t309 + 4);
    t303 = *((unsigned int *)t322);
    t305 = (~(t303));
    t306 = *((unsigned int *)t281);
    t300 = (t306 & t305);
    t307 = *((unsigned int *)t323);
    t308 = (~(t307));
    t311 = *((unsigned int *)t309);
    t304 = (t311 & t308);
    t312 = (~(t300));
    t313 = (~(t304));
    t314 = *((unsigned int *)t321);
    *((unsigned int *)t321) = (t314 & t312);
    t315 = *((unsigned int *)t321);
    *((unsigned int *)t321) = (t315 & t313);
    goto LAB642;

LAB643:    *((unsigned int *)t365) = 1;
    goto LAB646;

LAB645:    t332 = (t365 + 4);
    *((unsigned int *)t365) = 1;
    *((unsigned int *)t332) = 1;
    goto LAB646;

LAB647:    t336 = *((unsigned int *)t373);
    t337 = *((unsigned int *)t357);
    *((unsigned int *)t373) = (t336 | t337);
    t358 = (t235 + 4);
    t361 = (t365 + 4);
    t338 = *((unsigned int *)t235);
    t339 = (~(t338));
    t340 = *((unsigned int *)t358);
    t343 = (~(t340));
    t344 = *((unsigned int *)t365);
    t345 = (~(t344));
    t346 = *((unsigned int *)t361);
    t347 = (~(t346));
    t341 = (t339 & t343);
    t342 = (t345 & t347);
    t348 = (~(t341));
    t350 = (~(t342));
    t351 = *((unsigned int *)t357);
    *((unsigned int *)t357) = (t351 & t348);
    t352 = *((unsigned int *)t357);
    *((unsigned int *)t357) = (t352 & t350);
    t353 = *((unsigned int *)t373);
    *((unsigned int *)t373) = (t353 & t348);
    t354 = *((unsigned int *)t373);
    *((unsigned int *)t373) = (t354 & t350);
    goto LAB649;

LAB650:    xsi_set_current_line(550, ng7);

LAB653:    xsi_set_current_line(551, ng7);
    t366 = (t0 + 27392);
    t374 = (t366 + 56U);
    t375 = *((char **)t374);
    t376 = (t0 + 9112);
    t378 = *((char **)t376);
    memset(t384, 0, 8);
    t376 = (t375 + 4);
    t379 = (t378 + 4);
    t371 = *((unsigned int *)t375);
    t385 = *((unsigned int *)t378);
    t386 = (t371 ^ t385);
    t387 = *((unsigned int *)t376);
    t388 = *((unsigned int *)t379);
    t389 = (t387 ^ t388);
    t390 = (t386 | t389);
    t391 = *((unsigned int *)t376);
    t392 = *((unsigned int *)t379);
    t393 = (t391 | t392);
    t394 = (~(t393));
    t395 = (t390 & t394);
    if (t395 != 0)
        goto LAB657;

LAB654:    if (t393 != 0)
        goto LAB656;

LAB655:    *((unsigned int *)t384) = 1;

LAB657:    t397 = (t384 + 4);
    t398 = *((unsigned int *)t397);
    t399 = (~(t398));
    t400 = *((unsigned int *)t384);
    t401 = (t400 & t399);
    t402 = (t401 != 0);
    if (t402 > 0)
        goto LAB658;

LAB659:
LAB660:    xsi_set_current_line(554, ng7);
    t2 = (t0 + 9112);
    t3 = *((char **)t2);
    t2 = (t0 + 27392);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(555, ng7);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 28672);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(556, ng7);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 28832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(557, ng7);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 28352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(558, ng7);
    t2 = ((char*)((ng17)));
    t3 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t2);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB662;

LAB663:
LAB664:    goto LAB652;

LAB656:    t396 = (t384 + 4);
    *((unsigned int *)t384) = 1;
    *((unsigned int *)t396) = 1;
    goto LAB657;

LAB658:    xsi_set_current_line(551, ng7);

LAB661:    xsi_set_current_line(552, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t403) = t355;
    xsi_vlogfile_write(1, 0, 0, ng134, 2, t0, (char)114, t403, 64);
    goto LAB660;

LAB662:    xsi_set_current_line(559, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t15) = t355;
    xsi_vlogfile_write(1, 0, 0, ng135, 2, t0, (char)114, t15, 64);
    goto LAB664;

LAB665:    *((unsigned int *)t15) = 1;
    goto LAB668;

LAB667:    t4 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB668;

LAB669:    t6 = (t0 + 16752U);
    t7 = *((char **)t6);
    memset(t23, 0, 8);
    t6 = (t7 + 4);
    t19 = *((unsigned int *)t6);
    t20 = (~(t19));
    t21 = *((unsigned int *)t7);
    t22 = (t21 & t20);
    t24 = (t22 & 1U);
    if (t24 != 0)
        goto LAB675;

LAB673:    if (*((unsigned int *)t6) == 0)
        goto LAB672;

LAB674:    t13 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t13) = 1;

LAB675:    memset(t36, 0, 8);
    t14 = (t23 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (t27 & t26);
    t31 = (t28 & 1U);
    if (t31 != 0)
        goto LAB676;

LAB677:    if (*((unsigned int *)t14) != 0)
        goto LAB678;

LAB679:    t32 = *((unsigned int *)t15);
    t33 = *((unsigned int *)t36);
    t37 = (t32 & t33);
    *((unsigned int *)t47) = t37;
    t30 = (t15 + 4);
    t34 = (t36 + 4);
    t35 = (t47 + 4);
    t38 = *((unsigned int *)t30);
    t39 = *((unsigned int *)t34);
    t40 = (t38 | t39);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t35);
    t44 = (t41 != 0);
    if (t44 == 1)
        goto LAB680;

LAB681:
LAB682:    goto LAB671;

LAB672:    *((unsigned int *)t23) = 1;
    goto LAB675;

LAB676:    *((unsigned int *)t36) = 1;
    goto LAB679;

LAB678:    t29 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB679;

LAB680:    t45 = *((unsigned int *)t47);
    t46 = *((unsigned int *)t35);
    *((unsigned int *)t47) = (t45 | t46);
    t42 = (t15 + 4);
    t43 = (t36 + 4);
    t50 = *((unsigned int *)t15);
    t51 = (~(t50));
    t52 = *((unsigned int *)t42);
    t53 = (~(t52));
    t54 = *((unsigned int *)t36);
    t58 = (~(t54));
    t59 = *((unsigned int *)t43);
    t60 = (~(t59));
    t88 = (t51 & t53);
    t89 = (t58 & t60);
    t61 = (~(t88));
    t62 = (~(t89));
    t65 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t65 & t61);
    t66 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t66 & t62);
    t67 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t67 & t61);
    t71 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t71 & t62);
    goto LAB682;

LAB683:    *((unsigned int *)t56) = 1;
    goto LAB686;

LAB685:    t49 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB686;

LAB687:    t57 = (t0 + 16912U);
    t63 = *((char **)t57);
    memset(t96, 0, 8);
    t57 = (t63 + 4);
    t82 = *((unsigned int *)t57);
    t83 = (~(t82));
    t84 = *((unsigned int *)t63);
    t85 = (t84 & t83);
    t86 = (t85 & 1U);
    if (t86 != 0)
        goto LAB690;

LAB691:    if (*((unsigned int *)t57) != 0)
        goto LAB692;

LAB693:    t87 = *((unsigned int *)t56);
    t90 = *((unsigned int *)t96);
    t91 = (t87 & t90);
    *((unsigned int *)t109) = t91;
    t69 = (t56 + 4);
    t70 = (t96 + 4);
    t78 = (t109 + 4);
    t92 = *((unsigned int *)t69);
    t93 = *((unsigned int *)t70);
    t94 = (t92 | t93);
    *((unsigned int *)t78) = t94;
    t95 = *((unsigned int *)t78);
    t98 = (t95 != 0);
    if (t98 == 1)
        goto LAB694;

LAB695:
LAB696:    goto LAB689;

LAB690:    *((unsigned int *)t96) = 1;
    goto LAB693;

LAB692:    t68 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB693;

LAB694:    t99 = *((unsigned int *)t109);
    t100 = *((unsigned int *)t78);
    *((unsigned int *)t109) = (t99 | t100);
    t79 = (t56 + 4);
    t97 = (t96 + 4);
    t101 = *((unsigned int *)t56);
    t102 = (~(t101));
    t105 = *((unsigned int *)t79);
    t106 = (~(t105));
    t107 = *((unsigned int *)t96);
    t108 = (~(t107));
    t112 = *((unsigned int *)t97);
    t113 = (~(t112));
    t163 = (t102 & t106);
    t164 = (t108 & t113);
    t114 = (~(t163));
    t115 = (~(t164));
    t116 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t116 & t114);
    t120 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t120 & t115);
    t121 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t121 & t114);
    t122 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t122 & t115);
    goto LAB696;

LAB697:    *((unsigned int *)t118) = 1;
    goto LAB700;

LAB699:    t104 = (t118 + 4);
    *((unsigned int *)t118) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB700;

LAB701:    t111 = (t0 + 27712);
    t117 = (t111 + 56U);
    t119 = *((char **)t117);
    memset(t132, 0, 8);
    t125 = (t119 + 4);
    t136 = *((unsigned int *)t125);
    t137 = (~(t136));
    t140 = *((unsigned int *)t119);
    t141 = (t140 & t137);
    t142 = (t141 & 1U);
    if (t142 != 0)
        goto LAB707;

LAB705:    if (*((unsigned int *)t125) == 0)
        goto LAB704;

LAB706:    t126 = (t132 + 4);
    *((unsigned int *)t132) = 1;
    *((unsigned int *)t126) = 1;

LAB707:    memset(t139, 0, 8);
    t130 = (t132 + 4);
    t146 = *((unsigned int *)t130);
    t147 = (~(t146));
    t148 = *((unsigned int *)t132);
    t149 = (t148 & t147);
    t150 = (t149 & 1U);
    if (t150 != 0)
        goto LAB708;

LAB709:    if (*((unsigned int *)t130) != 0)
        goto LAB710;

LAB711:    t151 = *((unsigned int *)t118);
    t152 = *((unsigned int *)t139);
    t155 = (t151 & t152);
    *((unsigned int *)t171) = t155;
    t138 = (t118 + 4);
    t143 = (t139 + 4);
    t144 = (t171 + 4);
    t156 = *((unsigned int *)t138);
    t157 = *((unsigned int *)t143);
    t158 = (t156 | t157);
    *((unsigned int *)t144) = t158;
    t159 = *((unsigned int *)t144);
    t160 = (t159 != 0);
    if (t160 == 1)
        goto LAB712;

LAB713:
LAB714:    goto LAB703;

LAB704:    *((unsigned int *)t132) = 1;
    goto LAB707;

LAB708:    *((unsigned int *)t139) = 1;
    goto LAB711;

LAB710:    t131 = (t139 + 4);
    *((unsigned int *)t139) = 1;
    *((unsigned int *)t131) = 1;
    goto LAB711;

LAB712:    t161 = *((unsigned int *)t171);
    t162 = *((unsigned int *)t144);
    *((unsigned int *)t171) = (t161 | t162);
    t145 = (t118 + 4);
    t153 = (t139 + 4);
    t165 = *((unsigned int *)t118);
    t166 = (~(t165));
    t167 = *((unsigned int *)t145);
    t168 = (~(t167));
    t169 = *((unsigned int *)t139);
    t170 = (~(t169));
    t173 = *((unsigned int *)t153);
    t174 = (~(t173));
    t198 = (t166 & t168);
    t202 = (t170 & t174);
    t175 = (~(t198));
    t176 = (~(t202));
    t177 = *((unsigned int *)t144);
    *((unsigned int *)t144) = (t177 & t175);
    t180 = *((unsigned int *)t144);
    *((unsigned int *)t144) = (t180 & t176);
    t181 = *((unsigned int *)t171);
    *((unsigned int *)t171) = (t181 & t175);
    t182 = *((unsigned int *)t171);
    *((unsigned int *)t171) = (t182 & t176);
    goto LAB714;

LAB715:    xsi_set_current_line(561, ng7);

LAB718:    xsi_set_current_line(562, ng7);
    t172 = ((char*)((ng16)));
    t178 = (t0 + 31872);
    xsi_vlogvar_assign_value(t178, t172, 0, 0, 16);
    xsi_set_current_line(563, ng7);
    t2 = (t0 + 34432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB722;

LAB720:    if (*((unsigned int *)t5) == 0)
        goto LAB719;

LAB721:    t6 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t6) = 1;

LAB722:    memset(t23, 0, 8);
    t7 = (t15 + 4);
    t16 = *((unsigned int *)t7);
    t17 = (~(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB723;

LAB724:    if (*((unsigned int *)t7) != 0)
        goto LAB725;

LAB726:    t14 = (t23 + 4);
    t21 = *((unsigned int *)t23);
    t22 = *((unsigned int *)t14);
    t24 = (t21 || t22);
    if (t24 > 0)
        goto LAB727;

LAB728:    memcpy(t56, t23, 8);

LAB729:    t78 = (t56 + 4);
    t86 = *((unsigned int *)t78);
    t87 = (~(t86));
    t90 = *((unsigned int *)t56);
    t91 = (t90 & t87);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB741;

LAB742:
LAB743:    xsi_set_current_line(565, ng7);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng17)));
    memset(t15, 0, 8);
    t4 = (t2 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB745;

LAB744:    t5 = (t3 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB745;

LAB748:    if (*((unsigned int *)t2) > *((unsigned int *)t3))
        goto LAB746;

LAB747:    memset(t23, 0, 8);
    t7 = (t15 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB749;

LAB750:    if (*((unsigned int *)t7) != 0)
        goto LAB751;

LAB752:    t14 = (t23 + 4);
    t16 = *((unsigned int *)t23);
    t17 = *((unsigned int *)t14);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB753;

LAB754:    memcpy(t56, t23, 8);

LAB755:    t68 = (t56 + 4);
    t62 = *((unsigned int *)t68);
    t65 = (~(t62));
    t66 = *((unsigned int *)t56);
    t67 = (t66 & t65);
    t71 = (t67 != 0);
    if (t71 > 0)
        goto LAB766;

LAB767:
LAB768:    xsi_set_current_line(567, ng7);
    t2 = (t0 + 27872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng125)));
    memset(t15, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t16 = (t11 ^ t12);
    t17 = (t10 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB772;

LAB769:    if (t20 != 0)
        goto LAB771;

LAB770:    *((unsigned int *)t15) = 1;

LAB772:    memset(t23, 0, 8);
    t14 = (t15 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    t26 = *((unsigned int *)t15);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB773;

LAB774:    if (*((unsigned int *)t14) != 0)
        goto LAB775;

LAB776:    t30 = (t23 + 4);
    t31 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB777;

LAB778:    memcpy(t56, t23, 8);

LAB779:    t97 = (t56 + 4);
    t95 = *((unsigned int *)t97);
    t98 = (~(t95));
    t99 = *((unsigned int *)t56);
    t100 = (t99 & t98);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB791;

LAB792:    xsi_set_current_line(576, ng7);

LAB815:    xsi_set_current_line(577, ng7);
    t2 = (t0 + 27872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 51608);
    t6 = (t0 + 14456);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    t13 = (t0 + 41312);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 23);

LAB816:    t14 = (t0 + 51704);
    t29 = *((char **)t14);
    t30 = (t29 + 80U);
    t34 = *((char **)t30);
    t35 = (t34 + 272U);
    t42 = *((char **)t35);
    t43 = (t42 + 0U);
    t48 = *((char **)t43);
    t88 = ((int  (*)(char *, char *))t48)(t0, t29);
    if (t88 != 0)
        goto LAB818;

LAB817:    t29 = (t0 + 51704);
    t49 = *((char **)t29);
    t29 = (t0 + 41152);
    t55 = (t29 + 56U);
    t57 = *((char **)t55);
    memcpy(t15, t57, 8);
    t63 = (t0 + 14456);
    t68 = (t0 + 51608);
    t69 = 0;
    xsi_delete_subprogram_invocation(t63, t49, t0, t68, t69);
    t70 = (t0 + 31872);
    xsi_vlogvar_assign_value(t70, t15, 0, 0, 16);
    xsi_set_current_line(578, ng7);
    t2 = ((char*)((ng17)));
    t3 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t2);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB819;

LAB820:
LAB821:    xsi_set_current_line(580, ng7);
    t2 = (t0 + 27872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng125)));
    memset(t15, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t16 = (t11 ^ t12);
    t17 = (t10 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB825;

LAB822:    if (t20 != 0)
        goto LAB824;

LAB823:    *((unsigned int *)t15) = 1;

LAB825:    t14 = (t15 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    t26 = *((unsigned int *)t15);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB826;

LAB827:    xsi_set_current_line(586, ng7);

LAB842:    xsi_set_current_line(587, ng7);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 26912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB828:
LAB793:    xsi_set_current_line(590, ng7);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 32032);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 5000LL);
    xsi_set_current_line(591, ng7);
    t2 = (t0 + 27392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8840);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t16 = (t11 ^ t12);
    t17 = (t10 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB846;

LAB843:    if (t20 != 0)
        goto LAB845;

LAB844:    *((unsigned int *)t15) = 1;

LAB846:    t14 = (t15 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    t26 = *((unsigned int *)t15);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB847;

LAB848:    xsi_set_current_line(593, ng7);

LAB851:    xsi_set_current_line(594, ng7);
    t2 = (t0 + 31872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 32032);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 20000LL);

LAB849:    xsi_set_current_line(596, ng7);
    t2 = (t0 + 8840);
    t3 = *((char **)t2);
    t2 = (t0 + 27392);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(597, ng7);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 28672);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(598, ng7);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 28832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(599, ng7);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 28352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB717;

LAB719:    *((unsigned int *)t15) = 1;
    goto LAB722;

LAB723:    *((unsigned int *)t23) = 1;
    goto LAB726;

LAB725:    t13 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB726;

LAB727:    t29 = (t0 + 27392);
    t30 = (t29 + 56U);
    t34 = *((char **)t30);
    t35 = (t0 + 8840);
    t42 = *((char **)t35);
    memset(t36, 0, 8);
    t35 = (t34 + 4);
    t43 = (t42 + 4);
    t25 = *((unsigned int *)t34);
    t26 = *((unsigned int *)t42);
    t27 = (t25 ^ t26);
    t28 = *((unsigned int *)t35);
    t31 = *((unsigned int *)t43);
    t32 = (t28 ^ t31);
    t33 = (t27 | t32);
    t37 = *((unsigned int *)t35);
    t38 = *((unsigned int *)t43);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t33 & t40);
    if (t41 != 0)
        goto LAB733;

LAB730:    if (t39 != 0)
        goto LAB732;

LAB731:    *((unsigned int *)t36) = 1;

LAB733:    memset(t47, 0, 8);
    t49 = (t36 + 4);
    t44 = *((unsigned int *)t49);
    t45 = (~(t44));
    t46 = *((unsigned int *)t36);
    t50 = (t46 & t45);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB734;

LAB735:    if (*((unsigned int *)t49) != 0)
        goto LAB736;

LAB737:    t52 = *((unsigned int *)t23);
    t53 = *((unsigned int *)t47);
    t54 = (t52 & t53);
    *((unsigned int *)t56) = t54;
    t57 = (t23 + 4);
    t63 = (t47 + 4);
    t68 = (t56 + 4);
    t58 = *((unsigned int *)t57);
    t59 = *((unsigned int *)t63);
    t60 = (t58 | t59);
    *((unsigned int *)t68) = t60;
    t61 = *((unsigned int *)t68);
    t62 = (t61 != 0);
    if (t62 == 1)
        goto LAB738;

LAB739:
LAB740:    goto LAB729;

LAB732:    t48 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB733;

LAB734:    *((unsigned int *)t47) = 1;
    goto LAB737;

LAB736:    t55 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB737;

LAB738:    t65 = *((unsigned int *)t56);
    t66 = *((unsigned int *)t68);
    *((unsigned int *)t56) = (t65 | t66);
    t69 = (t23 + 4);
    t70 = (t47 + 4);
    t67 = *((unsigned int *)t23);
    t71 = (~(t67));
    t72 = *((unsigned int *)t69);
    t73 = (~(t72));
    t74 = *((unsigned int *)t47);
    t75 = (~(t74));
    t76 = *((unsigned int *)t70);
    t77 = (~(t76));
    t88 = (t71 & t73);
    t89 = (t75 & t77);
    t80 = (~(t88));
    t81 = (~(t89));
    t82 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t82 & t80);
    t83 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t83 & t81);
    t84 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t84 & t80);
    t85 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t85 & t81);
    goto LAB740;

LAB741:    xsi_set_current_line(564, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t96) = t355;
    xsi_vlogfile_write(1, 0, 0, ng136, 2, t0, (char)114, t96, 64);
    goto LAB743;

LAB745:    t6 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB747;

LAB746:    *((unsigned int *)t15) = 1;
    goto LAB747;

LAB749:    *((unsigned int *)t23) = 1;
    goto LAB752;

LAB751:    t13 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB752;

LAB753:    t29 = (t0 + 17392U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng6)));
    memset(t36, 0, 8);
    if (*((unsigned int *)t30) != *((unsigned int *)t29))
        goto LAB757;

LAB756:    t34 = (t30 + 4);
    t35 = (t29 + 4);
    if (*((unsigned int *)t34) != *((unsigned int *)t35))
        goto LAB757;

LAB758:    memset(t47, 0, 8);
    t42 = (t36 + 4);
    t19 = *((unsigned int *)t42);
    t20 = (~(t19));
    t21 = *((unsigned int *)t36);
    t22 = (t21 & t20);
    t24 = (t22 & 1U);
    if (t24 != 0)
        goto LAB759;

LAB760:    if (*((unsigned int *)t42) != 0)
        goto LAB761;

LAB762:    t25 = *((unsigned int *)t23);
    t26 = *((unsigned int *)t47);
    t27 = (t25 & t26);
    *((unsigned int *)t56) = t27;
    t48 = (t23 + 4);
    t49 = (t47 + 4);
    t55 = (t56 + 4);
    t28 = *((unsigned int *)t48);
    t31 = *((unsigned int *)t49);
    t32 = (t28 | t31);
    *((unsigned int *)t55) = t32;
    t33 = *((unsigned int *)t55);
    t37 = (t33 != 0);
    if (t37 == 1)
        goto LAB763;

LAB764:
LAB765:    goto LAB755;

LAB757:    *((unsigned int *)t36) = 1;
    goto LAB758;

LAB759:    *((unsigned int *)t47) = 1;
    goto LAB762;

LAB761:    t43 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB762;

LAB763:    t38 = *((unsigned int *)t56);
    t39 = *((unsigned int *)t55);
    *((unsigned int *)t56) = (t38 | t39);
    t57 = (t23 + 4);
    t63 = (t47 + 4);
    t40 = *((unsigned int *)t23);
    t41 = (~(t40));
    t44 = *((unsigned int *)t57);
    t45 = (~(t44));
    t46 = *((unsigned int *)t47);
    t50 = (~(t46));
    t51 = *((unsigned int *)t63);
    t52 = (~(t51));
    t88 = (t41 & t45);
    t89 = (t50 & t52);
    t53 = (~(t88));
    t54 = (~(t89));
    t58 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t58 & t53);
    t59 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t59 & t54);
    t60 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t60 & t53);
    t61 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t61 & t54);
    goto LAB765;

LAB766:    xsi_set_current_line(566, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t96) = t355;
    xsi_vlogfile_write(1, 0, 0, ng137, 2, t0, (char)114, t96, 64);
    goto LAB768;

LAB771:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB772;

LAB773:    *((unsigned int *)t23) = 1;
    goto LAB776;

LAB775:    t29 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB776;

LAB777:    t34 = (t0 + 26912);
    t35 = (t34 + 56U);
    t42 = *((char **)t35);
    t43 = ((char*)((ng84)));
    memset(t36, 0, 8);
    t48 = (t42 + 4);
    t49 = (t43 + 4);
    t37 = *((unsigned int *)t42);
    t38 = *((unsigned int *)t43);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t48);
    t41 = *((unsigned int *)t49);
    t44 = (t40 ^ t41);
    t45 = (t39 | t44);
    t46 = *((unsigned int *)t48);
    t50 = *((unsigned int *)t49);
    t51 = (t46 | t50);
    t52 = (~(t51));
    t53 = (t45 & t52);
    if (t53 != 0)
        goto LAB783;

LAB780:    if (t51 != 0)
        goto LAB782;

LAB781:    *((unsigned int *)t36) = 1;

LAB783:    memset(t47, 0, 8);
    t57 = (t36 + 4);
    t54 = *((unsigned int *)t57);
    t58 = (~(t54));
    t59 = *((unsigned int *)t36);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB784;

LAB785:    if (*((unsigned int *)t57) != 0)
        goto LAB786;

LAB787:    t62 = *((unsigned int *)t23);
    t65 = *((unsigned int *)t47);
    t66 = (t62 & t65);
    *((unsigned int *)t56) = t66;
    t68 = (t23 + 4);
    t69 = (t47 + 4);
    t70 = (t56 + 4);
    t67 = *((unsigned int *)t68);
    t71 = *((unsigned int *)t69);
    t72 = (t67 | t71);
    *((unsigned int *)t70) = t72;
    t73 = *((unsigned int *)t70);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB788;

LAB789:
LAB790:    goto LAB779;

LAB782:    t55 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB783;

LAB784:    *((unsigned int *)t47) = 1;
    goto LAB787;

LAB786:    t63 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB787;

LAB788:    t75 = *((unsigned int *)t56);
    t76 = *((unsigned int *)t70);
    *((unsigned int *)t56) = (t75 | t76);
    t78 = (t23 + 4);
    t79 = (t47 + 4);
    t77 = *((unsigned int *)t23);
    t80 = (~(t77));
    t81 = *((unsigned int *)t78);
    t82 = (~(t81));
    t83 = *((unsigned int *)t47);
    t84 = (~(t83));
    t85 = *((unsigned int *)t79);
    t86 = (~(t85));
    t88 = (t80 & t82);
    t89 = (t84 & t86);
    t87 = (~(t88));
    t90 = (~(t89));
    t91 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t91 & t87);
    t92 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t92 & t90);
    t93 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t93 & t87);
    t94 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t94 & t90);
    goto LAB790;

LAB791:    xsi_set_current_line(567, ng7);

LAB794:    xsi_set_current_line(568, ng7);
    t103 = (t0 + 27072);
    t104 = (t103 + 56U);
    t110 = *((char **)t104);

LAB795:    t111 = ((char*)((ng6)));
    t163 = xsi_vlog_unsigned_case_compare(t110, 2, t111, 2);
    if (t163 == 1)
        goto LAB796;

LAB797:    t2 = ((char*)((ng17)));
    t88 = xsi_vlog_unsigned_case_compare(t110, 2, t2, 2);
    if (t88 == 1)
        goto LAB798;

LAB799:    t2 = ((char*)((ng1)));
    t88 = xsi_vlog_unsigned_case_compare(t110, 2, t2, 2);
    if (t88 == 1)
        goto LAB800;

LAB801:
LAB802:    xsi_set_current_line(573, ng7);
    t2 = ((char*)((ng17)));
    t3 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t2);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB812;

LAB813:
LAB814:    xsi_set_current_line(575, ng7);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 26912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB793;

LAB796:    xsi_set_current_line(569, ng7);
    t117 = (t0 + 19792U);
    t119 = *((char **)t117);
    t117 = ((char*)((ng6)));
    t125 = (t0 + 6664);
    t126 = *((char **)t125);
    memset(t96, 0, 8);
    xsi_vlog_unsigned_lshift(t96, 16, t117, 2, t126, 32);
    t102 = *((unsigned int *)t119);
    t105 = *((unsigned int *)t96);
    t106 = (t102 | t105);
    *((unsigned int *)t109) = t106;
    t125 = (t119 + 4);
    t130 = (t96 + 4);
    t131 = (t109 + 4);
    t107 = *((unsigned int *)t125);
    t108 = *((unsigned int *)t130);
    t112 = (t107 | t108);
    *((unsigned int *)t131) = t112;
    t113 = *((unsigned int *)t131);
    t114 = (t113 != 0);
    if (t114 == 1)
        goto LAB803;

LAB804:
LAB805:    t144 = (t0 + 31872);
    xsi_vlogvar_assign_value(t144, t109, 0, 0, 16);
    goto LAB802;

LAB798:    xsi_set_current_line(570, ng7);
    t3 = (t0 + 19952U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng17)));
    t5 = (t0 + 6664);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_lshift(t15, 16, t3, 2, t6, 32);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t15);
    t10 = (t8 | t9);
    *((unsigned int *)t23) = t10;
    t5 = (t4 + 4);
    t7 = (t15 + 4);
    t13 = (t23 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t16 = (t11 | t12);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB806;

LAB807:
LAB808:    t30 = (t0 + 31872);
    xsi_vlogvar_assign_value(t30, t23, 0, 0, 16);
    goto LAB802;

LAB800:    xsi_set_current_line(571, ng7);
    t3 = (t0 + 19632U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 6664);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_lshift(t15, 16, t3, 2, t6, 32);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t15);
    t10 = (t8 | t9);
    *((unsigned int *)t23) = t10;
    t5 = (t4 + 4);
    t7 = (t15 + 4);
    t13 = (t23 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t16 = (t11 | t12);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t13);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB809;

LAB810:
LAB811:    t30 = (t0 + 31872);
    xsi_vlogvar_assign_value(t30, t23, 0, 0, 16);
    goto LAB802;

LAB803:    t115 = *((unsigned int *)t109);
    t116 = *((unsigned int *)t131);
    *((unsigned int *)t109) = (t115 | t116);
    t138 = (t119 + 4);
    t143 = (t96 + 4);
    t120 = *((unsigned int *)t138);
    t121 = (~(t120));
    t122 = *((unsigned int *)t119);
    t164 = (t122 & t121);
    t123 = *((unsigned int *)t143);
    t124 = (~(t123));
    t127 = *((unsigned int *)t96);
    t198 = (t127 & t124);
    t128 = (~(t164));
    t129 = (~(t198));
    t133 = *((unsigned int *)t131);
    *((unsigned int *)t131) = (t133 & t128);
    t134 = *((unsigned int *)t131);
    *((unsigned int *)t131) = (t134 & t129);
    goto LAB805;

LAB806:    t19 = *((unsigned int *)t23);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t23) = (t19 | t20);
    t14 = (t4 + 4);
    t29 = (t15 + 4);
    t21 = *((unsigned int *)t14);
    t22 = (~(t21));
    t24 = *((unsigned int *)t4);
    t89 = (t24 & t22);
    t25 = *((unsigned int *)t29);
    t26 = (~(t25));
    t27 = *((unsigned int *)t15);
    t163 = (t27 & t26);
    t28 = (~(t89));
    t31 = (~(t163));
    t32 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t32 & t28);
    t33 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t33 & t31);
    goto LAB808;

LAB809:    t19 = *((unsigned int *)t23);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t23) = (t19 | t20);
    t14 = (t4 + 4);
    t29 = (t15 + 4);
    t21 = *((unsigned int *)t14);
    t22 = (~(t21));
    t24 = *((unsigned int *)t4);
    t89 = (t24 & t22);
    t25 = *((unsigned int *)t29);
    t26 = (~(t25));
    t27 = *((unsigned int *)t15);
    t163 = (t27 & t26);
    t28 = (~(t89));
    t31 = (~(t163));
    t32 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t32 & t28);
    t33 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t33 & t31);
    goto LAB811;

LAB812:    xsi_set_current_line(574, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t15) = t355;
    t4 = (t0 + 31872);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 0, ng138, 3, t0, (char)114, t15, 64, (char)118, t6, 16);
    goto LAB814;

LAB818:    t14 = (t0 + 51800U);
    *((char **)t14) = &&LAB816;
    goto LAB1;

LAB819:    xsi_set_current_line(579, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t15) = t355;
    t4 = (t0 + 27872);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 31872);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    xsi_vlogfile_write(1, 0, 0, ng139, 4, t0, (char)114, t15, 64, (char)118, t6, 23, (char)118, t14, 16);
    goto LAB821;

LAB824:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB825;

LAB826:    xsi_set_current_line(580, ng7);

LAB829:    xsi_set_current_line(581, ng7);
    t29 = (t0 + 26912);
    t30 = (t29 + 56U);
    t34 = *((char **)t30);
    t35 = ((char*)((ng82)));
    memset(t23, 0, 8);
    t42 = (t34 + 4);
    if (*((unsigned int *)t42) != 0)
        goto LAB831;

LAB830:    t43 = (t35 + 4);
    if (*((unsigned int *)t43) != 0)
        goto LAB831;

LAB834:    if (*((unsigned int *)t34) < *((unsigned int *)t35))
        goto LAB832;

LAB833:    t49 = (t23 + 4);
    t31 = *((unsigned int *)t49);
    t32 = (~(t31));
    t33 = *((unsigned int *)t23);
    t37 = (t33 & t32);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB835;

LAB836:
LAB837:    goto LAB828;

LAB831:    t48 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB833;

LAB832:    *((unsigned int *)t23) = 1;
    goto LAB833;

LAB835:    xsi_set_current_line(581, ng7);

LAB838:    xsi_set_current_line(582, ng7);
    t55 = ((char*)((ng17)));
    t57 = (t55 + 4);
    t39 = *((unsigned int *)t57);
    t40 = (~(t39));
    t41 = *((unsigned int *)t55);
    t44 = (t41 & t40);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB839;

LAB840:
LAB841:    xsi_set_current_line(584, ng7);
    t2 = (t0 + 26912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t4, 2, t5, 32);
    t6 = (t0 + 26912);
    xsi_vlogvar_wait_assign_value(t6, t15, 0, 0, 2, 0LL);
    goto LAB837;

LAB839:    xsi_set_current_line(583, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t36) = t355;
    t63 = (t0 + 26912);
    t68 = (t63 + 56U);
    t69 = *((char **)t68);
    xsi_vlogfile_write(1, 0, 0, ng140, 3, t0, (char)114, t36, 64, (char)118, t69, 2);
    goto LAB841;

LAB845:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB846;

LAB847:    xsi_set_current_line(591, ng7);

LAB850:    xsi_set_current_line(592, ng7);
    t29 = (t0 + 31872);
    t30 = (t29 + 56U);
    t34 = *((char **)t30);
    t35 = (t0 + 32032);
    xsi_vlogvar_wait_assign_value(t35, t34, 0, 0, 16, 25000LL);
    goto LAB849;

LAB852:    *((unsigned int *)t15) = 1;
    goto LAB855;

LAB854:    t4 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB855;

LAB856:    t6 = (t0 + 16752U);
    t7 = *((char **)t6);
    memset(t23, 0, 8);
    t6 = (t7 + 4);
    t19 = *((unsigned int *)t6);
    t20 = (~(t19));
    t21 = *((unsigned int *)t7);
    t22 = (t21 & t20);
    t24 = (t22 & 1U);
    if (t24 != 0)
        goto LAB862;

LAB860:    if (*((unsigned int *)t6) == 0)
        goto LAB859;

LAB861:    t13 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t13) = 1;

LAB862:    memset(t36, 0, 8);
    t14 = (t23 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (t27 & t26);
    t31 = (t28 & 1U);
    if (t31 != 0)
        goto LAB863;

LAB864:    if (*((unsigned int *)t14) != 0)
        goto LAB865;

LAB866:    t32 = *((unsigned int *)t15);
    t33 = *((unsigned int *)t36);
    t37 = (t32 & t33);
    *((unsigned int *)t47) = t37;
    t30 = (t15 + 4);
    t34 = (t36 + 4);
    t35 = (t47 + 4);
    t38 = *((unsigned int *)t30);
    t39 = *((unsigned int *)t34);
    t40 = (t38 | t39);
    *((unsigned int *)t35) = t40;
    t41 = *((unsigned int *)t35);
    t44 = (t41 != 0);
    if (t44 == 1)
        goto LAB867;

LAB868:
LAB869:    goto LAB858;

LAB859:    *((unsigned int *)t23) = 1;
    goto LAB862;

LAB863:    *((unsigned int *)t36) = 1;
    goto LAB866;

LAB865:    t29 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB866;

LAB867:    t45 = *((unsigned int *)t47);
    t46 = *((unsigned int *)t35);
    *((unsigned int *)t47) = (t45 | t46);
    t42 = (t15 + 4);
    t43 = (t36 + 4);
    t50 = *((unsigned int *)t15);
    t51 = (~(t50));
    t52 = *((unsigned int *)t42);
    t53 = (~(t52));
    t54 = *((unsigned int *)t36);
    t58 = (~(t54));
    t59 = *((unsigned int *)t43);
    t60 = (~(t59));
    t88 = (t51 & t53);
    t89 = (t58 & t60);
    t61 = (~(t88));
    t62 = (~(t89));
    t65 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t65 & t61);
    t66 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t66 & t62);
    t67 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t67 & t61);
    t71 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t71 & t62);
    goto LAB869;

LAB870:    *((unsigned int *)t56) = 1;
    goto LAB873;

LAB872:    t49 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB873;

LAB874:    t57 = (t0 + 16912U);
    t63 = *((char **)t57);
    memset(t96, 0, 8);
    t57 = (t63 + 4);
    t82 = *((unsigned int *)t57);
    t83 = (~(t82));
    t84 = *((unsigned int *)t63);
    t85 = (t84 & t83);
    t86 = (t85 & 1U);
    if (t86 != 0)
        goto LAB877;

LAB878:    if (*((unsigned int *)t57) != 0)
        goto LAB879;

LAB880:    t87 = *((unsigned int *)t56);
    t90 = *((unsigned int *)t96);
    t91 = (t87 & t90);
    *((unsigned int *)t109) = t91;
    t69 = (t56 + 4);
    t70 = (t96 + 4);
    t78 = (t109 + 4);
    t92 = *((unsigned int *)t69);
    t93 = *((unsigned int *)t70);
    t94 = (t92 | t93);
    *((unsigned int *)t78) = t94;
    t95 = *((unsigned int *)t78);
    t98 = (t95 != 0);
    if (t98 == 1)
        goto LAB881;

LAB882:
LAB883:    goto LAB876;

LAB877:    *((unsigned int *)t96) = 1;
    goto LAB880;

LAB879:    t68 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB880;

LAB881:    t99 = *((unsigned int *)t109);
    t100 = *((unsigned int *)t78);
    *((unsigned int *)t109) = (t99 | t100);
    t79 = (t56 + 4);
    t97 = (t96 + 4);
    t101 = *((unsigned int *)t56);
    t102 = (~(t101));
    t105 = *((unsigned int *)t79);
    t106 = (~(t105));
    t107 = *((unsigned int *)t96);
    t108 = (~(t107));
    t112 = *((unsigned int *)t97);
    t113 = (~(t112));
    t163 = (t102 & t106);
    t164 = (t108 & t113);
    t114 = (~(t163));
    t115 = (~(t164));
    t116 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t116 & t114);
    t120 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t120 & t115);
    t121 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t121 & t114);
    t122 = *((unsigned int *)t109);
    *((unsigned int *)t109) = (t122 & t115);
    goto LAB883;

LAB884:    *((unsigned int *)t118) = 1;
    goto LAB887;

LAB886:    t104 = (t118 + 4);
    *((unsigned int *)t118) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB887;

LAB888:    t117 = (t0 + 27712);
    t119 = (t117 + 56U);
    t125 = *((char **)t119);
    memset(t132, 0, 8);
    t126 = (t125 + 4);
    t136 = *((unsigned int *)t126);
    t137 = (~(t136));
    t140 = *((unsigned int *)t125);
    t141 = (t140 & t137);
    t142 = (t141 & 1U);
    if (t142 != 0)
        goto LAB891;

LAB892:    if (*((unsigned int *)t126) != 0)
        goto LAB893;

LAB894:    t146 = *((unsigned int *)t118);
    t147 = *((unsigned int *)t132);
    t148 = (t146 & t147);
    *((unsigned int *)t139) = t148;
    t131 = (t118 + 4);
    t138 = (t132 + 4);
    t143 = (t139 + 4);
    t149 = *((unsigned int *)t131);
    t150 = *((unsigned int *)t138);
    t151 = (t149 | t150);
    *((unsigned int *)t143) = t151;
    t152 = *((unsigned int *)t143);
    t155 = (t152 != 0);
    if (t155 == 1)
        goto LAB895;

LAB896:
LAB897:    goto LAB890;

LAB891:    *((unsigned int *)t132) = 1;
    goto LAB894;

LAB893:    t130 = (t132 + 4);
    *((unsigned int *)t132) = 1;
    *((unsigned int *)t130) = 1;
    goto LAB894;

LAB895:    t156 = *((unsigned int *)t139);
    t157 = *((unsigned int *)t143);
    *((unsigned int *)t139) = (t156 | t157);
    t144 = (t118 + 4);
    t145 = (t132 + 4);
    t158 = *((unsigned int *)t118);
    t159 = (~(t158));
    t160 = *((unsigned int *)t144);
    t161 = (~(t160));
    t162 = *((unsigned int *)t132);
    t165 = (~(t162));
    t166 = *((unsigned int *)t145);
    t167 = (~(t166));
    t198 = (t159 & t161);
    t202 = (t165 & t167);
    t168 = (~(t198));
    t169 = (~(t202));
    t170 = *((unsigned int *)t143);
    *((unsigned int *)t143) = (t170 & t168);
    t173 = *((unsigned int *)t143);
    *((unsigned int *)t143) = (t173 & t169);
    t174 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t174 & t168);
    t175 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t175 & t169);
    goto LAB897;

LAB898:    xsi_set_current_line(601, ng7);

LAB901:    xsi_set_current_line(602, ng7);
    t154 = ((char*)((ng16)));
    t172 = (t0 + 31872);
    xsi_vlogvar_assign_value(t172, t154, 0, 0, 16);
    xsi_set_current_line(603, ng7);
    t2 = (t0 + 27392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8840);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t16 = (t11 ^ t12);
    t17 = (t10 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB905;

LAB902:    if (t20 != 0)
        goto LAB904;

LAB903:    *((unsigned int *)t15) = 1;

LAB905:    t14 = (t15 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    t26 = *((unsigned int *)t15);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB906;

LAB907:
LAB908:    xsi_set_current_line(605, ng7);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng17)));
    memset(t15, 0, 8);
    t4 = (t2 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB910;

LAB909:    t5 = (t3 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB910;

LAB913:    if (*((unsigned int *)t2) > *((unsigned int *)t3))
        goto LAB911;

LAB912:    memset(t23, 0, 8);
    t7 = (t15 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t15);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB914;

LAB915:    if (*((unsigned int *)t7) != 0)
        goto LAB916;

LAB917:    t14 = (t23 + 4);
    t16 = *((unsigned int *)t23);
    t17 = *((unsigned int *)t14);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB918;

LAB919:    memcpy(t56, t23, 8);

LAB920:    t68 = (t56 + 4);
    t62 = *((unsigned int *)t68);
    t65 = (~(t62));
    t66 = *((unsigned int *)t56);
    t67 = (t66 & t65);
    t71 = (t67 != 0);
    if (t71 > 0)
        goto LAB931;

LAB932:
LAB933:    xsi_set_current_line(607, ng7);
    t2 = ((char*)((ng17)));
    memset(t15, 0, 8);
    t3 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t2);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB937;

LAB935:    if (*((unsigned int *)t3) == 0)
        goto LAB934;

LAB936:    t4 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t4) = 1;

LAB937:    t5 = (t15 + 4);
    t16 = *((unsigned int *)t5);
    t17 = (~(t16));
    t18 = *((unsigned int *)t15);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB938;

LAB939:
LAB940:    xsi_set_current_line(609, ng7);
    t2 = (t0 + 27872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6664);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_rshift(t15, 23, t4, 23, t6, 32);

LAB941:    t5 = ((char*)((ng6)));
    t7 = ((char*)((ng2)));
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t7);
    t10 = (t8 & t9);
    *((unsigned int *)t23) = t10;
    t13 = (t5 + 4);
    t14 = (t7 + 4);
    t29 = (t23 + 4);
    t11 = *((unsigned int *)t13);
    t12 = *((unsigned int *)t14);
    t16 = (t11 | t12);
    *((unsigned int *)t29) = t16;
    t17 = *((unsigned int *)t29);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB951;

LAB952:
LAB953:    t163 = xsi_vlog_unsigned_case_compare(t15, 23, t23, 23);
    if (t163 == 1)
        goto LAB942;

LAB943:    t2 = ((char*)((ng17)));
    t3 = ((char*)((ng2)));
    t8 = *((unsigned int *)t2);
    t9 = *((unsigned int *)t3);
    t10 = (t8 & t9);
    *((unsigned int *)t23) = t10;
    t4 = (t2 + 4);
    t5 = (t3 + 4);
    t6 = (t23 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t16 = (t11 | t12);
    *((unsigned int *)t6) = t16;
    t17 = *((unsigned int *)t6);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB957;

LAB958:
LAB959:    t163 = xsi_vlog_unsigned_case_compare(t15, 23, t23, 23);
    if (t163 == 1)
        goto LAB944;

LAB945:    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng2)));
    t8 = *((unsigned int *)t2);
    t9 = *((unsigned int *)t3);
    t10 = (t8 & t9);
    *((unsigned int *)t23) = t10;
    t4 = (t2 + 4);
    t5 = (t3 + 4);
    t6 = (t23 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t16 = (t11 | t12);
    *((unsigned int *)t6) = t16;
    t17 = *((unsigned int *)t6);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB963;

LAB964:
LAB965:    t163 = xsi_vlog_unsigned_case_compare(t15, 23, t23, 23);
    if (t163 == 1)
        goto LAB946;

LAB947:
LAB949:
LAB948:    xsi_set_current_line(613, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t23) = t355;
    t2 = (t0 + 27872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6664);
    t6 = *((char **)t5);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_rshift(t36, 23, t4, 23, t6, 32);
    xsi_vlogfile_write(1, 0, 0, ng126, 3, t0, (char)114, t23, 64, (char)118, t36, 23);

LAB950:    xsi_set_current_line(615, ng7);
    t2 = ((char*)((ng17)));
    t3 = (t2 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (~(t8));
    t10 = *((unsigned int *)t2);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB969;

LAB970:
LAB971:    xsi_set_current_line(617, ng7);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 26912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(618, ng7);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 32032);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 5000LL);
    xsi_set_current_line(619, ng7);
    t2 = (t0 + 31872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 32032);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 20000LL);
    xsi_set_current_line(620, ng7);
    t2 = (t0 + 8840);
    t3 = *((char **)t2);
    t2 = (t0 + 27392);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(621, ng7);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 28672);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(622, ng7);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 28832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(623, ng7);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 28352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB900;

LAB904:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB905;

LAB906:    xsi_set_current_line(604, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t23) = t355;
    xsi_vlogfile_write(1, 0, 0, ng141, 2, t0, (char)114, t23, 64);
    goto LAB908;

LAB910:    t6 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB912;

LAB911:    *((unsigned int *)t15) = 1;
    goto LAB912;

LAB914:    *((unsigned int *)t23) = 1;
    goto LAB917;

LAB916:    t13 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB917;

LAB918:    t29 = (t0 + 17392U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng6)));
    memset(t36, 0, 8);
    if (*((unsigned int *)t30) != *((unsigned int *)t29))
        goto LAB922;

LAB921:    t34 = (t30 + 4);
    t35 = (t29 + 4);
    if (*((unsigned int *)t34) != *((unsigned int *)t35))
        goto LAB922;

LAB923:    memset(t47, 0, 8);
    t42 = (t36 + 4);
    t19 = *((unsigned int *)t42);
    t20 = (~(t19));
    t21 = *((unsigned int *)t36);
    t22 = (t21 & t20);
    t24 = (t22 & 1U);
    if (t24 != 0)
        goto LAB924;

LAB925:    if (*((unsigned int *)t42) != 0)
        goto LAB926;

LAB927:    t25 = *((unsigned int *)t23);
    t26 = *((unsigned int *)t47);
    t27 = (t25 & t26);
    *((unsigned int *)t56) = t27;
    t48 = (t23 + 4);
    t49 = (t47 + 4);
    t55 = (t56 + 4);
    t28 = *((unsigned int *)t48);
    t31 = *((unsigned int *)t49);
    t32 = (t28 | t31);
    *((unsigned int *)t55) = t32;
    t33 = *((unsigned int *)t55);
    t37 = (t33 != 0);
    if (t37 == 1)
        goto LAB928;

LAB929:
LAB930:    goto LAB920;

LAB922:    *((unsigned int *)t36) = 1;
    goto LAB923;

LAB924:    *((unsigned int *)t47) = 1;
    goto LAB927;

LAB926:    t43 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB927;

LAB928:    t38 = *((unsigned int *)t56);
    t39 = *((unsigned int *)t55);
    *((unsigned int *)t56) = (t38 | t39);
    t57 = (t23 + 4);
    t63 = (t47 + 4);
    t40 = *((unsigned int *)t23);
    t41 = (~(t40));
    t44 = *((unsigned int *)t57);
    t45 = (~(t44));
    t46 = *((unsigned int *)t47);
    t50 = (~(t46));
    t51 = *((unsigned int *)t63);
    t52 = (~(t51));
    t88 = (t41 & t45);
    t89 = (t50 & t52);
    t53 = (~(t88));
    t54 = (~(t89));
    t58 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t58 & t53);
    t59 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t59 & t54);
    t60 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t60 & t53);
    t61 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t61 & t54);
    goto LAB930;

LAB931:    xsi_set_current_line(606, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t96) = t355;
    xsi_vlogfile_write(1, 0, 0, ng137, 2, t0, (char)114, t96, 64);
    goto LAB933;

LAB934:    *((unsigned int *)t15) = 1;
    goto LAB937;

LAB938:    xsi_set_current_line(608, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t23) = t355;
    xsi_vlogfile_write(1, 0, 0, ng142, 2, t0, (char)114, t23, 64);
    goto LAB940;

LAB942:    xsi_set_current_line(610, ng7);
    t35 = (t0 + 19792U);
    t42 = *((char **)t35);
    t35 = ((char*)((ng6)));
    t43 = (t0 + 6664);
    t48 = *((char **)t43);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_lshift(t36, 16, t35, 2, t48, 32);
    t41 = *((unsigned int *)t42);
    t44 = *((unsigned int *)t36);
    t45 = (t41 | t44);
    *((unsigned int *)t47) = t45;
    t43 = (t42 + 4);
    t49 = (t36 + 4);
    t55 = (t47 + 4);
    t46 = *((unsigned int *)t43);
    t50 = *((unsigned int *)t49);
    t51 = (t46 | t50);
    *((unsigned int *)t55) = t51;
    t52 = *((unsigned int *)t55);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB954;

LAB955:
LAB956:    t68 = (t0 + 31872);
    xsi_vlogvar_assign_value(t68, t47, 0, 0, 16);
    goto LAB950;

LAB944:    xsi_set_current_line(611, ng7);
    t14 = (t0 + 19952U);
    t29 = *((char **)t14);
    t14 = ((char*)((ng17)));
    t30 = (t0 + 6664);
    t34 = *((char **)t30);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_lshift(t36, 16, t14, 2, t34, 32);
    t41 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t36);
    t45 = (t41 | t44);
    *((unsigned int *)t47) = t45;
    t30 = (t29 + 4);
    t35 = (t36 + 4);
    t42 = (t47 + 4);
    t46 = *((unsigned int *)t30);
    t50 = *((unsigned int *)t35);
    t51 = (t46 | t50);
    *((unsigned int *)t42) = t51;
    t52 = *((unsigned int *)t42);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB960;

LAB961:
LAB962:    t49 = (t0 + 31872);
    xsi_vlogvar_assign_value(t49, t47, 0, 0, 16);
    goto LAB950;

LAB946:    xsi_set_current_line(612, ng7);
    t14 = (t0 + 19632U);
    t29 = *((char **)t14);
    t14 = ((char*)((ng1)));
    t30 = (t0 + 6664);
    t34 = *((char **)t30);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_lshift(t36, 16, t14, 2, t34, 32);
    t41 = *((unsigned int *)t29);
    t44 = *((unsigned int *)t36);
    t45 = (t41 | t44);
    *((unsigned int *)t47) = t45;
    t30 = (t29 + 4);
    t35 = (t36 + 4);
    t42 = (t47 + 4);
    t46 = *((unsigned int *)t30);
    t50 = *((unsigned int *)t35);
    t51 = (t46 | t50);
    *((unsigned int *)t42) = t51;
    t52 = *((unsigned int *)t42);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB966;

LAB967:
LAB968:    t49 = (t0 + 31872);
    xsi_vlogvar_assign_value(t49, t47, 0, 0, 16);
    goto LAB950;

LAB951:    t19 = *((unsigned int *)t23);
    t20 = *((unsigned int *)t29);
    *((unsigned int *)t23) = (t19 | t20);
    t30 = (t5 + 4);
    t34 = (t7 + 4);
    t21 = *((unsigned int *)t5);
    t22 = (~(t21));
    t24 = *((unsigned int *)t30);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (~(t26));
    t28 = *((unsigned int *)t34);
    t31 = (~(t28));
    t88 = (t22 & t25);
    t89 = (t27 & t31);
    t32 = (~(t88));
    t33 = (~(t89));
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t37 & t32);
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & t33);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & t32);
    t40 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t40 & t33);
    goto LAB953;

LAB954:    t54 = *((unsigned int *)t47);
    t58 = *((unsigned int *)t55);
    *((unsigned int *)t47) = (t54 | t58);
    t57 = (t42 + 4);
    t63 = (t36 + 4);
    t59 = *((unsigned int *)t57);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t164 = (t61 & t60);
    t62 = *((unsigned int *)t63);
    t65 = (~(t62));
    t66 = *((unsigned int *)t36);
    t198 = (t66 & t65);
    t67 = (~(t164));
    t71 = (~(t198));
    t72 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t72 & t67);
    t73 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t73 & t71);
    goto LAB956;

LAB957:    t19 = *((unsigned int *)t23);
    t20 = *((unsigned int *)t6);
    *((unsigned int *)t23) = (t19 | t20);
    t7 = (t2 + 4);
    t13 = (t3 + 4);
    t21 = *((unsigned int *)t2);
    t22 = (~(t21));
    t24 = *((unsigned int *)t7);
    t25 = (~(t24));
    t26 = *((unsigned int *)t3);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t31 = (~(t28));
    t88 = (t22 & t25);
    t89 = (t27 & t31);
    t32 = (~(t88));
    t33 = (~(t89));
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t32);
    t38 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t38 & t33);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & t32);
    t40 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t40 & t33);
    goto LAB959;

LAB960:    t54 = *((unsigned int *)t47);
    t58 = *((unsigned int *)t42);
    *((unsigned int *)t47) = (t54 | t58);
    t43 = (t29 + 4);
    t48 = (t36 + 4);
    t59 = *((unsigned int *)t43);
    t60 = (~(t59));
    t61 = *((unsigned int *)t29);
    t164 = (t61 & t60);
    t62 = *((unsigned int *)t48);
    t65 = (~(t62));
    t66 = *((unsigned int *)t36);
    t198 = (t66 & t65);
    t67 = (~(t164));
    t71 = (~(t198));
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t67);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t71);
    goto LAB962;

LAB963:    t19 = *((unsigned int *)t23);
    t20 = *((unsigned int *)t6);
    *((unsigned int *)t23) = (t19 | t20);
    t7 = (t2 + 4);
    t13 = (t3 + 4);
    t21 = *((unsigned int *)t2);
    t22 = (~(t21));
    t24 = *((unsigned int *)t7);
    t25 = (~(t24));
    t26 = *((unsigned int *)t3);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t31 = (~(t28));
    t88 = (t22 & t25);
    t89 = (t27 & t31);
    t32 = (~(t88));
    t33 = (~(t89));
    t37 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t37 & t32);
    t38 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t38 & t33);
    t39 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t39 & t32);
    t40 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t40 & t33);
    goto LAB965;

LAB966:    t54 = *((unsigned int *)t47);
    t58 = *((unsigned int *)t42);
    *((unsigned int *)t47) = (t54 | t58);
    t43 = (t29 + 4);
    t48 = (t36 + 4);
    t59 = *((unsigned int *)t43);
    t60 = (~(t59));
    t61 = *((unsigned int *)t29);
    t164 = (t61 & t60);
    t62 = *((unsigned int *)t48);
    t65 = (~(t62));
    t66 = *((unsigned int *)t36);
    t198 = (t66 & t65);
    t67 = (~(t164));
    t71 = (~(t198));
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t67);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t71);
    goto LAB968;

LAB969:    xsi_set_current_line(616, ng7);
    t355 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t23) = t355;
    t4 = (t0 + 27872);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 6664);
    t13 = *((char **)t7);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_rshift(t36, 23, t6, 23, t13, 32);
    t7 = (t0 + 31872);
    t14 = (t7 + 56U);
    t29 = *((char **)t14);
    xsi_vlogfile_write(1, 0, 0, ng143, 4, t0, (char)114, t23, 64, (char)118, t36, 23, (char)118, t29, 16);
    goto LAB971;

LAB972:    xsi_set_current_line(626, ng7);

LAB975:    xsi_set_current_line(627, ng7);
    t4 = ((char*)((ng8)));
    t5 = (t0 + 31552);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(628, ng7);
    xsi_set_current_line(628, ng7);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 30432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB976:    t2 = (t0 + 30432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5712);
    t6 = *((char **)t5);
    memset(t23, 0, 8);
    xsi_vlog_signed_less(t23, 32, t4, 32, t6, 32);
    t5 = (t23 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t23);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB977;

LAB978:    xsi_set_current_line(631, ng7);
    t2 = (t0 + 31552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 31712);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 5000LL);
    goto LAB974;

LAB977:    xsi_set_current_line(628, ng7);

LAB979:    xsi_set_current_line(629, ng7);
    t7 = (t0 + 31552);
    t13 = (t7 + 56U);
    t14 = *((char **)t13);
    t29 = ((char*)((ng14)));
    t30 = (t0 + 17392U);
    t34 = *((char **)t30);
    t30 = (t0 + 17352U);
    t35 = (t30 + 72U);
    t42 = *((char **)t35);
    t43 = (t0 + 30432);
    t48 = (t43 + 56U);
    t49 = *((char **)t48);
    xsi_vlog_generic_get_index_select_value(t56, 1, t34, t42, 2, t49, 32, 1);
    memset(t47, 0, 8);
    t55 = (t56 + 4);
    t16 = *((unsigned int *)t55);
    t17 = (~(t16));
    t18 = *((unsigned int *)t56);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB983;

LAB981:    if (*((unsigned int *)t55) == 0)
        goto LAB980;

LAB982:    t57 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t57) = 1;

LAB983:    xsi_vlog_mul_concat(t36, 16, 1, t29, 1U, t47, 1);
    t63 = (t0 + 30432);
    t68 = (t63 + 56U);
    t69 = *((char **)t68);
    t70 = (t0 + 5576);
    t78 = *((char **)t70);
    t70 = (t0 + 5712);
    t79 = *((char **)t70);
    memset(t96, 0, 8);
    xsi_vlog_signed_divide(t96, 32, t78, 32, t79, 32);
    memset(t109, 0, 8);
    xsi_vlog_signed_multiply(t109, 32, t69, 32, t96, 32);
    memset(t118, 0, 8);
    xsi_vlog_unsigned_lshift(t118, 16, t36, 16, t109, 32);
    t21 = *((unsigned int *)t14);
    t22 = *((unsigned int *)t118);
    t24 = (t21 | t22);
    *((unsigned int *)t132) = t24;
    t70 = (t14 + 4);
    t97 = (t118 + 4);
    t103 = (t132 + 4);
    t25 = *((unsigned int *)t70);
    t26 = *((unsigned int *)t97);
    t27 = (t25 | t26);
    *((unsigned int *)t103) = t27;
    t28 = *((unsigned int *)t103);
    t31 = (t28 != 0);
    if (t31 == 1)
        goto LAB984;

LAB985:
LAB986:    t117 = (t0 + 31552);
    xsi_vlogvar_assign_value(t117, t132, 0, 0, 16);
    xsi_set_current_line(628, ng7);
    t2 = (t0 + 30432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t23, 0, 8);
    xsi_vlog_signed_add(t23, 32, t4, 32, t5, 32);
    t6 = (t0 + 30432);
    xsi_vlogvar_assign_value(t6, t23, 0, 0, 32);
    goto LAB976;

LAB980:    *((unsigned int *)t47) = 1;
    goto LAB983;

LAB984:    t32 = *((unsigned int *)t132);
    t33 = *((unsigned int *)t103);
    *((unsigned int *)t132) = (t32 | t33);
    t104 = (t14 + 4);
    t111 = (t118 + 4);
    t37 = *((unsigned int *)t104);
    t38 = (~(t37));
    t39 = *((unsigned int *)t14);
    t88 = (t39 & t38);
    t40 = *((unsigned int *)t111);
    t41 = (~(t40));
    t44 = *((unsigned int *)t118);
    t89 = (t44 & t41);
    t45 = (~(t88));
    t46 = (~(t89));
    t50 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t50 & t45);
    t51 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t51 & t46);
    goto LAB986;

}

static void Always_636_37(char *t0)
{
    char t17[8];
    char t21[8];
    char t34[8];
    char t38[8];
    char t53[8];
    char t69[8];
    char t70[8];
    char t74[8];
    char t82[8];
    char t123[8];
    char t134[8];
    char t135[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t71;
    char *t72;
    char *t73;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    char *t121;
    char *t122;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    char *t140;
    char *t141;
    char *t142;
    char *t143;
    char *t144;
    char *t145;
    unsigned int t146;
    int t147;
    char *t148;
    unsigned int t149;
    int t150;
    int t151;
    unsigned int t152;
    unsigned int t153;
    int t154;
    int t155;

LAB0:    t1 = (t0 + 52048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(636, ng7);
    t2 = (t0 + 57112);
    *((int *)t2) = 1;
    t3 = (t0 + 52080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(636, ng7);

LAB5:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 51856);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(638, ng7);
    t6 = (t0 + 26112);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB8;

LAB9:
LAB10:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 51856);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB8:    xsi_set_current_line(638, ng7);

LAB11:    xsi_set_current_line(639, ng7);
    t15 = ((char*)((ng8)));
    t16 = (t0 + 39712);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 32);
    xsi_set_current_line(641, ng7);
    t2 = (t0 + 34752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t17, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB13;

LAB12:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB13;

LAB16:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB14;

LAB15:    t9 = (t17 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t17);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(651, ng7);
    xsi_set_current_line(651, ng7);
    t2 = (t0 + 39712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 26592);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 11);

LAB62:    t2 = (t0 + 26592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 26752);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t17, 0, 8);
    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB64;

LAB63:    t9 = (t7 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB64;

LAB67:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB65;

LAB66:    t16 = (t17 + 4);
    t10 = *((unsigned int *)t16);
    t11 = (~(t10));
    t12 = *((unsigned int *)t17);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(655, ng7);
    t2 = (t0 + 39712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 26752);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 11);
    goto LAB10;

LAB13:    t8 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB15;

LAB14:    *((unsigned int *)t17) = 1;
    goto LAB15;

LAB17:    xsi_set_current_line(641, ng7);

LAB20:    xsi_set_current_line(642, ng7);
    xsi_set_current_line(642, ng7);
    t15 = ((char*)((ng8)));
    t16 = (t0 + 26592);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 11);

LAB21:    t2 = (t0 + 26592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 26752);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t17, 0, 8);
    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB23;

LAB22:    t9 = (t7 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB24;

LAB25:    t16 = (t17 + 4);
    t10 = *((unsigned int *)t16);
    t11 = (~(t10));
    t12 = *((unsigned int *)t17);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB27;

LAB28:    goto LAB19;

LAB23:    t15 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB25;

LAB24:    *((unsigned int *)t17) = 1;
    goto LAB25;

LAB27:    xsi_set_current_line(642, ng7);

LAB29:    xsi_set_current_line(643, ng7);
    t18 = (t0 + 26432);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t22 = (t0 + 26432);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 26432);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 26592);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_get_array_select_value(t21, 24, t20, t24, t27, 2, 1, t30, 11, 2);
    t31 = (t0 + 34592);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t34, 0, 8);
    t35 = (t21 + 4);
    if (*((unsigned int *)t35) != 0)
        goto LAB31;

LAB30:    t36 = (t33 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t21) > *((unsigned int *)t33))
        goto LAB32;

LAB33:    memset(t38, 0, 8);
    t39 = (t34 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t34);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t39) != 0)
        goto LAB37;

LAB38:    t46 = (t38 + 4);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t46);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB39;

LAB40:    memcpy(t82, t38, 8);

LAB41:    t114 = (t82 + 4);
    t115 = *((unsigned int *)t114);
    t116 = (~(t115));
    t117 = *((unsigned int *)t82);
    t118 = (t117 & t116);
    t119 = (t118 != 0);
    if (t119 > 0)
        goto LAB54;

LAB55:
LAB56:    xsi_set_current_line(642, ng7);
    t2 = (t0 + 26592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t4, 11, t5, 32);
    t6 = (t0 + 26592);
    xsi_vlogvar_assign_value(t6, t17, 0, 0, 11);
    goto LAB21;

LAB31:    t37 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB33;

LAB32:    *((unsigned int *)t34) = 1;
    goto LAB33;

LAB35:    *((unsigned int *)t38) = 1;
    goto LAB38;

LAB37:    t45 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB38;

LAB39:    t50 = (t0 + 26432);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t54 = (t0 + 26432);
    t55 = (t54 + 72U);
    t56 = *((char **)t55);
    t57 = (t0 + 26432);
    t58 = (t57 + 64U);
    t59 = *((char **)t58);
    t60 = (t0 + 26592);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    xsi_vlog_generic_get_array_select_value(t53, 24, t52, t56, t59, 2, 1, t62, 11, 2);
    t63 = (t0 + 34592);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    t66 = (t0 + 34752);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    memset(t69, 0, 8);
    xsi_vlog_unsigned_add(t69, 24, t65, 24, t68, 24);
    memset(t70, 0, 8);
    t71 = (t53 + 4);
    if (*((unsigned int *)t71) != 0)
        goto LAB43;

LAB42:    t72 = (t69 + 4);
    if (*((unsigned int *)t72) != 0)
        goto LAB43;

LAB46:    if (*((unsigned int *)t53) < *((unsigned int *)t69))
        goto LAB44;

LAB45:    memset(t74, 0, 8);
    t75 = (t70 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t70);
    t79 = (t78 & t77);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t75) != 0)
        goto LAB49;

LAB50:    t83 = *((unsigned int *)t38);
    t84 = *((unsigned int *)t74);
    t85 = (t83 & t84);
    *((unsigned int *)t82) = t85;
    t86 = (t38 + 4);
    t87 = (t74 + 4);
    t88 = (t82 + 4);
    t89 = *((unsigned int *)t86);
    t90 = *((unsigned int *)t87);
    t91 = (t89 | t90);
    *((unsigned int *)t88) = t91;
    t92 = *((unsigned int *)t88);
    t93 = (t92 != 0);
    if (t93 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB41;

LAB43:    t73 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB45;

LAB44:    *((unsigned int *)t70) = 1;
    goto LAB45;

LAB47:    *((unsigned int *)t74) = 1;
    goto LAB50;

LAB49:    t81 = (t74 + 4);
    *((unsigned int *)t74) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB50;

LAB51:    t94 = *((unsigned int *)t82);
    t95 = *((unsigned int *)t88);
    *((unsigned int *)t82) = (t94 | t95);
    t96 = (t38 + 4);
    t97 = (t74 + 4);
    t98 = *((unsigned int *)t38);
    t99 = (~(t98));
    t100 = *((unsigned int *)t96);
    t101 = (~(t100));
    t102 = *((unsigned int *)t74);
    t103 = (~(t102));
    t104 = *((unsigned int *)t97);
    t105 = (~(t104));
    t106 = (t99 & t101);
    t107 = (t103 & t105);
    t108 = (~(t106));
    t109 = (~(t107));
    t110 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t110 & t108);
    t111 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t111 & t109);
    t112 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t112 & t108);
    t113 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t113 & t109);
    goto LAB53;

LAB54:    xsi_set_current_line(643, ng7);

LAB57:    xsi_set_current_line(644, ng7);
    t120 = (t0 + 26432);
    t121 = (t120 + 56U);
    t122 = *((char **)t121);
    t124 = (t0 + 26432);
    t125 = (t124 + 72U);
    t126 = *((char **)t125);
    t127 = (t0 + 26432);
    t128 = (t127 + 64U);
    t129 = *((char **)t128);
    t130 = (t0 + 26592);
    t131 = (t130 + 56U);
    t132 = *((char **)t131);
    xsi_vlog_generic_get_array_select_value(t123, 23, t122, t126, t129, 2, 1, t132, 11, 2);
    t133 = (t0 + 26432);
    t136 = (t0 + 26432);
    t137 = (t136 + 72U);
    t138 = *((char **)t137);
    t139 = (t0 + 26432);
    t140 = (t139 + 64U);
    t141 = *((char **)t140);
    t142 = (t0 + 39712);
    t143 = (t142 + 56U);
    t144 = *((char **)t143);
    xsi_vlog_generic_convert_array_indices(t134, t135, t138, t141, 2, 1, t144, 32, 1);
    t145 = (t134 + 4);
    t146 = *((unsigned int *)t145);
    t147 = (!(t146));
    t148 = (t135 + 4);
    t149 = *((unsigned int *)t148);
    t150 = (!(t149));
    t151 = (t147 && t150);
    if (t151 == 1)
        goto LAB58;

LAB59:    xsi_set_current_line(645, ng7);
    t2 = (t0 + 26272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 26272);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t8 = (t0 + 26272);
    t9 = (t8 + 64U);
    t15 = *((char **)t9);
    t16 = (t0 + 26592);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_get_array_select_value(t17, 16, t4, t7, t15, 2, 1, t19, 11, 2);
    t20 = (t0 + 26272);
    t22 = (t0 + 26272);
    t23 = (t22 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 26272);
    t26 = (t25 + 64U);
    t27 = *((char **)t26);
    t28 = (t0 + 39712);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    xsi_vlog_generic_convert_array_indices(t21, t34, t24, t27, 2, 1, t30, 32, 1);
    t31 = (t21 + 4);
    t10 = *((unsigned int *)t31);
    t106 = (!(t10));
    t32 = (t34 + 4);
    t11 = *((unsigned int *)t32);
    t107 = (!(t11));
    t147 = (t106 && t107);
    if (t147 == 1)
        goto LAB60;

LAB61:    xsi_set_current_line(646, ng7);
    t2 = (t0 + 39712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t4, 32, t5, 32);
    t6 = (t0 + 39712);
    xsi_vlogvar_assign_value(t6, t17, 0, 0, 32);
    goto LAB56;

LAB58:    t152 = *((unsigned int *)t134);
    t153 = *((unsigned int *)t135);
    t154 = (t152 - t153);
    t155 = (t154 + 1);
    xsi_vlogvar_assign_value(t133, t123, 0, *((unsigned int *)t135), t155);
    goto LAB59;

LAB60:    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t34);
    t150 = (t12 - t13);
    t151 = (t150 + 1);
    xsi_vlogvar_assign_value(t20, t17, 0, *((unsigned int *)t34), t151);
    goto LAB61;

LAB64:    t15 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB66;

LAB65:    *((unsigned int *)t17) = 1;
    goto LAB66;

LAB68:    xsi_set_current_line(651, ng7);

LAB70:    xsi_set_current_line(652, ng7);
    t18 = ((char*)((ng108)));
    t19 = (t0 + 26432);
    t20 = (t0 + 26432);
    t22 = (t20 + 72U);
    t23 = *((char **)t22);
    t24 = (t0 + 26432);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = (t0 + 26592);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_generic_convert_array_indices(t21, t34, t23, t26, 2, 1, t29, 11, 2);
    t30 = (t21 + 4);
    t40 = *((unsigned int *)t30);
    t106 = (!(t40));
    t31 = (t34 + 4);
    t41 = *((unsigned int *)t31);
    t107 = (!(t41));
    t147 = (t106 && t107);
    if (t147 == 1)
        goto LAB71;

LAB72:    xsi_set_current_line(653, ng7);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 26272);
    t4 = (t0 + 26272);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = (t0 + 26272);
    t8 = (t7 + 64U);
    t9 = *((char **)t8);
    t15 = (t0 + 26592);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    xsi_vlog_generic_convert_array_indices(t17, t21, t6, t9, 2, 1, t18, 11, 2);
    t19 = (t17 + 4);
    t10 = *((unsigned int *)t19);
    t106 = (!(t10));
    t20 = (t21 + 4);
    t11 = *((unsigned int *)t20);
    t107 = (!(t11));
    t147 = (t106 && t107);
    if (t147 == 1)
        goto LAB73;

LAB74:    xsi_set_current_line(651, ng7);
    t2 = (t0 + 26592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t4, 11, t5, 32);
    t6 = (t0 + 26592);
    xsi_vlogvar_assign_value(t6, t17, 0, 0, 11);
    goto LAB62;

LAB71:    t42 = *((unsigned int *)t21);
    t43 = *((unsigned int *)t34);
    t150 = (t42 - t43);
    t151 = (t150 + 1);
    xsi_vlogvar_assign_value(t19, t18, 0, *((unsigned int *)t34), t151);
    goto LAB72;

LAB73:    t12 = *((unsigned int *)t17);
    t13 = *((unsigned int *)t21);
    t150 = (t12 - t13);
    t151 = (t150 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t21), t151);
    goto LAB74;

}

static void Always_935_38(char *t0)
{
    char t4[8];
    char t15[8];
    char t31[8];
    char t39[8];
    char t73[8];
    char t88[8];
    char t106[16];
    char t107[16];
    char t109[16];
    char t110[8];
    char t117[8];
    char t119[8];
    char t122[8];
    char t159[8];
    char t164[8];
    char t191[8];
    char t204[8];
    char t206[8];
    char t207[8];
    char t208[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    double t105;
    double t108;
    int t111;
    int t112;
    int t113;
    int t114;
    int t115;
    int t116;
    char *t118;
    char *t120;
    char *t121;
    unsigned int t123;
    char *t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    char *t157;
    char *t158;
    char *t160;
    char *t161;
    char *t162;
    char *t163;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    char *t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t178;
    char *t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    char *t192;
    char *t193;
    char *t194;
    char *t195;
    char *t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    char *t203;
    char *t205;
    char *t209;
    char *t210;
    char *t211;
    char *t212;
    char *t213;
    char *t214;
    unsigned int t215;
    char *t216;
    unsigned int t217;
    int t218;
    int t219;
    char *t220;
    unsigned int t221;
    int t222;
    int t223;
    unsigned int t224;
    int t225;
    unsigned int t226;
    unsigned int t227;
    int t228;
    int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;

LAB0:    t1 = (t0 + 52296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(935, ng7);
    t2 = (t0 + 57128);
    *((int *)t2) = 1;
    t3 = (t0 + 52328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(935, ng7);

LAB5:    xsi_set_current_line(936, ng7);
    t5 = (t0 + 33792);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    memset(t15, 0, 8);
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t4);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t16) != 0)
        goto LAB12;

LAB13:    t23 = (t15 + 4);
    t24 = *((unsigned int *)t15);
    t25 = (!(t24));
    t26 = *((unsigned int *)t23);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB14;

LAB15:    memcpy(t39, t15, 8);

LAB16:    t67 = (t39 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t39);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB24;

LAB25:
LAB26:    xsi_set_current_line(1085, ng7);
    t2 = (t0 + 29632);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t15, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB556;

LAB555:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB556;

LAB559:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB557;

LAB558:    t16 = (t15 + 4);
    t9 = *((unsigned int *)t16);
    t10 = (~(t9));
    t11 = *((unsigned int *)t15);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB560;

LAB561:
LAB562:    xsi_set_current_line(1089, ng7);
    t2 = (t0 + 30592);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t15, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB565;

LAB564:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB565;

LAB568:    if (*((unsigned int *)t5) > *((unsigned int *)t6))
        goto LAB566;

LAB567:    t16 = (t15 + 4);
    t9 = *((unsigned int *)t16);
    t10 = (~(t9));
    t11 = *((unsigned int *)t15);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB569;

LAB570:
LAB571:    xsi_set_current_line(1093, ng7);
    t2 = (t0 + 32832);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB573;

LAB574:    xsi_set_current_line(1095, ng7);

LAB577:    xsi_set_current_line(1096, ng7);
    t2 = (t0 + 30112);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 29792);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 11000LL);

LAB575:    xsi_set_current_line(1099, ng7);
    t2 = (t0 + 29952);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 30112);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t15) = 1;
    goto LAB13;

LAB12:    t22 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB14:    t28 = (t0 + 30592);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t31, 0, 8);
    t32 = (t30 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t30);
    t36 = (t35 & t34);
    t37 = (t36 & 7U);
    if (t37 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t32) != 0)
        goto LAB19;

LAB20:    t40 = *((unsigned int *)t15);
    t41 = *((unsigned int *)t31);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = (t15 + 4);
    t44 = (t31 + 4);
    t45 = (t39 + 4);
    t46 = *((unsigned int *)t43);
    t47 = *((unsigned int *)t44);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = *((unsigned int *)t45);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB16;

LAB17:    *((unsigned int *)t31) = 1;
    goto LAB20;

LAB19:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB20;

LAB21:    t51 = *((unsigned int *)t39);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t39) = (t51 | t52);
    t53 = (t15 + 4);
    t54 = (t31 + 4);
    t55 = *((unsigned int *)t53);
    t56 = (~(t55));
    t57 = *((unsigned int *)t15);
    t58 = (t57 & t56);
    t59 = *((unsigned int *)t54);
    t60 = (~(t59));
    t61 = *((unsigned int *)t31);
    t62 = (t61 & t60);
    t63 = (~(t58));
    t64 = (~(t62));
    t65 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t65 & t63);
    t66 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t66 & t64);
    goto LAB23;

LAB24:    xsi_set_current_line(936, ng7);

LAB27:    xsi_set_current_line(938, ng7);
    t74 = (t0 + 16592U);
    t75 = *((char **)t74);
    memset(t73, 0, 8);
    t74 = (t75 + 4);
    t76 = *((unsigned int *)t74);
    t77 = (~(t76));
    t78 = *((unsigned int *)t75);
    t79 = (t78 & t77);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB31;

LAB29:    if (*((unsigned int *)t74) == 0)
        goto LAB28;

LAB30:    t81 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t81) = 1;

LAB31:    t82 = (t73 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t73);
    t86 = (t85 & t84);
    t87 = (t86 != 0);
    if (t87 > 0)
        goto LAB32;

LAB33:
LAB34:    goto LAB26;

LAB28:    *((unsigned int *)t73) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(938, ng7);

LAB35:    xsi_set_current_line(939, ng7);
    t89 = (t0 + 18352U);
    t90 = *((char **)t89);
    memset(t88, 0, 8);
    t89 = (t90 + 4);
    t91 = *((unsigned int *)t89);
    t92 = (~(t91));
    t93 = *((unsigned int *)t90);
    t94 = (t93 & t92);
    t95 = (t94 & 1U);
    if (t95 != 0)
        goto LAB39;

LAB37:    if (*((unsigned int *)t89) == 0)
        goto LAB36;

LAB38:    t96 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t96) = 1;

LAB39:    t97 = (t88 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t88);
    t101 = (t100 & t99);
    t102 = (t101 != 0);
    if (t102 > 0)
        goto LAB40;

LAB41:
LAB42:    xsi_set_current_line(983, ng7);
    t2 = (t0 + 29472);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB161;

LAB159:    if (*((unsigned int *)t6) == 0)
        goto LAB158;

LAB160:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;

LAB161:    t8 = (t4 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (~(t17));
    t19 = *((unsigned int *)t4);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB162;

LAB163:    xsi_set_current_line(986, ng7);

LAB190:    xsi_set_current_line(987, ng7);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng17)));
    memset(t4, 0, 8);
    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB192;

LAB191:    t6 = (t3 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB192;

LAB195:    if (*((unsigned int *)t2) > *((unsigned int *)t3))
        goto LAB193;

LAB194:    memset(t15, 0, 8);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB196;

LAB197:    if (*((unsigned int *)t8) != 0)
        goto LAB198;

LAB199:    t16 = (t15 + 4);
    t17 = *((unsigned int *)t15);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB200;

LAB201:    memcpy(t73, t15, 8);

LAB202:    t54 = (t73 + 4);
    t65 = *((unsigned int *)t54);
    t66 = (~(t65));
    t68 = *((unsigned int *)t73);
    t69 = (t68 & t66);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB213;

LAB214:
LAB215:
LAB164:    xsi_set_current_line(991, ng7);
    t2 = (t0 + 30752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_signed_greater(t4, 32, t5, 32, t6, 32);
    t7 = (t4 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB216;

LAB217:    xsi_set_current_line(997, ng7);
    t2 = (t0 + 30912);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB225;

LAB226:    xsi_set_current_line(1010, ng7);
    t2 = (t0 + 29632);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng82)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB269;

LAB268:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB269;

LAB272:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB270;

LAB271:    t16 = (t4 + 4);
    t9 = *((unsigned int *)t16);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB273;

LAB274:
LAB275:
LAB227:
LAB218:    xsi_set_current_line(1076, ng7);
    t2 = (t0 + 29632);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 29472);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memset(t15, 0, 8);
    t14 = (t8 + 4);
    t9 = *((unsigned int *)t14);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB488;

LAB486:    if (*((unsigned int *)t14) == 0)
        goto LAB485;

LAB487:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;

LAB488:    t22 = ((char*)((ng82)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t15, 32, t22, 32);
    memset(t39, 0, 8);
    t23 = (t5 + 4);
    t28 = (t31 + 4);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t31);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t23);
    t21 = *((unsigned int *)t28);
    t24 = (t20 ^ t21);
    t25 = (t19 | t24);
    t26 = *((unsigned int *)t23);
    t27 = *((unsigned int *)t28);
    t33 = (t26 | t27);
    t34 = (~(t33));
    t35 = (t25 & t34);
    if (t35 != 0)
        goto LAB492;

LAB489:    if (t33 != 0)
        goto LAB491;

LAB490:    *((unsigned int *)t39) = 1;

LAB492:    t30 = (t39 + 4);
    t36 = *((unsigned int *)t30);
    t37 = (~(t36));
    t40 = *((unsigned int *)t39);
    t41 = (t40 & t37);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB493;

LAB494:    xsi_set_current_line(1079, ng7);
    t2 = (t0 + 33152);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t15, 0, 8);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB501;

LAB502:    if (*((unsigned int *)t6) != 0)
        goto LAB503;

LAB504:    t8 = (t15 + 4);
    t17 = *((unsigned int *)t15);
    t18 = *((unsigned int *)t8);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB505;

LAB506:    memcpy(t73, t15, 8);

LAB507:    memset(t88, 0, 8);
    t53 = (t73 + 4);
    t71 = *((unsigned int *)t53);
    t72 = (~(t71));
    t76 = *((unsigned int *)t73);
    t77 = (t76 & t72);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB519;

LAB520:    if (*((unsigned int *)t53) != 0)
        goto LAB521;

LAB522:    t67 = (t88 + 4);
    t79 = *((unsigned int *)t88);
    t80 = *((unsigned int *)t67);
    t83 = (t79 || t80);
    if (t83 > 0)
        goto LAB523;

LAB524:    memcpy(t117, t88, 8);

LAB525:    memset(t119, 0, 8);
    t118 = (t117 + 4);
    t143 = *((unsigned int *)t118);
    t144 = (~(t143));
    t145 = *((unsigned int *)t117);
    t146 = (t145 & t144);
    t147 = (t146 & 1U);
    if (t147 != 0)
        goto LAB533;

LAB534:    if (*((unsigned int *)t118) != 0)
        goto LAB535;

LAB536:    t121 = (t119 + 4);
    t148 = *((unsigned int *)t119);
    t149 = *((unsigned int *)t121);
    t151 = (t148 || t149);
    if (t151 > 0)
        goto LAB537;

LAB538:    memcpy(t204, t119, 8);

LAB539:    t178 = (t204 + 4);
    t241 = *((unsigned int *)t178);
    t242 = (~(t241));
    t243 = *((unsigned int *)t204);
    t244 = (t243 & t242);
    t245 = (t244 != 0);
    if (t245 > 0)
        goto LAB551;

LAB552:
LAB553:
LAB495:    goto LAB34;

LAB36:    *((unsigned int *)t88) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(939, ng7);

LAB43:    xsi_set_current_line(940, ng7);
    t103 = (t0 + 17552U);
    t104 = *((char **)t103);
    t103 = (t0 + 28992);
    xsi_vlogvar_assign_value(t103, t104, 0, 0, 23);
    xsi_set_current_line(942, ng7);
    t2 = (t0 + 18032U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (t9 >> 14);
    t11 = (t10 & 1);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t5);
    t13 = (t12 >> 14);
    t17 = (t13 & 1);
    *((unsigned int *)t2) = t17;
    memset(t15, 0, 8);
    t6 = (t4 + 4);
    t18 = *((unsigned int *)t6);
    t19 = (~(t18));
    t20 = *((unsigned int *)t4);
    t21 = (t20 & t19);
    t24 = (t21 & 1U);
    if (t24 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t6) != 0)
        goto LAB46;

LAB47:    t8 = (t15 + 4);
    t25 = *((unsigned int *)t15);
    t26 = *((unsigned int *)t8);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB48;

LAB49:    memcpy(t73, t15, 8);

LAB50:    t53 = (t0 + 29152);
    xsi_vlogvar_assign_value(t53, t73, 0, 0, 1);
    xsi_set_current_line(943, ng7);
    t2 = (t0 + 18512U);
    t3 = *((char **)t2);
    t2 = (t0 + 29312);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(944, ng7);
    t2 = (t0 + 16912U);
    t3 = *((char **)t2);
    t2 = (t0 + 29472);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(946, ng7);
    t2 = (t0 + 30912);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB65;

LAB63:    if (*((unsigned int *)t6) == 0)
        goto LAB62;

LAB64:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;

LAB65:    memset(t15, 0, 8);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (~(t17));
    t19 = *((unsigned int *)t4);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t8) != 0)
        goto LAB68;

LAB69:    t16 = (t15 + 4);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t16);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB70;

LAB71:    memcpy(t73, t15, 8);

LAB72:    t75 = (t73 + 4);
    t71 = *((unsigned int *)t75);
    t72 = (~(t71));
    t76 = *((unsigned int *)t73);
    t77 = (t76 & t72);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB85;

LAB86:
LAB87:    xsi_set_current_line(948, ng7);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 28672);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(949, ng7);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 28832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(950, ng7);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 30272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(951, ng7);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 30752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(952, ng7);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 30912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(954, ng7);
    t2 = (t0 + 29472);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB91;

LAB89:    if (*((unsigned int *)t6) == 0)
        goto LAB88;

LAB90:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;

LAB91:    t8 = (t4 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (~(t17));
    t19 = *((unsigned int *)t4);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(962, ng7);

LAB105:    xsi_set_current_line(963, ng7);
    t2 = ((char*)((ng17)));
    t3 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t2);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB106;

LAB107:
LAB108:    xsi_set_current_line(971, ng7);
    t2 = (t0 + 33632);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB118;

LAB116:    if (*((unsigned int *)t6) == 0)
        goto LAB115;

LAB117:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;

LAB118:    memset(t15, 0, 8);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (~(t17));
    t19 = *((unsigned int *)t4);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t8) != 0)
        goto LAB121;

LAB122:    t16 = (t15 + 4);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t16);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB123;

LAB124:    memcpy(t73, t15, 8);

LAB125:    t74 = (t73 + 4);
    t72 = *((unsigned int *)t74);
    t76 = (~(t72));
    t77 = *((unsigned int *)t73);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB133;

LAB134:
LAB135:
LAB94:    xsi_set_current_line(978, ng7);
    t2 = (t0 + 29472);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB157;

LAB155:    if (*((unsigned int *)t6) == 0)
        goto LAB154;

LAB156:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;

LAB157:    t8 = (t0 + 30272);
    t14 = (t8 + 56U);
    t16 = *((char **)t14);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t4, 32, t16, 32);
    t22 = (t0 + 33472);
    t23 = (t22 + 56U);
    t28 = *((char **)t23);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t15, 32, t28, 4);
    t29 = ((char*)((ng9)));
    memset(t39, 0, 8);
    xsi_vlog_unsigned_add(t39, 32, t31, 32, t29, 32);
    t30 = (t0 + 29632);
    xsi_vlogvar_assign_value(t30, t39, 0, 0, 4);
    xsi_set_current_line(979, ng7);
    t2 = (t0 + 33312);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 29952);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(980, ng7);
    t2 = (t0 + 33312);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 30112);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    goto LAB42;

LAB44:    *((unsigned int *)t15) = 1;
    goto LAB47;

LAB46:    t7 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB47;

LAB48:    t14 = ((char*)((ng1)));
    t16 = ((char*)((ng2)));
    memset(t31, 0, 8);
    t22 = (t14 + 4);
    t23 = (t16 + 4);
    t33 = *((unsigned int *)t14);
    t34 = *((unsigned int *)t16);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t22);
    t37 = *((unsigned int *)t23);
    t40 = (t36 ^ t37);
    t41 = (t35 | t40);
    t42 = *((unsigned int *)t22);
    t46 = *((unsigned int *)t23);
    t47 = (t42 | t46);
    t48 = (~(t47));
    t49 = (t41 & t48);
    if (t49 != 0)
        goto LAB54;

LAB51:    if (t47 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t31) = 1;

LAB54:    memset(t39, 0, 8);
    t29 = (t31 + 4);
    t50 = *((unsigned int *)t29);
    t51 = (~(t50));
    t52 = *((unsigned int *)t31);
    t55 = (t52 & t51);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t29) != 0)
        goto LAB57;

LAB58:    t57 = *((unsigned int *)t15);
    t59 = *((unsigned int *)t39);
    t60 = (t57 & t59);
    *((unsigned int *)t73) = t60;
    t32 = (t15 + 4);
    t38 = (t39 + 4);
    t43 = (t73 + 4);
    t61 = *((unsigned int *)t32);
    t63 = *((unsigned int *)t38);
    t64 = (t61 | t63);
    *((unsigned int *)t43) = t64;
    t65 = *((unsigned int *)t43);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB59;

LAB60:
LAB61:    goto LAB50;

LAB53:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB54;

LAB55:    *((unsigned int *)t39) = 1;
    goto LAB58;

LAB57:    t30 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB58;

LAB59:    t68 = *((unsigned int *)t73);
    t69 = *((unsigned int *)t43);
    *((unsigned int *)t73) = (t68 | t69);
    t44 = (t15 + 4);
    t45 = (t39 + 4);
    t70 = *((unsigned int *)t15);
    t71 = (~(t70));
    t72 = *((unsigned int *)t44);
    t76 = (~(t72));
    t77 = *((unsigned int *)t39);
    t78 = (~(t77));
    t79 = *((unsigned int *)t45);
    t80 = (~(t79));
    t58 = (t71 & t76);
    t62 = (t78 & t80);
    t83 = (~(t58));
    t84 = (~(t62));
    t85 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t85 & t83);
    t86 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t86 & t84);
    t87 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t87 & t83);
    t91 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t91 & t84);
    goto LAB61;

LAB62:    *((unsigned int *)t4) = 1;
    goto LAB65;

LAB66:    *((unsigned int *)t15) = 1;
    goto LAB69;

LAB68:    t14 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB69;

LAB70:    t22 = (t0 + 29632);
    t23 = (t22 + 56U);
    t28 = *((char **)t23);
    t29 = ((char*)((ng8)));
    memset(t31, 0, 8);
    t30 = (t28 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB74;

LAB73:    t32 = (t29 + 4);
    if (*((unsigned int *)t32) != 0)
        goto LAB74;

LAB77:    if (*((unsigned int *)t28) > *((unsigned int *)t29))
        goto LAB75;

LAB76:    memset(t39, 0, 8);
    t43 = (t31 + 4);
    t27 = *((unsigned int *)t43);
    t33 = (~(t27));
    t34 = *((unsigned int *)t31);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t43) != 0)
        goto LAB80;

LAB81:    t37 = *((unsigned int *)t15);
    t40 = *((unsigned int *)t39);
    t41 = (t37 & t40);
    *((unsigned int *)t73) = t41;
    t45 = (t15 + 4);
    t53 = (t39 + 4);
    t54 = (t73 + 4);
    t42 = *((unsigned int *)t45);
    t46 = *((unsigned int *)t53);
    t47 = (t42 | t46);
    *((unsigned int *)t54) = t47;
    t48 = *((unsigned int *)t54);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB82;

LAB83:
LAB84:    goto LAB72;

LAB74:    t38 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB76;

LAB75:    *((unsigned int *)t31) = 1;
    goto LAB76;

LAB78:    *((unsigned int *)t39) = 1;
    goto LAB81;

LAB80:    t44 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB81;

LAB82:    t50 = *((unsigned int *)t73);
    t51 = *((unsigned int *)t54);
    *((unsigned int *)t73) = (t50 | t51);
    t67 = (t15 + 4);
    t74 = (t39 + 4);
    t52 = *((unsigned int *)t15);
    t55 = (~(t52));
    t56 = *((unsigned int *)t67);
    t57 = (~(t56));
    t59 = *((unsigned int *)t39);
    t60 = (~(t59));
    t61 = *((unsigned int *)t74);
    t63 = (~(t61));
    t58 = (t55 & t57);
    t62 = (t60 & t63);
    t64 = (~(t58));
    t65 = (~(t62));
    t66 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t66 & t64);
    t68 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t68 & t65);
    t69 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t69 & t64);
    t70 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t70 & t65);
    goto LAB84;

LAB85:    xsi_set_current_line(947, ng7);
    t105 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t88) = t105;
    xsi_vlogfile_write(1, 0, 0, ng144, 2, t0, (char)114, t88, 64);
    goto LAB87;

LAB88:    *((unsigned int *)t4) = 1;
    goto LAB91;

LAB92:    xsi_set_current_line(954, ng7);

LAB95:    xsi_set_current_line(955, ng7);
    t14 = ((char*)((ng17)));
    t16 = (t14 + 4);
    t24 = *((unsigned int *)t16);
    t25 = (~(t24));
    t26 = *((unsigned int *)t14);
    t27 = (t26 & t25);
    t33 = (t27 != 0);
    if (t33 > 0)
        goto LAB96;

LAB97:
LAB98:    goto LAB94;

LAB96:    xsi_set_current_line(955, ng7);

LAB99:    xsi_set_current_line(956, ng7);
    t22 = (t0 + 29312);
    t23 = (t22 + 56U);
    t28 = *((char **)t23);
    t29 = (t28 + 4);
    t34 = *((unsigned int *)t29);
    t35 = (~(t34));
    t36 = *((unsigned int *)t28);
    t37 = (t36 & t35);
    t40 = (t37 != 0);
    if (t40 > 0)
        goto LAB100;

LAB101:    xsi_set_current_line(958, ng7);

LAB104:    xsi_set_current_line(959, ng7);
    t105 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t4) = t105;
    xsi_vlogfile_write(1, 0, 0, ng146, 2, t0, (char)114, t4, 64);

LAB102:    goto LAB98;

LAB100:    xsi_set_current_line(956, ng7);

LAB103:    xsi_set_current_line(957, ng7);
    t105 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t15) = t105;
    xsi_vlogfile_write(1, 0, 0, ng145, 2, t0, (char)114, t15, 64);
    goto LAB102;

LAB106:    xsi_set_current_line(963, ng7);

LAB109:    xsi_set_current_line(964, ng7);
    t5 = (t0 + 29312);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (~(t17));
    t19 = *((unsigned int *)t7);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB110;

LAB111:    xsi_set_current_line(966, ng7);

LAB114:    xsi_set_current_line(967, ng7);
    t105 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t4) = t105;
    xsi_vlogfile_write(1, 0, 0, ng148, 2, t0, (char)114, t4, 64);

LAB112:    goto LAB108;

LAB110:    xsi_set_current_line(964, ng7);

LAB113:    xsi_set_current_line(965, ng7);
    t105 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t4) = t105;
    xsi_vlogfile_write(1, 0, 0, ng147, 2, t0, (char)114, t4, 64);
    goto LAB112;

LAB115:    *((unsigned int *)t4) = 1;
    goto LAB118;

LAB119:    *((unsigned int *)t15) = 1;
    goto LAB122;

LAB121:    t14 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB122;

LAB123:    t22 = xsi_vlog_time(t106, 1000.0000000000000, 1000.0000000000000);
    t23 = (t0 + 31392);
    t28 = (t23 + 56U);
    t29 = *((char **)t28);
    xsi_vlog_unsigned_minus(t107, 64, t106, 64, t29, 64);
    t105 = xsi_vlog_convert_to_real(t107, 64, 2);
    t30 = (t0 + 11016);
    t32 = *((char **)t30);
    t108 = *((double *)t32);
    t27 = (t105 >= t108);
    *((unsigned int *)t31) = t27;
    t30 = (t31 + 4);
    *((unsigned int *)t30) = 0U;
    memset(t39, 0, 8);
    t38 = (t31 + 4);
    t33 = *((unsigned int *)t38);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (t35 & t34);
    t37 = (t36 & 1U);
    if (t37 != 0)
        goto LAB126;

LAB127:    if (*((unsigned int *)t38) != 0)
        goto LAB128;

LAB129:    t40 = *((unsigned int *)t15);
    t41 = *((unsigned int *)t39);
    t42 = (t40 & t41);
    *((unsigned int *)t73) = t42;
    t44 = (t15 + 4);
    t45 = (t39 + 4);
    t53 = (t73 + 4);
    t46 = *((unsigned int *)t44);
    t47 = *((unsigned int *)t45);
    t48 = (t46 | t47);
    *((unsigned int *)t53) = t48;
    t49 = *((unsigned int *)t53);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB130;

LAB131:
LAB132:    goto LAB125;

LAB126:    *((unsigned int *)t39) = 1;
    goto LAB129;

LAB128:    t43 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB129;

LAB130:    t51 = *((unsigned int *)t73);
    t52 = *((unsigned int *)t53);
    *((unsigned int *)t73) = (t51 | t52);
    t54 = (t15 + 4);
    t67 = (t39 + 4);
    t55 = *((unsigned int *)t15);
    t56 = (~(t55));
    t57 = *((unsigned int *)t54);
    t59 = (~(t57));
    t60 = *((unsigned int *)t39);
    t61 = (~(t60));
    t63 = *((unsigned int *)t67);
    t64 = (~(t63));
    t58 = (t56 & t59);
    t62 = (t61 & t64);
    t65 = (~(t58));
    t66 = (~(t62));
    t68 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t68 & t65);
    t69 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t69 & t66);
    t70 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t70 & t65);
    t71 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t71 & t66);
    goto LAB132;

LAB133:    xsi_set_current_line(971, ng7);

LAB136:    xsi_set_current_line(972, ng7);
    t75 = xsi_vlog_time(t109, 1000.0000000000000, 1000.0000000000000);
    t81 = (t0 + 31392);
    xsi_vlogvar_wait_assign_value(t81, t109, 0, 0, 64, 0LL);
    xsi_set_current_line(973, ng7);
    *((int *)t4) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t2 = (t4 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 33472);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_mod(t15, 32, t4, 32, t6, 4);
    t7 = (t0 + 30272);
    xsi_vlogvar_assign_value(t7, t15, 0, 0, 32);
    xsi_set_current_line(974, ng7);
    t2 = ((char*)((ng17)));
    memset(t4, 0, 8);
    t3 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t2);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB137;

LAB138:    if (*((unsigned int *)t3) != 0)
        goto LAB139;

LAB140:    t6 = (t4 + 4);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t6);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB141;

LAB142:    memcpy(t39, t4, 8);

LAB143:    t43 = (t39 + 4);
    t65 = *((unsigned int *)t43);
    t66 = (~(t65));
    t68 = *((unsigned int *)t39);
    t69 = (t68 & t66);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB151;

LAB152:
LAB153:    goto LAB135;

LAB137:    *((unsigned int *)t4) = 1;
    goto LAB140;

LAB139:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB140;

LAB141:    t7 = (t0 + 30272);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    t16 = ((char*)((ng8)));
    memset(t15, 0, 8);
    xsi_vlog_signed_greater(t15, 32, t14, 32, t16, 32);
    memset(t31, 0, 8);
    t22 = (t15 + 4);
    t20 = *((unsigned int *)t22);
    t21 = (~(t20));
    t24 = *((unsigned int *)t15);
    t25 = (t24 & t21);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB144;

LAB145:    if (*((unsigned int *)t22) != 0)
        goto LAB146;

LAB147:    t27 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t27 & t33);
    *((unsigned int *)t39) = t34;
    t28 = (t4 + 4);
    t29 = (t31 + 4);
    t30 = (t39 + 4);
    t35 = *((unsigned int *)t28);
    t36 = *((unsigned int *)t29);
    t37 = (t35 | t36);
    *((unsigned int *)t30) = t37;
    t40 = *((unsigned int *)t30);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB148;

LAB149:
LAB150:    goto LAB143;

LAB144:    *((unsigned int *)t31) = 1;
    goto LAB147;

LAB146:    t23 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB147;

LAB148:    t42 = *((unsigned int *)t39);
    t46 = *((unsigned int *)t30);
    *((unsigned int *)t39) = (t42 | t46);
    t32 = (t4 + 4);
    t38 = (t31 + 4);
    t47 = *((unsigned int *)t4);
    t48 = (~(t47));
    t49 = *((unsigned int *)t32);
    t50 = (~(t49));
    t51 = *((unsigned int *)t31);
    t52 = (~(t51));
    t55 = *((unsigned int *)t38);
    t56 = (~(t55));
    t58 = (t48 & t50);
    t62 = (t52 & t56);
    t57 = (~(t58));
    t59 = (~(t62));
    t60 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t60 & t57);
    t61 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t61 & t59);
    t63 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t63 & t57);
    t64 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t64 & t59);
    goto LAB150;

LAB151:    xsi_set_current_line(975, ng7);
    t105 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t73) = t105;
    t44 = (t0 + 30272);
    t45 = (t44 + 56U);
    t53 = *((char **)t45);
    xsi_vlogfile_write(1, 0, 0, ng149, 3, t0, (char)114, t73, 64, (char)119, t53, 32);
    goto LAB153;

LAB154:    *((unsigned int *)t4) = 1;
    goto LAB157;

LAB158:    *((unsigned int *)t4) = 1;
    goto LAB161;

LAB162:    xsi_set_current_line(983, ng7);

LAB165:    xsi_set_current_line(984, ng7);
    t14 = (t0 + 29312);
    t16 = (t14 + 56U);
    t22 = *((char **)t16);
    memset(t15, 0, 8);
    t23 = (t22 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t26 & t25);
    t33 = (t27 & 1U);
    if (t33 != 0)
        goto LAB169;

LAB167:    if (*((unsigned int *)t23) == 0)
        goto LAB166;

LAB168:    t28 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t28) = 1;

LAB169:    memset(t31, 0, 8);
    t29 = (t15 + 4);
    t34 = *((unsigned int *)t29);
    t35 = (~(t34));
    t36 = *((unsigned int *)t15);
    t37 = (t36 & t35);
    t40 = (t37 & 1U);
    if (t40 != 0)
        goto LAB170;

LAB171:    if (*((unsigned int *)t29) != 0)
        goto LAB172;

LAB173:    t32 = (t31 + 4);
    t41 = *((unsigned int *)t31);
    t42 = *((unsigned int *)t32);
    t46 = (t41 || t42);
    if (t46 > 0)
        goto LAB174;

LAB175:    memcpy(t88, t31, 8);

LAB176:    t89 = (t88 + 4);
    t86 = *((unsigned int *)t89);
    t87 = (~(t86));
    t91 = *((unsigned int *)t88);
    t92 = (t91 & t87);
    t93 = (t92 != 0);
    if (t93 > 0)
        goto LAB187;

LAB188:
LAB189:    goto LAB164;

LAB166:    *((unsigned int *)t15) = 1;
    goto LAB169;

LAB170:    *((unsigned int *)t31) = 1;
    goto LAB173;

LAB172:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB173;

LAB174:    t38 = (t0 + 16752U);
    t43 = *((char **)t38);
    t38 = ((char*)((ng9)));
    memset(t39, 0, 8);
    if (*((unsigned int *)t43) != *((unsigned int *)t38))
        goto LAB178;

LAB177:    t44 = (t43 + 4);
    t45 = (t38 + 4);
    if (*((unsigned int *)t44) != *((unsigned int *)t45))
        goto LAB178;

LAB179:    memset(t73, 0, 8);
    t53 = (t39 + 4);
    t47 = *((unsigned int *)t53);
    t48 = (~(t47));
    t49 = *((unsigned int *)t39);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB180;

LAB181:    if (*((unsigned int *)t53) != 0)
        goto LAB182;

LAB183:    t52 = *((unsigned int *)t31);
    t55 = *((unsigned int *)t73);
    t56 = (t52 & t55);
    *((unsigned int *)t88) = t56;
    t67 = (t31 + 4);
    t74 = (t73 + 4);
    t75 = (t88 + 4);
    t57 = *((unsigned int *)t67);
    t59 = *((unsigned int *)t74);
    t60 = (t57 | t59);
    *((unsigned int *)t75) = t60;
    t61 = *((unsigned int *)t75);
    t63 = (t61 != 0);
    if (t63 == 1)
        goto LAB184;

LAB185:
LAB186:    goto LAB176;

LAB178:    *((unsigned int *)t39) = 1;
    goto LAB179;

LAB180:    *((unsigned int *)t73) = 1;
    goto LAB183;

LAB182:    t54 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB183;

LAB184:    t64 = *((unsigned int *)t88);
    t65 = *((unsigned int *)t75);
    *((unsigned int *)t88) = (t64 | t65);
    t81 = (t31 + 4);
    t82 = (t73 + 4);
    t66 = *((unsigned int *)t31);
    t68 = (~(t66));
    t69 = *((unsigned int *)t81);
    t70 = (~(t69));
    t71 = *((unsigned int *)t73);
    t72 = (~(t71));
    t76 = *((unsigned int *)t82);
    t77 = (~(t76));
    t58 = (t68 & t70);
    t62 = (t72 & t77);
    t78 = (~(t58));
    t79 = (~(t62));
    t80 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t80 & t78);
    t83 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t83 & t79);
    t84 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t84 & t78);
    t85 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t85 & t79);
    goto LAB186;

LAB187:    xsi_set_current_line(985, ng7);
    t105 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t110) = t105;
    xsi_vlogfile_write(1, 0, 0, ng150, 2, t0, (char)114, t110, 64);
    goto LAB189;

LAB192:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB194;

LAB193:    *((unsigned int *)t4) = 1;
    goto LAB194;

LAB196:    *((unsigned int *)t15) = 1;
    goto LAB199;

LAB198:    t14 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB199;

LAB200:    t22 = (t0 + 17392U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng6)));
    memset(t31, 0, 8);
    if (*((unsigned int *)t23) != *((unsigned int *)t22))
        goto LAB204;

LAB203:    t28 = (t23 + 4);
    t29 = (t22 + 4);
    if (*((unsigned int *)t28) != *((unsigned int *)t29))
        goto LAB204;

LAB205:    memset(t39, 0, 8);
    t30 = (t31 + 4);
    t20 = *((unsigned int *)t30);
    t21 = (~(t20));
    t24 = *((unsigned int *)t31);
    t25 = (t24 & t21);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB206;

LAB207:    if (*((unsigned int *)t30) != 0)
        goto LAB208;

LAB209:    t27 = *((unsigned int *)t15);
    t33 = *((unsigned int *)t39);
    t34 = (t27 & t33);
    *((unsigned int *)t73) = t34;
    t38 = (t15 + 4);
    t43 = (t39 + 4);
    t44 = (t73 + 4);
    t35 = *((unsigned int *)t38);
    t36 = *((unsigned int *)t43);
    t37 = (t35 | t36);
    *((unsigned int *)t44) = t37;
    t40 = *((unsigned int *)t44);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB210;

LAB211:
LAB212:    goto LAB202;

LAB204:    *((unsigned int *)t31) = 1;
    goto LAB205;

LAB206:    *((unsigned int *)t39) = 1;
    goto LAB209;

LAB208:    t32 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB209;

LAB210:    t42 = *((unsigned int *)t73);
    t46 = *((unsigned int *)t44);
    *((unsigned int *)t73) = (t42 | t46);
    t45 = (t15 + 4);
    t53 = (t39 + 4);
    t47 = *((unsigned int *)t15);
    t48 = (~(t47));
    t49 = *((unsigned int *)t45);
    t50 = (~(t49));
    t51 = *((unsigned int *)t39);
    t52 = (~(t51));
    t55 = *((unsigned int *)t53);
    t56 = (~(t55));
    t58 = (t48 & t50);
    t62 = (t52 & t56);
    t57 = (~(t58));
    t59 = (~(t62));
    t60 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t60 & t57);
    t61 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t61 & t59);
    t63 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t63 & t57);
    t64 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t64 & t59);
    goto LAB212;

LAB213:    xsi_set_current_line(988, ng7);
    t105 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t88) = t105;
    xsi_vlogfile_write(1, 0, 0, ng151, 2, t0, (char)114, t88, 64);
    goto LAB215;

LAB216:    xsi_set_current_line(991, ng7);

LAB219:    xsi_set_current_line(992, ng7);
    t8 = (t0 + 30752);
    t14 = (t8 + 56U);
    t16 = *((char **)t14);
    t22 = ((char*)((ng9)));
    memset(t15, 0, 8);
    xsi_vlog_signed_equal(t15, 32, t16, 32, t22, 32);
    t23 = (t15 + 4);
    t17 = *((unsigned int *)t23);
    t18 = (~(t17));
    t19 = *((unsigned int *)t15);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB220;

LAB221:    xsi_set_current_line(994, ng7);

LAB224:    xsi_set_current_line(995, ng7);
    t2 = (t0 + 30752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_signed_minus(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 30752);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);

LAB222:    goto LAB218;

LAB220:    xsi_set_current_line(992, ng7);

LAB223:    xsi_set_current_line(993, ng7);
    t105 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t31) = t105;
    xsi_vlogfile_write(1, 0, 0, ng152, 2, t0, (char)114, t31, 64);
    goto LAB222;

LAB225:    xsi_set_current_line(997, ng7);

LAB228:    xsi_set_current_line(998, ng7);
    t7 = (t0 + 29632);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    t16 = ((char*)((ng82)));
    t22 = (t0 + 33472);
    t23 = (t22 + 56U);
    t28 = *((char **)t23);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_multiply(t4, 32, t16, 32, t28, 4);
    t29 = ((char*)((ng82)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t4, 32, t29, 32);
    t30 = (t0 + 29472);
    t32 = (t30 + 56U);
    t38 = *((char **)t32);
    memset(t31, 0, 8);
    t43 = (t38 + 4);
    t17 = *((unsigned int *)t43);
    t18 = (~(t17));
    t19 = *((unsigned int *)t38);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB232;

LAB230:    if (*((unsigned int *)t43) == 0)
        goto LAB229;

LAB231:    t44 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t44) = 1;

LAB232:    memset(t39, 0, 8);
    xsi_vlog_unsigned_add(t39, 32, t15, 32, t31, 32);
    memset(t73, 0, 8);
    t45 = (t14 + 4);
    t53 = (t39 + 4);
    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t39);
    t26 = (t24 ^ t25);
    t27 = *((unsigned int *)t45);
    t33 = *((unsigned int *)t53);
    t34 = (t27 ^ t33);
    t35 = (t26 | t34);
    t36 = *((unsigned int *)t45);
    t37 = *((unsigned int *)t53);
    t40 = (t36 | t37);
    t41 = (~(t40));
    t42 = (t35 & t41);
    if (t42 != 0)
        goto LAB236;

LAB233:    if (t40 != 0)
        goto LAB235;

LAB234:    *((unsigned int *)t73) = 1;

LAB236:    t67 = (t73 + 4);
    t46 = *((unsigned int *)t67);
    t47 = (~(t46));
    t48 = *((unsigned int *)t73);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB237;

LAB238:    xsi_set_current_line(1001, ng7);
    t2 = (t0 + 29632);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng82)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t8);
    t21 = (t19 | t20);
    t24 = (~(t21));
    t25 = (t18 & t24);
    if (t25 != 0)
        goto LAB244;

LAB241:    if (t21 != 0)
        goto LAB243;

LAB242:    *((unsigned int *)t4) = 1;

LAB244:    t16 = (t4 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t33 = *((unsigned int *)t4);
    t34 = (t33 & t27);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB245;

LAB246:
LAB247:
LAB239:    goto LAB227;

LAB229:    *((unsigned int *)t31) = 1;
    goto LAB232;

LAB235:    t54 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB236;

LAB237:    xsi_set_current_line(998, ng7);

LAB240:    xsi_set_current_line(999, ng7);
    t74 = (t0 + 17392U);
    t75 = *((char **)t74);
    t74 = (t0 + 31072);
    xsi_vlogvar_assign_value(t74, t75, 0, 0, 2);
    xsi_set_current_line(1000, ng7);
    t2 = (t0 + 18032U);
    t3 = *((char **)t2);
    t2 = (t0 + 31232);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 16);
    goto LAB239;

LAB243:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB244;

LAB245:    xsi_set_current_line(1001, ng7);

LAB248:    xsi_set_current_line(1002, ng7);
    t22 = (t0 + 29472);
    t23 = (t22 + 56U);
    t28 = *((char **)t23);
    memset(t15, 0, 8);
    t29 = (t28 + 4);
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t40 = *((unsigned int *)t28);
    t41 = (t40 & t37);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB252;

LAB250:    if (*((unsigned int *)t29) == 0)
        goto LAB249;

LAB251:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;

LAB252:    t32 = (t15 + 4);
    t46 = *((unsigned int *)t32);
    t47 = (~(t46));
    t48 = *((unsigned int *)t15);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB253;

LAB254:
LAB255:    xsi_set_current_line(1008, ng7);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 30912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB247;

LAB249:    *((unsigned int *)t15) = 1;
    goto LAB252;

LAB253:    xsi_set_current_line(1002, ng7);

LAB256:    xsi_set_current_line(1003, ng7);
    t38 = ((char*)((ng17)));
    t43 = (t38 + 4);
    t51 = *((unsigned int *)t43);
    t52 = (~(t51));
    t55 = *((unsigned int *)t38);
    t56 = (t55 & t52);
    t57 = (t56 != 0);
    if (t57 > 0)
        goto LAB257;

LAB258:
LAB259:    xsi_set_current_line(1005, ng7);
    t2 = (t0 + 28992);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 31072);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t14 = (t0 + 31232);
    t16 = (t14 + 56U);
    t22 = *((char **)t16);
    t23 = (t0 + 52104);
    t28 = (t0 + 14024);
    t29 = xsi_create_subprogram_invocation(t23, 0, t0, t28, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t28, t29);
    t30 = (t0 + 40192);
    xsi_vlogvar_assign_value(t30, t5, 0, 0, 23);
    t32 = (t0 + 40352);
    xsi_vlogvar_assign_value(t32, t8, 0, 0, 2);
    t38 = (t0 + 40512);
    xsi_vlogvar_assign_value(t38, t22, 0, 0, 16);

LAB262:    t43 = (t0 + 52200);
    t44 = *((char **)t43);
    t45 = (t44 + 80U);
    t53 = *((char **)t45);
    t54 = (t53 + 272U);
    t67 = *((char **)t54);
    t74 = (t67 + 0U);
    t75 = *((char **)t74);
    t58 = ((int  (*)(char *, char *))t75)(t0, t44);

LAB264:    if (t58 != 0)
        goto LAB265;

LAB260:    t44 = (t0 + 14024);
    xsi_vlog_subprogram_popinvocation(t44);

LAB261:    t81 = (t0 + 52200);
    t82 = *((char **)t81);
    t81 = (t0 + 14024);
    t89 = (t0 + 52104);
    t90 = 0;
    xsi_delete_subprogram_invocation(t81, t82, t0, t89, t90);
    xsi_set_current_line(1006, ng7);
    t2 = (t0 + 28992);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t13 & 127U);
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t17 & 127U);
    t8 = ((char*)((ng9)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t4, 32, t8, 32);
    t14 = (t0 + 28992);
    t16 = (t0 + 28992);
    t22 = (t16 + 72U);
    t23 = *((char **)t22);
    t28 = ((char*)((ng154)));
    t29 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t31, t39, t73, ((int*)(t23)), 2, t28, 32, 1, t29, 32, 1);
    t30 = (t31 + 4);
    t18 = *((unsigned int *)t30);
    t58 = (!(t18));
    t32 = (t39 + 4);
    t19 = *((unsigned int *)t32);
    t62 = (!(t19));
    t111 = (t58 && t62);
    t38 = (t73 + 4);
    t20 = *((unsigned int *)t38);
    t112 = (!(t20));
    t113 = (t111 && t112);
    if (t113 == 1)
        goto LAB266;

LAB267:    goto LAB255;

LAB257:    xsi_set_current_line(1004, ng7);
    t105 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t31) = t105;
    t44 = (t0 + 28992);
    t45 = (t44 + 56U);
    t53 = *((char **)t45);
    t54 = (t0 + 31072);
    t67 = (t54 + 56U);
    t74 = *((char **)t67);
    t75 = (t0 + 31232);
    t81 = (t75 + 56U);
    t82 = *((char **)t81);
    xsi_vlogfile_write(1, 0, 0, ng153, 5, t0, (char)114, t31, 64, (char)118, t53, 23, (char)118, t74, 2, (char)118, t82, 16);
    goto LAB259;

LAB263:;
LAB265:    t43 = (t0 + 52296U);
    *((char **)t43) = &&LAB262;
    goto LAB1;

LAB266:    t21 = *((unsigned int *)t73);
    t114 = (t21 + 0);
    t24 = *((unsigned int *)t31);
    t25 = *((unsigned int *)t39);
    t115 = (t24 - t25);
    t116 = (t115 + 1);
    xsi_vlogvar_assign_value(t14, t15, t114, *((unsigned int *)t39), t116);
    goto LAB267;

LAB269:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB271;

LAB270:    *((unsigned int *)t4) = 1;
    goto LAB271;

LAB273:    xsi_set_current_line(1010, ng7);

LAB276:    xsi_set_current_line(1011, ng7);
    t22 = ((char*)((ng8)));
    t23 = (t0 + 31552);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 16);
    xsi_set_current_line(1012, ng7);
    xsi_set_current_line(1012, ng7);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 30432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB277:    t2 = (t0 + 30432);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 5712);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t7, 32);
    t6 = (t4 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB278;

LAB279:    xsi_set_current_line(1015, ng7);
    t2 = (t0 + 31552);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 31712);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 16, 2000LL);
    xsi_set_current_line(1016, ng7);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 32032);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 2000LL);
    xsi_set_current_line(1018, ng7);
    t2 = (t0 + 29472);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB291;

LAB289:    if (*((unsigned int *)t6) == 0)
        goto LAB288;

LAB290:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;

LAB291:    t8 = (t4 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (~(t17));
    t19 = *((unsigned int *)t4);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB292;

LAB293:    xsi_set_current_line(1028, ng7);

LAB319:    xsi_set_current_line(1029, ng7);
    t2 = (t0 + 29312);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB320;

LAB321:    xsi_set_current_line(1039, ng7);

LAB355:    xsi_set_current_line(1040, ng7);
    t2 = (t0 + 28992);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 52104);
    t7 = (t0 + 14456);
    t8 = xsi_create_subprogram_invocation(t6, 0, t0, t7, 0, 0);
    t14 = (t0 + 41312);
    xsi_vlogvar_assign_value(t14, t5, 0, 0, 23);

LAB356:    t16 = (t0 + 52200);
    t22 = *((char **)t16);
    t23 = (t22 + 80U);
    t28 = *((char **)t23);
    t29 = (t28 + 272U);
    t30 = *((char **)t29);
    t32 = (t30 + 0U);
    t38 = *((char **)t32);
    t58 = ((int  (*)(char *, char *))t38)(t0, t22);
    if (t58 != 0)
        goto LAB358;

LAB357:    t22 = (t0 + 52200);
    t43 = *((char **)t22);
    t22 = (t0 + 41152);
    t44 = (t22 + 56U);
    t45 = *((char **)t44);
    memcpy(t15, t45, 8);
    t53 = (t0 + 14456);
    t54 = (t0 + 52104);
    t67 = 0;
    xsi_delete_subprogram_invocation(t53, t43, t0, t54, t67);
    t74 = (t0 + 31872);
    xsi_vlogvar_assign_value(t74, t15, 0, 0, 16);
    xsi_set_current_line(1041, ng7);
    t2 = ((char*)((ng17)));
    t3 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t2);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB359;

LAB360:
LAB361:    xsi_set_current_line(1043, ng7);
    t2 = (t0 + 31872);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 32032);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 16, 11000LL);

LAB322:
LAB294:    xsi_set_current_line(1048, ng7);
    t2 = (t0 + 29312);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t15, 0, 8);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB365;

LAB363:    if (*((unsigned int *)t6) == 0)
        goto LAB362;

LAB364:    t7 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t7) = 1;

LAB365:    t8 = (t15 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (~(t17));
    t19 = *((unsigned int *)t15);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB366;

LAB367:
LAB368:    goto LAB275;

LAB278:    xsi_set_current_line(1012, ng7);

LAB280:    xsi_set_current_line(1013, ng7);
    t8 = (t0 + 31552);
    t14 = (t8 + 56U);
    t16 = *((char **)t14);
    t22 = ((char*)((ng14)));
    t23 = (t0 + 17392U);
    t28 = *((char **)t23);
    t23 = (t0 + 17352U);
    t29 = (t23 + 72U);
    t30 = *((char **)t29);
    t32 = (t0 + 30432);
    t38 = (t32 + 56U);
    t43 = *((char **)t38);
    xsi_vlog_generic_get_index_select_value(t39, 1, t28, t30, 2, t43, 32, 1);
    memset(t31, 0, 8);
    t44 = (t39 + 4);
    t17 = *((unsigned int *)t44);
    t18 = (~(t17));
    t19 = *((unsigned int *)t39);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB284;

LAB282:    if (*((unsigned int *)t44) == 0)
        goto LAB281;

LAB283:    t45 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t45) = 1;

LAB284:    xsi_vlog_mul_concat(t15, 16, 1, t22, 1U, t31, 1);
    t53 = (t0 + 30432);
    t54 = (t53 + 56U);
    t67 = *((char **)t54);
    t74 = (t0 + 5576);
    t75 = *((char **)t74);
    t74 = (t0 + 5712);
    t81 = *((char **)t74);
    memset(t73, 0, 8);
    xsi_vlog_signed_divide(t73, 32, t75, 32, t81, 32);
    memset(t88, 0, 8);
    xsi_vlog_signed_multiply(t88, 32, t67, 32, t73, 32);
    memset(t110, 0, 8);
    xsi_vlog_unsigned_lshift(t110, 16, t15, 16, t88, 32);
    t24 = *((unsigned int *)t16);
    t25 = *((unsigned int *)t110);
    t26 = (t24 | t25);
    *((unsigned int *)t117) = t26;
    t74 = (t16 + 4);
    t82 = (t110 + 4);
    t89 = (t117 + 4);
    t27 = *((unsigned int *)t74);
    t33 = *((unsigned int *)t82);
    t34 = (t27 | t33);
    *((unsigned int *)t89) = t34;
    t35 = *((unsigned int *)t89);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB285;

LAB286:
LAB287:    t97 = (t0 + 31552);
    xsi_vlogvar_assign_value(t97, t117, 0, 0, 16);
    xsi_set_current_line(1012, ng7);
    t2 = (t0 + 30432);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 30432);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB277;

LAB281:    *((unsigned int *)t31) = 1;
    goto LAB284;

LAB285:    t37 = *((unsigned int *)t117);
    t40 = *((unsigned int *)t89);
    *((unsigned int *)t117) = (t37 | t40);
    t90 = (t16 + 4);
    t96 = (t110 + 4);
    t41 = *((unsigned int *)t90);
    t42 = (~(t41));
    t46 = *((unsigned int *)t16);
    t58 = (t46 & t42);
    t47 = *((unsigned int *)t96);
    t48 = (~(t47));
    t49 = *((unsigned int *)t110);
    t62 = (t49 & t48);
    t50 = (~(t58));
    t51 = (~(t62));
    t52 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t52 & t50);
    t55 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t55 & t51);
    goto LAB287;

LAB288:    *((unsigned int *)t4) = 1;
    goto LAB291;

LAB292:    xsi_set_current_line(1018, ng7);

LAB295:    xsi_set_current_line(1019, ng7);
    t14 = (t0 + 29312);
    t16 = (t14 + 56U);
    t22 = *((char **)t16);
    t23 = (t22 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t26 & t25);
    t33 = (t27 != 0);
    if (t33 > 0)
        goto LAB296;

LAB297:    xsi_set_current_line(1023, ng7);

LAB309:    xsi_set_current_line(1024, ng7);
    t2 = ((char*)((ng17)));
    t3 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t2);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB310;

LAB311:
LAB312:    xsi_set_current_line(1026, ng7);
    t2 = (t0 + 28992);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 17392U);
    t7 = *((char **)t6);
    t6 = (t0 + 18032U);
    t8 = *((char **)t6);
    t6 = (t0 + 52104);
    t14 = (t0 + 14024);
    t16 = xsi_create_subprogram_invocation(t6, 0, t0, t14, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t14, t16);
    t22 = (t0 + 40192);
    xsi_vlogvar_assign_value(t22, t5, 0, 0, 23);
    t23 = (t0 + 40352);
    xsi_vlogvar_assign_value(t23, t7, 0, 0, 2);
    t28 = (t0 + 40512);
    xsi_vlogvar_assign_value(t28, t8, 0, 0, 16);

LAB315:    t29 = (t0 + 52200);
    t30 = *((char **)t29);
    t32 = (t30 + 80U);
    t38 = *((char **)t32);
    t43 = (t38 + 272U);
    t44 = *((char **)t43);
    t45 = (t44 + 0U);
    t53 = *((char **)t45);
    t58 = ((int  (*)(char *, char *))t53)(t0, t30);

LAB317:    if (t58 != 0)
        goto LAB318;

LAB313:    t30 = (t0 + 14024);
    xsi_vlog_subprogram_popinvocation(t30);

LAB314:    t54 = (t0 + 52200);
    t67 = *((char **)t54);
    t54 = (t0 + 14024);
    t74 = (t0 + 52104);
    t75 = 0;
    xsi_delete_subprogram_invocation(t54, t67, t0, t74, t75);

LAB298:    goto LAB294;

LAB296:    xsi_set_current_line(1019, ng7);

LAB299:    xsi_set_current_line(1020, ng7);
    t28 = ((char*)((ng17)));
    t29 = (t28 + 4);
    t34 = *((unsigned int *)t29);
    t35 = (~(t34));
    t36 = *((unsigned int *)t28);
    t37 = (t36 & t35);
    t40 = (t37 != 0);
    if (t40 > 0)
        goto LAB300;

LAB301:
LAB302:    xsi_set_current_line(1022, ng7);
    t2 = (t0 + 28992);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6664);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_rshift(t4, 23, t5, 23, t7, 32);
    t6 = (t0 + 28992);
    t8 = (t6 + 56U);
    t14 = *((char **)t8);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t22 = (t14 + 4);
    t9 = *((unsigned int *)t14);
    t10 = (t9 >> 0);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t22);
    t12 = (t11 >> 0);
    *((unsigned int *)t16) = t12;
    t13 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t13 & 65535U);
    t17 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t17 & 65535U);
    t23 = ((char*)((ng17)));
    t28 = (t0 + 52104);
    t29 = (t0 + 14888);
    t30 = xsi_create_subprogram_invocation(t28, 0, t0, t29, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t29, t30);
    t32 = (t0 + 41472);
    xsi_vlogvar_assign_value(t32, t4, 0, 0, 2);
    t38 = (t0 + 41632);
    xsi_vlogvar_assign_value(t38, t15, 0, 0, 16);
    t43 = (t0 + 41792);
    xsi_vlogvar_assign_value(t43, t23, 0, 0, 1);

LAB305:    t44 = (t0 + 52200);
    t45 = *((char **)t44);
    t53 = (t45 + 80U);
    t54 = *((char **)t53);
    t67 = (t54 + 272U);
    t74 = *((char **)t67);
    t75 = (t74 + 0U);
    t81 = *((char **)t75);
    t58 = ((int  (*)(char *, char *))t81)(t0, t45);

LAB307:    if (t58 != 0)
        goto LAB308;

LAB303:    t45 = (t0 + 14888);
    xsi_vlog_subprogram_popinvocation(t45);

LAB304:    t82 = (t0 + 52200);
    t89 = *((char **)t82);
    t82 = (t0 + 14888);
    t90 = (t0 + 52104);
    t96 = 0;
    xsi_delete_subprogram_invocation(t82, t89, t0, t90, t96);
    goto LAB298;

LAB300:    xsi_set_current_line(1021, ng7);
    t105 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t15) = t105;
    t30 = (t0 + 28992);
    t32 = (t30 + 56U);
    t38 = *((char **)t32);
    t43 = (t0 + 6664);
    t44 = *((char **)t43);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_rshift(t31, 23, t38, 23, t44, 32);
    t43 = (t0 + 28992);
    t45 = (t43 + 56U);
    t53 = *((char **)t45);
    xsi_vlogfile_write(1, 0, 0, ng155, 4, t0, (char)114, t15, 64, (char)118, t31, 23, (char)118, t53, 23);
    goto LAB302;

LAB306:;
LAB308:    t44 = (t0 + 52296U);
    *((char **)t44) = &&LAB305;
    goto LAB1;

LAB310:    xsi_set_current_line(1025, ng7);
    t105 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t4) = t105;
    t5 = (t0 + 28992);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 17392U);
    t14 = *((char **)t8);
    t8 = (t0 + 18032U);
    t16 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng156, 5, t0, (char)114, t4, 64, (char)118, t7, 23, (char)118, t14, 2, (char)118, t16, 16);
    goto LAB312;

LAB316:;
LAB318:    t29 = (t0 + 52296U);
    *((char **)t29) = &&LAB315;
    goto LAB1;

LAB320:    xsi_set_current_line(1029, ng7);

LAB323:    xsi_set_current_line(1030, ng7);
    t7 = (t0 + 28992);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    t16 = (t0 + 6664);
    t22 = *((char **)t16);
    memset(t4, 0, 8);
    xsi_vlog_unsigned_rshift(t4, 23, t14, 23, t22, 32);

LAB324:    t16 = ((char*)((ng6)));
    t23 = ((char*)((ng2)));
    t17 = *((unsigned int *)t16);
    t18 = *((unsigned int *)t23);
    t19 = (t17 & t18);
    *((unsigned int *)t15) = t19;
    t28 = (t16 + 4);
    t29 = (t23 + 4);
    t30 = (t15 + 4);
    t20 = *((unsigned int *)t28);
    t21 = *((unsigned int *)t29);
    t24 = (t20 | t21);
    *((unsigned int *)t30) = t24;
    t25 = *((unsigned int *)t30);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB334;

LAB335:
LAB336:    t111 = xsi_vlog_unsigned_case_compare(t4, 23, t15, 23);
    if (t111 == 1)
        goto LAB325;

LAB326:    t2 = ((char*)((ng17)));
    t3 = ((char*)((ng2)));
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t3);
    t11 = (t9 & t10);
    *((unsigned int *)t15) = t11;
    t5 = (t2 + 4);
    t6 = (t3 + 4);
    t7 = (t15 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t6);
    t17 = (t12 | t13);
    *((unsigned int *)t7) = t17;
    t18 = *((unsigned int *)t7);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB340;

LAB341:
LAB342:    t111 = xsi_vlog_unsigned_case_compare(t4, 23, t15, 23);
    if (t111 == 1)
        goto LAB327;

LAB328:    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng2)));
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t3);
    t11 = (t9 & t10);
    *((unsigned int *)t15) = t11;
    t5 = (t2 + 4);
    t6 = (t3 + 4);
    t7 = (t15 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t6);
    t17 = (t12 | t13);
    *((unsigned int *)t7) = t17;
    t18 = *((unsigned int *)t7);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB346;

LAB347:
LAB348:    t111 = xsi_vlog_unsigned_case_compare(t4, 23, t15, 23);
    if (t111 == 1)
        goto LAB329;

LAB330:
LAB332:
LAB331:    xsi_set_current_line(1034, ng7);
    t105 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t15) = t105;
    t2 = (t0 + 28992);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6664);
    t7 = *((char **)t6);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_rshift(t31, 23, t5, 23, t7, 32);
    xsi_vlogfile_write(1, 0, 0, ng157, 3, t0, (char)114, t15, 64, (char)118, t31, 23);

LAB333:    xsi_set_current_line(1036, ng7);
    t2 = ((char*)((ng17)));
    t3 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t2);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB352;

LAB353:
LAB354:    xsi_set_current_line(1038, ng7);
    t2 = (t0 + 31872);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 32032);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 16, 11000LL);
    goto LAB322;

LAB325:    xsi_set_current_line(1031, ng7);
    t43 = (t0 + 19792U);
    t44 = *((char **)t43);
    t43 = ((char*)((ng6)));
    t45 = (t0 + 6664);
    t53 = *((char **)t45);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_lshift(t31, 16, t43, 2, t53, 32);
    t55 = *((unsigned int *)t44);
    t56 = *((unsigned int *)t31);
    t57 = (t55 | t56);
    *((unsigned int *)t39) = t57;
    t45 = (t44 + 4);
    t54 = (t31 + 4);
    t67 = (t39 + 4);
    t59 = *((unsigned int *)t45);
    t60 = *((unsigned int *)t54);
    t61 = (t59 | t60);
    *((unsigned int *)t67) = t61;
    t63 = *((unsigned int *)t67);
    t64 = (t63 != 0);
    if (t64 == 1)
        goto LAB337;

LAB338:
LAB339:    t81 = (t0 + 31872);
    xsi_vlogvar_assign_value(t81, t39, 0, 0, 16);
    goto LAB333;

LAB327:    xsi_set_current_line(1032, ng7);
    t16 = (t0 + 19952U);
    t22 = *((char **)t16);
    t16 = ((char*)((ng17)));
    t23 = (t0 + 6664);
    t28 = *((char **)t23);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_lshift(t31, 16, t16, 2, t28, 32);
    t48 = *((unsigned int *)t22);
    t49 = *((unsigned int *)t31);
    t50 = (t48 | t49);
    *((unsigned int *)t39) = t50;
    t23 = (t22 + 4);
    t29 = (t31 + 4);
    t30 = (t39 + 4);
    t51 = *((unsigned int *)t23);
    t52 = *((unsigned int *)t29);
    t55 = (t51 | t52);
    *((unsigned int *)t30) = t55;
    t56 = *((unsigned int *)t30);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB343;

LAB344:
LAB345:    t43 = (t0 + 31872);
    xsi_vlogvar_assign_value(t43, t39, 0, 0, 16);
    goto LAB333;

LAB329:    xsi_set_current_line(1033, ng7);
    t16 = (t0 + 19632U);
    t22 = *((char **)t16);
    t16 = ((char*)((ng1)));
    t23 = (t0 + 6664);
    t28 = *((char **)t23);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_lshift(t31, 16, t16, 2, t28, 32);
    t48 = *((unsigned int *)t22);
    t49 = *((unsigned int *)t31);
    t50 = (t48 | t49);
    *((unsigned int *)t39) = t50;
    t23 = (t22 + 4);
    t29 = (t31 + 4);
    t30 = (t39 + 4);
    t51 = *((unsigned int *)t23);
    t52 = *((unsigned int *)t29);
    t55 = (t51 | t52);
    *((unsigned int *)t30) = t55;
    t56 = *((unsigned int *)t30);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB349;

LAB350:
LAB351:    t43 = (t0 + 31872);
    xsi_vlogvar_assign_value(t43, t39, 0, 0, 16);
    goto LAB333;

LAB334:    t27 = *((unsigned int *)t15);
    t33 = *((unsigned int *)t30);
    *((unsigned int *)t15) = (t27 | t33);
    t32 = (t16 + 4);
    t38 = (t23 + 4);
    t34 = *((unsigned int *)t16);
    t35 = (~(t34));
    t36 = *((unsigned int *)t32);
    t37 = (~(t36));
    t40 = *((unsigned int *)t23);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t46 = (~(t42));
    t58 = (t35 & t37);
    t62 = (t41 & t46);
    t47 = (~(t58));
    t48 = (~(t62));
    t49 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t49 & t47);
    t50 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t50 & t48);
    t51 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t51 & t47);
    t52 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t52 & t48);
    goto LAB336;

LAB337:    t65 = *((unsigned int *)t39);
    t66 = *((unsigned int *)t67);
    *((unsigned int *)t39) = (t65 | t66);
    t74 = (t44 + 4);
    t75 = (t31 + 4);
    t68 = *((unsigned int *)t74);
    t69 = (~(t68));
    t70 = *((unsigned int *)t44);
    t112 = (t70 & t69);
    t71 = *((unsigned int *)t75);
    t72 = (~(t71));
    t76 = *((unsigned int *)t31);
    t113 = (t76 & t72);
    t77 = (~(t112));
    t78 = (~(t113));
    t79 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t79 & t77);
    t80 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t80 & t78);
    goto LAB339;

LAB340:    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t15) = (t20 | t21);
    t8 = (t2 + 4);
    t14 = (t3 + 4);
    t24 = *((unsigned int *)t2);
    t25 = (~(t24));
    t26 = *((unsigned int *)t8);
    t27 = (~(t26));
    t33 = *((unsigned int *)t3);
    t34 = (~(t33));
    t35 = *((unsigned int *)t14);
    t36 = (~(t35));
    t58 = (t25 & t27);
    t62 = (t34 & t36);
    t37 = (~(t58));
    t40 = (~(t62));
    t41 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t41 & t37);
    t42 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t42 & t40);
    t46 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t46 & t37);
    t47 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t47 & t40);
    goto LAB342;

LAB343:    t59 = *((unsigned int *)t39);
    t60 = *((unsigned int *)t30);
    *((unsigned int *)t39) = (t59 | t60);
    t32 = (t22 + 4);
    t38 = (t31 + 4);
    t61 = *((unsigned int *)t32);
    t63 = (~(t61));
    t64 = *((unsigned int *)t22);
    t112 = (t64 & t63);
    t65 = *((unsigned int *)t38);
    t66 = (~(t65));
    t68 = *((unsigned int *)t31);
    t113 = (t68 & t66);
    t69 = (~(t112));
    t70 = (~(t113));
    t71 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t71 & t69);
    t72 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t72 & t70);
    goto LAB345;

LAB346:    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t7);
    *((unsigned int *)t15) = (t20 | t21);
    t8 = (t2 + 4);
    t14 = (t3 + 4);
    t24 = *((unsigned int *)t2);
    t25 = (~(t24));
    t26 = *((unsigned int *)t8);
    t27 = (~(t26));
    t33 = *((unsigned int *)t3);
    t34 = (~(t33));
    t35 = *((unsigned int *)t14);
    t36 = (~(t35));
    t58 = (t25 & t27);
    t62 = (t34 & t36);
    t37 = (~(t58));
    t40 = (~(t62));
    t41 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t41 & t37);
    t42 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t42 & t40);
    t46 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t46 & t37);
    t47 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t47 & t40);
    goto LAB348;

LAB349:    t59 = *((unsigned int *)t39);
    t60 = *((unsigned int *)t30);
    *((unsigned int *)t39) = (t59 | t60);
    t32 = (t22 + 4);
    t38 = (t31 + 4);
    t61 = *((unsigned int *)t32);
    t63 = (~(t61));
    t64 = *((unsigned int *)t22);
    t112 = (t64 & t63);
    t65 = *((unsigned int *)t38);
    t66 = (~(t65));
    t68 = *((unsigned int *)t31);
    t113 = (t68 & t66);
    t69 = (~(t112));
    t70 = (~(t113));
    t71 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t71 & t69);
    t72 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t72 & t70);
    goto LAB351;

LAB352:    xsi_set_current_line(1037, ng7);
    t105 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t15) = t105;
    t5 = (t0 + 28992);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 6664);
    t14 = *((char **)t8);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_rshift(t31, 23, t7, 23, t14, 32);
    t8 = (t0 + 31872);
    t16 = (t8 + 56U);
    t22 = *((char **)t16);
    xsi_vlogfile_write(1, 0, 0, ng158, 4, t0, (char)114, t15, 64, (char)118, t31, 23, (char)118, t22, 16);
    goto LAB354;

LAB358:    t16 = (t0 + 52296U);
    *((char **)t16) = &&LAB356;
    goto LAB1;

LAB359:    xsi_set_current_line(1042, ng7);
    t105 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t15) = t105;
    t5 = (t0 + 28992);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 31872);
    t14 = (t8 + 56U);
    t16 = *((char **)t14);
    xsi_vlogfile_write(1, 0, 0, ng159, 4, t0, (char)114, t15, 64, (char)118, t7, 23, (char)118, t16, 16);
    goto LAB361;

LAB362:    *((unsigned int *)t15) = 1;
    goto LAB365;

LAB366:    xsi_set_current_line(1048, ng7);

LAB369:    xsi_set_current_line(1051, ng7);
    t14 = (t0 + 32352);
    t16 = (t14 + 56U);
    t22 = *((char **)t16);
    memset(t31, 0, 8);
    t23 = (t22 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t26 & t25);
    t33 = (t27 & 1U);
    if (t33 != 0)
        goto LAB373;

LAB371:    if (*((unsigned int *)t23) == 0)
        goto LAB370;

LAB372:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;

LAB373:    memset(t39, 0, 8);
    t29 = (t31 + 4);
    t34 = *((unsigned int *)t29);
    t35 = (~(t34));
    t36 = *((unsigned int *)t31);
    t37 = (t36 & t35);
    t40 = (t37 & 1U);
    if (t40 != 0)
        goto LAB374;

LAB375:    if (*((unsigned int *)t29) != 0)
        goto LAB376;

LAB377:    t32 = (t39 + 4);
    t41 = *((unsigned int *)t39);
    t42 = *((unsigned int *)t32);
    t46 = (t41 || t42);
    if (t46 > 0)
        goto LAB378;

LAB379:    memcpy(t122, t39, 8);

LAB380:    t150 = (t122 + 4);
    t151 = *((unsigned int *)t150);
    t152 = (~(t151));
    t153 = *((unsigned int *)t122);
    t154 = (t153 & t152);
    t155 = (t154 != 0);
    if (t155 > 0)
        goto LAB407;

LAB408:    xsi_set_current_line(1060, ng7);

LAB436:    xsi_set_current_line(1061, ng7);
    t2 = (t0 + 28992);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t13 & 127U);
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t17 & 127U);
    t8 = ((char*)((ng162)));
    memset(t31, 0, 8);
    t14 = (t15 + 4);
    t16 = (t8 + 4);
    t18 = *((unsigned int *)t15);
    t19 = *((unsigned int *)t8);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t16);
    t25 = (t21 ^ t24);
    t26 = (t20 | t25);
    t27 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t16);
    t34 = (t27 | t33);
    t35 = (~(t34));
    t36 = (t26 & t35);
    if (t36 != 0)
        goto LAB440;

LAB437:    if (t34 != 0)
        goto LAB439;

LAB438:    *((unsigned int *)t31) = 1;

LAB440:    t23 = (t31 + 4);
    t37 = *((unsigned int *)t23);
    t40 = (~(t37));
    t41 = *((unsigned int *)t31);
    t42 = (t41 & t40);
    t46 = (t42 != 0);
    if (t46 > 0)
        goto LAB441;

LAB442:
LAB443:    xsi_set_current_line(1071, ng7);
    t2 = (t0 + 28992);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t13 & 127U);
    t17 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t17 & 127U);
    t8 = ((char*)((ng9)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t15, 32, t8, 32);
    t14 = (t0 + 28992);
    t16 = (t0 + 28992);
    t22 = (t16 + 72U);
    t23 = *((char **)t22);
    t28 = ((char*)((ng154)));
    t29 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t39, t73, t88, ((int*)(t23)), 2, t28, 32, 1, t29, 32, 1);
    t30 = (t39 + 4);
    t18 = *((unsigned int *)t30);
    t58 = (!(t18));
    t32 = (t73 + 4);
    t19 = *((unsigned int *)t32);
    t62 = (!(t19));
    t111 = (t58 && t62);
    t38 = (t88 + 4);
    t20 = *((unsigned int *)t38);
    t112 = (!(t20));
    t113 = (t111 && t112);
    if (t113 == 1)
        goto LAB483;

LAB484:
LAB409:    goto LAB368;

LAB370:    *((unsigned int *)t31) = 1;
    goto LAB373;

LAB374:    *((unsigned int *)t39) = 1;
    goto LAB377;

LAB376:    t30 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB377;

LAB378:    t38 = (t0 + 29472);
    t43 = (t38 + 56U);
    t44 = *((char **)t43);
    memset(t73, 0, 8);
    t45 = (t44 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (~(t47));
    t49 = *((unsigned int *)t44);
    t50 = (t49 & t48);
    t51 = (t50 & 1U);
    if (t51 != 0)
        goto LAB381;

LAB382:    if (*((unsigned int *)t45) != 0)
        goto LAB383;

LAB384:    t54 = (t73 + 4);
    t52 = *((unsigned int *)t73);
    t55 = (!(t52));
    t56 = *((unsigned int *)t54);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB385;

LAB386:    memcpy(t117, t73, 8);

LAB387:    memset(t119, 0, 8);
    t120 = (t117 + 4);
    t94 = *((unsigned int *)t120);
    t95 = (~(t94));
    t98 = *((unsigned int *)t117);
    t99 = (t98 & t95);
    t100 = (t99 & 1U);
    if (t100 != 0)
        goto LAB400;

LAB401:    if (*((unsigned int *)t120) != 0)
        goto LAB402;

LAB403:    t101 = *((unsigned int *)t39);
    t102 = *((unsigned int *)t119);
    t123 = (t101 & t102);
    *((unsigned int *)t122) = t123;
    t124 = (t39 + 4);
    t125 = (t119 + 4);
    t126 = (t122 + 4);
    t127 = *((unsigned int *)t124);
    t128 = *((unsigned int *)t125);
    t129 = (t127 | t128);
    *((unsigned int *)t126) = t129;
    t130 = *((unsigned int *)t126);
    t131 = (t130 != 0);
    if (t131 == 1)
        goto LAB404;

LAB405:
LAB406:    goto LAB380;

LAB381:    *((unsigned int *)t73) = 1;
    goto LAB384;

LAB383:    t53 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB384;

LAB385:    t67 = ((char*)((ng1)));
    t74 = ((char*)((ng17)));
    memset(t88, 0, 8);
    t75 = (t67 + 4);
    if (*((unsigned int *)t75) != 0)
        goto LAB389;

LAB388:    t81 = (t74 + 4);
    if (*((unsigned int *)t81) != 0)
        goto LAB389;

LAB392:    if (*((unsigned int *)t67) > *((unsigned int *)t74))
        goto LAB390;

LAB391:    memset(t110, 0, 8);
    t89 = (t88 + 4);
    t59 = *((unsigned int *)t89);
    t60 = (~(t59));
    t61 = *((unsigned int *)t88);
    t63 = (t61 & t60);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB393;

LAB394:    if (*((unsigned int *)t89) != 0)
        goto LAB395;

LAB396:    t65 = *((unsigned int *)t73);
    t66 = *((unsigned int *)t110);
    t68 = (t65 | t66);
    *((unsigned int *)t117) = t68;
    t96 = (t73 + 4);
    t97 = (t110 + 4);
    t103 = (t117 + 4);
    t69 = *((unsigned int *)t96);
    t70 = *((unsigned int *)t97);
    t71 = (t69 | t70);
    *((unsigned int *)t103) = t71;
    t72 = *((unsigned int *)t103);
    t76 = (t72 != 0);
    if (t76 == 1)
        goto LAB397;

LAB398:
LAB399:    goto LAB387;

LAB389:    t82 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB391;

LAB390:    *((unsigned int *)t88) = 1;
    goto LAB391;

LAB393:    *((unsigned int *)t110) = 1;
    goto LAB396;

LAB395:    t90 = (t110 + 4);
    *((unsigned int *)t110) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB396;

LAB397:    t77 = *((unsigned int *)t117);
    t78 = *((unsigned int *)t103);
    *((unsigned int *)t117) = (t77 | t78);
    t104 = (t73 + 4);
    t118 = (t110 + 4);
    t79 = *((unsigned int *)t104);
    t80 = (~(t79));
    t83 = *((unsigned int *)t73);
    t58 = (t83 & t80);
    t84 = *((unsigned int *)t118);
    t85 = (~(t84));
    t86 = *((unsigned int *)t110);
    t62 = (t86 & t85);
    t87 = (~(t58));
    t91 = (~(t62));
    t92 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t92 & t87);
    t93 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t93 & t91);
    goto LAB399;

LAB400:    *((unsigned int *)t119) = 1;
    goto LAB403;

LAB402:    t121 = (t119 + 4);
    *((unsigned int *)t119) = 1;
    *((unsigned int *)t121) = 1;
    goto LAB403;

LAB404:    t132 = *((unsigned int *)t122);
    t133 = *((unsigned int *)t126);
    *((unsigned int *)t122) = (t132 | t133);
    t134 = (t39 + 4);
    t135 = (t119 + 4);
    t136 = *((unsigned int *)t39);
    t137 = (~(t136));
    t138 = *((unsigned int *)t134);
    t139 = (~(t138));
    t140 = *((unsigned int *)t119);
    t141 = (~(t140));
    t142 = *((unsigned int *)t135);
    t143 = (~(t142));
    t111 = (t137 & t139);
    t112 = (t141 & t143);
    t144 = (~(t111));
    t145 = (~(t112));
    t146 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t146 & t144);
    t147 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t147 & t145);
    t148 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t148 & t144);
    t149 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t149 & t145);
    goto LAB406;

LAB407:    xsi_set_current_line(1051, ng7);

LAB410:    xsi_set_current_line(1052, ng7);
    t156 = (t0 + 32192);
    t157 = (t156 + 56U);
    t158 = *((char **)t157);
    t160 = ((char*)((ng84)));
    t161 = (t0 + 29152);
    t162 = (t161 + 56U);
    t163 = *((char **)t162);
    xsi_vlog_mul_concat(t159, 3, 1, t160, 1U, t163, 1);
    t165 = *((unsigned int *)t158);
    t166 = *((unsigned int *)t159);
    t167 = (t165 | t166);
    *((unsigned int *)t164) = t167;
    t168 = (t158 + 4);
    t169 = (t159 + 4);
    t170 = (t164 + 4);
    t171 = *((unsigned int *)t168);
    t172 = *((unsigned int *)t169);
    t173 = (t171 | t172);
    *((unsigned int *)t170) = t173;
    t174 = *((unsigned int *)t170);
    t175 = (t174 != 0);
    if (t175 == 1)
        goto LAB423;

LAB424:
LAB425:
LAB411:    t190 = ((char*)((ng17)));
    t115 = xsi_vlog_unsigned_case_compare(t164, 3, t190, 3);
    if (t115 == 1)
        goto LAB412;

LAB413:    t2 = ((char*)((ng1)));
    t58 = xsi_vlog_unsigned_case_compare(t164, 3, t2, 3);
    if (t58 == 1)
        goto LAB414;

LAB415:    t2 = ((char*)((ng2)));
    t58 = xsi_vlog_unsigned_case_compare(t164, 3, t2, 3);
    if (t58 == 1)
        goto LAB416;

LAB417:    t2 = ((char*)((ng3)));
    t58 = xsi_vlog_unsigned_case_compare(t164, 3, t2, 3);
    if (t58 == 1)
        goto LAB418;

LAB419:    t2 = ((char*)((ng26)));
    t58 = xsi_vlog_unsigned_case_compare(t164, 3, t2, 3);
    if (t58 == 1)
        goto LAB420;

LAB421:
LAB422:    xsi_set_current_line(1059, ng7);
    t105 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t15) = t105;
    t2 = (t0 + 28992);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng161, 3, t0, (char)114, t15, 64, (char)118, t5, 23);
    goto LAB409;

LAB412:    xsi_set_current_line(1053, ng7);
    t192 = (t0 + 28992);
    t193 = (t192 + 56U);
    t194 = *((char **)t193);
    memset(t191, 0, 8);
    t195 = (t191 + 4);
    t196 = (t194 + 4);
    t197 = *((unsigned int *)t194);
    t198 = (t197 >> 0);
    *((unsigned int *)t191) = t198;
    t199 = *((unsigned int *)t196);
    t200 = (t199 >> 0);
    *((unsigned int *)t195) = t200;
    t201 = *((unsigned int *)t191);
    *((unsigned int *)t191) = (t201 & 3U);
    t202 = *((unsigned int *)t195);
    *((unsigned int *)t195) = (t202 & 3U);
    t203 = ((char*)((ng9)));
    memset(t204, 0, 8);
    xsi_vlog_unsigned_add(t204, 32, t191, 32, t203, 32);
    t205 = (t0 + 28992);
    t209 = (t0 + 28992);
    t210 = (t209 + 72U);
    t211 = *((char **)t210);
    t212 = ((char*)((ng9)));
    t213 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t206, t207, t208, ((int*)(t211)), 2, t212, 32, 1, t213, 32, 1);
    t214 = (t206 + 4);
    t215 = *((unsigned int *)t214);
    t116 = (!(t215));
    t216 = (t207 + 4);
    t217 = *((unsigned int *)t216);
    t218 = (!(t217));
    t219 = (t116 && t218);
    t220 = (t208 + 4);
    t221 = *((unsigned int *)t220);
    t222 = (!(t221));
    t223 = (t219 && t222);
    if (t223 == 1)
        goto LAB426;

LAB427:    goto LAB422;

LAB414:    xsi_set_current_line(1054, ng7);
    t3 = (t0 + 28992);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t7 = (t15 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t13 & 7U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 7U);
    t14 = ((char*)((ng9)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t15, 32, t14, 32);
    t16 = (t0 + 28992);
    t22 = (t0 + 28992);
    t23 = (t22 + 72U);
    t28 = *((char **)t23);
    t29 = ((char*)((ng82)));
    t30 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t39, t73, t88, ((int*)(t28)), 2, t29, 32, 1, t30, 32, 1);
    t32 = (t39 + 4);
    t18 = *((unsigned int *)t32);
    t62 = (!(t18));
    t38 = (t73 + 4);
    t19 = *((unsigned int *)t38);
    t111 = (!(t19));
    t112 = (t62 && t111);
    t43 = (t88 + 4);
    t20 = *((unsigned int *)t43);
    t113 = (!(t20));
    t114 = (t112 && t113);
    if (t114 == 1)
        goto LAB428;

LAB429:    goto LAB422;

LAB416:    xsi_set_current_line(1055, ng7);
    t3 = (t0 + 28992);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t7 = (t15 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t13 & 15U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 15U);
    t14 = ((char*)((ng9)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t15, 32, t14, 32);
    t16 = (t0 + 28992);
    t22 = (t0 + 28992);
    t23 = (t22 + 72U);
    t28 = *((char **)t23);
    t29 = ((char*)((ng84)));
    t30 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t39, t73, t88, ((int*)(t28)), 2, t29, 32, 1, t30, 32, 1);
    t32 = (t39 + 4);
    t18 = *((unsigned int *)t32);
    t62 = (!(t18));
    t38 = (t73 + 4);
    t19 = *((unsigned int *)t38);
    t111 = (!(t19));
    t112 = (t62 && t111);
    t43 = (t88 + 4);
    t20 = *((unsigned int *)t43);
    t113 = (!(t20));
    t114 = (t112 && t113);
    if (t114 == 1)
        goto LAB430;

LAB431:    goto LAB422;

LAB418:    xsi_set_current_line(1056, ng7);
    t3 = (t0 + 28992);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t7 = (t15 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t13 & 31U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 31U);
    t14 = ((char*)((ng9)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t15, 32, t14, 32);
    t16 = (t0 + 28992);
    t22 = (t0 + 28992);
    t23 = (t22 + 72U);
    t28 = *((char **)t23);
    t29 = ((char*)((ng160)));
    t30 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t39, t73, t88, ((int*)(t28)), 2, t29, 32, 1, t30, 32, 1);
    t32 = (t39 + 4);
    t18 = *((unsigned int *)t32);
    t62 = (!(t18));
    t38 = (t73 + 4);
    t19 = *((unsigned int *)t38);
    t111 = (!(t19));
    t112 = (t62 && t111);
    t43 = (t88 + 4);
    t20 = *((unsigned int *)t43);
    t113 = (!(t20));
    t114 = (t112 && t113);
    if (t114 == 1)
        goto LAB432;

LAB433:    goto LAB422;

LAB420:    xsi_set_current_line(1057, ng7);
    t3 = (t0 + 28992);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    t7 = (t15 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t13 & 127U);
    t17 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t17 & 127U);
    t14 = ((char*)((ng9)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t15, 32, t14, 32);
    t16 = (t0 + 28992);
    t22 = (t0 + 28992);
    t23 = (t22 + 72U);
    t28 = *((char **)t23);
    t29 = ((char*)((ng154)));
    t30 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t39, t73, t88, ((int*)(t28)), 2, t29, 32, 1, t30, 32, 1);
    t32 = (t39 + 4);
    t18 = *((unsigned int *)t32);
    t62 = (!(t18));
    t38 = (t73 + 4);
    t19 = *((unsigned int *)t38);
    t111 = (!(t19));
    t112 = (t62 && t111);
    t43 = (t88 + 4);
    t20 = *((unsigned int *)t43);
    t113 = (!(t20));
    t114 = (t112 && t113);
    if (t114 == 1)
        goto LAB434;

LAB435:    goto LAB422;

LAB423:    t176 = *((unsigned int *)t164);
    t177 = *((unsigned int *)t170);
    *((unsigned int *)t164) = (t176 | t177);
    t178 = (t158 + 4);
    t179 = (t159 + 4);
    t180 = *((unsigned int *)t178);
    t181 = (~(t180));
    t182 = *((unsigned int *)t158);
    t113 = (t182 & t181);
    t183 = *((unsigned int *)t179);
    t184 = (~(t183));
    t185 = *((unsigned int *)t159);
    t114 = (t185 & t184);
    t186 = (~(t113));
    t187 = (~(t114));
    t188 = *((unsigned int *)t170);
    *((unsigned int *)t170) = (t188 & t186);
    t189 = *((unsigned int *)t170);
    *((unsigned int *)t170) = (t189 & t187);
    goto LAB425;

LAB426:    t224 = *((unsigned int *)t208);
    t225 = (t224 + 0);
    t226 = *((unsigned int *)t206);
    t227 = *((unsigned int *)t207);
    t228 = (t226 - t227);
    t229 = (t228 + 1);
    xsi_vlogvar_assign_value(t205, t204, t225, *((unsigned int *)t207), t229);
    goto LAB427;

LAB428:    t21 = *((unsigned int *)t88);
    t115 = (t21 + 0);
    t24 = *((unsigned int *)t39);
    t25 = *((unsigned int *)t73);
    t116 = (t24 - t25);
    t218 = (t116 + 1);
    xsi_vlogvar_assign_value(t16, t31, t115, *((unsigned int *)t73), t218);
    goto LAB429;

LAB430:    t21 = *((unsigned int *)t88);
    t115 = (t21 + 0);
    t24 = *((unsigned int *)t39);
    t25 = *((unsigned int *)t73);
    t116 = (t24 - t25);
    t218 = (t116 + 1);
    xsi_vlogvar_assign_value(t16, t31, t115, *((unsigned int *)t73), t218);
    goto LAB431;

LAB432:    t21 = *((unsigned int *)t88);
    t115 = (t21 + 0);
    t24 = *((unsigned int *)t39);
    t25 = *((unsigned int *)t73);
    t116 = (t24 - t25);
    t218 = (t116 + 1);
    xsi_vlogvar_assign_value(t16, t31, t115, *((unsigned int *)t73), t218);
    goto LAB433;

LAB434:    t21 = *((unsigned int *)t88);
    t115 = (t21 + 0);
    t24 = *((unsigned int *)t39);
    t25 = *((unsigned int *)t73);
    t116 = (t24 - t25);
    t218 = (t116 + 1);
    xsi_vlogvar_assign_value(t16, t31, t115, *((unsigned int *)t73), t218);
    goto LAB435;

LAB439:    t22 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB440;

LAB441:    xsi_set_current_line(1061, ng7);

LAB444:    xsi_set_current_line(1062, ng7);
    t28 = (t0 + 33312);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t32 = (t0 + 29952);
    xsi_vlogvar_assign_value(t32, t30, 0, 0, 1);
    xsi_set_current_line(1064, ng7);
    t2 = (t0 + 33632);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t15, 0, 8);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB448;

LAB446:    if (*((unsigned int *)t6) == 0)
        goto LAB445;

LAB447:    t7 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t7) = 1;

LAB448:    memset(t31, 0, 8);
    t8 = (t15 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (~(t17));
    t19 = *((unsigned int *)t15);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB449;

LAB450:    if (*((unsigned int *)t8) != 0)
        goto LAB451;

LAB452:    t16 = (t31 + 4);
    t24 = *((unsigned int *)t31);
    t25 = *((unsigned int *)t16);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB453;

LAB454:    memcpy(t88, t31, 8);

LAB455:    t67 = (t88 + 4);
    t91 = *((unsigned int *)t67);
    t92 = (~(t91));
    t93 = *((unsigned int *)t88);
    t94 = (t93 & t92);
    t95 = (t94 != 0);
    if (t95 > 0)
        goto LAB467;

LAB468:    xsi_set_current_line(1067, ng7);

LAB475:    xsi_set_current_line(1068, ng7);
    t2 = ((char*)((ng84)));
    t3 = (t0 + 29472);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 33152);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    memset(t15, 0, 8);
    t16 = (t14 + 4);
    t9 = *((unsigned int *)t16);
    t10 = (~(t9));
    t11 = *((unsigned int *)t14);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB479;

LAB477:    if (*((unsigned int *)t16) == 0)
        goto LAB476;

LAB478:    t22 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t22) = 1;

LAB479:    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t15);
    t19 = (t17 | t18);
    *((unsigned int *)t31) = t19;
    t23 = (t6 + 4);
    t28 = (t15 + 4);
    t29 = (t31 + 4);
    t20 = *((unsigned int *)t23);
    t21 = *((unsigned int *)t28);
    t24 = (t20 | t21);
    *((unsigned int *)t29) = t24;
    t25 = *((unsigned int *)t29);
    t26 = (t25 != 0);
    if (t26 == 1)
        goto LAB480;

LAB481:
LAB482:    memset(t39, 0, 8);
    xsi_vlog_unsigned_add(t39, 32, t2, 32, t31, 32);
    t38 = (t0 + 30752);
    xsi_vlogvar_assign_value(t38, t39, 0, 0, 32);

LAB469:    goto LAB443;

LAB445:    *((unsigned int *)t15) = 1;
    goto LAB448;

LAB449:    *((unsigned int *)t31) = 1;
    goto LAB452;

LAB451:    t14 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB452;

LAB453:    t22 = ((char*)((ng1)));
    t23 = ((char*)((ng17)));
    memset(t39, 0, 8);
    t28 = (t22 + 4);
    t29 = (t23 + 4);
    t27 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t23);
    t34 = (t27 ^ t33);
    t35 = *((unsigned int *)t28);
    t36 = *((unsigned int *)t29);
    t37 = (t35 ^ t36);
    t40 = (t34 | t37);
    t41 = *((unsigned int *)t28);
    t42 = *((unsigned int *)t29);
    t46 = (t41 | t42);
    t47 = (~(t46));
    t48 = (t40 & t47);
    if (t48 != 0)
        goto LAB459;

LAB456:    if (t46 != 0)
        goto LAB458;

LAB457:    *((unsigned int *)t39) = 1;

LAB459:    memset(t73, 0, 8);
    t32 = (t39 + 4);
    t49 = *((unsigned int *)t32);
    t50 = (~(t49));
    t51 = *((unsigned int *)t39);
    t52 = (t51 & t50);
    t55 = (t52 & 1U);
    if (t55 != 0)
        goto LAB460;

LAB461:    if (*((unsigned int *)t32) != 0)
        goto LAB462;

LAB463:    t56 = *((unsigned int *)t31);
    t57 = *((unsigned int *)t73);
    t59 = (t56 & t57);
    *((unsigned int *)t88) = t59;
    t43 = (t31 + 4);
    t44 = (t73 + 4);
    t45 = (t88 + 4);
    t60 = *((unsigned int *)t43);
    t61 = *((unsigned int *)t44);
    t63 = (t60 | t61);
    *((unsigned int *)t45) = t63;
    t64 = *((unsigned int *)t45);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB464;

LAB465:
LAB466:    goto LAB455;

LAB458:    t30 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB459;

LAB460:    *((unsigned int *)t73) = 1;
    goto LAB463;

LAB462:    t38 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB463;

LAB464:    t66 = *((unsigned int *)t88);
    t68 = *((unsigned int *)t45);
    *((unsigned int *)t88) = (t66 | t68);
    t53 = (t31 + 4);
    t54 = (t73 + 4);
    t69 = *((unsigned int *)t31);
    t70 = (~(t69));
    t71 = *((unsigned int *)t53);
    t72 = (~(t71));
    t76 = *((unsigned int *)t73);
    t77 = (~(t76));
    t78 = *((unsigned int *)t54);
    t79 = (~(t78));
    t58 = (t70 & t72);
    t62 = (t77 & t79);
    t80 = (~(t58));
    t83 = (~(t62));
    t84 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t84 & t80);
    t85 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t85 & t83);
    t86 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t86 & t80);
    t87 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t87 & t83);
    goto LAB466;

LAB467:    xsi_set_current_line(1064, ng7);

LAB470:    xsi_set_current_line(1065, ng7);
    t74 = ((char*)((ng9)));
    t75 = (t0 + 30912);
    xsi_vlogvar_wait_assign_value(t75, t74, 0, 0, 1, 0LL);
    xsi_set_current_line(1066, ng7);
    t2 = ((char*)((ng82)));
    t3 = (t0 + 33472);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_multiply(t15, 32, t2, 32, t6, 4);
    t7 = ((char*)((ng84)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t15, 32, t7, 32);
    t8 = (t0 + 29472);
    t14 = (t8 + 56U);
    t16 = *((char **)t14);
    memset(t39, 0, 8);
    t22 = (t16 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (~(t9));
    t11 = *((unsigned int *)t16);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB474;

LAB472:    if (*((unsigned int *)t22) == 0)
        goto LAB471;

LAB473:    t23 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t23) = 1;

LAB474:    memset(t73, 0, 8);
    xsi_vlog_unsigned_add(t73, 32, t31, 32, t39, 32);
    t28 = (t0 + 29632);
    xsi_vlogvar_assign_value(t28, t73, 0, 0, 4);
    goto LAB469;

LAB471:    *((unsigned int *)t39) = 1;
    goto LAB474;

LAB476:    *((unsigned int *)t15) = 1;
    goto LAB479;

LAB480:    t27 = *((unsigned int *)t31);
    t33 = *((unsigned int *)t29);
    *((unsigned int *)t31) = (t27 | t33);
    t30 = (t6 + 4);
    t32 = (t15 + 4);
    t34 = *((unsigned int *)t30);
    t35 = (~(t34));
    t36 = *((unsigned int *)t6);
    t58 = (t36 & t35);
    t37 = *((unsigned int *)t32);
    t40 = (~(t37));
    t41 = *((unsigned int *)t15);
    t62 = (t41 & t40);
    t42 = (~(t58));
    t46 = (~(t62));
    t47 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t47 & t42);
    t48 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t48 & t46);
    goto LAB482;

LAB483:    t21 = *((unsigned int *)t88);
    t114 = (t21 + 0);
    t24 = *((unsigned int *)t39);
    t25 = *((unsigned int *)t73);
    t115 = (t24 - t25);
    t116 = (t115 + 1);
    xsi_vlogvar_assign_value(t14, t31, t114, *((unsigned int *)t73), t116);
    goto LAB484;

LAB485:    *((unsigned int *)t15) = 1;
    goto LAB488;

LAB491:    t29 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB492;

LAB493:    xsi_set_current_line(1076, ng7);

LAB496:    xsi_set_current_line(1077, ng7);
    t32 = (t0 + 33312);
    t38 = (t32 + 56U);
    t43 = *((char **)t38);
    memset(t73, 0, 8);
    t44 = (t43 + 4);
    t46 = *((unsigned int *)t44);
    t47 = (~(t46));
    t48 = *((unsigned int *)t43);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB500;

LAB498:    if (*((unsigned int *)t44) == 0)
        goto LAB497;

LAB499:    t45 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t45) = 1;

LAB500:    t53 = (t0 + 29952);
    xsi_vlogvar_assign_value(t53, t73, 0, 0, 1);
    goto LAB495;

LAB497:    *((unsigned int *)t73) = 1;
    goto LAB500;

LAB501:    *((unsigned int *)t15) = 1;
    goto LAB504;

LAB503:    t7 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB504;

LAB505:    t14 = (t0 + 29472);
    t16 = (t14 + 56U);
    t22 = *((char **)t16);
    memset(t31, 0, 8);
    t23 = (t22 + 4);
    t20 = *((unsigned int *)t23);
    t21 = (~(t20));
    t24 = *((unsigned int *)t22);
    t25 = (t24 & t21);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB511;

LAB509:    if (*((unsigned int *)t23) == 0)
        goto LAB508;

LAB510:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;

LAB511:    memset(t39, 0, 8);
    t29 = (t31 + 4);
    t27 = *((unsigned int *)t29);
    t33 = (~(t27));
    t34 = *((unsigned int *)t31);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB512;

LAB513:    if (*((unsigned int *)t29) != 0)
        goto LAB514;

LAB515:    t37 = *((unsigned int *)t15);
    t40 = *((unsigned int *)t39);
    t41 = (t37 & t40);
    *((unsigned int *)t73) = t41;
    t32 = (t15 + 4);
    t38 = (t39 + 4);
    t43 = (t73 + 4);
    t42 = *((unsigned int *)t32);
    t46 = *((unsigned int *)t38);
    t47 = (t42 | t46);
    *((unsigned int *)t43) = t47;
    t48 = *((unsigned int *)t43);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB516;

LAB517:
LAB518:    goto LAB507;

LAB508:    *((unsigned int *)t31) = 1;
    goto LAB511;

LAB512:    *((unsigned int *)t39) = 1;
    goto LAB515;

LAB514:    t30 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB515;

LAB516:    t50 = *((unsigned int *)t73);
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t73) = (t50 | t51);
    t44 = (t15 + 4);
    t45 = (t39 + 4);
    t52 = *((unsigned int *)t15);
    t55 = (~(t52));
    t56 = *((unsigned int *)t44);
    t57 = (~(t56));
    t59 = *((unsigned int *)t39);
    t60 = (~(t59));
    t61 = *((unsigned int *)t45);
    t63 = (~(t61));
    t58 = (t55 & t57);
    t62 = (t60 & t63);
    t64 = (~(t58));
    t65 = (~(t62));
    t66 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t66 & t64);
    t68 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t68 & t65);
    t69 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t69 & t64);
    t70 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t70 & t65);
    goto LAB518;

LAB519:    *((unsigned int *)t88) = 1;
    goto LAB522;

LAB521:    t54 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB522;

LAB523:    t74 = (t0 + 32352);
    t75 = (t74 + 56U);
    t81 = *((char **)t75);
    memset(t110, 0, 8);
    t82 = (t81 + 4);
    t84 = *((unsigned int *)t82);
    t85 = (~(t84));
    t86 = *((unsigned int *)t81);
    t87 = (t86 & t85);
    t91 = (t87 & 1U);
    if (t91 != 0)
        goto LAB526;

LAB527:    if (*((unsigned int *)t82) != 0)
        goto LAB528;

LAB529:    t92 = *((unsigned int *)t88);
    t93 = *((unsigned int *)t110);
    t94 = (t92 & t93);
    *((unsigned int *)t117) = t94;
    t90 = (t88 + 4);
    t96 = (t110 + 4);
    t97 = (t117 + 4);
    t95 = *((unsigned int *)t90);
    t98 = *((unsigned int *)t96);
    t99 = (t95 | t98);
    *((unsigned int *)t97) = t99;
    t100 = *((unsigned int *)t97);
    t101 = (t100 != 0);
    if (t101 == 1)
        goto LAB530;

LAB531:
LAB532:    goto LAB525;

LAB526:    *((unsigned int *)t110) = 1;
    goto LAB529;

LAB528:    t89 = (t110 + 4);
    *((unsigned int *)t110) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB529;

LAB530:    t102 = *((unsigned int *)t117);
    t123 = *((unsigned int *)t97);
    *((unsigned int *)t117) = (t102 | t123);
    t103 = (t88 + 4);
    t104 = (t110 + 4);
    t127 = *((unsigned int *)t88);
    t128 = (~(t127));
    t129 = *((unsigned int *)t103);
    t130 = (~(t129));
    t131 = *((unsigned int *)t110);
    t132 = (~(t131));
    t133 = *((unsigned int *)t104);
    t136 = (~(t133));
    t111 = (t128 & t130);
    t112 = (t132 & t136);
    t137 = (~(t111));
    t138 = (~(t112));
    t139 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t139 & t137);
    t140 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t140 & t138);
    t141 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t141 & t137);
    t142 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t142 & t138);
    goto LAB532;

LAB533:    *((unsigned int *)t119) = 1;
    goto LAB536;

LAB535:    t120 = (t119 + 4);
    *((unsigned int *)t119) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB536;

LAB537:    t124 = (t0 + 28992);
    t125 = (t124 + 56U);
    t126 = *((char **)t125);
    memset(t122, 0, 8);
    t134 = (t122 + 4);
    t135 = (t126 + 4);
    t152 = *((unsigned int *)t126);
    t153 = (t152 >> 0);
    *((unsigned int *)t122) = t153;
    t154 = *((unsigned int *)t135);
    t155 = (t154 >> 0);
    *((unsigned int *)t134) = t155;
    t165 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t165 & 127U);
    t166 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t166 & 127U);
    t150 = ((char*)((ng162)));
    memset(t159, 0, 8);
    t156 = (t122 + 4);
    t157 = (t150 + 4);
    t167 = *((unsigned int *)t122);
    t171 = *((unsigned int *)t150);
    t172 = (t167 ^ t171);
    t173 = *((unsigned int *)t156);
    t174 = *((unsigned int *)t157);
    t175 = (t173 ^ t174);
    t176 = (t172 | t175);
    t177 = *((unsigned int *)t156);
    t180 = *((unsigned int *)t157);
    t181 = (t177 | t180);
    t182 = (~(t181));
    t183 = (t176 & t182);
    if (t183 != 0)
        goto LAB543;

LAB540:    if (t181 != 0)
        goto LAB542;

LAB541:    *((unsigned int *)t159) = 1;

LAB543:    memset(t191, 0, 8);
    t160 = (t159 + 4);
    t184 = *((unsigned int *)t160);
    t185 = (~(t184));
    t186 = *((unsigned int *)t159);
    t187 = (t186 & t185);
    t188 = (t187 & 1U);
    if (t188 != 0)
        goto LAB544;

LAB545:    if (*((unsigned int *)t160) != 0)
        goto LAB546;

LAB547:    t189 = *((unsigned int *)t119);
    t197 = *((unsigned int *)t191);
    t198 = (t189 & t197);
    *((unsigned int *)t204) = t198;
    t162 = (t119 + 4);
    t163 = (t191 + 4);
    t168 = (t204 + 4);
    t199 = *((unsigned int *)t162);
    t200 = *((unsigned int *)t163);
    t201 = (t199 | t200);
    *((unsigned int *)t168) = t201;
    t202 = *((unsigned int *)t168);
    t215 = (t202 != 0);
    if (t215 == 1)
        goto LAB548;

LAB549:
LAB550:    goto LAB539;

LAB542:    t158 = (t159 + 4);
    *((unsigned int *)t159) = 1;
    *((unsigned int *)t158) = 1;
    goto LAB543;

LAB544:    *((unsigned int *)t191) = 1;
    goto LAB547;

LAB546:    t161 = (t191 + 4);
    *((unsigned int *)t191) = 1;
    *((unsigned int *)t161) = 1;
    goto LAB547;

LAB548:    t217 = *((unsigned int *)t204);
    t221 = *((unsigned int *)t168);
    *((unsigned int *)t204) = (t217 | t221);
    t169 = (t119 + 4);
    t170 = (t191 + 4);
    t224 = *((unsigned int *)t119);
    t226 = (~(t224));
    t227 = *((unsigned int *)t169);
    t230 = (~(t227));
    t231 = *((unsigned int *)t191);
    t232 = (~(t231));
    t233 = *((unsigned int *)t170);
    t234 = (~(t233));
    t113 = (t226 & t230);
    t114 = (t232 & t234);
    t235 = (~(t113));
    t236 = (~(t114));
    t237 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t237 & t235);
    t238 = *((unsigned int *)t168);
    *((unsigned int *)t168) = (t238 & t236);
    t239 = *((unsigned int *)t204);
    *((unsigned int *)t204) = (t239 & t235);
    t240 = *((unsigned int *)t204);
    *((unsigned int *)t204) = (t240 & t236);
    goto LAB550;

LAB551:    xsi_set_current_line(1079, ng7);

LAB554:    xsi_set_current_line(1080, ng7);
    t179 = (t0 + 33312);
    t190 = (t179 + 56U);
    t192 = *((char **)t190);
    t193 = (t0 + 29952);
    xsi_vlogvar_assign_value(t193, t192, 0, 0, 1);
    goto LAB553;

LAB556:    t14 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB558;

LAB557:    *((unsigned int *)t15) = 1;
    goto LAB558;

LAB560:    xsi_set_current_line(1085, ng7);

LAB563:    xsi_set_current_line(1086, ng7);
    t22 = (t0 + 29632);
    t23 = (t22 + 56U);
    t28 = *((char **)t23);
    t29 = ((char*)((ng9)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_minus(t31, 32, t28, 4, t29, 32);
    t30 = (t0 + 29632);
    xsi_vlogvar_wait_assign_value(t30, t31, 0, 0, 4, 0LL);
    goto LAB562;

LAB565:    t14 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB567;

LAB566:    *((unsigned int *)t15) = 1;
    goto LAB567;

LAB569:    xsi_set_current_line(1089, ng7);

LAB572:    xsi_set_current_line(1090, ng7);
    t22 = (t0 + 30592);
    t23 = (t22 + 56U);
    t28 = *((char **)t23);
    t29 = ((char*)((ng9)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_minus(t31, 32, t28, 3, t29, 32);
    t30 = (t0 + 30592);
    xsi_vlogvar_wait_assign_value(t30, t31, 0, 0, 3, 0LL);
    goto LAB571;

LAB573:    xsi_set_current_line(1093, ng7);

LAB576:    xsi_set_current_line(1094, ng7);
    t7 = (t0 + 29952);
    t8 = (t7 + 56U);
    t14 = *((char **)t8);
    t16 = (t0 + 29792);
    xsi_vlogvar_wait_assign_value(t16, t14, 0, 0, 1, 11000LL);
    goto LAB575;

}

static void Always_1104_39(char *t0)
{
    char t9[8];
    char t26[8];
    char t34[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t3;
    double t4;
    char *t5;
    char *t6;
    double t7;
    unsigned int t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    double t16;
    char *t17;
    char *t18;
    char *t19;
    double t20;
    double t21;
    char *t22;
    char *t23;
    double t24;
    unsigned int t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    double t33;
    char *t35;
    char *t36;
    char *t37;
    double t38;
    char *t39;
    char *t40;
    double t41;
    double t42;
    double t43;
    double t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;

LAB0:    t1 = (t0 + 52544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1104, ng7);
    t2 = (t0 + 57144);
    *((int *)t2) = 1;
    t3 = (t0 + 52576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1104, ng7);

LAB5:    xsi_set_current_line(1105, ng7);
    t4 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 2040);
    t6 = *((char **)t5);
    t7 = *((double *)t6);
    t8 = (t4 > t7);
    *((unsigned int *)t9) = t8;
    t5 = (t9 + 4);
    *((unsigned int *)t5) = 0U;
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(1135, ng7);
    t4 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t7 = (t4 - 0.00010000000000000000);
    t2 = (t0 + 34912);
    xsi_vlogvar_assign_value_double(t2, t7, 0);
    goto LAB2;

LAB6:    xsi_set_current_line(1105, ng7);

LAB9:    xsi_set_current_line(1106, ng7);
    t16 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t17 = (t0 + 35392);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = *((double *)t19);
    t21 = (t16 - t20);
    t22 = (t0 + 2176);
    t23 = *((char **)t22);
    t24 = *((double *)t23);
    t25 = (t21 < t24);
    *((unsigned int *)t26) = t25;
    t22 = (t26 + 4);
    *((unsigned int *)t22) = 0U;
    t27 = (t26 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t26);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(1108, ng7);
    t2 = (t0 + 16592U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t11 = (~(t8));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t2) == 0)
        goto LAB13;

LAB15:    t5 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t5) = 1;

LAB16:    t6 = (t9 + 4);
    t15 = *((unsigned int *)t6);
    t25 = (~(t15));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t25);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB17;

LAB18:
LAB19:    goto LAB8;

LAB10:    xsi_set_current_line(1107, ng7);
    t33 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t34) = t33;
    t35 = (t0 + 35392);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = *((double *)t37);
    t39 = (t0 + 2176);
    t40 = *((char **)t39);
    t41 = *((double *)t40);
    t42 = (t38 + t41);
    t43 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t44 = (t42 - t43);
    *((double *)t45) = t44;
    xsi_vlogfile_write(1, 0, 0, ng163, 3, t0, (char)114, t34, 64, (char)114, t45, 64);
    goto LAB12;

LAB13:    *((unsigned int *)t9) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(1108, ng7);

LAB20:    xsi_set_current_line(1109, ng7);
    t4 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t10 = (t0 + 36032);
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t7 = *((double *)t18);
    t16 = (t4 - t7);
    t19 = (t0 + 2992);
    t22 = *((char **)t19);
    t20 = *((double *)t22);
    t31 = (t16 < t20);
    *((unsigned int *)t26) = t31;
    t19 = (t26 + 4);
    *((unsigned int *)t19) = 0U;
    t23 = (t26 + 4);
    t32 = *((unsigned int *)t23);
    t46 = (~(t32));
    t47 = *((unsigned int *)t26);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(1111, ng7);
    t2 = (t0 + 18352U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t11 = (~(t8));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(1114, ng7);

LAB31:    xsi_set_current_line(1115, ng7);
    t4 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 36512);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = *((double *)t5);
    t16 = (t4 - t7);
    t6 = (t0 + 2992);
    t10 = *((char **)t6);
    t20 = *((double *)t10);
    t8 = (t16 < t20);
    *((unsigned int *)t9) = t8;
    t6 = (t9 + 4);
    *((unsigned int *)t6) = 0U;
    t17 = (t9 + 4);
    t11 = *((unsigned int *)t17);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB32;

LAB33:
LAB34:    xsi_set_current_line(1117, ng7);
    t4 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 36992);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = *((double *)t5);
    t16 = (t4 - t7);
    t6 = (t0 + 2992);
    t10 = *((char **)t6);
    t20 = *((double *)t10);
    t8 = (t16 < t20);
    *((unsigned int *)t9) = t8;
    t6 = (t9 + 4);
    *((unsigned int *)t6) = 0U;
    t17 = (t9 + 4);
    t11 = *((unsigned int *)t17);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(1119, ng7);
    t4 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 37312);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = *((double *)t5);
    t16 = (t4 - t7);
    t6 = (t0 + 2992);
    t10 = *((char **)t6);
    t20 = *((double *)t10);
    t8 = (t16 < t20);
    *((unsigned int *)t9) = t8;
    t6 = (t9 + 4);
    *((unsigned int *)t6) = 0U;
    t17 = (t9 + 4);
    t11 = *((unsigned int *)t17);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB38;

LAB39:
LAB40:
LAB26:    xsi_set_current_line(1123, ng7);
    t2 = (t0 + 33632);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 33472);
    t10 = (t6 + 56U);
    t17 = *((char **)t10);
    memset(t9, 0, 8);
    t18 = (t9 + 4);
    t19 = (t17 + 4);
    t8 = *((unsigned int *)t17);
    t11 = (t8 >> 0);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t19);
    t13 = (t12 >> 0);
    *((unsigned int *)t18) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 7U);
    t15 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t15 & 7U);
    t22 = (t0 + 52352);
    t23 = (t0 + 13160);
    t27 = xsi_create_subprogram_invocation(t22, 0, t0, t23, 0, 0);
    t35 = (t0 + 39392);
    xsi_vlogvar_assign_value(t35, t5, 0, 0, 1);
    t36 = (t0 + 39552);
    xsi_vlogvar_assign_value(t36, t9, 0, 0, 3);

LAB41:    t37 = (t0 + 52448);
    t39 = *((char **)t37);
    t40 = (t39 + 80U);
    t50 = *((char **)t40);
    t51 = (t50 + 272U);
    t52 = *((char **)t51);
    t53 = (t52 + 0U);
    t54 = *((char **)t53);
    t55 = ((int  (*)(char *, char *))t54)(t0, t39);
    if (t55 != 0)
        goto LAB43;

LAB42:    t39 = (t0 + 52448);
    t56 = *((char **)t39);
    t39 = (t0 + 39232);
    t57 = (t39 + 56U);
    t58 = *((char **)t57);
    t4 = *((double *)t58);
    t59 = (t0 + 13160);
    t60 = (t0 + 52352);
    t61 = 0;
    xsi_delete_subprogram_invocation(t59, t56, t0, t60, t61);
    t62 = (t0 + 35232);
    xsi_vlogvar_assign_value_double(t62, t4, 0);
    xsi_set_current_line(1124, ng7);
    t2 = (t0 + 35232);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t4 = *((double *)t5);
    t8 = (t4 == 0.00000000000000000);
    *((unsigned int *)t9) = t8;
    t6 = (t9 + 4);
    *((unsigned int *)t6) = 0U;
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB44;

LAB45:
LAB46:    xsi_set_current_line(1126, ng7);
    t4 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 34912);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = *((double *)t5);
    t16 = (t4 - t7);
    t6 = (t0 + 35232);
    t10 = (t6 + 56U);
    t17 = *((char **)t10);
    t20 = *((double *)t17);
    t8 = (t16 < t20);
    *((unsigned int *)t9) = t8;
    t18 = (t9 + 4);
    *((unsigned int *)t18) = 0U;
    t19 = (t9 + 4);
    t11 = *((unsigned int *)t19);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB47;

LAB48:
LAB49:    xsi_set_current_line(1129, ng7);
    t4 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 34912);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = *((double *)t5);
    t16 = (t4 - t7);
    t6 = (t0 + 2040);
    t10 = *((char **)t6);
    t20 = *((double *)t10);
    t8 = (t16 < t20);
    *((unsigned int *)t9) = t8;
    t6 = (t9 + 4);
    *((unsigned int *)t6) = 0U;
    t17 = (t9 + 4);
    t11 = *((unsigned int *)t17);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB50;

LAB51:
LAB52:    xsi_set_current_line(1131, ng7);
    t4 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 35072);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = *((double *)t5);
    t16 = (t4 - t7);
    t6 = (t0 + 2584);
    t10 = *((char **)t6);
    t20 = *((double *)t10);
    t8 = (t16 < t20);
    *((unsigned int *)t9) = t8;
    t6 = (t9 + 4);
    *((unsigned int *)t6) = 0U;
    t17 = (t9 + 4);
    t11 = *((unsigned int *)t17);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB53;

LAB54:
LAB55:    goto LAB19;

LAB21:    xsi_set_current_line(1110, ng7);
    t21 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t34) = t21;
    t27 = (t0 + 36032);
    t35 = (t27 + 56U);
    t36 = *((char **)t35);
    t24 = *((double *)t36);
    t37 = (t0 + 2992);
    t39 = *((char **)t37);
    t33 = *((double *)t39);
    t38 = (t24 + t33);
    t41 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t42 = (t38 - t41);
    *((double *)t45) = t42;
    xsi_vlogfile_write(1, 0, 0, ng164, 3, t0, (char)114, t34, 64, (char)114, t45, 64);
    goto LAB23;

LAB24:    xsi_set_current_line(1111, ng7);

LAB27:    xsi_set_current_line(1112, ng7);
    t4 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 36672);
    t6 = (t5 + 56U);
    t10 = *((char **)t6);
    t7 = *((double *)t10);
    t16 = (t4 - t7);
    t17 = (t0 + 2992);
    t18 = *((char **)t17);
    t20 = *((double *)t18);
    t15 = (t16 < t20);
    *((unsigned int *)t9) = t15;
    t17 = (t9 + 4);
    *((unsigned int *)t17) = 0U;
    t19 = (t9 + 4);
    t25 = *((unsigned int *)t19);
    t28 = (~(t25));
    t29 = *((unsigned int *)t9);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB28;

LAB29:
LAB30:    goto LAB26;

LAB28:    xsi_set_current_line(1113, ng7);
    t21 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t26) = t21;
    t22 = (t0 + 36672);
    t23 = (t22 + 56U);
    t27 = *((char **)t23);
    t24 = *((double *)t27);
    t35 = (t0 + 2992);
    t36 = *((char **)t35);
    t33 = *((double *)t36);
    t38 = (t24 + t33);
    t41 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t42 = (t38 - t41);
    *((double *)t34) = t42;
    xsi_vlogfile_write(1, 0, 0, ng165, 3, t0, (char)114, t26, 64, (char)114, t34, 64);
    goto LAB30;

LAB32:    xsi_set_current_line(1116, ng7);
    t21 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t26) = t21;
    t18 = (t0 + 36512);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    t24 = *((double *)t22);
    t23 = (t0 + 2992);
    t27 = *((char **)t23);
    t33 = *((double *)t27);
    t38 = (t24 + t33);
    t41 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t42 = (t38 - t41);
    *((double *)t34) = t42;
    xsi_vlogfile_write(1, 0, 0, ng166, 3, t0, (char)114, t26, 64, (char)114, t34, 64);
    goto LAB34;

LAB35:    xsi_set_current_line(1118, ng7);
    t21 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t26) = t21;
    t18 = (t0 + 36992);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    t24 = *((double *)t22);
    t23 = (t0 + 2992);
    t27 = *((char **)t23);
    t33 = *((double *)t27);
    t38 = (t24 + t33);
    t41 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t42 = (t38 - t41);
    *((double *)t34) = t42;
    xsi_vlogfile_write(1, 0, 0, ng167, 3, t0, (char)114, t26, 64, (char)114, t34, 64);
    goto LAB37;

LAB38:    xsi_set_current_line(1120, ng7);
    t21 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t26) = t21;
    t18 = (t0 + 37312);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    t24 = *((double *)t22);
    t23 = (t0 + 2992);
    t27 = *((char **)t23);
    t33 = *((double *)t27);
    t38 = (t24 + t33);
    t41 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t42 = (t38 - t41);
    *((double *)t34) = t42;
    xsi_vlogfile_write(1, 0, 0, ng168, 3, t0, (char)114, t26, 64, (char)114, t34, 64);
    goto LAB40;

LAB43:    t37 = (t0 + 52544U);
    *((char **)t37) = &&LAB41;
    goto LAB1;

LAB44:    xsi_set_current_line(1125, ng7);
    t7 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t26) = t7;
    t17 = (t0 + 33472);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlogfile_write(1, 0, 0, ng169, 3, t0, (char)114, t26, 64, (char)118, t19, 4);
    goto LAB46;

LAB47:    xsi_set_current_line(1127, ng7);
    t21 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t26) = t21;
    t22 = (t0 + 35232);
    t23 = (t22 + 56U);
    t27 = *((char **)t23);
    t24 = *((double *)t27);
    *((double *)t34) = t24;
    t35 = (t0 + 33472);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t33 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t39 = (t0 + 34912);
    t40 = (t39 + 56U);
    t50 = *((char **)t40);
    t38 = *((double *)t50);
    t41 = (t33 - t38);
    *((double *)t45) = t41;
    xsi_vlogfile_write(1, 0, 0, ng170, 5, t0, (char)114, t26, 64, (char)114, t34, 64, (char)118, t37, 4, (char)114, t45, 64);
    goto LAB49;

LAB50:    xsi_set_current_line(1130, ng7);
    t21 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t26) = t21;
    t18 = (t0 + 34912);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    t24 = *((double *)t22);
    t23 = (t0 + 2040);
    t27 = *((char **)t23);
    t33 = *((double *)t27);
    t38 = (t24 + t33);
    t41 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t42 = (t38 - t41);
    *((double *)t34) = t42;
    xsi_vlogfile_write(1, 0, 0, ng171, 3, t0, (char)114, t26, 64, (char)114, t34, 64);
    goto LAB52;

LAB53:    xsi_set_current_line(1132, ng7);
    t21 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t26) = t21;
    t18 = (t0 + 35072);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    t24 = *((double *)t22);
    t23 = (t0 + 2584);
    t27 = *((char **)t23);
    t33 = *((double *)t27);
    t38 = (t24 + t33);
    t41 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t42 = (t38 - t41);
    *((double *)t34) = t42;
    xsi_vlogfile_write(1, 0, 0, ng172, 3, t0, (char)114, t26, 64, (char)114, t34, 64);
    goto LAB55;

}

static void Always_1138_40(char *t0)
{
    char t9[8];
    char t26[8];
    char t34[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t3;
    double t4;
    char *t5;
    char *t6;
    double t7;
    unsigned int t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    double t16;
    char *t17;
    char *t18;
    char *t19;
    double t20;
    double t21;
    char *t22;
    char *t23;
    double t24;
    unsigned int t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    double t33;
    char *t35;
    char *t36;
    char *t37;
    double t38;
    char *t39;
    char *t40;
    double t41;
    double t42;
    double t43;
    double t44;

LAB0:    t1 = (t0 + 52792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1138, ng7);
    t2 = (t0 + 57160);
    *((int *)t2) = 1;
    t3 = (t0 + 52824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1138, ng7);

LAB5:    xsi_set_current_line(1139, ng7);
    t4 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 2040);
    t6 = *((char **)t5);
    t7 = *((double *)t6);
    t8 = (t4 > t7);
    *((unsigned int *)t9) = t8;
    t5 = (t9 + 4);
    *((unsigned int *)t5) = 0U;
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(1143, ng7);
    t4 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t7 = (t4 - 0.00010000000000000000);
    t2 = (t0 + 35072);
    xsi_vlogvar_assign_value_double(t2, t7, 0);
    goto LAB2;

LAB6:    xsi_set_current_line(1139, ng7);

LAB9:    xsi_set_current_line(1140, ng7);
    t16 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t17 = (t0 + 34912);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = *((double *)t19);
    t21 = (t16 - t20);
    t22 = (t0 + 2584);
    t23 = *((char **)t22);
    t24 = *((double *)t23);
    t25 = (t21 < t24);
    *((unsigned int *)t26) = t25;
    t22 = (t26 + 4);
    *((unsigned int *)t22) = 0U;
    t27 = (t26 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t26);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB8;

LAB10:    xsi_set_current_line(1141, ng7);
    t33 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t34) = t33;
    t35 = (t0 + 34912);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = *((double *)t37);
    t39 = (t0 + 2584);
    t40 = *((char **)t39);
    t41 = *((double *)t40);
    t42 = (t38 + t41);
    t43 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t44 = (t42 - t43);
    *((double *)t45) = t44;
    xsi_vlogfile_write(1, 0, 0, ng172, 3, t0, (char)114, t34, 64, (char)114, t45, 64);
    goto LAB12;

}

static void Always_1146_41(char *t0)
{
    char t9[8];
    char t26[8];
    char t34[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t3;
    double t4;
    char *t5;
    char *t6;
    double t7;
    unsigned int t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    double t16;
    char *t17;
    char *t18;
    char *t19;
    double t20;
    double t21;
    char *t22;
    char *t23;
    double t24;
    unsigned int t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    double t33;
    char *t35;
    char *t36;
    char *t37;
    double t38;
    char *t39;
    char *t40;
    double t41;
    double t42;
    double t43;
    double t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;

LAB0:    t1 = (t0 + 53040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1146, ng7);
    t2 = (t0 + 57176);
    *((int *)t2) = 1;
    t3 = (t0 + 53072);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1146, ng7);

LAB5:    xsi_set_current_line(1147, ng7);
    t4 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 2040);
    t6 = *((char **)t5);
    t7 = *((double *)t6);
    t8 = (t4 > t7);
    *((unsigned int *)t9) = t8;
    t5 = (t9 + 4);
    *((unsigned int *)t5) = 0U;
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(1151, ng7);
    t2 = (t0 + 16592U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t11 = (~(t8));
    t12 = *((unsigned int *)t3);
    t13 = (t12 & t11);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t2) == 0)
        goto LAB13;

LAB15:    t5 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t5) = 1;

LAB16:    t6 = (t9 + 4);
    t15 = *((unsigned int *)t6);
    t25 = (~(t15));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t25);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB17;

LAB18:
LAB19:    xsi_set_current_line(1164, ng7);
    t4 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 35392);
    xsi_vlogvar_assign_value_double(t2, t4, 0);
    xsi_set_current_line(1165, ng7);
    t4 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t9) = t4;
    t2 = (t0 + 35552);
    xsi_vlogvar_wait_assign_value(t2, t9, 0, 0, 1, 0LL);
    xsi_set_current_line(1166, ng7);
    t4 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t9) = t4;
    t2 = (t0 + 35712);
    xsi_vlogvar_wait_assign_value(t2, t9, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    xsi_set_current_line(1147, ng7);

LAB9:    xsi_set_current_line(1148, ng7);
    t16 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t17 = (t0 + 34912);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = *((double *)t19);
    t21 = (t16 - t20);
    t22 = (t0 + 2448);
    t23 = *((char **)t22);
    t24 = *((double *)t23);
    t25 = (t21 < t24);
    *((unsigned int *)t26) = t25;
    t22 = (t26 + 4);
    *((unsigned int *)t22) = 0U;
    t27 = (t26 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t26);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB8;

LAB10:    xsi_set_current_line(1149, ng7);
    t33 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t34) = t33;
    t35 = (t0 + 34912);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = *((double *)t37);
    t39 = (t0 + 2448);
    t40 = *((char **)t39);
    t41 = *((double *)t40);
    t42 = (t38 + t41);
    t43 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t44 = (t42 - t43);
    *((double *)t45) = t44;
    xsi_vlogfile_write(1, 0, 0, ng173, 3, t0, (char)114, t34, 64, (char)114, t45, 64);
    goto LAB12;

LAB13:    *((unsigned int *)t9) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(1151, ng7);

LAB20:    xsi_set_current_line(1152, ng7);
    t10 = (t0 + 28672);
    t17 = (t10 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 4);
    t31 = *((unsigned int *)t19);
    t32 = (~(t31));
    t46 = *((unsigned int *)t18);
    t47 = (t46 & t32);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(1155, ng7);

LAB28:    xsi_set_current_line(1156, ng7);
    t4 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 35392);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = *((double *)t5);
    t16 = (t4 - t7);
    t6 = (t0 + 4080);
    t10 = *((char **)t6);
    t20 = *((double *)t10);
    t8 = (t16 < t20);
    *((unsigned int *)t9) = t8;
    t6 = (t9 + 4);
    *((unsigned int *)t6) = 0U;
    t17 = (t9 + 4);
    t11 = *((unsigned int *)t17);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(1158, ng7);
    t4 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 38592);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = *((double *)t5);
    t16 = (t4 - t7);
    t6 = (t0 + 5304);
    t10 = *((char **)t6);
    t20 = *((double *)t10);
    t8 = (t16 < t20);
    *((unsigned int *)t9) = t8;
    t6 = (t9 + 4);
    *((unsigned int *)t6) = 0U;
    t17 = (t9 + 4);
    t11 = *((unsigned int *)t17);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB32;

LAB33:
LAB34:
LAB23:    xsi_set_current_line(1161, ng7);
    t4 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 38752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = *((double *)t5);
    t16 = (t4 - t7);
    t6 = (t0 + 4896);
    t10 = *((char **)t6);
    t20 = *((double *)t10);
    t8 = (t16 < t20);
    *((unsigned int *)t9) = t8;
    t6 = (t9 + 4);
    *((unsigned int *)t6) = 0U;
    t17 = (t9 + 4);
    t11 = *((unsigned int *)t17);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB35;

LAB36:
LAB37:    goto LAB19;

LAB21:    xsi_set_current_line(1152, ng7);

LAB24:    xsi_set_current_line(1153, ng7);
    t4 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t22 = (t0 + 35392);
    t23 = (t22 + 56U);
    t27 = *((char **)t23);
    t7 = *((double *)t27);
    t16 = (t4 - t7);
    t35 = (t0 + 1904);
    t36 = *((char **)t35);
    t20 = *((double *)t36);
    t49 = (t16 < t20);
    *((unsigned int *)t26) = t49;
    t35 = (t26 + 4);
    *((unsigned int *)t35) = 0U;
    t37 = (t26 + 4);
    t50 = *((unsigned int *)t37);
    t51 = (~(t50));
    t52 = *((unsigned int *)t26);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB25;

LAB26:
LAB27:    goto LAB23;

LAB25:    xsi_set_current_line(1154, ng7);
    t21 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t34) = t21;
    t39 = (t0 + 35392);
    t40 = (t39 + 56U);
    t55 = *((char **)t40);
    t24 = *((double *)t55);
    t56 = (t0 + 1904);
    t57 = *((char **)t56);
    t33 = *((double *)t57);
    t38 = (t24 + t33);
    t41 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t42 = (t38 - t41);
    *((double *)t45) = t42;
    xsi_vlogfile_write(1, 0, 0, ng174, 3, t0, (char)114, t34, 64, (char)114, t45, 64);
    goto LAB27;

LAB29:    xsi_set_current_line(1157, ng7);
    t21 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t26) = t21;
    t18 = (t0 + 35392);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    t24 = *((double *)t22);
    t23 = (t0 + 4080);
    t27 = *((char **)t23);
    t33 = *((double *)t27);
    t38 = (t24 + t33);
    t41 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t42 = (t38 - t41);
    *((double *)t34) = t42;
    xsi_vlogfile_write(1, 0, 0, ng175, 3, t0, (char)114, t26, 64, (char)114, t34, 64);
    goto LAB31;

LAB32:    xsi_set_current_line(1159, ng7);
    t21 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t26) = t21;
    t18 = (t0 + 38592);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    t24 = *((double *)t22);
    t23 = (t0 + 5304);
    t27 = *((char **)t23);
    t33 = *((double *)t27);
    t38 = (t24 + t33);
    t41 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t42 = (t38 - t41);
    *((double *)t34) = t42;
    xsi_vlogfile_write(1, 0, 0, ng176, 3, t0, (char)114, t26, 64, (char)114, t34, 64);
    goto LAB34;

LAB35:    xsi_set_current_line(1162, ng7);
    t21 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t26) = t21;
    t18 = (t0 + 38752);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    t24 = *((double *)t22);
    t23 = (t0 + 4896);
    t27 = *((char **)t23);
    t33 = *((double *)t27);
    t38 = (t24 + t33);
    t41 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t42 = (t38 - t41);
    *((double *)t34) = t42;
    xsi_vlogfile_write(1, 0, 0, ng177, 3, t0, (char)114, t26, 64, (char)114, t34, 64);
    goto LAB37;

}

static void Always_1169_42(char *t0)
{
    char t4[8];
    char t29[8];
    char t37[8];
    char t48[8];
    char t79[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    double t19;
    char *t20;
    char *t21;
    char *t22;
    double t23;
    double t24;
    char *t25;
    char *t26;
    double t27;
    unsigned int t28;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    double t36;
    char *t38;
    char *t39;
    char *t40;
    double t41;
    char *t42;
    char *t43;
    double t44;
    double t45;
    double t46;
    double t47;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;

LAB0:    t1 = (t0 + 53288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1169, ng7);
    t2 = (t0 + 57192);
    *((int *)t2) = 1;
    t3 = (t0 + 53320);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1169, ng7);

LAB5:    xsi_set_current_line(1170, ng7);
    t5 = (t0 + 16592U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(1195, ng7);
    t2 = (t0 + 18352U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(1197, ng7);

LAB66:    xsi_set_current_line(1198, ng7);
    t19 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t4) = t19;
    t2 = (t0 + 36352);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 1, 0LL);

LAB64:    xsi_set_current_line(1200, ng7);
    t19 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 36032);
    xsi_vlogvar_assign_value_double(t2, t19, 0);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(1170, ng7);

LAB13:    xsi_set_current_line(1171, ng7);
    t19 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t20 = (t0 + 34912);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = *((double *)t22);
    t24 = (t19 - t23);
    t25 = (t0 + 2448);
    t26 = *((char **)t25);
    t27 = *((double *)t26);
    t28 = (t24 < t27);
    *((unsigned int *)t29) = t28;
    t25 = (t29 + 4);
    *((unsigned int *)t25) = 0U;
    t30 = (t29 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t29);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB14;

LAB15:
LAB16:    xsi_set_current_line(1173, ng7);
    t2 = (t0 + 18352U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(1190, ng7);

LAB58:    xsi_set_current_line(1191, ng7);
    t19 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 36032);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t23 = *((double *)t5);
    t24 = (t19 - t23);
    t6 = (t0 + 5032);
    t12 = *((char **)t6);
    t27 = *((double *)t12);
    t7 = (t24 < t27);
    *((unsigned int *)t4) = t7;
    t6 = (t4 + 4);
    *((unsigned int *)t6) = 0U;
    t13 = (t4 + 4);
    t8 = *((unsigned int *)t13);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t14 = (t11 != 0);
    if (t14 > 0)
        goto LAB59;

LAB60:
LAB61:
LAB19:    goto LAB12;

LAB14:    xsi_set_current_line(1172, ng7);
    t36 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t37) = t36;
    t38 = (t0 + 34912);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = *((double *)t40);
    t42 = (t0 + 2448);
    t43 = *((char **)t42);
    t44 = *((double *)t43);
    t45 = (t41 + t44);
    t46 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t47 = (t45 - t46);
    *((double *)t48) = t47;
    xsi_vlogfile_write(1, 0, 0, ng178, 3, t0, (char)114, t37, 64, (char)114, t48, 64);
    goto LAB16;

LAB17:    xsi_set_current_line(1173, ng7);

LAB20:    xsi_set_current_line(1174, ng7);
    t5 = (t0 + 28512);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    t13 = (t12 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t13) == 0)
        goto LAB21;

LAB23:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;

LAB24:    t21 = (t4 + 4);
    t28 = *((unsigned int *)t21);
    t31 = (~(t28));
    t32 = *((unsigned int *)t4);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(1184, ng7);
    t2 = (t0 + 28512);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB44;

LAB42:    if (*((unsigned int *)t6) == 0)
        goto LAB41;

LAB43:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB44:    t13 = (t0 + 33632);
    t20 = (t13 + 56U);
    t21 = *((char **)t20);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t21);
    t16 = (t14 | t15);
    *((unsigned int *)t29) = t16;
    t22 = (t4 + 4);
    t25 = (t21 + 4);
    t26 = (t29 + 4);
    t17 = *((unsigned int *)t22);
    t18 = *((unsigned int *)t25);
    t28 = (t17 | t18);
    *((unsigned int *)t26) = t28;
    t31 = *((unsigned int *)t26);
    t32 = (t31 != 0);
    if (t32 == 1)
        goto LAB45;

LAB46:
LAB47:    t39 = (t29 + 4);
    t62 = *((unsigned int *)t39);
    t63 = (~(t62));
    t64 = *((unsigned int *)t29);
    t65 = (t64 & t63);
    t66 = (t65 != 0);
    if (t66 > 0)
        goto LAB48;

LAB49:
LAB50:    goto LAB19;

LAB21:    *((unsigned int *)t4) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(1174, ng7);

LAB28:    xsi_set_current_line(1175, ng7);
    t19 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t22 = (t0 + 35392);
    t25 = (t22 + 56U);
    t26 = *((char **)t25);
    t23 = *((double *)t26);
    t24 = (t19 - t23);
    t30 = (t0 + 4216);
    t38 = *((char **)t30);
    t27 = *((double *)t38);
    t35 = (t24 < t27);
    *((unsigned int *)t29) = t35;
    t30 = (t29 + 4);
    *((unsigned int *)t30) = 0U;
    t39 = (t29 + 4);
    t49 = *((unsigned int *)t39);
    t50 = (~(t49));
    t51 = *((unsigned int *)t29);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB29;

LAB30:
LAB31:    xsi_set_current_line(1177, ng7);
    t19 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 36032);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t23 = *((double *)t5);
    t24 = (t19 - t23);
    t6 = (t0 + 3128);
    t12 = *((char **)t6);
    t27 = *((double *)t12);
    t7 = (t24 < t27);
    *((unsigned int *)t4) = t7;
    t6 = (t4 + 4);
    *((unsigned int *)t6) = 0U;
    t13 = (t4 + 4);
    t8 = *((unsigned int *)t13);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t14 = (t11 != 0);
    if (t14 > 0)
        goto LAB32;

LAB33:
LAB34:    xsi_set_current_line(1179, ng7);
    t19 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 36992);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t23 = *((double *)t5);
    t24 = (t19 - t23);
    t6 = (t0 + 3944);
    t12 = *((char **)t6);
    t27 = *((double *)t12);
    t7 = (t24 < t27);
    *((unsigned int *)t4) = t7;
    t6 = (t4 + 4);
    *((unsigned int *)t6) = 0U;
    t13 = (t4 + 4);
    t8 = *((unsigned int *)t13);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t14 = (t11 != 0);
    if (t14 > 0)
        goto LAB35;

LAB36:
LAB37:    xsi_set_current_line(1181, ng7);
    t19 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 37312);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t23 = *((double *)t5);
    t24 = (t19 - t23);
    t6 = (t0 + 3944);
    t12 = *((char **)t6);
    t27 = *((double *)t12);
    t7 = (t24 < t27);
    *((unsigned int *)t4) = t7;
    t6 = (t4 + 4);
    *((unsigned int *)t6) = 0U;
    t13 = (t4 + 4);
    t8 = *((unsigned int *)t13);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t14 = (t11 != 0);
    if (t14 > 0)
        goto LAB38;

LAB39:
LAB40:    goto LAB27;

LAB29:    xsi_set_current_line(1176, ng7);
    t36 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t37) = t36;
    t40 = (t0 + 35392);
    t42 = (t40 + 56U);
    t43 = *((char **)t42);
    t41 = *((double *)t43);
    t54 = (t0 + 4216);
    t55 = *((char **)t54);
    t44 = *((double *)t55);
    t45 = (t41 + t44);
    t46 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t47 = (t45 - t46);
    *((double *)t48) = t47;
    xsi_vlogfile_write(1, 0, 0, ng179, 3, t0, (char)114, t37, 64, (char)114, t48, 64);
    goto LAB31;

LAB32:    xsi_set_current_line(1178, ng7);
    t36 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t29) = t36;
    t20 = (t0 + 36032);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t41 = *((double *)t22);
    t25 = (t0 + 3128);
    t26 = *((char **)t25);
    t44 = *((double *)t26);
    t45 = (t41 + t44);
    t46 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t47 = (t45 - t46);
    *((double *)t37) = t47;
    xsi_vlogfile_write(1, 0, 0, ng180, 3, t0, (char)114, t29, 64, (char)114, t37, 64);
    goto LAB34;

LAB35:    xsi_set_current_line(1180, ng7);
    t36 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t29) = t36;
    t20 = (t0 + 36992);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t41 = *((double *)t22);
    t25 = (t0 + 3944);
    t26 = *((char **)t25);
    t44 = *((double *)t26);
    t45 = (t41 + t44);
    t46 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t47 = (t45 - t46);
    *((double *)t37) = t47;
    xsi_vlogfile_write(1, 0, 0, ng181, 3, t0, (char)114, t29, 64, (char)114, t37, 64);
    goto LAB37;

LAB38:    xsi_set_current_line(1182, ng7);
    t36 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t29) = t36;
    t20 = (t0 + 37312);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t41 = *((double *)t22);
    t25 = (t0 + 3944);
    t26 = *((char **)t25);
    t44 = *((double *)t26);
    t45 = (t41 + t44);
    t46 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t47 = (t45 - t46);
    *((double *)t37) = t47;
    xsi_vlogfile_write(1, 0, 0, ng182, 3, t0, (char)114, t29, 64, (char)114, t37, 64);
    goto LAB40;

LAB41:    *((unsigned int *)t4) = 1;
    goto LAB44;

LAB45:    t33 = *((unsigned int *)t29);
    t34 = *((unsigned int *)t26);
    *((unsigned int *)t29) = (t33 | t34);
    t30 = (t4 + 4);
    t38 = (t21 + 4);
    t35 = *((unsigned int *)t30);
    t49 = (~(t35));
    t50 = *((unsigned int *)t4);
    t56 = (t50 & t49);
    t51 = *((unsigned int *)t38);
    t52 = (~(t51));
    t53 = *((unsigned int *)t21);
    t57 = (t53 & t52);
    t58 = (~(t56));
    t59 = (~(t57));
    t60 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t60 & t58);
    t61 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t61 & t59);
    goto LAB47;

LAB48:    xsi_set_current_line(1184, ng7);

LAB51:    xsi_set_current_line(1185, ng7);
    t19 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t40 = (t0 + 36992);
    t42 = (t40 + 56U);
    t43 = *((char **)t42);
    t23 = *((double *)t43);
    t24 = (t19 - t23);
    t54 = (t0 + 3808);
    t55 = *((char **)t54);
    t27 = *((double *)t55);
    t67 = (t24 < t27);
    *((unsigned int *)t37) = t67;
    t54 = (t37 + 4);
    *((unsigned int *)t54) = 0U;
    t68 = (t37 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t37);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB52;

LAB53:
LAB54:    xsi_set_current_line(1187, ng7);
    t19 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 37312);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t23 = *((double *)t5);
    t24 = (t19 - t23);
    t6 = (t0 + 3808);
    t12 = *((char **)t6);
    t27 = *((double *)t12);
    t7 = (t24 < t27);
    *((unsigned int *)t4) = t7;
    t6 = (t4 + 4);
    *((unsigned int *)t6) = 0U;
    t13 = (t4 + 4);
    t8 = *((unsigned int *)t13);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t14 = (t11 != 0);
    if (t14 > 0)
        goto LAB55;

LAB56:
LAB57:    goto LAB50;

LAB52:    xsi_set_current_line(1186, ng7);
    t36 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t48) = t36;
    t74 = (t0 + 36992);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    t41 = *((double *)t76);
    t77 = (t0 + 3808);
    t78 = *((char **)t77);
    t44 = *((double *)t78);
    t45 = (t41 + t44);
    t46 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t47 = (t45 - t46);
    *((double *)t79) = t47;
    xsi_vlogfile_write(1, 0, 0, ng183, 3, t0, (char)114, t48, 64, (char)114, t79, 64);
    goto LAB54;

LAB55:    xsi_set_current_line(1188, ng7);
    t36 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t29) = t36;
    t20 = (t0 + 37312);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t41 = *((double *)t22);
    t25 = (t0 + 3808);
    t26 = *((char **)t25);
    t44 = *((double *)t26);
    t45 = (t41 + t44);
    t46 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t47 = (t45 - t46);
    *((double *)t37) = t47;
    xsi_vlogfile_write(1, 0, 0, ng184, 3, t0, (char)114, t29, 64, (char)114, t37, 64);
    goto LAB57;

LAB59:    xsi_set_current_line(1192, ng7);
    t36 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t29) = t36;
    t20 = (t0 + 36032);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t41 = *((double *)t22);
    t25 = (t0 + 5032);
    t26 = *((char **)t25);
    t44 = *((double *)t26);
    t45 = (t41 + t44);
    t46 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t47 = (t45 - t46);
    *((double *)t37) = t47;
    xsi_vlogfile_write(1, 0, 0, ng185, 3, t0, (char)114, t29, 64, (char)114, t37, 64);
    goto LAB61;

LAB62:    xsi_set_current_line(1195, ng7);

LAB65:    xsi_set_current_line(1196, ng7);
    t19 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t5 = (t0 + 36192);
    xsi_vlogvar_assign_value_double(t5, t19, 0);
    goto LAB64;

}

static void Always_1203_43(char *t0)
{
    char t4[8];
    char t19[8];
    char t44[8];
    char t52[8];
    char t63[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    double t34;
    char *t35;
    char *t36;
    char *t37;
    double t38;
    double t39;
    char *t40;
    char *t41;
    double t42;
    unsigned int t43;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    double t51;
    char *t53;
    char *t54;
    char *t55;
    double t56;
    char *t57;
    char *t58;
    double t59;
    double t60;
    double t61;
    double t62;

LAB0:    t1 = (t0 + 53536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1203, ng7);
    t2 = (t0 + 57208);
    *((int *)t2) = 1;
    t3 = (t0 + 53568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1203, ng7);

LAB5:    xsi_set_current_line(1204, ng7);
    t5 = (t0 + 16592U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(1216, ng7);
    t34 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t4) = t34;
    t2 = (t0 + 36512);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(1204, ng7);

LAB13:    xsi_set_current_line(1205, ng7);
    t20 = (t0 + 18352U);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t21 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t20) == 0)
        goto LAB14;

LAB16:    t27 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t27) = 1;

LAB17:    t28 = (t19 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t19);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(1209, ng7);
    t2 = (t0 + 28512);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t6) == 0)
        goto LAB25;

LAB27:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB28:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB29;

LAB30:
LAB31:    goto LAB12;

LAB14:    *((unsigned int *)t19) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(1205, ng7);

LAB21:    xsi_set_current_line(1206, ng7);
    t34 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t35 = (t0 + 34912);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = *((double *)t37);
    t39 = (t34 - t38);
    t40 = (t0 + 2448);
    t41 = *((char **)t40);
    t42 = *((double *)t41);
    t43 = (t39 < t42);
    *((unsigned int *)t44) = t43;
    t40 = (t44 + 4);
    *((unsigned int *)t40) = 0U;
    t45 = (t44 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t44);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB22;

LAB23:
LAB24:    goto LAB20;

LAB22:    xsi_set_current_line(1207, ng7);
    t51 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t52) = t51;
    t53 = (t0 + 34912);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t56 = *((double *)t55);
    t57 = (t0 + 2448);
    t58 = *((char **)t57);
    t59 = *((double *)t58);
    t60 = (t56 + t59);
    t61 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t62 = (t60 - t61);
    *((double *)t63) = t62;
    xsi_vlogfile_write(1, 0, 0, ng186, 3, t0, (char)114, t52, 64, (char)114, t63, 64);
    goto LAB24;

LAB25:    *((unsigned int *)t4) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(1209, ng7);

LAB32:    xsi_set_current_line(1210, ng7);
    t20 = (t0 + 16912U);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t21 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB36;

LAB34:    if (*((unsigned int *)t20) == 0)
        goto LAB33;

LAB35:    t27 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t27) = 1;

LAB36:    t28 = (t19 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t19);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB37;

LAB38:
LAB39:    goto LAB31;

LAB33:    *((unsigned int *)t19) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(1210, ng7);

LAB40:    xsi_set_current_line(1211, ng7);
    t34 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t35 = (t0 + 36512);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = *((double *)t37);
    t39 = (t34 - t38);
    t40 = (t0 + 5168);
    t41 = *((char **)t40);
    t42 = *((double *)t41);
    t43 = (t39 < t42);
    *((unsigned int *)t44) = t43;
    t40 = (t44 + 4);
    *((unsigned int *)t40) = 0U;
    t45 = (t44 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t44);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB41;

LAB42:
LAB43:    goto LAB39;

LAB41:    xsi_set_current_line(1212, ng7);
    t51 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t52) = t51;
    t53 = (t0 + 36512);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t56 = *((double *)t55);
    t57 = (t0 + 5168);
    t58 = *((char **)t57);
    t59 = *((double *)t58);
    t60 = (t56 + t59);
    t61 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t62 = (t60 - t61);
    *((double *)t63) = t62;
    xsi_vlogfile_write(1, 0, 0, ng187, 3, t0, (char)114, t52, 64, (char)114, t63, 64);
    goto LAB43;

}

static void Always_1220_44(char *t0)
{
    char t4[8];
    char t15[8];
    char t27[8];
    char t36[8];
    char t44[8];
    char t76[8];
    char t90[8];
    char t97[8];
    char t145[8];
    char t153[8];
    char t164[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    int t121;
    int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    double t135;
    char *t136;
    char *t137;
    char *t138;
    double t139;
    double t140;
    char *t141;
    char *t142;
    double t143;
    unsigned int t144;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    double t152;
    char *t154;
    char *t155;
    char *t156;
    double t157;
    char *t158;
    char *t159;
    double t160;
    double t161;
    double t162;
    double t163;

LAB0:    t1 = (t0 + 53784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1220, ng7);
    t2 = (t0 + 57224);
    *((int *)t2) = 1;
    t3 = (t0 + 53816);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1220, ng7);

LAB5:    xsi_set_current_line(1221, ng7);
    t5 = (t0 + 28512);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    memset(t15, 0, 8);
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t4);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t16) != 0)
        goto LAB12;

LAB13:    t23 = (t15 + 4);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB14;

LAB15:    memcpy(t44, t15, 8);

LAB16:    memset(t76, 0, 8);
    t77 = (t44 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t44);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t77) != 0)
        goto LAB30;

LAB31:    t84 = (t76 + 4);
    t85 = *((unsigned int *)t76);
    t86 = *((unsigned int *)t84);
    t87 = (t85 || t86);
    if (t87 > 0)
        goto LAB32;

LAB33:    memcpy(t97, t76, 8);

LAB34:    t129 = (t97 + 4);
    t130 = *((unsigned int *)t129);
    t131 = (~(t130));
    t132 = *((unsigned int *)t97);
    t133 = (t132 & t131);
    t134 = (t133 != 0);
    if (t134 > 0)
        goto LAB42;

LAB43:
LAB44:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t15) = 1;
    goto LAB13;

LAB12:    t22 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB14:    t28 = (t0 + 16912U);
    t29 = *((char **)t28);
    memset(t27, 0, 8);
    t28 = (t29 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (~(t30));
    t32 = *((unsigned int *)t29);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t28) == 0)
        goto LAB17;

LAB19:    t35 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t35) = 1;

LAB20:    memset(t36, 0, 8);
    t37 = (t27 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t27);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t37) != 0)
        goto LAB23;

LAB24:    t45 = *((unsigned int *)t15);
    t46 = *((unsigned int *)t36);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t15 + 4);
    t49 = (t36 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB17:    *((unsigned int *)t27) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t36) = 1;
    goto LAB24;

LAB23:    t43 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB24;

LAB25:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t15 + 4);
    t59 = (t36 + 4);
    t60 = *((unsigned int *)t15);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t36);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB27;

LAB28:    *((unsigned int *)t76) = 1;
    goto LAB31;

LAB30:    t83 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB31;

LAB32:    t88 = (t0 + 21552U);
    t89 = *((char **)t88);
    memset(t90, 0, 8);
    t88 = (t89 + 4);
    t91 = *((unsigned int *)t88);
    t92 = (~(t91));
    t93 = *((unsigned int *)t89);
    t94 = (t93 & t92);
    t95 = (t94 & 1U);
    if (t95 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t88) != 0)
        goto LAB37;

LAB38:    t98 = *((unsigned int *)t76);
    t99 = *((unsigned int *)t90);
    t100 = (t98 & t99);
    *((unsigned int *)t97) = t100;
    t101 = (t76 + 4);
    t102 = (t90 + 4);
    t103 = (t97 + 4);
    t104 = *((unsigned int *)t101);
    t105 = *((unsigned int *)t102);
    t106 = (t104 | t105);
    *((unsigned int *)t103) = t106;
    t107 = *((unsigned int *)t103);
    t108 = (t107 != 0);
    if (t108 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB34;

LAB35:    *((unsigned int *)t90) = 1;
    goto LAB38;

LAB37:    t96 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t96) = 1;
    goto LAB38;

LAB39:    t109 = *((unsigned int *)t97);
    t110 = *((unsigned int *)t103);
    *((unsigned int *)t97) = (t109 | t110);
    t111 = (t76 + 4);
    t112 = (t90 + 4);
    t113 = *((unsigned int *)t76);
    t114 = (~(t113));
    t115 = *((unsigned int *)t111);
    t116 = (~(t115));
    t117 = *((unsigned int *)t90);
    t118 = (~(t117));
    t119 = *((unsigned int *)t112);
    t120 = (~(t119));
    t121 = (t114 & t116);
    t122 = (t118 & t120);
    t123 = (~(t121));
    t124 = (~(t122));
    t125 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t125 & t123);
    t126 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t126 & t124);
    t127 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t127 & t123);
    t128 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t128 & t124);
    goto LAB41;

LAB42:    xsi_set_current_line(1221, ng7);

LAB45:    xsi_set_current_line(1222, ng7);
    t135 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t136 = (t0 + 36352);
    t137 = (t136 + 56U);
    t138 = *((char **)t137);
    t139 = *((double *)t138);
    t140 = (t135 - t139);
    t141 = (t0 + 3672);
    t142 = *((char **)t141);
    t143 = *((double *)t142);
    t144 = (t140 < t143);
    *((unsigned int *)t145) = t144;
    t141 = (t145 + 4);
    *((unsigned int *)t141) = 0U;
    t146 = (t145 + 4);
    t147 = *((unsigned int *)t146);
    t148 = (~(t147));
    t149 = *((unsigned int *)t145);
    t150 = (t149 & t148);
    t151 = (t150 != 0);
    if (t151 > 0)
        goto LAB46;

LAB47:
LAB48:    xsi_set_current_line(1224, ng7);
    t135 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 37472);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t139 = *((double *)t5);
    t140 = (t135 - t139);
    t6 = (t0 + 3672);
    t7 = *((char **)t6);
    t143 = *((double *)t7);
    t9 = (t140 < t143);
    *((unsigned int *)t4) = t9;
    t6 = (t4 + 4);
    *((unsigned int *)t6) = 0U;
    t8 = (t4 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (~(t10));
    t12 = *((unsigned int *)t4);
    t13 = (t12 & t11);
    t17 = (t13 != 0);
    if (t17 > 0)
        goto LAB49;

LAB50:
LAB51:    goto LAB44;

LAB46:    xsi_set_current_line(1223, ng7);
    t152 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t153) = t152;
    t154 = (t0 + 36352);
    t155 = (t154 + 56U);
    t156 = *((char **)t155);
    t157 = *((double *)t156);
    t158 = (t0 + 3672);
    t159 = *((char **)t158);
    t160 = *((double *)t159);
    t161 = (t157 + t160);
    t162 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t163 = (t161 - t162);
    *((double *)t164) = t163;
    xsi_vlogfile_write(1, 0, 0, ng188, 3, t0, (char)114, t153, 64, (char)114, t164, 64);
    goto LAB48;

LAB49:    xsi_set_current_line(1225, ng7);
    t152 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t15) = t152;
    t14 = (t0 + 37472);
    t16 = (t14 + 56U);
    t22 = *((char **)t16);
    t157 = *((double *)t22);
    t23 = (t0 + 3672);
    t28 = *((char **)t23);
    t160 = *((double *)t28);
    t161 = (t157 + t160);
    t162 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t163 = (t161 - t162);
    *((double *)t27) = t163;
    xsi_vlogfile_write(1, 0, 0, ng189, 3, t0, (char)114, t15, 64, (char)114, t27, 64);
    goto LAB51;

}

static void Always_1229_45(char *t0)
{
    char t4[8];
    char t36[8];
    char t44[8];
    char t55[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    double t26;
    char *t27;
    char *t28;
    char *t29;
    double t30;
    double t31;
    char *t32;
    char *t33;
    double t34;
    unsigned int t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    double t43;
    char *t45;
    char *t46;
    char *t47;
    double t48;
    char *t49;
    char *t50;
    double t51;
    double t52;
    double t53;
    double t54;

LAB0:    t1 = (t0 + 54032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1229, ng7);
    t2 = (t0 + 57240);
    *((int *)t2) = 1;
    t3 = (t0 + 54064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1229, ng7);

LAB5:    xsi_set_current_line(1230, ng7);
    t5 = (t0 + 16592U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(1236, ng7);
    t26 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 36672);
    xsi_vlogvar_assign_value_double(t2, t26, 0);
    xsi_set_current_line(1237, ng7);
    t26 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t4) = t26;
    t2 = (t0 + 36832);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(1230, ng7);

LAB13:    xsi_set_current_line(1231, ng7);
    t19 = (t0 + 18352U);
    t20 = *((char **)t19);
    t19 = (t20 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB14;

LAB15:
LAB16:    goto LAB12;

LAB14:    xsi_set_current_line(1231, ng7);

LAB17:    xsi_set_current_line(1232, ng7);
    t26 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t27 = (t0 + 34912);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = *((double *)t29);
    t31 = (t26 - t30);
    t32 = (t0 + 2448);
    t33 = *((char **)t32);
    t34 = *((double *)t33);
    t35 = (t31 < t34);
    *((unsigned int *)t36) = t35;
    t32 = (t36 + 4);
    *((unsigned int *)t32) = 0U;
    t37 = (t36 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB18;

LAB19:
LAB20:    goto LAB16;

LAB18:    xsi_set_current_line(1233, ng7);
    t43 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t44) = t43;
    t45 = (t0 + 34912);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = *((double *)t47);
    t49 = (t0 + 2448);
    t50 = *((char **)t49);
    t51 = *((double *)t50);
    t52 = (t48 + t51);
    t53 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t54 = (t52 - t53);
    *((double *)t55) = t54;
    xsi_vlogfile_write(1, 0, 0, ng190, 3, t0, (char)114, t44, 64, (char)114, t55, 64);
    goto LAB20;

}

static void Always_1240_46(char *t0)
{
    char t4[8];
    char t16[8];
    char t50[8];
    char t75[8];
    char t83[8];
    char t94[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    double t65;
    char *t66;
    char *t67;
    char *t68;
    double t69;
    double t70;
    char *t71;
    char *t72;
    double t73;
    unsigned int t74;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    double t82;
    char *t84;
    char *t85;
    char *t86;
    double t87;
    char *t88;
    char *t89;
    double t90;
    double t91;
    double t92;
    double t93;

LAB0:    t1 = (t0 + 54280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1240, ng7);
    t2 = (t0 + 57256);
    *((int *)t2) = 1;
    t3 = (t0 + 54312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1240, ng7);

LAB5:    xsi_set_current_line(1241, ng7);
    t5 = (t0 + 16592U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t0 + 28352);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t15);
    t19 = (t17 | t18);
    *((unsigned int *)t16) = t19;
    t20 = (t4 + 4);
    t21 = (t15 + 4);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t20);
    t24 = *((unsigned int *)t21);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB10;

LAB11:
LAB12:    t44 = (t16 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t16);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(1251, ng7);
    t65 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 36992);
    xsi_vlogvar_assign_value_double(t2, t65, 0);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    t28 = *((unsigned int *)t16);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t16) = (t28 | t29);
    t30 = (t4 + 4);
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (~(t32));
    t34 = *((unsigned int *)t4);
    t35 = (t34 & t33);
    t36 = *((unsigned int *)t31);
    t37 = (~(t36));
    t38 = *((unsigned int *)t15);
    t39 = (t38 & t37);
    t40 = (~(t35));
    t41 = (~(t39));
    t42 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t42 & t40);
    t43 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t43 & t41);
    goto LAB12;

LAB13:    xsi_set_current_line(1241, ng7);

LAB16:    xsi_set_current_line(1242, ng7);
    t51 = (t0 + 18352U);
    t52 = *((char **)t51);
    memset(t50, 0, 8);
    t51 = (t52 + 4);
    t53 = *((unsigned int *)t51);
    t54 = (~(t53));
    t55 = *((unsigned int *)t52);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t51) == 0)
        goto LAB17;

LAB19:    t58 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t58) = 1;

LAB20:    t59 = (t50 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t50);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(1246, ng7);
    t2 = (t0 + 28512);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB31;

LAB29:    if (*((unsigned int *)t6) == 0)
        goto LAB28;

LAB30:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB31:    t13 = (t0 + 33632);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t15);
    t19 = (t17 | t18);
    *((unsigned int *)t16) = t19;
    t20 = (t4 + 4);
    t21 = (t15 + 4);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t20);
    t24 = *((unsigned int *)t21);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB32;

LAB33:
LAB34:    t44 = (t16 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t16);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB35;

LAB36:
LAB37:    goto LAB15;

LAB17:    *((unsigned int *)t50) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(1242, ng7);

LAB24:    xsi_set_current_line(1243, ng7);
    t65 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t66 = (t0 + 34912);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = *((double *)t68);
    t70 = (t65 - t69);
    t71 = (t0 + 2448);
    t72 = *((char **)t71);
    t73 = *((double *)t72);
    t74 = (t70 < t73);
    *((unsigned int *)t75) = t74;
    t71 = (t75 + 4);
    *((unsigned int *)t71) = 0U;
    t76 = (t75 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t75);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB25;

LAB26:
LAB27:    goto LAB23;

LAB25:    xsi_set_current_line(1244, ng7);
    t82 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t83) = t82;
    t84 = (t0 + 34912);
    t85 = (t84 + 56U);
    t86 = *((char **)t85);
    t87 = *((double *)t86);
    t88 = (t0 + 2448);
    t89 = *((char **)t88);
    t90 = *((double *)t89);
    t91 = (t87 + t90);
    t92 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t93 = (t91 - t92);
    *((double *)t94) = t93;
    xsi_vlogfile_write(1, 0, 0, ng191, 3, t0, (char)114, t83, 64, (char)114, t94, 64);
    goto LAB27;

LAB28:    *((unsigned int *)t4) = 1;
    goto LAB31;

LAB32:    t28 = *((unsigned int *)t16);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t16) = (t28 | t29);
    t30 = (t4 + 4);
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (~(t32));
    t34 = *((unsigned int *)t4);
    t35 = (t34 & t33);
    t36 = *((unsigned int *)t31);
    t37 = (~(t36));
    t38 = *((unsigned int *)t15);
    t39 = (t38 & t37);
    t40 = (~(t35));
    t41 = (~(t39));
    t42 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t42 & t40);
    t43 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t43 & t41);
    goto LAB34;

LAB35:    xsi_set_current_line(1246, ng7);

LAB38:    xsi_set_current_line(1247, ng7);
    t65 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t51 = (t0 + 36192);
    t52 = (t51 + 56U);
    t58 = *((char **)t52);
    t69 = *((double *)t58);
    t70 = (t65 - t69);
    t59 = (t0 + 3808);
    t66 = *((char **)t59);
    t73 = *((double *)t66);
    t53 = (t70 < t73);
    *((unsigned int *)t50) = t53;
    t59 = (t50 + 4);
    *((unsigned int *)t59) = 0U;
    t67 = (t50 + 4);
    t54 = *((unsigned int *)t67);
    t55 = (~(t54));
    t56 = *((unsigned int *)t50);
    t57 = (t56 & t55);
    t60 = (t57 != 0);
    if (t60 > 0)
        goto LAB39;

LAB40:
LAB41:    goto LAB37;

LAB39:    xsi_set_current_line(1248, ng7);
    t82 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t75) = t82;
    t68 = (t0 + 36192);
    t71 = (t68 + 56U);
    t72 = *((char **)t71);
    t87 = *((double *)t72);
    t76 = (t0 + 3808);
    t84 = *((char **)t76);
    t90 = *((double *)t84);
    t91 = (t87 + t90);
    t92 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t93 = (t91 - t92);
    *((double *)t83) = t93;
    xsi_vlogfile_write(1, 0, 0, ng183, 3, t0, (char)114, t75, 64, (char)114, t83, 64);
    goto LAB41;

}

static void Always_1254_47(char *t0)
{
    char t4[8];
    char t16[8];
    char t50[8];
    char t75[8];
    char t83[8];
    char t94[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    double t65;
    char *t66;
    char *t67;
    char *t68;
    double t69;
    double t70;
    char *t71;
    char *t72;
    double t73;
    unsigned int t74;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    double t82;
    char *t84;
    char *t85;
    char *t86;
    double t87;
    char *t88;
    char *t89;
    double t90;
    double t91;
    double t92;
    double t93;

LAB0:    t1 = (t0 + 54528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1254, ng7);
    t2 = (t0 + 57272);
    *((int *)t2) = 1;
    t3 = (t0 + 54560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1254, ng7);

LAB5:    xsi_set_current_line(1255, ng7);
    t5 = (t0 + 16592U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t0 + 28352);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t15);
    t19 = (t17 | t18);
    *((unsigned int *)t16) = t19;
    t20 = (t4 + 4);
    t21 = (t15 + 4);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t20);
    t24 = *((unsigned int *)t21);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB10;

LAB11:
LAB12:    t44 = (t16 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t16);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(1265, ng7);
    t65 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t2 = (t0 + 37312);
    xsi_vlogvar_assign_value_double(t2, t65, 0);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    t28 = *((unsigned int *)t16);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t16) = (t28 | t29);
    t30 = (t4 + 4);
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (~(t32));
    t34 = *((unsigned int *)t4);
    t35 = (t34 & t33);
    t36 = *((unsigned int *)t31);
    t37 = (~(t36));
    t38 = *((unsigned int *)t15);
    t39 = (t38 & t37);
    t40 = (~(t35));
    t41 = (~(t39));
    t42 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t42 & t40);
    t43 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t43 & t41);
    goto LAB12;

LAB13:    xsi_set_current_line(1255, ng7);

LAB16:    xsi_set_current_line(1256, ng7);
    t51 = (t0 + 18352U);
    t52 = *((char **)t51);
    memset(t50, 0, 8);
    t51 = (t52 + 4);
    t53 = *((unsigned int *)t51);
    t54 = (~(t53));
    t55 = *((unsigned int *)t52);
    t56 = (t55 & t54);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t51) == 0)
        goto LAB17;

LAB19:    t58 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t58) = 1;

LAB20:    t59 = (t50 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t50);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(1260, ng7);
    t2 = (t0 + 28512);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB31;

LAB29:    if (*((unsigned int *)t6) == 0)
        goto LAB28;

LAB30:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB31:    t13 = (t0 + 33632);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t15);
    t19 = (t17 | t18);
    *((unsigned int *)t16) = t19;
    t20 = (t4 + 4);
    t21 = (t15 + 4);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t20);
    t24 = *((unsigned int *)t21);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB32;

LAB33:
LAB34:    t44 = (t16 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t16);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB35;

LAB36:
LAB37:    goto LAB15;

LAB17:    *((unsigned int *)t50) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(1256, ng7);

LAB24:    xsi_set_current_line(1257, ng7);
    t65 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t66 = (t0 + 34912);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = *((double *)t68);
    t70 = (t65 - t69);
    t71 = (t0 + 2448);
    t72 = *((char **)t71);
    t73 = *((double *)t72);
    t74 = (t70 < t73);
    *((unsigned int *)t75) = t74;
    t71 = (t75 + 4);
    *((unsigned int *)t71) = 0U;
    t76 = (t75 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t75);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB25;

LAB26:
LAB27:    goto LAB23;

LAB25:    xsi_set_current_line(1258, ng7);
    t82 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t83) = t82;
    t84 = (t0 + 34912);
    t85 = (t84 + 56U);
    t86 = *((char **)t85);
    t87 = *((double *)t86);
    t88 = (t0 + 2448);
    t89 = *((char **)t88);
    t90 = *((double *)t89);
    t91 = (t87 + t90);
    t92 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t93 = (t91 - t92);
    *((double *)t94) = t93;
    xsi_vlogfile_write(1, 0, 0, ng192, 3, t0, (char)114, t83, 64, (char)114, t94, 64);
    goto LAB27;

LAB28:    *((unsigned int *)t4) = 1;
    goto LAB31;

LAB32:    t28 = *((unsigned int *)t16);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t16) = (t28 | t29);
    t30 = (t4 + 4);
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (~(t32));
    t34 = *((unsigned int *)t4);
    t35 = (t34 & t33);
    t36 = *((unsigned int *)t31);
    t37 = (~(t36));
    t38 = *((unsigned int *)t15);
    t39 = (t38 & t37);
    t40 = (~(t35));
    t41 = (~(t39));
    t42 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t42 & t40);
    t43 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t43 & t41);
    goto LAB34;

LAB35:    xsi_set_current_line(1260, ng7);

LAB38:    xsi_set_current_line(1261, ng7);
    t65 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t51 = (t0 + 36192);
    t52 = (t51 + 56U);
    t58 = *((char **)t52);
    t69 = *((double *)t58);
    t70 = (t65 - t69);
    t59 = (t0 + 3808);
    t66 = *((char **)t59);
    t73 = *((double *)t66);
    t53 = (t70 < t73);
    *((unsigned int *)t50) = t53;
    t59 = (t50 + 4);
    *((unsigned int *)t59) = 0U;
    t67 = (t50 + 4);
    t54 = *((unsigned int *)t67);
    t55 = (~(t54));
    t56 = *((unsigned int *)t50);
    t57 = (t56 & t55);
    t60 = (t57 != 0);
    if (t60 > 0)
        goto LAB39;

LAB40:
LAB41:    goto LAB37;

LAB39:    xsi_set_current_line(1262, ng7);
    t82 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t75) = t82;
    t68 = (t0 + 36192);
    t71 = (t68 + 56U);
    t72 = *((char **)t71);
    t87 = *((double *)t72);
    t76 = (t0 + 3808);
    t84 = *((char **)t76);
    t90 = *((double *)t84);
    t91 = (t87 + t90);
    t92 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t93 = (t91 - t92);
    *((double *)t83) = t93;
    xsi_vlogfile_write(1, 0, 0, ng184, 3, t0, (char)114, t75, 64, (char)114, t83, 64);
    goto LAB41;

}

static void Always_1283_48(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 54776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1283, ng7);
    t2 = (t0 + 57288);
    *((int *)t2) = 1;
    t3 = (t0 + 54808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1283, ng7);
    t4 = ((char*)((ng84)));
    t5 = (t0 + 54584);
    t6 = (t0 + 15320);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 41952);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);

LAB7:    t9 = (t0 + 54680);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB9:    if (t17 != 0)
        goto LAB10;

LAB5:    t10 = (t0 + 15320);
    xsi_vlog_subprogram_popinvocation(t10);

LAB6:    t18 = (t0 + 54680);
    t19 = *((char **)t18);
    t18 = (t0 + 15320);
    t20 = (t0 + 54584);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    goto LAB2;

LAB8:;
LAB10:    t9 = (t0 + 54776U);
    *((char **)t9) = &&LAB7;
    goto LAB1;

}

static void Always_1284_49(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 55024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1284, ng7);
    t2 = (t0 + 57304);
    *((int *)t2) = 1;
    t3 = (t0 + 55056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1284, ng7);
    t4 = ((char*)((ng82)));
    t5 = (t0 + 54832);
    t6 = (t0 + 15320);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 41952);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);

LAB7:    t9 = (t0 + 54928);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB9:    if (t17 != 0)
        goto LAB10;

LAB5:    t10 = (t0 + 15320);
    xsi_vlog_subprogram_popinvocation(t10);

LAB6:    t18 = (t0 + 54928);
    t19 = *((char **)t18);
    t18 = (t0 + 15320);
    t20 = (t0 + 54832);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    goto LAB2;

LAB8:;
LAB10:    t9 = (t0 + 55024U);
    *((char **)t9) = &&LAB7;
    goto LAB1;

}

static void Always_1285_50(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 55272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1285, ng7);
    t2 = (t0 + 57320);
    *((int *)t2) = 1;
    t3 = (t0 + 55304);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1285, ng7);
    t4 = ((char*)((ng9)));
    t5 = (t0 + 55080);
    t6 = (t0 + 15320);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 41952);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);

LAB7:    t9 = (t0 + 55176);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB9:    if (t17 != 0)
        goto LAB10;

LAB5:    t10 = (t0 + 15320);
    xsi_vlog_subprogram_popinvocation(t10);

LAB6:    t18 = (t0 + 55176);
    t19 = *((char **)t18);
    t18 = (t0 + 15320);
    t20 = (t0 + 55080);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    goto LAB2;

LAB8:;
LAB10:    t9 = (t0 + 55272U);
    *((char **)t9) = &&LAB7;
    goto LAB1;

}

static void Always_1286_51(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 55520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1286, ng7);
    t2 = (t0 + 57336);
    *((int *)t2) = 1;
    t3 = (t0 + 55552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1286, ng7);
    t4 = ((char*)((ng8)));
    t5 = (t0 + 55328);
    t6 = (t0 + 15320);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 41952);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 32);

LAB7:    t9 = (t0 + 55424);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB9:    if (t17 != 0)
        goto LAB10;

LAB5:    t10 = (t0 + 15320);
    xsi_vlog_subprogram_popinvocation(t10);

LAB6:    t18 = (t0 + 55424);
    t19 = *((char **)t18);
    t18 = (t0 + 15320);
    t20 = (t0 + 55328);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    goto LAB2;

LAB8:;
LAB10:    t9 = (t0 + 55520U);
    *((char **)t9) = &&LAB7;
    goto LAB1;

}

static void Always_1288_52(char *t0)
{
    char t4[8];
    char t31[8];
    char t39[8];
    char t50[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    double t21;
    char *t22;
    char *t23;
    char *t24;
    double t25;
    double t26;
    char *t27;
    char *t28;
    double t29;
    unsigned int t30;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    double t38;
    char *t40;
    char *t41;
    char *t42;
    double t43;
    char *t44;
    char *t45;
    double t46;
    double t47;
    double t48;
    double t49;

LAB0:    t1 = (t0 + 55768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1288, ng7);
    t2 = (t0 + 57352);
    *((int *)t2) = 1;
    t3 = (t0 + 55800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1288, ng7);

LAB5:    xsi_set_current_line(1289, ng7);
    t5 = (t0 + 28512);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    t15 = (t4 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t4);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(1293, ng7);
    t21 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t4) = t21;
    t2 = (t0 + 37792);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(1289, ng7);

LAB13:    xsi_set_current_line(1290, ng7);
    t21 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t22 = (t0 + 38592);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = *((double *)t24);
    t26 = (t21 - t25);
    t27 = (t0 + 4352);
    t28 = *((char **)t27);
    t29 = *((double *)t28);
    t30 = (t26 < t29);
    *((unsigned int *)t31) = t30;
    t27 = (t31 + 4);
    *((unsigned int *)t27) = 0U;
    t32 = (t31 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB14;

LAB15:
LAB16:    goto LAB12;

LAB14:    xsi_set_current_line(1291, ng7);
    t38 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t39) = t38;
    t40 = (t0 + 38592);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = *((double *)t42);
    t44 = (t0 + 4352);
    t45 = *((char **)t44);
    t46 = *((double *)t45);
    t47 = (t43 + t46);
    t48 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    t49 = (t47 - t48);
    *((double *)t50) = t49;
    xsi_vlogfile_write(1, 0, 0, ng193, 3, t0, (char)114, t39, 64, (char)114, t50, 64);
    goto LAB16;

}

static void Always_1297_53(char *t0)
{
    char t4[8];
    char t21[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    double t30;

LAB0:    t1 = (t0 + 56016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1297, ng7);
    t2 = (t0 + 57368);
    *((int *)t2) = 1;
    t3 = (t0 + 56048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1297, ng7);

LAB5:    xsi_set_current_line(1298, ng7);
    t5 = (t0 + 16752U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(1302, ng7);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 28192);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(1298, ng7);

LAB13:    xsi_set_current_line(1299, ng7);
    t19 = (t0 + 18032U);
    t20 = *((char **)t19);
    t19 = ((char*)((ng194)));
    memset(t21, 0, 8);
    if (*((unsigned int *)t20) != *((unsigned int *)t19))
        goto LAB15;

LAB14:    t22 = (t20 + 4);
    t23 = (t19 + 4);
    if (*((unsigned int *)t22) != *((unsigned int *)t23))
        goto LAB15;

LAB16:    t24 = (t21 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t21);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB15:    *((unsigned int *)t21) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(1300, ng7);
    t30 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t31) = t30;
    xsi_vlogfile_write(1, 0, 0, ng195, 2, t0, (char)114, t31, 64);
    goto LAB19;

}

static void Always_1307_54(char *t0)
{
    char t8[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    double t17;

LAB0:    t1 = (t0 + 56264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1307, ng7);
    t2 = (t0 + 57384);
    *((int *)t2) = 1;
    t3 = (t0 + 56296);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1307, ng7);

LAB5:    xsi_set_current_line(1308, ng7);
    t4 = (t0 + 28032);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng17)));
    memset(t8, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t7))
        goto LAB7;

LAB6:    t9 = (t6 + 4);
    t10 = (t7 + 4);
    if (*((unsigned int *)t9) != *((unsigned int *)t10))
        goto LAB7;

LAB8:    t11 = (t8 + 4);
    t12 = *((unsigned int *)t11);
    t13 = (~(t12));
    t14 = *((unsigned int *)t8);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    *((unsigned int *)t8) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(1309, ng7);
    t17 = xsi_vlog_realtime(1000.0000000000000, 1000.0000000000000);
    *((double *)t18) = t17;
    xsi_vlogfile_write(1, 0, 0, ng196, 2, t0, (char)114, t18, 64);
    goto LAB11;

}


extern void work_m_00000000003420723250_0308469717_init()
{
	static char *pe[] = {(void *)NetDecl_123_0,(void *)NetDecl_128_1,(void *)Cont_129_2,(void *)Cont_136_3,(void *)Cont_137_4,(void *)Cont_138_5,(void *)Cont_139_6,(void *)Cont_140_7,(void *)Initial_141_8,(void *)NetDecl_219_9,(void *)NetDecl_228_10,(void *)NetDecl_232_11,(void *)Cont_265_12,(void *)NetDecl_268_13,(void *)Gate_269_14,(void *)NetDecl_300_15,(void *)NetDecl_301_16,(void *)NetDecl_302_17,(void *)NetDecl_303_18,(void *)NetDecl_304_19,(void *)NetDecl_305_20,(void *)NetDecl_306_21,(void *)NetDecl_307_22,(void *)NetDecl_308_23,(void *)Initial_311_24,(void *)Always_323_25,(void *)Always_364_26,(void *)Always_370_27,(void *)Always_377_28,(void *)Cont_420_29,(void *)Cont_421_30,(void *)Cont_422_31,(void *)Cont_423_32,(void *)Cont_424_33,(void *)Always_426_34,(void *)Always_427_35,(void *)Always_432_36,(void *)Always_636_37,(void *)Always_935_38,(void *)Always_1104_39,(void *)Always_1138_40,(void *)Always_1146_41,(void *)Always_1169_42,(void *)Always_1203_43,(void *)Always_1220_44,(void *)Always_1229_45,(void *)Always_1240_46,(void *)Always_1254_47,(void *)Always_1283_48,(void *)Always_1284_49,(void *)Always_1285_50,(void *)Always_1286_51,(void *)Always_1288_52,(void *)Always_1297_53,(void *)Always_1307_54};
	static char *se[] = {(void *)sp_min_clk_period,(void *)sp_memory_addr_exists,(void *)sp_memory_write,(void *)sp_memory_read,(void *)sp_register_write,(void *)sp_addr_timing_check};
	xsi_register_didat("work_m_00000000003420723250_0308469717", "isim/tb_interface_plus_cell_isim_beh.exe.sim/work/m_00000000003420723250_0308469717.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
