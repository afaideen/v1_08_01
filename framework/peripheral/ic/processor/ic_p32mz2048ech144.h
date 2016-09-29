/* Created by plibgen $Revision: 1.31 $ */

#ifndef _IC_P32MZ2048ECH144_H
#define _IC_P32MZ2048ECH144_H

/* Section 1 - Enumerate instances, define constants, VREGs */

#include <xc.h>
#include <stdbool.h>

#include "peripheral/peripheral_common_32bit.h"

/* Default definition used for all API dispatch functions */
#ifndef PLIB_INLINE_API
    #define PLIB_INLINE_API extern inline
#endif

/* Default definition used for all other functions */
#ifndef PLIB_INLINE
    #define PLIB_INLINE extern inline
#endif

typedef enum {

    IC_ID_1 = 0,
    IC_ID_2,
    IC_ID_3,
    IC_ID_4,
    IC_ID_5,
    IC_ID_6,
    IC_ID_7,
    IC_ID_8,
    IC_ID_9,
    IC_NUMBER_OF_MODULES

} IC_MODULE_ID;

typedef enum {

    IC_INPUT_CAPTURE_DISABLE_MODE = 0,
    IC_INPUT_CAPTURE_EDGE_DETECT_MODE = 1,
    IC_INPUT_CAPTURE_FALLING_EDGE_MODE = 2,
    IC_INPUT_CAPTURE_RISING_EDGE_MODE = 3,
    IC_INPUT_CAPTURE_EVERY_4TH_EDGE_MODE = 4,
    IC_INPUT_CAPTURE_EVERY_16TH_EDGE_MODE = 5,
    IC_INPUT_CAPTURE_EVERY_EDGE_MODE = 6,
    IC_INPUT_CAPTURE_INTERRUPT_MODE = 7

} IC_INPUT_CAPTURE_MODES;

typedef enum {

    IC_BUFFER_SIZE_16BIT = 0,
    IC_BUFFER_SIZE_32BIT = 1

} IC_BUFFER_SIZE;

typedef enum {

    IC_EDGE_FALLING = 0,
    IC_EDGE_RISING = 1

} IC_EDGE_TYPES;

typedef enum {

    IC_TIMER_TMR3 = 0,
    IC_TIMER_TMR2 = 1

} IC_TIMERS;

typedef enum {

    IC_ALT_TIMER_TMR3 = 0,
    IC_ALT_TIMER_TMR2 = 1,
    IC_ALT_TIMER_TMR5 = 2,
    IC_ALT_TIMER_TMR4 = 3,
    IC_ALT_TIMER_TMR7 = 4,
    IC_ALT_TIMER_TMR6 = 5

} IC_ALT_TIMERS;

typedef enum {

    IC_INTERRUPT_ON_EVERY_CAPTURE_EVENT = 0,
    IC_INTERRUPT_ON_EVERY_2ND_CAPTURE_EVENT = 1,
    IC_INTERRUPT_ON_EVERY_3RD_CAPTURE_EVENT = 2,
    IC_INTERRUPT_ON_EVERY_4TH_CAPTURE_EVENT = 3

} IC_EVENTS_PER_INTERRUPT;

PLIB_INLINE SFR_TYPE* _IC_ENABLE_CONTROL_VREG(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return &IC1CON;
        case IC_ID_2 :
            return &IC2CON;
        case IC_ID_3 :
            return &IC3CON;
        case IC_ID_4 :
            return &IC4CON;
        case IC_ID_5 :
            return &IC5CON;
        case IC_ID_6 :
            return &IC6CON;
        case IC_ID_7 :
            return &IC7CON;
        case IC_ID_8 :
            return &IC8CON;
        case IC_ID_9 :
            return &IC9CON;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _IC_STOP_IN_IDLE_VREG(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return &IC1CON;
        case IC_ID_2 :
            return &IC2CON;
        case IC_ID_3 :
            return &IC3CON;
        case IC_ID_4 :
            return &IC4CON;
        case IC_ID_5 :
            return &IC5CON;
        case IC_ID_6 :
            return &IC6CON;
        case IC_ID_7 :
            return &IC7CON;
        case IC_ID_8 :
            return &IC8CON;
        case IC_ID_9 :
            return &IC9CON;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _IC_EDGE_CAPTURE_VREG(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return &IC1CON;
        case IC_ID_2 :
            return &IC2CON;
        case IC_ID_3 :
            return &IC3CON;
        case IC_ID_4 :
            return &IC4CON;
        case IC_ID_5 :
            return &IC5CON;
        case IC_ID_6 :
            return &IC6CON;
        case IC_ID_7 :
            return &IC7CON;
        case IC_ID_8 :
            return &IC8CON;
        case IC_ID_9 :
            return &IC9CON;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _IC_BUFFER_SIZE_SET_VREG(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return &IC1CON;
        case IC_ID_2 :
            return &IC2CON;
        case IC_ID_3 :
            return &IC3CON;
        case IC_ID_4 :
            return &IC4CON;
        case IC_ID_5 :
            return &IC5CON;
        case IC_ID_6 :
            return &IC6CON;
        case IC_ID_7 :
            return &IC7CON;
        case IC_ID_8 :
            return &IC8CON;
        case IC_ID_9 :
            return &IC9CON;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _IC_TIMER_SELECT_MZ_VREG(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return &IC1CON;
        case IC_ID_2 :
            return &IC2CON;
        case IC_ID_3 :
            return &IC3CON;
        case IC_ID_4 :
            return &IC4CON;
        case IC_ID_5 :
            return &IC5CON;
        case IC_ID_6 :
            return &IC6CON;
        case IC_ID_7 :
            return &IC7CON;
        case IC_ID_8 :
            return &IC8CON;
        case IC_ID_9 :
            return &IC9CON;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _IC_EVENTS_PER_INTERRUPT_VREG(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return &IC1CON;
        case IC_ID_2 :
            return &IC2CON;
        case IC_ID_3 :
            return &IC3CON;
        case IC_ID_4 :
            return &IC4CON;
        case IC_ID_5 :
            return &IC5CON;
        case IC_ID_6 :
            return &IC6CON;
        case IC_ID_7 :
            return &IC7CON;
        case IC_ID_8 :
            return &IC8CON;
        case IC_ID_9 :
            return &IC9CON;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _IC_BUFFER_OVERFLOW_STATUS_VREG(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return &IC1CON;
        case IC_ID_2 :
            return &IC2CON;
        case IC_ID_3 :
            return &IC3CON;
        case IC_ID_4 :
            return &IC4CON;
        case IC_ID_5 :
            return &IC5CON;
        case IC_ID_6 :
            return &IC6CON;
        case IC_ID_7 :
            return &IC7CON;
        case IC_ID_8 :
            return &IC8CON;
        case IC_ID_9 :
            return &IC9CON;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _IC_BUFFER_IS_EMPTY_STATUS_VREG(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return &IC1CON;
        case IC_ID_2 :
            return &IC2CON;
        case IC_ID_3 :
            return &IC3CON;
        case IC_ID_4 :
            return &IC4CON;
        case IC_ID_5 :
            return &IC5CON;
        case IC_ID_6 :
            return &IC6CON;
        case IC_ID_7 :
            return &IC7CON;
        case IC_ID_8 :
            return &IC8CON;
        case IC_ID_9 :
            return &IC9CON;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _IC_CAPTURE_MODE_SELECT_VREG(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return &IC1CON;
        case IC_ID_2 :
            return &IC2CON;
        case IC_ID_3 :
            return &IC3CON;
        case IC_ID_4 :
            return &IC4CON;
        case IC_ID_5 :
            return &IC5CON;
        case IC_ID_6 :
            return &IC6CON;
        case IC_ID_7 :
            return &IC7CON;
        case IC_ID_8 :
            return &IC8CON;
        case IC_ID_9 :
            return &IC9CON;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _IC_BUFFER_32BIT_VALUE_VREG(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return &IC1BUF;
        case IC_ID_2 :
            return &IC2BUF;
        case IC_ID_3 :
            return &IC3BUF;
        case IC_ID_4 :
            return &IC4BUF;
        case IC_ID_5 :
            return &IC5BUF;
        case IC_ID_6 :
            return &IC6BUF;
        case IC_ID_7 :
            return &IC7BUF;
        case IC_ID_8 :
            return &IC8BUF;
        case IC_ID_9 :
            return &IC9BUF;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_ENABLE_CONTROL_MASK(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_ON_MASK;
        case IC_ID_2 :
            return _IC2CON_ON_MASK;
        case IC_ID_3 :
            return _IC3CON_ON_MASK;
        case IC_ID_4 :
            return _IC4CON_ON_MASK;
        case IC_ID_5 :
            return _IC5CON_ON_MASK;
        case IC_ID_6 :
            return _IC6CON_ON_MASK;
        case IC_ID_7 :
            return _IC7CON_ON_MASK;
        case IC_ID_8 :
            return _IC8CON_ON_MASK;
        case IC_ID_9 :
            return _IC9CON_ON_MASK;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_STOP_IN_IDLE_MASK(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_SIDL_MASK;
        case IC_ID_2 :
            return _IC2CON_SIDL_MASK;
        case IC_ID_3 :
            return _IC3CON_SIDL_MASK;
        case IC_ID_4 :
            return _IC4CON_SIDL_MASK;
        case IC_ID_5 :
            return _IC5CON_SIDL_MASK;
        case IC_ID_6 :
            return _IC6CON_SIDL_MASK;
        case IC_ID_7 :
            return _IC7CON_SIDL_MASK;
        case IC_ID_8 :
            return _IC8CON_SIDL_MASK;
        case IC_ID_9 :
            return _IC9CON_SIDL_MASK;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_EDGE_CAPTURE_MASK(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_FEDGE_MASK;
        case IC_ID_2 :
            return _IC2CON_FEDGE_MASK;
        case IC_ID_3 :
            return _IC3CON_FEDGE_MASK;
        case IC_ID_4 :
            return _IC4CON_FEDGE_MASK;
        case IC_ID_5 :
            return _IC5CON_FEDGE_MASK;
        case IC_ID_6 :
            return _IC6CON_FEDGE_MASK;
        case IC_ID_7 :
            return _IC7CON_FEDGE_MASK;
        case IC_ID_8 :
            return _IC8CON_FEDGE_MASK;
        case IC_ID_9 :
            return _IC9CON_FEDGE_MASK;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_BUFFER_SIZE_SET_MASK(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_C32_MASK;
        case IC_ID_2 :
            return _IC2CON_C32_MASK;
        case IC_ID_3 :
            return _IC3CON_C32_MASK;
        case IC_ID_4 :
            return _IC4CON_C32_MASK;
        case IC_ID_5 :
            return _IC5CON_C32_MASK;
        case IC_ID_6 :
            return _IC6CON_C32_MASK;
        case IC_ID_7 :
            return _IC7CON_C32_MASK;
        case IC_ID_8 :
            return _IC8CON_C32_MASK;
        case IC_ID_9 :
            return _IC9CON_C32_MASK;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_TIMER_SELECT_MZ_MASK(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_ICTMR_MASK;
        case IC_ID_2 :
            return _IC2CON_ICTMR_MASK;
        case IC_ID_3 :
            return _IC3CON_ICTMR_MASK;
        case IC_ID_4 :
            return _IC4CON_ICTMR_MASK;
        case IC_ID_5 :
            return _IC5CON_ICTMR_MASK;
        case IC_ID_6 :
            return _IC6CON_ICTMR_MASK;
        case IC_ID_7 :
            return _IC7CON_ICTMR_MASK;
        case IC_ID_8 :
            return _IC8CON_ICTMR_MASK;
        case IC_ID_9 :
            return _IC9CON_ICTMR_MASK;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_EVENTS_PER_INTERRUPT_MASK(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_ICI_MASK;
        case IC_ID_2 :
            return _IC2CON_ICI_MASK;
        case IC_ID_3 :
            return _IC3CON_ICI_MASK;
        case IC_ID_4 :
            return _IC4CON_ICI_MASK;
        case IC_ID_5 :
            return _IC5CON_ICI_MASK;
        case IC_ID_6 :
            return _IC6CON_ICI_MASK;
        case IC_ID_7 :
            return _IC7CON_ICI_MASK;
        case IC_ID_8 :
            return _IC8CON_ICI_MASK;
        case IC_ID_9 :
            return _IC9CON_ICI_MASK;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_BUFFER_OVERFLOW_STATUS_MASK(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_ICOV_MASK;
        case IC_ID_2 :
            return _IC2CON_ICOV_MASK;
        case IC_ID_3 :
            return _IC3CON_ICOV_MASK;
        case IC_ID_4 :
            return _IC4CON_ICOV_MASK;
        case IC_ID_5 :
            return _IC5CON_ICOV_MASK;
        case IC_ID_6 :
            return _IC6CON_ICOV_MASK;
        case IC_ID_7 :
            return _IC7CON_ICOV_MASK;
        case IC_ID_8 :
            return _IC8CON_ICOV_MASK;
        case IC_ID_9 :
            return _IC9CON_ICOV_MASK;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_BUFFER_IS_EMPTY_STATUS_MASK(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_ICBNE_MASK;
        case IC_ID_2 :
            return _IC2CON_ICBNE_MASK;
        case IC_ID_3 :
            return _IC3CON_ICBNE_MASK;
        case IC_ID_4 :
            return _IC4CON_ICBNE_MASK;
        case IC_ID_5 :
            return _IC5CON_ICBNE_MASK;
        case IC_ID_6 :
            return _IC6CON_ICBNE_MASK;
        case IC_ID_7 :
            return _IC7CON_ICBNE_MASK;
        case IC_ID_8 :
            return _IC8CON_ICBNE_MASK;
        case IC_ID_9 :
            return _IC9CON_ICBNE_MASK;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_CAPTURE_MODE_SELECT_MASK(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_ICM_MASK;
        case IC_ID_2 :
            return _IC2CON_ICM_MASK;
        case IC_ID_3 :
            return _IC3CON_ICM_MASK;
        case IC_ID_4 :
            return _IC4CON_ICM_MASK;
        case IC_ID_5 :
            return _IC5CON_ICM_MASK;
        case IC_ID_6 :
            return _IC6CON_ICM_MASK;
        case IC_ID_7 :
            return _IC7CON_ICM_MASK;
        case IC_ID_8 :
            return _IC8CON_ICM_MASK;
        case IC_ID_9 :
            return _IC9CON_ICM_MASK;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_BUFFER_32BIT_VALUE_MASK(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return (SFR_DATA)-1;
        case IC_ID_2 :
            return (SFR_DATA)-1;
        case IC_ID_3 :
            return (SFR_DATA)-1;
        case IC_ID_4 :
            return (SFR_DATA)-1;
        case IC_ID_5 :
            return (SFR_DATA)-1;
        case IC_ID_6 :
            return (SFR_DATA)-1;
        case IC_ID_7 :
            return (SFR_DATA)-1;
        case IC_ID_8 :
            return (SFR_DATA)-1;
        case IC_ID_9 :
            return (SFR_DATA)-1;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_ENABLE_CONTROL_POS(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_ON_POSITION;
        case IC_ID_2 :
            return _IC2CON_ON_POSITION;
        case IC_ID_3 :
            return _IC3CON_ON_POSITION;
        case IC_ID_4 :
            return _IC4CON_ON_POSITION;
        case IC_ID_5 :
            return _IC5CON_ON_POSITION;
        case IC_ID_6 :
            return _IC6CON_ON_POSITION;
        case IC_ID_7 :
            return _IC7CON_ON_POSITION;
        case IC_ID_8 :
            return _IC8CON_ON_POSITION;
        case IC_ID_9 :
            return _IC9CON_ON_POSITION;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_STOP_IN_IDLE_POS(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_SIDL_POSITION;
        case IC_ID_2 :
            return _IC2CON_SIDL_POSITION;
        case IC_ID_3 :
            return _IC3CON_SIDL_POSITION;
        case IC_ID_4 :
            return _IC4CON_SIDL_POSITION;
        case IC_ID_5 :
            return _IC5CON_SIDL_POSITION;
        case IC_ID_6 :
            return _IC6CON_SIDL_POSITION;
        case IC_ID_7 :
            return _IC7CON_SIDL_POSITION;
        case IC_ID_8 :
            return _IC8CON_SIDL_POSITION;
        case IC_ID_9 :
            return _IC9CON_SIDL_POSITION;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_EDGE_CAPTURE_POS(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_FEDGE_POSITION;
        case IC_ID_2 :
            return _IC2CON_FEDGE_POSITION;
        case IC_ID_3 :
            return _IC3CON_FEDGE_POSITION;
        case IC_ID_4 :
            return _IC4CON_FEDGE_POSITION;
        case IC_ID_5 :
            return _IC5CON_FEDGE_POSITION;
        case IC_ID_6 :
            return _IC6CON_FEDGE_POSITION;
        case IC_ID_7 :
            return _IC7CON_FEDGE_POSITION;
        case IC_ID_8 :
            return _IC8CON_FEDGE_POSITION;
        case IC_ID_9 :
            return _IC9CON_FEDGE_POSITION;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_BUFFER_SIZE_SET_POS(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_C32_POSITION;
        case IC_ID_2 :
            return _IC2CON_C32_POSITION;
        case IC_ID_3 :
            return _IC3CON_C32_POSITION;
        case IC_ID_4 :
            return _IC4CON_C32_POSITION;
        case IC_ID_5 :
            return _IC5CON_C32_POSITION;
        case IC_ID_6 :
            return _IC6CON_C32_POSITION;
        case IC_ID_7 :
            return _IC7CON_C32_POSITION;
        case IC_ID_8 :
            return _IC8CON_C32_POSITION;
        case IC_ID_9 :
            return _IC9CON_C32_POSITION;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_TIMER_SELECT_MZ_POS(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_ICTMR_POSITION;
        case IC_ID_2 :
            return _IC2CON_ICTMR_POSITION;
        case IC_ID_3 :
            return _IC3CON_ICTMR_POSITION;
        case IC_ID_4 :
            return _IC4CON_ICTMR_POSITION;
        case IC_ID_5 :
            return _IC5CON_ICTMR_POSITION;
        case IC_ID_6 :
            return _IC6CON_ICTMR_POSITION;
        case IC_ID_7 :
            return _IC7CON_ICTMR_POSITION;
        case IC_ID_8 :
            return _IC8CON_ICTMR_POSITION;
        case IC_ID_9 :
            return _IC9CON_ICTMR_POSITION;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_EVENTS_PER_INTERRUPT_POS(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_ICI_POSITION;
        case IC_ID_2 :
            return _IC2CON_ICI_POSITION;
        case IC_ID_3 :
            return _IC3CON_ICI_POSITION;
        case IC_ID_4 :
            return _IC4CON_ICI_POSITION;
        case IC_ID_5 :
            return _IC5CON_ICI_POSITION;
        case IC_ID_6 :
            return _IC6CON_ICI_POSITION;
        case IC_ID_7 :
            return _IC7CON_ICI_POSITION;
        case IC_ID_8 :
            return _IC8CON_ICI_POSITION;
        case IC_ID_9 :
            return _IC9CON_ICI_POSITION;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_BUFFER_OVERFLOW_STATUS_POS(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_ICOV_POSITION;
        case IC_ID_2 :
            return _IC2CON_ICOV_POSITION;
        case IC_ID_3 :
            return _IC3CON_ICOV_POSITION;
        case IC_ID_4 :
            return _IC4CON_ICOV_POSITION;
        case IC_ID_5 :
            return _IC5CON_ICOV_POSITION;
        case IC_ID_6 :
            return _IC6CON_ICOV_POSITION;
        case IC_ID_7 :
            return _IC7CON_ICOV_POSITION;
        case IC_ID_8 :
            return _IC8CON_ICOV_POSITION;
        case IC_ID_9 :
            return _IC9CON_ICOV_POSITION;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_BUFFER_IS_EMPTY_STATUS_POS(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_ICBNE_POSITION;
        case IC_ID_2 :
            return _IC2CON_ICBNE_POSITION;
        case IC_ID_3 :
            return _IC3CON_ICBNE_POSITION;
        case IC_ID_4 :
            return _IC4CON_ICBNE_POSITION;
        case IC_ID_5 :
            return _IC5CON_ICBNE_POSITION;
        case IC_ID_6 :
            return _IC6CON_ICBNE_POSITION;
        case IC_ID_7 :
            return _IC7CON_ICBNE_POSITION;
        case IC_ID_8 :
            return _IC8CON_ICBNE_POSITION;
        case IC_ID_9 :
            return _IC9CON_ICBNE_POSITION;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_CAPTURE_MODE_SELECT_POS(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_ICM_POSITION;
        case IC_ID_2 :
            return _IC2CON_ICM_POSITION;
        case IC_ID_3 :
            return _IC3CON_ICM_POSITION;
        case IC_ID_4 :
            return _IC4CON_ICM_POSITION;
        case IC_ID_5 :
            return _IC5CON_ICM_POSITION;
        case IC_ID_6 :
            return _IC6CON_ICM_POSITION;
        case IC_ID_7 :
            return _IC7CON_ICM_POSITION;
        case IC_ID_8 :
            return _IC8CON_ICM_POSITION;
        case IC_ID_9 :
            return _IC9CON_ICM_POSITION;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_BUFFER_32BIT_VALUE_POS(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return (SFR_DATA)0;
        case IC_ID_2 :
            return (SFR_DATA)0;
        case IC_ID_3 :
            return (SFR_DATA)0;
        case IC_ID_4 :
            return (SFR_DATA)0;
        case IC_ID_5 :
            return (SFR_DATA)0;
        case IC_ID_6 :
            return (SFR_DATA)0;
        case IC_ID_7 :
            return (SFR_DATA)0;
        case IC_ID_8 :
            return (SFR_DATA)0;
        case IC_ID_9 :
            return (SFR_DATA)0;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_ENABLE_CONTROL_LEN(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_ON_LENGTH;
        case IC_ID_2 :
            return _IC2CON_ON_LENGTH;
        case IC_ID_3 :
            return _IC3CON_ON_LENGTH;
        case IC_ID_4 :
            return _IC4CON_ON_LENGTH;
        case IC_ID_5 :
            return _IC5CON_ON_LENGTH;
        case IC_ID_6 :
            return _IC6CON_ON_LENGTH;
        case IC_ID_7 :
            return _IC7CON_ON_LENGTH;
        case IC_ID_8 :
            return _IC8CON_ON_LENGTH;
        case IC_ID_9 :
            return _IC9CON_ON_LENGTH;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_STOP_IN_IDLE_LEN(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_SIDL_LENGTH;
        case IC_ID_2 :
            return _IC2CON_SIDL_LENGTH;
        case IC_ID_3 :
            return _IC3CON_SIDL_LENGTH;
        case IC_ID_4 :
            return _IC4CON_SIDL_LENGTH;
        case IC_ID_5 :
            return _IC5CON_SIDL_LENGTH;
        case IC_ID_6 :
            return _IC6CON_SIDL_LENGTH;
        case IC_ID_7 :
            return _IC7CON_SIDL_LENGTH;
        case IC_ID_8 :
            return _IC8CON_SIDL_LENGTH;
        case IC_ID_9 :
            return _IC9CON_SIDL_LENGTH;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_EDGE_CAPTURE_LEN(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_FEDGE_LENGTH;
        case IC_ID_2 :
            return _IC2CON_FEDGE_LENGTH;
        case IC_ID_3 :
            return _IC3CON_FEDGE_LENGTH;
        case IC_ID_4 :
            return _IC4CON_FEDGE_LENGTH;
        case IC_ID_5 :
            return _IC5CON_FEDGE_LENGTH;
        case IC_ID_6 :
            return _IC6CON_FEDGE_LENGTH;
        case IC_ID_7 :
            return _IC7CON_FEDGE_LENGTH;
        case IC_ID_8 :
            return _IC8CON_FEDGE_LENGTH;
        case IC_ID_9 :
            return _IC9CON_FEDGE_LENGTH;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_BUFFER_SIZE_SET_LEN(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_C32_LENGTH;
        case IC_ID_2 :
            return _IC2CON_C32_LENGTH;
        case IC_ID_3 :
            return _IC3CON_C32_LENGTH;
        case IC_ID_4 :
            return _IC4CON_C32_LENGTH;
        case IC_ID_5 :
            return _IC5CON_C32_LENGTH;
        case IC_ID_6 :
            return _IC6CON_C32_LENGTH;
        case IC_ID_7 :
            return _IC7CON_C32_LENGTH;
        case IC_ID_8 :
            return _IC8CON_C32_LENGTH;
        case IC_ID_9 :
            return _IC9CON_C32_LENGTH;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_TIMER_SELECT_MZ_LEN(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_ICTMR_LENGTH;
        case IC_ID_2 :
            return _IC2CON_ICTMR_LENGTH;
        case IC_ID_3 :
            return _IC3CON_ICTMR_LENGTH;
        case IC_ID_4 :
            return _IC4CON_ICTMR_LENGTH;
        case IC_ID_5 :
            return _IC5CON_ICTMR_LENGTH;
        case IC_ID_6 :
            return _IC6CON_ICTMR_LENGTH;
        case IC_ID_7 :
            return _IC7CON_ICTMR_LENGTH;
        case IC_ID_8 :
            return _IC8CON_ICTMR_LENGTH;
        case IC_ID_9 :
            return _IC9CON_ICTMR_LENGTH;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_EVENTS_PER_INTERRUPT_LEN(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_ICI_LENGTH;
        case IC_ID_2 :
            return _IC2CON_ICI_LENGTH;
        case IC_ID_3 :
            return _IC3CON_ICI_LENGTH;
        case IC_ID_4 :
            return _IC4CON_ICI_LENGTH;
        case IC_ID_5 :
            return _IC5CON_ICI_LENGTH;
        case IC_ID_6 :
            return _IC6CON_ICI_LENGTH;
        case IC_ID_7 :
            return _IC7CON_ICI_LENGTH;
        case IC_ID_8 :
            return _IC8CON_ICI_LENGTH;
        case IC_ID_9 :
            return _IC9CON_ICI_LENGTH;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_BUFFER_OVERFLOW_STATUS_LEN(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_ICOV_LENGTH;
        case IC_ID_2 :
            return _IC2CON_ICOV_LENGTH;
        case IC_ID_3 :
            return _IC3CON_ICOV_LENGTH;
        case IC_ID_4 :
            return _IC4CON_ICOV_LENGTH;
        case IC_ID_5 :
            return _IC5CON_ICOV_LENGTH;
        case IC_ID_6 :
            return _IC6CON_ICOV_LENGTH;
        case IC_ID_7 :
            return _IC7CON_ICOV_LENGTH;
        case IC_ID_8 :
            return _IC8CON_ICOV_LENGTH;
        case IC_ID_9 :
            return _IC9CON_ICOV_LENGTH;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_BUFFER_IS_EMPTY_STATUS_LEN(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_ICBNE_LENGTH;
        case IC_ID_2 :
            return _IC2CON_ICBNE_LENGTH;
        case IC_ID_3 :
            return _IC3CON_ICBNE_LENGTH;
        case IC_ID_4 :
            return _IC4CON_ICBNE_LENGTH;
        case IC_ID_5 :
            return _IC5CON_ICBNE_LENGTH;
        case IC_ID_6 :
            return _IC6CON_ICBNE_LENGTH;
        case IC_ID_7 :
            return _IC7CON_ICBNE_LENGTH;
        case IC_ID_8 :
            return _IC8CON_ICBNE_LENGTH;
        case IC_ID_9 :
            return _IC9CON_ICBNE_LENGTH;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_CAPTURE_MODE_SELECT_LEN(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return _IC1CON_ICM_LENGTH;
        case IC_ID_2 :
            return _IC2CON_ICM_LENGTH;
        case IC_ID_3 :
            return _IC3CON_ICM_LENGTH;
        case IC_ID_4 :
            return _IC4CON_ICM_LENGTH;
        case IC_ID_5 :
            return _IC5CON_ICM_LENGTH;
        case IC_ID_6 :
            return _IC6CON_ICM_LENGTH;
        case IC_ID_7 :
            return _IC7CON_ICM_LENGTH;
        case IC_ID_8 :
            return _IC8CON_ICM_LENGTH;
        case IC_ID_9 :
            return _IC9CON_ICM_LENGTH;
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _IC_BUFFER_32BIT_VALUE_LEN(IC_MODULE_ID i)
{
    switch (i) {
        case IC_ID_1 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case IC_ID_2 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case IC_ID_3 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case IC_ID_4 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case IC_ID_5 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case IC_ID_6 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case IC_ID_7 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case IC_ID_8 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case IC_ID_9 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case IC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

/* Section 2 - Feature variant inclusion */

#define PLIB_TEMPLATE PLIB_INLINE
#include "../templates/ic_EnableControl_Default.h"
#include "../templates/ic_StopInIdle_Default.h"
#include "../templates/ic_EdgeCapture_Default.h"
#include "../templates/ic_EventsPerInterruptSelect_Default.h"
#include "../templates/ic_BufferValue_32Bit_Variant.h"
#include "../templates/ic_BufferIsEmptyStatus_Default.h"
#include "../templates/ic_BufferOverflowStatus_Default.h"
#include "../templates/ic_CaptureMode_Default.h"
#include "../templates/ic_BufferSize_Default.h"
#include "../templates/ic_TimerSelect_MZ.h"
#include "../templates/ic_AlternateClock_Default.h"
#include "../templates/ic_AlternateTimerSelect_Default.h"

/* Section 3 - PLIB dispatch function definitions */

PLIB_INLINE_API void PLIB_IC_Enable(IC_MODULE_ID index)
{
    switch (index) {
        case IC_ID_1 :
            IC_Enable_Default(index);
            break;
        case IC_ID_2 :
            IC_Enable_Default(index);
            break;
        case IC_ID_3 :
            IC_Enable_Default(index);
            break;
        case IC_ID_4 :
            IC_Enable_Default(index);
            break;
        case IC_ID_5 :
            IC_Enable_Default(index);
            break;
        case IC_ID_6 :
            IC_Enable_Default(index);
            break;
        case IC_ID_7 :
            IC_Enable_Default(index);
            break;
        case IC_ID_8 :
            IC_Enable_Default(index);
            break;
        case IC_ID_9 :
            IC_Enable_Default(index);
            break;
        case IC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API void PLIB_IC_Disable(IC_MODULE_ID index)
{
    switch (index) {
        case IC_ID_1 :
            IC_Disable_Default(index);
            break;
        case IC_ID_2 :
            IC_Disable_Default(index);
            break;
        case IC_ID_3 :
            IC_Disable_Default(index);
            break;
        case IC_ID_4 :
            IC_Disable_Default(index);
            break;
        case IC_ID_5 :
            IC_Disable_Default(index);
            break;
        case IC_ID_6 :
            IC_Disable_Default(index);
            break;
        case IC_ID_7 :
            IC_Disable_Default(index);
            break;
        case IC_ID_8 :
            IC_Disable_Default(index);
            break;
        case IC_ID_9 :
            IC_Disable_Default(index);
            break;
        case IC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_IC_ExistsEnable(IC_MODULE_ID index)
{
    switch (index) {
        case IC_ID_1 :
            return IC_ExistsEnable_Default(index);
        case IC_ID_2 :
            return IC_ExistsEnable_Default(index);
        case IC_ID_3 :
            return IC_ExistsEnable_Default(index);
        case IC_ID_4 :
            return IC_ExistsEnable_Default(index);
        case IC_ID_5 :
            return IC_ExistsEnable_Default(index);
        case IC_ID_6 :
            return IC_ExistsEnable_Default(index);
        case IC_ID_7 :
            return IC_ExistsEnable_Default(index);
        case IC_ID_8 :
            return IC_ExistsEnable_Default(index);
        case IC_ID_9 :
            return IC_ExistsEnable_Default(index);
        case IC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_IC_StopInIdleEnable(IC_MODULE_ID index)
{
    switch (index) {
        case IC_ID_1 :
            IC_StopInIdleEnable_Default(index);
            break;
        case IC_ID_2 :
            IC_StopInIdleEnable_Default(index);
            break;
        case IC_ID_3 :
            IC_StopInIdleEnable_Default(index);
            break;
        case IC_ID_4 :
            IC_StopInIdleEnable_Default(index);
            break;
        case IC_ID_5 :
            IC_StopInIdleEnable_Default(index);
            break;
        case IC_ID_6 :
            IC_StopInIdleEnable_Default(index);
            break;
        case IC_ID_7 :
            IC_StopInIdleEnable_Default(index);
            break;
        case IC_ID_8 :
            IC_StopInIdleEnable_Default(index);
            break;
        case IC_ID_9 :
            IC_StopInIdleEnable_Default(index);
            break;
        case IC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API void PLIB_IC_StopInIdleDisable(IC_MODULE_ID index)
{
    switch (index) {
        case IC_ID_1 :
            IC_StopInIdleDisable_Default(index);
            break;
        case IC_ID_2 :
            IC_StopInIdleDisable_Default(index);
            break;
        case IC_ID_3 :
            IC_StopInIdleDisable_Default(index);
            break;
        case IC_ID_4 :
            IC_StopInIdleDisable_Default(index);
            break;
        case IC_ID_5 :
            IC_StopInIdleDisable_Default(index);
            break;
        case IC_ID_6 :
            IC_StopInIdleDisable_Default(index);
            break;
        case IC_ID_7 :
            IC_StopInIdleDisable_Default(index);
            break;
        case IC_ID_8 :
            IC_StopInIdleDisable_Default(index);
            break;
        case IC_ID_9 :
            IC_StopInIdleDisable_Default(index);
            break;
        case IC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_IC_ExistsStopInIdle(IC_MODULE_ID index)
{
    switch (index) {
        case IC_ID_1 :
            return IC_ExistsStopInIdle_Default(index);
        case IC_ID_2 :
            return IC_ExistsStopInIdle_Default(index);
        case IC_ID_3 :
            return IC_ExistsStopInIdle_Default(index);
        case IC_ID_4 :
            return IC_ExistsStopInIdle_Default(index);
        case IC_ID_5 :
            return IC_ExistsStopInIdle_Default(index);
        case IC_ID_6 :
            return IC_ExistsStopInIdle_Default(index);
        case IC_ID_7 :
            return IC_ExistsStopInIdle_Default(index);
        case IC_ID_8 :
            return IC_ExistsStopInIdle_Default(index);
        case IC_ID_9 :
            return IC_ExistsStopInIdle_Default(index);
        case IC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_IC_FirstCaptureEdgeSelect(IC_MODULE_ID index, IC_EDGE_TYPES edgeType)
{
    switch (index) {
        case IC_ID_1 :
            IC_FirstCaptureEdgeSelect_Default(index, edgeType);
            break;
        case IC_ID_2 :
            IC_FirstCaptureEdgeSelect_Default(index, edgeType);
            break;
        case IC_ID_3 :
            IC_FirstCaptureEdgeSelect_Default(index, edgeType);
            break;
        case IC_ID_4 :
            IC_FirstCaptureEdgeSelect_Default(index, edgeType);
            break;
        case IC_ID_5 :
            IC_FirstCaptureEdgeSelect_Default(index, edgeType);
            break;
        case IC_ID_6 :
            IC_FirstCaptureEdgeSelect_Default(index, edgeType);
            break;
        case IC_ID_7 :
            IC_FirstCaptureEdgeSelect_Default(index, edgeType);
            break;
        case IC_ID_8 :
            IC_FirstCaptureEdgeSelect_Default(index, edgeType);
            break;
        case IC_ID_9 :
            IC_FirstCaptureEdgeSelect_Default(index, edgeType);
            break;
        case IC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_IC_ExistsEdgeCapture(IC_MODULE_ID index)
{
    switch (index) {
        case IC_ID_1 :
            return IC_ExistsEdgeCapture_Default(index);
        case IC_ID_2 :
            return IC_ExistsEdgeCapture_Default(index);
        case IC_ID_3 :
            return IC_ExistsEdgeCapture_Default(index);
        case IC_ID_4 :
            return IC_ExistsEdgeCapture_Default(index);
        case IC_ID_5 :
            return IC_ExistsEdgeCapture_Default(index);
        case IC_ID_6 :
            return IC_ExistsEdgeCapture_Default(index);
        case IC_ID_7 :
            return IC_ExistsEdgeCapture_Default(index);
        case IC_ID_8 :
            return IC_ExistsEdgeCapture_Default(index);
        case IC_ID_9 :
            return IC_ExistsEdgeCapture_Default(index);
        case IC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_IC_EventsPerInterruptSelect(IC_MODULE_ID index, IC_EVENTS_PER_INTERRUPT event)
{
    switch (index) {
        case IC_ID_1 :
            IC_EventsPerInterruptSelect_Default(index, event);
            break;
        case IC_ID_2 :
            IC_EventsPerInterruptSelect_Default(index, event);
            break;
        case IC_ID_3 :
            IC_EventsPerInterruptSelect_Default(index, event);
            break;
        case IC_ID_4 :
            IC_EventsPerInterruptSelect_Default(index, event);
            break;
        case IC_ID_5 :
            IC_EventsPerInterruptSelect_Default(index, event);
            break;
        case IC_ID_6 :
            IC_EventsPerInterruptSelect_Default(index, event);
            break;
        case IC_ID_7 :
            IC_EventsPerInterruptSelect_Default(index, event);
            break;
        case IC_ID_8 :
            IC_EventsPerInterruptSelect_Default(index, event);
            break;
        case IC_ID_9 :
            IC_EventsPerInterruptSelect_Default(index, event);
            break;
        case IC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_IC_ExistsEventsPerInterruptSelect(IC_MODULE_ID index)
{
    switch (index) {
        case IC_ID_1 :
            return IC_ExistsEventsPerInterruptSelect_Default(index);
        case IC_ID_2 :
            return IC_ExistsEventsPerInterruptSelect_Default(index);
        case IC_ID_3 :
            return IC_ExistsEventsPerInterruptSelect_Default(index);
        case IC_ID_4 :
            return IC_ExistsEventsPerInterruptSelect_Default(index);
        case IC_ID_5 :
            return IC_ExistsEventsPerInterruptSelect_Default(index);
        case IC_ID_6 :
            return IC_ExistsEventsPerInterruptSelect_Default(index);
        case IC_ID_7 :
            return IC_ExistsEventsPerInterruptSelect_Default(index);
        case IC_ID_8 :
            return IC_ExistsEventsPerInterruptSelect_Default(index);
        case IC_ID_9 :
            return IC_ExistsEventsPerInterruptSelect_Default(index);
        case IC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API uint32_t PLIB_IC_Buffer32BitGet(IC_MODULE_ID index)
{
    switch (index) {
        case IC_ID_1 :
            return IC_Buffer32BitGet_32Bit_Variant(index);
        case IC_ID_2 :
            return IC_Buffer32BitGet_32Bit_Variant(index);
        case IC_ID_3 :
            return IC_Buffer32BitGet_32Bit_Variant(index);
        case IC_ID_4 :
            return IC_Buffer32BitGet_32Bit_Variant(index);
        case IC_ID_5 :
            return IC_Buffer32BitGet_32Bit_Variant(index);
        case IC_ID_6 :
            return IC_Buffer32BitGet_32Bit_Variant(index);
        case IC_ID_7 :
            return IC_Buffer32BitGet_32Bit_Variant(index);
        case IC_ID_8 :
            return IC_Buffer32BitGet_32Bit_Variant(index);
        case IC_ID_9 :
            return IC_Buffer32BitGet_32Bit_Variant(index);
        case IC_NUMBER_OF_MODULES :
        default :
            return (uint32_t)0;
    }
}

PLIB_INLINE_API uint16_t PLIB_IC_Buffer16BitGet(IC_MODULE_ID index)
{
    switch (index) {
        case IC_ID_1 :
            return IC_Buffer16BitGet_32Bit_Variant(index);
        case IC_ID_2 :
            return IC_Buffer16BitGet_32Bit_Variant(index);
        case IC_ID_3 :
            return IC_Buffer16BitGet_32Bit_Variant(index);
        case IC_ID_4 :
            return IC_Buffer16BitGet_32Bit_Variant(index);
        case IC_ID_5 :
            return IC_Buffer16BitGet_32Bit_Variant(index);
        case IC_ID_6 :
            return IC_Buffer16BitGet_32Bit_Variant(index);
        case IC_ID_7 :
            return IC_Buffer16BitGet_32Bit_Variant(index);
        case IC_ID_8 :
            return IC_Buffer16BitGet_32Bit_Variant(index);
        case IC_ID_9 :
            return IC_Buffer16BitGet_32Bit_Variant(index);
        case IC_NUMBER_OF_MODULES :
        default :
            return (uint16_t)0;
    }
}

PLIB_INLINE_API bool PLIB_IC_ExistsBufferValue(IC_MODULE_ID index)
{
    switch (index) {
        case IC_ID_1 :
            return IC_ExistsBufferValue_32Bit_Variant(index);
        case IC_ID_2 :
            return IC_ExistsBufferValue_32Bit_Variant(index);
        case IC_ID_3 :
            return IC_ExistsBufferValue_32Bit_Variant(index);
        case IC_ID_4 :
            return IC_ExistsBufferValue_32Bit_Variant(index);
        case IC_ID_5 :
            return IC_ExistsBufferValue_32Bit_Variant(index);
        case IC_ID_6 :
            return IC_ExistsBufferValue_32Bit_Variant(index);
        case IC_ID_7 :
            return IC_ExistsBufferValue_32Bit_Variant(index);
        case IC_ID_8 :
            return IC_ExistsBufferValue_32Bit_Variant(index);
        case IC_ID_9 :
            return IC_ExistsBufferValue_32Bit_Variant(index);
        case IC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API bool PLIB_IC_BufferIsEmpty(IC_MODULE_ID index)
{
    switch (index) {
        case IC_ID_1 :
            return IC_BufferIsEmpty_Default(index);
        case IC_ID_2 :
            return IC_BufferIsEmpty_Default(index);
        case IC_ID_3 :
            return IC_BufferIsEmpty_Default(index);
        case IC_ID_4 :
            return IC_BufferIsEmpty_Default(index);
        case IC_ID_5 :
            return IC_BufferIsEmpty_Default(index);
        case IC_ID_6 :
            return IC_BufferIsEmpty_Default(index);
        case IC_ID_7 :
            return IC_BufferIsEmpty_Default(index);
        case IC_ID_8 :
            return IC_BufferIsEmpty_Default(index);
        case IC_ID_9 :
            return IC_BufferIsEmpty_Default(index);
        case IC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API bool PLIB_IC_ExistsBufferIsEmptyStatus(IC_MODULE_ID index)
{
    switch (index) {
        case IC_ID_1 :
            return IC_ExistsBufferIsEmptyStatus_Default(index);
        case IC_ID_2 :
            return IC_ExistsBufferIsEmptyStatus_Default(index);
        case IC_ID_3 :
            return IC_ExistsBufferIsEmptyStatus_Default(index);
        case IC_ID_4 :
            return IC_ExistsBufferIsEmptyStatus_Default(index);
        case IC_ID_5 :
            return IC_ExistsBufferIsEmptyStatus_Default(index);
        case IC_ID_6 :
            return IC_ExistsBufferIsEmptyStatus_Default(index);
        case IC_ID_7 :
            return IC_ExistsBufferIsEmptyStatus_Default(index);
        case IC_ID_8 :
            return IC_ExistsBufferIsEmptyStatus_Default(index);
        case IC_ID_9 :
            return IC_ExistsBufferIsEmptyStatus_Default(index);
        case IC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API bool PLIB_IC_BufferOverflowHasOccurred(IC_MODULE_ID index)
{
    switch (index) {
        case IC_ID_1 :
            return IC_BufferOverflowHasOccurred_Default(index);
        case IC_ID_2 :
            return IC_BufferOverflowHasOccurred_Default(index);
        case IC_ID_3 :
            return IC_BufferOverflowHasOccurred_Default(index);
        case IC_ID_4 :
            return IC_BufferOverflowHasOccurred_Default(index);
        case IC_ID_5 :
            return IC_BufferOverflowHasOccurred_Default(index);
        case IC_ID_6 :
            return IC_BufferOverflowHasOccurred_Default(index);
        case IC_ID_7 :
            return IC_BufferOverflowHasOccurred_Default(index);
        case IC_ID_8 :
            return IC_BufferOverflowHasOccurred_Default(index);
        case IC_ID_9 :
            return IC_BufferOverflowHasOccurred_Default(index);
        case IC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API bool PLIB_IC_ExistsBufferOverflowStatus(IC_MODULE_ID index)
{
    switch (index) {
        case IC_ID_1 :
            return IC_ExistsBufferOverflowStatus_Default(index);
        case IC_ID_2 :
            return IC_ExistsBufferOverflowStatus_Default(index);
        case IC_ID_3 :
            return IC_ExistsBufferOverflowStatus_Default(index);
        case IC_ID_4 :
            return IC_ExistsBufferOverflowStatus_Default(index);
        case IC_ID_5 :
            return IC_ExistsBufferOverflowStatus_Default(index);
        case IC_ID_6 :
            return IC_ExistsBufferOverflowStatus_Default(index);
        case IC_ID_7 :
            return IC_ExistsBufferOverflowStatus_Default(index);
        case IC_ID_8 :
            return IC_ExistsBufferOverflowStatus_Default(index);
        case IC_ID_9 :
            return IC_ExistsBufferOverflowStatus_Default(index);
        case IC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_IC_ModeSelect(IC_MODULE_ID index, IC_INPUT_CAPTURE_MODES modeSel)
{
    switch (index) {
        case IC_ID_1 :
            IC_ModeSelect_Default(index, modeSel);
            break;
        case IC_ID_2 :
            IC_ModeSelect_Default(index, modeSel);
            break;
        case IC_ID_3 :
            IC_ModeSelect_Default(index, modeSel);
            break;
        case IC_ID_4 :
            IC_ModeSelect_Default(index, modeSel);
            break;
        case IC_ID_5 :
            IC_ModeSelect_Default(index, modeSel);
            break;
        case IC_ID_6 :
            IC_ModeSelect_Default(index, modeSel);
            break;
        case IC_ID_7 :
            IC_ModeSelect_Default(index, modeSel);
            break;
        case IC_ID_8 :
            IC_ModeSelect_Default(index, modeSel);
            break;
        case IC_ID_9 :
            IC_ModeSelect_Default(index, modeSel);
            break;
        case IC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_IC_ExistsCaptureMode(IC_MODULE_ID index)
{
    switch (index) {
        case IC_ID_1 :
            return IC_ExistsCaptureMode_Default(index);
        case IC_ID_2 :
            return IC_ExistsCaptureMode_Default(index);
        case IC_ID_3 :
            return IC_ExistsCaptureMode_Default(index);
        case IC_ID_4 :
            return IC_ExistsCaptureMode_Default(index);
        case IC_ID_5 :
            return IC_ExistsCaptureMode_Default(index);
        case IC_ID_6 :
            return IC_ExistsCaptureMode_Default(index);
        case IC_ID_7 :
            return IC_ExistsCaptureMode_Default(index);
        case IC_ID_8 :
            return IC_ExistsCaptureMode_Default(index);
        case IC_ID_9 :
            return IC_ExistsCaptureMode_Default(index);
        case IC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_IC_BufferSizeSelect(IC_MODULE_ID index, IC_BUFFER_SIZE bufSize)
{
    switch (index) {
        case IC_ID_1 :
            IC_BufferSizeSelect_Default(index, bufSize);
            break;
        case IC_ID_2 :
            IC_BufferSizeSelect_Default(index, bufSize);
            break;
        case IC_ID_3 :
            IC_BufferSizeSelect_Default(index, bufSize);
            break;
        case IC_ID_4 :
            IC_BufferSizeSelect_Default(index, bufSize);
            break;
        case IC_ID_5 :
            IC_BufferSizeSelect_Default(index, bufSize);
            break;
        case IC_ID_6 :
            IC_BufferSizeSelect_Default(index, bufSize);
            break;
        case IC_ID_7 :
            IC_BufferSizeSelect_Default(index, bufSize);
            break;
        case IC_ID_8 :
            IC_BufferSizeSelect_Default(index, bufSize);
            break;
        case IC_ID_9 :
            IC_BufferSizeSelect_Default(index, bufSize);
            break;
        case IC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_IC_ExistsBufferSize(IC_MODULE_ID index)
{
    switch (index) {
        case IC_ID_1 :
            return IC_ExistsBufferSize_Default(index);
        case IC_ID_2 :
            return IC_ExistsBufferSize_Default(index);
        case IC_ID_3 :
            return IC_ExistsBufferSize_Default(index);
        case IC_ID_4 :
            return IC_ExistsBufferSize_Default(index);
        case IC_ID_5 :
            return IC_ExistsBufferSize_Default(index);
        case IC_ID_6 :
            return IC_ExistsBufferSize_Default(index);
        case IC_ID_7 :
            return IC_ExistsBufferSize_Default(index);
        case IC_ID_8 :
            return IC_ExistsBufferSize_Default(index);
        case IC_ID_9 :
            return IC_ExistsBufferSize_Default(index);
        case IC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_IC_TimerSelect(IC_MODULE_ID index, IC_TIMERS tmr)
{
    switch (index) {
        case IC_ID_1 :
            IC_TimerSelect_MZ(index, tmr);
            break;
        case IC_ID_2 :
            IC_TimerSelect_MZ(index, tmr);
            break;
        case IC_ID_3 :
            IC_TimerSelect_MZ(index, tmr);
            break;
        case IC_ID_4 :
            IC_TimerSelect_MZ(index, tmr);
            break;
        case IC_ID_5 :
            IC_TimerSelect_MZ(index, tmr);
            break;
        case IC_ID_6 :
            IC_TimerSelect_MZ(index, tmr);
            break;
        case IC_ID_7 :
            IC_TimerSelect_MZ(index, tmr);
            break;
        case IC_ID_8 :
            IC_TimerSelect_MZ(index, tmr);
            break;
        case IC_ID_9 :
            IC_TimerSelect_MZ(index, tmr);
            break;
        case IC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_IC_ExistsTimerSelect(IC_MODULE_ID index)
{
    switch (index) {
        case IC_ID_1 :
            return IC_ExistsTimerSelect_MZ(index);
        case IC_ID_2 :
            return IC_ExistsTimerSelect_MZ(index);
        case IC_ID_3 :
            return IC_ExistsTimerSelect_MZ(index);
        case IC_ID_4 :
            return IC_ExistsTimerSelect_MZ(index);
        case IC_ID_5 :
            return IC_ExistsTimerSelect_MZ(index);
        case IC_ID_6 :
            return IC_ExistsTimerSelect_MZ(index);
        case IC_ID_7 :
            return IC_ExistsTimerSelect_MZ(index);
        case IC_ID_8 :
            return IC_ExistsTimerSelect_MZ(index);
        case IC_ID_9 :
            return IC_ExistsTimerSelect_MZ(index);
        case IC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_IC_AlternateClockEnable(IC_MODULE_ID index)
{
    switch (index) {
        case IC_ID_1 :
            IC_AlternateClockEnable_Default(index);
            break;
        case IC_ID_2 :
            IC_AlternateClockEnable_Default(index);
            break;
        case IC_ID_3 :
            IC_AlternateClockEnable_Default(index);
            break;
        case IC_ID_4 :
            IC_AlternateClockEnable_Default(index);
            break;
        case IC_ID_5 :
            IC_AlternateClockEnable_Default(index);
            break;
        case IC_ID_6 :
            IC_AlternateClockEnable_Default(index);
            break;
        case IC_ID_7 :
            IC_AlternateClockEnable_Default(index);
            break;
        case IC_ID_8 :
            IC_AlternateClockEnable_Default(index);
            break;
        case IC_ID_9 :
            IC_AlternateClockEnable_Default(index);
            break;
        case IC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API void PLIB_IC_AlternateClockDisable(IC_MODULE_ID index)
{
    switch (index) {
        case IC_ID_1 :
            IC_AlternateClockDisable_Default(index);
            break;
        case IC_ID_2 :
            IC_AlternateClockDisable_Default(index);
            break;
        case IC_ID_3 :
            IC_AlternateClockDisable_Default(index);
            break;
        case IC_ID_4 :
            IC_AlternateClockDisable_Default(index);
            break;
        case IC_ID_5 :
            IC_AlternateClockDisable_Default(index);
            break;
        case IC_ID_6 :
            IC_AlternateClockDisable_Default(index);
            break;
        case IC_ID_7 :
            IC_AlternateClockDisable_Default(index);
            break;
        case IC_ID_8 :
            IC_AlternateClockDisable_Default(index);
            break;
        case IC_ID_9 :
            IC_AlternateClockDisable_Default(index);
            break;
        case IC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_IC_ExistsAlternateClock(IC_MODULE_ID index)
{
    switch (index) {
        case IC_ID_1 :
            return IC_ExistsAlternateClock_Default(index);
        case IC_ID_2 :
            return IC_ExistsAlternateClock_Default(index);
        case IC_ID_3 :
            return IC_ExistsAlternateClock_Default(index);
        case IC_ID_4 :
            return IC_ExistsAlternateClock_Default(index);
        case IC_ID_5 :
            return IC_ExistsAlternateClock_Default(index);
        case IC_ID_6 :
            return IC_ExistsAlternateClock_Default(index);
        case IC_ID_7 :
            return IC_ExistsAlternateClock_Default(index);
        case IC_ID_8 :
            return IC_ExistsAlternateClock_Default(index);
        case IC_ID_9 :
            return IC_ExistsAlternateClock_Default(index);
        case IC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API bool PLIB_IC_AlternateTimerSelect(IC_MODULE_ID index, IC_ALT_TIMERS tmr)
{
    switch (index) {
        case IC_ID_1 :
            return IC_AlternateTimerSelect_Default(index, tmr);
        case IC_ID_2 :
            return IC_AlternateTimerSelect_Default(index, tmr);
        case IC_ID_3 :
            return IC_AlternateTimerSelect_Default(index, tmr);
        case IC_ID_4 :
            return IC_AlternateTimerSelect_Default(index, tmr);
        case IC_ID_5 :
            return IC_AlternateTimerSelect_Default(index, tmr);
        case IC_ID_6 :
            return IC_AlternateTimerSelect_Default(index, tmr);
        case IC_ID_7 :
            return IC_AlternateTimerSelect_Default(index, tmr);
        case IC_ID_8 :
            return IC_AlternateTimerSelect_Default(index, tmr);
        case IC_ID_9 :
            return IC_AlternateTimerSelect_Default(index, tmr);
        case IC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API bool PLIB_IC_ExistsAlternateTimerSelect(IC_MODULE_ID index)
{
    switch (index) {
        case IC_ID_1 :
            return IC_ExistsAlternateTimerSelect_Default(index);
        case IC_ID_2 :
            return IC_ExistsAlternateTimerSelect_Default(index);
        case IC_ID_3 :
            return IC_ExistsAlternateTimerSelect_Default(index);
        case IC_ID_4 :
            return IC_ExistsAlternateTimerSelect_Default(index);
        case IC_ID_5 :
            return IC_ExistsAlternateTimerSelect_Default(index);
        case IC_ID_6 :
            return IC_ExistsAlternateTimerSelect_Default(index);
        case IC_ID_7 :
            return IC_ExistsAlternateTimerSelect_Default(index);
        case IC_ID_8 :
            return IC_ExistsAlternateTimerSelect_Default(index);
        case IC_ID_9 :
            return IC_ExistsAlternateTimerSelect_Default(index);
        case IC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

#endif
