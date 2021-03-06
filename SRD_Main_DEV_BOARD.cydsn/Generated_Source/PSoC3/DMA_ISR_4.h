/*******************************************************************************
* File Name: DMA_ISR_4.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_ISR_DMA_ISR_4_H)
#define CY_ISR_DMA_ISR_4_H

#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void DMA_ISR_4_Start(void) ;
void DMA_ISR_4_StartEx(cyisraddress address) ;
void DMA_ISR_4_Stop(void) ;

CY_ISR_PROTO(DMA_ISR_4_Interrupt);

void DMA_ISR_4_SetVector(cyisraddress address) ;
cyisraddress DMA_ISR_4_GetVector(void) ;

void DMA_ISR_4_SetPriority(uint8 priority) ;
uint8 DMA_ISR_4_GetPriority(void) ;

void DMA_ISR_4_Enable(void) ;
uint8 DMA_ISR_4_GetState(void) ;
void DMA_ISR_4_Disable(void) ;

void DMA_ISR_4_SetPending(void) ;
void DMA_ISR_4_ClearPending(void) ;


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the DMA_ISR_4 ISR. */
#define DMA_ISR_4_INTC_VECTOR            ((reg16 *) DMA_ISR_4__INTC_VECT)

/* Address of the DMA_ISR_4 ISR priority. */
#define DMA_ISR_4_INTC_PRIOR             ((reg8 *) DMA_ISR_4__INTC_PRIOR_REG)

/* Priority of the DMA_ISR_4 interrupt. */
#define DMA_ISR_4_INTC_PRIOR_NUMBER      DMA_ISR_4__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable DMA_ISR_4 interrupt. */
#define DMA_ISR_4_INTC_SET_EN            ((reg8 *) DMA_ISR_4__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the DMA_ISR_4 interrupt. */
#define DMA_ISR_4_INTC_CLR_EN            ((reg8 *) DMA_ISR_4__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the DMA_ISR_4 interrupt state to pending. */
#define DMA_ISR_4_INTC_SET_PD            ((reg8 *) DMA_ISR_4__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the DMA_ISR_4 interrupt. */
#define DMA_ISR_4_INTC_CLR_PD            ((reg8 *) DMA_ISR_4__INTC_CLR_PD_REG)



#endif /* CY_ISR_DMA_ISR_4_H */


/* [] END OF FILE */
