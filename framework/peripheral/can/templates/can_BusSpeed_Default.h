/*******************************************************************************
  CAN Peripheral Library Template Implementation

  File Name:
    can_BusSpeed_Default.h

  Summary:
    CAN PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : BusSpeed
    and its Variant : Default
    For following APIs :
        PLIB_CAN_PrecalculatedBitRateSetup
        PLIB_CAN_ExistsPrecalculatedBitRateSetup
        PLIB_CAN_BitSamplePhaseSet
        PLIB_CAN_ExistsBitSamplePhaseSet
        PLIB_CAN_BaudRatePrescaleSetup
        PLIB_CAN_ExistsBaudRatePrescaleSetup
        PLIB_CAN_BaudRateGet
        PLIB_CAN_ExistsBaudRateGet

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

#ifndef _CAN_BUSSPEED_DEFAULT_H
#define _CAN_BUSSPEED_DEFAULT_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are 

  VREGs: 
    _CAN_BUS_SPEED_SETUP_VREG(index)

  MASKs: 
    _CAN_BUS_SPEED_SETUP_MASK(index)

  POSs: 
    _CAN_BUS_SPEED_SETUP_POS(index)

  LENs: 
    _CAN_BUS_SPEED_SETUP_LEN(index)

*/


//******************************************************************************
/* Function :  CAN_PrecalculatedBitRateSetup_Default

  Summary:
    Implements Default variant of PLIB_CAN_PrecalculatedBitRateSetup 

  Description:
    This template implements the Default variant of the PLIB_CAN_PrecalculatedBitRateSetup function.
*/

PLIB_TEMPLATE bool CAN_PrecalculatedBitRateSetup_Default( CAN_MODULE_ID  index , uint8_t        prescale , uint8_t        syncjumpWidth , uint8_t        propagation , uint8_t        segment1 , uint8_t        segment2 )
{
	uint32_t phaseSeg2free = 0x0001;
	uint32_t value = 0;
	uint32_t sample3times = 0;
	uint32_t wakeupfilter = 0;
	uint32_t totalTq = 0;
	uint32_t range = 0;
	range    = (segment1 + propagation);
	totalTq  = (((segment1) + (segment2) + (propagation)) + 1);	
	
	if( (prescale>0x003e)||(syncjumpWidth>0x0003)||(propagation>0x0007)||(segment1>0x0007)||(segment2>0x0007)||(syncjumpWidth<0x0000)||(propagation<0x0000)||(segment1<0x0000)||(segment2<0x0000))
	    return false;

    //Time quantum range limit		
	else if( (totalTq > 25) || (totalTq < 8) || (range < segment2 ) || (segment2 < syncjumpWidth))
	    return false;
		
	else
	{
	    if( _SFR_BIT_READ(_CAN_BUS_LINE_3TIMES_SAMPLING_VREG(index), _CAN_BUS_LINE_3TIMES_SAMPLING_POS(index) ))
		{
			if(prescale>=0x0002)
			   sample3times = 0x0001;
			else
			   sample3times = 0x0000;
		}	
	    else
            sample3times = 0x0000;
			
	    if( _SFR_BIT_READ(_CAN_BUS_ACTIVITY_WAKEUP_VREG(index),_CAN_BUS_ACTIVITY_WAKEUP_POS(index) ))
			wakeupfilter = 0x0001;
	    else
            wakeupfilter = 0x0000;		
						 			 
	
	
	
	    value = (((uint32_t)(prescale-1))|(((uint32_t)(syncjumpWidth-1))<<6)|(((uint32_t)(propagation-1))<<8)|(((uint32_t)(segment1-1))<<11)|
	            ((sample3times)<<14)|((phaseSeg2free)<<15)|(((uint32_t)(segment2-1))<<16)|((wakeupfilter)<<22));
	

	    _SFR_WRITE(_CAN_BUS_SPEED_SETUP_VREG(index), value );
		
		return true;
	}	
}


//******************************************************************************
/* Function :  CAN_ExistsPrecalculatedBitRateSetup_Default

  Summary:
    Implements Default variant of PLIB_CAN_ExistsPrecalculatedBitRateSetup

  Description:
    This template implements the Default variant of the PLIB_CAN_ExistsPrecalculatedBitRateSetup function.
*/

#define PLIB_CAN_ExistsPrecalculatedBitRateSetup PLIB_CAN_ExistsPrecalculatedBitRateSetup
PLIB_TEMPLATE bool CAN_ExistsPrecalculatedBitRateSetup_Default( CAN_MODULE_ID index )
{
    return true;
}


//******************************************************************************
/* Function :  CAN_BitSamplePhaseSet_Default

  Summary:
    Implements Default variant of PLIB_CAN_BitSamplePhaseSet 

  Description:
    This template implements the Default variant of the PLIB_CAN_BitSamplePhaseSet function.
*/

PLIB_TEMPLATE bool CAN_BitSamplePhaseSet_Default( CAN_MODULE_ID   index , uint8_t         syncJumpWidth , uint8_t         propagation , uint8_t         segment1 , uint8_t         segment2 )
{
    uint8_t SEG1 = (segment1-1);
    uint8_t SEG2 = (segment2-1);
    uint8_t PROP = (propagation-1);
    uint8_t SYNCJUMP = (syncJumpWidth-1);
	uint32_t totalTq = 0;
	uint32_t range = 0;
	range    = (segment1 + propagation);	
	totalTq  = (((segment1) + (segment2) + (propagation)) + 1);

	if((syncJumpWidth>0x0004)||(propagation>0x0008)||(segment1>0x0008)||(segment2>0x0008)||(syncJumpWidth<0x0001)||(propagation<0x0001)||(segment1<0x0001)||(segment2<0x0001))
	    return false;

    //Time quantum range limit		
	else if( (totalTq > 25) || (totalTq < 8) || (range < segment2 ) || (segment2 < syncJumpWidth) )
	    return false;	
	
	else
	{
	        _SFR_BIT_SET(_CAN_PHASE2_SEG_LENGTH_FREELY_PGM_VREG(index),
						 _CAN_PHASE2_SEG_LENGTH_FREELY_PGM_POS(index) );
						 
		    _SFR_FIELD_WRITE(_CAN_PHASE1_SEG_LENGTH_VREG(index),
                         _CAN_PHASE1_SEG_LENGTH_MASK(index),
                         _CAN_PHASE1_SEG_LENGTH_POS(index) ,
                         SEG1 );

			_SFR_FIELD_WRITE(_CAN_PHASE2_SEG_LENGTH_VREG(index),
						 _CAN_PHASE2_SEG_LENGTH_MASK(index),
                         _CAN_PHASE2_SEG_LENGTH_POS(index) ,
                         SEG2 );

			_SFR_FIELD_WRITE(_CAN_PROPAGATION_TIME_SEG_VREG(index),
						 _CAN_PROPAGATION_TIME_SEG_MASK(index),
						 _CAN_PROPAGATION_TIME_SEG_POS(index) ,
						 PROP);

			_SFR_FIELD_WRITE(_CAN_SYNC_JUMP_WIDTH_VREG(index),
                         _CAN_SYNC_JUMP_WIDTH_MASK(index),
                         _CAN_SYNC_JUMP_WIDTH_POS(index) ,
                         SYNCJUMP );	

            return true;						 
	}		
}


//******************************************************************************
/* Function :  CAN_ExistsBitSamplePhaseSet_Default

  Summary:
    Implements Default variant of PLIB_CAN_ExistsBitSamplePhaseSet

  Description:
    This template implements the Default variant of the PLIB_CAN_ExistsBitSamplePhaseSet function.
*/

#define PLIB_CAN_ExistsBitSamplePhaseSet PLIB_CAN_ExistsBitSamplePhaseSet
PLIB_TEMPLATE bool CAN_ExistsBitSamplePhaseSet_Default( CAN_MODULE_ID index )
{
    return true;
}


//******************************************************************************
/* Function :  CAN_BaudRatePrescaleSetup_Default

  Summary:
    Implements Default variant of PLIB_CAN_BaudRatePrescaleSetup 

  Description:
    This template implements the Default variant of the PLIB_CAN_BaudRatePrescaleSetup function.
*/

PLIB_TEMPLATE bool CAN_BaudRatePrescaleSetup_Default( CAN_MODULE_ID index , uint16_t prescale )
{
 if(prescale <= 0x003F)
 
 {
        _SFR_FIELD_WRITE(_CAN_BAUD_RATE_PRESCALE_VREG(index),
                         _CAN_BAUD_RATE_PRESCALE_MASK(index),
                         _CAN_BAUD_RATE_PRESCALE_POS(index) ,
                         prescale);
		
		return true;
 }	

else 
   return false;
}


//******************************************************************************
/* Function :  CAN_ExistsBaudRatePrescaleSetup_Default

  Summary:
    Implements Default variant of PLIB_CAN_ExistsBaudRatePrescaleSetup

  Description:
    This template implements the Default variant of the PLIB_CAN_ExistsBaudRatePrescaleSetup function.
*/

#define PLIB_CAN_ExistsBaudRatePrescaleSetup PLIB_CAN_ExistsBaudRatePrescaleSetup
PLIB_TEMPLATE bool CAN_ExistsBaudRatePrescaleSetup_Default( CAN_MODULE_ID index )
{
    return true;
}


//******************************************************************************
/* Function :  CAN_BaudRateGet_Default

  Summary:
    Implements Default variant of PLIB_CAN_BaudRateGet 

  Description:
    This template implements the Default variant of the PLIB_CAN_BaudRateGet function.
*/

PLIB_TEMPLATE uint32_t CAN_BaudRateGet_Default( CAN_MODULE_ID index , uint32_t sysclock )
{
	uint32_t speedconfig;
	uint32_t totalTq,Baudrate;
	uint8_t  prescaler;
	uint8_t  segment2;
	uint8_t  segment1;
	uint8_t  propagation;
	
	speedconfig = _SFR_READ(_CAN_BUS_SPEED_SETUP_VREG(index) );
					 
	

	prescaler   =  ((speedconfig & 0x0000003F));
	propagation = (((speedconfig & 0x00000700) >> 8) + 1);
	segment1    = (((speedconfig & 0x00003800) >> 11) + 1);
	segment2    = (((speedconfig & 0x00070000) >> 16) + 1);
	totalTq     = (((segment1) + (segment2) + (propagation)) + 1);	


	Baudrate = (sysclock/((prescaler+1) * totalTq * 2))/1000;	

	
	return ( Baudrate);
}


//******************************************************************************
/* Function :  CAN_ExistsBaudRateGet_Default

  Summary:
    Implements Default variant of PLIB_CAN_ExistsBaudRateGet

  Description:
    This template implements the Default variant of the PLIB_CAN_ExistsBaudRateGet function.
*/

#define PLIB_CAN_ExistsBaudRateGet PLIB_CAN_ExistsBaudRateGet
PLIB_TEMPLATE bool CAN_ExistsBaudRateGet_Default( CAN_MODULE_ID index )
{
    return true;
}


#endif /*_CAN_BUSSPEED_DEFAULT_H*/

/******************************************************************************
 End of File
*/

