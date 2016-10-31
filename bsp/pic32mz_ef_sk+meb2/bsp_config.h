/*******************************************************************************
  Board Support Package Header File.

  Company:      
    Microchip Technology Inc.

  File Name:    
    bsp_config.h

  Summary:      
    Board Support Package Header File for PIC32MZ Embedded Connectivity (EC)
    Starter Kit in combination with the Multimedia Expansion Board II.

  Description:
    This file contains constants, macros, type definitions and function
    declarations required by the PIC32MZ Embedded Connectivity (EC) Starter Kit
    in combination with the Multimedia Expansion Board II.
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

#define DATA_ENABLE      LATBbits.LATB4
#define DATA_ENABLE_TRIS TRISBbits.TRISB4
#define HSYNC            LATBbits.LATB1
#define HSYNC_TRIS       TRISBbits.TRISB1
#define VSYNC            LATAbits.LATA9
#define VSYNC_TRIS       TRISAbits.TRISA9

// *****************************************************************************
/* LCD Display Pin Constants

  Summary:
    Defines the constants which identifies LCD Display pins

  Description:
    These constants identifies LCD Display pins
*/

#define LCD_RESET_PORT_CHANNEL      PORT_CHANNEL_J
#define LCD_RESET_PORT_BIT_POS      PORTS_BIT_POS_3

#define LCD_CS_PORT_CHANNEL         PORT_CHANNEL_J
#define LCD_CS_PORT_BIT_POS         PORTS_BIT_POS_6

#define LCD_BACKLIGHT_PORT_CHANNEL  PORT_CHANNEL_F
#define LCD_BACKLIGHT_BIT_POS       PORTS_BIT_POS_13

#define LCD_HSYNC_PORT_CHANNEL      PORT_CHANNEL_B
#define LCD_HSYNC_BIT_POS           PORTS_BIT_POS_1

#define LCD_VSYNC_PORT_CHANNEL      PORT_CHANNEL_A
#define LCD_VSYNC_BIT_POS           PORTS_BIT_POS_9

#define LCD_DE_PORT_CHANNEL         PORT_CHANNEL_B
#define LCD_DE_BIT_POS              PORTS_BIT_POS_4

#define BACKLIGHT      LATFbits.LATF13
#define BACKLIGHT_TRIS TRISFbits.TRISF13
#define LCD_RESET      LATJbits.LATJ3
#define LCD_RESET_TRIS TRISJbits.TRISJ3
#define LCD_CS         LATJbits.LATJ6
#define LCD_CS_TRIS    TRISJbits.TRISJ6


// Definitions for reset pin
#define DisplayResetConfig()        TRISCCLR = _TRISC_TRISC1_MASK
#define DisplayResetEnable()        LATCCLR = _LATC_LATC1_MASK
#define DisplayResetDisable()       LATCSET = _LATC_LATC1_MASK

// Definitions for RS pin
#define DisplayCmdDataConfig()      TRISCCLR = _TRISC_TRISC2_MASK
#define DisplaySetCommand()         LATCCLR = _LATC_LATC2_MASK
#define DisplaySetData()            LATCSET = _LATC_LATC2_MASK

// Definitions for CS pin
#define DisplayConfig()             TRISDCLR = _TRISD_TRISD10_MASK
#define DisplayEnable()             LATDCLR = _LATD_LATD10_MASK
#define DisplayDisable()            LATDSET = _LATD_LATD10_MASK

// Definitions for backlight control pin
#define DisplayBacklightConfig()    (TRISDbits.TRISD0 = 0)
#define DisplayBacklightOn()        (LATDbits.LATD0 = BACKLIGHT_ENABLE_LEVEL)
#define DisplayBacklightOff()       (LATDbits.LATD0 = BACKLIGHT_DISABLE_LEVEL)


#define ADDR16        LATKbits.LATK0
#define ADDR16_TRIS   TRISKbits.TRISK0
#define ADDR17        LATKbits.LATK3
#define ADDR17_TRIS   TRISKbits.TRISK3
#define ADDR18        LATKbits.LATK4
#define ADDR18_TRIS   TRISKbits.TRISK4
#define ADDR19        LATKbits.LATK5
#define ADDR19_TRIS   TRISKbits.TRISK5

/*Macros for External SRAM*/
#define SRAM_CS       LATJbits.LATJ4
#define SRAM_TRIS     TRISJbits.TRISJ4

#define PMP_INTERRUPT IEC4bits.PMPIE
#define  PMADDR_OVERFLOW               65536


#define USE_TCON_MODULE 0
#define GFX_USE_TCON_CUSTOM

// *****************************************************************************
/* pixelclock Pin Constants

  Summary:
    Defines the constants which identifies PIXELCLOCK pins

  Description:
    These constants identifies PIXELCLOCK pins
*/

#define PIXELCLOCK        LATDbits.LATD5
#define PIXELCLOCK_TRIS   TRISDbits.TRISD5

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
    /* SWITCH 1 */
     BSP_SWITCH_1 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_12/*DOM-IGNORE-END*/,

    /* SWITCH 2 */
     BSP_SWITCH_2 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_13/*DOM-IGNORE-END*/,

    /* SWITCH 3 */
     BSP_SWITCH_3 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_14/*DOM-IGNORE-END*/,

    /* Push button switch on MEB-II */
     BSP_SWITCH_S1 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_0/*DOM-IGNORE-END*/,

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
    /* LED 1 on SK */
    BSP_LED_1 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_0/*DOM-IGNORE-END*/,

    /* LED D3 on the MEB2 board */
    BSP_LED_D3 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_0/*DOM-IGNORE-END*/,

    /* LED 2 on SK */
    BSP_LED_2 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_1/*DOM-IGNORE-END*/,

    /* LED D5 on the MEB2 board */
    BSP_LED_D5 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_1/*DOM-IGNORE-END*/,

    /* LED 3 on SK */
    BSP_LED_3 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_2/*DOM-IGNORE-END*/,

    /* LED D4 on the MEB2 board */
    BSP_LED_D4 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_2/*DOM-IGNORE-END*/,

    /* LED D6 on the MEB2 board */
    BSP_LED_D6 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_6/*DOM-IGNORE-END*/,

    /* LED D7 on the MEB2 board */
    BSP_LED_D7 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_11/*DOM-IGNORE-END*/,

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
    void BSP_BluetoothPinStateSet(BSP_BT_STATE state);

  Summary:
    Sets to low/high the pin to the Bluetooth module.

  Description:
    This function sets the pin to the Bluetooth module to low/high.
    A reset to the bluetooth module needs to be given by making
    transition from low to high. This function helps in setting
    the interface line from the microcontroller to the bluetooth
    module low/high.

  Preconditions:
    None

  Parameters:
    None

  Return Values:
    None.

  Example:
    <code>

    BSP_BluetoothPinStateSet(BSP_BT_STATE_HIGH);
    </code>

  Remarks:
    None.
*/
void BSP_BluetoothPinStateSet(BSP_BT_STATE state);


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
