/*******************************************************************************
* File Name: RN_Reset.h  
* Version 1.90
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_RN_Reset_H) /* Pins RN_Reset_H */
#define CY_PINS_RN_Reset_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "RN_Reset_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    RN_Reset_Write(uint8 value) ;
void    RN_Reset_SetDriveMode(uint8 mode) ;
uint8   RN_Reset_ReadDataReg(void) ;
uint8   RN_Reset_Read(void) ;
uint8   RN_Reset_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define RN_Reset_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define RN_Reset_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define RN_Reset_DM_RES_UP          PIN_DM_RES_UP
#define RN_Reset_DM_RES_DWN         PIN_DM_RES_DWN
#define RN_Reset_DM_OD_LO           PIN_DM_OD_LO
#define RN_Reset_DM_OD_HI           PIN_DM_OD_HI
#define RN_Reset_DM_STRONG          PIN_DM_STRONG
#define RN_Reset_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define RN_Reset_MASK               RN_Reset__MASK
#define RN_Reset_SHIFT              RN_Reset__SHIFT
#define RN_Reset_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define RN_Reset_PS                     (* (reg8 *) RN_Reset__PS)
/* Data Register */
#define RN_Reset_DR                     (* (reg8 *) RN_Reset__DR)
/* Port Number */
#define RN_Reset_PRT_NUM                (* (reg8 *) RN_Reset__PRT) 
/* Connect to Analog Globals */                                                  
#define RN_Reset_AG                     (* (reg8 *) RN_Reset__AG)                       
/* Analog MUX bux enable */
#define RN_Reset_AMUX                   (* (reg8 *) RN_Reset__AMUX) 
/* Bidirectional Enable */                                                        
#define RN_Reset_BIE                    (* (reg8 *) RN_Reset__BIE)
/* Bit-mask for Aliased Register Access */
#define RN_Reset_BIT_MASK               (* (reg8 *) RN_Reset__BIT_MASK)
/* Bypass Enable */
#define RN_Reset_BYP                    (* (reg8 *) RN_Reset__BYP)
/* Port wide control signals */                                                   
#define RN_Reset_CTL                    (* (reg8 *) RN_Reset__CTL)
/* Drive Modes */
#define RN_Reset_DM0                    (* (reg8 *) RN_Reset__DM0) 
#define RN_Reset_DM1                    (* (reg8 *) RN_Reset__DM1)
#define RN_Reset_DM2                    (* (reg8 *) RN_Reset__DM2) 
/* Input Buffer Disable Override */
#define RN_Reset_INP_DIS                (* (reg8 *) RN_Reset__INP_DIS)
/* LCD Common or Segment Drive */
#define RN_Reset_LCD_COM_SEG            (* (reg8 *) RN_Reset__LCD_COM_SEG)
/* Enable Segment LCD */
#define RN_Reset_LCD_EN                 (* (reg8 *) RN_Reset__LCD_EN)
/* Slew Rate Control */
#define RN_Reset_SLW                    (* (reg8 *) RN_Reset__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define RN_Reset_PRTDSI__CAPS_SEL       (* (reg8 *) RN_Reset__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define RN_Reset_PRTDSI__DBL_SYNC_IN    (* (reg8 *) RN_Reset__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define RN_Reset_PRTDSI__OE_SEL0        (* (reg8 *) RN_Reset__PRTDSI__OE_SEL0) 
#define RN_Reset_PRTDSI__OE_SEL1        (* (reg8 *) RN_Reset__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define RN_Reset_PRTDSI__OUT_SEL0       (* (reg8 *) RN_Reset__PRTDSI__OUT_SEL0) 
#define RN_Reset_PRTDSI__OUT_SEL1       (* (reg8 *) RN_Reset__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define RN_Reset_PRTDSI__SYNC_OUT       (* (reg8 *) RN_Reset__PRTDSI__SYNC_OUT) 


#if defined(RN_Reset__INTSTAT)  /* Interrupt Registers */

    #define RN_Reset_INTSTAT                (* (reg8 *) RN_Reset__INTSTAT)
    #define RN_Reset_SNAP                   (* (reg8 *) RN_Reset__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins RN_Reset_H */


/* [] END OF FILE */
