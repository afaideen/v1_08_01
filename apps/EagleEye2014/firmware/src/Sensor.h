#include <time.h>
#include "bsp_config.h"
#include "GenericTypeDefs.h"

typedef struct
{
	BOOL led;
	TICK t_hysterysis; 
	time_t t_event;
    BYTE	status; 
	float ISENSE_NVE, _15va, VSENSE_PVE, vbatt, ichg;
}SENSOR_BCKBATT;

typedef enum
{
    NONE=0,
    PIR,
    GAS_CO,	
    DOOR,
}SENSOR_TYPE;	

typedef struct
{
	float	reading, analog_val, signal, threshold;
	BOOL	led;	
	BYTE	alarm_state, AlarmType, cur_state, prev_state;
	TICK	t_hysterysis;
	time_t	t_event;
	BOOL	en;
    SENSOR_TYPE sensorType;	
}SENSOR_TYPE_ANALOGUE;

typedef struct
{
	BOOL	led;	
	BYTE	alarm_state, AlarmType, cur_state, prev_state;
    BOOL	notify_clear;
	TICK	t_hysterysis;
	time_t	t_event;
	BOOL	en;
    SENSOR_TYPE sensorType;		
}SENSOR_TYPE_DIGITAL;

typedef struct
{
	SENSOR_TYPE_ANALOGUE 	battery[1], temperature[2], humid[1], water[1], light[1], gen_adc[1], dcin
		,bckup_batt,current[NUM_CURRENT];
	SENSOR_TYPE_DIGITAL	dry[NUM_DRY_INP];	
    struct
    {
        BOOL	output:1;
    }rlysw[NUM_RLYSW];
}SENSOR_TYPE_SIGNAL;


extern time_t whattime __attribute__((persistent));











