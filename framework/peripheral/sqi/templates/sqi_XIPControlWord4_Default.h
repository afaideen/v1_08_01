/*******************************************************************************
  SQI Peripheral Library Template Implementation

  File Name:
    sqi_XIPControlWord4_Default.h

  Summary:
    SQI PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : XIPControlWord4
    and its Variant : Default
    For following APIs :
        PLIB_SQI_XIPControlWord3Set
        PLIB_SQI_XIPControlWord3Get
        PLIB_SQI_ExistsXIPControlWord4

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

#ifndef _SQI_XIPCONTROLWORD4_DEFAULT_H
#define _SQI_XIPCONTROLWORD4_DEFAULT_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are

  VREGs:
    _SQI_INIT2_CMDS_STATUS_CHECK_VREG(index)
    _SQI_INIT2_CMDS_COUNT_VREG(index)
    _SQI_INIT2_CMDS_LANE_MODE_VREG(index)
    _SQI_INIT2_COMMAND_3_VREG(index)
    _SQI_INIT2_COMMAND_2_VREG(index)
    _SQI_INIT2_COMMAND_1_VREG(index)

  MASKs:
    _SQI_INIT2_CMDS_STATUS_CHECK_MASK(index)
    _SQI_INIT2_CMDS_COUNT_MASK(index)
    _SQI_INIT2_CMDS_LANE_MODE_MASK(index)
    _SQI_INIT2_COMMAND_3_MASK(index)
    _SQI_INIT2_COMMAND_2_MASK(index)
    _SQI_INIT2_COMMAND_1_MASK(index)

  POSs:
    _SQI_INIT2_CMDS_STATUS_CHECK_POS(index)
    _SQI_INIT2_CMDS_COUNT_POS(index)
    _SQI_INIT2_CMDS_LANE_MODE_POS(index)
    _SQI_INIT2_COMMAND_3_POS(index)
    _SQI_INIT2_COMMAND_2_POS(index)
    _SQI_INIT2_COMMAND_1_POS(index)

  LENs:
    _SQI_INIT2_CMDS_STATUS_CHECK_LEN(index)
    _SQI_INIT2_CMDS_COUNT_LEN(index)
    _SQI_INIT2_CMDS_LANE_MODE_LEN(index)
    _SQI_INIT2_COMMAND_3_LEN(index)
    _SQI_INIT2_COMMAND_2_LEN(index)
    _SQI_INIT2_COMMAND_1_LEN(index)

*/


//******************************************************************************
/* Function :  SQI_XIPControlWord3Set_Default

  Summary:
    Implements Default variant of PLIB_SQI_XIPControlWord4Set

  Description:
    This template implements the Default variant of the PLIB_SQI_XIPControlWord4Set function.
*/

PLIB_TEMPLATE void SQI_XIPControlWord4Set_Default( SQI_MODULE_ID index ,
												   bool	initStatCheck ,
												   uint8_t initCmdCount ,
												   SQI_LANE_MODE initCmdType ,
												   uint8_t initCmd3 ,
												   uint8_t initCmd2 ,
												   uint8_t initCmd1 )
{
	_SFR_WRITE (_SQI_INIT2_COMMAND_1_VREG(index),
				initStatCheck << 28 |
				initCmdCount << 26 |
				initCmdType << 24 |
				initCmd3 << 16 |
				initCmd2 << 8 |
				initCmd1);
}


//******************************************************************************
/* Function :  SQI_XIPControlWord3Get_Default

  Summary:
    Implements Default variant of PLIB_SQI_XIPControlWord4Get

  Description:
    This template implements the Default variant of the PLIB_SQI_XIPControlWord4Get function.
*/

PLIB_TEMPLATE uint32_t SQI_XIPControlWord4Get_Default( SQI_MODULE_ID   index )
{
    return (uint32_t) _SFR_READ (_SQI_INIT2_COMMAND_1_VREG(index));
}


//******************************************************************************
/* Function :  SQI_ExistsXIPControlWord4_Default

  Summary:
    Implements Default variant of PLIB_SQI_ExistsXIPControlWord4

  Description:
    This template implements the Default variant of the PLIB_SQI_ExistsXIPControlWord4 function.
*/

#define PLIB_SQI_ExistsXIPControlWord4 PLIB_SQI_ExistsXIPControlWord4
PLIB_TEMPLATE bool SQI_ExistsXIPControlWord4_Default( SQI_MODULE_ID index )
{
    return true;
}


#endif /*_SQI_XIPCONTROLWORD4_DEFAULT_H*/

/******************************************************************************
 End of File
*/

