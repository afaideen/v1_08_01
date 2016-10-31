/*******************************************************************************
  Board Support Package Header File.

  Company:
    Microchip Technology Inc.

  File Name:
    bsp_config.h

  Summary:
    Board Support Package Header file for Explorer 16 Development Board when
    used with a PIC32MX470F512L Plug In Module (PIM).

  Description:
    This file contains constants, macros, type definitions and function
    declarations required by the Explorer 16 Development Board when used with a
    PIC32MX470F512L PIM.
*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
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

#ifndef _BSP_CONFIG_H
#define _BSP_CONFIG_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <xc.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include "peripheral/ports/plib_ports.h"

// *****************************************************************************
// *****************************************************************************
// Section: Constants and Type Definitions.
// *****************************************************************************
// *****************************************************************************



// *****************************************************************************
/* BSP Switch.

  Summary:
    Holds Switch numbers.

  Description:
    This enumeration defines the Switch numbers.

  Remarks:
    None.
*/

typedef enum
{
    /* SWITCH 3 */
     BSP_SWITCH_0 = PORTS_BIT_POS_6,

    /* SWITCH 4 */
     BSP_SWITCH_1 = PORTS_BIT_POS_13,

   /* Card Detect Signal */
     BSP_SWITCH_CD = PORTS_BIT_POS_0,       //PIC32MX470F512L

   /* Write Protect Signal */
     BSP_SWITCH_WP = PORTS_BIT_POS_1,       //PIC32MX470F512L

  /* Write Protect Signal */
     BSP_SDI_1 = PORTS_BIT_POS_4,       //PIC32MX470F512L

   /*SDI SPI signal*/
     BSP_SWITCH_5 =  PORTS_BIT_POS_5,       //PIC32MX470F512L

    /* SWITCH 5 */
     BSP_SWITCH_2 = PORTS_BIT_POS_7,

    /* SWITCH 6 */
     BSP_SWITCH_3 = PORTS_BIT_POS_7,

    /* SWITCH 6 */                       //PIC32MX470F512L
     BSP_SWITCH_12 = PORTS_BIT_POS_12,       //PIC32MX470F512L

    /* SWITCH 5 */
//   SWITCH_5 = PORTS_BIT_POS_1         //PIC32MX795F512L
     BSP_SWITCH_13 = PORTS_BIT_POS_13       //PIC32MX470F512L

}BSP_SWITCH;


// *****************************************************************************
/* BSP Switch state.

  Summary:
    Holds Switch status.

  Description:
    This enumeration defines the switch state.

  Remarks:
    None.
*/

typedef enum
{
    /* Switch pressed */
    BSP_SWITCH_STATE_PRESSED = 0,

   /* Switch not pressed */
    BSP_SWITCH_STATE_RELEASED = 1
}BSP_SWITCH_STATE;


// *****************************************************************************
/* LED Number.

  Summary:
    Holds LED numbers.

  Description:
    This enumeration defines the LED numbers.

  Remarks:
    None.
*/

typedef enum
{
    /* LED 3 */
    LED_0 = PORTS_BIT_POS_0,
    BSP_LED_3 = PORTS_BIT_POS_0,

    /* LED 4 */
    LED_1 = PORTS_BIT_POS_1,
    BSP_LED_4 = PORTS_BIT_POS_1,

    /* LED 5 */
    LED_2 = PORTS_BIT_POS_2,
    BSP_LED_5 = PORTS_BIT_POS_2,

    /* LED 6 */
    LED_3 = PORTS_BIT_POS_3,
    BSP_LED_6 = PORTS_BIT_POS_3,

    /* LED 7 */
    LED_4 = PORTS_BIT_POS_4,
    BSP_LED_7 = PORTS_BIT_POS_4,

    /* LED 8 */
    LED_5 = PORTS_BIT_POS_5,
    BSP_LED_8 = PORTS_BIT_POS_5,

    /* LED 9 */
    LED_6 = PORTS_BIT_POS_6,
    BSP_LED_9 = PORTS_BIT_POS_6,

    /* LED 10 */
    LED_7 = PORTS_BIT_POS_7,
    BSP_LED_10 = PORTS_BIT_POS_7
}BSP_LED;
// *****************************************************************************
/* LED State

  Summary:
    Enumerates the supported LED states.

  Description:
    This enumeration defines the supported LED states.

  Remarks:
    None.
*/

typedef enum
{
    /* LED State is on */
    BSP_LED_STATE_OFF = /*DOM-IGNORE-BEGIN*/0/*DOM-IGNORE-END*/,

    /* LED State is off */
    BSP_LED_STATE_ON = /*DOM-IGNORE-BEGIN*/1,/*DOM-IGNORE-END*/

} BSP_LED_STATE;
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

  Precondition:
    None.

  Parameters:
    None

  Returns:
    None.

  Example:
    <code>
    //Initialize the BSP
    BSP_Initialize();
    </code>

  Remarks:
    None
*/

void BSP_Initialize(void);

// *****************************************************************************
/* Function:
    void BSP_LEDStateSet(BSP_LED led, BSP_LED_STATE state);

  Summary:
    Controls the state of the LED.

  Description:
    This function allows the application to specify the state of the LED.

  Precondition:
    BSP_Initialize() should have been called.

  Parameters:
    led     - The LED to operate on.
    state   - The state to be set.

  Returns:
    None.

  Example:
    <code>

    // Initialize the BSP
    BSP_Initialize();

    // Switch on LED3 on the board
    BSP_LEDStateSet(BSP_LED_3, BSP_LED_STATE_ON);

    // Switch off LED4 on the board
    BSP_LEDStateSet(BSP_LED_4, BSP_LED_STATE_OFF);

    </code>

  Remarks:
    None
*/

void BSP_LEDStateSet(BSP_LED led, BSP_LED_STATE state);

// *****************************************************************************
/* Function:
    BSP_LED_STATE BSP_LEDStateGet(BSP_LED led);

  Summary:
    Returns the present state of the LED.

  Description:
    This function returns the present state of the LED.

  Precondition:
    BSP_Initialize() should have been called.

  Parameters:
    led - The LED to whose status needs to be obtained.

  Returns:
    The ON/OFF state of the LED.

  Example:
    <code>

    // Initialize the BSP
    BSP_Initialize();

    // Check if LED3 is off
    if(BSP_LED_STATE_OFF == BSP_LEDStateGet(BSP_LED_3)
    {
        // Switch on the LED.
        BSP_LEDStateSet(BSP_LED_3, BSP_LED_STATE_ON);
    }

    </code>

  Remarks:
    None
*/

BSP_LED_STATE BSP_LEDStateGet(BSP_LED led);

// *****************************************************************************
/* Function:
    void BSP_LEDToggle(BSP_LED led);

  Summary:
    Toggles the state of the LED between BSP_LED_STATE_ON and BSP_LED_STATE_OFF.

  Description:
    This function toggles the state of the LED between BSP_LED_STATE_ON and
    BSP_LED_STATE_OFF.

  Precondition:
    BSP_Initialize() should have been called.

  Parameters:
    led - The LED to toggle.

  Returns:
    None.

  Example:
    <code>

    // Initialize the BSP
    BSP_Initialize();

    // Switch on LED3 on the board
    BSP_LEDStateSet(BSP_LED_3, BSP_LED_STATE_ON);

    // Switch off LED4 on the board
    BSP_LEDStateSet(BSP_LED_4, BSP_LED_STATE_OFF);

    // Toggle state of LED3
    BSP_LEDToggle(BSP_LED_3);
    </code>

  Remarks:
    None
*/

void BSP_LEDToggle(BSP_LED led);

// *****************************************************************************
/* Function:
    void BSP_LEDOn(BSP_LED led);

  Summary:
    Switches ON the specified LED.

  Description:
    This function switches ON the specified LED.

  Precondition:
    BSP_Initialize() should have been called.

  Parameters:
    led - The LED to switch on.

  Returns:
    None.

  Example:
    <code>

    // Initialize the BSP
    BSP_Initialize();

    // Switch on LED D3 on the board
    BSP_LEDOn(BSP_LED_3);

    </code>

  Remarks:
    None
*/

void BSP_LEDOn(BSP_LED led);

// *****************************************************************************
/* Function:
    void BSP_LEDOff(BSP_LED led);

  Summary:
    Switches OFF the specified LED.

  Description:
    This function switches OFF the specified LED.

  Precondition:
    BSP_Initialize() should have been called.

  Parameters:
    led - The LED to switch off.

  Returns:
    None.

  Example:
    <code>

    // Initialize the BSP
    BSP_Initialize();

    // Switch off LED D3 on the board
    BSP_LEDOff(BSP_LED_3);

    </code>

  Remarks:
    None
*/

void BSP_LEDOff(BSP_LED led);

// *****************************************************************************
/* Function:
    BSP_SWITCH_STATE BSP_SwitchStateGet(BSP_SWITCH switch);

  Summary:
    Returns the present state (pressed or not pressed) of the specified switch.

  Description:
    This function returns the present state (pressed or not pressed) of the
    specified switch.

  Precondition:
    BSP_Initialize() should have been called.

  Parameters:
    switch  - The switch whose state needs to be obtained.

  Returns:
    The pressed released state of the switch.

  Example:
    <code>

    // Initialize the BSP
    BSP_Initialize();

    // Check the state of the switch.
    if(BSP_SWITCH_STATE_PRESSED == BSP_SwitchStateGet(BSP_SWITCH_3))
    {
        // This means that Switch 3 on the board is pressed.
    }

    </code>

  Remarks:
    None
*/

BSP_SWITCH_STATE BSP_SwitchStateGet(BSP_SWITCH bspSwitch);


#endif //_BSP_CONFIG_H

/*******************************************************************************
 End of File
*/
