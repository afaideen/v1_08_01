
//#include <xc.h>
#include <peripheral/i2c.h>
#include <GenericTypeDefs.h>
#include "system_config.h"
#include <time.h>
//#include "DS1307.h"

time_t ConvertTime(void);
void update_ds1307(struct tm *newtime);

BYTE rtcc[0x3f+1];
BYTE _time_str[16] = "                ";		// Sat 10:01:15
BYTE _date_str[16] = "                ";		// Sep 30, 2005
RTCC _time;

void DS1307_Init(void)
{

	unsigned int config1 = 0;
   	unsigned int config2 = 0;
   	
   	DIR_RTC_CTRL = 0;
    Delay10us(1);
    RTC_CTRL = 0;
    DelayMs(300);
    RTC_CTRL = 1;	
	/* Turn off I2C modules */
   	CloseI2C2();    //Disable I2C1 mdolue if enabled previously

	config1 = (I2C_ON  | I2C_7BIT_ADD );
   	config2 = Fcy/(2*Fscl) - 1;//39;   	
   	OpenI2C2(config1,config2);   //configure I2C1
   	I2C2CONbits.DISSLW = 1;
   
}

void show_clock(void)
{
	
		read_ds1307();
	
		update_time(&_time);
		RTCCProcessEvents(); 
//		memset(rtcc, 0, sizeof(rtcc));
}

void update_time(RTCC *i)
{
	
	i->sec = 0b01111111&rtcc[0];
	i->min = rtcc[1];
	i->hr = rtcc[2];
	i->day = rtcc[3];
	i->date = rtcc[4];
//    if(rtcc[5] != i->mth)
//        rtcc[5] = i->mth+1;
//    else
        i->mth = rtcc[5];
	i->yr = rtcc[6];
	
}

void stop_ds1307(void)
{
	#if defined(__PIC24F__)
	read_ds1307();
	#endif
	rtcc[0] |= CLOCK_STOP;
	write_ds1307(rtcc);
		
}

void run_ds1307(void)
{
	#if defined(__PIC24F__)
	read_ds1307();
	#endif
	rtcc[0] |= CLOCK_RUN;
	write_ds1307(rtcc);
		
}

void wr2_ds1307(BOOL CLK, RTCC *val )
{
	unsigned char addr;
	BYTE CONTROLBYTE,dataTx;
	

	addr = 0;
	////////////////////////////////////////////////	
start:	
	IdleI2C2();
 	StartI2C2();
   	while(I2C2CONbits.SEN );  //Wait till Start sequence is completed
 	IFS1bits.I2C2MIF = 0;	//  	MI2C2_Clear_Intr_Status_Bit; //Clear interrupt flag
 	if(!I2C2STATbits.S)
 	{
	 	if(I2C2STATbits.BCL == 1)
	 		I2C2STATbits.BCL = 0;
 		goto start;
 	}	
	////////////////////////////////////////////////
	CONTROLBYTE = (haddress << 1) | (wi2c);	
	MasterWriteI2C2(CONTROLBYTE);       //Write Slave address and set master for transmission
   	while(I2C2STATbits.TBF);     //Wait till address is transmitted
   	while(I2C2STATbits.ACKSTAT);
	////////////////////////////////////////////
	Nop();
	MasterWriteI2C2(0x00);       //Write register address and set master for transmission
   	while(I2C2STATbits.TBF);     //Wait till address is transmitted
   	while(I2C2STATbits.ACKSTAT);
	
	//////////////////////////////////////////
	
	rtcc[0] = val->sec;
	rtcc[1] = val->min;
	rtcc[2] = val->hr;
	rtcc[3] = val->day;
	rtcc[4] = val->date;
	rtcc[5] = val->mth;
	rtcc[6] = val->yr;
	
	MasterputsI2C2(&rtcc);
//	memset(rtcc, 0, sizeof(rtcc));
	//************** Stop condition *******************************************************************
   IdleI2C2();              //wait for the I2C to be Idle
   StopI2C2();              //Terminate communication protocol with stop signal
   while(I2C2CONbits.PEN);  //Wait till stop sequence is completed

}


void read_ds1307(void)
{
	BYTE CONTROLBYTE;
startr:	
	IdleI2C2();
 	StartI2C2();
   	while(I2C2CONbits.SEN );  //Wait till Start sequence is completed
   	if(!I2C2STATbits.S)
 	{
	 	if(I2C2STATbits.BCL == 1)
	 		I2C2STATbits.BCL = 0;
 		goto startr;
 	}	
 	
	CONTROLBYTE = (haddress << 1) | (wi2c);	
	MasterWriteI2C2(CONTROLBYTE);       //Write Slave address and set master for transmission
   	while(I2C2STATbits.TBF);     //Wait till address is transmitted
   	while(I2C2STATbits.ACKSTAT);
  	
   	MasterWriteI2C2(0x00);       //Write register address and set master for transmission
   	while(I2C2STATbits.TBF);     //Wait till address is transmitted
   	while(I2C2STATbits.ACKSTAT);
	
   	//************* Restart condition for further reception from master ************************************

	 IdleI2C2();                 //wait for the I2C to be Idle
	 RestartI2C2();              //Restart signal
	 while(I2C2CONbits.RSEN );   //Wait till Restart sequence is completed
	 
	CONTROLBYTE = (haddress << 1) | (ri2c);	
	MasterWriteI2C2(CONTROLBYTE);       //Write Slave address and set master for transmission
   	while(I2C2STATbits.TBF);     //Wait till address is transmitted
   	while(I2C2STATbits.ACKSTAT);

   	
   	//************** Master Recieves from slave ********************************************************

    MastergetsI2C2(0x3f,rtcc,1000); //Master recieves from Slave upto 64 bytes

	//************** Stop condition *******************************************************************
   IdleI2C2();              //wait for the I2C to be Idle
   StopI2C2();              //Terminate communication protocol with stop signal
   while(I2C2CONbits.PEN);  //Wait till stop sequence is completed	
 //  CloseI2C1();             //Disable I2C

}


void write_ds1307(BYTE buffer_tx[])
{
	BYTE CONTROLBYTE;

	IdleI2C2();
 	StartI2C2();
   	while(I2C2CONbits.SEN );  //Wait till Start sequence is completed
 //  	MI2C1_Clear_Intr_Status_Bit; //Clear interrupt flag
   	
   	CONTROLBYTE = (haddress << 1) | (wi2c);	
	MasterWriteI2C2(CONTROLBYTE);       //Write Slave address and set master for transmission
   	while(I2C2STATbits.TBF);     //Wait till address is transmitted
 //  	while(!IFS1bits.MI2C1IF);    //Wait for ninth clock cycle
//   	MI2C1_Clear_Intr_Status_Bit; //Clear interrupt flag
   	while(I2C2STATbits.ACKSTAT);
   	
   	MasterWriteI2C1(0x00);       //Write register address and set master for transmission
   	while(I2C1STATbits.TBF);     //Wait till address is transmitted
 //  	while(!IFS1bits.MI2C1IF);    //Wait for ninth clock cycle
//   	MI2C1_Clear_Intr_Status_Bit; //Clear interrupt flag
   	while(I2C2STATbits.ACKSTAT);
   	
   	MasterputsI2C2(buffer_tx);

   	
	//************** Stop condition *******************************************************************
   IdleI2C2();              //wait for the I2C to be Idle
   StopI2C2();              //Terminate communication protocol with stop signal
   while(I2C2CONbits.PEN);  //Wait till stop sequence is completed

}

void setRTC(RTCC *var, char *time, char *date)
{
	Nop();
	var->sec = atoi(time+6);
	var->sec = (*(time+6)<<4) | (*(time+7)&0x0f);	
	time = time+5;
	*time = 0;
	
	time = time-5;
	var->min = atoi(time+3);
	var->min = (*(time+3)<<4) | (*(time+4)&0x0f);
	time = time+2;
	*time = 0;
	
	time = time-2;
	var->hr  = atoi(time);	
	var->hr = (*(time)<<4) | (*(time+1)&0x0f);
	
	date=date+3;
	*date = 0;
	date=date+3;
	*date=0;
	
	date = date-6;
	var->date = atoi(date+4);
	var->date = (*(date+4)<<4) | (*(date+5)&0x0f);
	
	var->yr = atoi(date+9);	
	var->yr = (*(date+9)<<4) | (*(date+10)&0x0f);	
		
	var->mth = convertMonth_atoi(date);	
	var->day = RTCCCalculateWeekDay();
	Nop();
}

unsigned char convertMonth_atoi(char *month)
{
	if(strstr("January", month))
		return 1;
	else if(strstr("February", month))
		return 2;
	else if(strstr("March", month))
		return 3;
	else if(strstr("April", month))
		return 4;	
	else if(strstr("May", month))
		return 5;
	else if(strstr("June", month))
		return 6;
	else if(strstr("July", month))
		return 7;
	else if(strstr("August", month))
		return 8;
	else if(strstr("September", month))
		return 0x09;
	else if(strstr("October", month))
		return 0x10;
	else if(strstr("November", month))
		return 0x11;
	else if(strstr("December", month))
		return 0x12;
	
	Nop();
	return 0;
}

/*****************************************************************************
 * Function: RTCCCalculateWeekDay
 *
 * Preconditions: Valid values of day, month and year must be presented in 
 * _time_chk structure.
 *
 * Overview: The function reads day, month and year from _time_chk and 
 * calculates week day. Than It writes result into _time_chk. To write
 * the structure into clock RTCCSet must be called.
 *
 * Input: _time_chk with valid values of day, month and year.
 *
 * Output: Zero based week day in _time_chk structure.
 *
 *****************************************************************************/
char RTCCCalculateWeekDay()
{
const char MonthOffset[] =
//jan feb mar apr may jun jul aug sep oct nov dec
{   0,  3,  3,  6,  1,  4,  6,  2,  5,  0,  3,  5 };
unsigned Year;
unsigned Month;
unsigned Date;
unsigned Offset;
unsigned char temp[7];
    // calculate week day 
    Nop();
    temp[0] = btohexa_high(_time.yr);
    temp[1] = btohexa_low(_time.yr);
    Year  = atoi(temp);
    
    temp[0] = btohexa_high(_time.mth);
    temp[1] = btohexa_low(_time.mth);
    Month = atoi(temp);
    
    temp[0] = btohexa_high(_time.date);
    temp[1] = btohexa_low(_time.date);
    Date  = atoi(temp);
    
    // 2000s century offset = 6 +
    // every year 365%7 = 1 day shift +
    // every leap year adds 1 day
    Offset = 6 + Year + Year/4;
    // Add month offset from table
    Offset += MonthOffset[Month-1];
    // Add day
    Offset += Date;

    // If it's a leap year and before March there's no additional day yet
    if((Year%4) == 0)
        if(Month < 3)
            Offset -= 1;
    
    // Week day is
    Offset %= 7;
    if(Offset==0)
    	Offset=7;

  //  _time.day = Offset;
   return Offset;
}

void RTCCProcessEvents(void)
{
	// Process time object only if time is not being set

		// Grab the time


		// Verify there is no roll-over
	
			switch (_time.mth) {
				default:
				case 0x01: _date_str[0] = 'J'; _date_str[1] = 'a'; _date_str[2] = 'n'; break; 
				case 0x02: _date_str[0] = 'F'; _date_str[1] = 'e'; _date_str[2] = 'b'; break; 
				case 0x03: _date_str[0] = 'M'; _date_str[1] = 'a'; _date_str[2] = 'r'; break; 
				case 0x04: _date_str[0] = 'A'; _date_str[1] = 'p'; _date_str[2] = 'r'; break; 
				case 0x05: _date_str[0] = 'M'; _date_str[1] = 'a'; _date_str[2] = 'y'; break; 
				case 0x06: _date_str[0] = 'J'; _date_str[1] = 'u'; _date_str[2] = 'n'; break; 
				case 0x07: _date_str[0] = 'J'; _date_str[1] = 'u'; _date_str[2] = 'l'; break; 
				case 0x08: _date_str[0] = 'A'; _date_str[1] = 'u'; _date_str[2] = 'g'; break; 
				case 0x09: _date_str[0] = 'S'; _date_str[1] = 'e'; _date_str[2] = 'p'; break; 
				case 0x10: _date_str[0] = 'O'; _date_str[1] = 'c'; _date_str[2] = 't'; break; 
				case 0x11: _date_str[0] = 'N'; _date_str[1] = 'o'; _date_str[2] = 'v'; break; 
				case 0x12: _date_str[0] = 'D'; _date_str[1] = 'e'; _date_str[2] = 'c'; break; 
			}

			_date_str[3] = ' ';
			_date_str[6] = ',';
			_date_str[7] = ' ';
			_date_str[8] = '2';
			_date_str[9] = '0';

			_date_str[4] = (_time.date >> 4) + '0';
			_date_str[5] = (_time.date & 0xF) + '0';

			_date_str[10] = (_time.yr >> 4) + '0';
			_date_str[11] = (_time.yr & 0xF) + '0';
			_date_str[sizeof(_date_str)-1] = 0;

			switch (_time.day) {
				default:
				
				case 0x01: _time_str[0] = 'M'; _time_str[1] = 'o'; _time_str[2] = 'n'; break; 
				case 0x02: _time_str[0] = 'T'; _time_str[1] = 'u'; _time_str[2] = 'e'; break; 
				case 0x03: _time_str[0] = 'W'; _time_str[1] = 'e'; _time_str[2] = 'd'; break; 
				case 0x04: _time_str[0] = 'T'; _time_str[1] = 'h'; _time_str[2] = 'u'; break; 
				case 0x05: _time_str[0] = 'F'; _time_str[1] = 'r'; _time_str[2] = 'i'; break; 
				case 0x06: _time_str[0] = 'S'; _time_str[1] = 'a'; _time_str[2] = 't'; break; 
				case 0x07: _time_str[0] = 'S'; _time_str[1] = 'u'; _time_str[2] = 'n'; break;  
			}
			
			_time_str[3] = ' ';
			_time_str[6] = ':';
			_time_str[9] = ':';

			_time_str[4] = (_time.hr >> 4) + '0';
			_time_str[5] = (_time.hr & 0xF) + '0';

			_time_str[7] = (_time.min >> 4) + '0';
			_time_str[8] = (_time.min & 0xF) + '0';

			_time_str[10] = (_time.sec >> 4) + '0';
			_time_str[11] = (_time.sec & 0xF) + '0';	
			_time_str[sizeof(_time_str)-1] = 0;
}

time_t ConvertTime(void)
{
	struct tm when;
	time_t what_time;
	BYTE temp[15]={0}, temp2[3]={0};
//	BYTE text[50]={0};
	
	temp[0] = btohexa_high(_time.sec);
    temp[1] = btohexa_low(_time.sec);
    temp[2] = btohexa_high(_time.min);
    temp[3] = btohexa_low(_time.min);
    temp[4] = btohexa_high(_time.hr);
    temp[5] = btohexa_low(_time.hr);
    temp[6] = btohexa_high(_time.date);
    temp[7] = btohexa_low(_time.date);
    temp[8] = btohexa_high(_time.mth);
    temp[9] = btohexa_low(_time.mth);
    temp[10] = btohexa_high(_time.yr);
    temp[11] = btohexa_low(_time.yr);
    temp[12] = btohexa_high(_time.day);
    temp[13] = btohexa_low(_time.day);
    memcpy(temp2,temp,2);
    when.tm_sec = atoi(temp2);
    memcpy(temp2,temp+2,2);
	when.tm_min = atoi(temp2);
	memcpy(temp2,temp+4,2);
	when.tm_hour = atoi(temp2);
	memcpy(temp2,temp+6,2);
	when.tm_mday = atoi(temp2);
	memcpy(temp2,temp+8,2);
	when.tm_mon = atoi(temp2)-1;
	memcpy(temp2,temp+10,2);
	when.tm_year = atoi(temp2)+100;
	memcpy(temp2,temp+12,2);
	when.tm_wday = atoi(temp2);
	what_time = mktime(&when);
	//	sprintf(text,"%s", asctime(&when));
	return what_time;
}

void update_ds1307(struct tm *newtime)
{
		BYTE temp[15]={0};
	    	
    	uitoa(newtime->tm_sec,temp);
    	if(newtime->tm_sec > 9)
    		_time.sec = (temp[0]<<4)|(temp[1]&0x0f);
    	else	    	
    		_time.sec = newtime->tm_sec;//(temp[0]<<4)|(temp[1]&0x0f);
    			    	
    	uitoa(newtime->tm_min,temp);
    	if(newtime->tm_min > 9)
    		_time.min = (temp[0]<<4)|(temp[1]&0x0f);
    	else
    		_time.min = newtime->tm_min; //(temp[0]<<4)|(temp[1]&0x0f);
    	
    	uitoa(newtime->tm_hour,temp);
    	if(newtime->tm_hour > 9)
    		_time.hr = (temp[0]<<4)|(temp[1]&0x0f);
    	else
    		_time.hr = newtime->tm_hour;//(temp[0]<<4)|(temp[1]&0x0f);
    		 
    		 
    		    	
    	uitoa(newtime->tm_mday,temp);
    	if(newtime->tm_mday > 9)
    		_time.date = (temp[0]<<4)|(temp[1]&0x0f);
    	else
    		_time.date = temp[0]-'0';
    		
    	uitoa(newtime->tm_mon+1,temp);
    	if(newtime->tm_mon+1 > 9)
    		_time.mth = (temp[0]<<4)|(temp[1]&0x0f);
    	else
    		_time.mth = temp[0]-'0';
    	
    	uitoa(newtime->tm_year-100,temp);
    	if(newtime->tm_year > 9)
    		_time.yr = (temp[0]<<4)|(temp[1]&0x0f);
    	else
    		_time.yr = newtime->tm_year-100;//(temp[0]<<4)|(temp[1]&0x0f);
    	
    	uitoa(newtime->tm_wday,temp);
    	if(newtime->tm_wday > 9)
    		_time.day = (temp[0]<<4)|(temp[1]&0x0f);
    	else
    		_time.day = temp[0]-'0';
//        _time.day = RTCCCalculateWeekDay();
    	
    	wr2_ds1307(CRUN, &_time ); 
	
	
}	

extern BYTE data_val[20];
void SetDateFormat1(RTCC *calendar, BYTE *dtval)
{
	BYTE *ptr[5], i = 0;
	
	ptr[i] = dtval;
	ptr[i] = strtok(ptr[0], "-");
	
	while(ptr[i] != 0)
		ptr[++i] = strtok(0, "-");
	
	if(atoi(ptr[0]) < 10)
		calendar->date = *(ptr[0]) & 0x0f;
	else
		calendar->date = (*ptr[0] << 4) | (*(ptr[0]+1) & 0x0f);
	
	if(atoi(ptr[1]) < 10)
		calendar->mth = *(ptr[1]) & 0x0f;
	else
		calendar->mth = (*ptr[1] << 4) | (*(ptr[1]+1) & 0x0f);
		
	calendar->yr = (*(ptr[2]+2) << 4) | (*(ptr[2]+3) & 0x0f);
	calendar->day = RTCCCalculateWeekDay();
	
}	

void SetTimeFormat1(RTCC *calendar, BYTE *dtval)
{
	BYTE *ptr[5] = {0}, i = 0;
	
	ptr[i] = dtval;
	ptr[i] = strtok(ptr[0], ":");
	
	while(ptr[i] != 0)
		ptr[++i] = strtok(0, ":");
	
	
	if(atoi(ptr[0]) < 10)
		calendar->hr = *(ptr[0]) & 0x0f;
	else	
		calendar->hr = (*ptr[0] << 4) | (*(ptr[0]+1) & 0x0f);
	
	if(atoi(ptr[1]) < 10)
		calendar->min = *(ptr[1]) & 0x0f;
	else	
		calendar->min = (*ptr[1] << 4) | (*(ptr[1]+1) & 0x0f);
	
	if(atoi(ptr[2]) < 10)
		calendar->sec = *(ptr[2]) & 0x0f;
	else
		calendar->sec = (*(ptr[2]) << 4) | (*(ptr[2]+1) & 0x0f);
	
}



