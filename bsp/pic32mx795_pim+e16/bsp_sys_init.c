/*******************************************************************************
  Board Support Package Implementation.

  Company:      
    Microchip Technology Inc.

  File Name:    
    bsp_sys_init.c

  Summary:      
    Board Support Package Implementation for Explorer 16 Development Board when
    used with a PIC32MX795F512L Plug In Module (PIM).

  Description:
    This file contains the implementation of the Board Support Package for the
    Explorer 16 Development Board when used with a PIC32MX795F512L PIM.
*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2012 released Microchip Technology Inc.  All rights reserved.

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


// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include "bsp_config.h"

#define BSP_SWITCH_MS_ELLAPSED_TIME_TO_HZ(x) (1250/(x)) // convert time to frequency
BSP_DATA bspData;


// *****************************************************************************
// *****************************************************************************
// *****************************************************************************
// Section: Interface Routines
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function: void BSP_Initialize(void)

  Summary:
    Performs the neccassary actions to initialize a board

  Description:
    This routine performs the neccassary actions to initialize a board

  Remarks:
    Refer to bsp_config.h for usage information.

*/

void BSP_Initialize(void )
{
    /////LED
    PLIB_PORTS_PinClear( PORTS_ID_0, BSP_LED_1_CHANNEL, BSP_LED_1 );
    PLIB_PORTS_PinClear( PORTS_ID_0, BSP_LED_2_CHANNEL, BSP_LED_2 );
    PLIB_PORTS_PinClear( PORTS_ID_0, BSP_LED_3_CHANNEL, BSP_LED_3 );
    PLIB_PORTS_PinClear( PORTS_ID_0, BSP_LED_4_CHANNEL, BSP_LED_4 );
    PLIB_PORTS_PinClear( PORTS_ID_0, BSP_LED_5_CHANNEL, BSP_LED_5 );
    PLIB_PORTS_PinClear( PORTS_ID_0, BSP_LED_6_CHANNEL, BSP_LED_6 );
    PLIB_PORTS_PinClear( PORTS_ID_0, BSP_LED_7_CHANNEL, BSP_LED_7 );
    PLIB_PORTS_PinClear( PORTS_ID_0, BSP_LED_8_CHANNEL, BSP_LED_8 );
    PLIB_PORTS_PinDirectionOutputSet(PORTS_ID_0, BSP_LED_1_CHANNEL, BSP_LED_1);
    PLIB_PORTS_PinDirectionOutputSet(PORTS_ID_0, BSP_LED_2_CHANNEL, BSP_LED_2);
    PLIB_PORTS_PinDirectionOutputSet(PORTS_ID_0, BSP_LED_3_CHANNEL, BSP_LED_3);
    PLIB_PORTS_PinDirectionOutputSet(PORTS_ID_0, BSP_LED_4_CHANNEL, BSP_LED_4);
    PLIB_PORTS_PinDirectionOutputSet(PORTS_ID_0, BSP_LED_5_CHANNEL, BSP_LED_5);
    PLIB_PORTS_PinDirectionOutputSet(PORTS_ID_0, BSP_LED_6_CHANNEL, BSP_LED_6);
    PLIB_PORTS_PinDirectionOutputSet(PORTS_ID_0, BSP_LED_7_CHANNEL, BSP_LED_7);
    PLIB_PORTS_PinDirectionOutputSet(PORTS_ID_0, BSP_LED_8_CHANNEL, BSP_LED_8);
    
    /////SW
    PLIB_PORTS_PinDirectionInputSet(PORTS_ID_0, BSP_SWITCH_1_CHANNEL, BSP_SWITCH_1);//S3
    PLIB_PORTS_PinDirectionInputSet(PORTS_ID_0, BSP_SWITCH_2_CHANNEL, BSP_SWITCH_2);//S4
    PLIB_PORTS_PinDirectionInputSet(PORTS_ID_0, BSP_SWITCH_3_CHANNEL, BSP_SWITCH_3);//S5
    PLIB_PORTS_PinDirectionInputSet(PORTS_ID_0, BSP_SWITCH_4_CHANNEL, BSP_SWITCH_4);//S6
    /////ANALOG
    PLIB_PORTS_PinDirectionInputSet(PORTS_ID_0, BSP_AIN_2_CHANNEL, 2); //pot
    PLIB_PORTS_PinDirectionInputSet(PORTS_ID_0, BSP_AIN_4_CHANNEL, 4); //temperature
    
    /* Initialize the LED light show value and switch states*/
    bspData.light_show      = BSP_LED_EASY_CONFIGURATION;
    bspData.previousStateS1 = BSP_SWITCH_STATE_DEASSERTED;
    bspData.previousStateS2 = BSP_SWITCH_STATE_DEASSERTED;
    bspData.previousStateS3 = BSP_SWITCH_STATE_DEASSERTED;
    bspData.previousStateS4 = BSP_SWITCH_STATE_DEASSERTED;
    bspData.s1              = BSP_SWITCH_STATE_DEASSERTED;
    bspData.s2              = BSP_SWITCH_STATE_DEASSERTED;
    bspData.s3              = BSP_SWITCH_STATE_DEASSERTED;
    bspData.s4              = BSP_SWITCH_STATE_DEASSERTED;

    /* Initialize switch state machine values for each switch object */
    int i;
    for(i=0 ; i<BSP_MAX_SWITCHES; i++)
    {
       bspData.switches[i].duration     =  BSP_SWITCH_DEBOUNCE_TIME;
       bspData.switches[i].startTick    = 0;
       bspData.switches[i].endTick      = 0;
       bspData.switches[i].timerActive  = false;
    }
    
    BSP_Init_AtoD();
}

void BSP_Init_AtoD(void)
{
//	TRISBbits.TRISB2 = 1;   //pot
//    TRISBbits.TRISB4 = 1;   //temperature
    
//	AD1PCFGbits.PCFG0 = 0;
//	AD1PCFGbits.PCFG1 = 0;
	AD1PCFGbits.PCFG2 = 0;
//	AD1PCFGbits.PCFG3 = 0;
	AD1PCFGbits.PCFG4 = 0;
//	AD1PCFGbits.PCFG5 = 0;
//	AD1PCFGbits.PCFG10 = 0;
//	AD1PCFGbits.PCFG11 = 0;
//	AD1PCFGbits.PCFG8 = 0;
//	AD1PCFGbits.PCFG9 = 0;
//	AD1PCFGbits.PCFG14 = 0;
//	AD1PCFGbits.PCFG15 = 0;
	// ADC
    AD1CHSbits.CH0NA = 0;
    AD1CHSbits.CH0SA = 0;//0b0010;
    AD1CHSbits.CH0NB = 0;
    AD1CHSbits.CH0SB = 0;//0b0010;
//	AD1CHS = 0;	
	AD1CON1 = 0x84E4;			// Turn on, auto sample start, auto-convert, 12 bit mode (on parts with a 12bit A/D)
	AD1CON2 = 0x0404;			// AVdd, AVss, int every 2 conversions, MUXA only, scan
	AD1CON2bits.SMPI = 15;  //buffer an0 to adc1buf0, an1-->adc1buf1....an15-->adc1buf15. If to make result buffer to only adc1buf0 make AD1CON2bits.SMPI = 0;
	AD1CON2bits.ALTS=0;
	AD1CON3 = 0x1003;			// 16 Tad auto-sample, Tad = 3*Tcy
	AD1CSSL = 0xffff;//1<<2; // Scan thru all 16 ports ANIN. If use 1<<2 select only ANIN2 to scan.
}

// *****************************************************************************
/* Function: 
    void BSP_LEDStateSet(BSP_LED led, BSP_LED_STATE state);

  Summary:
    Controls the state of the LED.
  
  Description:
    This function allows the application to specify the state of the LED.

  Remarks:
    Refer to bsp_config.h for usage information.
*/

void BSP_LEDStateSet(BSP_LED led, BSP_LED_STATE state)
{
    /* Switch ON the LED */
    PLIB_PORTS_PinWrite ( PORTS_ID_0 , PORT_CHANNEL_A , led, state );
}

void BSP_LEDStateSet2(BSP_LED_PORT led_port, BSP_LED_CHANNEL led_channel, BSP_LED_STATE led_state)
{
    PLIB_PORTS_PinWrite( PORTS_ID_0, led_channel, led_port, led_state );
}

// *****************************************************************************
/* Function: 
    void BSP_LEDOn(BSP_LED led);

  Summary:
    Switches ON the specified LED.
  
  Description:
    This function switches ON the specified LED.

  Remarks:
    Refer to bsp_config.h for usage information.
*/

void BSP_LEDOn(BSP_LED led)
{
    PLIB_PORTS_PinSet( PORTS_ID_0, PORT_CHANNEL_A, led);
}

void BSP_LEDOn2(BSP_LED_CHANNEL led_channel, BSP_LED_PORT led_port)
{
    PLIB_PORTS_PinSet( PORTS_ID_0, led_channel, led_port );
}

// *****************************************************************************
/* Function: 
    void BSP_LEDOff(BSP_LED led);

  Summary:
    Switches OFF the specified LED.
  
  Description:
    This function switches OFF the specified LED.

  Remarks:
    Refer to bsp_config.h for usage information.
*/

void BSP_LEDOff(BSP_LED led)
{
    PLIB_PORTS_PinClear( PORTS_ID_0, PORT_CHANNEL_A, led);
}

void BSP_LEDOff2(BSP_LED_CHANNEL led_channel, BSP_LED_PORT led_port)
{
    PLIB_PORTS_PinClear( PORTS_ID_0, led_channel, led_port );
}

// *****************************************************************************
/* Function: 
    BSP_LED_STATE BSP_LEDStateGet(BSP_LED led);

  Summary:
    Returns the present state of the LED.
  
  Description:
    This function returns the present state of the LED.

  Remarks:
    Refer to bsp_config.h for usage information.
*/

BSP_LED_STATE BSP_LEDStateGet(BSP_LED led)
{
    return(PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_A, led));
}

BSP_LED_STATE BSP_LEDStateGet2(BSP_LED_CHANNEL led_channel, BSP_LED_PORT led_port)
{
    return(PLIB_PORTS_PinGetLatched( PORTS_ID_0, led_channel, led_port));
}

// *****************************************************************************
/* Function: 
    void BSP_LEDToggle(BSP_LED led);

  Summary:
    Toggles the state of the LED between BSP_LED_STATE_ON and BSP_LED_STATE_OFF.
  
  Description:
    This function toggles the state of the LED between BSP_LED_STATE_ON and
    BSP_LED_STATE_OFF.

  Remarks:
    Refer to bsp_config.h for usage information.
*/

void BSP_LEDToggle(BSP_LED led)
{
    PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_A,led );
}

void BSP_LEDToggle2(BSP_LED_CHANNEL led_channel, BSP_LED_PORT led_port)
{
    PLIB_PORTS_PinToggle( PORTS_ID_0, led_channel, led_port);
}

// *****************************************************************************
/* Function: 
    void BSP_SwitchStateGet(BSP_SWITCH switch);

  Summary:
    Returns the present state (pressed or not pressed) of the specified switch.
  
  Description:
    This function returns the present state (pressed or not pressed) of the
    specified switch.

  Remarks:
    Refer to bsp_config.h for usage information.
*/

BSP_SWITCH_STATE BSP_SwitchStateGet( BSP_SWITCH bspSwitch )
{    
    return ( PLIB_PORTS_PinGet(PORTS_ID_0, PORT_CHANNEL_D, bspSwitch) );
}

// *****************************************************************************
/* Function: 
    void BSP_SWITCH_StateGet(BSP_SWITCH_CHANNEL bspSwitchChannel, BSP_SWITCH_PORT bspSwitchPort);

  Summary:
    Returns the present state (pressed or not pressed) of the specified switch.
  
  Description:
    This function returns the present state (pressed or not pressed) of the
    specified switch.

  Remarks:
    Refer to bsp_config.h for usage information.
*/

BSP_SWITCH_STATE BSP_SWITCH_StateGet( BSP_SWITCH_CHANNEL bspSwitchChannel, BSP_SWITCH_PORT bspSwitchPort )
{
    return (PLIB_PORTS_PinGet(PORTS_ID_0, bspSwitchChannel, bspSwitchPort));
}

// *****************************************************************************
/* Function: 
    void BSP_SwitchS5Select(bool select);

  Summary:
    Enables operation of switch S5 on the board.
  
  Description:
    This function enables the operation of switch S5 on the board. If this switch
    is enabled, then operation of switch D10 will be disabled (and vice versa).

  Remarks:
    Refer to bsp_config.h for usage information.
*/

void BSP_SwitchS5Select(bool select)
{
    if(select)
    {
        PLIB_PORTS_PinDirectionInputSet ( PORTS_ID_0 , PORT_CHANNEL_A ,7 );
    }
    else
    {
        PLIB_PORTS_PinDirectionOutputSet ( PORTS_ID_0 , PORT_CHANNEL_A , 7 );
    }
}

// *****************************************************************************
/* Function:
    void BSP_LED_SetLightShow(BSP_LED_LIGHT_SHOW lightShow);

  Summary:
    Sets the LED light show to a configuration

  Description:
    This function will change the BSP LED configuration to certain "light shows"
    These light shows will indicate certain functions on the board.

  Remarks:
    Refer to bsp_config.h for usage information.
*/

void BSP_LED_LightShowSet(BSP_LED_LIGHT_SHOW lightShow)
{
    bspData.light_show = lightShow;
}

// *****************************************************************************
/* Function:
    void BSP_SYS_Tasks();

  Summary:
    Runs the applications BSP tasks such as LED and Switch control

  Description:
    This function will handle the LED state machine and switch state machine.

  Remarks:
    Refer to bsp_config.h for usage information.
*/

void BSP_SYS_Tasks ()
{
    BSP_LED_LightShow(bspData.light_show);
    BSP_SWITCH_Tasks();
}

// *****************************************************************************
/* Function:
    void BSP_LED_LightShow(void)

  Summary:
     Polling function to call different LED light shows

  Description:
    Each function will toggle the LEDs with different "light shows" that can be used
    for indications such as an error

  Precondition:
    Tick system is setup and LEDs are initialized

  Parameters:
   None

  Returns:
   None
*/

void BSP_LED_LightShow(BSP_LED_LIGHT_SHOW lightShow)
{
    static uint32_t ledTick = 0;
    static uint8_t count = 0;
    static uint8_t count2 = 0;
    static uint32_t connectionTimeout = 0;

    switch (lightShow)
    {
        case     BSP_LED_EASY_CONFIGURATION:
            if(SYS_TMR_TickCountGet() - ledTick >= 625)
            {
                ledTick = SYS_TMR_TickCountGet();
                BSP_LEDToggle2(BSP_LED_5_CHANNEL, BSP_LED_5_PORT);
                BSP_LEDOff2(BSP_LED_6_CHANNEL, BSP_LED_6_PORT);
                BSP_LEDOff2(BSP_LED_1_CHANNEL, BSP_LED_1_PORT);
                BSP_LEDOff2(BSP_LED_2_CHANNEL, BSP_LED_2_PORT);
                BSP_LEDOff2(BSP_LED_3_CHANNEL, BSP_LED_3_PORT);
                BSP_LEDOff2(BSP_LED_4_CHANNEL, BSP_LED_4_PORT);
            }
            break;

        case     BSP_LED_CONNECTING_TO_AP:
            if(SYS_TMR_TickCountGet() - connectionTimeout >= (1250 * 10))
            {
                connectionTimeout = SYS_TMR_TickCountGet();
                BSP_LED_LightShowSet(BSP_LED_CONNECTION_FAILED);
            }
            if (SYS_TMR_TickCountGet() - ledTick >= 150)
            {
                ledTick = SYS_TMR_TickCountGet();
                BSP_LEDOff2(BSP_LED_5_CHANNEL, BSP_LED_5_PORT);
                BSP_LEDOn2(BSP_LED_6_CHANNEL, BSP_LED_6_PORT);
                switch (count)
                {
                    case (0):
                        BSP_LEDOn2(BSP_LED_1_CHANNEL, BSP_LED_1_PORT);
                        BSP_LEDOff2(BSP_LED_2_CHANNEL, BSP_LED_2_PORT);
                        BSP_LEDOff2(BSP_LED_3_CHANNEL, BSP_LED_3_PORT);
                        BSP_LEDOff2(BSP_LED_4_CHANNEL, BSP_LED_4_PORT);
                        count++;
                        break;
                    case (1):
                        BSP_LEDOff2(BSP_LED_1_CHANNEL, BSP_LED_1_PORT);
                        BSP_LEDOn2(BSP_LED_2_CHANNEL, BSP_LED_2_PORT);
                        BSP_LEDOff2(BSP_LED_3_CHANNEL, BSP_LED_3_PORT);
                        BSP_LEDOff2(BSP_LED_4_CHANNEL, BSP_LED_4_PORT);
                        count++;
                        break;
                    case (2):
                        BSP_LEDOff2(BSP_LED_1_CHANNEL, BSP_LED_1_PORT);
                        BSP_LEDOff2(BSP_LED_2_CHANNEL, BSP_LED_2_PORT);
                        BSP_LEDOff2(BSP_LED_3_CHANNEL, BSP_LED_3_PORT);
                        BSP_LEDOn2(BSP_LED_4_CHANNEL, BSP_LED_4_PORT);
                        count++;
                        break;
                    case (3):
                        BSP_LEDOff2(BSP_LED_1_CHANNEL, BSP_LED_1_PORT);
                        BSP_LEDOff2(BSP_LED_2_CHANNEL, BSP_LED_2_PORT);
                        BSP_LEDOn2(BSP_LED_3_CHANNEL, BSP_LED_3_PORT);
                        BSP_LEDOff2(BSP_LED_4_CHANNEL, BSP_LED_4_PORT);
                        count = 0;
                        break;
                    default:
                        count = 0;
                        break;
                }

            }
            break;
            //Not implemented
        case     BSP_LED_CONNECTION_FAILED:
                BSP_LEDOff2(BSP_LED_1_CHANNEL, BSP_LED_1_PORT);
                BSP_LEDOn2(BSP_LED_2_CHANNEL, BSP_LED_2_PORT);
                BSP_LEDOff2(BSP_LED_3_CHANNEL, BSP_LED_3_PORT);
                BSP_LEDOff2(BSP_LED_4_CHANNEL, BSP_LED_4_PORT);
                BSP_LEDOn2(BSP_LED_5_CHANNEL, BSP_LED_5_PORT);
                BSP_LEDOn2(BSP_LED_6_CHANNEL, BSP_LED_6_PORT);

            if(SYS_TMR_TickCountGet() - connectionTimeout >= 4750)
            {
                connectionTimeout = SYS_TMR_TickCountGet();
                ledTick = SYS_TMR_TickCountGet();
                BSP_LED_LightShowSet(BSP_LED_CONNECTING_TO_AP);
            }
            break;
        case    BSP_LED_AP_CONNECTED:
                if(SYS_TMR_TickCountGet() - ledTick >= 625)
                {
                    count2++;
                    ledTick = SYS_TMR_TickCountGet();
                    BSP_LEDStateSet2(BSP_LED_5_CHANNEL, BSP_LED_5_PORT, BSP_LEDStateGet2(BSP_LED_6_CHANNEL, BSP_LED_6_PORT));
                    BSP_LEDToggle2(BSP_LED_5_CHANNEL, BSP_LED_6_PORT);
                    BSP_LEDToggle2(BSP_LED_6_CHANNEL, BSP_LED_6_PORT);
                    BSP_LEDOff2(BSP_LED_1_CHANNEL, BSP_LED_1_PORT);
                    BSP_LEDOff2(BSP_LED_2_CHANNEL, BSP_LED_2_PORT);
                    BSP_LEDOff2(BSP_LED_3_CHANNEL, BSP_LED_3_PORT);
                    BSP_LEDOff2(BSP_LED_4_CHANNEL, BSP_LED_4_PORT);
                }
            break;

        case    BSP_LED_SERVER_CONNECT_FAILED:
                BSP_LEDOn2(BSP_LED_1_CHANNEL, BSP_LED_1_PORT);
                BSP_LEDOff2(BSP_LED_2_CHANNEL, BSP_LED_2_PORT);
                BSP_LEDOff2(BSP_LED_3_CHANNEL, BSP_LED_3_PORT);
                BSP_LEDOff2(BSP_LED_4_CHANNEL, BSP_LED_4_PORT);
                BSP_LEDOn2(BSP_LED_5_CHANNEL, BSP_LED_5_PORT);
                BSP_LEDOn2(BSP_LED_6_CHANNEL, BSP_LED_6_PORT);
            break;

        case    BSP_LED_ALL_GOOD:
                BSP_LEDOff2(BSP_LED_5_CHANNEL, BSP_LED_5_PORT);
                BSP_LEDOff2(BSP_LED_6_CHANNEL, BSP_LED_6_PORT);
                ledTick = SYS_TMR_TickCountGet();
            // Idle state
            break;
            
        case    BSP_LED_TX:
            BSP_LEDOn2(BSP_LED_6_CHANNEL, BSP_LED_6_PORT);
            if(SYS_TMR_TickCountGet() - ledTick >= 30)
                BSP_LED_LightShowSet(BSP_LED_ALL_GOOD);
            break;
            
        case    BSP_LED_RX:
            BSP_LEDOn2(BSP_LED_5_CHANNEL, BSP_LED_5_PORT);
            if(SYS_TMR_TickCountGet() - ledTick >= 30)
                BSP_LED_LightShowSet(BSP_LED_ALL_GOOD);
            break; 

        case    BSP_LED_DNS_FAILED:
            BSP_LEDOn2(BSP_LED_1_CHANNEL, BSP_LED_1_PORT);
            BSP_LEDOff2(BSP_LED_2_CHANNEL, BSP_LED_2_PORT);
            BSP_LEDOn2(BSP_LED_3_CHANNEL, BSP_LED_3_PORT);
            BSP_LEDOff2(BSP_LED_4_CHANNEL, BSP_LED_4_PORT);
            BSP_LEDOn2(BSP_LED_5_CHANNEL, BSP_LED_5_PORT);
            BSP_LEDOn2(BSP_LED_6_CHANNEL, BSP_LED_6_PORT);
        break;
        
        case    BSP_LED_TCPIP_STACK_INIT_FAILURE:
            BSP_LEDOff2(BSP_LED_1_CHANNEL, BSP_LED_1_PORT);
            BSP_LEDOn2(BSP_LED_2_CHANNEL, BSP_LED_2_PORT);
            BSP_LEDOn2(BSP_LED_3_CHANNEL, BSP_LED_3_PORT);
            BSP_LEDOff2(BSP_LED_4_CHANNEL, BSP_LED_4_PORT);
            BSP_LEDOn2(BSP_LED_5_CHANNEL, BSP_LED_5_PORT);
            BSP_LEDOn2(BSP_LED_6_CHANNEL, BSP_LED_6_PORT);
        break;
        
        case BSP_LED_NVM_FAILED_MOUNT:
            BSP_LEDOff2(BSP_LED_1_CHANNEL, BSP_LED_1_PORT);
            BSP_LEDOff2(BSP_LED_2_CHANNEL, BSP_LED_2_PORT);
            BSP_LEDOn2(BSP_LED_3_CHANNEL, BSP_LED_3_PORT);
            BSP_LEDOff2(BSP_LED_4_CHANNEL, BSP_LED_4_PORT);
            BSP_LEDOn2(BSP_LED_5_CHANNEL, BSP_LED_5_PORT);
            BSP_LEDOn2(BSP_LED_6_CHANNEL, BSP_LED_6_PORT);
        break;  
        
        case BSP_LED_INTIAL_CONNECT:
            BSP_LEDOn2(BSP_LED_1_CHANNEL, BSP_LED_1_PORT);
            BSP_LEDOn2(BSP_LED_2_CHANNEL, BSP_LED_2_PORT);
            BSP_LEDOn2(BSP_LED_3_CHANNEL, BSP_LED_3_PORT);
            BSP_LEDOn2(BSP_LED_4_CHANNEL, BSP_LED_4_PORT);
            BSP_LEDOn2(BSP_LED_5_CHANNEL, BSP_LED_5_PORT);
            BSP_LEDOn2(BSP_LED_6_CHANNEL, BSP_LED_6_PORT);
            
        default:
            break;
    }
}
// *****************************************************************************
/* Function: 
    bool BSP_USBVBUSPowerEnable(uint8_t port, bool enable)

  Summary:
    This function controls the USB VBUS supply.
  
  Description:
    This function controls the USB VBUS supply.

  Remarks:
    None.
*/

void BSP_USBVBUSPowerEnable(uint8_t port, bool enable)
{
    /* The Explorer 16 board with the USB Pictail Plus Plugin 
     * does not contain a VBUS switch. We dont do anything
     * in the function. */
}

// *****************************************************************************
/* Function: 
    bool BSP_USBVBUSOverCurrentDetect(uint8_t port)

  Summary:
    Returns true if the over current is detected on the VBUS supply.
  
  Description:
    This function returns true if over current is detected on the VBUS supply.

  Remarks:
    None.
*/

bool BSP_USBVBUSSwitchOverCurrentDetect(uint8_t port)
{
    return(false);
}

BSP_SWITCH_STATE BSP_SWITCH_SwitchTest(BSP_SWITCH switchId)
{
    switch(switchId)
    {
        case BSP_SWITCH_1:
          return (BSP_SWITCH_STATE)bspData.s1;
        break;
        case BSP_SWITCH_2:
          return (BSP_SWITCH_STATE)bspData.s2;
        break;
        case 3://BSP_SWITCH_3
          return (BSP_SWITCH_STATE)bspData.s3;
        break;
        case BSP_SWITCH_4:
          return (BSP_SWITCH_STATE)bspData.s4;
        break;
        default:
            return BSP_SWITCH_STATE_DEASSERTED;
    }
}

int32_t BSP_SWITCH_DeviceDebounce(BSP_SWITCH_DEBOUNCE_T *handle, uint32_t curVal)
{
    if(handle->timerActive==false)
    {
       handle->timerActive = true;
       handle->prevValue   = curVal;
       handle->startTick   = SYS_TMR_TickCountGet();
    }

    if ((SYS_TMR_TickCountGet() - handle->startTick) >= (1250
                         / BSP_SWITCH_MS_ELLAPSED_TIME_TO_HZ(handle->duration)) )
    {
        handle->timerActive=false;
        if(handle->prevValue == curVal)
          return handle->prevValue;
        else
          return curVal; // Return the assert value
    }
    return BSP_SWITCH_BUSY;  // Busy
}

void BSP_SWITCH_Tasks(void)
{
    int32_t val;
    val = BSP_SWITCH_DeviceDebounce(&bspData.switches[0], 
        BSP_SWITCH_StateGet( BSP_SWITCH_1_CHANNEL, BSP_SWITCH_1_PORT));
    if(val != BSP_SWITCH_BUSY)
    {
        bspData.s1 = val;
    }

    val = BSP_SWITCH_DeviceDebounce(&bspData.switches[1],
        BSP_SWITCH_StateGet( BSP_SWITCH_2_CHANNEL, BSP_SWITCH_2_PORT));
    if(val != BSP_SWITCH_BUSY) 
    {
        bspData.s2 = val;
    }

    val = BSP_SWITCH_DeviceDebounce(&bspData.switches[2],
        BSP_SWITCH_StateGet( BSP_SWITCH_3_CHANNEL, BSP_SWITCH_3_PORT));
    if(val != BSP_SWITCH_BUSY) 
    {
        bspData.s3 = val;
    }

    val = BSP_SWITCH_DeviceDebounce(&bspData.switches[3],
        BSP_SWITCH_StateGet( BSP_SWITCH_4_CHANNEL, BSP_SWITCH_4_PORT));
    if(val != BSP_SWITCH_BUSY) 
    {
        bspData.s4 = val;
    }
}
/*******************************************************************************
 End of File
*/
