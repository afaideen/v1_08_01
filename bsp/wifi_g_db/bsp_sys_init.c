/*******************************************************************************
  Board Support Package Implementation.

  Company:      
    Microchip Technology Inc.

  File Name:    
    bsp_sys_init.c

  Summary:      
    Board Support Package Implementation for Wi-Fi G Demo Board with a
    PIC32MX695F512H on it.

  Description:
    This file contains the implementation of the Board Support Package for the
    Wi-Fi G Demo Board with a PIC32MX695F512H on it.
*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2012 released Microchip Technology Inc.  All rights reserved.

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

/*******************************************************************************
  Function: void BSP_Initialize(void)

  Summary:
    Performs the necessary actions to initialize a board

  Description:
    This routine performs the necessary actions to initialize a board

  Remarks:
    Refer to bsp_config.h for usage information.

*/

void BSP_Initialize(void )
{
    PLIB_PORTS_PinClear( PORTS_ID_0, PORT_CHANNEL_E, BSP_LED_0 );
    PLIB_PORTS_PinClear( PORTS_ID_0, PORT_CHANNEL_F, BSP_LED_1 );
    PLIB_PORTS_PinClear( PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_0 );
}

// *****************************************************************************
/* Function: 
    void BSP_LEDStateSet(BSP_LED led, BSP_LED_STATE state);

  Summary:
    Controls the state of the LED.
  
  Description:
    This function allows the application to specify the state of the LED.

  Remarks:
    Refer to bsp_config.h for usage information.
*/

void BSP_LEDStateSet(BSP_LED led, BSP_LED_STATE state)
{
    /* Switch ON the LED */
    if (led == BSP_LED_0)
        PLIB_PORTS_PinWrite ( PORTS_ID_0 , PORT_CHANNEL_E , led, state );
    else if (led == BSP_LED_1)
        PLIB_PORTS_PinWrite ( PORTS_ID_0 , PORT_CHANNEL_F , led, state );
    else if (led == BSP_LED_2)
        PLIB_PORTS_PinWrite ( PORTS_ID_0 , PORT_CHANNEL_F , PORTS_BIT_POS_0, state );
}

// *****************************************************************************
/* Function: 
    void BSP_LEDOn(BSP_LED led);

  Summary:
    Switches ON the specified LED.
  
  Description:
    This function switches ON the specified LED.

  Remarks:
    Refer to bsp_config.h for usage information.
*/

void BSP_LEDOn(BSP_LED led)
{
    if (led == BSP_LED_0)
        PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_E, led);
    else if (led == BSP_LED_1)
        PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_F, led);
    else if (led == BSP_LED_2)
        PLIB_PORTS_PinSet(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_0);
}

// *****************************************************************************
/* Function: 
    void BSP_LEDOff(BSP_LED led);

  Summary:
    Switches OFF the specified LED.
  
  Description:
    This function switches OFF the specified LED.

  Remarks:
    Refer to bsp_config.h for usage information.
*/

void BSP_LEDOff(BSP_LED led)
{
    if (led == BSP_LED_0)
        PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_E, led);
    else if (led == BSP_LED_1)
        PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_F, led);
    else if (led == BSP_LED_2)
        PLIB_PORTS_PinClear(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_0);
}

// *****************************************************************************
/* Function: 
    BSP_LED_STATE BSP_LEDStateGet(BSP_LED led);

  Summary:
    Returns the present state of the LED.
  
  Description:
    This function returns the present state of the LED.

  Remarks:
    Refer to bsp_config.h for usage information.
*/

BSP_LED_STATE BSP_LEDStateGet(BSP_LED led)
{
    if (led == BSP_LED_0)
        return(PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_E, led));
    else if (led == BSP_LED_1)
        return(PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_F, led));
    else if (led == BSP_LED_2)
        return(PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_F, PORTS_BIT_POS_0));
    else
        return BSP_LED_STATE_OFF;
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
    Refer to bsp_config.h for usage information.
*/

void BSP_LEDToggle(BSP_LED led)
{
    if (led == BSP_LED_0)
        PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_E,led);
    else if (led == BSP_LED_1)
        PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_F,led);
    else if (led == BSP_LED_2)
        PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_F,PORTS_BIT_POS_0);
}

// *****************************************************************************
/* Function: 
    void BSP_SwitchStateGet(BSP_SWITCH switch);

  Summary:
    Returns the present state (pressed or not pressed) of the specified switch.
  
  Description:
    This function returns the present state (pressed or not pressed) of the
    specified switch.

  Remarks:
    Refer to bsp_config.h for usage information.
*/

BSP_SWITCH_STATE BSP_SwitchStateGet( BSP_SWITCH bspSwitch )
{
    return ( PLIB_PORTS_PinGet(PORTS_ID_0, PORT_CHANNEL_D, bspSwitch) );
}

/*******************************************************************************
 End of File
*/
