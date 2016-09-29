/*******************************************************************************
  MPLAB Harmony Application Source File
  
  Company:
    Microchip Technology Inc.
  
  File Name:
    app.c

  Summary:
    This file contains the source code for the MPLAB Harmony application.

  Description:
    This file contains the source code for the MPLAB Harmony application.  It 
    implements the logic of the application's state machine and it may call 
    API routines of other MPLAB Harmony modules in the system, such as drivers,
    system services, and middleware.  However, it does not call any of the
    system interfaces (such as the "Initialize" and "Tasks" functions) of any of
    the modules in the system or make any assumptions about when those functions
    are called.  That is the responsibility of the configuration-specific system
    files.
 *******************************************************************************/

// DOM-IGNORE-BEGIN
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
// DOM-IGNORE-END


// *****************************************************************************
// *****************************************************************************
// Section: Included Files 
// *****************************************************************************
// *****************************************************************************

#include "app.h"

// *****************************************************************************
// *****************************************************************************
// Section: Global Data Definitions
// *****************************************************************************
// *****************************************************************************
extern BSP_DATA bspData;
// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    This structure should be initialized by the APP_Initialize function.
    
    Application strings and buffers are be defined outside this structure.
*/

APP_DATA appData;
uint8_t AN2String[8];
uint8_t AN4String[8];
AN_SENSOR   pot = {0}, tem = {0};
//MY_QUEUE_OBJECT publishObject = {false, false, false, false, false, false, false, false, false};
// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

/* TODO:  Add any necessary callback funtions.
*/


// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************




// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Remarks:
    See prototype in app.h.
 */

//#include "pubnubDemo.h"
#include "pubnubStaticDemo.h"

void APP_Initialize ( void )
{
    /* Place the App state machine in its initial state. */
    appData.state = APP_STATE_INIT;
    appData.datarequest = 0;
    appData.ping = 0;
    appData.datasent = 0;
    appData.msg_queue_index = 0;
    init_queue(&appData.myQueue);
}


/******************************************************************************
  Function:
    void APP_Tasks ( void )

  Remarks:
    See prototype in app.h.
 */
#define LED_IOCTL()       TRISHCLR = (1<<0)
#define LED_SETON()       LATHSET = (1<<0)
#define LED_OPEN()        ANSELH &= 0xFFFFFFFE

void APP_Tasks ( void )
{
    SYS_STATUS          tcpipStat;
    const char          *netName, *netBiosName;
    static IPV4_ADDR    dwLastIP[2] = { {-1}, {-1} };
    IPV4_ADDR           ipAddr;
    TCPIP_NET_HANDLE    netH;
    int                 i, nNets;
    

    ProcessIO();
    Nop();

    /* Check the application's current state. */
    switch ( appData.state )
    {
        /* Application's initial state. */
        case APP_STATE_INIT:
        {
            tcpipStat = TCPIP_STACK_Status(sysObj.tcpip);
            if(tcpipStat < 0)
            {   // some error occurred
                SYS_CONSOLE_MESSAGE(" APP: TCP/IP stack initialization failed!\r\n");
                appData.state = APP_TCPIP_ERROR;
            }
            else if(tcpipStat == SYS_STATUS_READY)
            {
                // now that the stack is ready we can check the
                // available interfaces
                nNets = TCPIP_STACK_NumberOfNetworksGet();
                for(i = 0; i < nNets; i++)
                {

                    netH = TCPIP_STACK_IndexToNet(i);
                    netName = TCPIP_STACK_NetNameGet(netH);
                    netBiosName = TCPIP_STACK_NetBIOSName(netH);

#if defined(TCPIP_STACK_USE_NBNS)
                    SYS_CONSOLE_PRINT("    Interface %s on host %s - NBNS enabled\r\n", netName, netBiosName);
#else
                    SYS_CONSOLE_PRINT("    Interface %s on host %s - NBNS disabled\r\n", netName, netBiosName);
#endif  // defined(TCPIP_STACK_USE_NBNS)

                }
                appData.state = APP_TCPIP_WAIT_FOR_IP;

            }
            break;
        }
        case APP_TCPIP_WAIT_FOR_IP:

            // if the IP address of an interface has changed
            // display the new value on the system console
            nNets = TCPIP_STACK_NumberOfNetworksGet();

            for (i = 0; i < nNets; i++)
            {
                netH = TCPIP_STACK_IndexToNet(i);
                ipAddr.Val = TCPIP_STACK_NetAddress(netH);
                if(dwLastIP[i].Val != ipAddr.Val)
                {
                    dwLastIP[i].Val = ipAddr.Val;

                    SYS_CONSOLE_MESSAGE(TCPIP_STACK_NetNameGet(netH));
                    SYS_CONSOLE_MESSAGE(" IP Address: ");
                    SYS_CONSOLE_PRINT("%d.%d.%d.%d \r\n", ipAddr.v[0], ipAddr.v[1], ipAddr.v[2], ipAddr.v[3]);
                    if (ipAddr.v[0] != 0 && ipAddr.v[0] != 169) // Wait for a Valid IP
                    {
                        appData.state = APP_TCPIP_WAITING_FOR_INIT;
                    }
                }
            }
            break;

        case APP_TCPIP_WAITING_FOR_INIT:
        {

            PubnubStaticDemoInit();
            appData.state =  APP_TCPIP_PUBNUB;
        }
        break;

        default:
        {
            
            PubnubStaticDemoProcess();
            break;
        }
    }
}

bool APP_ReadSensor(AN_SENSOR* in, uint16_t* ch)
{

    in->reading[in->count] = *ch;
    in->tot += in->reading[in->count++];
    if(in->count == SIZE_READING)
    {
        in->ave = in->tot/in->count;
        in->count = 0;
        in->tot = 0;
        return 1;
    }
    return 0;
}

// Processes A/D data from the potentiometer
static void ProcessIO(void)
{
    static uint16_t potCurrent, temCurrent;
    static uint32_t t1;
    // Send a publish for each switch press
    // If a switch is detected, we set the flag to publish its value and put this
    // publish onto the message queue
    MY_QUEUE_OBJECT publishObject = {false, false, false, false, false, false, false, false, false};
    // Convert potentiometer result into ASCII string
    #if defined(__32MX795F512L__)
        uitoa((uint16_t)ADC1BUF2, AN2String);   //Potentiometer
        uitoa((uint16_t)ADC1BUF4, AN4String);   //Temperature
    #else
        uitoa((WORD)ADC1BUF0, AN0String);
    #endif
    
    if( APP_TIMER_Expired_ms(&t1, 100) )
    {
        APP_TIMER_Set(&t1);
        if( APP_ReadSensor(&pot, &ADC1BUF2) ){
            potCurrent = pot.ave;
        }
        if( APP_ReadSensor(&tem, &ADC1BUF4) ){
            temCurrent = tem.ave;
        }
        
    }
    if(appData.potentiometer != potCurrent)
    {
        publishObject.potentiometer_value = true;
        appData.potentiometer = potCurrent;
        appData.pubFlag = 1;
        publishObject.potentiometer = appData.potentiometer;
    }
    if(appData.temperature != temCurrent)
    {
        publishObject.temperature_value = true;
        appData.temperature = temCurrent;
        appData.pubFlag = 1;
        publishObject.temperature = appData.temperature;
    }
        
    
//    memset(&publishObject, false, sizeof(publishObject));
#if defined(__C30__) || defined(__C32__)
    if(BSP_SWITCH_SwitchTest(BSP_SWITCH_1) != bspData.previousStateS1)
    {
        appData.pubFlag = 1;
        publishObject.s1 = true;
        publishObject.stateSW1 = bspData.s1;
        bspData.previousStateS1 = BSP_SWITCH_SwitchTest(BSP_SWITCH_1);
    }
    if(BSP_SWITCH_SwitchTest(BSP_SWITCH_2) != bspData.previousStateS2)
    {
        appData.pubFlag = 1;
        publishObject.s2 = true;
        publishObject.stateSW2 = bspData.s2;
        bspData.previousStateS2 = BSP_SWITCH_SwitchTest(BSP_SWITCH_2);
    }
    if(bspData.s3 != bspData.previousStateS3)
    {
        appData.pubFlag = 1;
        publishObject.s3 = true;
        publishObject.stateSW3 = bspData.s3;
        bspData.previousStateS3 = BSP_SWITCH_SwitchTest(3);
    }
    if(BSP_SWITCH_SwitchTest(BSP_SWITCH_4) != bspData.previousStateS4)
    {
        appData.pubFlag = 1;
        publishObject.s4 = true;
        publishObject.stateSW4 = bspData.s4;
        bspData.previousStateS4 = BSP_SWITCH_SwitchTest(BSP_SWITCH_4);
    }
    
    // If any of the switches or potentiometer flags for a publish, we queue 
            // the publish object onto the queue to be processed
    if(appData.pubFlag == 1)
    {        
        enqueue((&appData.myQueue), publishObject);
        appData.pubFlag = 0;  
//        uint8_t i;
//        for( i = 0; i < MY_QUEUE_SIZE; i++){
//            if(appData.myQueue.message_queue[i].s1)
//                SYS_CONSOLE_PRINT("Queue at %d. stateSW1=%s\r\n", i, (appData.myQueue.message_queue[i].stateSW1) ? "released" : "pressed" );
//    
//        }
        appData.datarequest = 1;
    }
    if(!appData.datarequest && !appData.ping)
        if( appData.msg_queue_index != appData.myQueue.front){
            appData.msg_queue_index++;

            if(appData.msg_queue_index >= MY_QUEUE_SIZE)
                    appData.msg_queue_index = 0;
            SYS_CONSOLE_PRINT("qindex now %d...\r\n", appData.msg_queue_index);
        }
    
    if(appData.msg_queue_index > appData.myQueue.front){
        appData.msg_queue_index = appData.myQueue.front;
    }  
    
    
#else
    // AN0 should already be set up as an analog input
    ADCON0bits.GO = 1;

    // Wait until A/D conversion is done
    while(ADCON0bits.GO);

    // AD converter errata work around (ex: PIC18F87J10 A2)
    #if !defined(__18F87J50) && !defined(_18F87J50) && !defined(__18F87J11) && !defined(_18F87J11) 
    {
        BYTE temp = ADCON2;
        ADCON2 |= 0x7;    // Select Frc mode by setting ADCS0/ADCS1/ADCS2
        ADCON2 = temp;
    }
    #endif

    // Convert 10-bit value into ASCII string
    uitoa(*((WORD*)(&ADRESL)), AN0String);
#endif
}

bool APP_TIMER_Expired(uint32_t * timer, uint32_t seconds)
{
    if((SYS_TMR_TickCountGet() - *timer) > (seconds * 1000))
    {
        return true;
    }
    else
    {
        return false;
    }
    return false;
}

bool APP_TIMER_Expired_ms(uint32_t * timer, uint32_t mseconds)
{
    if((SYS_TMR_TickCountGet() - *timer) > (mseconds)) 
    {
        return true;
    }
    else
    {
        return false;
    }
    return false;
}

bool APP_TIMER_Set(uint32_t * timer)
{
    *timer = SYS_TMR_TickCountGet();
    return true;
}

/*******************************************************************************
 End of File
 */
