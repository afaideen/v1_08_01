//#include "HardwareProfile.h"

#include <GenericTypeDefs.h>
#include <time.h>
void read_ds1307(void);

void write_ds1307(BYTE buffer_tx[]);
void stop_ds1307(void);
void run_ds1307(void);


#define Fcy					GetInstructionClock()//(80000000.0/2)
#define Fscl				100000.0
#define I2C_CLOCK_FREQ		Fscl
#define haddress			0b1101000   //slave address or id
#define MY_SLAVE_ADDRESS	haddress
#define wi2c				0b0
#define ri2c				0b1
#define CLOCK_RUN			0b00000000
#define CLOCK_STOP			0b10000000
#define CHALT				1
#define CRUN				0

// Union to access rtcc registers
typedef union tagRTCC {
	struct {
		unsigned char sec;//
		unsigned char min;//
		unsigned char hr;//
		unsigned char date;
		unsigned char day;//
		unsigned char mth;//
		unsigned char yr;//
	};


} RTCC;


typedef struct
{
	time_t ntp_timer;
	unsigned long ntp_update;	
	
}NTP_INFO;

extern BYTE _time_str[16]; 	// Sat 10:01:15
extern BYTE _date_str[16];	// Sep 30, 2005


void setRTC(RTCC *var, char *time, char *date);
unsigned char convertMonth_atoi(char *month);
char RTCCCalculateWeekDay();
void wr2_ds1307(BOOL CLK, RTCC *val );
void update_time(RTCC *i);
void RTCCProcessEvents(void);
void SetDateFormat1(RTCC *calendar, BYTE *dtval);
void SetTimeFormat1(RTCC *calendar, BYTE *dtval);