/*******************************************************************************
  MRF24WG Wi-Fi Driver SPI Chip Select Macros

  File Name:
    drv_wifi_spi.h

  Summary:
    MRF24WG Wi-Fi Driver SPI Chip Select Macros

  Description:
    MRF24WG Wi-Fi Driver SPI Chip Select Macros
 *******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2015 released Microchip Technology Inc. All rights reserved.

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

#ifndef _DRV_WIFI_SPI_H
#define _DRV_WIFI_SPI_H

// Using I/O as SPI Chip Select
#define WF_CS_Init() {PLIB_PORTS_PinDirectionOutputSet(PORTS_ID_0, WF_CS_PORT_CHANNEL, WF_CS_BIT_POS);}
#if defined(EAGLEEYE2014)
#define WF_CS_Assert()      {SYS_PORTS_PinSet(PORTS_ID_0, DRV_SST25VF016B_CHIP_SELECT_PORT_CHANNEL_IDX0, DRV_SST25VF016B_CHIP_SELECT_PORT_BIT_POS_IDX0);Nop();Nop();Nop();Nop();Nop();SYS_PORTS_PinClear(PORTS_ID_0, WF_CS_PORT_CHANNEL, WF_CS_BIT_POS);}
#else
#define WF_CS_Assert()      {SYS_PORTS_PinClear(PORTS_ID_0, WF_CS_PORT_CHANNEL, WF_CS_BIT_POS);}
#endif
#define WF_CS_Deassert() {SYS_PORTS_PinSet(PORTS_ID_0, WF_CS_PORT_CHANNEL, WF_CS_BIT_POS);}

#endif /* _DRV_WIFI_SPI_H */

// DOM-IGNORE-END
