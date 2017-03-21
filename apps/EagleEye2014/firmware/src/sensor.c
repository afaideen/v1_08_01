
#include "bsp_config.h"
#include "app.h"

extern APP_DATA appData;

SENSOR_TYPE_SIGNAL  sensor;
SENSOR_BCKBATT      charger;
time_t whattime __attribute__((persistent));

void SENSOR_Initialize_Setting(void)
{
	BYTE j;
	
	strcpy(appData.config.version.firmware, "v1-11-2016");
	strcpy(appData.config.version.hardware, "v14-8-2014");
	appData.config.HTTPPort = HTTP_PORT;
	appData.config.ntp.GMT_TIME = 8;	//Malaysian GMT is +8
	appData.config.ntp.en = 1;
	appData.config.androidServer.port = 5000;

	appData.config.TimeNow = 0;	
	appData.config.WAN_IPAddr[0].my_ip.Val = 0;
	appData.config.WAN_IPAddr[0].event_time = 0;
	appData.config.WAN_IPAddr[1].my_ip.Val = 0;
	appData.config.WAN_IPAddr[1].event_time = 0;
	strcpy(appData.config.ddns.username, "afaideen");
	strcpy(appData.config.ddns.password, "password");
//	strcpy(appData.config.ddns.hostname, "hanpeek.dynns.com");//enhanced domain name require pay!
	strcpy(appData.config.ddns.hostname, "birdpeek.ddns.net");
	appData.config.ddns.svcid = 1;
	
    
    strcpy(appData.config.email.server, "smtp.mail.com");
    appData.config.email.port = 25;	//use 587(TLS) or 465(SSL) unsecured for smtp.mail.com	
    strcpy(appData.config.email.username, "afaideen@mail.com");
	strcpy(appData.config.email.password, "password");
	appData.config.email.useSSL = 0;
	strcpy(appData.config.email.To, "whiteking80@yahoo.co.uk");

	strcpy(appData.config.username, "admin");
	strcpy(appData.config.password, "admin");
	strcpy(appData.config.nickname, "anonymous");
	strcpy(appData.config.venue, "home");
	
	appData.config.sensor.battery[0].en = 0;
	appData.config.sensor.battery[0].prev_state = 0xff;
	appData.config.sensor.battery[0].led = 0; 
	appData.config.sensor.battery[0].t_event = 0;
	appData.config.sensor.battery[0].alarm_state = 0;
	appData.config.sensor.battery[0].threshold = 7.5;
	appData.config.sensor.battery[0].AlarmType = 2; 	//polarity
	
	appData.config.sensor.bckup_batt.en = 0;
	appData.config.sensor.bckup_batt.prev_state = 0xff;
	appData.config.sensor.bckup_batt.led = 0; 
	appData.config.sensor.bckup_batt.t_event = 0;
	appData.config.sensor.bckup_batt.alarm_state = 0;
	appData.config.sensor.bckup_batt.threshold = 4.2;
	appData.config.sensor.bckup_batt.AlarmType = 2; 	//polarity
	
	appData.config.sensor.dcin.en = 0;
	appData.config.sensor.dcin.prev_state = 0xff;
	appData.config.sensor.dcin.led = 0; 
	appData.config.sensor.dcin.t_event = 0;
	appData.config.sensor.dcin.alarm_state = 0;
	appData.config.sensor.dcin.threshold = 7.5;
	appData.config.sensor.dcin.AlarmType = 2; 	//polarity. If 2, will alarm when less threshold
	
	for(j = 0; j < NUM_TEMPERATURE; j++)
	{
		appData.config.sensor.temperature[j].en = 0;
		appData.config.sensor.temperature[j].prev_state = 0xff;
		appData.config.sensor.temperature[j].led = 0; 
		appData.config.sensor.temperature[j].t_event = 0;
		appData.config.sensor.temperature[j].alarm_state = 0;	
		appData.config.sensor.temperature[j].AlarmType = 1;
	}
	appData.config.sensor.temperature[0].threshold = 30.0;
	appData.config.sensor.temperature[1].threshold = 60.0;
	
	for(j = 0; j < NUM_RLYSW; j++)
	{
		appData.config.sensor.rlysw[j].output = 0;	
	}
	
	appData.config.sensor.humid[0].en = 0;
	appData.config.sensor.humid[0].threshold = 65.0;
	appData.config.sensor.humid[0].prev_state = 0xff;
	appData.config.sensor.humid[0].led = 0; 
	appData.config.sensor.humid[0].t_event = 0;
	appData.config.sensor.humid[0].alarm_state = 0;
	appData.config.sensor.humid[0].AlarmType = 1;
	

	appData.config.sensor.light[0].en = 0;
	appData.config.sensor.light[0].threshold = 0.6;
	appData.config.sensor.light[0].prev_state = 0xff;
	appData.config.sensor.light[0].led = 0; 
	appData.config.sensor.light[0].t_event = 0;
	appData.config.sensor.light[0].alarm_state = 0;
	appData.config.sensor.light[0].AlarmType= 1;	
	
	appData.config.sensor.current[0].en = 0;
	appData.config.sensor.current[0].threshold = 15;
	appData.config.sensor.current[0].prev_state = 0xff;
	appData.config.sensor.current[0].led = 0; 
	appData.config.sensor.current[0].t_event = 0;
	appData.config.sensor.current[0].alarm_state = 0;
	appData.config.sensor.current[0].AlarmType= 1;	
	
	appData.config.sensor.water[0].en = 0;
	appData.config.sensor.water[0].threshold = 1.55;
	appData.config.sensor.water[0].prev_state = 0xff;
	appData.config.sensor.water[0].led = 0; 
	appData.config.sensor.water[0].t_event = 0;
	appData.config.sensor.water[0].alarm_state = 0;	
	appData.config.sensor.water[0].AlarmType = 2; 
	
	appData.config.sensor.gen_adc[0].en = 0;
	appData.config.sensor.gen_adc[0].threshold = 1.60;
	appData.config.sensor.gen_adc[0].prev_state = 0xff;
	appData.config.sensor.gen_adc[0].led = 0; 
	appData.config.sensor.gen_adc[0].t_event = 0;
	appData.config.sensor.gen_adc[0].alarm_state = 0;	
	appData.config.sensor.gen_adc[0].AlarmType = 1;
	appData.config.sensor.gen_adc[0].sensorType = NONE;
	
	for(j = 0; j < NUM_DRY_INP; j++)
	{
		appData.config.sensor.dry[j].en = 0;
		appData.config.sensor.dry[j].led = 0; 
		appData.config.sensor.dry[j].t_event = 0;
		appData.config.sensor.dry[j].alarm_state = 0;
		appData.config.sensor.dry[j].AlarmType = 1;
		appData.config.sensor.dry[j].notify_clear = 0;	
		appData.config.sensor.dry[j].sensorType = NONE;	
	}
	appData.config.sensor.dry[0].prev_state = 0;//DRY_DIG0;
	appData.config.sensor.dry[1].prev_state = 0;//DRY_DIG1;
	appData.config.sensor.dry[2].prev_state = 0;//DRY_DIG2;
	appData.config.sensor.dry[3].prev_state = 0;//DRY_DIG3;
//	init_buffer();
}

void SENSOR_Init_Rlysw(void)
{
	BYTE j;
	
	OUT0 = appData.config.sensor.rlysw[0].output;
	Delay10us(1);
	OUT1 = appData.config.sensor.rlysw[1].output;

}

void SENSOR_Init_Led(void)
{
	BYTE i;
	
	for(i = 0; i < NUM_DRY_INP; i++)
	{
		if(appData.config.sensor.dry[i].led == 1)
		{
			if(i==0)
				LED_DRY0 = 1;
			else if(i==1)
				LED_DRY1 = 1;
			else if(i==2)
				LED_DRY2 = 1;
			else if(i==3)
				LED_DRY3 = 1;	
			
		}	
	
	}
	if(appData.config.sensor.battery[0].led == 1 && appData.config.sensor.battery[0].en)
		LED_AN2 = 1;
	if(appData.config.sensor.temperature[0].led == 1 && appData.config.sensor.temperature[0].en)
		LED_AN3 = 1;
	if(appData.config.sensor.humid[0].led == 1 && appData.config.sensor.humid[0].en)
		LED_AN0 = 1;	
	if(appData.config.sensor.light[0].led == 1 && appData.config.sensor.light[0].en)
		LED_AN1 = 1;
	if(appData.config.sensor.water[0].led == 1 && appData.config.sensor.water[0].en)
		LED_AN4 = 1;

}

void SENSOR_Turn_All_Leds(BOOL var)
{
	LED_DRY0 = var; Delay10us(1);
	LED_DRY1 = var; Delay10us(1);
	LED_DRY2 = var; Delay10us(1);
	LED_DRY3 = var; Delay10us(1);
	LED_AN0 = var;  Delay10us(1);
	LED_AN1 = var;  Delay10us(1);
	LED_AN2 = var;  Delay10us(1);
	LED_AN3 = var;  Delay10us(1);
	LED_AN4 = var;  Delay10us(1);
}	

void SENSOR_Init_Dcin(void)
{

	sensor.dcin.cur_state =0xff;
	sensor.dcin.prev_state = sensor.dcin.cur_state;
	sensor.dcin.t_hysterysis = 0;
	sensor.dcin.threshold = appData.config.sensor.dcin.threshold;
	sensor.dcin.en = appData.config.sensor.dcin.en;

}	

void SENSOR_Check_DcMain(void)
{
	static TICK t = 0;
	Nop();
	sensor.dcin.analog_val = ADC1BUFF/(1023.0)*3.3;
#if defined(USE_12V)
	sensor.dcin.reading = sensor.dcin.analog_val * (100.00+27.0)/27.0;
#elif defined(USE_6V)
	sensor.dcin.reading = sensor.dcin.analog_val * (100.00+27)/27;
#endif
#if debug_level>1

	if(TickGet() - t > TICK_SECOND*3)
	{

		t = TickGet();
		sprintf(sensor_message,"DC Main = %.1f V\r\n", sensor.dcin.reading);
		putsUART2(sensor_message);
	}
#endif
	
	if(sensor.dcin.reading > appData.config.sensor.dcin.threshold)
	{
		if(appData.config.sensor.dcin.AlarmType == 1)
			sensor.dcin.cur_state = 1;
		else	
			sensor.dcin.cur_state = 0;
	}
	else if(sensor.dcin.reading < appData.config.sensor.dcin.threshold)
	{
		if(appData.config.sensor.dcin.AlarmType == 1)
			sensor.dcin.cur_state = 0;
		else	
			sensor.dcin.cur_state = 1;	
	}
	
	if(!appData.config.sensor.dcin.en)
	{
		return;
	}	
	
	if(sensor.dcin.cur_state == 1 && appData.config.sensor.dcin.prev_state != sensor.dcin.cur_state)
	{		
        if(APP_TIMER_Expired(&sensor.dcin.t_hysterysis, HYSTERYSIS_DCIN))
		{
			
            APP_TIMER_Set(&sensor.dcin.t_hysterysis);
			appData.config.sensor.dcin.prev_state = sensor.dcin.cur_state;
	
//			show_clock();
//        	whattime = ConvertTime();  
        	appData.config.TimeNow = whattime;
        	
			appData.config.sensor.dcin.led = 1; 
			appData.config.sensor.dcin.t_event = appData.config.TimeNow;
			appData.config.sensor.dcin.alarm_state = 1;
			
		
			Nop();
		} 
		
	}
	else if(sensor.dcin.cur_state == 0 && appData.config.sensor.dcin.prev_state != sensor.dcin.cur_state)
	{
		if(APP_TIMER_Expired(&sensor.dcin.t_hysterysis, HYSTERYSIS_DCIN))
		{
			APP_TIMER_Set(&sensor.dcin.t_hysterysis);
			appData.config.sensor.dcin.prev_state = sensor.dcin.cur_state;
				
//			show_clock();
//        	whattime = ConvertTime();  
        	appData.config.TimeNow = whattime;
        	
			appData.config.sensor.dcin.led = 0; 
			appData.config.sensor.dcin.t_event = appData.config.TimeNow;
			appData.config.sensor.dcin.alarm_state = 0;
			
		
			Nop();
		} 
		
	}
	else
		APP_TIMER_Set(&sensor.dcin.t_hysterysis);

}
void SENSOR_Init_Charger(void)
{
	charger.status = 0xff;	
}

void SENSOR_Check_Charger(void)
{
	static TICK t1 = 0, t2 = 0;
	float v2;
	Nop();
	charger.ISENSE_NVE = ADC1BUF9/(1023.0)*3.3;
	charger._15va = charger.ISENSE_NVE*(100.00+20.00)/20.00;
	charger.VSENSE_PVE = ADC1BUF8/(1023.0)*3.3;
	
	if(charger.ichg == 0)
		charger.vbatt = 0;
	else
		charger.vbatt = charger.VSENSE_PVE*(100.00+20.00)/20.00;	
	if(APP_TIMER_Expired(&t1, 3))//(TickGet() - t1 > TICK_SECOND*3)
	{
        APP_TIMER_Set(&t1);
#if debug_level>1
		sprintf(sensor_message,"Charger Vbatt = %.1f V\r\n", charger.vbatt);
		putsUART2(sensor_message);
#endif
		
		if(CHARGER)
		{
			charger.status = 1;
			#if defined(USE_12V)
			//	v2 = sensor.dcin.reading;
			v2 = ADC1BUFE/(1023.0)*3.3 * (100.00+27.00)/27.00;
			#elif defined(USE_6V)

					
				v2 = ADC1BUFE/(1023.0)*3.3 * (100.00+27.00)/27.00;
			#endif
		}	
		else if(!CHARGER)
		{
			charger.status = 0;
			v2 = charger._15va;
		}			
		
		if(v2-charger._15va < 0.1)
			charger.ichg = 0;
		else
			charger.ichg = (v2-charger._15va)/10*1000;
		if(charger.ichg < 0)
			charger.ichg = 0;
#if debug_level>1			
		sprintf(sensor_message,"Charger Isense = %.1f mA\r\n", (v2-charger._15va)/10*1000);
		putsUART2(sensor_message);
#endif
	}


	if(charger.vbatt >= UPPER_CHARGER_THR)
	{
		if(APP_TIMER_Expired_ms(&t2, 500))//if(TickGet() - t2 > 0.5*TICK_SECOND)
		{
			APP_TIMER_Set(&t2);//t2 = TickGet();
			CHARGER = 0;
			charger.status = 0;
		}			

	}
	else if(charger.vbatt <= LOWER_CHARGER_THR && charger.vbatt > 1)
	{
		if(APP_TIMER_Expired_ms(&t2, 500))//if(TickGet() - t2 > 0.5*TICK_SECOND)
		{
			APP_TIMER_Set(&t2);
			CHARGER = 1;
			charger.status = 1;
		}
	}	
	else
		APP_TIMER_Set(&t2);//t2 = TickGet();
}

void SENSOR_Init_BckupBattery(void)
{

	sensor.bckup_batt.cur_state =0xff;
	sensor.bckup_batt.prev_state = sensor.bckup_batt.cur_state;
	sensor.bckup_batt.t_hysterysis = 0;
	sensor.bckup_batt.threshold = appData.config.sensor.bckup_batt.threshold;
	sensor.bckup_batt.en = appData.config.sensor.bckup_batt.en;

}
void SENSOR_Check_BckupBattery(void)
{
	
	sensor.bckup_batt.reading = charger.vbatt;
	if(sensor.bckup_batt.reading > appData.config.sensor.bckup_batt.threshold)
	{
		if(appData.config.sensor.bckup_batt.AlarmType == 1)
			sensor.bckup_batt.cur_state = 1;
		else	
			sensor.bckup_batt.cur_state = 0;
	}
	else if(sensor.bckup_batt.reading < appData.config.sensor.bckup_batt.threshold
			&& sensor.bckup_batt.reading > 0.9)
	{
		if(appData.config.sensor.bckup_batt.AlarmType == 1)
			sensor.bckup_batt.cur_state = 0;
		else	
			sensor.bckup_batt.cur_state = 1;	
	}
	else if(sensor.bckup_batt.reading < 0.9)	
		sensor.bckup_batt.cur_state = 0xff;
		
	if(!appData.config.sensor.bckup_batt.en)
		return;
	
	if(sensor.bckup_batt.cur_state == 1 && appData.config.sensor.bckup_batt.prev_state != sensor.bckup_batt.cur_state)
	{
        if(APP_TIMER_Expired(&sensor.bckup_batt.t_hysterysis, HYSTERYSIS_BATTERY))
		{
            APP_TIMER_Set(&sensor.bckup_batt.t_hysterysis);
			appData.config.sensor.bckup_batt.prev_state = sensor.bckup_batt.cur_state;
			
//			show_clock();
//        	whattime = ConvertTime();  
        	appData.config.TimeNow = whattime;
        	
			appData.config.sensor.bckup_batt.led = 1; 
			appData.config.sensor.bckup_batt.t_event = appData.config.TimeNow;
			appData.config.sensor.bckup_batt.alarm_state = 1;
			
			Nop();
		} 
		
	}
	else if(sensor.bckup_batt.cur_state == 0 && appData.config.sensor.bckup_batt.prev_state != sensor.bckup_batt.cur_state)
	{
		if(APP_TIMER_Expired(&sensor.bckup_batt.t_hysterysis, HYSTERYSIS_BATTERY))
		{
			APP_TIMER_Set(&sensor.bckup_batt.t_hysterysis);
			appData.config.sensor.bckup_batt.prev_state = sensor.bckup_batt.cur_state;
				
//			show_clock();
//        	whattime = ConvertTime();  
        	appData.config.TimeNow = whattime;
        	
			appData.config.sensor.bckup_batt.led = 0; 
			appData.config.sensor.bckup_batt.t_event = appData.config.TimeNow;
			appData.config.sensor.bckup_batt.alarm_state = 0;
					
			Nop();
		} 
		
	}
	else
		APP_TIMER_Set(&sensor.bckup_batt.t_hysterysis);			
}	

void SENSOR_Init_Drycontact(void)
{
	BYTE f;
	sensor.dry[0].cur_state = !appData.config.sensor.dry[0].prev_state;
	sensor.dry[1].cur_state = !appData.config.sensor.dry[1].prev_state;
	sensor.dry[2].cur_state = !appData.config.sensor.dry[2].prev_state;
	sensor.dry[3].cur_state = !appData.config.sensor.dry[3].prev_state;
	
//	if(appData.config.Buffer.exePtr >= SIZE_BUFFER)
//		appData.config.Buffer.exePtr = 0;
	
	for(f = 0; f < NUM_DRY_INP; f++)
		sensor.dry[f].en = 0;
}

void SENSOR_Init_Temperature(void)
{
	BYTE i;
	for(i = 0; i < NUM_TEMPERATURE; i++)
	{
		sensor.temperature[i].cur_state =0xff;
		sensor.temperature[i].prev_state = sensor.temperature[i].cur_state;
		sensor.temperature[i].t_hysterysis = 0;
		sensor.temperature[i].threshold = appData.config.sensor.temperature[i].threshold;
		sensor.temperature[i].en = 0;
	}
}
void SENSOR_Check_Temperature(void)
{
    static BYTE i = 0, j = 0;
    i = 0;
    if(sensor.temperature[i].reading < 120 && sensor.temperature[i].reading > -50)
	{
		if(sensor.temperature[i].reading > appData.config.sensor.temperature[i].threshold)
		{
			if(appData.config.sensor.temperature[i].AlarmType==2)
				sensor.temperature[i].cur_state = 0;
			else
				sensor.temperature[i].cur_state = 1;
		}
		else if(sensor.temperature[i].reading < appData.config.sensor.temperature[i].threshold-1.2)
		{
			if(appData.config.sensor.temperature[i].AlarmType==2)
				sensor.temperature[i].cur_state = 1;
			else
				sensor.temperature[i].cur_state = 0;		
		}
	}
	else
	{
		sensor.temperature[i].cur_state = 0xff;
		sensor.temperature[i].led = 0; 
		sensor.temperature[i].alarm_state = 0;
	}
    
    if(sensor.temperature[i].cur_state == 1 && appData.config.sensor.temperature[i].prev_state != sensor.temperature[i].cur_state)
	{
        if(APP_TIMER_Expired(&sensor.temperature[i].t_hysterysis, HYSTERYSIS_TEMPERATURE))
        {
            appData.config.sensor.temperature[i].prev_state = sensor.temperature[i].cur_state;
            LED_AN3 = 1;
            APP_TIMER_Set(&sensor.temperature[i].t_hysterysis);
            appData.config.sensor.temperature[i].led = LED_AN3; 
            appData.config.sensor.temperature[i].t_event = appData.config.TimeNow;
            appData.config.sensor.temperature[i].alarm_state = appData.config.sensor.temperature[i].led;
            sensor.temperature[i].alarm_state = appData.config.sensor.temperature[i].alarm_state;
        }
        
    }
    else if(sensor.temperature[i].cur_state == 0 && appData.config.sensor.temperature[i].prev_state != sensor.temperature[i].cur_state)
	{
        if(APP_TIMER_Expired(&sensor.temperature[i].t_hysterysis, HYSTERYSIS_TEMPERATURE))
        {
            appData.config.sensor.temperature[i].prev_state = sensor.temperature[i].cur_state;
            LED_AN3 = 0;
            APP_TIMER_Set(&sensor.temperature[i].t_hysterysis);
            appData.config.sensor.temperature[i].led = LED_AN3; 
            appData.config.sensor.temperature[i].t_event = appData.config.TimeNow;
            appData.config.sensor.temperature[i].alarm_state = appData.config.sensor.temperature[i].led;
            sensor.temperature[i].alarm_state = appData.config.sensor.temperature[i].alarm_state;
        }
    }
    else
        APP_TIMER_Set(&sensor.temperature[i].t_hysterysis);
    
    i++;
	if( i >= NUM_TEMPERATURE )	
		i = 0;
    
}
void SENSOR_Check_Drycontact(void)
{
	static BYTE i =0;

    if(sensor.dry[i].cur_state == 1 && appData.config.sensor.dry[i].prev_state != sensor.dry[i].cur_state)
	{
        if(APP_TIMER_Expired(&sensor.dry[i].t_hysterysis, HYSTERYSIS_DRY))
        {
            if(i == 0 )
                LED_DRY0 = 1;
            else if(i == 1)
                LED_DRY1 = 1;
            else if(i == 2)
                LED_DRY2 = 1;
            else if(i == 3)
                LED_DRY3 = 1;
            sensor.dry[i].alarm_state = 1;
            appData.config.sensor.dry[i].prev_state = sensor.dry[i].cur_state;
            APP_TIMER_Set(&sensor.dry[i].t_hysterysis);
        }
        
    }
    else if(sensor.dry[i].cur_state == 0 && appData.config.sensor.dry[i].prev_state != sensor.dry[i].cur_state)
	{
        if(APP_TIMER_Expired(&sensor.dry[i].t_hysterysis, HYSTERYSIS_DRY))
        {
            if(i == 0 )
                LED_DRY0 = 0;
            else if(i == 1)
                LED_DRY1 = 0;
            else if(i == 2)
                LED_DRY2 = 0;
            else if(i == 3)
                LED_DRY3 = 0;
            sensor.dry[i].alarm_state = 0;
            appData.config.sensor.dry[i].prev_state = sensor.dry[i].cur_state;
            APP_TIMER_Set(&sensor.dry[i].t_hysterysis);
        }
    }
    else
        APP_TIMER_Set(&sensor.dry[i].t_hysterysis);
    dryend:	
	i++;
	if( i >= NUM_DRY_INP )
		i = 0;
}
void SENSOR_Init_Light(void)
{
	BYTE i;
	for(i = 0; i < NUM_LIGHT; i++)
	{
		sensor.light[i].cur_state =0xff;
		sensor.light[i].prev_state = sensor.light[i].cur_state;
		sensor.light[i].t_hysterysis = 0;
		sensor.light[i].threshold = appData.config.sensor.light[i].threshold;
		sensor.light[i].en = 0;
	}
}
void SENSOR_Check_Light(void)
{
    static BYTE i = 0, j = 0;
    
    if(sensor.light[i].reading > appData.config.sensor.light[i].threshold)
	{
		if(appData.config.sensor.light[i].AlarmType == 1
			|| appData.config.sensor.light[i].AlarmType == 3)
			sensor.light[i].cur_state = 1;
		else if(appData.config.sensor.light[i].AlarmType == 2)
			sensor.light[i].cur_state = 0;
		
	}
	else if(sensor.light[i].reading < appData.config.sensor.light[i].threshold)
	{
		if(appData.config.sensor.light[i].AlarmType == 1
			|| appData.config.sensor.light[i].AlarmType == 3)
			sensor.light[i].cur_state = 0;
		else if(appData.config.sensor.light[i].AlarmType == 2)
			sensor.light[i].cur_state = 1;		
	}
    
    if(sensor.light[i].cur_state == 1 && appData.config.sensor.light[i].prev_state != sensor.light[i].cur_state)
	{
        if(APP_TIMER_Expired(&sensor.light[i].t_hysterysis, HYSTERYSIS_LIGHT))
        {
            appData.config.sensor.light[i].prev_state = sensor.light[i].cur_state;
            LED_AN1 = 1;
            APP_TIMER_Set(&sensor.light[i].t_hysterysis);
            appData.config.sensor.light[i].led = LED_AN1; 
            appData.config.sensor.light[i].t_event = appData.config.TimeNow;
            appData.config.sensor.light[i].alarm_state = appData.config.sensor.light[i].led;
            sensor.light[i].alarm_state = appData.config.sensor.light[i].alarm_state;
        }
        
    }
    else if(sensor.light[i].cur_state == 0 && appData.config.sensor.light[i].prev_state != sensor.light[i].cur_state)
	{
        if(APP_TIMER_Expired(&sensor.light[i].t_hysterysis, HYSTERYSIS_LIGHT))
        {
            appData.config.sensor.light[i].prev_state = sensor.light[i].cur_state;
            LED_AN1 = 0;
            APP_TIMER_Set(&sensor.light[i].t_hysterysis);
            appData.config.sensor.light[i].led = LED_AN1; 
            appData.config.sensor.light[i].t_event = appData.config.TimeNow;
            appData.config.sensor.light[i].alarm_state = appData.config.sensor.light[i].led;
            sensor.light[i].alarm_state = appData.config.sensor.light[i].alarm_state;
        }
    }
    else
        APP_TIMER_Set(&sensor.light[i].t_hysterysis);
    
    i++;
	if( i >= NUM_LIGHT )	
		i = 0;
    
}
void SENSOR_Init_Water(void)
{
	BYTE i;
	for(i = 0; i < NUM_WATER; i++)
	{
		sensor.water[i].cur_state =0xff;
		sensor.water[i].prev_state = sensor.water[i].cur_state;
		sensor.water[i].t_hysterysis = 0;
		sensor.water[i].threshold = appData.config.sensor.water[0].threshold;
		sensor.water[i].en = 0;
	}
}
void SENSOR_Check_Water(void)
{
    static BYTE i = 0, j = 0;
    
    if(sensor.water[i].reading > appData.config.sensor.water[i].threshold)
	{
		if(appData.config.sensor.water[i].AlarmType == 1)
			sensor.water[i].cur_state = 1;
		else
			sensor.water[i].cur_state = 0;
	}
	else if(sensor.water[i].reading < appData.config.sensor.water[i].threshold)
	{
		if(appData.config.sensor.water[i].AlarmType == 1)
			sensor.water[i].cur_state = 0;
		else
			sensor.water[i].cur_state = 1;		
	}
    
    if(sensor.water[i].cur_state == 1 && appData.config.sensor.water[i].prev_state != sensor.water[i].cur_state)
	{
        if(APP_TIMER_Expired(&sensor.water[i].t_hysterysis, HYSTERYSIS_WATER))
        {
            appData.config.sensor.water[i].prev_state = sensor.water[i].cur_state;
            LED_AN4 = 1;
            APP_TIMER_Set(&sensor.water[i].t_hysterysis);
            appData.config.sensor.water[i].led = LED_AN4; 
            appData.config.sensor.water[i].t_event = appData.config.TimeNow;
            appData.config.sensor.water[i].alarm_state = appData.config.sensor.water[i].led;
            sensor.water[i].alarm_state = appData.config.sensor.water[i].alarm_state;
        }
        
    }
    else if(sensor.water[i].cur_state == 0 && appData.config.sensor.water[i].prev_state != sensor.water[i].cur_state)
	{
        if(APP_TIMER_Expired(&sensor.water[i].t_hysterysis, HYSTERYSIS_WATER))
        {
            appData.config.sensor.water[i].prev_state = sensor.water[i].cur_state;
            LED_AN4 = 0;
            APP_TIMER_Set(&sensor.water[i].t_hysterysis);
            appData.config.sensor.water[i].led = LED_AN4; 
            appData.config.sensor.water[i].t_event = appData.config.TimeNow;
            appData.config.sensor.water[i].alarm_state = appData.config.sensor.water[i].led;
            sensor.water[i].alarm_state = appData.config.sensor.water[i].alarm_state;
        }
        
    }
    else
        APP_TIMER_Set(&sensor.water[i].t_hysterysis);
    i++;
	if( i >= NUM_WATER )	
		i = 0;
}
void SENSOR_Init_Battery(void)
{
	BYTE i;
	for(i = 0; i < NUM_BATTERY; i++)
	{
		sensor.battery[i].cur_state =0xff;
		sensor.battery[i].prev_state = sensor.battery[i].cur_state;
		sensor.battery[i].t_hysterysis = 0;
		sensor.battery[i].threshold = appData.config.sensor.battery[0].threshold;
		sensor.battery[i].en = 0;
	}
}
void SENSOR_Check_Battery(void)
{
    static BYTE i = 0, j = 0;
    
    if(sensor.battery[i].reading > appData.config.sensor.battery[i].threshold)
	{
		if(appData.config.sensor.battery[i].AlarmType == 1)
			sensor.battery[i].cur_state = 1;
		else
			sensor.battery[i].cur_state = 0;
	}
	else if(sensor.battery[i].reading < appData.config.sensor.battery[i].threshold)
	{
		if(appData.config.sensor.battery[i].AlarmType == 1)
			sensor.battery[i].cur_state = 0;
		else
			sensor.battery[i].cur_state = 1;		
	}
    
    if(sensor.battery[i].cur_state == 1 && appData.config.sensor.battery[i].prev_state != sensor.battery[i].cur_state)
	{
        if(APP_TIMER_Expired(&sensor.battery[i].t_hysterysis, HYSTERYSIS_BATTERY))
        {
            appData.config.sensor.battery[i].prev_state = sensor.battery[i].cur_state;
            LED_AN2 = 1;
            APP_TIMER_Set(&sensor.battery[i].t_hysterysis);
            appData.config.sensor.battery[i].led = LED_AN2; 
            appData.config.sensor.battery[i].t_event = appData.config.TimeNow;
            appData.config.sensor.battery[i].alarm_state = appData.config.sensor.battery[i].led;
            sensor.battery[i].alarm_state = appData.config.sensor.battery[i].alarm_state;
        }
        
    }
    else if(sensor.battery[i].cur_state == 0 && appData.config.sensor.battery[i].prev_state != sensor.battery[i].cur_state)
	{
        if(APP_TIMER_Expired(&sensor.battery[i].t_hysterysis, HYSTERYSIS_BATTERY))
        {
            appData.config.sensor.battery[i].prev_state = sensor.battery[i].cur_state;
            LED_AN2 = 0;
            APP_TIMER_Set(&sensor.battery[i].t_hysterysis);
            appData.config.sensor.battery[i].led = LED_AN2; 
            appData.config.sensor.battery[i].t_event = appData.config.TimeNow;
            appData.config.sensor.battery[i].alarm_state = appData.config.sensor.battery[i].led;
            sensor.battery[i].alarm_state = appData.config.sensor.battery[i].alarm_state;
        }
        
    }
    else
        APP_TIMER_Set(&sensor.battery[i].t_hysterysis);
    i++;
	if( i >= NUM_BATTERY )	
		i = 0;
}

void SENSOR_Init_Adc(void)
{
	BYTE i;
	for(i = 0; i < NUM_GENADC; i++)
	{
		sensor.gen_adc[i].cur_state =0xff;
		sensor.gen_adc[i].prev_state = sensor.gen_adc[i].cur_state;
		sensor.gen_adc[i].t_hysterysis = 0;
		sensor.gen_adc[i].threshold = appData.config.sensor.gen_adc[i].threshold;
		sensor.gen_adc[i].en = 0;
	}
}

void SENSOR_Check_Adc(void)
{
    static BYTE i = 0, j = 0;
    
    if(sensor.gen_adc[i].reading > appData.config.sensor.gen_adc[i].threshold)
	{
		if(appData.config.sensor.gen_adc[0].AlarmType == 1)
			sensor.gen_adc[i].cur_state = 1;
		else if(appData.config.sensor.gen_adc[0].AlarmType == 2)
			sensor.gen_adc[i].cur_state = 0;
	}
	else if(sensor.gen_adc[i].reading < appData.config.sensor.gen_adc[i].threshold)
	{
		if(appData.config.sensor.gen_adc[0].AlarmType == 1)
			sensor.gen_adc[i].cur_state = 0;
		else if(appData.config.sensor.gen_adc[0].AlarmType == 2)
			sensor.gen_adc[i].cur_state = 1;	
	}
    
    if(sensor.gen_adc[i].cur_state == 1 && appData.config.sensor.gen_adc[i].prev_state != sensor.gen_adc[i].cur_state)
	{
        if(APP_TIMER_Expired(&sensor.gen_adc[i].t_hysterysis, HYSTERYSIS_GENADC))
        {
            appData.config.sensor.gen_adc[i].prev_state = sensor.gen_adc[i].cur_state;
//            LED_AN2 = 1;
            APP_TIMER_Set(&sensor.gen_adc[i].t_hysterysis);
//            appData.config.sensor.gen_adc[i].led = LED_AN2; 
            appData.config.sensor.gen_adc[i].t_event = appData.config.TimeNow;
            appData.config.sensor.gen_adc[i].alarm_state = sensor.gen_adc[i].cur_state;
            sensor.gen_adc[i].alarm_state = appData.config.sensor.gen_adc[i].alarm_state;
        }
        
    }
    else if(sensor.gen_adc[i].cur_state == 0 && appData.config.sensor.gen_adc[i].prev_state != sensor.gen_adc[i].cur_state)
	{
        if(APP_TIMER_Expired(&sensor.gen_adc[i].t_hysterysis, HYSTERYSIS_GENADC))
        {
            appData.config.sensor.gen_adc[i].prev_state = sensor.gen_adc[i].cur_state;
//            LED_AN2 = 0;
            APP_TIMER_Set(&sensor.gen_adc[i].t_hysterysis);
//            appData.config.sensor.gen_adc[i].led = LED_AN2; 
            appData.config.sensor.gen_adc[i].t_event = appData.config.TimeNow;
            appData.config.sensor.gen_adc[i].alarm_state = sensor.gen_adc[i].cur_state;
            sensor.gen_adc[i].alarm_state = appData.config.sensor.gen_adc[i].alarm_state;
        }
        
    }
    else
        APP_TIMER_Set(&sensor.gen_adc[i].t_hysterysis);
    i++;
	if( i >= NUM_GENADC )	
		i = 0;
}