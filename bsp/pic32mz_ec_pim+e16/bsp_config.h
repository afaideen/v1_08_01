/**************************************************************************
  Company:
    Microchip Technology Inc.
  File Name:
    bsp_config.h
  Summary:
    Board support configuration file.
  Description:
    Board support configuration file.
    
    This contains all the configuration that is required to be done for the
    application running on PIC32 USB starter kit                           
  **************************************************************************/

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
    Defines the switches available on this board.

  Description:
    This enumeration defines the switches available on this board.

  Remarks:
    None.
*/

typedef enum
{
    /* SWITCH 3 - Not connected for this PIM */
//     SWITCH_3 = PORTS_BIT_POS_6,

    /* SWITCH 4 */
     SWITCH_4 = PORTS_BIT_POS_8,

    /* SWITCH 5 */
     SWITCH_5 = PORTS_BIT_POS_7,

    /* SWITCH 6 */
     SWITCH_6 = PORTS_BIT_POS_13
}BSP_SWITCH;

// *****************************************************************************
/* BSP Switch state.

  Summary:
    Defines possible states of the switches on this board.

  Description:
    This enumeration defines the possible states of the switches on this board.

  Remarks:
    None.
*/

typedef enum
{
    /* Switch pressed */
    BSP_SWITCH_STATE_PRESSED = /*DOM-IGNORE-BEGIN*/0/*DOM-IGNORE-END*/,

   /* Switch not pressed */
    BSP_SWITCH_STATE_RELEASED = /*DOM-IGNORE-BEGIN*/1/*DOM-IGNORE-END*/

}BSP_SWITCH_STATE;

// *****************************************************************************
/* LED Number.

  Summary:
    Defines the LEDs available on this board.

  Description:
    This enumeration defines the LEDs available on this board.

  Remarks:
    None.
*/

typedef enum
{
    /* LED 3 */
    LED_3 = PORTS_BIT_POS_0,

    /* LED 4 */
    LED_4 = PORTS_BIT_POS_1,

    /* LED 5 */
    LED_5 = PORTS_BIT_POS_2,

    /* LED 6 */
    LED_6 = PORTS_BIT_POS_3,

    /* LED 7 */
    LED_7 = PORTS_BIT_POS_13,

    /* LED 8 */
    LED_8 = PORTS_BIT_POS_12,

    /* LED 9 */
    LED_9 = PORTS_BIT_POS_6,

    /* LED 10 */
    LED_10 = PORTS_BIT_POS_7
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
    BSP_LED_STATE_ON = /*DOM-IGNORE-BEGIN*/1/*DOM-IGNORE-END*/

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

BSP_SWITCH_STATE BSP_SwitchStateGet( BSP_SWITCH bspSwitch);

// *****************************************************************************
/* Function: 
    void BSP_SwitchS5Select(bool select);

  Summary:
    Enables operation of switch S5 on the board.
  
  Description:
    This function enables the operation of switch S5 on the boar. If this switch
    is enabled, then operation of switch D10 will be disabled (and vice versa).

  Precondition:
    BSP_Initialize() should have been called.

  Parameters:
    select - If true, switch S5 will be enabled and LED D10 will be disabled.
             If false, switch S5 will be disabled and LED D10 will be enabled.

  Returns:
    None.

  Example:
    <code>

    // Initialize the BSP
    BSP_Initialize();

    // Enaled operation of LED D10.
    BSP_SwitchS5Select(false);

    // Switch on LED D10 on the board 
    BSP_LEDOn(BSP_LED_10);
    
    </code>

  Remarks:
    None                                                                   
*/

void BSP_SwitchS5Select(bool select);

// *****************************************************************************
/* Function:
    bool BSP_USBVBUSPowerEnable(uint8_t port, bool enable)

  Summary:
    This function controls the USB VBUS supply.
  
  Description:
    This function controls the USB VBUS supply.

  Precondition:
    BSP_Initialize() should have been called.

  Parameters:
    port - This parameter is ignored.

    enable  - if true VBUS supply is enabled. If false VBUS supply is disabled.
  
  Returns:
    None.

  Example:
    <code>
    
    // Initialize the BSP
    BSP_Initialize();

    // Enable the power.
    BSP_USBVBUSPowerEnable(0, true);

    // Disable the power.
    BSP_USBVBUSPowerEnable(0, false);

    </code>

  Remarks:
    None.
*/

void BSP_USBVBUSPowerEnable(uint8_t port, bool enable);

// *****************************************************************************
/* Function:
    bool BSP_USBVBUSOverCurrentDetect(uint8_t port)

  Summary:
    Returns true if the over current is detected on the VBUS supply.
  
  Description:
    This function returns true if over current is detected on the VBUS supply.

  Precondition:
    BSP_Initialize() should have been called.

  Parameters:
    port - This parameter is ignored.
  
  Returns:
    true - VBUS supply over current is detected.
    false - VBUS supply over current is not detected.

  Example:
    <code>
    
    // Initialize the BSP
    BSP_Initialize();

    // Enable the power.
    BSP_USBVBUSPowerEnable(0, true);

    if(BSP_USBVBUSOverCurrentDetect(0))
    {
        // Disable the power.
        BSP_USBVBUSPowerEnable(0, false);
    }

    </code>

  Remarks:
    None.
*/

bool BSP_USBVBUSSwitchOverCurrentDetect(uint8_t port);

#endif //_BSP_CONFIG_H

/*******************************************************************************
 End of File
*/
