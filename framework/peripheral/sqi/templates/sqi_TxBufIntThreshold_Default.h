/*******************************************************************************
  SQI Peripheral Library Template Implementation

  File Name:
    sqi_TxBufIntThreshold_Default.h

  Summary:
    SQI PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : TxBufIntThreshold
    and its Variant : Default
    For following APIs :
        PLIB_SQI_TxBufferThresholdIntSet
        PLIB_SQI_TxBufferThresholdIntGet
        PLIB_SQI_ExistsTxBufIntThreshold

*******************************************************************************/

//DOM-IGNORE-BEGIN
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

//DOM-IGNORE-END

#ifndef _SQI_TXBUFINTTHRESHOLD_DEFAULT_H
#define _SQI_TXBUFINTTHRESHOLD_DEFAULT_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are

  VREGs:
    _SQI_TRANSMIT_BUFFER_THRESHOLD_FOR_INT_VREG(index)

  MASKs:
    _SQI_TRANSMIT_BUFFER_THRESHOLD_FOR_INT_MASK(index)

  POSs:
    _SQI_TRANSMIT_BUFFER_THRESHOLD_FOR_INT_POS(index)

  LENs:
    _SQI_TRANSMIT_BUFFER_THRESHOLD_FOR_INT_LEN(index)

*/


//******************************************************************************
/* Function :  SQI_TxBufferThresholdIntSet_Default

  Summary:
    Implements Default variant of PLIB_SQI_TxBufferThresholdIntSet

  Description:
    This template implements the Default variant of the PLIB_SQI_TxBufferThresholdIntSet function.
*/

PLIB_TEMPLATE void SQI_TxBufferThresholdIntSet_Default( SQI_MODULE_ID index , uint8_t threshold )
{
	_SFR_FIELD_WRITE (_SQI_TRANSMIT_BUFFER_THRESHOLD_FOR_INT_VREG(index),
					  _SQI_TRANSMIT_BUFFER_THRESHOLD_FOR_INT_MASK(index),
					  _SQI_TRANSMIT_BUFFER_THRESHOLD_FOR_INT_POS(index),
					  threshold);
}


//******************************************************************************
/* Function :  SQI_TxBufferThresholdIntGet_Default

  Summary:
    Implements Default variant of PLIB_SQI_TxBufferThresholdIntGet

  Description:
    This template implements the Default variant of the PLIB_SQI_TxBufferThresholdIntGet function.
*/

PLIB_TEMPLATE uint8_t SQI_TxBufferThresholdIntGet_Default( SQI_MODULE_ID index )
{
	return (uint8_t) _SFR_FIELD_READ (_SQI_TRANSMIT_BUFFER_THRESHOLD_FOR_INT_VREG(index),
					  				  _SQI_TRANSMIT_BUFFER_THRESHOLD_FOR_INT_MASK(index),
					  				  _SQI_TRANSMIT_BUFFER_THRESHOLD_FOR_INT_POS(index));
}


//******************************************************************************
/* Function :  SQI_ExistsTxBufIntThreshold_Default

  Summary:
    Implements Default variant of PLIB_SQI_ExistsTxBufIntThreshold

  Description:
    This template implements the Default variant of the PLIB_SQI_ExistsTxBufIntThreshold function.
*/

#define PLIB_SQI_ExistsTxBufIntThreshold PLIB_SQI_ExistsTxBufIntThreshold
PLIB_TEMPLATE bool SQI_ExistsTxBufIntThreshold_Default( SQI_MODULE_ID index )
{
    return true;
}


#endif /*_SQI_TXBUFINTTHRESHOLD_DEFAULT_H*/

/******************************************************************************
 End of File
*/

