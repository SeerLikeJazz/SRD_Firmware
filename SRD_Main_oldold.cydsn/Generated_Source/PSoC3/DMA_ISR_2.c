/*******************************************************************************
* File Name: DMA_ISR_2.c  
* Version 1.70
*
*  Description:
*   API for controlling the state of an interrupt.
*
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include <cydevice_trm.h>
#include <CyLib.h>
#include <DMA_ISR_2.h>

#if !defined(DMA_ISR_2__REMOVED) /* Check for removal by optimization */

/*******************************************************************************
*  Place your includes, defines and code here 
********************************************************************************/
/* `#START DMA_ISR_2_intc` */
#include <Parser.h>
#include <COMM_UART.h>
uint8 DMAIsr2IntCnt = 0;
volatile uint8 EOCInt = 0;
uint16 EOC = 0;
extern uint8 NumberOfChannels;
extern uint8 NumberOfChannels;
extern uint8 ShiftCnt;
extern uint8 tmpstr[];
extern uint16 BytesTransfer;
extern int CHCnt;
extern int ADCChannels[];
extern int DMA2TransferDone;
/* `#END` */


/*******************************************************************************
* Function Name: DMA_ISR_2_Start
********************************************************************************
*
* Summary:
*  Set up the interrupt and enable it.
*
* Parameters:  
*   None
*
* Return:
*   None
*
*******************************************************************************/
void DMA_ISR_2_Start(void) 
{
    /* For all we know the interrupt is active. */
    DMA_ISR_2_Disable();

    /* Set the ISR to point to the DMA_ISR_2 Interrupt. */
    DMA_ISR_2_SetVector(&DMA_ISR_2_Interrupt);

    /* Set the priority. */
    DMA_ISR_2_SetPriority((uint8)DMA_ISR_2_INTC_PRIOR_NUMBER);

    /* Enable it. */
    DMA_ISR_2_Enable();
}


/*******************************************************************************
* Function Name: DMA_ISR_2_StartEx
********************************************************************************
*
* Summary:
*  Set up the interrupt and enable it.
*
* Parameters:  
*   address: Address of the ISR to set in the interrupt vector table.
*
* Return:
*   None
*
*******************************************************************************/
void DMA_ISR_2_StartEx(cyisraddress address) 
{
    /* For all we know the interrupt is active. */
    DMA_ISR_2_Disable();

    /* Set the ISR to point to the DMA_ISR_2 Interrupt. */
    DMA_ISR_2_SetVector(address);

    /* Set the priority. */
    DMA_ISR_2_SetPriority((uint8)DMA_ISR_2_INTC_PRIOR_NUMBER);

    /* Enable it. */
    DMA_ISR_2_Enable();
}


/*******************************************************************************
* Function Name: DMA_ISR_2_Stop
********************************************************************************
*
* Summary:
*   Disables and removes the interrupt.
*
* Parameters:  
*   None
*
* Return:
*   None
*
*******************************************************************************/
void DMA_ISR_2_Stop(void) 
{
    /* Disable this interrupt. */
    DMA_ISR_2_Disable();
}


/*******************************************************************************
* Function Name: DMA_ISR_2_Interrupt
********************************************************************************
* Summary:
*   The default Interrupt Service Routine for DMA_ISR_2.
*
*   Add custom code between the coments to keep the next version of this file
*   from over writting your code.
*
* Parameters:  
*   None
*
* Return:
*   None
*
*******************************************************************************/
CY_ISR(DMA_ISR_2_Interrupt)
{
    /*  Place your Interrupt code here. */
    /* `#START DMA_ISR_2_Interrupt` */
    EOCInt++; 
	//DEBUG_UART_PutString("EOCINT\r\n");
    /* `#END` */

    /* PSoC3 ES1, ES2 RTC ISR PATCH  */ 
    #if(CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC3)
        #if((CYDEV_CHIP_REVISION_USED <= CYDEV_CHIP_REVISION_3A_ES2) && (DMA_ISR_2__ES2_PATCH ))      
            DMA_ISR_2_ISR_PATCH();
        #endif /* CYDEV_CHIP_REVISION_USED */
    #endif /* (CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC3) */
}


/*******************************************************************************
* Function Name: DMA_ISR_2_SetVector
********************************************************************************
*
* Summary:
*   Change the ISR vector for the Interrupt. Note calling DMA_ISR_2_Start
*   will override any effect this method would have had. To set the vector 
*   before the component has been started use DMA_ISR_2_StartEx instead.
*
* Parameters:
*   address: Address of the ISR to set in the interrupt vector table.
*
* Return:
*   None
*
*******************************************************************************/
void DMA_ISR_2_SetVector(cyisraddress address) 
{
    CY_SET_REG16(DMA_ISR_2_INTC_VECTOR, (uint16) address);
}


/*******************************************************************************
* Function Name: DMA_ISR_2_GetVector
********************************************************************************
*
* Summary:
*   Gets the "address" of the current ISR vector for the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   Address of the ISR in the interrupt vector table.
*
*******************************************************************************/
cyisraddress DMA_ISR_2_GetVector(void) 
{
    return (cyisraddress) CY_GET_REG16(DMA_ISR_2_INTC_VECTOR);
}


/*******************************************************************************
* Function Name: DMA_ISR_2_SetPriority
********************************************************************************
*
* Summary:
*   Sets the Priority of the Interrupt. Note calling DMA_ISR_2_Start
*   or DMA_ISR_2_StartEx will override any effect this method would 
*   have had. This method should only be called after DMA_ISR_2_Start or 
*   DMA_ISR_2_StartEx has been called. To set the initial
*   priority for the component use the cydwr file in the tool.
*
* Parameters:
*   priority: Priority of the interrupt. 0 - 7, 0 being the highest.
*
* Return:
*   None
*
*******************************************************************************/
void DMA_ISR_2_SetPriority(uint8 priority) 
{
    *DMA_ISR_2_INTC_PRIOR = priority << 5;
}


/*******************************************************************************
* Function Name: DMA_ISR_2_GetPriority
********************************************************************************
*
* Summary:
*   Gets the Priority of the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   Priority of the interrupt. 0 - 7, 0 being the highest.
*
*******************************************************************************/
uint8 DMA_ISR_2_GetPriority(void) 
{
    uint8 priority;


    priority = *DMA_ISR_2_INTC_PRIOR >> 5;

    return priority;
}


/*******************************************************************************
* Function Name: DMA_ISR_2_Enable
********************************************************************************
*
* Summary:
*   Enables the interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void DMA_ISR_2_Enable(void) 
{
    /* Enable the general interrupt. */
    *DMA_ISR_2_INTC_SET_EN = DMA_ISR_2__INTC_MASK;
}


/*******************************************************************************
* Function Name: DMA_ISR_2_GetState
********************************************************************************
*
* Summary:
*   Gets the state (enabled, disabled) of the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   1 if enabled, 0 if disabled.
*
*******************************************************************************/
uint8 DMA_ISR_2_GetState(void) 
{
    /* Get the state of the general interrupt. */
    return ((*DMA_ISR_2_INTC_SET_EN & (uint8)DMA_ISR_2__INTC_MASK) != 0u) ? 1u:0u;
}


/*******************************************************************************
* Function Name: DMA_ISR_2_Disable
********************************************************************************
*
* Summary:
*   Disables the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void DMA_ISR_2_Disable(void) 
{
    /* Disable the general interrupt. */
    *DMA_ISR_2_INTC_CLR_EN = DMA_ISR_2__INTC_MASK;
}


/*******************************************************************************
* Function Name: DMA_ISR_2_SetPending
********************************************************************************
*
* Summary:
*   Causes the Interrupt to enter the pending state, a software method of
*   generating the interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void DMA_ISR_2_SetPending(void) 
{
    *DMA_ISR_2_INTC_SET_PD = DMA_ISR_2__INTC_MASK;
}


/*******************************************************************************
* Function Name: DMA_ISR_2_ClearPending
********************************************************************************
*
* Summary:
*   Clears a pending interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void DMA_ISR_2_ClearPending(void) 
{
    *DMA_ISR_2_INTC_CLR_PD = DMA_ISR_2__INTC_MASK;
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
