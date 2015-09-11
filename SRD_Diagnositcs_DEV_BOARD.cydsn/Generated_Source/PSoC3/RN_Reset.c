/*******************************************************************************
* File Name: RN_Reset.c  
* Version 1.90
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "RN_Reset.h"


/*******************************************************************************
* Function Name: RN_Reset_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None 
*  
*******************************************************************************/
void RN_Reset_Write(uint8 value) 
{
    uint8 staticBits = (RN_Reset_DR & (uint8)(~RN_Reset_MASK));
    RN_Reset_DR = staticBits | ((uint8)(value << RN_Reset_SHIFT) & RN_Reset_MASK);
}


/*******************************************************************************
* Function Name: RN_Reset_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to this drive mode.
*
* Return: 
*  None
*
*******************************************************************************/
void RN_Reset_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(RN_Reset_0, mode);
}


/*******************************************************************************
* Function Name: RN_Reset_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro RN_Reset_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 RN_Reset_Read(void) 
{
    return (RN_Reset_PS & RN_Reset_MASK) >> RN_Reset_SHIFT;
}


/*******************************************************************************
* Function Name: RN_Reset_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 RN_Reset_ReadDataReg(void) 
{
    return (RN_Reset_DR & RN_Reset_MASK) >> RN_Reset_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(RN_Reset_INTSTAT) 

    /*******************************************************************************
    * Function Name: RN_Reset_ClearInterrupt
    ********************************************************************************
    *
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 RN_Reset_ClearInterrupt(void) 
    {
        return (RN_Reset_INTSTAT & RN_Reset_MASK) >> RN_Reset_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
