#include "pubnub.h"
#include "pubnubStaticDemo.h"
#include "pubnubStatic.h"

extern BSP_DATA bspData;
extern APP_DATA appData;
extern AN_SENSOR   pot, tem;

static const char pubkey[] = "pub-c-3d6b4414-ba14-4208-94e1-6af8330d8161";//"demo";
static const char subkey[] = "sub-c-0d045036-846a-11e6-bb6b-0619f8945a4f";
static const char channel[] = "birdpeek";//"hello_world";

static uint32_t pubTimer;


static void set_led(int n, int s)
{
    switch (n) {
    case 0: BSP_LEDStateSet(BSP_LED_1, s ? BSP_LED_STATE_ON : BSP_LED_STATE_OFF); break;
    case 1: BSP_LEDStateSet(BSP_LED_2, s ? BSP_LED_STATE_ON : BSP_LED_STATE_OFF); break;
    case 2: BSP_LEDStateSet(BSP_LED_3, s ? BSP_LED_STATE_ON : BSP_LED_STATE_OFF); break;
    }
}


/* Unfortunately, there is no (easy) way to find out how many buttons/switches
 * are there, so we shall assume 3.
 */
#define SWITCH_COUNT 3

/* Debouncing count */
#define DEBOUNCE 5

/* Info for detecting the switch state changes (events) */
struct SwitchState {
    BSP_SWITCH_STATE state;
    uint8_t count;
};

/* Switch detector states */
static struct SwitchState m_SwState[SWITCH_COUNT];

/* Detects switch events. Will return 1 if a event is detected, 0 otherwise. */
int SwitchEventDetector(struct SwitchState *p, BSP_SWITCH_STATE state)
{
    if ((state != p->state) && (++p->count > DEBOUNCE)) {
        p->state = state;
        p->count = 0;
        return 1;
    }
    return 0;
}


void PubnubStaticDemoInit(void)
{
    int i;
    for (i = 0; i < SWITCH_COUNT; ++i) {
        m_SwState[i].state = BSP_SWITCH_STATE_RELEASED;
        m_SwState[i].count = 0;
    }
    PubnubStaticInit(pubkey, subkey, channel, channel);
    pubTimer = 1; // ASAP
}


/* Helper function to map between the switch as an index and the BSP
 * symbol (enum), which need not be contiguous or start at a particular
 * value.
 */
static BSP_SWITCH BSP_SWITCH_FromIndex(int i)
{
    switch (i) {
    case 0: return BSP_SWITCH_1;
    case 1: return BSP_SWITCH_2;
    default: case 2: return BSP_SWITCH_3;
    }
}


/* Helper function to handle a single switch */
static void HandleSwitch(int i)
{
    BSP_SWITCH sw = BSP_SWITCH_FromIndex(i);
    BSP_SWITCH_STATE state = BSP_SwitchStateGet(sw);
    if (SwitchEventDetector(m_SwState + i, state)) {
        PubnubStaticPublishf("{\"switch\":%d, \"event\":\"%s\"}",
            i,
            (state == BSP_SWITCH_STATE_RELEASED) ? "released" : "pressed"
            );
        Nop();
    }
}


void PubnubStaticDemoProcess(void)
{
    char const *inmsg;
    static int i, count = 0;

    if (pubTimer == 0) {
        return;
    }
    if(appData.datarequest && appData.ping){
        appData.datarequest = 0;
        appData.ping = 0;
    }
    PubnubStaticProcess();

    /* Publish a ping message every 10 seconds. */
    if(APP_TIMER_Expired(&pubTimer, 10) && !appData.datarequest)
    {
        appData.ping = 1;
        PubnubStaticPublishf("{\"ping\":%d}", count++);
        APP_TIMER_Set(&pubTimer);
    }
    

    /* Publish button (switch) presses (and releases) */

    // Build our JSON payload by checking values and putting them into the JSON object
    if(!appData.ping){
        if(appData.myQueue.message_queue[appData.msg_queue_index].s1)
        {

            if( !appData.datasent && !PubnubStaticPublishf("{\"switch\":1, \"event\":\"%s\"}",
                (appData.myQueue.message_queue[appData.msg_queue_index].stateSW1) ? "released" : "pressed" ) )
            {
                appData.datarequest = 1;
                APP_TIMER_Set(&pubTimer);
    //            SYS_CONSOLE_PRINT("Trying at qindex = %d, qfront = %d, stateSW1=%s\r\n", appData.msg_queue_index, appData.myQueue.front, (appData.myQueue.message_queue[appData.msg_queue_index].stateSW1) ? "released" : "pressed" );
                Nop();
            }
            else if(appData.datasent){

                dequeue(&appData.myQueue);
                appData.myQueue.message_queue[appData.msg_queue_index].s1 = 0;
                appData.datasent = 0;
    //            SYS_CONSOLE_PRINT("After data is sent qfront = %d\r\n", appData.myQueue.front );

            }
        }
        if(appData.myQueue.message_queue[appData.msg_queue_index].s2)
        {

            if( !appData.datasent && !PubnubStaticPublishf("{\"switch\":2, \"event\":\"%s\"}",
                (appData.myQueue.message_queue[appData.msg_queue_index].stateSW2) ? "released" : "pressed" ) )
            {
                appData.datarequest = 1;
                APP_TIMER_Set(&pubTimer);
    //            SYS_CONSOLE_PRINT("Trying at qindex = %d, qfront = %d, stateSW2=%s\r\n", appData.msg_queue_index, appData.myQueue.front, (appData.myQueue.message_queue[appData.msg_queue_index].stateSW2) ? "released" : "pressed" );
                Nop();
            }
            else if(appData.datasent){

                dequeue(&appData.myQueue);
                appData.myQueue.message_queue[appData.msg_queue_index].s2 = 0;
                appData.datasent = 0;
    //            SYS_CONSOLE_PRINT("After data is sent qfront = %d\r\n", appData.myQueue.front );

            }
        }
        if(appData.myQueue.message_queue[appData.msg_queue_index].s3)
        {

            if( !appData.datasent && !PubnubStaticPublishf("{\"switch\":3, \"event\":\"%s\"}",
                (appData.myQueue.message_queue[appData.msg_queue_index].stateSW3) ? "released" : "pressed" ) )
            {
                appData.datarequest = 1;
                APP_TIMER_Set(&pubTimer);
    //            SYS_CONSOLE_PRINT("Trying at qindex = %d, qfront = %d, stateSW3=%s\r\n", appData.msg_queue_index, appData.myQueue.front, (appData.myQueue.message_queue[appData.msg_queue_index].stateSW3) ? "released" : "pressed" );
                Nop();
            }
            else if(appData.datasent){

                dequeue(&appData.myQueue);
                appData.myQueue.message_queue[appData.msg_queue_index].s3 = 0;
                appData.datasent = 0;
    //            SYS_CONSOLE_PRINT("After data is sent qfront = %d\r\n", appData.myQueue.front );

            }
        }
        if(appData.myQueue.message_queue[appData.msg_queue_index].s4)
        {

            if( !appData.datasent && !PubnubStaticPublishf("{\"switch\":4, \"event\":\"%s\"}",
                (appData.myQueue.message_queue[appData.msg_queue_index].stateSW4) ? "released" : "pressed" ) )
            {
                appData.datarequest = 1;
                APP_TIMER_Set(&pubTimer);
    //            SYS_CONSOLE_PRINT("Trying at qindex = %d, qfront = %d, stateSW4=%s\r\n", appData.msg_queue_index, appData.myQueue.front, (appData.myQueue.message_queue[appData.msg_queue_index].stateSW4) ? "released" : "pressed" );
                Nop();
            }
            else if(appData.datasent){

                dequeue(&appData.myQueue);
                appData.myQueue.message_queue[appData.msg_queue_index].s4 = 0;
                appData.datasent = 0;
    //            SYS_CONSOLE_PRINT("After data is sent qfront = %d\r\n", appData.myQueue.front );
            }
        }
        if(appData.myQueue.message_queue[appData.msg_queue_index].potentiometer_value)
        {
            if( !appData.datasent && !PubnubStaticPublishf("{\"potentiometer\":1, \"value\":\"%d\"}", appData.myQueue.message_queue[appData.msg_queue_index].potentiometer ) )
            {
                appData.datarequest = 1;
                APP_TIMER_Set(&pubTimer);
    //            SYS_CONSOLE_PRINT("Trying at qindex = %d, qfront = %d, stateSW4=%s\r\n", appData.msg_queue_index, appData.myQueue.front, (appData.myQueue.message_queue[appData.msg_queue_index].stateSW4) ? "released" : "pressed" );
                Nop();
                
            }
            else if(appData.datasent){

                dequeue(&appData.myQueue);
                appData.myQueue.message_queue[appData.msg_queue_index].potentiometer_value = 0;
                appData.datasent = 0;
    //            SYS_CONSOLE_PRINT("After data is sent qfront = %d\r\n", appData.myQueue.front );
            }
            
        }
        if(appData.myQueue.message_queue[appData.msg_queue_index].temperature_value)
        {
            if( !appData.datasent && !PubnubStaticPublishf("{\"temperature\":1, \"value\":\"%d\"}", appData.myQueue.message_queue[appData.msg_queue_index].temperature ) )
            {
                appData.datarequest = 1;
                APP_TIMER_Set(&pubTimer);
    //            SYS_CONSOLE_PRINT("Trying at qindex = %d, qfront = %d, stateSW4=%s\r\n", appData.msg_queue_index, appData.myQueue.front, (appData.myQueue.message_queue[appData.msg_queue_index].stateSW4) ? "released" : "pressed" );
                Nop();
                
            }
            else if(appData.datasent){

                dequeue(&appData.myQueue);
                appData.myQueue.message_queue[appData.msg_queue_index].temperature_value = 0;
                appData.datasent = 0;
    //            SYS_CONSOLE_PRINT("After data is sent qfront = %d\r\n", appData.myQueue.front );
            }
            
        }
    }

    /* Process any received message. */
    inmsg = PubnubStaticGetMsg();
    if (inmsg != NULL) {
        int ledno, ledval;

        if (sscanf(inmsg, "{\"led\":{\"%d\":%d}}", &ledno, &ledval) == 2) {
            Nop();
//            set_led(ledno, ledval);
            BSP_LEDStateSet(ledno, ledval);
        }
        PubnubStaticMarkMsgRead();
    }
}
