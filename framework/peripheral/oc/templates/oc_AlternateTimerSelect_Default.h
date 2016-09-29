/*******************************************************************************
  OC Peripheral Library Template Implementation

  File Name:
    oc_AlternateTimerSelect_Default.h

  Summary:
    OC PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : AlternateTimerSelect
    and its Variant : Default
    For following APIs :
        PLIB_OC_AlternateTimerSelect
        PLIB_OC_ExistsAlternateTimerSelect

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2014 released Microchip Technology Inc.  All rights reserved.

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

//DOM-IGNORE-END

#ifndef _OC_ALTERNATETIMERSELECT_DEFAULT_H
#define _OC_ALTERNATETIMERSELECT_DEFAULT_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are 

  VREGs: 
    _OC_TIMER_SELECT_MZ_VREG(index)

  MASKs: 
    _OC_TIMER_SELECT_MZ_MASK(index)

  POSs: 
    _OC_TIMER_SELECT_MZ_POS(index)

  LENs: 
    _OC_TIMER_SELECT_MZ_LEN(index)

*/


//******************************************************************************
/* Function :  OC_AlternateTimerSelect_Default

  Summary:
    Implements Default variant of PLIB_OC_AlternateTimerSelect 

  Description:
    This template implements the Default variant of the PLIB_OC_AlternateTimerSelect function.
*/

PLIB_TEMPLATE bool OC_AlternateTimerSelect_Default( OC_MODULE_ID index , OC_ALT_TIMERS tmr )
{

switch(tmr)
{
case OC_ALT_TIMER_TMR3:
					if((index == OC_ID_4) || (index == OC_ID_5) || (index == OC_ID_6))
					{
						_SFR_BIT_SET(_OC_TIMER_SELECT_MZ_VREG(index),
				                         _OC_TIMER_SELECT_MZ_POS(index));
						return true;				 
					}
					else
					{
					    return false;
					}			
						break;
case OC_ALT_TIMER_TMR2:
					if((index == OC_ID_4) || (index == OC_ID_5) || (index == OC_ID_6))
					{
						_SFR_BIT_CLEAR(_OC_TIMER_SELECT_MZ_VREG(index),
				                         _OC_TIMER_SELECT_MZ_POS(index));
						return true;				 
					}
					else
					{
					    return false;
					}
						break;
case OC_ALT_TIMER_TMR5:
					if((index == OC_ID_1) || (index == OC_ID_2) || (index == OC_ID_3))
					{
						_SFR_BIT_SET(_OC_TIMER_SELECT_MZ_VREG(index),
				                         _OC_TIMER_SELECT_MZ_POS(index));
						return true;				 
					}
					else
					{
					    return false;
					}			
						break;
case OC_ALT_TIMER_TMR4:
					if((index == OC_ID_1) || (index == OC_ID_2) || (index == OC_ID_3))
					{
						_SFR_BIT_CLEAR(_OC_TIMER_SELECT_MZ_VREG(index),
				                         _OC_TIMER_SELECT_MZ_POS(index));
						return true;				 
					}
					else
					{
					    return false;
					}			
						break;
case OC_ALT_TIMER_TMR7:
					if((index == OC_ID_7) || (index == OC_ID_8) || (index == OC_ID_9))
					{
						_SFR_BIT_SET(_OC_TIMER_SELECT_MZ_VREG(index),
				                         _OC_TIMER_SELECT_MZ_POS(index));
						return true;				 
					}
					else
					{
					    return false;
					}			
						break;
case OC_ALT_TIMER_TMR6:
					if((index == OC_ID_7) || (index == OC_ID_8) || (index == OC_ID_9))
					{
						_SFR_BIT_CLEAR(_OC_TIMER_SELECT_MZ_VREG(index),
				                         _OC_TIMER_SELECT_MZ_POS(index));
						return true;				 
					}
					else
					{
					    return false;
					}			
						break;
default:
						return false;
						break;	

}

}


//******************************************************************************
/* Function :  OC_ExistsAlternateTimerSelect_Default

  Summary:
    Implements Default variant of PLIB_OC_ExistsAlternateTimerSelect

  Description:
    This template implements the Default variant of the PLIB_OC_ExistsAlternateTimerSelect function.
*/

#define PLIB_OC_ExistsAlternateTimerSelect PLIB_OC_ExistsAlternateTimerSelect
PLIB_TEMPLATE bool OC_ExistsAlternateTimerSelect_Default( OC_MODULE_ID index )
{
    return true;
}


#endif /*_OC_ALTERNATETIMERSELECT_DEFAULT_H*/

/******************************************************************************
 End of File
*/

