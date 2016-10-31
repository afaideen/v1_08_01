/*******************************************************************************
  Board Support Package Header File.

  Company:      
    Microchip Technology Inc.

  File Name:    
    bsp_config.h

 Summary:
    Board Support Package Header file for Bluetooth Audio Development Kit with
	PIC32MZ Audio PIM.

 Description:
    This contains all the configuration that is required to be done for the
    application running on Bluetooth Audio Development Board (BTAD)
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
#include "peripheral/devcon/plib_devcon.h"

// *****************************************************************************
// *****************************************************************************
// Section: Constants
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
    /* SWITCH 1 */
     BSP_SWITCH_1 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_0/*DOM-IGNORE-END*/,

    /* SWITCH 2 */
     BSP_SWITCH_2 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_10/*DOM-IGNORE-END*/,

    /* SWITCH 3 */
     BSP_SWITCH_3 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_14/*DOM-IGNORE-END*/,

    /* SWITCH 4 */
     BSP_SWITCH_4 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_0/*DOM-IGNORE-END*/,

    /* SWITCH 5 */
     BSP_SWITCH_5 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_1/*DOM-IGNORE-END*/,
             
    /* SWITCH 6 */
     BSP_SWITCH_6 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_2/*DOM-IGNORE-END*/,

} BSP_SWITCH;

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

} BSP_SWITCH_STATE;

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
    /* LED D5 */
    BSP_LED_5 = 	/*DOM-IGNORE-BEGIN*/5/*DOM-IGNORE-END*/,
                                                                          
    /* LED D6 */                                                          
    BSP_LED_6 = 	/*DOM-IGNORE-BEGIN*/6/*DOM-IGNORE-END*/,
                                                                          
    /* LED D7 */                                                          
    BSP_LED_7 = 	/*DOM-IGNORE-BEGIN*/7/*DOM-IGNORE-END*/,
                                                                          
    /* LED D8 */                                                          
    BSP_LED_8 = 	/*DOM-IGNORE-BEGIN*/8/*DOM-IGNORE-END*/,

    /* LED D9 */
    BSP_LED_9 = 	/*DOM-IGNORE-BEGIN*/9/*DOM-IGNORE-END*/

} BSP_LED;

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
    BSP_LED_STATE_OFF = /*DOM-IGNORE-BEGIN*/1/*DOM-IGNORE-END*/,

    /* LED State is off */
    BSP_LED_STATE_ON = /*DOM-IGNORE-BEGIN*/0/*DOM-IGNORE-END*/

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
/* BSP USB Switch

  Summary:
    Defines the USB Switch options.

  Description:
    This enumeration defines the USB Switch options. A switch option can be
    selected by using BSP_USBSwitchSelect() function.

  Remarks:
    None.
*/

typedef enum
{
    /* Connects the PIC32MX USB module to the USB host connector */
	BSP_USB_HOST    = /*DOM-IGNORE-BEGIN*/0x10/*DOM-IGNORE-END*/,

    /* Connects the PIC32MX USB module to the USB device connector */
	BSP_USB_DEVICE  = /*DOM-IGNORE-BEGIN*/0x30/*DOM-IGNORE-END*/

} BSP_USB_SWITCH;


// *****************************************************************************
/* CODEC Pin Configuration

  Summary:
    Defines the Codec related Pin settings

  Description:
    Defines the Codec related Pin settings
*/

/*AK4642*/
#define BSP_CODEC_AK4642_POWER_DOWN_PIN_CLR SYS_PORTS_PinClear( PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_15)
#define BSP_CODEC_AK4642_POWER_DOWN_PIN_SET SYS_PORTS_PinSet( PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_15)

/*Ak4384*/
#define BSP_CODEC_AK4384_POWER_DOWN_PIN_CLR SYS_PORTS_PinClear( PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_15)
#define BSP_CODEC_AK4384_POWER_DOWN_PIN_SET SYS_PORTS_PinSet( PORTS_ID_0, PORT_CHANNEL_G, PORTS_BIT_POS_15)
#define BSP_CODEC_AK4384_AMPLIFIER_POWER_DOWN_PIN_CLR SYS_PORTS_PinClear( PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_5)
#define BSP_CODEC_AK4384_AMPLIFIER_POWER_DOWN_PIN_SET SYS_PORTS_PinSet( PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_5)
#define BSP_CODEC_AK4384_CONTROL_CLOCK_PIN_CLR SYS_PORTS_PinClear( PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_3)
#define BSP_CODEC_AK4384_CONTROL_CLOCK_PIN_SET SYS_PORTS_PinSet( PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_3)
#define BSP_CODEC_AK4384_CONTROL_CHIP_SELECT_PIN_CLR SYS_PORTS_PinClear( PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_2)
#define BSP_CODEC_AK4384_CONTROL_CHIP_SELECT_PIN_SET SYS_PORTS_PinSet( PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_2)
#define BSP_CODEC_AK4384_CONTROL_DATA_OUT_PIN_CLR SYS_PORTS_PinClear( PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_12)
#define BSP_CODEC_AK4384_CONTROL_DATA_OUT_PIN_SET SYS_PORTS_PinSet( PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_12)

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
    This function initializes the LED and Switch ports on the board. It disabled
    JTAG so that all LEDs connected to PORTA are available.  This function must
    be called by the user before using any APIs present on this BSP.  

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

    // Switch on LED5 on the board 
    BSP_LEDStateSet(BSP_LED_5, BSP_LED_STATE_ON);
    
    // Switch off LED6 on the board 
    BSP_LEDStateSet(BSP_LED_6, BSP_LED_STATE_OFF);

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

    // Check if LED6 is off
    if(BSP_LED_STATE_OFF == BSP_LEDStateGet(BSP_LED_6)
    {
        // Switch on the LED.
        BSP_LEDStateSet(BSP_LED_6, BSP_LED_STATE_ON);
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

    // Switch on LED5 on the board 
    BSP_LEDStateSet(BSP_LED_5, BSP_LED_STATE_ON);
    
    // Switch off LED6 on the board 
    BSP_LEDStateSet(BSP_LED_6, BSP_LED_STATE_OFF);

    // Toggle state of LED7
    BSP_LEDToggle(BSP_LED_7);
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

    // Switch on LED7 on the board 
    BSP_LEDOn(BSP_LED_7);
    
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

    // Switch off LED7 on the board 
    BSP_LEDOff(BSP_LED_7);
    
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
    void BSP_USBSwitchSelect(uint32_t value);

  Summary:
    Selects the USB Switch position on Bluetooth Audio board.

  Description:
    This function selects the USB Switch position on the Bluetooth Audio Board.
    This board features a 3 to 1 electronic USB switch that needs to be
    configured for either host or device operation.

  Preconditions:
    None

  Parameters:
    value - USB Switch position.

  Return Values:
    None.

  Example:
    <code>
    // Connect the PIC32MX USB module to the Bluetooth Audio Board USB Device
    // Connector.

    BSP_USBSwitchSelect(BSP_USB_DEVICE);
    </code>

  Remarks:
    None.
*/

void BSP_USBSwitchSelect(uint32_t value);

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

//Graphics Controller
#define GFX_USE_DISPLAY_CONTROLLER_OTM2201A


/* LCD Display Pin Constants

  Summary:
    Defines the constants which identifies LCD Display pins

  Description:
    These constants identifies LCD Display pins
*/

//#define BACKLIGHT_ENABLE_LEVEL      1
//#define BACKLIGHT_DISABLE_LEVEL     0

//Definitions for reset pin
#define DisplayResetConfig()        {PMAEN |= 0x0040; TRISCCLR = _TRISC_TRISC1_MASK;}
#define DisplayResetEnable()        {PMADDR &= 0xFFBF; LATCCLR =  _LATC_LATC1_MASK;}
#define DisplayResetDisable()       {PMADDR |= 0x0040; LATCSET =  _LATC_LATC1_MASK;}

// Definitions for RS pin
#define DisplayCmdDataConfig()      {PMAEN |= 0x0001; TRISJCLR = _TRISJ_TRISJ15_MASK;}
#define DisplaySetCommand()         {PMADDR &= 0xFFFE;LATJCLR = _LATJ_LATJ15_MASK;}
#define DisplaySetData()            {PMADDR |= 0x0001;LATJSET = _LATJ_LATJ15_MASK;}

// Definitions for CS pin
#define DisplayConfig()             {PMAEN |= 0x4000; TRISACLR = _TRISA_TRISA4_MASK;}
#define DisplayEnable()             {PMADDR &= 0xBFFF; LATACLR = _LATA_LATA4_MASK;}
#define DisplayDisable()            {PMADDR |= 0x4000; LATASET = _LATA_LATA4_MASK;}


// Definitions for backlight control pin
#define DisplayBacklightOff()
#define DisplayBacklightConfig()
#define DisplayBacklightOn()

// Definitions for FLASH CS pin
#define DisplayFlashConfig()
#define DisplayFlashEnable()
#define DisplayFlashDisable()

// Definitions for POWER ON pin
#define DisplayPowerConfig()
#define DisplayPowerOn()
#define DisplayPowerOff()

#define USE_GFX_PMP
#define PMP_DATA_SETUP_TIME         (1)
#define PMP_DATA_WAIT_TIME          (40)
#define PMP_DATA_HOLD_TIME          (1)

// *****************************************************************************


#endif //_BSP_CONFIG_H

/*******************************************************************************
 End of File
*/
