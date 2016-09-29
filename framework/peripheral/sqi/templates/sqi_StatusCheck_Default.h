/*******************************************************************************
  SQI Peripheral Library Template Implementation

  File Name:
    sqi_StatusCheck_Default.h

  Summary:
    SQI PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : StatusCheck
    and its Variant : Default
    For following APIs :
        PLIB_SQI_StatusCheckSet
        PLIB_SQI_ExistsStatusCheck

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

#ifndef _SQI_STATUSCHECK_DEFAULT_H
#define _SQI_STATUSCHECK_DEFAULT_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are

  VREGs:
    _SQI_FLASH_STATUS_CHECK_VREG(index)
    _SQI_RDY_BUSY_BIT_POSITION_VREG(index)
    _SQI_STATUS_CMD_LANE_MODE_VREG(index)
    _SQI_NUMBER_OF_STATUS_CMD_BYTES_VREG(index)
    _SQI_STATUS_COMMAND_VREG(index)

  MASKs:
    _SQI_FLASH_STATUS_CHECK_MASK(index)
    _SQI_RDY_BUSY_BIT_POSITION_MASK(index)
    _SQI_STATUS_CMD_LANE_MODE_MASK(index)
    _SQI_NUMBER_OF_STATUS_CMD_BYTES_MASK(index)
    _SQI_STATUS_COMMAND_MASK(index)

  POSs:
    _SQI_FLASH_STATUS_CHECK_POS(index)
    _SQI_RDY_BUSY_BIT_POSITION_POS(index)
    _SQI_STATUS_CMD_LANE_MODE_POS(index)
    _SQI_NUMBER_OF_STATUS_CMD_BYTES_POS(index)
    _SQI_STATUS_COMMAND_POS(index)

  LENs:
    _SQI_FLASH_STATUS_CHECK_LEN(index)
    _SQI_RDY_BUSY_BIT_POSITION_LEN(index)
    _SQI_STATUS_CMD_LANE_MODE_LEN(index)
    _SQI_NUMBER_OF_STATUS_CMD_BYTES_LEN(index)
    _SQI_STATUS_COMMAND_LEN(index)

*/


//******************************************************************************
/* Function :  SQI_StatusCheckSet_Default

  Summary:
    Implements Default variant of PLIB_SQI_StatusCheckSet

  Description:
    This template implements the Default variant of the PLIB_SQI_StatusCheckSet function.
*/

PLIB_TEMPLATE void SQI_StatusCheckSet_Default( SQI_MODULE_ID index , uint16_t statCheckCmd , uint8_t numStatBytes , SQI_LANE_MODE statCmdType , bool statBitPos )
{
	_SFR_BIT_WRITE (_SQI_FLASH_STATUS_CHECK_VREG(index),
					_SQI_FLASH_STATUS_CHECK_POS(index),
					1);
	_SFR_WRITE (_SQI_STATUS_COMMAND_VREG(index),
				statBitPos << 20 |
				statCmdType << 18 |
				numStatBytes << 16 |
				statCheckCmd);

}


//******************************************************************************
/* Function :  SQI_ExistsStatusCheck_Default

  Summary:
    Implements Default variant of PLIB_SQI_ExistsStatusCheck

  Description:
    This template implements the Default variant of the PLIB_SQI_ExistsStatusCheck function.
*/

#define PLIB_SQI_ExistsStatusCheck PLIB_SQI_ExistsStatusCheck
PLIB_TEMPLATE bool SQI_ExistsStatusCheck_Default( SQI_MODULE_ID index )
{
    return true;
}


#endif /*_SQI_STATUSCHECK_DEFAULT_H*/

/******************************************************************************
 End of File
*/

