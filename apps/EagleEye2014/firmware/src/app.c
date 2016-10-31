/*******************************************************************************
  File Name:
    app.c

  Summary:


  Description:

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
#include <string.h>

#if defined(TCPIP_STACK_USE_ZEROCONF_MDNS_SD)
#define IS_MDNS_RUN() true
#else
#define IS_MDNS_RUN() false
#define TCPIP_MDNS_ServiceRegister(a, b, c, d, e, f, g, h) do {} while (0)
#define TCPIP_MDNS_ServiceDeregister(a) do {} while (0)
#endif /* defined(TCPIP_STACK_USE_ZEROCONF_MDNS_SD) */

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
AN_SENSOR   pot, tem, hum, lgt, wtr, batt, adc;
BSP_LED_STATE LEDstate = BSP_LED_STATE_OFF;
extern SENSOR_TYPE_SIGNAL sensor;

#if defined(TCPIP_IF_MRF24W) || defined(TCPIP_IF_MRF24WN)
static const bool s_app_wifi = true;
#else
static const bool s_app_wifi = false;
#endif

// *****************************************************************************
// *****************************************************************************
// Section: Application Callback Functions
// *****************************************************************************
// *****************************************************************************

/* TODO:  Add any necessary callback functions.
*/

// *****************************************************************************
// *****************************************************************************
// Section: Application Local Functions
// *****************************************************************************
// *****************************************************************************

/* TODO:  Add any necessary local functions.
*/

#if defined(TCPIP_IF_MRF24W) || defined(TCPIP_IF_MRF24WN)
extern void APP_WIFI_Initialize(void);
extern void APP_WIFI_Tasks(void);
#else /* !defined(TCPIP_IF_MRF24W) && !defined(TCPIP_IF_MRF24WN) */
#define APP_WIFI_Initialize() do { } while (0)
#define APP_WIFI_Tasks() do { } while (0)
#endif /* defined(TCPIP_IF_MRF24W) || defined(TCPIP_IF_MRF24WN) */

// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
extern RTCC _time;
// *****************************************************************************


TCPIP_NET_HANDLE    netH;
/*******************************************************************************
  Function:
    void APP_Initialize ( void )

  Remarks:
    See prototype in app.h.
 */
void APP_Initialize ( void )
{
    time_t	whattime_init;
    struct tm *newtime;
#if defined(AWS_IOT)
    appData.port = APP_PORT;
    // Init LED publish bools
    appData.led1 = false;
    appData.led2 = false;
    appData.led3 = false;
    appData.led4 = false;
    init_queue(&appData.myQueue);
    if( InitAppConfig2(&appData.config, sizeof(appData.config)) )
        Nop();
#else
   
    
    #if defined(DRV_SST25VF016B_CLIENTS_NUMBER)
        appData.memory = InitAppConfig2(&appData.config, sizeof(appData.config)); 
    #endif 
    DS1307_Init();
    ////////////////////////////////UPDATE RTC
    show_clock();
	whattime_init = ConvertTime(); 
  
 	if(whattime > whattime_init)
 	{
	    newtime = gmtime(&whattime);	    	
	    update_ds1307(newtime);
	 	appData.config.TimeNow = whattime;
	}	
	else if(whattime_init <= 0x5378DD0C)//
	{
		strcpy( _date_str, __DATE__);
		strcpy( _time_str, __TIME__);
		setRTC(&_time, &_time_str, &_date_str);	
		wr2_ds1307(CRUN, &_time );
	    whattime = ConvertTime();   
	    appData.config.TimeNow = whattime;
		
	}
	else
		appData.config.TimeNow = whattime_init;
    ////////////////////////////////
    SENSOR_Init_Temperature();
    SENSOR_Init_Rlysw();
    SENSOR_Init_Drycontact();
    SENSOR_Init_Led();
    SENSOR_Init_Light();
    SENSOR_Init_Water();
    SENSOR_Init_Battery();
    SENSOR_Init_Adc();
    SENSOR_Init_Charger();
    SENSOR_Init_BckupBattery();
    SENSOR_Init_Dcin();
    if(s_app_wifi)
       APP_WIFI_Initialize();
    
#endif

    /* Place the application state machine in its initial state. */
    appData.state = APP_MOUNT_DISK;
    appData.reboot = 0;
#if defined(USE_LCD)
    strcpy((char*)LCDText, "Harmony v" SYS_VERSION_STR ); 
    LCDUpdate();
#endif
}
IPV4_ADDR           ipAddr;

/******************************************************************************
  Function:
    void APP_Tasks ( void )

  Remarks:
    See prototype in app.h.
 */
void APP_Tasks ( void )
{
    SYS_STATUS          tcpipStat;
    
    int                 nNets;
    static IPV4_ADDR    dwLastIP[2] = { {-1}, {-1} };
    
    int                 i;
    const char          *netName, *netBiosName;
    static uint32_t     startTick = 0;

    if( appData.reboot && APP_TIMER_Expired(&appData.rebootTimer, 5) )
    {
        putsUART("Reboot..");
        DelayMs(1000);
        APP_TIMER_Set(&appData.rebootTimer);
        appData.reboot = 0;
        SYS_RESET_SoftwareReset();
    }
    ProcessIO();
#if defined(AWS_IOT)
    APP_AWSIOT_Tasks();
#endif
    if(s_app_wifi) {
        APP_WIFI_Tasks();
        return;
    }

    switch(appData.state)
    {
        case APP_MOUNT_DISK:
#if defined(DRV_SST25VF016B_CLIENTS_NUMBER)

            if(SYS_FS_Mount(SYS_FS_MEDIA_IDX0_DEVICE_NAME_VOLUME_IDX0, LOCAL_WEBSITE_PATH_FS, MPFS2, 0, NULL) == 0 )
#else
            if(SYS_FS_Mount(SYS_FS_NVM_VOL, LOCAL_WEBSITE_PATH_FS, MPFS2, 0, NULL) == 0)
#endif
            {
                SYS_CONSOLE_PRINT("SYS_Initialize: The %s File System is mounted\r\n", SYS_FS_MPFS_STRING);
                appData.state = APP_TCPIP_WAIT_INIT;
                BSP_LED_LightShowSet(BSP_LED_EASY_CONFIGURATION);
            }
            else
            {
                BSP_LED_LightShowSet(BSP_LED_NVM_FAILED_MOUNT);
                Nop();
                //SYS_CONSOLE_PRINT("SYS_Initialize: Mount the %s File System, pending\r\n", SYS_FS_MPFS_STRING);
            }
            
            break;

        case APP_TCPIP_WAIT_INIT:
            tcpipStat = TCPIP_STACK_Status(sysObj.tcpip);
            if(tcpipStat < 0)
            {   // some error occurred
                SYS_CONSOLE_MESSAGE("APP: TCP/IP stack initialization failed!\r\n");
                appData.state = APP_TCPIP_ERROR;
                sysObj.tcpip = TCPIP_STACK_Init();
                Nop();
            }
            else if(tcpipStat == SYS_STATUS_READY)
            {
                // now that the stack is ready we can check the
                // available interfaces and register
                // a Bonjour service
                if(appData.config.Flags.bIsDHCPEnabled == 0){
                    if( TCPIP_DHCP_Disable(netH) ){
//                        if(TCPIP_STACK_NetAddressSet(netH, &appData.config.MyIPAddr, &appData.config.MyMask, true))
//                        {
//                            SYS_CONSOLE_MESSAGE("IP set..\r\n");
//                        }
//                        TCPIP_STACK_NetAddressGatewaySet(netH, &appData.config.MyGateway);
//                        TCPIP_STACK_NetAddressDnsPrimarySet(netH, &appData.config.PrimaryDNSServer);
//                        TCPIP_STACK_NetAddressDnsSecondSet(netH, &appData.config.SecondaryDNSServer);
                        

                        SYS_CONSOLE_MESSAGE("DHCP off..\r\n");
                    }
                }
                else
                    if(TCPIP_DHCP_Enable(netH))
                        SYS_CONSOLE_MESSAGE("DHCP on..\r\n");
//                if(strcmp(TCPIP_STACK_NetBIOSName(netH), &appData.config.NetBIOSName))
//                    TCPIP_STACK_NetBiosNameSet(netH, &appData.config.NetBIOSName);                        
//                if(memcmp(TCPIP_STACK_NetAddressMac(netH), &appData.config.macAddress, 6) )
//                {
//                    SYS_CONSOLE_MESSAGE("mac changed..\r\n");
//                    TCPIP_STACK_NetAddressMacSet(netH, &appData.config.macAddress);
//                }
//                netConfig.pMacObject = TCPIP_STACK_MACObjectGet(netH);
//                resetHttpCon = 1;
//                DelayMs(100);
//                TCPIP_STACK_NetDown(netH);
//                TCPIP_STACK_NetUp(netH, &netConfig);

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
#endif // defined(TCPIP_STACK_USE_NBNS)
  #if defined(AWS_IOT)                  
                    TCPIP_MAC_ADDR* pAdd = 0;
                    pAdd = (TCPIP_MAC_ADDR *)TCPIP_STACK_NetAddressMac(netH);
                    // Store UUID for application
                    appData.config.macAddress.v[5] = pAdd->v[5];
                    appData.config.macAddress.v[4] = pAdd->v[4];
                    appData.config.macAddress.v[3] = pAdd->v[3];
                    appData.config.macAddress.v[2] = pAdd->v[2];
                    appData.config.macAddress.v[1] = pAdd->v[1];
                    appData.config.macAddress.v[0] = pAdd->v[0];
                    // Convert to string
                    sprintf(appData.config.uuid, "%02x%02x%02x%02x%02x%02x",
                            appData.config.macAddress.v[0], appData.config.macAddress.v[1], appData.config.macAddress.v[2],
                            appData.config.macAddress.v[3], appData.config.macAddress.v[4], appData.config.macAddress.v[5]);
                    Nop();
#endif

#if defined(TCPIP_STACK_USE_ZEROCONF_MDNS_SD)
                    // base name of the service Must not exceed 16 bytes long
                    // the last digit will be incremented by interface
                    char mDNSServiceName[] = "MyWebServiceNameX "; 
//                    char mDNSServiceName[16]; // base name of the service Must not exceed 16 bytes long
//                    strcpy(mDNSServiceName, &appData.config.uuid[6]); //Copy over UUID last 6 characters, 
//                    strcat(mDNSServiceName, "_IoT-E");
                    SYS_CONSOLE_PRINT("App:  Registering mDNS service as '%s'\r\n", mDNSServiceName);
                    // mDNS name will be xxxxxx_IoT-E where "xxxxxx" is the last three bytes of MAC address
                    mDNSServiceName[sizeof(mDNSServiceName) - 2] = '1' + i;
                    TCPIP_MDNS_ServiceRegister(netH
                            , mDNSServiceName                     // name of the service
                            ,"_http._tcp.local"                   // type of the service
                            ,80                                   // TCP or UDP port, at which this service is available
                            ,((const uint8_t *)"path=/index.htm") // TXT info
                            ,1                                    // auto rename the service when if needed
                            ,NULL                                 // no callback function
                            ,NULL);                               // no application context
#endif // defined(TCPIP_STACK_USE_ZEROCONF_MDNS_SD)
                    
                }

                appData.state = APP_TCPIP_TRANSACT;
            }

            break;

        case APP_TCPIP_TRANSACT:
//            APP_YahooTasks();
//            APP_Forcast_ioTasks();
//            if(memcmp(TCPIP_STACK_NetAddressMac(netH), &appData.config.macAddress, 6) )
//            {
//                SYS_CONSOLE_MESSAGE("mac changed..\r\n");
//                TCPIP_STACK_NetAddressMacSet(netH, &appData.config.macAddress);
//            }

            if(SYS_TMR_TickCountGet() - startTick >= SYS_TMR_TickCounterFrequencyGet()/2ul)
            {
                startTick = SYS_TMR_TickCountGet();
                LEDstate ^= BSP_LED_STATE_ON;
                // This is a temporary work-around
#if defined(EX16) 
            #if defined(AWS_IOT)
                BSP_LEDToggle2(BSP_LED_7_CHANNEL, BSP_LED_7_PORT);
//                BSP_LEDToggle2(BSP_LED_8_CHANNEL, BSP_LED_8_PORT);//multiplexed with switch
            #else
//                BSP_LEDStateSet(APP_TCPIP_LED_1, LEDstate);
                BSP_LEDToggle(BSP_LED_1);
            #endif
#elif defined(EAGLEEYE2014)
                LED1 ^= 1;
#else
                BSP_LEDStateSet(APP_TCPIP_LED_3, LEDstate);
#endif
            }

            // if the IP address of an interface has changed
            // display the new value on the system console
            nNets = TCPIP_STACK_NumberOfNetworksGet();

            for(i = 0; i < nNets; i++)
            {
                netH = TCPIP_STACK_IndexToNet(i);
                ipAddr.Val = TCPIP_STACK_NetAddress(netH);
                if(dwLastIP[i].Val != ipAddr.Val)
                {
#if defined(AWS_IOT)
                    appData.config.ipAddr.Val = ipAddr.Val;
#endif
                    dwLastIP[i].Val = ipAddr.Val;
#if defined(USE_LCD)
//                     SYS_CONSOLE_PRINT("%s ", TCPIP_STACK_NetNameGet(netH));
                     putsUART2(TCPIP_STACK_NetNameGet(netH));
                     putsUART2(" ");
                    DisplayIPValue(ipAddr);
#else
                    SYS_CONSOLE_PRINT("%s IP Address: %d.%d.%d.%d \r\n",
                            TCPIP_STACK_NetNameGet(netH),
                            ipAddr.v[0], ipAddr.v[1], ipAddr.v[2], ipAddr.v[3]);
#endif
                }
            }

            SYS_CMD_READY_TO_READ();

            break;

        default:
            break;
    }
}

#if defined(EEPROM_CS_TRIS) || defined(SPIFLASH_CS_TRIS)
#define MY_DEFAULT_IP_ADDR_BYTE1        (169ul)
#define MY_DEFAULT_IP_ADDR_BYTE2        (254ul)
#define MY_DEFAULT_IP_ADDR_BYTE3        (1ul)
#define MY_DEFAULT_IP_ADDR_BYTE4        (1ul)

#define MY_DEFAULT_MAC_BYTE1            (0x00)	// Use the default of 00-04-A3-00-00-00
#define MY_DEFAULT_MAC_BYTE2            (0x04)	// if using an ENCX24J600, MRF24WB0M, or
#define MY_DEFAULT_MAC_BYTE3            (0xA3)	// PIC32MX6XX/7XX internal Ethernet 
#define MY_DEFAULT_MAC_BYTE4            (0x11)	// controller and wish to use the 
#define MY_DEFAULT_MAC_BYTE5            (0x22)	// internal factory programmed MAC
#define MY_DEFAULT_MAC_BYTE6            (0x33)	// address instead.

//#pragma romdata MACROM=0x1FFF0
//static const uint8_t SerializedMACAddress[6] = {MY_DEFAULT_MAC_BYTE1, MY_DEFAULT_MAC_BYTE2, MY_DEFAULT_MAC_BYTE3, MY_DEFAULT_MAC_BYTE4, MY_DEFAULT_MAC_BYTE5, MY_DEFAULT_MAC_BYTE6};
//#pragma romdata
static unsigned short wOriginalAppConfigChecksum; // Checksum of the ROM defaults for AppConfig
uint8_t InitAppConfig2(APP_CONFIG *config, uint16_t len)
{
    unsigned char vNeedToSaveDefaults = 0;
    uint val = 0;


    while (1) {
        // Start out zeroing all AppConfig bytes to ensure all fields are
        // deterministic for checksum generation
        memset((void*)config, 0x00, len);
#if defined(AWS_IOT) 
        config->host[0] = 0;// appData.config.host[0] = 0;
#endif
        config->ipAddr.Val = MY_DEFAULT_IP_ADDR_BYTE1 | MY_DEFAULT_IP_ADDR_BYTE2<<8ul | MY_DEFAULT_IP_ADDR_BYTE3<<16ul | MY_DEFAULT_IP_ADDR_BYTE4<<24ul;        
//        memcpy((void*)config->macAddress, (const void*)SerializedMACAddress, 6);
        config->macAddress.v[0] = MY_DEFAULT_MAC_BYTE1;
        config->macAddress.v[1] = MY_DEFAULT_MAC_BYTE2;
        config->macAddress.v[2] = MY_DEFAULT_MAC_BYTE3;
        config->macAddress.v[3] = MY_DEFAULT_MAC_BYTE4;
        config->macAddress.v[4] = MY_DEFAULT_MAC_BYTE5;
        config->macAddress.v[5] = MY_DEFAULT_MAC_BYTE6;
        config->Flags.bIsDHCPEnabled = 1;
        SENSOR_Initialize_Setting();
#if defined(TCPIP_IF_MRF24W) || defined(TCPIP_IF_MRF24WN)       
        memcpy(config->wifi.ssid, (ROM void*)DRV_WIFI_DEFAULT_SSID, sizeof(DRV_WIFI_DEFAULT_SSID));
        config->wifi.ssidLen = sizeof(DRV_WIFI_DEFAULT_SSID) - 1;
        config->wifi.securityMode = DRV_WIFI_DEFAULT_SECURITY_MODE;
        config->wifi.networkType = DRV_WIFI_DEFAULT_NETWORK_TYPE;
#endif
        // Compute the checksum of the AppConfig defaults as loaded from ROM
        wOriginalAppConfigChecksum = CalcIPChecksum((uint8_t *) config, len);

#if defined(EEPROM_CS_TRIS) || defined(SPIFLASH_CS_TRIS)
        {
            NVM_VALIDATION_STRUCT NVMValidationStruct;

            // Check to see if we have a flag set indicating that we need to
            // save the ROM default AppConfig values.
            if (vNeedToSaveDefaults)
                SaveAppConfig(config, 0);

            // Read the NVMValidation record and AppConfig struct out of EEPROM/Flash
#if defined(EEPROM_CS_TRIS)
            {
                XEEReadArray(0x0000, (uint8_t *) & NVMValidationStruct, sizeof (NVMValidationStruct));
                XEEReadArray(sizeof (NVMValidationStruct), (uint8_t *) & AppConfig, sizeof (AppConfig));
            }
#elif defined(SPIFLASH_CS_TRIS)
            {
                SPIFlashReadArray(0x0000, (uint8_t *) & NVMValidationStruct, sizeof (NVMValidationStruct));
                SPIFlashReadArray(sizeof (NVMValidationStruct), (uint8_t *) config, len);
            }
#endif

            // Check EEPROM/Flash validity.  If it isn't valid, set a flag so
            // that we will save the ROM default values on the next loop
            // iteration.
            if ((NVMValidationStruct.wConfigurationLength != len) ||
                    (NVMValidationStruct.wOriginalChecksum != wOriginalAppConfigChecksum) ||
                    (NVMValidationStruct.wCurrentChecksum != CalcIPChecksum((uint8_t *) config, len))) {
                // Check to ensure that the vNeedToSaveDefaults flag is zero,
                // indicating that this is the first iteration through the do
                // loop.  If we have already saved the defaults once and the
                // EEPROM/Flash still doesn't pass the validity check, then it
                // means we aren't successfully reading or writing to the
                // EEPROM/Flash.  This means you have a hardware error and/or
                // SPI configuration error.
                if (vNeedToSaveDefaults) {
                    SYS_CONSOLE_MESSAGE("Memory read..fail\r\n");
                    return 0;//while(1);
                }

                // Set flag and restart loop to load ROM defaults and save them
                vNeedToSaveDefaults = 1;
                continue;
            }
//            if(NVMValidationStruct.wCurrentChecksum ==0xffff || !config->wifi.ssidLen){
            if(NVMValidationStruct.wCurrentChecksum ==0xffff 
                    #if defined(TCPIP_IF_MRF24W) || defined(TCPIP_IF_MRF24WN) 
                      || !memcmp(config->wifi.ssid, (ROM void*)DRV_WIFI_DEFAULT_SSID, sizeof(DRV_WIFI_DEFAULT_SSID))
                    #endif
                )
            {
                Nop();
                vNeedToSaveDefaults = 1;
            }

            // If we get down here, it means the EEPROM/Flash has valid contents
            // and either matches the ROM defaults or previously matched and
            // was run-time reconfigured by the user.  In this case, we shall
            // use the contents loaded from EEPROM/Flash.
            break;
        }
#endif
        break;
    }
    
    if (vNeedToSaveDefaults == 1) {
        SYS_CONSOLE_MESSAGE("Memory read..default\r\n");
        return 2;
    }        
    else
        SYS_CONSOLE_MESSAGE("Memory read..ok\r\n");
        return 1;
}


void SaveAppConfig(const APP_CONFIG *ptrAppConfig, uint32_t addr)
{
#if defined(EEPROM_CS_TRIS) || defined(SPIFLASH_CS_TRIS)
    NVM_VALIDATION_STRUCT NVMValidationStruct;


    // Ensure adequate space has been reserved in non-volatile storage to
    // store the entire AppConfig structure.  If you get stuck in this while (1)
    // trap, it means you have a design time misconfiguration in tcpip_config.h.
    // You must increase MPFS_RESERVE_BLOCK to allocate more space.
#if defined(STACK_USE_MPFS2)
    if (sizeof (NVMValidationStruct) + sizeof (AppConfig) > MPFS_RESERVE_BLOCK)
        while(1);//WF_ASSERT(false);    //Trap it.
#endif

    // Get proper values for the validation structure indicating that we can use
    // these EEPROM/Flash contents on future boot ups
    if(addr == 0){
        NVMValidationStruct.wOriginalChecksum = wOriginalAppConfigChecksum;
        NVMValidationStruct.wCurrentChecksum = CalcIPChecksum((uint8_t *) ptrAppConfig, sizeof (APP_CONFIG));
        NVMValidationStruct.wConfigurationLength = sizeof (APP_CONFIG);
    }

    // Write the validation struct and current AppConfig contents to EEPROM/Flash
#if defined(EEPROM_CS_TRIS)
    XEEBeginWrite(0x0000);
    XEEWriteArray((uint8_t *) & NVMValidationStruct, sizeof (NVMValidationStruct));
    XEEWriteArray((uint8_t *) ptrAppConfig, sizeof (APP_CONFIG));
#elif defined(SPIFLASH_CS_TRIS)
    WF_INT_IE = 0;
    if(addr == 0){
        SPIFlashBeginWrite(addr);//(0x0000);
        SPIFlashWriteArray((uint8_t *) & NVMValidationStruct, sizeof (NVMValidationStruct));
    }
    else{
        SPIFlashBeginWrite(addr+sizeof (NVMValidationStruct));
    }
    SPIFlashWriteArray((uint8_t *) ptrAppConfig, sizeof (APP_CONFIG));
    WF_INT_IE = 1;
#endif
    SYS_CONSOLE_MESSAGE("Memory saved!\r\n");
#endif
}
#endif



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

// Helper function to change state if a reset occurred on socket
void APP_TCPIP_CheckSocketWasReset(void)
{
    if(NET_PRES_SKT_WasReset(appData.socket))
    {
        appData.state = APP_TCPIP_ERROR;
    }
    return;
}

// Writes an IP address to the LCD display and the UART as available
void DisplayIPValue(IP_ADDR IPVal)
{
// printf("%u.%u.%u.%u", IPVal.v[0], IPVal.v[1], IPVal.v[2], IPVal.v[3]);
#if defined (__dsPIC33E__) || defined (__PIC24E__)
    static BYTE IPDigit[4];                        /* Needs to be declared as static to avoid the array getting optimized by C30 v3.30 compiler for dsPIC33E/PIC24E. 
                                                   Otherwise the LCD displays corrupted IP address on Explorer 16. To be fixed in the future compiler release*/
#else
    BYTE IPDigit[4];
#endif
    BYTE i;
#ifdef USE_LCD
    BYTE j;
    BYTE LCDPos=16;
    BYTE endUART[] = "\r\n";
#endif

    for(i = 0; i < sizeof(IP_ADDR); i++)
    {
        uitoa((WORD)IPVal.v[i], IPDigit);

        #if defined(STACK_USE_UART)
            putsUART((char *) IPDigit);
        #endif

        #ifdef USE_LCD
            for(j = 0; j < strlen((char*)IPDigit); j++)
            {
                LCDText[LCDPos++] = IPDigit[j];
            }
            if(i == sizeof(IP_ADDR)-1)
                break;
            LCDText[LCDPos++] = '.';
        #else
            if(i == sizeof(IP_ADDR)-1)
                break;
        #endif

        #if defined(STACK_USE_UART)
            while(BusyUART());
            WriteUART('.');
        #endif
    }

    #ifdef USE_LCD
        if(LCDPos < 32u)
            LCDText[LCDPos] = 0;
        LCDUpdate();
        putsUART(endUART);
    #endif
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
    uint8_t AN2String[8];
    uint8_t AN4String[8];
//    static uint16_t potCurrent, temCurrent;
    static uint32_t t1, t2;
    // Send a publish for each switch press
    // If a switch is detected, we set the flag to publish its value and put this
    // publish onto the message queue
    MY_QUEUE_OBJECT publishObject = {false, false, false, false, false, false, false, false, false};
    // Convert potentiometer result into ASCII string
    #if defined(__32MX795F512L__)
//        uitoa((uint16_t)ADC1BUF2, AN2String);   //Potentiometer
        uitoa((uint16_t)ADC1BUF1, AN4String);   //Temperature
    #else
        uitoa((WORD)ADC1BUF0, AN0String);
    #endif
    
    if( APP_TIMER_Expired_ms(&t1, 100) )
    {
        APP_TIMER_Set(&t1);
        
        sensor.dry[0].cur_state = DRY_DIG0;
        sensor.dry[1].cur_state = DRY_DIG1;
        sensor.dry[2].cur_state = DRY_DIG2;	
        sensor.dry[3].cur_state = DRY_DIG3;	

        if( APP_ReadSensor(&batt, &ADC1BUF0) )
        {
            sensor.battery[0].analog_val = batt.ave/(1023.0)*3.3;
            sensor.battery[0].reading = sensor.battery[0].analog_val*(100.00+2.67)/2.67;
            if(sensor.battery[0].analog_val < 0.018)
                sensor.battery[0].reading = 0;            
        }
        if( APP_ReadSensor(&tem, &ADC1BUF1) )
        {
//            temCurrent = tem.ave;
            sensor.temperature[0].analog_val = tem.ave/(1023.0)*3.3;
            sensor.temperature[0].reading = (sensor.temperature[0].analog_val - 0.5)/0.01;  
            
        }
        sensor.temperature[1].analog_val = ADC1BUF5/(1023.0)*3.3;
        sensor.temperature[1].reading = (sensor.temperature[1].analog_val - 0.5)/0.01;
        if( APP_ReadSensor(&wtr, &ADC1BUF2) )
        {
            sensor.water[0].analog_val = wtr.ave/(1023.0)*3.3;
            sensor.water[0].reading = sensor.water[0].analog_val;             
        }
        if( APP_ReadSensor(&hum, &ADC1BUF3) )
        {
//            temCurrent = hum.ave;
            sensor.humid[0].analog_val = hum.ave/(1023.0)*3.3;
            sensor.humid[0].signal = sensor.humid[0].analog_val*(100.00+300.00)/300.00;
            sensor.humid[0].reading = (sensor.humid[0].signal - 0.958)/0.0307;            
        }
        if( APP_ReadSensor(&lgt, &ADC1BUF4) )
        {
            sensor.light[0].analog_val = lgt.ave/(1023.0)*3.3;
            sensor.light[0].signal = sensor.light[0].analog_val;
            sensor.light[0].reading = sensor.light[0].signal;     
        }
        if( APP_ReadSensor(&adc, &ADC1BUFA) )
        {
            sensor.gen_adc[0].analog_val = adc.ave/(1023.0)*3.3;
            sensor.gen_adc[0].signal = sensor.gen_adc[0].analog_val;
            sensor.gen_adc[0].reading = sensor.gen_adc[0].analog_val * (100.00+200.00)/200.00;    
        }
    }
    SENSOR_Check_Drycontact();
    SENSOR_Check_Light();
    SENSOR_Check_Water();
    SENSOR_Check_Battery();
    SENSOR_Check_Adc();
    SENSOR_Check_Temperature();
    SENSOR_Check_Charger();
    SENSOR_Check_BckupBattery();
    SENSOR_Check_DcMain();

    if(appData.temperature != tem.ave)
    {
        publishObject.temperature_value = true;
        appData.temperature = tem.ave;
        appData.pubFlag = 1;
        publishObject.temperature = appData.temperature;
    }
        
    
//    memset(&publishObject, false, sizeof(publishObject));

    if(BSP_SWITCH_SwitchTest(BSP_SW_FACSETIO) != bspData.previousStateS1)
    {
        appData.pubFlag = 1;
        publishObject.s1 = true;
        publishObject.stateSW1 = bspData.s1;
        bspData.previousStateS1 = BSP_SWITCH_SwitchTest(BSP_SW_FACSETIO);
    }
   
    
    // If any of the switches or potentiometer flags for a publish, we queue 
            // the publish object onto the queue to be processed
    if(appData.pubFlag == 1)
    {        
        enqueue((&appData.myQueue), publishObject);
        appData.pubFlag = 0;  
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
#if defined(DRV_SST25VF016B_CLIENTS_NUMBER)    
    EraseMemory();  
#endif
    

}

#if defined(DRV_SST25VF016B_CLIENTS_NUMBER)
void EraseMemory(void)
{
    if(!bspData.s1)
    {
        BSP_LEDOn2(BSP_LED1_CHANNEL, BSP_LED_1);
        if( APP_TIMER_Expired(&bspData.t[0], 4) )  
        {
            SPIFlashEraseSector(0);
            SYS_CONSOLE_MESSAGE("***************************************\r\n"
                                "App:  Erasing all configuration!\r\n"
                                "***************************************\r\n");
            DelayMs(2000);
            SYS_RESET_SoftwareReset();
        }
    }
    else if(bspData.s1)
    {
        APP_TIMER_Set(&bspData.t[0]);
        LED1 = 0;
    }
    

    
}
#endif

/*******************************************************************************
 End of File
 */
