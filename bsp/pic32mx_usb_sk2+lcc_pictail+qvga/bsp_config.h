/*******************************************************************************
  Board Support Package Header File.

  Company:      
    Microchip Technology Inc.

  File Name:    
    bsp_config.h

  Summary:      
    Board Support Package Header file for PIC32MX USB Starter Kit II when used
    along with a Low-Cost Controllerless (LCC) Graphics PICtail Plus Daughter
    Board and a QVGA display.

  Description:
    This file contains constants, macros, type definitions and function
    declarations required by the for the PIC32MX USB Starter Kit II BSP when
    used along with a Low-Cost Controllerless (LCC) Graphics PICtail Plus
    Daughter Board and a QVGA display.
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
    /* SWITCH 1 */
     BSP_SWITCH_1 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_6/*DOM-IGNORE-END*/,
                                                                          
    /* SWITCH 2 */                                                        
     BSP_SWITCH_2 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_7/*DOM-IGNORE-END*/,

    /* SWITCH 3 */
     BSP_SWITCH_3 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_13/*DOM-IGNORE-END*/

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
    /* LED 1 */
    BSP_LED_1 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_0/*DOM-IGNORE-END*/,
                                                                      
    /* LED 2 */                                                       
    BSP_LED_2 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_1/*DOM-IGNORE-END*/,
                                                                      
    /* LED 3 */                                                       
    BSP_LED_3 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_2/*DOM-IGNORE-END*/,

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
    BSP_LED_STATE_OFF = /*DOM-IGNORE-BEGIN*/0,/*DOM-IGNORE-END*/

    /* LED State is off */
    BSP_LED_STATE_ON = /*DOM-IGNORE-BEGIN*/1,/*DOM-IGNORE-END*/

} BSP_LED_STATE;


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


#include <xc.h>
// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* LCD Display Pin Constants

  Summary:
    Defines the constants which identifies LCD Display pins

  Description:
    These constants identifies LCD Display pins
*/

#define GFX_USE_DISPLAY_CONTROLLER_LCC

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

// Definitions for FLASH CS pin
#define DisplayFlashConfig()
#define DisplayFlashEnable()
#define DisplayFlashDisable()

// Definitions for POWER ON pin
#define DisplayPowerConfig()
#define DisplayPowerOn()
#define DisplayPowerOff()

#define DRV_TOUCH_ADC10BIT_XPLUS_PORT        PORT_CHANNEL_B
#define DRV_TOUCH_ADC10BIT_XPLUS_PIN         0x00
#define DRV_TOUCH_ADC10BIT_XPLUS_PIN_MASK    0x0001

#define DRV_TOUCH_ADC10BIT_YPLUS_PORT        PORT_CHANNEL_B
#define DRV_TOUCH_ADC10BIT_YPLUS_PIN         0x01
#define DRV_TOUCH_ADC10BIT_YPLUS_PIN_MASK    0x0002

#define DRV_TOUCH_ADC10BIT_XMINUS_PORT       PORT_CHANNEL_D
#define DRV_TOUCH_ADC10BIT_XMINUS_PIN        0x09
#define DRV_TOUCH_ADC10BIT_XMINUS_PIN_MASK   0x0200

#define DRV_TOUCH_ADC10BIT_YMINUS_PORT       PORT_CHANNEL_B
#define DRV_TOUCH_ADC10BIT_YMINUS_PIN        0x09
#define DRV_TOUCH_ADC10BIT_YMINUS_PIN_MASK   0x0200

#define DRV_TOUCH_ADC10BIT_MUX_TYPE          ADC_MUX_A

// Potentiometer and Temperature sensor
#define ADC_TEMP		 ADC_CH0_POS_SAMPLEA_AN4

#define ADDRESS_RESISTIVE_TOUCH_VERSION	(unsigned long)0xFFFFFFFE
#define ADDRESS_RESISTIVE_TOUCH_ULX   (unsigned long)0xFFFFFFFC
#define ADDRESS_RESISTIVE_TOUCH_ULY   (unsigned long)0xFFFFFFFA
#define ADDRESS_RESISTIVE_TOUCH_URX   (unsigned long)0xFFFFFFF8
#define ADDRESS_RESISTIVE_TOUCH_URY   (unsigned long)0xFFFFFFF6

#define ADDRESS_RESISTIVE_TOUCH_LLX   (unsigned long)0xFFFFFFF4
#define ADDRESS_RESISTIVE_TOUCH_LLY   (unsigned long)0xFFFFFFF2
#define ADDRESS_RESISTIVE_TOUCH_LRX   (unsigned long)0xFFFFFFF0
#define ADDRESS_RESISTIVE_TOUCH_LRY   (unsigned long)0xFFFFFFEE

#define SST25_CS_TRIS   TRISDbits.TRISD1
#define SST25_CS_LAT    LATDbits.LATD1

#define SST25_SPI_CHANNEL SPI_ID_1

#if defined(__PIC32MX__)
/*Macros for timing signals*/
#define DATA_ENABLE      LATDbits.LATD2
#define DATA_ENABLE_TRIS TRISDbits.TRISD2
#define HSYNC            LATBbits.LATB8
#define HSYNC_TRIS       TRISBbits.TRISB8
#define VSYNC            LATCbits.LATC3
#define VSYNC_TRIS       TRISCbits.TRISC3

/*Macros for LCD IO*/
#define BACKLIGHT      LATDbits.LATD3
#define BACKLIGHT_TRIS TRISDbits.TRISD3
#define LCD_RESET      LATCbits.LATC1
#define LCD_RESET_TRIS TRISCbits.TRISC1
#define LCD_CS         LATCbits.LATC2
#define LCD_CS_TRIS    TRISCbits.TRISC2
#define LCD_DC         LATBbits.LATB3
#define LCD_DC_TRIS    TRISBbits.TRISB3
#else
#define BACKLIGHT      LATJbits.LATJ6
#define BACKLIGHT_TRIS TRISJbits.TRISJ6
#define VSYNC            LATDbits.LATD15
#define VSYNC_TRIS       TRISDbits.TRISD15
#define LCD_CS         LATBbits.LATB12
#define LCD_CS_TRIS    TRISBbits.TRISB12
#define DATA_ENABLE      LATJbits.LATJ0
#define DATA_ENABLE_TRIS TRISJbits.TRISJ0
#define LCD_RESET      LATBbits.LATB11
#define LCD_RESET_TRIS TRISBbits.TRISB11
#define HSYNC            LATHbits.LATH15
#define HSYNC_TRIS       TRISHbits.TRISH15
#endif
/*Macros for External SRAM*/
#define SRAM_CS       LATFbits.LATF13
#define SRAM_TRIS     TRISFbits.TRISF13

#define ADDR15        LATAbits.LATA15
#define ADDR15_TRIS   TRISAbits.TRISA15
#define ADDR16        LATDbits.LATD8
#define ADDR16_TRIS   TRISDbits.TRISD8
#define ADDR17        LATEbits.LATE9
#define ADDR17_TRIS   TRISEbits.TRISE9
#define ADDR18        LATFbits.LATF12
#define ADDR18_TRIS   TRISFbits.TRISF12

#define PIXELCLOCK        LATDbits.LATD4
#define PIXELCLOCK_TRIS   TRISDbits.TRISD4

#define PMP_INTERRUPT IEC1bits.PMPIE
#define  PMADDR_OVERFLOW               32768

// *****************************************************************************
// *****************************************************************************
// Section: Interface Routines
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Function: void BSP_Initialize(void)

  Summary:
    Performs the neccassary actions to initialize a board

  Description:
    This routine performs the neccassary actions to initialize a board
*/

void BSP_Initialize(void);

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

#define TCON_CS_LAT      LATCbits.LATC2
		#define TCON_CS_TRIS     TRISCbits.TRISC2
		#define TCON_CS_DIG()

	        #if defined(__32MX795F512L__)
		#define TCON_SCL_LAT     LATDbits.LATD10
		#define TCON_SCL_TRIS    TRISDbits.TRISD10
		#define TCON_SCL_DIG()

		#define TCON_SDO_LAT     LATDbits.LATD0
		#define TCON_SDO_TRIS    TRISDbits.TRISD0
		#define TCON_SDO_DIG()   1;
	        #else
		#define TCON_SCL_LAT     LATFbits.LATF6
		#define TCON_SCL_TRIS    TRISFbits.TRISF6
		#define TCON_SCL_DIG()

		#define TCON_SDO_LAT     LATFbits.LATF8
		#define TCON_SDO_TRIS    TRISFbits.TRISF8
		#define TCON_SDO_DIG()   1;
                #endif

		#define TCON_DC_LAT      LATBbits.LATB3
		#define TCON_DC_TRIS     TRISBbits.TRISB3
		#define TCON_DC_DIG()    1;


#endif //BSP_CONFIG_H

/*******************************************************************************
 End of File
*/
