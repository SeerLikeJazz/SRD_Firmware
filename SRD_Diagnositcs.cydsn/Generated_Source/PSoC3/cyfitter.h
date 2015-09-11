#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include <cydevice.h>
#include <cydevice_trm.h>

/* SPIM_BSPIM */
#define SPIM_BSPIM_BitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB06_07_ACTL
#define SPIM_BSPIM_BitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB06_07_CTL
#define SPIM_BSPIM_BitCounter__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB06_07_CTL
#define SPIM_BSPIM_BitCounter__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB06_07_CTL
#define SPIM_BSPIM_BitCounter__16BIT_COUNT_COUNT_REG CYREG_B0_UDB06_07_CTL
#define SPIM_BSPIM_BitCounter__16BIT_MASK_MASK_REG CYREG_B0_UDB06_07_MSK
#define SPIM_BSPIM_BitCounter__16BIT_MASK_PERIOD_REG CYREG_B0_UDB06_07_MSK
#define SPIM_BSPIM_BitCounter__16BIT_PERIOD_MASK_REG CYREG_B0_UDB06_07_MSK
#define SPIM_BSPIM_BitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB06_07_MSK
#define SPIM_BSPIM_BitCounter__CONTROL_AUX_CTL_REG CYREG_B0_UDB06_ACTL
#define SPIM_BSPIM_BitCounter__CONTROL_REG CYREG_B0_UDB06_CTL
#define SPIM_BSPIM_BitCounter__CONTROL_ST_REG CYREG_B0_UDB06_ST_CTL
#define SPIM_BSPIM_BitCounter__COUNT_REG CYREG_B0_UDB06_CTL
#define SPIM_BSPIM_BitCounter__COUNT_ST_REG CYREG_B0_UDB06_ST_CTL
#define SPIM_BSPIM_BitCounter__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB06_MSK_ACTL
#define SPIM_BSPIM_BitCounter__PER_CTL_AUX_CTL_REG CYREG_B0_UDB06_MSK_ACTL
#define SPIM_BSPIM_BitCounter__PERIOD_REG CYREG_B0_UDB06_MSK
#define SPIM_BSPIM_BitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB06_07_ACTL
#define SPIM_BSPIM_BitCounter_ST__16BIT_STATUS_REG CYREG_B0_UDB06_07_ST
#define SPIM_BSPIM_BitCounter_ST__MASK_REG CYREG_B0_UDB06_MSK
#define SPIM_BSPIM_BitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B0_UDB06_MSK_ACTL
#define SPIM_BSPIM_BitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B0_UDB06_MSK_ACTL
#define SPIM_BSPIM_BitCounter_ST__STATUS_AUX_CTL_REG CYREG_B0_UDB06_ACTL
#define SPIM_BSPIM_BitCounter_ST__STATUS_CNT_REG CYREG_B0_UDB06_ST_CTL
#define SPIM_BSPIM_BitCounter_ST__STATUS_CONTROL_REG CYREG_B0_UDB06_ST_CTL
#define SPIM_BSPIM_BitCounter_ST__STATUS_REG CYREG_B0_UDB06_ST
#define SPIM_BSPIM_RxStsReg__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB05_06_ACTL
#define SPIM_BSPIM_RxStsReg__16BIT_STATUS_REG CYREG_B0_UDB05_06_ST
#define SPIM_BSPIM_RxStsReg__4__MASK 0x10u
#define SPIM_BSPIM_RxStsReg__4__POS 4
#define SPIM_BSPIM_RxStsReg__5__MASK 0x20u
#define SPIM_BSPIM_RxStsReg__5__POS 5
#define SPIM_BSPIM_RxStsReg__6__MASK 0x40u
#define SPIM_BSPIM_RxStsReg__6__POS 6
#define SPIM_BSPIM_RxStsReg__MASK 0x70u
#define SPIM_BSPIM_RxStsReg__MASK_REG CYREG_B0_UDB05_MSK
#define SPIM_BSPIM_RxStsReg__STATUS_AUX_CTL_REG CYREG_B0_UDB05_ACTL
#define SPIM_BSPIM_RxStsReg__STATUS_REG CYREG_B0_UDB05_ST
#define SPIM_BSPIM_sR16_Dp_u0__16BIT_A0_REG CYREG_B0_UDB04_05_A0
#define SPIM_BSPIM_sR16_Dp_u0__16BIT_A1_REG CYREG_B0_UDB04_05_A1
#define SPIM_BSPIM_sR16_Dp_u0__16BIT_D0_REG CYREG_B0_UDB04_05_D0
#define SPIM_BSPIM_sR16_Dp_u0__16BIT_D1_REG CYREG_B0_UDB04_05_D1
#define SPIM_BSPIM_sR16_Dp_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB04_05_ACTL
#define SPIM_BSPIM_sR16_Dp_u0__16BIT_F0_REG CYREG_B0_UDB04_05_F0
#define SPIM_BSPIM_sR16_Dp_u0__16BIT_F1_REG CYREG_B0_UDB04_05_F1
#define SPIM_BSPIM_sR16_Dp_u0__A0_A1_REG CYREG_B0_UDB04_A0_A1
#define SPIM_BSPIM_sR16_Dp_u0__A0_REG CYREG_B0_UDB04_A0
#define SPIM_BSPIM_sR16_Dp_u0__A1_REG CYREG_B0_UDB04_A1
#define SPIM_BSPIM_sR16_Dp_u0__D0_D1_REG CYREG_B0_UDB04_D0_D1
#define SPIM_BSPIM_sR16_Dp_u0__D0_REG CYREG_B0_UDB04_D0
#define SPIM_BSPIM_sR16_Dp_u0__D1_REG CYREG_B0_UDB04_D1
#define SPIM_BSPIM_sR16_Dp_u0__DP_AUX_CTL_REG CYREG_B0_UDB04_ACTL
#define SPIM_BSPIM_sR16_Dp_u0__F0_F1_REG CYREG_B0_UDB04_F0_F1
#define SPIM_BSPIM_sR16_Dp_u0__F0_REG CYREG_B0_UDB04_F0
#define SPIM_BSPIM_sR16_Dp_u0__F1_REG CYREG_B0_UDB04_F1
#define SPIM_BSPIM_sR16_Dp_u1__16BIT_A0_REG CYREG_B0_UDB05_06_A0
#define SPIM_BSPIM_sR16_Dp_u1__16BIT_A1_REG CYREG_B0_UDB05_06_A1
#define SPIM_BSPIM_sR16_Dp_u1__16BIT_D0_REG CYREG_B0_UDB05_06_D0
#define SPIM_BSPIM_sR16_Dp_u1__16BIT_D1_REG CYREG_B0_UDB05_06_D1
#define SPIM_BSPIM_sR16_Dp_u1__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB05_06_ACTL
#define SPIM_BSPIM_sR16_Dp_u1__16BIT_F0_REG CYREG_B0_UDB05_06_F0
#define SPIM_BSPIM_sR16_Dp_u1__16BIT_F1_REG CYREG_B0_UDB05_06_F1
#define SPIM_BSPIM_sR16_Dp_u1__A0_A1_REG CYREG_B0_UDB05_A0_A1
#define SPIM_BSPIM_sR16_Dp_u1__A0_REG CYREG_B0_UDB05_A0
#define SPIM_BSPIM_sR16_Dp_u1__A1_REG CYREG_B0_UDB05_A1
#define SPIM_BSPIM_sR16_Dp_u1__D0_D1_REG CYREG_B0_UDB05_D0_D1
#define SPIM_BSPIM_sR16_Dp_u1__D0_REG CYREG_B0_UDB05_D0
#define SPIM_BSPIM_sR16_Dp_u1__D1_REG CYREG_B0_UDB05_D1
#define SPIM_BSPIM_sR16_Dp_u1__DP_AUX_CTL_REG CYREG_B0_UDB05_ACTL
#define SPIM_BSPIM_sR16_Dp_u1__F0_F1_REG CYREG_B0_UDB05_F0_F1
#define SPIM_BSPIM_sR16_Dp_u1__F0_REG CYREG_B0_UDB05_F0
#define SPIM_BSPIM_sR16_Dp_u1__F1_REG CYREG_B0_UDB05_F1
#define SPIM_BSPIM_TxStsReg__0__MASK 0x01u
#define SPIM_BSPIM_TxStsReg__0__POS 0
#define SPIM_BSPIM_TxStsReg__1__MASK 0x02u
#define SPIM_BSPIM_TxStsReg__1__POS 1
#define SPIM_BSPIM_TxStsReg__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB04_05_ACTL
#define SPIM_BSPIM_TxStsReg__16BIT_STATUS_REG CYREG_B0_UDB04_05_ST
#define SPIM_BSPIM_TxStsReg__2__MASK 0x04u
#define SPIM_BSPIM_TxStsReg__2__POS 2
#define SPIM_BSPIM_TxStsReg__3__MASK 0x08u
#define SPIM_BSPIM_TxStsReg__3__POS 3
#define SPIM_BSPIM_TxStsReg__4__MASK 0x10u
#define SPIM_BSPIM_TxStsReg__4__POS 4
#define SPIM_BSPIM_TxStsReg__MASK 0x1Fu
#define SPIM_BSPIM_TxStsReg__MASK_REG CYREG_B0_UDB04_MSK
#define SPIM_BSPIM_TxStsReg__STATUS_AUX_CTL_REG CYREG_B0_UDB04_ACTL
#define SPIM_BSPIM_TxStsReg__STATUS_REG CYREG_B0_UDB04_ST

/* SPIM_RxInternalInterrupt */
#define SPIM_RxInternalInterrupt__ES2_PATCH 0u
#define SPIM_RxInternalInterrupt__INTC_CLR_EN_REG CYREG_INTC_CLR_EN0
#define SPIM_RxInternalInterrupt__INTC_CLR_PD_REG CYREG_INTC_CLR_PD0
#define SPIM_RxInternalInterrupt__INTC_MASK 0x01u
#define SPIM_RxInternalInterrupt__INTC_NUMBER 0u
#define SPIM_RxInternalInterrupt__INTC_PRIOR_NUM 7u
#define SPIM_RxInternalInterrupt__INTC_PRIOR_REG CYREG_INTC_PRIOR0
#define SPIM_RxInternalInterrupt__INTC_SET_EN_REG CYREG_INTC_SET_EN0
#define SPIM_RxInternalInterrupt__INTC_SET_PD_REG CYREG_INTC_SET_PD0
#define SPIM_RxInternalInterrupt__INTC_VECT (CYREG_INTC_VECT_MBASE+0x00u)

/* SPIM_TxInternalInterrupt */
#define SPIM_TxInternalInterrupt__ES2_PATCH 0u
#define SPIM_TxInternalInterrupt__INTC_CLR_EN_REG CYREG_INTC_CLR_EN0
#define SPIM_TxInternalInterrupt__INTC_CLR_PD_REG CYREG_INTC_CLR_PD0
#define SPIM_TxInternalInterrupt__INTC_MASK 0x02u
#define SPIM_TxInternalInterrupt__INTC_NUMBER 1u
#define SPIM_TxInternalInterrupt__INTC_PRIOR_NUM 7u
#define SPIM_TxInternalInterrupt__INTC_PRIOR_REG CYREG_INTC_PRIOR1
#define SPIM_TxInternalInterrupt__INTC_SET_EN_REG CYREG_INTC_SET_EN0
#define SPIM_TxInternalInterrupt__INTC_SET_PD_REG CYREG_INTC_SET_PD0
#define SPIM_TxInternalInterrupt__INTC_VECT (CYREG_INTC_VECT_MBASE+0x02u)

/* UART_BUART */
#define UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB08_09_ACTL
#define UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB08_09_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB08_09_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB08_09_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG CYREG_B0_UDB08_09_CTL
#define UART_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG CYREG_B0_UDB08_09_MSK
#define UART_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG CYREG_B0_UDB08_09_MSK
#define UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG CYREG_B0_UDB08_09_MSK
#define UART_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB08_09_MSK
#define UART_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG CYREG_B0_UDB08_ACTL
#define UART_BUART_sRX_RxBitCounter__CONTROL_REG CYREG_B0_UDB08_CTL
#define UART_BUART_sRX_RxBitCounter__CONTROL_ST_REG CYREG_B0_UDB08_ST_CTL
#define UART_BUART_sRX_RxBitCounter__COUNT_REG CYREG_B0_UDB08_CTL
#define UART_BUART_sRX_RxBitCounter__COUNT_ST_REG CYREG_B0_UDB08_ST_CTL
#define UART_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB08_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG CYREG_B0_UDB08_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter__PERIOD_REG CYREG_B0_UDB08_MSK
#define UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB08_09_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG CYREG_B0_UDB08_09_ST
#define UART_BUART_sRX_RxBitCounter_ST__MASK_REG CYREG_B0_UDB08_MSK
#define UART_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B0_UDB08_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B0_UDB08_MSK_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG CYREG_B0_UDB08_ACTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG CYREG_B0_UDB08_ST_CTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG CYREG_B0_UDB08_ST_CTL
#define UART_BUART_sRX_RxBitCounter_ST__STATUS_REG CYREG_B0_UDB08_ST
#define UART_BUART_sRX_RxShifter_u0__16BIT_A0_REG CYREG_B1_UDB08_09_A0
#define UART_BUART_sRX_RxShifter_u0__16BIT_A1_REG CYREG_B1_UDB08_09_A1
#define UART_BUART_sRX_RxShifter_u0__16BIT_D0_REG CYREG_B1_UDB08_09_D0
#define UART_BUART_sRX_RxShifter_u0__16BIT_D1_REG CYREG_B1_UDB08_09_D1
#define UART_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB08_09_ACTL
#define UART_BUART_sRX_RxShifter_u0__16BIT_F0_REG CYREG_B1_UDB08_09_F0
#define UART_BUART_sRX_RxShifter_u0__16BIT_F1_REG CYREG_B1_UDB08_09_F1
#define UART_BUART_sRX_RxShifter_u0__A0_A1_REG CYREG_B1_UDB08_A0_A1
#define UART_BUART_sRX_RxShifter_u0__A0_REG CYREG_B1_UDB08_A0
#define UART_BUART_sRX_RxShifter_u0__A1_REG CYREG_B1_UDB08_A1
#define UART_BUART_sRX_RxShifter_u0__D0_D1_REG CYREG_B1_UDB08_D0_D1
#define UART_BUART_sRX_RxShifter_u0__D0_REG CYREG_B1_UDB08_D0
#define UART_BUART_sRX_RxShifter_u0__D1_REG CYREG_B1_UDB08_D1
#define UART_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG CYREG_B1_UDB08_ACTL
#define UART_BUART_sRX_RxShifter_u0__F0_F1_REG CYREG_B1_UDB08_F0_F1
#define UART_BUART_sRX_RxShifter_u0__F0_REG CYREG_B1_UDB08_F0
#define UART_BUART_sRX_RxShifter_u0__F1_REG CYREG_B1_UDB08_F1
#define UART_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB08_09_ACTL
#define UART_BUART_sRX_RxSts__16BIT_STATUS_REG CYREG_B1_UDB08_09_ST
#define UART_BUART_sRX_RxSts__3__MASK 0x08u
#define UART_BUART_sRX_RxSts__3__POS 3
#define UART_BUART_sRX_RxSts__4__MASK 0x10u
#define UART_BUART_sRX_RxSts__4__POS 4
#define UART_BUART_sRX_RxSts__5__MASK 0x20u
#define UART_BUART_sRX_RxSts__5__POS 5
#define UART_BUART_sRX_RxSts__MASK 0x38u
#define UART_BUART_sRX_RxSts__MASK_REG CYREG_B1_UDB08_MSK
#define UART_BUART_sRX_RxSts__STATUS_AUX_CTL_REG CYREG_B1_UDB08_ACTL
#define UART_BUART_sRX_RxSts__STATUS_REG CYREG_B1_UDB08_ST
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG CYREG_B0_UDB07_08_A0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG CYREG_B0_UDB07_08_A1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG CYREG_B0_UDB07_08_D0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG CYREG_B0_UDB07_08_D1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB07_08_ACTL
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG CYREG_B0_UDB07_08_F0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG CYREG_B0_UDB07_08_F1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG CYREG_B0_UDB07_A0_A1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG CYREG_B0_UDB07_A0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG CYREG_B0_UDB07_A1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG CYREG_B0_UDB07_D0_D1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG CYREG_B0_UDB07_D0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG CYREG_B0_UDB07_D1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG CYREG_B0_UDB07_ACTL
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG CYREG_B0_UDB07_F0_F1
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG CYREG_B0_UDB07_F0
#define UART_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG CYREG_B0_UDB07_F1
#define UART_BUART_sTX_TxShifter_u0__16BIT_A0_REG CYREG_B1_UDB07_08_A0
#define UART_BUART_sTX_TxShifter_u0__16BIT_A1_REG CYREG_B1_UDB07_08_A1
#define UART_BUART_sTX_TxShifter_u0__16BIT_D0_REG CYREG_B1_UDB07_08_D0
#define UART_BUART_sTX_TxShifter_u0__16BIT_D1_REG CYREG_B1_UDB07_08_D1
#define UART_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB07_08_ACTL
#define UART_BUART_sTX_TxShifter_u0__16BIT_F0_REG CYREG_B1_UDB07_08_F0
#define UART_BUART_sTX_TxShifter_u0__16BIT_F1_REG CYREG_B1_UDB07_08_F1
#define UART_BUART_sTX_TxShifter_u0__A0_A1_REG CYREG_B1_UDB07_A0_A1
#define UART_BUART_sTX_TxShifter_u0__A0_REG CYREG_B1_UDB07_A0
#define UART_BUART_sTX_TxShifter_u0__A1_REG CYREG_B1_UDB07_A1
#define UART_BUART_sTX_TxShifter_u0__D0_D1_REG CYREG_B1_UDB07_D0_D1
#define UART_BUART_sTX_TxShifter_u0__D0_REG CYREG_B1_UDB07_D0
#define UART_BUART_sTX_TxShifter_u0__D1_REG CYREG_B1_UDB07_D1
#define UART_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG CYREG_B1_UDB07_ACTL
#define UART_BUART_sTX_TxShifter_u0__F0_F1_REG CYREG_B1_UDB07_F0_F1
#define UART_BUART_sTX_TxShifter_u0__F0_REG CYREG_B1_UDB07_F0
#define UART_BUART_sTX_TxShifter_u0__F1_REG CYREG_B1_UDB07_F1
#define UART_BUART_sTX_TxSts__0__MASK 0x01u
#define UART_BUART_sTX_TxSts__0__POS 0
#define UART_BUART_sTX_TxSts__1__MASK 0x02u
#define UART_BUART_sTX_TxSts__1__POS 1
#define UART_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB07_08_ACTL
#define UART_BUART_sTX_TxSts__16BIT_STATUS_REG CYREG_B1_UDB07_08_ST
#define UART_BUART_sTX_TxSts__2__MASK 0x04u
#define UART_BUART_sTX_TxSts__2__POS 2
#define UART_BUART_sTX_TxSts__3__MASK 0x08u
#define UART_BUART_sTX_TxSts__3__POS 3
#define UART_BUART_sTX_TxSts__MASK 0x0Fu
#define UART_BUART_sTX_TxSts__MASK_REG CYREG_B1_UDB07_MSK
#define UART_BUART_sTX_TxSts__STATUS_AUX_CTL_REG CYREG_B1_UDB07_ACTL
#define UART_BUART_sTX_TxSts__STATUS_REG CYREG_B1_UDB07_ST

/* UART_IntClock */
#define UART_IntClock__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define UART_IntClock__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define UART_IntClock__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define UART_IntClock__CFG2_SRC_SEL_MASK 0x07u
#define UART_IntClock__INDEX 0x01u
#define UART_IntClock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define UART_IntClock__PM_ACT_MSK 0x02u
#define UART_IntClock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define UART_IntClock__PM_STBY_MSK 0x02u

/* Clock */
#define Clock__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define Clock__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define Clock__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define Clock__CFG2_SRC_SEL_MASK 0x07u
#define Clock__INDEX 0x00u
#define Clock__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define Clock__PM_ACT_MSK 0x01u
#define Clock__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define Clock__PM_STBY_MSK 0x01u

/* Clock_1 */
#define Clock_1__CFG0 CYREG_CLKDIST_DCFG2_CFG0
#define Clock_1__CFG1 CYREG_CLKDIST_DCFG2_CFG1
#define Clock_1__CFG2 CYREG_CLKDIST_DCFG2_CFG2
#define Clock_1__CFG2_SRC_SEL_MASK 0x07u
#define Clock_1__INDEX 0x02u
#define Clock_1__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define Clock_1__PM_ACT_MSK 0x04u
#define Clock_1__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define Clock_1__PM_STBY_MSK 0x04u

/* LED_B */
#define LED_B__0__MASK 0x80u
#define LED_B__0__PC CYREG_PRT2_PC7
#define LED_B__0__PORT 2u
#define LED_B__0__SHIFT 7
#define LED_B__AG CYREG_PRT2_AG
#define LED_B__AMUX CYREG_PRT2_AMUX
#define LED_B__BIE CYREG_PRT2_BIE
#define LED_B__BIT_MASK CYREG_PRT2_BIT_MASK
#define LED_B__BYP CYREG_PRT2_BYP
#define LED_B__CTL CYREG_PRT2_CTL
#define LED_B__DM0 CYREG_PRT2_DM0
#define LED_B__DM1 CYREG_PRT2_DM1
#define LED_B__DM2 CYREG_PRT2_DM2
#define LED_B__DR CYREG_PRT2_DR
#define LED_B__INP_DIS CYREG_PRT2_INP_DIS
#define LED_B__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define LED_B__LCD_EN CYREG_PRT2_LCD_EN
#define LED_B__MASK 0x80u
#define LED_B__PORT 2u
#define LED_B__PRT CYREG_PRT2_PRT
#define LED_B__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define LED_B__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define LED_B__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define LED_B__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define LED_B__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define LED_B__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define LED_B__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define LED_B__PS CYREG_PRT2_PS
#define LED_B__SHIFT 7
#define LED_B__SLW CYREG_PRT2_SLW

/* PWM_1_PWMHW */
#define PWM_1_PWMHW__CAP0 CYREG_TMR0_CAP0
#define PWM_1_PWMHW__CAP1 CYREG_TMR0_CAP1
#define PWM_1_PWMHW__CFG0 CYREG_TMR0_CFG0
#define PWM_1_PWMHW__CFG1 CYREG_TMR0_CFG1
#define PWM_1_PWMHW__CFG2 CYREG_TMR0_CFG2
#define PWM_1_PWMHW__CNT_CMP0 CYREG_TMR0_CNT_CMP0
#define PWM_1_PWMHW__CNT_CMP1 CYREG_TMR0_CNT_CMP1
#define PWM_1_PWMHW__PER0 CYREG_TMR0_PER0
#define PWM_1_PWMHW__PER1 CYREG_TMR0_PER1
#define PWM_1_PWMHW__PM_ACT_CFG CYREG_PM_ACT_CFG3
#define PWM_1_PWMHW__PM_ACT_MSK 0x01u
#define PWM_1_PWMHW__PM_STBY_CFG CYREG_PM_STBY_CFG3
#define PWM_1_PWMHW__PM_STBY_MSK 0x01u
#define PWM_1_PWMHW__RT0 CYREG_TMR0_RT0
#define PWM_1_PWMHW__RT1 CYREG_TMR0_RT1
#define PWM_1_PWMHW__SR0 CYREG_TMR0_SR0

/* RX_pin */
#define RX_pin__0__MASK 0x20u
#define RX_pin__0__PC CYREG_PRT1_PC5
#define RX_pin__0__PORT 1u
#define RX_pin__0__SHIFT 5
#define RX_pin__AG CYREG_PRT1_AG
#define RX_pin__AMUX CYREG_PRT1_AMUX
#define RX_pin__BIE CYREG_PRT1_BIE
#define RX_pin__BIT_MASK CYREG_PRT1_BIT_MASK
#define RX_pin__BYP CYREG_PRT1_BYP
#define RX_pin__CTL CYREG_PRT1_CTL
#define RX_pin__DM0 CYREG_PRT1_DM0
#define RX_pin__DM1 CYREG_PRT1_DM1
#define RX_pin__DM2 CYREG_PRT1_DM2
#define RX_pin__DR CYREG_PRT1_DR
#define RX_pin__INP_DIS CYREG_PRT1_INP_DIS
#define RX_pin__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define RX_pin__LCD_EN CYREG_PRT1_LCD_EN
#define RX_pin__MASK 0x20u
#define RX_pin__PORT 1u
#define RX_pin__PRT CYREG_PRT1_PRT
#define RX_pin__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define RX_pin__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define RX_pin__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define RX_pin__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define RX_pin__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define RX_pin__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define RX_pin__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define RX_pin__PS CYREG_PRT1_PS
#define RX_pin__SHIFT 5
#define RX_pin__SLW CYREG_PRT1_SLW

/* TX_pin */
#define TX_pin__0__MASK 0x10u
#define TX_pin__0__PC CYREG_PRT1_PC4
#define TX_pin__0__PORT 1u
#define TX_pin__0__SHIFT 4
#define TX_pin__AG CYREG_PRT1_AG
#define TX_pin__AMUX CYREG_PRT1_AMUX
#define TX_pin__BIE CYREG_PRT1_BIE
#define TX_pin__BIT_MASK CYREG_PRT1_BIT_MASK
#define TX_pin__BYP CYREG_PRT1_BYP
#define TX_pin__CTL CYREG_PRT1_CTL
#define TX_pin__DM0 CYREG_PRT1_DM0
#define TX_pin__DM1 CYREG_PRT1_DM1
#define TX_pin__DM2 CYREG_PRT1_DM2
#define TX_pin__DR CYREG_PRT1_DR
#define TX_pin__INP_DIS CYREG_PRT1_INP_DIS
#define TX_pin__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define TX_pin__LCD_EN CYREG_PRT1_LCD_EN
#define TX_pin__MASK 0x10u
#define TX_pin__PORT 1u
#define TX_pin__PRT CYREG_PRT1_PRT
#define TX_pin__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define TX_pin__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define TX_pin__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define TX_pin__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define TX_pin__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define TX_pin__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define TX_pin__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define TX_pin__PS CYREG_PRT1_PS
#define TX_pin__SHIFT 4
#define TX_pin__SLW CYREG_PRT1_SLW

/* RN_Reset */
#define RN_Reset__0__MASK 0x04u
#define RN_Reset__0__PC CYREG_PRT1_PC2
#define RN_Reset__0__PORT 1u
#define RN_Reset__0__SHIFT 2
#define RN_Reset__AG CYREG_PRT1_AG
#define RN_Reset__AMUX CYREG_PRT1_AMUX
#define RN_Reset__BIE CYREG_PRT1_BIE
#define RN_Reset__BIT_MASK CYREG_PRT1_BIT_MASK
#define RN_Reset__BYP CYREG_PRT1_BYP
#define RN_Reset__CTL CYREG_PRT1_CTL
#define RN_Reset__DM0 CYREG_PRT1_DM0
#define RN_Reset__DM1 CYREG_PRT1_DM1
#define RN_Reset__DM2 CYREG_PRT1_DM2
#define RN_Reset__DR CYREG_PRT1_DR
#define RN_Reset__INP_DIS CYREG_PRT1_INP_DIS
#define RN_Reset__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define RN_Reset__LCD_EN CYREG_PRT1_LCD_EN
#define RN_Reset__MASK 0x04u
#define RN_Reset__PORT 1u
#define RN_Reset__PRT CYREG_PRT1_PRT
#define RN_Reset__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define RN_Reset__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define RN_Reset__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define RN_Reset__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define RN_Reset__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define RN_Reset__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define RN_Reset__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define RN_Reset__PS CYREG_PRT1_PS
#define RN_Reset__SHIFT 2
#define RN_Reset__SLW CYREG_PRT1_SLW

/* m_ss_pin */
#define m_ss_pin__0__MASK 0x08u
#define m_ss_pin__0__PC CYREG_PRT0_PC3
#define m_ss_pin__0__PORT 0u
#define m_ss_pin__0__SHIFT 3
#define m_ss_pin__AG CYREG_PRT0_AG
#define m_ss_pin__AMUX CYREG_PRT0_AMUX
#define m_ss_pin__BIE CYREG_PRT0_BIE
#define m_ss_pin__BIT_MASK CYREG_PRT0_BIT_MASK
#define m_ss_pin__BYP CYREG_PRT0_BYP
#define m_ss_pin__CTL CYREG_PRT0_CTL
#define m_ss_pin__DM0 CYREG_PRT0_DM0
#define m_ss_pin__DM1 CYREG_PRT0_DM1
#define m_ss_pin__DM2 CYREG_PRT0_DM2
#define m_ss_pin__DR CYREG_PRT0_DR
#define m_ss_pin__INP_DIS CYREG_PRT0_INP_DIS
#define m_ss_pin__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define m_ss_pin__LCD_EN CYREG_PRT0_LCD_EN
#define m_ss_pin__MASK 0x08u
#define m_ss_pin__PORT 0u
#define m_ss_pin__PRT CYREG_PRT0_PRT
#define m_ss_pin__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define m_ss_pin__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define m_ss_pin__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define m_ss_pin__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define m_ss_pin__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define m_ss_pin__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define m_ss_pin__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define m_ss_pin__PS CYREG_PRT0_PS
#define m_ss_pin__SHIFT 3
#define m_ss_pin__SLW CYREG_PRT0_SLW

/* m_miso_pin */
#define m_miso_pin__0__MASK 0x01u
#define m_miso_pin__0__PC CYREG_PRT0_PC0
#define m_miso_pin__0__PORT 0u
#define m_miso_pin__0__SHIFT 0
#define m_miso_pin__AG CYREG_PRT0_AG
#define m_miso_pin__AMUX CYREG_PRT0_AMUX
#define m_miso_pin__BIE CYREG_PRT0_BIE
#define m_miso_pin__BIT_MASK CYREG_PRT0_BIT_MASK
#define m_miso_pin__BYP CYREG_PRT0_BYP
#define m_miso_pin__CTL CYREG_PRT0_CTL
#define m_miso_pin__DM0 CYREG_PRT0_DM0
#define m_miso_pin__DM1 CYREG_PRT0_DM1
#define m_miso_pin__DM2 CYREG_PRT0_DM2
#define m_miso_pin__DR CYREG_PRT0_DR
#define m_miso_pin__INP_DIS CYREG_PRT0_INP_DIS
#define m_miso_pin__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define m_miso_pin__LCD_EN CYREG_PRT0_LCD_EN
#define m_miso_pin__MASK 0x01u
#define m_miso_pin__PORT 0u
#define m_miso_pin__PRT CYREG_PRT0_PRT
#define m_miso_pin__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define m_miso_pin__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define m_miso_pin__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define m_miso_pin__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define m_miso_pin__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define m_miso_pin__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define m_miso_pin__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define m_miso_pin__PS CYREG_PRT0_PS
#define m_miso_pin__SHIFT 0
#define m_miso_pin__SLW CYREG_PRT0_SLW

/* m_mosi_pin */
#define m_mosi_pin__0__MASK 0x02u
#define m_mosi_pin__0__PC CYREG_PRT0_PC1
#define m_mosi_pin__0__PORT 0u
#define m_mosi_pin__0__SHIFT 1
#define m_mosi_pin__AG CYREG_PRT0_AG
#define m_mosi_pin__AMUX CYREG_PRT0_AMUX
#define m_mosi_pin__BIE CYREG_PRT0_BIE
#define m_mosi_pin__BIT_MASK CYREG_PRT0_BIT_MASK
#define m_mosi_pin__BYP CYREG_PRT0_BYP
#define m_mosi_pin__CTL CYREG_PRT0_CTL
#define m_mosi_pin__DM0 CYREG_PRT0_DM0
#define m_mosi_pin__DM1 CYREG_PRT0_DM1
#define m_mosi_pin__DM2 CYREG_PRT0_DM2
#define m_mosi_pin__DR CYREG_PRT0_DR
#define m_mosi_pin__INP_DIS CYREG_PRT0_INP_DIS
#define m_mosi_pin__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define m_mosi_pin__LCD_EN CYREG_PRT0_LCD_EN
#define m_mosi_pin__MASK 0x02u
#define m_mosi_pin__PORT 0u
#define m_mosi_pin__PRT CYREG_PRT0_PRT
#define m_mosi_pin__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define m_mosi_pin__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define m_mosi_pin__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define m_mosi_pin__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define m_mosi_pin__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define m_mosi_pin__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define m_mosi_pin__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define m_mosi_pin__PS CYREG_PRT0_PS
#define m_mosi_pin__SHIFT 1
#define m_mosi_pin__SLW CYREG_PRT0_SLW

/* m_sclk_pin */
#define m_sclk_pin__0__MASK 0x04u
#define m_sclk_pin__0__PC CYREG_PRT0_PC2
#define m_sclk_pin__0__PORT 0u
#define m_sclk_pin__0__SHIFT 2
#define m_sclk_pin__AG CYREG_PRT0_AG
#define m_sclk_pin__AMUX CYREG_PRT0_AMUX
#define m_sclk_pin__BIE CYREG_PRT0_BIE
#define m_sclk_pin__BIT_MASK CYREG_PRT0_BIT_MASK
#define m_sclk_pin__BYP CYREG_PRT0_BYP
#define m_sclk_pin__CTL CYREG_PRT0_CTL
#define m_sclk_pin__DM0 CYREG_PRT0_DM0
#define m_sclk_pin__DM1 CYREG_PRT0_DM1
#define m_sclk_pin__DM2 CYREG_PRT0_DM2
#define m_sclk_pin__DR CYREG_PRT0_DR
#define m_sclk_pin__INP_DIS CYREG_PRT0_INP_DIS
#define m_sclk_pin__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define m_sclk_pin__LCD_EN CYREG_PRT0_LCD_EN
#define m_sclk_pin__MASK 0x04u
#define m_sclk_pin__PORT 0u
#define m_sclk_pin__PRT CYREG_PRT0_PRT
#define m_sclk_pin__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define m_sclk_pin__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define m_sclk_pin__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define m_sclk_pin__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define m_sclk_pin__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define m_sclk_pin__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define m_sclk_pin__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define m_sclk_pin__PS CYREG_PRT0_PS
#define m_sclk_pin__SHIFT 2
#define m_sclk_pin__SLW CYREG_PRT0_SLW

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_VERSION "PSoC Creator  3.1 SP2"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 6u
#define CYDEV_CHIP_DIE_PSOC4A 3u
#define CYDEV_CHIP_DIE_PSOC5LP 5u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC3
#define CYDEV_CHIP_JTAG_ID 0x1E01E069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 3u
#define CYDEV_CHIP_MEMBER_4D 2u
#define CYDEV_CHIP_MEMBER_4F 4u
#define CYDEV_CHIP_MEMBER_5A 6u
#define CYDEV_CHIP_MEMBER_5B 5u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_3A
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_3A_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_CLEAR_SRAM 1
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x01u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000003u
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_VDDIO0 3.3
#define CYDEV_VDDIO0_MV 3300
#define CYDEV_VDDIO1 3.3
#define CYDEV_VDDIO1_MV 3300
#define CYDEV_VDDIO2 3.3
#define CYDEV_VDDIO2_MV 3300
#define CYDEV_VDDIO3 3.3
#define CYDEV_VDDIO3_MV 3300
#define CYDEV_VIO0 3.3
#define CYDEV_VIO0_MV 3300
#define CYDEV_VIO1 3.3
#define CYDEV_VIO1_MV 3300
#define CYDEV_VIO2 3.3
#define CYDEV_VIO2_MV 3300
#define CYDEV_VIO3 3.3
#define CYDEV_VIO3_MV 3300
#define CYIPBLOCK_DP8051_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */