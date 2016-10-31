/* ************************************************************************** */

#include "app.h"

uint8_t NVMFLASH_Write(uint32_t addr, uint32_t *buf);

#define     NVMFLASH_PAGE_SIZE      4096
/** Descriptive File Name

  @Company
    Company Name

  @File Name
    filename.c

  @Summary
    Brief description of the file.

  @Description
    Describe the purpose of this file.
 */
/* ************************************************************************** */

/* ************************************************************************** */
/* ************************************************************************** */
/* Section: Included Files                                                    */
/* ************************************************************************** */
/* ************************************************************************** */

/* This section lists the other files that are included in this file.
 */

/* TODO:  Include other files here if needed. */


/* ************************************************************************** */
/* ************************************************************************** */
/* Section: File Scope or Global Data                                         */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

/* ************************************************************************** */
/** Descriptive Data Item Name

  @Summary
    Brief one-line summary of the data item.
    
  @Description
    Full description, explaining the purpose and usage of data item.
    <p>
    Additional description in consecutive paragraphs separated by HTML 
    paragraph breaks, as necessary.
    <p>
    Type "JavaDoc" in the "How Do I?" IDE toolbar for more information on tags.
    
  @Remarks
    Any additional remarks
 */
int global_data;

struct
{
    DWORD   vAddress, vstartAddress;            
    WORD    offset[2];
    DWORD    *ptr;
    DWORD   savebuf[NVMFLASH_PAGE_SIZE], m;
    DWORD_VAL *dwVal;
}flashMemory;
/* ************************************************************************** */
/* ************************************************************************** */
// Section: Local Functions                                                   */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

/* ************************************************************************** */


/* ************************************************************************** */
/* ************************************************************************** */
// Section: Interface Functions                                               */
/* ************************************************************************** */
/* ************************************************************************** */

/*  A brief description of a section can be given directly below the section
    banner.
 */

// *****************************************************************************

/** 
  @Function
    int ExampleInterfaceFunctionName ( int param1, int param2 ) 

  @Summary
    Brief one-line description of the function.

  @Remarks
    Refer to the example_file.h interface header for function usage details.
 */
int NVMFLASH_EraseReadWrite(NETCONFIG *config, HTTPNETDATA *data) {
    ////////////////////////////////Write to flash       
    flashMemory.vAddress = &config->ifName;//&MyConfig.ifName;//my_tcpipInit.pNetConf->interface;
    flashMemory.offset[0] = flashMemory.vAddress%NVMFLASH_PAGE_SIZE;
    flashMemory.vstartAddress = flashMemory.vAddress - flashMemory.offset[0];
    memset(flashMemory.savebuf, 0xffffffff, sizeof(flashMemory.savebuf));
    NVMFLASH_Read(flashMemory.vstartAddress, &flashMemory.savebuf);

    Nop();    
    //update flashMemory.savebuf
    NVMFLASH_UpdateBuffer(&config->ifName, &data->ifName, sizeof(data->ifName));
    NVMFLASH_UpdateBuffer(&config->nbnsName, &data->nbnsName, sizeof(data->nbnsName));
    NVMFLASH_UpdateBuffer(&config->ifMacAddr, &data->ifMacAddr, sizeof(data->ifMacAddr));
    NVMFLASH_UpdateBuffer(&config->ipAddr, &data->ipAddr, sizeof(data->ipAddr));
    NVMFLASH_UpdateBuffer(&config->ipMask, &data->ipMask, sizeof(data->ipMask));
    NVMFLASH_UpdateBuffer(&config->gwIP, &data->gwIP, sizeof(data->gwIP));
    NVMFLASH_UpdateBuffer(&config->dns1IP, &data->dns1IP, sizeof(data->dns1IP));
    NVMFLASH_UpdateBuffer(&config->dns2IP, &data->dns2IP, sizeof(data->dns2IP));
    NVMFLASH_UpdateBuffer(&config->startFlags, &data->netConfig.startFlags, sizeof(data->netConfig.startFlags));
    Nop();
    Nop();
    NVMErasePage(flashMemory.vstartAddress);   //must perform erase

    if( NVMFLASH_Write(flashMemory.vstartAddress, &flashMemory.savebuf) == 1 )
    {
        SYS_CONSOLE_MESSAGE("Flash Memory written successfully\r\n");
        return 1;
    }
    else
        SYS_CONSOLE_MESSAGE("Flash Memory written fail\r\n");               
    ////////////////////////////////
    return 0xfe;
}

void NVMFLASH_UpdateBuffer(char *config, char *data, uint16_t len)//(&config->ifName, &data->ifName)
{
    flashMemory.vAddress = config;//&config->ifName;//&MyConfig.ifName;//my_tcpipInit.pNetConf->interface;
    flashMemory.offset[0] = flashMemory.vAddress%NVMFLASH_PAGE_SIZE/4;
    flashMemory.offset[1] = flashMemory.vAddress%NVMFLASH_PAGE_SIZE%4;
    flashMemory.dwVal = &flashMemory.savebuf[flashMemory.offset[0]];   
    memcpy(&flashMemory.dwVal->v[flashMemory.offset[1]], data, len);
    
}

uint8_t NVMFLASH_Write(uint32_t addr, uint32_t *buf)
{
    uint32_t *ptr, m;
    ptr = addr;
    m = 0;
    while(m < NVMFLASH_PAGE_SIZE)
    {
        if(NVMWriteWord(ptr++, *buf++))
            return 0xfe;
        m++;
    }
    Nop();
    return 1;
    
}

void NVMFLASH_Read(uint32_t addr, uint32_t *buf)
{
    uint32_t *ptr, m;
    
    ptr = addr;//flashMemory.vstartAddress;
    m = 0;
    
    Nop();
    while(m < NVMFLASH_PAGE_SIZE)
    {
        *buf++ = *ptr++;//flashMemory.savebuf[flashMemory.m++] = *flashMemory.ptr++;
        m++;
    }
    Nop();
    Nop();
}


/* *****************************************************************************
 End of File
 */
