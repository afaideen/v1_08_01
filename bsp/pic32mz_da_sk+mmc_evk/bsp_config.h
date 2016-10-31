/*******************************************************************************
  Board Support Package Header File.

  Company:
    Microchip Technology Inc.

  File Name:
    bsp_config.h

  Summary:
    Board Support Package Header File for the PIC32MZ Graphics (DA) Starter
    Kit in combination with the Multimedia Conectivity Evaluation Kit.

  Description:
    This file contains constants, macros, type definitions and function
    declarations required by the Board Support Package for the  PIC32MZ
    Graphics (DA) Starter Kit in combination with the Multimedia Conectivity 
	Evaluation Kit.
*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2015 released Microchip Technology Inc.  All rights reserved.

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

#ifndef BSP_CONFIG_H
#define BSP_CONFIG_H
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
// Section: Included Files
// *****************************************************************************
// *****************************************************************************


// *****************************************************************************
// *****************************************************************************
// Section: Included Files
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
    /* Push buttons switch on Starter Kit */
     BSP_SWITCH_1,
     BSP_SWITCH_2,
     BSP_SWITCH_3,
     BSP_SWITCH_S4,
     BSP_SWITCH_S5,
     BSP_SWITCH_S6,
     BSP_SWITCH_S7,
     BSP_SWITCH_S8,
     BSP_SWITCH_S9,

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
    BSP_SWITCH_STATE_PRESSED =/*DOM-IGNORE-BEGIN*/ 0/*DOM-IGNORE-END*/,

   /* Switch not pressed */
    BSP_SWITCH_STATE_RELEASED =/*DOM-IGNORE-BEGIN*/ 1/*DOM-IGNORE-END*/

} BSP_SWITCH_STATE;

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
/* BT Pin State

  Summary:
    Enumerates the BT pin states.

  Description:
    This enumeration defines the supported BT pin states.

  Remarks:
    None.
*/
typedef enum
{
    /* BT pin is low */
    BSP_BT_STATE_LOW = /*DOM-IGNORE-BEGIN*/0/*DOM-IGNORE-END*/,

    /* BT pin is high */
    BSP_BT_STATE_HIGH = /*DOM-IGNORE-BEGIN*/1/*DOM-IGNORE-END*/

} BSP_BT_STATE;

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
    /* LED on the Starter Kit */
    BSP_LED_1,
    BSP_LED_2,
    BSP_LED_3,

    /* LED on the MMC board */
    BSP_LED_4,
    BSP_LED_5,
    BSP_LED_6,

}BSP_LED;

// *****************************************************************************
/* USB VBUS Switch State

  Summary:
    Defines the possible states of the USB VBUS Switch on this board

  Description:
    This enumeration defines the possible states of the USB VBUS Switch on this
    board.

  Remarks:
    None.
*/

typedef enum
{
    /* USB VBUS Switch disable */
    BSP_USB_VBUS_SWITCH_STATE_DISABLE = /*DOM-IGNORE-BEGIN*/0/*DOM-IGNORE-END*/,

    /* USB VBUS Switch enable */
    BSP_USB_VBUS_SWITCH_STATE_ENABLE = /*DOM-IGNORE-BEGIN*/1/*DOM-IGNORE-END*/

} BSP_USB_VBUS_SWITCH_STATE;


// *****************************************************************************
/* CODEC Pin Configuration

  Summary:
    Defines the Codec related Pin settings

  Description:
    Defines the Codec related Pin settings
*/

#define BSP_CODEC_AK4953_POWER_DOWN_PIN_CLR SYS_PORTS_PinClear( PORTS_ID_0, PORT_CHANNEL_H, PORTS_BIT_POS_3)
#define BSP_CODEC_AK4953_POWER_DOWN_PIN_SET SYS_PORTS_PinSet( PORTS_ID_0, PORT_CHANNEL_H, PORTS_BIT_POS_3)

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

    // Switch on LED1 on the board
    BSP_LEDStateSet(BSP_LED_1, BSP_LED_STATE_ON);

    // Switch off LED2 on the board
    BSP_LEDStateSet(BSP_LED_2, BSP_LED_STATE_OFF);

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

    // Check if LED2 is off
    if(BSP_LED_STATE_OFF == BSP_LEDStateGet(BSP_LED_2)
    {
        // Switch on the LED.
        BSP_LEDStateSet(BSP_LED_2, BSP_LED_STATE_ON);
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

    // Switch on LED1 on the board
    BSP_LEDStateSet(BSP_LED_1, BSP_LED_STATE_ON);

    // Switch off LED2 on the board
    BSP_LEDStateSet(BSP_LED_2, BSP_LED_STATE_OFF);

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

    // Switch on LED1 on the board
    BSP_LEDOn(BSP_LED_1);

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

    // Switch off LED1 on the board
    BSP_LEDOff(BSP_LED_1);

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
    if(BSP_SWITCH_STATE_PRESSED == BSP_SwitchStateGet(BSP_SWITCH_1))
    {
        // This means that Switch 1 on the board is pressed.
    }

    </code>

  Remarks:
    None
*/

BSP_SWITCH_STATE BSP_SwitchStateGet(BSP_SWITCH bspSwitch);

// *****************************************************************************
/* Function:
    void BSP_USBVBUSSwitchStateSet(BSP_USB_VBUS_SWITCH_STATE state);

  Summary:
    This function enables or disables the USB VBUS switch on the board.

  Description:
    This function enables or disables the VBUS switch on the board.

  Precondition:
    BSP_Initialize() should have been called.

  Parameters:
    state - If BSP_USB_VBUS_SWITCH_STATE_ENABLE, then the USB VBUS switch is
            enabled and VBUS is supplied on the USB.
            If BSP_USB_VBUS_SWITCH_STATE_DISABLE, then the USB VBUS
            switch is disabled and VBUS is not supplied on the USB.

  Returns:
    None.

  Example:
    <code>

    // Initialize the BSP
    BSP_Initialize();

    // Enable the VBUS switch.
    BSP_USBVBUSSwitchStateSet(BSP_USB_VBUS_SWITCH_STATE_ENABLE);

    </code>

  Remarks:
    None
*/

void BSP_USBVBUSSwitchStateSet(BSP_USB_VBUS_SWITCH_STATE state);

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
    bool BSP_USBVBUSSwitchOverCurrentDetect(uint8_t port)

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

    if(BSP_USBVBUSSwitchOverCurrentDetect(0))
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