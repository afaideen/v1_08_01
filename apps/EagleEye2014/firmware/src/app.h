/*******************************************************************************
  File Name:
    app.h

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

#ifndef _APP_HEADER_H
#define _APP_HEADER_H

#define WIFI_TCPIP_WEB_SERVER_DEMO
#define WIFI_TCPIP_WEB_SERVER_DEMO_VERSION "1.0"

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
#include "system_config.h"
#include "system_definitions.h"
#include "app_commands.h"
#include "queue.h"
#include <GenericTypeDefs.h>
//#include "mqtt/src/queue.h"
#ifdef AWS_IOT
#include "app_awsiot.h"
#endif
#include "Sensor.h"

#if defined(TCPIP_IF_MRF24W) /* Wi-Fi Interface */
#include "driver/wifi/mrf24w/src/drv_wifi_config_data.h"
#include "driver/wifi/mrf24w/src/drv_wifi_iwpriv.h"
#elif defined(TCPIP_IF_MRF24WN)
#include "wdrv_mrf24wn_iwpriv.h"
#endif /* Wi-Fi Interface */

#define	ROM						const

#if defined(TCPIP_IF_MRF24W)
#define WIFI_INTERFACE_NAME "MRF24W"
#elif defined(TCPIP_IF_MRF24WN)  
#define WIFI_INTERFACE_NAME "MRF24WN"
#else

#endif
#if defined(TCPIP_IF_MRF24W) /* Wi-Fi Interface */

#define WF_DISABLED DRV_WIFI_DISABLED
#define WF_ENABLED DRV_WIFI_ENABLED

#define WF_NETWORK_TYPE_INFRASTRUCTURE DRV_WIFI_NETWORK_TYPE_INFRASTRUCTURE
#define WF_NETWORK_TYPE_ADHOC DRV_WIFI_NETWORK_TYPE_ADHOC
#define WF_NETWORK_TYPE_P2P 0xff /* Unsupported */
#define WF_NETWORK_TYPE_SOFT_AP DRV_WIFI_NETWORK_TYPE_SOFT_AP

#define WF_SECURITY_OPEN DRV_WIFI_SECURITY_OPEN
#define WF_SECURITY_WEP_40 DRV_WIFI_SECURITY_WEP_40
#define WF_SECURITY_WEP_104 DRV_WIFI_SECURITY_WEP_104
#define WF_SECURITY_WPA_WITH_KEY DRV_WIFI_SECURITY_WPA_WITH_KEY
#define WF_SECURITY_WPA_WITH_PASS_PHRASE DRV_WIFI_SECURITY_WPA_WITH_PASS_PHRASE
#define WF_SECURITY_WPA2_WITH_KEY DRV_WIFI_SECURITY_WPA2_WITH_KEY
#define WF_SECURITY_WPA2_WITH_PASS_PHRASE DRV_WIFI_SECURITY_WPA2_WITH_PASS_PHRASE
#define WF_SECURITY_WPA_AUTO_WITH_KEY DRV_WIFI_SECURITY_WPA_AUTO_WITH_KEY
#define WF_SECURITY_WPA_AUTO_WITH_PASS_PHRASE DRV_WIFI_SECURITY_WPA_AUTO_WITH_PASS_PHRASE
#define WF_SECURITY_WPS_PUSH_BUTTON DRV_WIFI_SECURITY_WPS_PUSH_BUTTON
#define WF_SECURITY_WPS_PIN DRV_WIFI_SECURITY_WPS_PIN

#define WF_DEFAULT_ADHOC_HIDDEN_SSID DRV_WIFI_DEFAULT_ADHOC_HIDDEN_SSID
#define WF_DEFAULT_ADHOC_BEACON_PERIOD DRV_WIFI_DEFAULT_ADHOC_BEACON_PERIOD
#define WF_DEFAULT_ADHOC_MODE DRV_WIFI_DEFAULT_ADHOC_MODE

#define WF_DEFAULT_POWER_SAVE DRV_WIFI_DEFAULT_POWER_SAVE

#define WF_WEP_KEY_INVALID 0xff

#define WF_ASSERT(condition, msg) DRV_WIFI_ASSERT(condition, msg)

typedef DRV_WIFI_SCAN_RESULT WF_SCAN_RESULT;
typedef DRV_WIFI_CONFIG_DATA WF_CONFIG_DATA;
typedef DRV_WIFI_DEVICE_INFO WF_DEVICE_INFO;
typedef DRV_WIFI_ADHOC_NETWORK_CONTEXT WF_ADHOC_NETWORK_CONTEXT;

#elif defined(TCPIP_IF_MRF24WN) /* Wi-Fi Interface */

#define WF_DISABLED WDRV_FUNC_DISABLED
#define WF_ENABLED WDRV_FUNC_ENABLED

#define WF_NETWORK_TYPE_INFRASTRUCTURE WDRV_NETWORK_TYPE_INFRASTRUCTURE
#define WF_NETWORK_TYPE_ADHOC WDRV_NETWORK_TYPE_ADHOC
#define WF_NETWORK_TYPE_P2P WDRV_NETWORK_TYPE_P2P
#define WF_NETWORK_TYPE_SOFT_AP WDRV_NETWORK_TYPE_SOFT_AP

#define WF_SECURITY_OPEN WDRV_SECURITY_OPEN
#define WF_SECURITY_WEP_40 WDRV_SECURITY_WEP_40
#define WF_SECURITY_WEP_104 WDRV_SECURITY_WEP_104
#define WF_SECURITY_WPA_WITH_KEY 0xff /* Unsupported */
#define WF_SECURITY_WPA_WITH_PASS_PHRASE WDRV_SECURITY_WPA_WITH_PASS_PHRASE
#define WF_SECURITY_WPA2_WITH_KEY 0xff /* Unsupported */
#define WF_SECURITY_WPA2_WITH_PASS_PHRASE WDRV_SECURITY_WPA2_WITH_PASS_PHRASE
#define WF_SECURITY_WPA_AUTO_WITH_KEY 0xff /* Unsupported */
#define WF_SECURITY_WPA_AUTO_WITH_PASS_PHRASE 0xff /* Unsupported */
#define WF_SECURITY_WPS_PUSH_BUTTON WDRV_SECURITY_WPS_PUSH_BUTTON
#define WF_SECURITY_WPS_PIN WDRV_SECURITY_WPS_PIN

#define WF_DEFAULT_ADHOC_HIDDEN_SSID WDRV_DEFAULT_ADHOC_HIDDEN_SSID
#define WF_DEFAULT_ADHOC_BEACON_PERIOD WDRV_DEFAULT_ADHOC_BEACON_PERIOD
#define WF_DEFAULT_ADHOC_MODE WDRV_DEFAULT_ADHOC_MODE

#define WF_DEFAULT_POWER_SAVE WDRV_DEFAULT_POWER_SAVE

#define WF_WEP_KEY_INVALID 0xff

#define WF_ASSERT(condition, msg) WDRV_ASSERT(condition, msg)

typedef WDRV_SCAN_RESULT WF_SCAN_RESULT;
typedef WDRV_CONFIG_DATA WF_CONFIG_DATA;
typedef WDRV_DEVICE_INFO WF_DEVICE_INFO;
typedef WDRV_ADHOC_NETWORK_CONTEXT WF_ADHOC_NETWORK_CONTEXT;

#endif /* Wi-Fi Interface */

/* It is intentionally declared this way to sync with DRV_WIFI_DEVICE_TYPE. */
typedef enum {
    MRF24WG_MODULE = 2,
    MRF24WN_MODULE = 3
} MRF24W_MODULE_TYPE;

// *****************************************************************************
// *****************************************************************************
// Section: Type Definitions
// *****************************************************************************
// *****************************************************************************

// *****************************************************************************
/* Application states

  Summary:
    Application states enumeration

  Description:
    This enumeration defines the valid application states.  These states
    determine the behaviour of the application at various times.
 */
typedef enum
{
    /* The application mounts the disk. */
    APP_MOUNT_DISK = 0,

    /* In this state, the application waits for the initialization of the TCP/IP stack
       to complete. */
    APP_TCPIP_WAIT_INIT,

    /* The application configures the Wi-Fi settings. */
    APP_WIFI_CONFIG,

    /* In this state, the application runs the Wi-Fi prescan. */
    APP_WIFI_PRESCAN,

    /* In this state, the application enables TCP/IP modules such as DHCP, NBNS and mDNS
       in all available interfaces. */
    APP_TCPIP_MODULES_ENABLE,

    /* In this state, the application can do TCP/IP transactions. */
    APP_TCPIP_TRANSACT,

    /* The application waits in this state for the driver to be ready
       before sending the "hello world" message. */
    //APP_STATE_WAIT_FOR_READY,

    /* The application waits in this state for the driver to finish
       sending the message. */
    //APP_STATE_WAIT_FOR_DONE,

    /* The application does nothing in the idle state. */
    //APP_STATE_IDLE

    APP_USERIO_LED_DEASSERTED,

    APP_USERIO_LED_ASSERTED,

    APP_TCPIP_ERROR,

} APP_STATE;

typedef enum
{
    /* Initialize the state machine, and also checks if prescan is allowed. */
    APP_WIFI_PRESCAN_INIT,

    /* In this state the application waits for the prescan to finish. */
    APP_WIFI_PRESCAN_WAIT,

    /* In this state the application saves the prescan results. */
    APP_WIFI_PRESCAN_SAVE,

    /* After prescan, Wi-Fi module is reset in this state. */
    APP_WIFI_PRESCAN_RESET,

    /* In this state, the application waits for Wi-Fi reset to finish. */
    APP_WIFI_PRESCAN_WAIT_RESET,

    /* Prescan is complete. */
    APP_WIFI_PRESCAN_DONE,

} APP_WIFI_PRESCAN_STATE;

typedef struct
{
    TCPIP_NET_HANDLE    currNet;              // current working interface + valid flag
    char                ifName[10 + 1];       // interface name
    char                nbnsName[16 + 1];     // host name
    char                ifMacAddr[17 + 1];    // MAC address
    char                ipAddr[15 +1];        // IP address
    char                ipMask[15 + 1];       // mask
    char                gwIP[15 + 1];         // gateway IP address
    char                dns1IP[15 + 1];       // DNS IP address
    char                dns2IP[15 + 1];       // DNS IP address

    TCPIP_NETWORK_CONFIG   netConfig;  // configuration in the interface requested format
}HTTPNETDATA;

typedef struct
{
        TCPIP_NET_HANDLE    currNet;
        char                ifName[10 + 1];       // interface name
        char                nbnsName[16 + 1];     // host name
        char                ifMacAddr[17 + 1];    // MAC address
        char                ipAddr[15 +1];        // IP address
        char                ipMask[15 + 1];       // mask
        char                gwIP[15 + 1];         // gateway IP address
        char                dns1IP[15 + 1];       // DNS IP address
        char                dns2IP[15 + 1];       // DNS IP address
        char                pwrMode[6 + 1];       // DNS IP address
        /* flags for interface start-up */
        TCPIP_NETWORK_CONFIG_FLAGS   startFlags;

        const struct  TCPIP_MAC_OBJECT_TYPE    *pMacObject;  
         /* static IPv6 address; only if TCPIP_NETWORK_CONFIG_IPV6_ADDRESS specified can be NULL if not needed*/
        char*     ipv6Addr;   
        /* subnet prefix length; only if TCPIP_NETWORK_CONFIG_IPV6_ADDRESS specified
           0 means default value (64)
           should probably always be 64 as requested by the RFC */
        int       ipv6PrefixLen;
        /* default IPv6 gateway address; only if TCPIP_NETWORK_CONFIG_IPV6_ADDRESS specified
           can be NULL if not needed*/
        char*     ipv6Gateway; 
        
        TCPIP_NETWORK_CONFIG    netConfig;
    }NETCONFIG;

typedef struct
{
	BYTE username[30];
	BYTE password[20];
	BYTE hostname[30];
	BYTE svcid;
}DDNS_INFO;	

typedef struct
{
	BYTE	server[30];
	WORD	port;
	BYTE	username[30];
	BYTE	password[30];
	BYTE	useSSL;
	BYTE  	To[30];
	
}EMAIL_SETTING;
// *****************************************************************************
/* Application Data

  Summary:
    Holds application data

  Description:
    This structure holds the application's data.

  Remarks:
    Application strings and buffers are be defined outside this structure.
 */
// Application-dependent structure used to contain address information
typedef struct __attribute__((__packed__)) appConfigStruct {

    IPV4_ADDR   ipAddr;
#define   MyIPAddr      ipAddr
    IP_ADDR		MyMask;                 // Subnet mask
	IP_ADDR		MyGateway;              // Default Gateway
	IP_ADDR		PrimaryDNSServer;       // Primary DNS Server
	IP_ADDR		SecondaryDNSServer;     // Secondary DNS Server
	IP_ADDR		DefaultIPAddr;          // Default IP address
	IP_ADDR		DefaultMask;            // Default subnet mask
	BYTE		NetBIOSName[16];        // NetBIOS name
	struct
	{
		unsigned char : 6;
		unsigned char bIsDHCPEnabled : 1;
		unsigned char bInConfigMode : 1;
	} Flags;        
    TCPIP_MAC_ADDR          macAddress; 
    
#define   MyMACAddr      macAddress
#if defined(TCPIP_IF_MRF24W) || defined(TCPIP_IF_MRF24WN)
    DRV_WIFI_CONFIG_DATA    wifi;
#endif
    NETCONFIG httpNetData;
        // Application hosts
#if defined(AWS_IOT) 
    char        host[256];  //awsiot host endpoint
    char        uuid[8];    
    // Cert and Key Locations
    __attribute__ ((aligned(4))) unsigned char clientCert[2048];
    __attribute__ ((aligned(4))) unsigned char clientKey[2048];
    IP_MULTI_ADDRESS        aws_iot_ipv4;
#endif
    WORD	HTTPPort;
    struct
    {
        BYTE firmware[30], hardware[30];	
    }version;	
    time_t	TimeNow;
    struct
	{		
		IP_ADDR 	my_ip;
		time_t  	event_time;		
	}WAN_IPAddr[2];
    DDNS_INFO	ddns; 
	EMAIL_SETTING	email;
	BYTE	username[30];
	BYTE	password[20];
	BYTE	nickname[10];
	BYTE	venue[30];
    SENSOR_TYPE_SIGNAL sensor;
    struct
	{
		BOOL	en:1;
		float	GMT_TIME;
	}ntp;
	struct
	{
		WORD	port;
	}androidServer;
}APP_CONFIG;    //to save inside xternal memory either flash or e2prom

typedef struct //__attribute__ ((aligned (16), packed))
{
    /* SYS_FS file handle */
    SYS_FS_HANDLE fileHandle;

    /* application's current state */
    APP_STATE state;
    /* prescan's current state */
    APP_WIFI_PRESCAN_STATE scanState;
    NET_PRES_SKT_HANDLE_T socket;
  #if defined(AWS_IOT)  
    // Timers
    uint32_t genericUseTimer;
    uint32_t potTimer;
    uint32_t tcpipTimeout;
    uint32_t mqttPingTimer;
    uint32_t mqttMessageTimer;
    
    // Network variables
    
    TCP_PORT port;

    NET_PRES_SKT_ERROR_T error;
#endif
    // Thing Data
    bool switch1;
    bool switch2;
    bool switch3;
    bool switch4; 
    bool led1;
    bool led2;
    bool led3;
    bool led4;
    uint32_t potentiometer, temperature;
    bool        datasent, datarequest, ping;
    uint8_t     msg_queue_index;
    MY_QUEUE myQueue;
    uint32_t pubFlag;
    // Timers
    uint32_t rebootTimer;
    bool reboot;    
    uint8_t    memory;
    TCPIP_NET_HANDLE    currNet;  
    APP_CONFIG config;
    
} APP_DATA;

#if defined(TCPIP_IF_MRF24W) || defined(TCPIP_IF_MRF24WN)
typedef struct //__attribute__ ((aligned (16), packed))
{
    /* SYS_FS file handle */
    SYS_FS_HANDLE fileHandle;

    /* application's current state */
    APP_STATE state;
    /* prescan's current state */
    APP_WIFI_PRESCAN_STATE scanState;
    NET_PRES_SKT_HANDLE_T socket;
  
} S_APP_DATA;
#endif

typedef struct {
    uint8_t ssid[32 + 1]; // 32-byte SSID plus null terminator
    uint8_t networkType;
    uint8_t prevSSID[32 + 1]; // previous SSID
    uint8_t prevNetworkType; // previous network type
    uint8_t wepKeyIndex;
    uint8_t securityMode;
    uint8_t securityKey[64 + 1]; // 64-byte key plus null terminator
    uint8_t securityKeyLen; // number of bytes in security key (can be 0)
} WF_REDIRECTION_CONFIG;

// *****************************************************************************
// *****************************************************************************
// Section: Application Initialization and State Machine Functions
// *****************************************************************************
// *****************************************************************************

/*******************************************************************************
  Function:
    void APP_Initialize(void)

  Summary:
     This routine initializes the application object.

  Description:
    This routine initializes the application object. The application state is
    set to wait for media attach.

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
void APP_Initialize(void);

/*******************************************************************************
  Function:
    void APP_Tasks(void)

  Summary:
    Application Tasks Function

  Description:
    This routine implements the application in a non blocking manner.

  Precondition:
    The system and application initialization ("SYS_Initialize") should be
    called before calling this function.

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
void APP_Tasks(void);

/*******************************************************************************
  Function:
    uint8_t APP_WIFI_Prescan(void)

  Summary:
    Wi-Fi Prescan Function

  Description:
    This function implements the Wi-Fi prescan in a non blocking manner.

  Precondition:
    The system and application initialization ("SYS_Initialize") should be
    called before calling this function.

  Parameters:
    None.

  Returns:
    None.

  Remarks:
    None.
 */
uint8_t APP_WIFI_Prescan(void);
////////////////////////////////////////////////////////////////////////
bool APP_TIMER_Expired(uint32_t * timer, uint32_t seconds);
bool APP_TIMER_Expired_ms(uint32_t * timer, uint32_t mseconds);
bool APP_TIMER_Set(uint32_t * timer);
bool APP_ReadSensor(AN_SENSOR* in, uint16_t* ch);
static void ProcessIO(void);
void EraseMemory(void);


#if defined(EEPROM_CS_TRIS) || defined(SPIFLASH_CS_TRIS)
    static bool InitAppConfig(void);
    uint8_t InitAppConfig2(APP_CONFIG *config, uint16_t len);
    void SaveAppConfig(const APP_CONFIG *AppConfig, uint32_t addr);
    
      
#else
    #define SaveAppConfig(a, b)
#endif
void DisplayIPValue(IP_ADDR IPVal);
void APP_TCPIP_IFModules_Disable(TCPIP_NET_HANDLE netH);
void APP_TCPIP_IFModules_Enable(TCPIP_NET_HANDLE netH);

// Define a header structure for validating the AppConfig data structure in EEPROM/Flash
typedef struct {
    unsigned short wConfigurationLength; // Number of bytes saved in EEPROM/Flash (sizeof(APP_CONFIG))
    unsigned short wOriginalChecksum; // Checksum of the original AppConfig defaults as loaded from ROM (to detect when to wipe the EEPROM/Flash record of AppConfig due to a stack change, such as when switching from Ethernet to Wi-Fi)
    unsigned short wCurrentChecksum; // Checksum of the current EEPROM/Flash data.  This protects against using corrupt values if power failure occurs while writing them and helps detect coding errors in which some other task writes to the EEPROM in the AppConfig area.
} NVM_VALIDATION_STRUCT;

#if defined(TCPIP_IF_MRF24W)||defined(TCPIP_IF_MRF24WN) /* Wi-Fi Interface */
extern S_APP_DATA   s_appData;
#endif
extern APP_DATA     appData;

#define SPIFLASH_APPCONFIG_WIFI_ADDRESS     (uint32_t)&appData.config.wifi-(uint32_t)&appData.config

#endif /* _APP_HEADER_H */

/*******************************************************************************
 End of File
 */
