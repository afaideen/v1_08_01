/*******************************************************************************
  SQI Peripheral Library Template Implementation

  File Name:
    sqi_InterruptSignalControl_Default.h

  Summary:
    SQI PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : InterruptSignalControl
    and its Variant : Default
    For following APIs :
        PLIB_SQI_InterruptSignalEnable
        PLIB_SQI_InterruptSignalDisable
        PLIB_SQI_InterruptSignalIsEnabled
        PLIB_SQI_ExistsInterruptSignalControl

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

#ifndef _SQI_INTERRUPTSIGNALCONTROL_DEFAULT_H
#define _SQI_INTERRUPTSIGNALCONTROL_DEFAULT_H

//******************************************************************************
/* Routines available for accessing VREGS, MASKS, POS, LEN are

  VREGs:
    _SQI_PKTCOMP_INTSIG_ENABLE_VREG(index)
    _SQI_BDDONE_INTSIG_ENABLE_VREG(index)
    _SQI_CONTHR_INTSIG_ENABLE_VREG(index)
    _SQI_CONEMPTY_INTSIG_ENABLE_VREG(index)
    _SQI_CONFULL_INTSIG_ENABLE_VREG(index)
    _SQI_RXTHR_INTSIG_ENABLE_VREG(index)
    _SQI_RXFULL_INTSIG_ENABLE_VREG(index)
    _SQI_RXEMPTY_INTSIG_ENABLE_VREG(index)
    _SQI_TXTHR_INTSIG_ENABLE_VREG(index)
    _SQI_TXFULL_INTSIG_ENABLE_VREG(index)
    _SQI_TXEMPTY_INTSIG_ENABLE_VREG(index)

  MASKs:
    _SQI_PKTCOMP_INTSIG_ENABLE_MASK(index)
    _SQI_BDDONE_INTSIG_ENABLE_MASK(index)
    _SQI_CONTHR_INTSIG_ENABLE_MASK(index)
    _SQI_CONEMPTY_INTSIG_ENABLE_MASK(index)
    _SQI_CONFULL_INTSIG_ENABLE_MASK(index)
    _SQI_RXTHR_INTSIG_ENABLE_MASK(index)
    _SQI_RXFULL_INTSIG_ENABLE_MASK(index)
    _SQI_RXEMPTY_INTSIG_ENABLE_MASK(index)
    _SQI_TXTHR_INTSIG_ENABLE_MASK(index)
    _SQI_TXFULL_INTSIG_ENABLE_MASK(index)
    _SQI_TXEMPTY_INTSIG_ENABLE_MASK(index)

  POSs:
    _SQI_PKTCOMP_INTSIG_ENABLE_POS(index)
    _SQI_BDDONE_INTSIG_ENABLE_POS(index)
    _SQI_CONTHR_INTSIG_ENABLE_POS(index)
    _SQI_CONEMPTY_INTSIG_ENABLE_POS(index)
    _SQI_CONFULL_INTSIG_ENABLE_POS(index)
    _SQI_RXTHR_INTSIG_ENABLE_POS(index)
    _SQI_RXFULL_INTSIG_ENABLE_POS(index)
    _SQI_RXEMPTY_INTSIG_ENABLE_POS(index)
    _SQI_TXTHR_INTSIG_ENABLE_POS(index)
    _SQI_TXFULL_INTSIG_ENABLE_POS(index)
    _SQI_TXEMPTY_INTSIG_ENABLE_POS(index)

  LENs:
    _SQI_PKTCOMP_INTSIG_ENABLE_LEN(index)
    _SQI_BDDONE_INTSIG_ENABLE_LEN(index)
    _SQI_CONTHR_INTSIG_ENABLE_LEN(index)
    _SQI_CONEMPTY_INTSIG_ENABLE_LEN(index)
    _SQI_CONFULL_INTSIG_ENABLE_LEN(index)
    _SQI_RXTHR_INTSIG_ENABLE_LEN(index)
    _SQI_RXFULL_INTSIG_ENABLE_LEN(index)
    _SQI_RXEMPTY_INTSIG_ENABLE_LEN(index)
    _SQI_TXTHR_INTSIG_ENABLE_LEN(index)
    _SQI_TXFULL_INTSIG_ENABLE_LEN(index)
    _SQI_TXEMPTY_INTSIG_ENABLE_LEN(index)

*/


//******************************************************************************
/* Function :  SQI_InterruptSignalEnable_Default

  Summary:
    Implements Default variant of PLIB_SQI_InterruptSignalEnable

  Description:
    This template implements the Default variant of the PLIB_SQI_InterruptSignalEnable function.
*/

PLIB_TEMPLATE void SQI_InterruptSignalEnable_Default( SQI_MODULE_ID index , SQI_INTERRUPTS interruptFlag )
{
	switch (interruptFlag)
	{
		case SQI_PKTCOMP:
			_SFR_BIT_WRITE (_SQI_PKTCOMP_INTSIG_ENABLE_VREG(index),
                                        _SQI_PKTCOMP_INTSIG_ENABLE_POS(index),
					1);
		break;
		case SQI_BDDONE:
			_SFR_BIT_WRITE (_SQI_BDDONE_INTSIG_ENABLE_VREG(index),
					_SQI_BDDONE_INTSIG_ENABLE_POS(index),
					1);
		break;
		case SQI_CONTHR:
			_SFR_BIT_WRITE (_SQI_CONTHR_INTSIG_ENABLE_VREG(index),
					_SQI_CONTHR_INTSIG_ENABLE_POS(index),
					1);
		break;
		case SQI_CONEMPTY:
			_SFR_BIT_WRITE (_SQI_CONEMPTY_INTSIG_ENABLE_VREG(index),
					_SQI_CONEMPTY_INTSIG_ENABLE_POS(index),
					1);
		break;
		case SQI_CONFULL:
			_SFR_BIT_WRITE (_SQI_CONFULL_INTSIG_ENABLE_VREG(index),
					_SQI_CONFULL_INTSIG_ENABLE_POS(index),
					1);
		break;
		case SQI_RXTHR:
			_SFR_BIT_WRITE (_SQI_RXTHR_INTSIG_ENABLE_VREG(index),
					_SQI_RXTHR_INTSIG_ENABLE_POS(index),
					1);
		break;
		case SQI_RXFULL:
			_SFR_BIT_WRITE (_SQI_RXFULL_INTSIG_ENABLE_VREG(index),
					_SQI_RXFULL_INTSIG_ENABLE_POS(index),
					1);
		break;
		case SQI_RXEMPTY:
			_SFR_BIT_WRITE (_SQI_RXEMPTY_INTSIG_ENABLE_VREG(index),
					_SQI_RXEMPTY_INTSIG_ENABLE_POS(index),
					1);
		break;
		case SQI_TXTHR:
			_SFR_BIT_WRITE (_SQI_TXTHR_INTSIG_ENABLE_VREG(index),
                                        _SQI_TXTHR_INTSIG_ENABLE_POS(index),
					1);
		break;
		case SQI_TXFULL:
			_SFR_BIT_WRITE (_SQI_TXFULL_INTSIG_ENABLE_VREG(index),
					_SQI_TXFULL_INTSIG_ENABLE_POS(index),
					1);
		break;
		case SQI_TXEMPTY:
			_SFR_BIT_WRITE (_SQI_TXEMPTY_INTSIG_ENABLE_VREG(index),
					_SQI_TXEMPTY_INTSIG_ENABLE_POS(index),
					1);
		break;
		default:
			_SFR_BIT_WRITE (_SQI_TXFULL_INTSIG_ENABLE_VREG(index),
					_SQI_TXFULL_INTSIG_ENABLE_POS(index),
					0x7FF);
	}
}


//******************************************************************************
/* Function :  SQI_InterruptSignalDisable_Default

  Summary:
    Implements Default variant of PLIB_SQI_InterruptSignalDisable

  Description:
    This template implements the Default variant of the PLIB_SQI_InterruptSignalDisable function.
*/

PLIB_TEMPLATE void SQI_InterruptSignalDisable_Default( SQI_MODULE_ID index , SQI_INTERRUPTS interruptFlag )
{
	switch (interruptFlag)
	{
		case SQI_PKTCOMP:
			_SFR_BIT_WRITE (_SQI_PKTCOMP_INTSIG_ENABLE_VREG(index),
                                        _SQI_PKTCOMP_INTSIG_ENABLE_POS(index),
					0);
		break;
		case SQI_BDDONE:
			_SFR_BIT_WRITE (_SQI_BDDONE_INTSIG_ENABLE_VREG(index),
					_SQI_BDDONE_INTSIG_ENABLE_POS(index),
					0);
		break;
		case SQI_CONTHR:
			_SFR_BIT_WRITE (_SQI_CONTHR_INTSIG_ENABLE_VREG(index),
					_SQI_CONTHR_INTSIG_ENABLE_POS(index),
					0);
		break;
		case SQI_CONEMPTY:
			_SFR_BIT_WRITE (_SQI_CONEMPTY_INTSIG_ENABLE_VREG(index),
					_SQI_CONEMPTY_INTSIG_ENABLE_POS(index),
					0);
		break;
		case SQI_CONFULL:
			_SFR_BIT_WRITE (_SQI_CONFULL_INTSIG_ENABLE_VREG(index),
					_SQI_CONFULL_INTSIG_ENABLE_POS(index),
					0);
		break;
		case SQI_RXTHR:
			_SFR_BIT_WRITE (_SQI_RXTHR_INTSIG_ENABLE_VREG(index),
					_SQI_RXTHR_INTSIG_ENABLE_POS(index),
					0);
		break;
		case SQI_RXFULL:
			_SFR_BIT_WRITE (_SQI_RXFULL_INTSIG_ENABLE_VREG(index),
					_SQI_RXFULL_INTSIG_ENABLE_POS(index),
					0);
		break;
		case SQI_RXEMPTY:
			_SFR_BIT_WRITE (_SQI_RXEMPTY_INTSIG_ENABLE_VREG(index),
					_SQI_RXEMPTY_INTSIG_ENABLE_POS(index),
					0);
		break;
		case SQI_TXTHR:
			_SFR_BIT_WRITE (_SQI_TXTHR_INTSIG_ENABLE_VREG(index),
                                        _SQI_TXTHR_INTSIG_ENABLE_POS(index),
					0);
		break;
		case SQI_TXFULL:
			_SFR_BIT_WRITE (_SQI_TXFULL_INTSIG_ENABLE_VREG(index),
					_SQI_TXFULL_INTSIG_ENABLE_POS(index),
					0);
		break;
		case SQI_TXEMPTY:
			_SFR_BIT_WRITE (_SQI_TXEMPTY_INTSIG_ENABLE_VREG(index),
					_SQI_TXEMPTY_INTSIG_ENABLE_POS(index),
					0);
		break;
		default:
			_SFR_BIT_WRITE (_SQI_TXFULL_INTSIG_ENABLE_VREG(index),
					_SQI_TXFULL_INTSIG_ENABLE_POS(index),
					0);
	}
}


//******************************************************************************
/* Function :  SQI_InterruptSignalIsEnabled_Default

  Summary:
    Implements Default variant of PLIB_SQI_InterruptSignalIsEnabled

  Description:
    This template implements the Default variant of the PLIB_SQI_InterruptSignalIsEnabled function.
*/

PLIB_TEMPLATE bool SQI_InterruptSignalIsEnabled_Default( SQI_MODULE_ID index , SQI_INTERRUPTS interruptFlag )
{
	switch (interruptFlag)
	{
		case SQI_PKTCOMP:
			return (bool) _SFR_BIT_READ (_SQI_PKTCOMP_INTSIG_ENABLE_VREG(index),
                                                     _SQI_PKTCOMP_INTSIG_ENABLE_POS(index));
		break;
		case SQI_BDDONE:
			return (bool) _SFR_BIT_READ (_SQI_BDDONE_INTSIG_ENABLE_VREG(index),
                                                     _SQI_BDDONE_INTSIG_ENABLE_POS(index));
		break;
		case SQI_CONTHR:
			return (bool) _SFR_BIT_READ (_SQI_CONTHR_INTSIG_ENABLE_VREG(index),
                                                     _SQI_CONTHR_INTSIG_ENABLE_POS(index));
		break;
		case SQI_CONEMPTY:
			return (bool) _SFR_BIT_READ (_SQI_CONEMPTY_INTSIG_ENABLE_VREG(index),
                                                     _SQI_CONEMPTY_INTSIG_ENABLE_POS(index));
		break;
		case SQI_CONFULL:
			return (bool) _SFR_BIT_READ (_SQI_CONFULL_INTSIG_ENABLE_VREG(index),
                                                     _SQI_CONFULL_INTSIG_ENABLE_POS(index));
		break;
		case SQI_RXTHR:
			return (bool) _SFR_BIT_READ (_SQI_RXTHR_INTSIG_ENABLE_VREG(index),
                                                     _SQI_RXTHR_INTSIG_ENABLE_POS(index));
		break;
		case SQI_RXEMPTY:
			return (bool) _SFR_BIT_READ (_SQI_RXEMPTY_INTSIG_ENABLE_VREG(index),
                                                     _SQI_RXEMPTY_INTSIG_ENABLE_POS(index));
		break;
		case SQI_RXFULL:
			return (bool) _SFR_BIT_READ (_SQI_RXFULL_INTSIG_ENABLE_VREG(index),
                                                     _SQI_RXFULL_INTSIG_ENABLE_POS(index));
		break;
		case SQI_TXTHR:
			return (bool) _SFR_BIT_READ (_SQI_TXTHR_INTSIG_ENABLE_VREG(index),
                                                     _SQI_TXTHR_INTSIG_ENABLE_POS(index));
		break;
		case SQI_TXEMPTY:
			return (bool) _SFR_BIT_READ (_SQI_TXEMPTY_INTSIG_ENABLE_VREG(index),
                                                     _SQI_TXEMPTY_INTSIG_ENABLE_POS(index));
		break;
		case SQI_TXFULL:
			return (bool) _SFR_BIT_READ (_SQI_TXFULL_INTSIG_ENABLE_VREG(index),
                                                     _SQI_TXFULL_INTSIG_ENABLE_POS(index));
		break;
		default:
			return (bool) _SFR_BIT_READ (_SQI_TXFULL_INTSIG_ENABLE_VREG(index),
                                                     _SQI_TXFULL_INTSIG_ENABLE_POS(index));
	}
}


//******************************************************************************
/* Function :  SQI_ExistsInterruptSignalControl_Default

  Summary:
    Implements Default variant of PLIB_SQI_ExistsInterruptSignalControl

  Description:
    This template implements the Default variant of the PLIB_SQI_ExistsInterruptSignalControl function.
*/

#define PLIB_SQI_ExistsInterruptSignalControl PLIB_SQI_ExistsInterruptSignalControl
PLIB_TEMPLATE bool SQI_ExistsInterruptSignalControl_Default( SQI_MODULE_ID index )
{
    return true;
}


#endif /*_SQI_INTERRUPTSIGNALCONTROL_DEFAULT_H*/

/******************************************************************************
 End of File
*/

