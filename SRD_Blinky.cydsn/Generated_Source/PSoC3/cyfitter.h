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

/* LED_G */
#define LED_G__0__MASK 0x20u
#define LED_G__0__PC CYREG_PRT2_PC5
#define LED_G__0__PORT 2u
#define LED_G__0__SHIFT 5
#define LED_G__AG CYREG_PRT2_AG
#define LED_G__AMUX CYREG_PRT2_AMUX
#define LED_G__BIE CYREG_PRT2_BIE
#define LED_G__BIT_MASK CYREG_PRT2_BIT_MASK
#define LED_G__BYP CYREG_PRT2_BYP
#define LED_G__CTL CYREG_PRT2_CTL
#define LED_G__DM0 CYREG_PRT2_DM0
#define LED_G__DM1 CYREG_PRT2_DM1
#define LED_G__DM2 CYREG_PRT2_DM2
#define LED_G__DR CYREG_PRT2_DR
#define LED_G__INP_DIS CYREG_PRT2_INP_DIS
#define LED_G__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define LED_G__LCD_EN CYREG_PRT2_LCD_EN
#define LED_G__MASK 0x20u
#define LED_G__PORT 2u
#define LED_G__PRT CYREG_PRT2_PRT
#define LED_G__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define LED_G__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define LED_G__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define LED_G__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define LED_G__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define LED_G__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define LED_G__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define LED_G__PS CYREG_PRT2_PS
#define LED_G__SHIFT 5
#define LED_G__SLW CYREG_PRT2_SLW

/* LED_R */
#define LED_R__0__MASK 0x40u
#define LED_R__0__PC CYREG_PRT2_PC6
#define LED_R__0__PORT 2u
#define LED_R__0__SHIFT 6
#define LED_R__AG CYREG_PRT2_AG
#define LED_R__AMUX CYREG_PRT2_AMUX
#define LED_R__BIE CYREG_PRT2_BIE
#define LED_R__BIT_MASK CYREG_PRT2_BIT_MASK
#define LED_R__BYP CYREG_PRT2_BYP
#define LED_R__CTL CYREG_PRT2_CTL
#define LED_R__DM0 CYREG_PRT2_DM0
#define LED_R__DM1 CYREG_PRT2_DM1
#define LED_R__DM2 CYREG_PRT2_DM2
#define LED_R__DR CYREG_PRT2_DR
#define LED_R__INP_DIS CYREG_PRT2_INP_DIS
#define LED_R__LCD_COM_SEG CYREG_PRT2_LCD_COM_SEG
#define LED_R__LCD_EN CYREG_PRT2_LCD_EN
#define LED_R__MASK 0x40u
#define LED_R__PORT 2u
#define LED_R__PRT CYREG_PRT2_PRT
#define LED_R__PRTDSI__CAPS_SEL CYREG_PRT2_CAPS_SEL
#define LED_R__PRTDSI__DBL_SYNC_IN CYREG_PRT2_DBL_SYNC_IN
#define LED_R__PRTDSI__OE_SEL0 CYREG_PRT2_OE_SEL0
#define LED_R__PRTDSI__OE_SEL1 CYREG_PRT2_OE_SEL1
#define LED_R__PRTDSI__OUT_SEL0 CYREG_PRT2_OUT_SEL0
#define LED_R__PRTDSI__OUT_SEL1 CYREG_PRT2_OUT_SEL1
#define LED_R__PRTDSI__SYNC_OUT CYREG_PRT2_SYNC_OUT
#define LED_R__PS CYREG_PRT2_PS
#define LED_R__SHIFT 6
#define LED_R__SLW CYREG_PRT2_SLW

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
