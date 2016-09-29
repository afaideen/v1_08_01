/*******************************************************************************
  MPLAB Harmony Application Header File

  Company:
    Microchip Technology Inc.

  File Name:
    app.h

  Summary:
    This header file provides prototypes and definitions for the application.

  Description:
    This header file provides function prototypes and data type definitions for
    the application.  Some of these are required by the system (such as the
    "APP_Initialize" and "APP_Tasks" prototypes) and some of them are only used
    internally by the application (such as the "APP_STATES" definition).  Both
    are defined here for convenience.
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

#ifndef _APP_H
#define _APP_H


// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include "system_config.h"
#include "system_definitions.h"
#include "queue.h"

// *****************************************************************************
// *****************************************************************************
// Section: Type Definitions
// *****************************************************************************
// *****************************************************************************


#define APP_HTTP_FNV  0xc96448a5
#define APP_HTTPS_FNV 0xdedea8e2

// *****************************************************************************
/* Application states

  Summary:
    Application states enumeration

  Description:
    This enumeration defines the valid application states.  These states
    determine the behavior of the application at various times.
*/

typedef enum
{
	/* Application's state machine's initial state. */
	APP_STATE_INIT=0,
        APP_TCPIP_WAIT_FOR_TCPIP_INIT,
        APP_TCPIP_WAIT_FOR_IP,
        APP_TCPIP_WAITING_FOR_INIT,
        APP_TCPIP_PUBNUB,
        APP_TCPIP_WAITING_FOR_COMMAND,
        APP_TCPIP_PROCESS_COMMAND,
        APP_TCPIP_WAIT_ON_DNS,
        APP_TCPIP_START_CONNECTION,
        APP_TCPIP_WAIT_FOR_CONNECTION,
        APP_TCPIP_WAIT_FOR_SSL_CONNECT,
        APP_TCPIP_SEND_REQUEST,
        APP_TCPIP_WAIT_FOR_RESPONSE,
        APP_TCPIP_SEND_REQUEST_SSL,
        APP_TCPIP_WAIT_FOR_RESPONSE_SSL,
        APP_TCPIP_CLOSE_CONNECTION,
        APP_TCPIP_ERROR
} APP_STATES;


// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    Application strings and buffers are be defined outside this structure.
 */

typedef struct
{
    /* The application's current state */
    APP_STATES state;
    MY_QUEUE myQueue;
    uint32_t pubFlag;
    bool        datasent, datarequest, ping;
    uint8_t     msg_queue_index;
    uint32_t potentiometer, temperature;

    /* TODO: Define any additional data used by the application. */
    NET_PRES_SKT_HANDLE_T socket;
    TCP_PORT port;
    void* ctx;
    void* ssl;
    char urlBuffer[256];
    char * host;
    char * path;
    uint8_t ipMode;
    uint8_t queryState;
    int8_t cyasslConnectionState;
    bool cyaSSLLogEnabled;

    uint64_t testStart;
    uint64_t dnsComplete;
    uint64_t connectionOpened;
    uint64_t sslNegComplete;
    uint64_t firstRxDataPacket;
    uint64_t lastRxDataPacket;
    IP_MULTI_ADDRESS address;

    uint32_t rawBytesReceived;
    uint32_t rawBytesSent;
    uint32_t clearBytesReceived;
    uint32_t clearBytesSent;

} APP_DATA;


// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Routines
// *****************************************************************************
// *****************************************************************************
/* These routines are called by drivers when certain events occur.
*/

	
// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Summary:
     MPLAB Harmony application initialization routine.

  Description:
    This function initializes the Harmony application.  It places the 
    application in its initial state and prepares it to run so that its 
    APP_Tasks function can be called.

  Precondition:
    All other system initialization routines should be called before calling
    this routine (in "SYS_Initialize").

  Parameters:
    None.

  Returns:
    None.

  Example:
    <code>
    APP_Initialize();
    </code>

  Remarks:
    This routine must be called from the SYS_Initialize function.
*/

void APP_Initialize ( void );


/*******************************************************************************
  Function:
    void APP_Tasks ( void )

  Summary:
    MPLAB Harmony Demo application tasks function

  Description:
    This routine is the Harmony Demo application's tasks function.  It
    defines the application's state machine and core logic.

  Precondition:
    The system and application initialization ("SYS_Initialize") should be
    called before calling this.

  Parameters:
    None.

  Returns:
    None.

  Example:
    <code>
    APP_Tasks();
    </code>

  Remarks:
    This routine must be called from SYS_Tasks() routine.
 */

void APP_Tasks ( void );
bool APP_ReadSensor(AN_SENSOR* in, uint16_t* ch);
static void ProcessIO(void);
bool APP_TIMER_Expired(uint32_t * timer, uint32_t seconds);
bool APP_TIMER_Expired_ms(uint32_t * timer, uint32_t mseconds);
bool APP_TIMER_Set(uint32_t * timer);

#endif /* _APP_H */
/*******************************************************************************
 End of File
 */
