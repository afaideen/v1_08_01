/*******************************************************************************
  Board Support Package Implementation

  Company:
    Microchip Technology Inc.

  File Name:
    bsp_sys_init.c

  Summary:
    Board Support Package implementation for PIC32 Bluetooth Starter Kit.

  Description:
    This file contains routines that implement the board support package for
    PIC32 Bluetooth Starter Kit.
*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2014 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED AS IS WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include "bsp_config.h"

// *****************************************************************************
// *****************************************************************************
// *****************************************************************************
// Section: Interface Routines
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function: 
    void BSP_Initialize(void)

  Summary:
    Performs the necessary actions to initialize a board
  
  Description:
    This function initializes the LED and Switch ports on the board.  This
    function must be called by the user before using any APIs present on this
    BSP.  

  Remarks:
    Refer to bsp_config.h for usage information.
*/

void BSP_Initialize(void )
{
    /* Set the Initial state of LEDs */
    PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_A, BSP_LED_RED);
    PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_A, BSP_LED_GREEN);
    PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_C, BSP_LED_BLUE);

    /* BT Pin Settings */
    PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_B, PORTS_BIT_POS_5);
}

// *****************************************************************************
/* Function: 
    void BSP_LEDStateSet(BSP_LED led, BSP_LED_STATE state);

  Summary:
    Controls the state of the LED.
  
  Description:
    This function allows the application to specify the state of the LED.

  Remarks:
    None.
*/

void BSP_LEDStateSet(BSP_LED led, BSP_LED_STATE state)
{
	if(BSP_LED_BLUE == led)
    {
	    PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_C, led,state);
    }
    else
    {
        PLIB_PORTS_PinWrite(PORTS_ID_0, PORT_CHANNEL_A, led,state);
    }
}

// *****************************************************************************
/* Function: 
    void BSP_LEDOn(BSP_LED led);

  Summary:
    Switches ON the specified LED.
  
  Description:
    This function switches ON the specified LED.

  Remarks:
    None.
*/

void BSP_LEDOn(BSP_LED led)
{
	if(BSP_LED_BLUE == led)
    {
	    PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_C, led);
    }
    else
    {
        PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_A, led);
    }
}

// *****************************************************************************
/* Function: 
    void BSP_LEDOff(BSP_LED led);

  Summary:
    Switches OFF the specified LED.
  
  Description:
    This function switches OFF the specified LED.

  Remarks:
    None.
*/

void BSP_LEDOff(BSP_LED led)
{
	if(BSP_LED_BLUE == led)
    {
	    PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_C, led);
    }
    else
    {
        PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_A, led);
    }
}

// *****************************************************************************
/* Function: 
    BSP_LED_STATE BSP_LEDStateGet(BSP_LED led);

  Summary:
    Returns the present state of the LED.
  
  Description:
    This function returns the present state of the LED.

  Remarks:
    None.
*/

BSP_LED_STATE BSP_LEDStateGet (BSP_LED led)
{
    if(BSP_LED_BLUE == led)
    {
    	return PLIB_PORTS_PinGetLatched (PORTS_ID_0, PORT_CHANNEL_C, led);
    }
    else
    {
    	return PLIB_PORTS_PinGetLatched (PORTS_ID_0, PORT_CHANNEL_A, led);
    }
}

// *****************************************************************************
/* Function: 
    void BSP_LEDToggle(BSP_LED led);

  Summary:
    Toggles the state of the LED between BSP_LED_STATE_ON and BSP_LED_STATE_OFF.
  
  Description:
    This function toggles the state of the LED between BSP_LED_STATE_ON and
    BSP_LED_STATE_OFF.

  Remarks:
    None.
*/

void BSP_LEDToggle(BSP_LED led)
{
    if(BSP_LED_BLUE == led)
    {
	    PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_C, led);
    }
    else
    {
        PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_A, led);
    }
}

/*******************************************************************************
 End of File
*/
