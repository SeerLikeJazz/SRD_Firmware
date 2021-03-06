#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include <cydevice.h>
#include <cydevice_trm.h>

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

/* IDAC8_1_viDAC8 */
#define IDAC8_1_viDAC8__CR0 CYREG_DAC1_CR0
#define IDAC8_1_viDAC8__CR1 CYREG_DAC1_CR1
#define IDAC8_1_viDAC8__D CYREG_DAC1_D
#define IDAC8_1_viDAC8__PM_ACT_CFG CYREG_PM_ACT_CFG8
#define IDAC8_1_viDAC8__PM_ACT_MSK 0x02u
#define IDAC8_1_viDAC8__PM_STBY_CFG CYREG_PM_STBY_CFG8
#define IDAC8_1_viDAC8__PM_STBY_MSK 0x02u
#define IDAC8_1_viDAC8__STROBE CYREG_DAC1_STROBE
#define IDAC8_1_viDAC8__SW0 CYREG_DAC1_SW0
#define IDAC8_1_viDAC8__SW2 CYREG_DAC1_SW2
#define IDAC8_1_viDAC8__SW3 CYREG_DAC1_SW3
#define IDAC8_1_viDAC8__SW4 CYREG_DAC1_SW4
#define IDAC8_1_viDAC8__TR CYREG_DAC1_TR
#define IDAC8_1_viDAC8__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DAC1_M1
#define IDAC8_1_viDAC8__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DAC1_M2
#define IDAC8_1_viDAC8__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DAC1_M3
#define IDAC8_1_viDAC8__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DAC1_M4
#define IDAC8_1_viDAC8__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DAC1_M5
#define IDAC8_1_viDAC8__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DAC1_M6
#define IDAC8_1_viDAC8__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DAC1_M7
#define IDAC8_1_viDAC8__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DAC1_M8
#define IDAC8_1_viDAC8__TST CYREG_DAC1_TST

/* IDAC8_2_viDAC8 */
#define IDAC8_2_viDAC8__CR0 CYREG_DAC3_CR0
#define IDAC8_2_viDAC8__CR1 CYREG_DAC3_CR1
#define IDAC8_2_viDAC8__D CYREG_DAC3_D
#define IDAC8_2_viDAC8__PM_ACT_CFG CYREG_PM_ACT_CFG8
#define IDAC8_2_viDAC8__PM_ACT_MSK 0x08u
#define IDAC8_2_viDAC8__PM_STBY_CFG CYREG_PM_STBY_CFG8
#define IDAC8_2_viDAC8__PM_STBY_MSK 0x08u
#define IDAC8_2_viDAC8__STROBE CYREG_DAC3_STROBE
#define IDAC8_2_viDAC8__SW0 CYREG_DAC3_SW0
#define IDAC8_2_viDAC8__SW2 CYREG_DAC3_SW2
#define IDAC8_2_viDAC8__SW3 CYREG_DAC3_SW3
#define IDAC8_2_viDAC8__SW4 CYREG_DAC3_SW4
#define IDAC8_2_viDAC8__TR CYREG_DAC3_TR
#define IDAC8_2_viDAC8__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DAC3_M1
#define IDAC8_2_viDAC8__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DAC3_M2
#define IDAC8_2_viDAC8__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DAC3_M3
#define IDAC8_2_viDAC8__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DAC3_M4
#define IDAC8_2_viDAC8__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DAC3_M5
#define IDAC8_2_viDAC8__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DAC3_M6
#define IDAC8_2_viDAC8__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DAC3_M7
#define IDAC8_2_viDAC8__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DAC3_M8
#define IDAC8_2_viDAC8__TST CYREG_DAC3_TST

/* pin_iSink */
#define pin_iSink__0__MASK 0x02u
#define pin_iSink__0__PC CYREG_PRT3_PC1
#define pin_iSink__0__PORT 3u
#define pin_iSink__0__SHIFT 1
#define pin_iSink__AG CYREG_PRT3_AG
#define pin_iSink__AMUX CYREG_PRT3_AMUX
#define pin_iSink__BIE CYREG_PRT3_BIE
#define pin_iSink__BIT_MASK CYREG_PRT3_BIT_MASK
#define pin_iSink__BYP CYREG_PRT3_BYP
#define pin_iSink__CTL CYREG_PRT3_CTL
#define pin_iSink__DM0 CYREG_PRT3_DM0
#define pin_iSink__DM1 CYREG_PRT3_DM1
#define pin_iSink__DM2 CYREG_PRT3_DM2
#define pin_iSink__DR CYREG_PRT3_DR
#define pin_iSink__INP_DIS CYREG_PRT3_INP_DIS
#define pin_iSink__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define pin_iSink__LCD_EN CYREG_PRT3_LCD_EN
#define pin_iSink__MASK 0x02u
#define pin_iSink__PORT 3u
#define pin_iSink__PRT CYREG_PRT3_PRT
#define pin_iSink__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define pin_iSink__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define pin_iSink__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define pin_iSink__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define pin_iSink__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define pin_iSink__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define pin_iSink__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define pin_iSink__PS CYREG_PRT3_PS
#define pin_iSink__SHIFT 1
#define pin_iSink__SLW CYREG_PRT3_SLW

/* Pin_StimSel */
#define Pin_StimSel__0__MASK 0x04u
#define Pin_StimSel__0__PC CYREG_PRT12_PC2
#define Pin_StimSel__0__PORT 12u
#define Pin_StimSel__0__SHIFT 2
#define Pin_StimSel__1__MASK 0x08u
#define Pin_StimSel__1__PC CYREG_PRT12_PC3
#define Pin_StimSel__1__PORT 12u
#define Pin_StimSel__1__SHIFT 3
#define Pin_StimSel__AG CYREG_PRT12_AG
#define Pin_StimSel__BIE CYREG_PRT12_BIE
#define Pin_StimSel__BIT_MASK CYREG_PRT12_BIT_MASK
#define Pin_StimSel__BYP CYREG_PRT12_BYP
#define Pin_StimSel__DM0 CYREG_PRT12_DM0
#define Pin_StimSel__DM1 CYREG_PRT12_DM1
#define Pin_StimSel__DM2 CYREG_PRT12_DM2
#define Pin_StimSel__DR CYREG_PRT12_DR
#define Pin_StimSel__INP_DIS CYREG_PRT12_INP_DIS
#define Pin_StimSel__MASK 0x0Cu
#define Pin_StimSel__PORT 12u
#define Pin_StimSel__PRT CYREG_PRT12_PRT
#define Pin_StimSel__PRTDSI__DBL_SYNC_IN CYREG_PRT12_DBL_SYNC_IN
#define Pin_StimSel__PRTDSI__OE_SEL0 CYREG_PRT12_OE_SEL0
#define Pin_StimSel__PRTDSI__OE_SEL1 CYREG_PRT12_OE_SEL1
#define Pin_StimSel__PRTDSI__OUT_SEL0 CYREG_PRT12_OUT_SEL0
#define Pin_StimSel__PRTDSI__OUT_SEL1 CYREG_PRT12_OUT_SEL1
#define Pin_StimSel__PRTDSI__SYNC_OUT CYREG_PRT12_SYNC_OUT
#define Pin_StimSel__PS CYREG_PRT12_PS
#define Pin_StimSel__SHIFT 2
#define Pin_StimSel__SIO_CFG CYREG_PRT12_SIO_CFG
#define Pin_StimSel__SIO_DIFF CYREG_PRT12_SIO_DIFF
#define Pin_StimSel__SIO_HYST_EN CYREG_PRT12_SIO_HYST_EN
#define Pin_StimSel__SIO_REG_HIFREQ CYREG_PRT12_SIO_REG_HIFREQ
#define Pin_StimSel__SLW CYREG_PRT12_SLW

/* pin_iSource */
#define pin_iSource__0__MASK 0x01u
#define pin_iSource__0__PC CYREG_PRT3_PC0
#define pin_iSource__0__PORT 3u
#define pin_iSource__0__SHIFT 0
#define pin_iSource__AG CYREG_PRT3_AG
#define pin_iSource__AMUX CYREG_PRT3_AMUX
#define pin_iSource__BIE CYREG_PRT3_BIE
#define pin_iSource__BIT_MASK CYREG_PRT3_BIT_MASK
#define pin_iSource__BYP CYREG_PRT3_BYP
#define pin_iSource__CTL CYREG_PRT3_CTL
#define pin_iSource__DM0 CYREG_PRT3_DM0
#define pin_iSource__DM1 CYREG_PRT3_DM1
#define pin_iSource__DM2 CYREG_PRT3_DM2
#define pin_iSource__DR CYREG_PRT3_DR
#define pin_iSource__INP_DIS CYREG_PRT3_INP_DIS
#define pin_iSource__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define pin_iSource__LCD_EN CYREG_PRT3_LCD_EN
#define pin_iSource__MASK 0x01u
#define pin_iSource__PORT 3u
#define pin_iSource__PRT CYREG_PRT3_PRT
#define pin_iSource__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define pin_iSource__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define pin_iSource__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define pin_iSource__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define pin_iSource__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define pin_iSource__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define pin_iSource__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define pin_iSource__PS CYREG_PRT3_PS
#define pin_iSource__SHIFT 0
#define pin_iSource__SLW CYREG_PRT3_SLW

/* Control_Reg_StimSel */
#define Control_Reg_StimSel_Sync_ctrl_reg__0__MASK 0x01u
#define Control_Reg_StimSel_Sync_ctrl_reg__0__POS 0
#define Control_Reg_StimSel_Sync_ctrl_reg__1__MASK 0x02u
#define Control_Reg_StimSel_Sync_ctrl_reg__1__POS 1
#define Control_Reg_StimSel_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB05_06_ACTL
#define Control_Reg_StimSel_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB05_06_CTL
#define Control_Reg_StimSel_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB05_06_CTL
#define Control_Reg_StimSel_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB05_06_CTL
#define Control_Reg_StimSel_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG CYREG_B0_UDB05_06_CTL
#define Control_Reg_StimSel_Sync_ctrl_reg__16BIT_MASK_MASK_REG CYREG_B0_UDB05_06_MSK
#define Control_Reg_StimSel_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG CYREG_B0_UDB05_06_MSK
#define Control_Reg_StimSel_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG CYREG_B0_UDB05_06_MSK
#define Control_Reg_StimSel_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB05_06_MSK
#define Control_Reg_StimSel_Sync_ctrl_reg__CONTROL_AUX_CTL_REG CYREG_B0_UDB05_ACTL
#define Control_Reg_StimSel_Sync_ctrl_reg__CONTROL_REG CYREG_B0_UDB05_CTL
#define Control_Reg_StimSel_Sync_ctrl_reg__CONTROL_ST_REG CYREG_B0_UDB05_ST_CTL
#define Control_Reg_StimSel_Sync_ctrl_reg__COUNT_REG CYREG_B0_UDB05_CTL
#define Control_Reg_StimSel_Sync_ctrl_reg__COUNT_ST_REG CYREG_B0_UDB05_ST_CTL
#define Control_Reg_StimSel_Sync_ctrl_reg__MASK 0x03u
#define Control_Reg_StimSel_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB05_MSK_ACTL
#define Control_Reg_StimSel_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG CYREG_B0_UDB05_MSK_ACTL
#define Control_Reg_StimSel_Sync_ctrl_reg__PERIOD_REG CYREG_B0_UDB05_MSK

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
#define CYDEV_CONFIGURATION_COMPRESSED 0
#define CYDEV_CONFIGURATION_DMA 1
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_DMA
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
#define CYDEV_INTR_RISING 0x00000000u
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
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
