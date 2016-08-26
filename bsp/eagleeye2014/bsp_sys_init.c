


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
    PLIB_PORTS_PinClear( PORTS_ID_0, PORT_CHANNEL_E, BSP_LED_0 );
    PLIB_PORTS_PinClear( PORTS_ID_0, PORT_CHANNEL_E, BSP_LED_1 );
    PLIB_PORTS_PinClear( PORTS_ID_0, PORT_CHANNEL_E, BSP_LED_2 );
    PLIB_PORTS_PinClear( PORTS_ID_0, PORT_CHANNEL_E, BSP_LED_3 );
    PLIB_PORTS_PinClear( PORTS_ID_0, PORT_CHANNEL_E, BSP_LED_4 );
    PLIB_PORTS_PinClear( PORTS_ID_0, PORT_CHANNEL_E, BSP_LED_5 );
    PLIB_PORTS_PinClear( PORTS_ID_0, PORT_CHANNEL_D, BSP_LED_5 );
    PLIB_PORTS_PinClear( PORTS_ID_0, PORT_CHANNEL_D, BSP_LED_6 );
	PLIB_PORTS_PinClear( PORTS_ID_0, PORT_CHANNEL_D, BSP_LED_7 );
    
    DIR_LED0 = 0;
    DIR_LED1 = 0;
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
	if(led <= 5)
		PLIB_PORTS_PinWrite ( PORTS_ID_0 , PORT_CHANNEL_E , led, state );
	else
		PLIB_PORTS_PinWrite ( PORTS_ID_0 , PORT_CHANNEL_D , led, state );
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
	if(led <= 5)
		PLIB_PORTS_PinSet( PORTS_ID_0, PORT_CHANNEL_E, led);
	else
		PLIB_PORTS_PinSet( PORTS_ID_0, PORT_CHANNEL_D, led);
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
	if(led <= 5)
		PLIB_PORTS_PinClear( PORTS_ID_0, PORT_CHANNEL_E, led);
	else
		PLIB_PORTS_PinClear( PORTS_ID_0, PORT_CHANNEL_D, led);
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
	if(led <= 5)
		return(PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_E, led));
	else
		return(PLIB_PORTS_PinGetLatched(PORTS_ID_0, PORT_CHANNEL_D, led));
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
	if(led <= 5)
		PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_E,led );
	else
		PLIB_PORTS_PinToggle(PORTS_ID_0, PORT_CHANNEL_D,led );
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
/*******************************************************************************
 End of File
*/
