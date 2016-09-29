#include "pubnub.h"
#include "pubnubStatic.h"

extern APP_DATA appData;

static char subMsgBuf[256];
static bool bSubscribe;
static bool bSubscribeOn;
static bool bLeave;

static struct pubnub pCtx, sCtx;
static char pubChan[64], subChan[64];
static uint32_t pubTimer, subTimer;

static char pubMsgBuf[256];
static bool bPublish;
static bool bPublishOn;



#define START_DELAY 7
#define RETRY_DELAY 2 // TODO: Exponential backoff


/* Print error() to UART. */
static void
error(int led, const char *ctx, enum pubnub_res result)
{
    /* You may want to also comment out the following completely to save
     * memory, or implement your own error reporting mechanism. */
#if defined(STACK_USE_UART)
    static const char *errmsg[] = {
        "Success.",
        "Time out before the request has completed.",
        "Communication error (network or HTTP response format).",
        "HTTP error.",
        "Unexpected input in received JSON.",
        "Initial call failed."
    };
    putrsUART("\r\nPubNubDemo error ");
    putrsUART(ctx);
    putrsUART(": ");
    putrsUART(errmsg[result+1]);
    putrsUART("\r\n");
#endif
}


static void
publish_cb(struct pubnub *p, enum pubnub_res result, int http_code,
        char *response, void *cb_data)
{
    Nop();
    if (result != PNR_OK) {
        SYS_CONSOLE_MESSAGE("publish_cb..error..\r\n");
        /* TODO: Error reporting, let user decide whether to reply?
         * (incl. http_code). */
        error(1, "publish", result);
        // We do not enforce a cool-down as we do not actually
        // retry the publish ourselves?
        // pubTimer = TickGet() + RETRY_DELAY * TICK_SECOND;
    }
    else{
        SYS_CONSOLE_MESSAGE("publish_cb..ok\r\n");
        if(appData.ping)
            appData.ping = 0;
        else if(appData.datarequest = 1){
            appData.datasent = 1;
            appData.datarequest = 0;
        }
    }
    bPublish = bPublishOn = false;
}

static void
subscribe_cb(struct pubnub *p, enum pubnub_res result, int http_code,
        const char *channel, char *response, void *cb_data)
{
    bSubscribeOn = false;
    if (result == PNR_TIMEOUT || result == PNR_CANCELLED)
        return;
    if (result != PNR_OK) {
        /* TODO: Error reporting, let user decide whether to reply?
         * (incl. http_code). */
        SYS_CONSOLE_MESSAGE("subscribe_cb..error..\r\n");
        error(2, "subscribe", result);
        subTimer = SYS_TMR_TickCountGet() + RETRY_DELAY * SYS_TMR_TickCounterFrequencyGet();
       
        return;
    }
    else{
        SYS_CONSOLE_MESSAGE("subscribe_cb..ok\r\n");
      
    }

    /* Truncate if response is too long. */
    snprintf(subMsgBuf, sizeof(subMsgBuf), "%s", response);
//    bSubscribe = true;
    SYS_CONSOLE_PRINT("RESPONSE> %s\r\n", subMsgBuf);
}

static void
leave_cb(struct pubnub *p, enum pubnub_res result, int http_code,
        char *response, void *cb_data)
{
    bLeave = false;
    /* The result does not matter. */
    /* We will automatically subscribe now. */
}


void
PubnubStaticProcPublish(struct pubnub *pn)
{
    pubnub_update(pn);

    if (pubTimer != 0 && pubTimer > SYS_TMR_TickCountGet())
        return; // cool-down
    pubTimer = 0;

//    if (bPublish == false || bPublishOn == true)
    if (bPublish == false )
        return; // nothing new to do

    if (!pubnub_publish(pn, pubChan, pubMsgBuf, publish_cb, NULL)) {
        error(1, "publish initial", 5);
        pubTimer = SYS_TMR_TickCountGet() + RETRY_DELAY * SYS_TMR_TickCounterFrequencyGet();
        SYS_CONSOLE_MESSAGE("Retry\r\n");
        bPublish = false;
    }
    else{
//        bPublishOn = false;
        bPublish = false;
                    
    }
        
//    bPublishOn = true;
}

void
PubnubStaticProcSubscribe(struct pubnub *pn)
{
    static uint32_t t1 = 0;
    pubnub_update(pn);

    if (subTimer != 0 && subTimer > SYS_TMR_TickCountGet())
        return; // cool-down
    subTimer = 0;

//    if (bSubscribe == true || bSubscribeOn == true || bLeave == true){
    if (bSubscribeOn == true || bLeave == true){
        if(APP_TIMER_Expired(&t1, 2)){
            bSubscribeOn = false;
            bSubscribe = false;
            APP_TIMER_Set(&t1);
        }
        return; // nothing new to do
    }

    bSubscribeOn = true;
   
    if (!pubnub_subscribe(pn, subChan, subscribe_cb, NULL)) {
        error(2, "subscribe initial", 5);
//        SYS_CONSOLE_MESSAGE("Subscribe..error\r\n");
        subTimer = SYS_TMR_TickCountGet() + RETRY_DELAY * SYS_TMR_TickCounterFrequencyGet();
    }
//    else{
//        bSubscribe = bSubscribeOn = bLeave = false;
//        SYS_CONSOLE_MESSAGE("Subscribe..ok\r\n");
//    }
}


void
PubnubStaticInit(const char *pubkey, const char *subkey,
                 const char *pubChan_, const char *subChan_)
{
    pubnub_init(&pCtx, pubkey, subkey);
    pubnub_init(&sCtx, pubkey, subkey);
    strncpy(pubChan, pubChan_, sizeof(pubChan));
    pubChan[sizeof(pubChan)-1] = 0;
    strncpy(subChan, subChan_, sizeof(subChan));
    subChan[sizeof(subChan)-1] = 0;
    pubnub_set_uuid(&sCtx, "EagleEye2016");
    pubnub_set_uuid(&pCtx, "EagleEye2016");

    bPublish = bPublishOn = false;
    bSubscribe = bSubscribeOn = bLeave = false;

    /* We will not do a pubnub call right away as the network
     * may not be configured properly at this moment yet (e.g.
     * DHCP address configuration still ongoing etc.). We will
     * therefore perform a delayed call of PubnubStaticStart()
     * after START_DELAY seconds. */
    pubTimer = subTimer = SYS_TMR_TickCountGet() + START_DELAY * SYS_TMR_TickCounterFrequencyGet();
}

void PubnubStaticProcess(void)
{
    
    if(!appData.ping && !appData.datarequest)
        PubnubStaticProcSubscribe(&sCtx);
    else
        PubnubStaticProcPublish(&pCtx);
}

struct pubnub *
PubnubStaticPubCtx(void)
{
	return &pCtx;
}

struct pubnub *
PubnubStaticSubCtx(void)
{
	return &sCtx;
}

void
PubnubStaticSubChan(const char *subChan_)
{
    pubnub_cancel(&sCtx);
    if (!pubnub_leave(&sCtx, subChan, leave_cb, NULL)) {
        error(2, "leave", 5);
    } else {
        bLeave = true;
    }

    /* pubnub_leave() consumes the subChan buffer immediately so we can
     * replace it now. */
    strncpy(subChan, subChan_, sizeof(subChan));
    subChan[sizeof(subChan)-1] = 0;

    /* At this point, bSubscribeOn == false, bSubscribe == false.
     * Therefore, the moment bLeave drops to false, we will resubscribe
     * again with the new subChan set. */
}


int PubnubStaticPublishf(char const *format, ...)
{
    static uint32_t t1 = 0;
    const size_t msgBufLen = sizeof pubMsgBuf / sizeof pubMsgBuf[0];
    va_list va;

    if (bPublish) {
        Nop();
//        if(APP_TIMER_Expired(&t1,3)){
//            bPublish = false;
//            APP_TIMER_Set(&t1);
//        }
        return -1;
    }

    va_start(va, format);
    vsnprintf(pubMsgBuf, msgBufLen, format, va);
    va_end(va);
    bPublish = true;

    SYS_CONSOLE_PRINT("Publish: %s..\r\n", pubMsgBuf);
    return 0;
}


char const* PubnubStaticGetMsg()
{
    return bSubscribe ? subMsgBuf : NULL;
}


void PubnubStaticMarkMsgRead()
{
    bSubscribe = false;
}
