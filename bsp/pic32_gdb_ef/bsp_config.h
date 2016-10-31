/*******************************************************************************
  Board Support Package Header File.

  Company:      
    Microchip Technology Inc.

  File Name:    
    bsp_config.h

  Summary:
    Board Support Package implementation for PIC32MZ Lincoln Technologies 
    Solutions (LTS) Mango board.

  Description:
    This file contains routines that implement the board support package for
    PIC32MZ Lincoln Technologies Solutions (LTS) Mango board.
*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2016 released Microchip Technology Inc.  All rights reserved.

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
#include "system/ports/sys_ports.h"
#include "peripheral/ports/plib_ports.h"

// *****************************************************************************
// *****************************************************************************
// Section: Constants
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Graphics Display Timing Pin Constants

  Summary:
    Defines the constants which identifies Graphic Display timing pins

  Description:
    These constants identifies Graphic Display timing pins
*/

#define DATA_ENABLE      LATGbits.LATG7
#define DATA_ENABLE_TRIS TRISGbits.TRISG7
#define HSYNC            LATAbits.LATA7
#define HSYNC_TRIS       TRISAbits.TRISA7
#define VSYNC            LATAbits.LATA6
#define VSYNC_TRIS       TRISAbits.TRISA6

#define BACKLIGHT      LATBbits.LATB4
#define BACKLIGHT_TRIS TRISBbits.TRISB4
#define LCD_RESET      LATEbits.LATE8
#define LCD_RESET_TRIS TRISEbits.TRISE8
#define LCD_CS         LATAbits.LATA2
#define LCD_CS_TRIS    TRISAbits.TRISA2

#define USB_POWER 						LATDbits.LATD11
#define USB_POWER_TRIS 					TRISDbits.TRISD11
#define USB_BRIDGE_POWER_EN 			LATBbits.LATB13
#define USB_BRIDGE_POWER_EN_TRIS 		TRISBbits.TRISB13
#define USB_BRIDGE_RESET 				LATBbits.LATB3
#define USB_BRIDGE_RESET_TRIS 			TRISBbits.TRISB3
#define USB_SWITCH_SEL					LATAbits.LATA1
#define USB_SWITCH_SEL_TRIS				TRISAbits.TRISA1
#define USB_SWITCH_EN					LATFbits.LATF13
#define USB_SWITCH_EN_TRIS				TRISFbits.TRISF13


#define BACKLIGHT_ENABLE_LEVEL      1
#define BACKLIGHT_DISABLE_LEVEL     0

#define USE_TCON_MODULE 0
#define GFX_USE_TCON_CUSTOM

// *****************************************************************************
/* pixelclock Pin Constants

  Summary:
    Defines the constants which identifies PIXELCLOCK pins

  Description:
    These constants identifies PIXELCLOCK pins
*/

#define PIXELCLOCK        LATCbits.LATC3
#define PIXELCLOCK_TRIS   TRISCbits.TRISC3

#define _TouchScreenPacketReady()    1
#define _TouchScreenChipEnable()     LATDCLR = _LATD_LATD9_MASK
#define _TouchScreenChipDisable()    LATDSET = _LATD_LATD9_MASK
#define _TouchScreenChipDirection()  TRISDCLR = _TRISD_TRISD9_MASK

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
    /* Push button switch SW100 on LTS Guava */
     BSP_SWITCH_SW100 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_0/*DOM-IGNORE-END*/,

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
    /* LED B on LTS Board */
    BSP_LED_B = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_6/*DOM-IGNORE-END*/,

    /* LED R on LTS Board*/
    BSP_LED_R = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_7/*DOM-IGNORE-END*/,

    /* LED G on LTS Board */
    BSP_LED_G = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_9/*DOM-IGNORE-END*/,


}BSP_LED;

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

void BSP_USBVBUSPowerEnable(uint8_t port, bool enable);

bool BSP_USBVBUSSwitchOverCurrentDetect(uint8_t port);

#endif //_BSP_CONFIG_H

/*******************************************************************************
 End of File
*/
