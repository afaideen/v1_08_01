/*******************************************************************************
  Board Support Package Header File.

  Company:      
    Microchip Technology Inc.

  File Name:    
    bsp_config.h

  Summary:      
    Board Support Package Header file for Explorer 16 Development Board when
    used with a PIC32MX795F512L Plug In Module (PIM).

  Description:
    This file contains constants, macros, type definitions and function
    declarations required by the Explorer 16 Development Board when used with a
    PIC32MX795F512L PIM.
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

#define     EX16
// *****************************************************************************
// *****************************************************************************
// Section: Constants and Type Definitions.
// *****************************************************************************

#define BSP_POTENTIOMETER       PORTS_BIT_POS_2
#define SIZE_READING            30

typedef struct
{
    uint16_t reading[SIZE_READING];
    float ave;
    float tot;
    uint8_t count;
    uint32_t t1;
    
}AN_SENSOR;


typedef enum
{
    BSP_LED_EASY_CONFIGURATION,            
    BSP_LED_CONNECTING_TO_AP,       
    BSP_LED_CONNECTION_FAILED,      
    BSP_LED_SERVER_CONNECT_FAILED,  
    BSP_LED_AP_CONNECTED,     
    BSP_LED_ALL_GOOD,  
    BSP_LED_TX,
    BSP_LED_RX,
    BSP_LED_DNS_FAILED,
    BSP_LED_TCPIP_STACK_INIT_FAILURE,
    BSP_LED_INTIAL_CONNECT,
    BSP_LED_ALL_OFF,
    BSP_LED_NVM_FAILED_MOUNT
} BSP_LED_LIGHT_SHOW;

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
     BSP_SWITCH_1_PORT = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_13/*DOM-IGNORE-END*/,

     /* SWITCH 2 */
     BSP_SWITCH_2_PORT = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_7/*DOM-IGNORE-END*/,
    
     /* SWITCH 3 */
     BSP_SWITCH_3_PORT = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_7/*DOM-IGNORE-END*/,
     
     /* SWITCH 4 */
     BSP_SWITCH_4_PORT = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_6/*DOM-IGNORE-END*/,

} BSP_SWITCH_PORT;

typedef enum
{

    /* SWITCH 1 */
     BSP_SWITCH_1 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_13/*DOM-IGNORE-END*/,//RD13

    /* SWITCH 2 */
     BSP_SWITCH_2 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_7/*DOM-IGNORE-END*/,//RA7
    
     /* SWITCH 3 */
     BSP_SWITCH_3 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_7/*DOM-IGNORE-END*/,//RD7
     
     /* SWITCH 4 */
     BSP_SWITCH_4 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_6/*DOM-IGNORE-END*/,//RD6

} BSP_SWITCH;

typedef enum
{

     /* SWITCH 1 */
     BSP_SWITCH_1_CHANNEL = /*DOM-IGNORE-BEGIN*/PORT_CHANNEL_D/*DOM-IGNORE-END*/,

     /* SWITCH 2 */
     BSP_SWITCH_2_CHANNEL = /*DOM-IGNORE-BEGIN*/PORT_CHANNEL_A/*DOM-IGNORE-END*/,
    
     /* SWITCH 3 */
     BSP_SWITCH_3_CHANNEL = /*DOM-IGNORE-BEGIN*/PORT_CHANNEL_D/*DOM-IGNORE-END*/,
     
     /* SWITCH 4 */
     BSP_SWITCH_4_CHANNEL = /*DOM-IGNORE-BEGIN*/PORT_CHANNEL_D/*DOM-IGNORE-END*/,

} BSP_SWITCH_CHANNEL;

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
    BSP_SWITCH_STATE_ASSERTED = BSP_SWITCH_STATE_PRESSED,
   /* Switch not pressed */
    BSP_SWITCH_STATE_RELEASED = /*DOM-IGNORE-BEGIN*/1/*DOM-IGNORE-END*/,
    BSP_SWITCH_STATE_DEASSERTED = BSP_SWITCH_STATE_RELEASED,

} BSP_SWITCH_STATE;

#define BSP_SWITCH_BUSY -1

//DGC_FINISH  Comment these
typedef struct
{
    int32_t prevValue;
    int32_t timerActive;
    int32_t duration; // In milliseconds
    uint32_t startTick;
    uint32_t endTick;

}BSP_SWITCH_DEBOUNCE_T;

#define BSP_MAX_SWITCHES 4
#define BSP_SWITCH_DEBOUNCE_TIME 60

typedef struct
{
    BSP_LED_LIGHT_SHOW light_show;
    BSP_SWITCH_STATE  s1, s2, s3, s4;
    uint32_t            t[BSP_MAX_SWITCHES];
    BSP_SWITCH_STATE previousStateS1;
    BSP_SWITCH_STATE previousStateS2;
    BSP_SWITCH_STATE previousStateS3;
    BSP_SWITCH_STATE previousStateS4;
    BSP_SWITCH_DEBOUNCE_T switches[BSP_MAX_SWITCHES];
} BSP_DATA;


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
    BSP_LED_1_PORT = PORTS_BIT_POS_0,
                                                                      
    /* LED 2 */
    BSP_LED_2_PORT = PORTS_BIT_POS_1,
                                                                      
    /* LED 3 */
    BSP_LED_3_PORT = PORTS_BIT_POS_2,
                                                                      
    /* LED 4 */
    BSP_LED_4_PORT = PORTS_BIT_POS_3,
                                                                      
    /* LED 5 */
    BSP_LED_5_PORT = PORTS_BIT_POS_4,
                                                                      
    /* LED 6 */
    BSP_LED_6_PORT = PORTS_BIT_POS_5,
                                                                      
    /* LED 7 */
    BSP_LED_7_PORT = PORTS_BIT_POS_6,
    
    /* LED 8 */
    BSP_LED_8_PORT = PORTS_BIT_POS_7,

} BSP_LED_PORT;

typedef enum
{
    /* LED 3 */
    BSP_LED_1 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_0/*DOM-IGNORE-END*/,
                                                                      
    /* LED 4 */                                                       
    BSP_LED_2 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_1/*DOM-IGNORE-END*/,
                                                                      
    /* LED 5 */                                                       
    BSP_LED_3 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_2/*DOM-IGNORE-END*/,
                                                                      
    /* LED 6 */                                                       
    BSP_LED_4 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_3/*DOM-IGNORE-END*/,
                                                                      
    /* LED 7 */                                                       
    BSP_LED_5 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_4/*DOM-IGNORE-END*/,
                                                                      
    /* LED 8 */                                                       
    BSP_LED_6 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_5/*DOM-IGNORE-END*/,
                                                                      
    /* LED 9 */                                                       
    BSP_LED_7 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_6/*DOM-IGNORE-END*/,

    /* LED 10 */
    BSP_LED_8 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_7/*DOM-IGNORE-END*/

} BSP_LED;

typedef enum
{
    /* LED 1 */
    BSP_LED_1_CHANNEL = PORT_CHANNEL_A,
                                                                      
    /* LED 2 */
    BSP_LED_2_CHANNEL = PORT_CHANNEL_A,
                                                                      
    /* LED 3 */
    BSP_LED_3_CHANNEL = PORT_CHANNEL_A,
                                                                      
    /* LED 4 */
    BSP_LED_4_CHANNEL = PORT_CHANNEL_A,
                                                                      
    /* LED 5 */
    BSP_LED_5_CHANNEL = PORT_CHANNEL_A,
                                                                      
    /* LED 6 */
    BSP_LED_6_CHANNEL = PORT_CHANNEL_A,
                                                                      
    /* LED 7 */
    BSP_LED_7_CHANNEL = PORT_CHANNEL_A,
            
    /* LED 8 */
    BSP_LED_8_CHANNEL = PORT_CHANNEL_A,

} BSP_LED_CHANNEL;

typedef enum
{
    /* AIN 1 */
    BSP_AIN_1_CHANNEL = PORT_CHANNEL_B,
                                                                      
    /* AIN 2 */
    BSP_AIN_2_CHANNEL = PORT_CHANNEL_B,
                                                                      
    /* AIN 3 */
    BSP_AIN_3_CHANNEL = PORT_CHANNEL_B,
                                                                      
    /* AIN 4 */
    BSP_AIN_4_CHANNEL = PORT_CHANNEL_B,
                                                                      
    /* AIN 5 */
    BSP_AIN_5_CHANNEL = PORT_CHANNEL_B,
                                                                      
    /* AIN 6 */
    BSP_AIN_6_CHANNEL = PORT_CHANNEL_B,
                                                                      
    /* AIN 7 */
    BSP_AIN_7_CHANNEL = PORT_CHANNEL_B,
            
    /* AIN 8 */
    BSP_AIN_8_CHANNEL = PORT_CHANNEL_B,

} BSP_AIN_CHANNEL;

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
void BSP_Init_AtoD(void);
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
void BSP_LEDStateSet2(BSP_LED_PORT led_port, BSP_LED_CHANNEL led_channel, BSP_LED_STATE led_state);

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
BSP_LED_STATE BSP_LEDStateGet2(BSP_LED_CHANNEL led_channel, BSP_LED_PORT led_port);

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
void BSP_LEDToggle2(BSP_LED_CHANNEL led_channel, BSP_LED_PORT led_port);


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
void BSP_LEDOn2(BSP_LED_CHANNEL led_channel, BSP_LED_PORT led_port);

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
void BSP_LEDOff2(BSP_LED_CHANNEL led_channel, BSP_LED_PORT led_port);
void BSP_LED_LightShowSet(BSP_LED_LIGHT_SHOW lightShow);
void BSP_SYS_Tasks ();
void BSP_LED_LightShow(BSP_LED_LIGHT_SHOW lightShow);

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
BSP_SWITCH_STATE BSP_SWITCH_StateGet(BSP_SWITCH_CHANNEL bspSwitchChannel, BSP_SWITCH_PORT bspSwitchPort);

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

// Select which UART the STACK_USE_UART and STACK_USE_UART2TCP_BRIDGE 
// options will use.  You can change these to U1BRG, U1MODE, etc. if you 
// want to use the UART1 module instead of UART2.
#define UBRG				U2BRG
#define UMODE				U2MODE
#define USTA				U2STA
#define BusyUART()			BusyUART2()
#define CloseUART()			CloseUART2()
#define ConfigIntUART(a)	ConfigIntUART2(a)
#define DataRdyUART()		DataRdyUART2()
#define OpenUART(a,b,c)		OpenUART2(a,b,c)
#define ReadUART()			ReadUART2()
#define WriteUART(a)		WriteUART2(a)
#define getsUART(a,b,c)		getsUART2(a,b,c)
#define putsUART(a)			putsUART2(a)
#define getcUART()			getcUART2()
#define putcUART(a)			do{while(BusyUART()); WriteUART(a); while(BusyUART()); }while(0)
#define putrsUART(a)		putrsUART2(a)

//MLA EX16 LCD BLOCKING
	//EX16 LCD
    /*** LCD Configuration ***/
	#define     USE_LCD
	// Clock frequency values
	// These directly influence timed events using the Tick module.  They also are used for UART and SPI baud rate generation.
	#ifndef SYS_CLK_FrequencySystemGet
	#define SYS_CLK_FrequencySystemGet  		(SYS_CLK_FREQ) // Hz
	#define SYS_CLK_FrequencyInstructionGet()   (SYS_CLK_FrequencySystemGet / 1) // Normally SYS_CLK_FrequencySystemGet() / 4 for PIC18, SYS_CLK_FrequencySystemGet() / 2 for PIC24, and SYS_CLK_FrequencySystemGet() / 1 for PIC32.  Might need changing if using Doze modes.
	#define SYS_CLK_FrequencyPeripheralGet()    (SYS_CLK_FrequencySystemGet / 1) // Normally SYS_CLK_FrequencySystemGet() / 4 for PIC18, SYS_CLK_FrequencySystemGet() / 2 for PIC24, and SYS_CLK_FrequencySystemGet() / 1 for PIC32.  Divisor may be different if using a PIC32 since it's configurable.
	#endif

	#include "common/src/delay.h"    
	#include "driver/lcd/src/lcd_blocking.h"
    #include "GenericTypeDefs.h"
	// LCD Module I/O pins.  NOTE: On the Explorer 16, the LCD is wired to the
	// same PMP lines required to communicate with an ENCX24J600 in parallel
	// mode.  Since the LCD does not have a chip select wire, if you are using
	// the ENC424J600/624J600 in parallel mode, the LCD cannot be used.
	// #if !defined(ENC100_INTERFACE_MODE) || (ENC100_INTERFACE_MODE == 0) // SPI only
	#define LCD_DATA_TRIS       (*((volatile unsigned char *)&TRISE))
	#define LCD_DATA_IO         (*((volatile unsigned char *)&LATE))
	#define LCD_RD_WR_TRIS      (TRISDbits.TRISD5)
	#define LCD_RD_WR_IO        (LATDbits.LATD5)
	#define LCD_RS_TRIS         (TRISBbits.TRISB15)
	#define LCD_RS_IO           (LATBbits.LATB15)
	#define LCD_E_TRIS          (TRISDbits.TRISD4)
	#define LCD_E_IO            (LATDbits.LATD4)
	// #endif

#endif //_BSP_CONFIG_H

/*******************************************************************************
 End of File
*/
