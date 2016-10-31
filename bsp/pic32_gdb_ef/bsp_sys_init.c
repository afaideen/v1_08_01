/*******************************************************************************
  Board Support Package Implementation

  Company:
    Microchip Technology Inc.

  File Name:
    bsp_sys_init.c

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
    This function initializes the LED, Switch and other ports on the board.
    This function must be called by the user before using any APIs present in
    this BSP.  

  Remarks:
    Refer to bsp_config.h for usage information.
*/

void BSP_Initialize(void )
{


    /* BRG_RSTN */
    ANSELBbits.ANSB3 = 0;
    TRISBbits.TRISB3 = 0;
    LATBbits.LATB3 = 0;

    /* BRG_PWR_EN_N */
    ANSELBbits.ANSB13 = 0;
    TRISBbits.TRISB13 = 0;
    LATBbits.LATB13 = 0;

    /* BRG_RSTN */
    ANSELBbits.ANSB3 = 0;
    TRISBbits.TRISB3 = 0;
    LATBbits.LATB3 = 1;
	

	
    
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
    switch ( led )
    {
        /* LED B on LTS Board */
        case BSP_LED_B:
            /* Switch ON the LED */
            PLIB_PORTS_PinWrite ( PORTS_ID_0 , PORT_CHANNEL_B , led, state );
            break;

        /* LED R on LTS Board*/
        case BSP_LED_R:
            /* Switch ON the LED */
            PLIB_PORTS_PinWrite ( PORTS_ID_0 , PORT_CHANNEL_B , led, state );
            break;
            
        /* LED G on LTS Board */
        case BSP_LED_G:
            /* Switch ON the LED */
            PLIB_PORTS_PinWrite ( PORTS_ID_0 , PORT_CHANNEL_A , led, state );
            break;
    }
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

BSP_LED_STATE BSP_LEDStateGet (BSP_LED led)
{   
    BSP_LED_STATE ledState = BSP_LED_STATE_OFF;
    
    switch ( led )
    {
        /* LED B on LTS Board */
        case BSP_LED_B:
            /* Switch ON the LED */
            ledState = PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_B, BSP_LED_B);
            break;

        /* LED R on LTS Board*/
        case BSP_LED_R:
            /* Switch ON the LED */
            ledState = PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_B, BSP_LED_R);
            break;
            
        /* LED G on LTS Board */
        case BSP_LED_G:
            /* Switch ON the LED */
            ledState = PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_A, BSP_LED_G);
            break;
    }
    return ledState;
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
}

// *****************************************************************************
/* Function: 
    void BSP_LEDOff(BSP_LED led);

  Summary:
    Switches Off the specified LED.
  
  Description:
    This function switches Off the specified LED.

  Remarks:
    Refer to bsp_config.h for usage information.
*/

void BSP_LEDOff(BSP_LED led)
{
}

void BSP_USBVBUSPowerEnable(uint8_t port, bool enable)
{
    /* Enable the VBUS switch */

    PLIB_PORTS_PinWrite( PORTS_ID_0, PORT_CHANNEL_D, PORTS_BIT_POS_11, enable );
}

bool BSP_USBVBUSSwitchOverCurrentDetect(uint8_t port)
{
    return(false);
}

/*******************************************************************************
 End of File
*/
