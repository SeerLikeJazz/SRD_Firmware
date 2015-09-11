/*******************************************************************************
* File Name: VDAC8_2.h  
* Version 1.70
*
*  Description:
*    This file contains the function prototypes and constants used in
*    the 8-bit Voltage DAC (vDAC8) User Module.
*
*   Note:
*     
*
********************************************************************************
* Copyright 2008-2011, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_VDAC8_VDAC8_2_H) 
#define CY_VDAC8_VDAC8_2_H

#include "cytypes.h"
#include "cyfitter.h"



/***************************************
*       Type defines
***************************************/

/* Sleep Mode API Support */
typedef struct VDAC8_2_backupStruct
{
    uint8 enableState; 
    uint8 data_value;
}VDAC8_2_backupStruct;


/***************************************
*        Function Prototypes 
***************************************/

void VDAC8_2_Start(void);
void VDAC8_2_Stop(void)            ;
void VDAC8_2_SetSpeed(uint8 speed) ;
void VDAC8_2_SetRange(uint8 range) ;
void VDAC8_2_SetValue(uint8 value) ;
void VDAC8_2_DacTrim(void)         ;
void VDAC8_2_Init(void)            ;
void VDAC8_2_Enable(void)          ;
void VDAC8_2_SaveConfig(void);
void VDAC8_2_RestoreConfig(void);
void VDAC8_2_Sleep(void);
void VDAC8_2_Wakeup(void)          ;
  
  
/***************************************
*            API Constants
***************************************/

/* SetRange constants */

#define VDAC8_2_RANGE_1V       0x00u
#define VDAC8_2_RANGE_4V       0x04u


/* Power setting for Start API  */
#define VDAC8_2_LOWSPEED       0x00u
#define VDAC8_2_HIGHSPEED      0x02u


/***************************************
*  Initialization Parameter Constants
***************************************/

 /* Default DAC range */
#define VDAC8_2_DEFAULT_RANGE    4
 /* Default DAC speed */
#define VDAC8_2_DEFAULT_SPEED    2
 /* Default Control */
#define VDAC8_2_DEFAULT_CNTL      0x00u
/* Default Strobe mode */
#define VDAC8_2_DEFAULT_STRB     0
 /* Initial DAC value */
#define VDAC8_2_DEFAULT_DATA     62
 /* Default Data Source */
#define VDAC8_2_DEFAULT_DATA_SRC 0


/***************************************
*              Registers        
***************************************/

#define VDAC8_2_CR0         (* (reg8 *) VDAC8_2_viDAC8__CR0 )
#define VDAC8_2_CR1         (* (reg8 *) VDAC8_2_viDAC8__CR1 )
#define VDAC8_2_Data        (* (reg8 *) VDAC8_2_viDAC8__D )
#define VDAC8_2_Data_PTR    (  (reg8 *) VDAC8_2_viDAC8__D )
#define VDAC8_2_Strobe      (* (reg8 *) VDAC8_2_viDAC8__STROBE )
#define VDAC8_2_SW0         (* (reg8 *) VDAC8_2_viDAC8__SW0 )
#define VDAC8_2_SW2         (* (reg8 *) VDAC8_2_viDAC8__SW2 )
#define VDAC8_2_SW3         (* (reg8 *) VDAC8_2_viDAC8__SW3 )
#define VDAC8_2_SW4         (* (reg8 *) VDAC8_2_viDAC8__SW4 )
#define VDAC8_2_TR          (* (reg8 *) VDAC8_2_viDAC8__TR )
/* Power manager */
#define VDAC8_2_PWRMGR      (* (reg8 *) VDAC8_2_viDAC8__PM_ACT_CFG )
  /* Standby Power manager */
#define VDAC8_2_STBY_PWRMGR (* (reg8 *) VDAC8_2_viDAC8__PM_STBY_CFG )


/***************************************
*         Register Constants       
***************************************/

/* CR0 vDac Control Register 0 definitions */

/* Bit Field  DAC_HS_MODE                  */
#define VDAC8_2_HS_MASK        0x02u
#define VDAC8_2_HS_LOWPOWER    0x00u
#define VDAC8_2_HS_HIGHSPEED   0x02u

/* Bit Field  DAC_MODE                  */
#define VDAC8_2_MODE_MASK      0x10u
#define VDAC8_2_MODE_V         0x00u
#define VDAC8_2_MODE_I         0x10u

/* Bit Field  DAC_RANGE                  */
#define VDAC8_2_RANGE_MASK     0x0Cu
#define VDAC8_2_RANGE_0        0x00u
#define VDAC8_2_RANGE_1        0x04u

/* CR1 iDac Control Register 1 definitions */

/* Bit Field  DAC_MX_DATA                  */
#define VDAC8_2_SRC_MASK       0x20u
#define VDAC8_2_SRC_REG        0x00u
#define VDAC8_2_SRC_UDB        0x20u

/* This bit enable reset from UDB array      */
#define VDAC8_2_RESET_MASK     0x10u
#define VDAC8_2_RESET_ENABLE   0x10u
#define VDAC8_2_RESET_DISABLE  0x00u

/* This bit enables data from DAC bus      */
#define VDAC8_2_DACBUS_MASK     0x20u
#define VDAC8_2_DACBUS_ENABLE   0x20u
#define VDAC8_2_DACBUS_DISABLE  0x00u

/* DAC STROBE Strobe Control Register definitions */

/* Bit Field  DAC_MX_STROBE                  */
#define VDAC8_2_STRB_MASK     0x08u
#define VDAC8_2_STRB_EN       0x08u
#define VDAC8_2_STRB_DIS      0x00u

/* PM_ACT_CFG (Active Power Mode CFG Register)     */ 
#define VDAC8_2_ACT_PWR_EN   VDAC8_2_viDAC8__PM_ACT_MSK
  /* Standby Power enable mask */
#define VDAC8_2_STBY_PWR_EN  VDAC8_2_viDAC8__PM_STBY_MSK


/*******************************************************************************
*              Trim    
* Note - VDAC trim values are stored in the "Customer Table" area in * Row 1 of
*the Hidden Flash.  There are 8 bytes of trim data for each VDAC block.
* The values are:
*       I Gain offset, min range, Sourcing
*       I Gain offset, min range, Sinking
*       I Gain offset, med range, Sourcing
*       I Gain offset, med range, Sinking
*       I Gain offset, max range, Sourcing
*       I Gain offset, max range, Sinking
*       V Gain offset, 1V range
*       V Gain offset, 4V range
*
* The data set for the 4 VDACs are arranged using a left side/right side
* approach:
*   Left 0, Left 1, Right 0, Right 1.
* When mapped to the VDAC0 thru VDAC3 as:
*   VDAC 0, VDAC 2, VDAC 1, VDAC 3
*******************************************************************************/
#define VDAC8_2_TRIM_M7_1V_RNG_OFFSET  0x06u
#define VDAC8_2_TRIM_M8_4V_RNG_OFFSET  0x07u
/*Constatnt to set DAC in current mode and turnoff output */
#define VDAC8_2_CUR_MODE_OUT_OFF       0x1Eu 
#define VDAC8_2_DAC_TRIM_BASE     (VDAC8_2_viDAC8__TRIM__M1)

#endif /* CY_VDAC8_VDAC8_2_H  */


/* [] END OF FILE */


