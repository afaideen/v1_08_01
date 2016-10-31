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
#include "DS1307.h"

// *****************************************************************************
// *****************************************************************************
// Section: Constants and Type Definitions.
// *****************************************************************************
// *****************************************************************************

#define         EAGLEEYE2014
#define         DRV_SST25VF_SYS_FS_REGISTER

//LED
#define DIR_LED0            TRISEbits.TRISE0
#define DIR_LED1            TRISEbits.TRISE1
#define LED0                LATEbits.LATE0
#define LED1                LATEbits.LATE1

#define DIR_LED_RED         TRISDbits.TRISD5
#define DIR_LED_BLUE        TRISDbits.TRISD6
#define DIR_LED_GREEN       TRISDbits.TRISD7
#define LED_RED             LATDbits.LATD5
#define LED_BLUE            LATDbits.LATD6
#define LED_GREEN           LATDbits.LATD7

#define DIR_LED_DRY0        TRISEbits.TRISE3
#define DIR_LED_DRY1        TRISEbits.TRISE2
#define DIR_LED_DRY2        TRISEbits.TRISE5
#define DIR_LED_DRY3        TRISEbits.TRISE4
#define LED_DRY0            PORTEbits.RE3
#define LED_DRY1            PORTEbits.RE2
#define LED_DRY2            PORTEbits.RE5
#define LED_DRY3            PORTEbits.RE4

#define DIR_LED_AN0         TRISGbits.TRISG0
#define DIR_LED_AN1         TRISGbits.TRISG1
#define DIR_LED_AN2         TRISGbits.TRISG6
#define DIR_LED_AN3         TRISGbits.TRISG7
#define DIR_LED_AN4         TRISGbits.TRISG12
#define LED_AN0             LATGbits.LATG0//PORTGbits.RG0
#define LED_AN1             LATGbits.LATG1//PORTGbits.RG1
#define LED_AN2             LATGbits.LATG6//PORTGbits.RG6
#define LED_AN3             LATGbits.LATG7//PORTGbits.RG7	//temperature led
#define LED_AN4             LATGbits.LATG12//PORTGbits.RG12	//water

//#define LED0_TRIS			(TRISGbits.TRISG0)	// Ref LED1
//#define LED0_IO				(LATGbits.LATG0)
//#define LED1_TRIS			(TRISGbits.TRISG1)	// Ref LED2
//#define LED1_IO				(LATGbits.LATG1)
//#define LED2_TRIS			(TRISGbits.TRISG6)	// Ref LED3
//#define LED2_IO				(LATGbits.LATG6)
//#define LED3_TRIS			(TRISGbits.TRISG7)			// No such LED
//#define LED3_IO				(LATGbits.LATG7)
//#define LED4_TRIS			(TRISGbits.TRISG12)			// No such LED
//#define LED4_IO				(LATGbits.LATG12)
//#define LED5_TRIS			(TRISEbits.TRISE3)			// No such LED
//#define LED5_IO				(LATEbits.LATE3)
//#define LED6_TRIS			(LED2_TRIS)			// No such LED
//#define LED6_IO				(LATDbits.LATD6)
//#define LED7_TRIS			(LED2_TRIS)			// No such LED
//#define LED7_IO				(LATDbits.LATD6)
//#define LED_GET()			((unsigned char)LATD & 0x07)
//#define LED_PUT(a)			do{LATD = (LATD & 0xFFF8) | ((a)&0x07);}while(0)
//RELAY SW
#define DIR_OUT0			TRISDbits.TRISD1
#define DIR_OUT1			TRISDbits.TRISD3
#define OUT0				PORTDbits.RD1
#define OUT1				PORTDbits.RD3
//RTC
#define	DIR_RTC_CTRL		TRISCbits.TRISC1
#define	RTC_CTRL			LATCbits.LATC1
//BUTTON
#define DIR_FACSET_IO		TRISDbits.TRISD2
#define FACSET_IO			PORTDbits.RD2
//DRY CONTACT
#define	DIR_DRY_DIG0		TRISGbits.TRISG13 
#define DIR_DRY_DIG1	    TRISGbits.TRISG14 
#define DIR_DRY_DIG2        TRISFbits.TRISF12 
#define DIR_DRY_DIG3        TRISFbits.TRISF13 
#define DRY_DIG0			PORTGbits.RG13
#define DRY_DIG1			PORTGbits.RG14
#define DRY_DIG2			PORTFbits.RF12
#define DRY_DIG3			PORTFbits.RF13
//Charger
#define debug_level		0	//debug=2 for sensor
#define	USE_6V
//#define	USE_12V

#if defined(USE_12V)
	#define UPPER_CHARGER_THR	13.5
	#define	LOWER_CHARGER_THR	13.0
#elif defined(USE_6V)
	#define UPPER_CHARGER_THR	6.8
	#define	LOWER_CHARGER_THR	6.0
#endif

#define DIR_CHARGER         TRISAbits.TRISA0
#define CHARGER             PORTAbits.RA0

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
     BSP_SWITCH_1_PORT = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_2/*DOM-IGNORE-END*/,
} BSP_SWITCH_PORT;

typedef enum
{
    BSP_SW_FACSETIO = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_2/*DOM-IGNORE-END*/,
   
} BSP_SWITCH;

typedef enum
{
    BSP_DRY_DIG0 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_13/*DOM-IGNORE-END*/,
    BSP_DRY_DIG1 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_14/*DOM-IGNORE-END*/,
    BSP_DRY_DIG2 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_12/*DOM-IGNORE-END*/,
    BSP_DRY_DIG3 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_13/*DOM-IGNORE-END*/,
}BSP_INPUT;

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


typedef enum
{

     /* SWITCH 1 */
     BSP_SWITCH_1_CHANNEL = /*DOM-IGNORE-BEGIN*/PORT_CHANNEL_D/*DOM-IGNORE-END*/,

} BSP_SWITCH_CHANNEL;

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

#define BSP_MAX_SWITCHES 1
#define BSP_SWITCH_DEBOUNCE_TIME 60

typedef struct
{
    BSP_LED_LIGHT_SHOW light_show;
    BSP_SWITCH_STATE  s1;
    bool                ledPower;
    uint32_t            t[BSP_MAX_SWITCHES];
    BSP_SWITCH_STATE previousStateS1;
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
    BSP_LED_0 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_0/*DOM-IGNORE-END*/,
    BSP_LED_1 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_1/*DOM-IGNORE-END*/,
    BSP_LED_RED = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_5/*DOM-IGNORE-END*/,
    BSP_LED_BLUE = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_6/*DOM-IGNORE-END*/,
    BSP_LED_GREEN = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_7/*DOM-IGNORE-END*/,
    BSP_LED_DRY0 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_3/*DOM-IGNORE-END*/,
    BSP_LED_DRY1 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_2/*DOM-IGNORE-END*/,
    BSP_LED_DRY2 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_5/*DOM-IGNORE-END*/,
    BSP_LED_DRY3 = /*DOM-IGNORE-BEGIN*/PORTS_BIT_POS_4/*DOM-IGNORE-END*/,

} BSP_LED;
#define BSP_LED_PORT    BSP_LED

typedef enum
{            
    BSP_LED0_CHANNEL = PORT_CHANNEL_E,
    BSP_LED1_CHANNEL = PORT_CHANNEL_E,
    BSP_LED_GREEN_CHANNEL = PORT_CHANNEL_D,

} BSP_LED_CHANNEL;

typedef enum
{
    /* AIN 0 */
    BSP_AIN_0_CHANNEL = PORT_CHANNEL_B,
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
    /* AIN 9 */
    BSP_AIN_9_CHANNEL = PORT_CHANNEL_B,
    /* AIN 10 */
    BSP_AIN_10_CHANNEL = PORT_CHANNEL_B,
    /* AIN 11 */
    BSP_AIN_11_CHANNEL = PORT_CHANNEL_B,
    /* AIN 14 */
    BSP_AIN_14_CHANNEL = PORT_CHANNEL_B,
    /* AIN 15 */
    BSP_AIN_15_CHANNEL = PORT_CHANNEL_B,

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

//----------------------------
// MRF24W WiFi I/O pins
//----------------------------
// If you have a MRF24W WiFi PICtail, you must uncomment one of 
// these two lines to use it.  SPI1 is the top-most slot in the Explorer 16 
// (closer to the LCD and prototyping area) while SPI2 corresponds to 
// insertion of the PICtail into the middle of the side edge connector slot.
#define MRF24W_IN_SPI1
//#define MRF24W_IN_SPI2
#if defined(MRF24W_IN_SPI1)
	// MRF24W in SPI1 slot
	#define WF_CS_TRIS			(TRISGbits.TRISG9)
	#define WF_CS_IO			(LATGbits.LATG9)
	#define WF_SDI_TRIS			(TRISCbits.TRISC4)
	#define WF_SCK_TRIS			(TRISDbits.TRISD10)
	#define WF_SDO_TRIS			(TRISDbits.TRISD0)
	#define WF_RESET_TRIS		(TRISFbits.TRISF0)
	#define WF_RESET_IO			(LATFbits.LATF0)
	#define WF_INT_TRIS			(TRISEbits.TRISE8)  // INT1
	#define WF_INT_IO			(PORTEbits.RE8)
	#define WF_HIBERNATE_TRIS	(TRISFbits.TRISF1)
	#define WF_HIBERNATE_IO		(PORTFbits.RF1)
	#define WF_INT_EDGE			(INTCONbits.INT1EP)
	#define WF_INT_IE			(IEC0bits.INT1IE)
	#define WF_INT_IF			(IFS0bits.INT1IF)
	#define WF_INT_IE_CLEAR		IEC0CLR
	#define WF_INT_IF_CLEAR		IFS0CLR
	#define WF_INT_IE_SET		IEC0SET
	#define WF_INT_IF_SET		IFS0SET
	#define WF_INT_BIT			0x00000080
	#define WF_INT_IPCSET		IPC1SET
	#define WF_INT_IPCCLR		IPC1CLR
	#define WF_INT_IPC_MASK		0xFF000000
	#define WF_INT_IPC_VALUE	0x0C000000

	#define WF_SSPBUF			(SPI1BUF)
	#define WF_SPISTAT			(SPI1STAT)
	#define WF_SPISTATbits		(SPI1STATbits)
	#define WF_SPICON1			(SPI1CON)
	#define WF_SPICON1bits		(SPI1CONbits)
	#define WF_SPI_IE_CLEAR		IEC0CLR
	#define WF_SPI_IF_CLEAR		IFS0CLR
	#define WF_SPI_INT_BITS		0x03800000
	#define WF_SPI_BRG			(SPI1BRG)
	#define WF_MAX_SPI_FREQ		(10000000ul)	// Hz
#endif

#define NUM_RLYSW					2
#define NUM_DRY_INP					4
#define HYSTERYSIS_DRY				3
#define NUM_TEMPERATURE				2
#define HYSTERYSIS_TEMPERATURE		5.0
#define	NUM_LIGHT					1
#define HYSTERYSIS_LIGHT			3.5
#define	NUM_WATER					1
#define HYSTERYSIS_WATER			3.5
//profile for current sensor
#define R106						100.0
#define R105						51.0
#define R109						100.0
#define NUM_CURRENT					1

#define HYSTERYSIS_CURRENT			3.5
#define	NUM_HUMIDITY				1
#define HYSTERYSIS_HUMIDITY			5.0
#define	NUM_BATTERY					1
#define HYSTERYSIS_BATTERY			3.5
#define	NUM_GENADC					1
#define HYSTERYSIS_GENADC			2.0
#define	NUM_RETRY_SEND_EMAIL		3

#define HYSTERYSIS_DCIN				1

#define HTTP_PORT               8181//(80u)

typedef __attribute__((__deprecated__)) uint32_t TICK;

#endif //_BSP_CONFIG_H

/*******************************************************************************
 End of File
*/
