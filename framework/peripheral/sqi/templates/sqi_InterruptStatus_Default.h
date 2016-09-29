/*******************************************************************************
  SQI Peripheral Library Template Implementation

  File Name:
    sqi_InterruptStatus_Default.h

  Summary:
    SQI PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : InterruptStatus
    and its Variant : Default
    For following APIs :
        PLIB_SQI_InterruptFlagGet
        PLIB_SQI_ExistsInterruptStatus

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

#ifndef _SQI_INTERRUPTSTATUS_DEFAULT_H
#define _SQI_INTERRUPTSTATUS_DEFAULT_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are

  VREGs:
    _SQI_PKTCOMP_INTERRUPT_VAL_VREG(index)
    _SQI_BDDONE_INTERRUPT_VAL_VREG(index)
    _SQI_CONTHR_INTERRUPT_VAL_VREG(index)
    _SQI_CONEMPTY_INTERRUPT_VAL_VREG(index)
    _SQI_CONFULL_INTERRUPT_VAL_VREG(index)
    _SQI_RXTHR_INTERRUPT_VAL_VREG(index)
    _SQI_RXFULL_INTERRUPT_VAL_VREG(index)
    _SQI_RXEMPTY_INTERRUPT_VAL_VREG(index)
    _SQI_TXTHR_INTERRUPT_VAL_VREG(index)
    _SQI_TXFULL_INTERRUPT_VAL_VREG(index)
    _SQI_TXEMPTY_INTERRUPT_VAL_VREG(index)

  MASKs:
    _SQI_PKTCOMP_INTERRUPT_VAL_MASK(index)
    _SQI_BDDONE_INTERRUPT_VAL_MASK(index)
    _SQI_CONTHR_INTERRUPT_VAL_MASK(index)
    _SQI_CONEMPTY_INTERRUPT_VAL_MASK(index)
    _SQI_CONFULL_INTERRUPT_VAL_MASK(index)
    _SQI_RXTHR_INTERRUPT_VAL_MASK(index)
    _SQI_RXFULL_INTERRUPT_VAL_MASK(index)
    _SQI_RXEMPTY_INTERRUPT_VAL_MASK(index)
    _SQI_TXTHR_INTERRUPT_VAL_MASK(index)
    _SQI_TXFULL_INTERRUPT_VAL_MASK(index)
    _SQI_TXEMPTY_INTERRUPT_VAL_MASK(index)

  POSs:
    _SQI_PKTCOMP_INTERRUPT_VAL_POS(index)
    _SQI_BDDONE_INTERRUPT_VAL_POS(index)
    _SQI_CONTHR_INTERRUPT_VAL_POS(index)
    _SQI_CONEMPTY_INTERRUPT_VAL_POS(index)
    _SQI_CONFULL_INTERRUPT_VAL_POS(index)
    _SQI_RXTHR_INTERRUPT_VAL_POS(index)
    _SQI_RXFULL_INTERRUPT_VAL_POS(index)
    _SQI_RXEMPTY_INTERRUPT_VAL_POS(index)
    _SQI_TXTHR_INTERRUPT_VAL_POS(index)
    _SQI_TXFULL_INTERRUPT_VAL_POS(index)
    _SQI_TXEMPTY_INTERRUPT_VAL_POS(index)

  LENs:
    _SQI_PKTCOMP_INTERRUPT_VAL_LEN(index)
    _SQI_BDDONE_INTERRUPT_VAL_LEN(index)
    _SQI_CONTHR_INTERRUPT_VAL_LEN(index)
    _SQI_CONEMPTY_INTERRUPT_VAL_LEN(index)
    _SQI_CONFULL_INTERRUPT_VAL_LEN(index)
    _SQI_RXTHR_INTERRUPT_VAL_LEN(index)
    _SQI_RXFULL_INTERRUPT_VAL_LEN(index)
    _SQI_RXEMPTY_INTERRUPT_VAL_LEN(index)
    _SQI_TXTHR_INTERRUPT_VAL_LEN(index)
    _SQI_TXFULL_INTERRUPT_VAL_LEN(index)
    _SQI_TXEMPTY_INTERRUPT_VAL_LEN(index)
*/

//******************************************************************************
/* Function :  SQI_InterruptFlagGet_Default

  Summary:
    Implements Default variant of PLIB_SQI_InterruptFlagGet

  Description:
    This template implements the Default variant of the PLIB_SQI_InterruptFlagGet function.
*/

PLIB_TEMPLATE bool SQI_InterruptFlagGet_Default( SQI_MODULE_ID index , SQI_INTERRUPTS interruptFlag )
{
        switch (interruptFlag)
        {
		case SQI_PKTCOMP:
                    return (bool) _SFR_BIT_READ (_SQI_PKTCOMP_INTERRUPT_VAL_VREG(index),
                                                 _SQI_PKTCOMP_INTERRUPT_VAL_POS(index));
		break;
		case SQI_BDDONE:
                    return (bool) _SFR_BIT_READ (_SQI_BDDONE_INTERRUPT_VAL_VREG(index),
                                                 _SQI_BDDONE_INTERRUPT_VAL_POS(index));
		break;
		case SQI_CONTHR:
                    return (bool) _SFR_BIT_READ (_SQI_CONTHR_INTERRUPT_VAL_VREG(index),
                                                 _SQI_CONTHR_INTERRUPT_VAL_POS(index));
		break;
		case SQI_CONEMPTY:
                    return (bool) _SFR_BIT_READ (_SQI_CONEMPTY_INTERRUPT_VAL_VREG(index),
                                                 _SQI_CONEMPTY_INTERRUPT_VAL_POS(index));
		break;
		case SQI_CONFULL:
                    return (bool) _SFR_BIT_READ (_SQI_CONFULL_INTERRUPT_VAL_VREG(index),
                                                 _SQI_CONFULL_INTERRUPT_VAL_POS(index));
		break;
		case SQI_RXTHR:
                    return (bool) _SFR_BIT_READ (_SQI_RXTHR_INTERRUPT_VAL_VREG(index),
                                                 _SQI_RXTHR_INTERRUPT_VAL_POS(index));
		break;
		case SQI_RXFULL:
                    return (bool) _SFR_BIT_READ (_SQI_RXFULL_INTERRUPT_VAL_VREG(index),
                                                 _SQI_RXFULL_INTERRUPT_VAL_POS(index));
		break;
		case SQI_RXEMPTY:
                    return (bool) _SFR_BIT_READ (_SQI_RXEMPTY_INTERRUPT_VAL_VREG(index),
                                                 _SQI_RXEMPTY_INTERRUPT_VAL_POS(index));
		break;
		case SQI_TXTHR:
                    return (bool) _SFR_BIT_READ (_SQI_TXTHR_INTERRUPT_VAL_VREG(index),
                                                 _SQI_TXTHR_INTERRUPT_VAL_POS(index));
		break;
		case SQI_TXFULL:
                    return (bool) _SFR_BIT_READ (_SQI_TXFULL_INTERRUPT_VAL_VREG(index),
                                                 _SQI_TXFULL_INTERRUPT_VAL_POS(index));
		break;
		case SQI_TXEMPTY:
                    return (bool) _SFR_BIT_READ (_SQI_TXEMPTY_INTERRUPT_VAL_VREG(index),
                                                 _SQI_TXEMPTY_INTERRUPT_VAL_POS(index));
		break;
		default:
                    return (bool) _SFR_BIT_READ (_SQI_TXFULL_INTERRUPT_VAL_VREG(index),
                                                 _SQI_TXFULL_INTERRUPT_VAL_POS(index));
        }
}


//******************************************************************************
/* Function :  SQI_ExistsInterruptStatus_Default

  Summary:
    Implements Default variant of PLIB_SQI_ExistsInterruptStatus

  Description:
    This template implements the Default variant of the PLIB_SQI_ExistsInterruptStatus function.
*/

#define PLIB_SQI_ExistsInterruptStatus PLIB_SQI_ExistsInterruptStatus
PLIB_TEMPLATE bool SQI_ExistsInterruptStatus_Default( SQI_MODULE_ID index )
{
    return true;
}


#endif /*_SQI_INTERRUPTSTATUS_DEFAULT_H*/

/******************************************************************************
 End of File
*/

