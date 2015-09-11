/*******************************************************************************
* File Name: pin_IDAC1.h  
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

#if !defined(CY_PINS_pin_IDAC1_H) /* Pins pin_IDAC1_H */
#define CY_PINS_pin_IDAC1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "pin_IDAC1_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    pin_IDAC1_Write(uint8 value) ;
void    pin_IDAC1_SetDriveMode(uint8 mode) ;
uint8   pin_IDAC1_ReadDataReg(void) ;
uint8   pin_IDAC1_Read(void) ;
uint8   pin_IDAC1_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define pin_IDAC1_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define pin_IDAC1_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define pin_IDAC1_DM_RES_UP          PIN_DM_RES_UP
#define pin_IDAC1_DM_RES_DWN         PIN_DM_RES_DWN
#define pin_IDAC1_DM_OD_LO           PIN_DM_OD_LO
#define pin_IDAC1_DM_OD_HI           PIN_DM_OD_HI
#define pin_IDAC1_DM_STRONG          PIN_DM_STRONG
#define pin_IDAC1_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define pin_IDAC1_MASK               pin_IDAC1__MASK
#define pin_IDAC1_SHIFT              pin_IDAC1__SHIFT
#define pin_IDAC1_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define pin_IDAC1_PS                     (* (reg8 *) pin_IDAC1__PS)
/* Data Register */
#define pin_IDAC1_DR                     (* (reg8 *) pin_IDAC1__DR)
/* Port Number */
#define pin_IDAC1_PRT_NUM                (* (reg8 *) pin_IDAC1__PRT) 
/* Connect to Analog Globals */                                                  
#define pin_IDAC1_AG                     (* (reg8 *) pin_IDAC1__AG)                       
/* Analog MUX bux enable */
#define pin_IDAC1_AMUX                   (* (reg8 *) pin_IDAC1__AMUX) 
/* Bidirectional Enable */                                                        
#define pin_IDAC1_BIE                    (* (reg8 *) pin_IDAC1__BIE)
/* Bit-mask for Aliased Register Access */
#define pin_IDAC1_BIT_MASK               (* (reg8 *) pin_IDAC1__BIT_MASK)
/* Bypass Enable */
#define pin_IDAC1_BYP                    (* (reg8 *) pin_IDAC1__BYP)
/* Port wide control signals */                                                   
#define pin_IDAC1_CTL                    (* (reg8 *) pin_IDAC1__CTL)
/* Drive Modes */
#define pin_IDAC1_DM0                    (* (reg8 *) pin_IDAC1__DM0) 
#define pin_IDAC1_DM1                    (* (reg8 *) pin_IDAC1__DM1)
#define pin_IDAC1_DM2                    (* (reg8 *) pin_IDAC1__DM2) 
/* Input Buffer Disable Override */
#define pin_IDAC1_INP_DIS                (* (reg8 *) pin_IDAC1__INP_DIS)
/* LCD Common or Segment Drive */
#define pin_IDAC1_LCD_COM_SEG            (* (reg8 *) pin_IDAC1__LCD_COM_SEG)
/* Enable Segment LCD */
#define pin_IDAC1_LCD_EN                 (* (reg8 *) pin_IDAC1__LCD_EN)
/* Slew Rate Control */
#define pin_IDAC1_SLW                    (* (reg8 *) pin_IDAC1__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define pin_IDAC1_PRTDSI__CAPS_SEL       (* (reg8 *) pin_IDAC1__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define pin_IDAC1_PRTDSI__DBL_SYNC_IN    (* (reg8 *) pin_IDAC1__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define pin_IDAC1_PRTDSI__OE_SEL0        (* (reg8 *) pin_IDAC1__PRTDSI__OE_SEL0) 
#define pin_IDAC1_PRTDSI__OE_SEL1        (* (reg8 *) pin_IDAC1__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define pin_IDAC1_PRTDSI__OUT_SEL0       (* (reg8 *) pin_IDAC1__PRTDSI__OUT_SEL0) 
#define pin_IDAC1_PRTDSI__OUT_SEL1       (* (reg8 *) pin_IDAC1__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define pin_IDAC1_PRTDSI__SYNC_OUT       (* (reg8 *) pin_IDAC1__PRTDSI__SYNC_OUT) 


#if defined(pin_IDAC1__INTSTAT)  /* Interrupt Registers */

    #define pin_IDAC1_INTSTAT                (* (reg8 *) pin_IDAC1__INTSTAT)
    #define pin_IDAC1_SNAP                   (* (reg8 *) pin_IDAC1__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins pin_IDAC1_H */


/* [] END OF FILE */
