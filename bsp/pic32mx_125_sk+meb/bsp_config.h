/*******************************************************************************
  Board Support Package Header File.

  Company:      
    Microchip Technology Inc.

  File Name:    
    bsp_config.h

  Summary:      
    Board Support Package Header file for PIC32MX USB Starter Kit II when used
    along with the Multimedia Expansion Board.

  Description:
    This file contains constants, macros, type definitions and function
    declarations required by the PIC32MX USB Starter Kit II BSP when used along
    with the Multimedia Expansion Board.
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
#ifndef MEB_BSP_CONFIG_H
#define MEB_BSP_CONFIG_H

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
     BSP_SWITCH_1 =     /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_6/*DOM-IGNORE-END*/,
                                                                          
    /* SWITCH 2 */                                                        
     BSP_SWITCH_2 =     /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_7/*DOM-IGNORE-END*/,

    /* SWITCH 3 */
     BSP_SWITCH_3 =     /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_13/*DOM-IGNORE-END*/,

    /* MEB Fire Button S1 */
    BSP_MEB_SWITCH_S1 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_15 + 30/*DOM-IGNORE-END*/, 

    /* MEB Joystick Switch S2 Left */
    BSP_MEB_SWITCH_S2_LEFT  = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_0 + 30/*DOM-IGNORE-END*/,

    /* MEB Joystick Switch S2 Right */
    BSP_MEB_SWITCH_S2_RIGHT = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_4 + 30/*DOM-IGNORE-END*/,

    /* MEB Joystick Switch S2 Up */
    BSP_MEB_SWITCH_S2_UP    = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_1 + 30/*DOM-IGNORE-END*/,

    /* MEB Joystick Switch S2 Down */
    BSP_MEB_SWITCH_S2_DOWN  = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_3 + 30/*DOM-IGNORE-END*/

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

    /* MEB LED 1 */                                                       
    BSP_MEB_LED_1 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_1/*DOM-IGNORE-END*/,
                                                                      
    /* MEB LED 2 */                                                       
    BSP_MEB_LED_2 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_2/*DOM-IGNORE-END*/,
    
    /* MEB LED 3 */                                                       
    BSP_MEB_LED_3 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_3/*DOM-IGNORE-END*/,

    /* MEB LED 4 */                                                       
    BSP_MEB_LED_4 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_1 + 30/*DOM-IGNORE-END*/,
                                                                      
    /* MEB LED 5 */                                                       
    BSP_MEB_LED_5 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_2 + 30/*DOM-IGNORE-END*/,

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

#define GFX_USE_DISPLAY_CONTROLLER_SSD1926

/*********************************************************************
* HARDWARE DEVICES SELECTION
*********************************************************************/
#define      USE_XC2C64A                       // use the CPLD on the board
#define      USE_SST25VF016                    // use the 16 Mbit SPI Serial Flash 
#define      USE_TOUCHSCREEN_RESISTIVE         // use 4-wire resistive touch screen driver
#define      USE_ACCELEROMETER_BMA150          // use the accelerometer module
#define      USE_JOYSTICK_MEB                  // use the joystick

/*********************************************************************
* STARTER KIT SPECIFIC MACROS
*********************************************************************/
//#ifdef PIC_SK
#if defined (__PIC32MX__)
       #define PIC32_SK 
#elif defined (__dsPIC33E__) 
       #define dsPIC33E_SK
    #elif defined (__PIC24E__)
       #define PIC24E_SK
#endif
//#endif

/*********************************************************************
* MULTIMEDIA EXPANSION BOARD (MEB) SPECIFIC MACROS
*********************************************************************/
#define GFX_USE_DISPLAY_PANEL_TFT_G240320LTSW_118W_E

#define USE_GFX_PMP
#define PMP_DATA_SETUP_TIME                (18)
#define PMP_DATA_WAIT_TIME                 (82)  // based on the minimum pulse width requirement of CS signal of SSD1926
#define PMP_DATA_HOLD_TIME                 (0)


/*********************************************************************
* HARDWARE PROFILE FOR DISPLAY CONTROLLER INTERFACE
*********************************************************************/
/* 
    The following defines the different IO signals used to connect
    to the display controller.
    The hardware profile used is dependent on the PIC device 
    and the development board used.
    
    The following are used to control the following signals to the
    Display Controller:
    1. Reset Signal - this signal controls the reset pin of the display
            controller if available.
            
            Example:
            #define DisplayResetConfig()        TRISAbits.TRISA4 = 0    
            #define DisplayResetEnable()        LATAbits.LATA4 = 0
            #define DisplayResetDisable()       LATAbits.LATA4 = 1

    2. Command/Data Signal - this signal indicates to the controller
            if the command or data is being sent to the display controller.

            Example:
            #define DisplayCmdDataConfig()      TRISAbits.TRISA1 = 0
            #define DisplaySetCommand()         LATAbits.LATA1 = 0
            #define DisplaySetData()            LATAbits.LATA1 = 1

    3. Controller Chip Select Signal - this signal controls the chip select
            pin of the display controller is available.

            Example:
            #define DisplayConfig()             TRISBbits.TRISB15 = 0             
            #define DisplayEnable()             LATBbits.LATB15 = 0
            #define DisplayDisable()            LATBbits.LATB15 = 1
            
    4. Display Module Power Control Signal - this signal turns on or off
            the display module if available. In some cases, this can be an 
            IO port that will enable the power circuitry of your 
            display module.

            Example:
            #define DisplayPowerConfig()        TRISAbits.TRISA5 = 0       
            #define DisplayPowerOn()            LATAbits.LATA5 = 1           
            #define DisplayPowerOff()           LATAbits.LATA5 = 0

    5. Display Backlight Brightness Control - this controls the backlight
            brightness or ON or OFF states if available. If brightness is 
            controllable, this signal may be driven by some PWM signal. 

            Example:
            #define DisplayBacklightConfig()    TRISDbits.TRISD0 = 0  
            #define DisplayBacklightOn()        LATDbits.LATD0 = 0
            #define DisplayBacklightOff()       LATDbits.LATD0 = 1               
    
*/

// -----------------------------------
// When using GFX_PICTAIL_V3, GFX_PICTAIL_V3E, GFX_PICTAIL_LCC
// -----------------------------------
/*
    This development board will be compatible with:
    1. Explorer 16 (EXPLORER_16)
    2. PIC32 Starter Kits
       - PIC32 Starter Kit (DM320001)
       - PIC32 USB Starter Kit II (DM320003-2)
       - PIC32 Ethernet Starter Kit (DM320004)
*/

    // Depending on the display panel used, the backlight control may be
    // different. This portion sets up the correct backlight level to 
    // turn on or off the backlight.
        #define BACKLIGHT_ENABLE_LEVEL      0
        #define BACKLIGHT_DISABLE_LEVEL     1   

typedef enum
{
    ANSEL_DIGITAL = 0,
    ANSEL_ANALOG = 1
}ANSEL_BIT_STATE;
    
	#if defined(__dsPIC33E__) || defined(__PIC24E__)
		
	#define DisplayResetConfig()        ANSELAbits.ANSA10 = ANSEL_DIGITAL; TRISAbits.TRISA10 = 0    
        #define DisplayResetEnable()        LATAbits.LATA10 = 0 
        #define DisplayResetDisable()       LATAbits.LATA10 = 1

        // Definitions for RS pin
        #define DisplayCmdDataConfig()      ANSELBbits.ANSB10 = ANSEL_DIGITAL; TRISBbits.TRISB10 = 0
        #define DisplaySetCommand()         LATBbits.LATB10 = 0
        #define DisplaySetData()            LATBbits.LATB10 = 1

        // Definitions for CS pin
        #define DisplayConfig()             TRISGbits.TRISG13 = 0             
        #define DisplayEnable()             LATGbits.LATG13 = 0
        #define DisplayDisable()            LATGbits.LATG13 = 1

        // Definitions for FLASH CS pin
        #define DisplayFlashConfig()         
        #define DisplayFlashEnable()        
        #define DisplayFlashDisable()       

        // Definitions for POWER ON pin
        #define DisplayPowerConfig()        
        #define DisplayPowerOn()            
        #define DisplayPowerOff()  
        
         // Definitions for backlight control pin
        #define DisplayBacklightConfig()    (TRISDbits.TRISD0 = 0)  
        #define DisplayBacklightOn()        (LATDbits.LATD0 = BACKLIGHT_ENABLE_LEVEL)
        #define DisplayBacklightOff()       (LATDbits.LATD0 = BACKLIGHT_DISABLE_LEVEL)    
        
    #else
	     /********
	     * PIC32 will use the SET and CLR SFRs for the I/O.
	     * These are atomic settings that are recommended when
	     * modifying SFRs
	     ********/
	     // Definitions for reset pin
	     #define DisplayResetConfig()           TRISACLR = _TRISA_TRISA10_MASK    
	     #define DisplayResetEnable()           LATACLR = _LATA_LATA10_MASK
	     #define DisplayResetDisable()          LATASET = _LATA_LATA10_MASK
	
	     // Definitions for RS pin
	     #define DisplayCmdDataConfig()         //AD1PCFGSET = _AD1PCFG_PCFG10_MASK, TRISBCLR = _TRISB_TRISB10_MASK
	     #define DisplaySetCommand()            LATBCLR = _LATB_LATB10_MASK
	     #define DisplaySetData()               LATBSET = _LATB_LATB10_MASK
	
	     // Definitions for CS pin
	     #define DisplayConfig()                TRISGCLR = _TRISG_TRISG13_MASK
	     #define DisplayEnable()                LATGCLR = _LATG_LATG13_MASK
	     #define DisplayDisable()               LATGSET = _LATG_LATG13_MASK
	
	     // Definitions for FLASH CS pin
	     #define DisplayFlashConfig()          
	     #define DisplayFlashEnable()        
	     #define DisplayFlashDisable()       
	
	     // Definitions for POWER ON pin
	     #define DisplayPowerConfig()        
	     #define DisplayPowerOn()            
	     #define DisplayPowerOff()           
	
	    #define DisplayBacklightConfig()    (TRISDbits.TRISD0 = 0)  
	    #define DisplayBacklightOn()        (LATDbits.LATD0 = BACKLIGHT_ENABLE_LEVEL)
	    #define DisplayBacklightOff()       (LATDbits.LATD0 = BACKLIGHT_DISABLE_LEVEL)   
	    
	#endif

/*********************************************************************
* HARDWARE PROFILE FOR THE RESISTIVE TOUCHSCREEN 
*********************************************************************/
/*
	These are the hardware settings for the 4-wire resistive
	touch screen. There are two analog inputs and two digital I/Os
	needed. 
	
	This portion is divided into 3 components
	1. IO and ADC channels settings - sets up the IO pins used and the
	   ADC channel selected to evaluate the screen touch. 
	2. Touch Screen X and Y orientation settings - sets up the
	   x and y directions. This is dependent on how the resistive
	   touch signals (X-, Y-, X+, and Y+) are wired up to the 
	   IOs and ADC signals with respect to the orientation of the
	   screen. Based on these factors, we can control the calculation
	   of the touch by swapping x and/or y and flipping the x and/or y 
	   directions.
	3. Touch Screen Non-Volatile Memory Storage Macros - this defines
	   the non-volatile memory read, write and sector erase functions
	   to be used when reading or storing calibration values.    
	
	The resistive touch screen driver assumes the following: 
	1. X+ and Y+ are mapped to the A/D inputs
	2. X- and Y- are mapped to the pure digital I/Os
*/

#if defined (USE_TOUCHSCREEN_RESISTIVE)

    // ADC channel constants
    #define DRV_TOUCH_ADC10BIT_XPLUS_PORT        PORT_CHANNEL_B
    #define DRV_TOUCH_ADC10BIT_XPLUS_PIN         0x0B
    #define DRV_TOUCH_ADC10BIT_XPLUS_PIN_MASK    0x0800

    #define DRV_TOUCH_ADC10BIT_YPLUS_PORT        PORT_CHANNEL_B
    #define DRV_TOUCH_ADC10BIT_YPLUS_PIN         0x0E
    #define DRV_TOUCH_ADC10BIT_YPLUS_PIN_MASK    0x4000

    #define DRV_TOUCH_ADC10BIT_XMINUS_PORT       PORT_CHANNEL_B
    #define DRV_TOUCH_ADC10BIT_XMINUS_PIN        0x0D
    #define DRV_TOUCH_ADC10BIT_XMINUS_PIN_MASK   0x2000

    #define DRV_TOUCH_ADC10BIT_YMINUS_PORT       PORT_CHANNEL_B
    #define DRV_TOUCH_ADC10BIT_YMINUS_PIN        0x0C
    #define DRV_TOUCH_ADC10BIT_YMINUS_PIN_MASK   0x1000

    #define DRV_TOUCH_ADC10BIT_MUX_TYPE          ADC_MUX_A

/*********************************************************************
	* Touch Screen X and Y orientation
	*********************************************************************/
	/*********************************************************************
	Description:
		The usage of the resistive touch screen will be affected 
		by the way the hardware is mapped to the A/D channels that
		samples the touch. Since resistive touch is basically a 
		measurement of X and Y coordinates the following are macros
		that can modify the touch algorithm when sampling the 
		touch.
		TOUCHSCREEN_RESISTIVE_FLIP_X - will flip the x direction. 	
		TOUCHSCREEN_RESISTIVE_FLIP_Y - will flip the y direction.
		TOUCHSCREEN_RESISTIVE_SWAP_XY - will swap the x and y sampling.
		
		As long as the (X-,Y-) and (X+,Y+) are used consistently,
		and connected properly in hardware, the macros above
		can provide options to the user to align the touch screen
		to the screen orientation.

        Another macro that may affect the way the x and y measurement 
        are the following:
        TOUCHSCREEN_RESISTIVE_PRESS_THRESHOLD - determines how light the 
            touch on the screen. The smaller the  value the lighter the 
            touch. Valid range of values: 0-0x03ff
        TOUCHSCREEN_RESISTIVE_CALIBRATION_SCALE_FACTOR - this is the scale
            factor used to calculate the touch coefficients. The equation 
            to calculate the scale factor is:
               (1 << TOUCHSCREEN_RESISTIVE_CALIBRATION_SCALE_FACTOR).
            Valid values: 0 - 15 (most resistive touch screens will work 
                                  in the range of 5 - 7)

	*********************************************************************/

	/* ----------------------------------------- */
	#if defined (GFX_PICTAIL_V3)                || \
		  defined (GFX_PICTAIL_V3E)             || \
          defined (GFX_PICTAIL_LCC)             || \
		  defined (PIC24FJ256DA210_DEV_BOARD)   || \
	      defined (MEB_BOARD) 
	/* ----------------------------------------- */
		#if defined (GFX_USE_DISPLAY_PANEL_TFT_G240320LTSW_118W_E) 

			#if (DISP_ORIENTATION == 0)	
				#define TOUCHSCREEN_RESISTIVE_SWAP_XY
			#elif (DISP_ORIENTATION == 180)	
				#define TOUCHSCREEN_RESISTIVE_SWAP_XY
			#endif	

        #endif

	#endif
	
	/*********************************************************************
	* Touch Screen Non-Volatile Memory Storage Macros
	*********************************************************************/
        #define ADDRESS_RESISTIVE_TOUCH_VERSION	(unsigned long)0xFFFFFFFE
        #define ADDRESS_RESISTIVE_TOUCH_ULX   (unsigned long)0xFFFFFFFC
        #define ADDRESS_RESISTIVE_TOUCH_ULY   (unsigned long)0xFFFFFFFA
        #define ADDRESS_RESISTIVE_TOUCH_URX   (unsigned long)0xFFFFFFF8
        #define ADDRESS_RESISTIVE_TOUCH_URY   (unsigned long)0xFFFFFFF6

        #define ADDRESS_RESISTIVE_TOUCH_LLX   (unsigned long)0xFFFFFFF4
        #define ADDRESS_RESISTIVE_TOUCH_LLY   (unsigned long)0xFFFFFFF2
        #define ADDRESS_RESISTIVE_TOUCH_LRX   (unsigned long)0xFFFFFFF0
        #define ADDRESS_RESISTIVE_TOUCH_LRY   (unsigned long)0xFFFFFFEE

        // define the functions to call for the non-volatile memory
        // check out touch screen module for definitions of the following function pointers
        // used: NVM_READ_FUNC, NVM_WRITE_FUNC & NVM_SECTORERASE_FUNC
        #define NVMSectorErase					((NVM_SECTORERASE_FUNC)&SST25SectorErase)
    	#define NVMWrite 						((NVM_WRITE_FUNC)&SST25WriteWord)
    	#define NVMRead 						((NVM_READ_FUNC)&SST25ReadWord)

/*********************************************************************
* HARDWARE PROFILE FOR THE SPI FLASH MEMORY
*********************************************************************/

#if defined (USE_SST25VF016) 

        // this is dependent on the Starter Kit used
    	#if defined (PIC32_GP_SK) || defined (PIC32_SK) || defined (dsPIC33E_SK) || defined (PIC24E_SK)
            #define SST25_SPI_CHANNEL 2
    	#elif defined (PIC32_ETH_SK)
            #define SST25_SPI_CHANNEL 4
    	#endif
 #endif	

    /* Define all the SPI channels that will be used here.
       These will be used to determine how the SPI Driver (drv_spi)
       will be compiled.
    */
    #if (SST25_SPI_CHANNEL == 1)
        #define SPI_CHANNEL_1_ENABLE
    #elif (SST25_SPI_CHANNEL == 2)
        #define SPI_CHANNEL_2_ENABLE
    #elif (SST25_SPI_CHANNEL == 3)
        #define SPI_CHANNEL_3_ENABLE
    #elif (SST25_SPI_CHANNEL == 4)
        #define SPI_CHANNEL_4_ENABLE
    #endif


    // Chip Select, SCLK, SDI and SDO signals used 
        
        // this is dependent on the Starter Kit used
	    // define the CPLD SPI selection and chip select     
	    #if defined(__dsPIC33E__) || defined(__PIC24E__)
	    	#if (SST25_SPI_CHANNEL == 2)
		    	#define SPI_FLASH_CHANNEL   CPLD_SPI2
		    	#define SST25_CS_TRIS   TRISGbits.TRISG9    // SPI slave select, Input or Output selection.
				#define SST25_CS_LAT    LATGbits.LATG9      // SPI slave select I/O pin latch.
				#define SST25_CS_ANS    ANSELGbits.ANSG9    // SPI slave select I/O pin analog/digital selection.
				
				#define SST25_SCK_TRIS   TRISGbits.TRISG6    // SPI clock , Input or Output selection.
				#define SST25_SCK_LAT    LATGbits.LATG6      // SPI clock, I/O pin latch.
				#define SST25_SCK_ANS    ANSELGbits.ANSG6    // SPI clock , I/O pin analog/digital selection.
				
				#define SST25_SDO_TRIS   TRISGbits.TRISG8    // SPI data out , Input or Output selection.
				#define SST25_SDO_LAT    LATGbits.LATG8      // SPI data out,  I/O pin latch.
				#define SST25_SDO_ANS    ANSELGbits.ANSG8    // SPI data out, I/O pin analog/digital selection.
				
				#define SST25_SDI_TRIS  TRISGbits.TRISG7	 // SPI data in , Input or Output selection.
				#define SST25_SDI_LAT    LATGbits.LATG7      // SPI data in,  I/O pin latch.
				#define SST25_SDI_ANS    ANSELGbits.ANSG7    // SPI data in, I/O pin analog/digital selection.
			#else
				#error "When using dsPIC33E or PIC24E starter kits, MultiMedia Expansion Board (MEB) needs to use SPI channel 2 (SST25_SPI_CHANNEL == 2) for for SPI Flash"
			#endif
			
		#else
	    	#if (SST25_SPI_CHANNEL == 2)
		    	#define SST25_CS_TRIS       TRISGbits.TRISG9
			    #define SST25_CS_LAT        LATGbits.LATG9
	    		#define SPI_FLASH_CHANNEL   CPLD_SPI2
		    #elif (SST25_SPI_CHANNEL == 3)
			    #define SST25_CS_TRIS       TRISGbits.TRISG9
			    #define SST25_CS_LAT        LATGbits.LATG9
			    #define SPI_FLASH_CHANNEL   CPLD_SPI2A
	    	#elif (SST25_SPI_CHANNEL == 4)
	    		#define SST25_CS_TRIS       TRISFbits.TRISF12
	    		#define SST25_CS_LAT        LATFbits.LATF12
	    		#define SPI_FLASH_CHANNEL   CPLD_SPI3A
	    	#else
				#error "MultiMedia Expansion Board (MEB) needs to use SPI channels 2,3 or 4 (SST25_SPI_CHANNEL == 2, 3 or 4) for for SPI Flash"
	    	#endif
	    #endif

    #define SPIFlashConfigurePins() {                           \
                                            SST25_SDO_ANS  = ANSEL_DIGITAL; \
                                            SST25_SDI_ANS  = ANSEL_DIGITAL; \
                                            SST25_CS_LAT   = 1; \
                                            SST25_CS_TRIS  = 0; \
                                            SST25_SCK_TRIS = 0; \
                                            SST25_SDO_TRIS = 0; \
                                            SST25_SDI_TRIS = 1; \
                                    }        
    
#endif // #if defined (USE_SST25VF016)

/*********************************************************************
* IOS FOR THE SWITCHES (SIDE BUTTONS)
*********************************************************************/
typedef enum
{
    HW_BUTTON_PRESS = 0,
    HW_BUTTON_RELEASE = 1
}HW_BUTTON_STATE;

	#if defined(__dsPIC33E__) || defined(__PIC24E__)
		#define HardwareButtonInit()         ANSELBbits.ANSB15 = ANSEL_DIGITAL; TRISBbits.TRISB15 = 1;
	#else
	    #define HardwareButtonInit()        (AD1PCFGSET = _AD1PCFG_PCFG1_MASK | _AD1PCFG_PCFG0_MASK | _AD1PCFG_PCFG3_MASK | _AD1PCFG_PCFG4_MASK | _AD1PCFG_PCFG15_MASK,\
	                                         CNPUESET = _CNPUE_CNPUE2_MASK | _CNPUE_CNPUE3_MASK | _CNPUE_CNPUE5_MASK | _CNPUE_CNPUE6_MASK | _CNPUE_CNPUE12_MASK)
        #endif

	    #define GetHWButtonProgram()        (PORTBbits.RB15)
	    #define GetHWButtonScanDown()       (PORTBbits.RB3)
	    #define GetHWButtonScanUp()         (PORTBbits.RB1)  
	    #define GetHWButtonCR()             (PORTBbits.RB15)
	    #define GetHWButtonFocus()          (PORTBbits.RB0 & PORTBbits.RB4)


/*********************************************************************
* IOS FOR THE UART
*********************************************************************/
#if defined(__dsPIC33FJ128GP804__) || defined(__PIC24HJ128GP504__)
    #define TX_TRIS TRISCbits.TRISC1
    #define RX_TRIS TRISCbits.TRISC0
#elif defined(__PIC24FJ256DA210__)    
    #define TX_TRIS TRISFbits.TRISF3
    #define RX_TRIS TRISDbits.TRISD0
#else
    #define TX_TRIS TRISFbits.TRISF5
    #define RX_TRIS TRISFbits.TRISF4
#endif

	#if defined(__PIC32MX__)
		//#include <plib.h>
		
		/*********************************************************************
		* Configuration for the CPLD
		*********************************************************************/
		#ifdef USE_16BIT_PMP
		#define GRAPHICS_HW_CONFIG     CPLD_GFX_CONFIG_16BIT
		#else
		#define GRAPHICS_HW_CONFIG     CPLD_GFX_CONFIG_8BIT
		#endif
		
		/*********************************************************************
		* MMB LEDs
		*********************************************************************/
		typedef enum
		{
		    MEB_LED_2,
		    MEB_LED_3,
		    MEB_LED_4,
		    MEB_LED_5,
		    MEB_LED_10
		}MMB_LED;
	
	#endif // #ifdef (__PIC32MX__)

#endif // __HARDWARE_PROFILE_H




