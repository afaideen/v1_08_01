/* Created by plibgen $Revision: 1.31 $ */

#ifndef _OC_P32MZ2048ECH144_H
#define _OC_P32MZ2048ECH144_H

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

    OC_ID_1 = 0,
    OC_ID_2,
    OC_ID_3,
    OC_ID_4,
    OC_ID_5,
    OC_ID_6,
    OC_ID_7,
    OC_ID_8,
    OC_ID_9,
    OC_NUMBER_OF_MODULES

} OC_MODULE_ID;

typedef enum {

    OC_COMPARE_TURN_OFF_MODE = 0,
    OC_SET_HIGH_SINGLE_PULSE_MODE = 1,
    OC_SET_LOW_SINGLE_PULSE_MODE = 2,
    OC_TOGGLE_CONTINUOUS_PULSE_MODE = 3,
    OC_DUAL_COMPARE_SINGLE_PULSE_MODE = 4,
    OC_DUAL_COMPARE_CONTINUOUS_PULSE_MODE = 5,
    OC_COMPARE_PWM_EDGE_ALIGNED_MODE = 6,
    OC_COMPARE_PWM_MODE_WITHOUT_FAULT_PROTECTION = 6,
    OC_COMPARE_PWM_MODE_WITH_FAULT_PROTECTION = 7

} OC_COMPARE_MODES;

typedef enum {

    OC_BUFFER_SIZE_16BIT = 0,
    OC_BUFFER_SIZE_32BIT = 1

} OC_BUFFER_SIZE;

typedef enum {

    OC_TIMER_16BIT_TMR2 = 0,
    OC_TIMER_16BIT_TMR3 = 1

} OC_16BIT_TIMERS;

typedef enum {

    OC_ALT_TIMER_TMR2 = 0,
    OC_ALT_TIMER_TMR3 = 1,
    OC_ALT_TIMER_TMR4 = 2,
    OC_ALT_TIMER_TMR5 = 3,
    OC_ALT_TIMER_TMR6 = 4,
    OC_ALT_TIMER_TMR7 = 5

} OC_ALT_TIMERS;

typedef enum {

    OC_FAULT_PRESET = 7,
    OC_FAULT_DISABLE = 6

} OC_FAULTS;

PLIB_INLINE SFR_TYPE* _OC_ENABLE_CONTROL_VREG(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return &OC1CON;
        case OC_ID_2 :
            return &OC2CON;
        case OC_ID_3 :
            return &OC3CON;
        case OC_ID_4 :
            return &OC4CON;
        case OC_ID_5 :
            return &OC5CON;
        case OC_ID_6 :
            return &OC6CON;
        case OC_ID_7 :
            return &OC7CON;
        case OC_ID_8 :
            return &OC8CON;
        case OC_ID_9 :
            return &OC9CON;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _OC_STOP_IN_IDLE_VREG(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return &OC1CON;
        case OC_ID_2 :
            return &OC2CON;
        case OC_ID_3 :
            return &OC3CON;
        case OC_ID_4 :
            return &OC4CON;
        case OC_ID_5 :
            return &OC5CON;
        case OC_ID_6 :
            return &OC6CON;
        case OC_ID_7 :
            return &OC7CON;
        case OC_ID_8 :
            return &OC8CON;
        case OC_ID_9 :
            return &OC9CON;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _OC_BUF_SIZE_VREG(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return &OC1CON;
        case OC_ID_2 :
            return &OC2CON;
        case OC_ID_3 :
            return &OC3CON;
        case OC_ID_4 :
            return &OC4CON;
        case OC_ID_5 :
            return &OC5CON;
        case OC_ID_6 :
            return &OC6CON;
        case OC_ID_7 :
            return &OC7CON;
        case OC_ID_8 :
            return &OC8CON;
        case OC_ID_9 :
            return &OC9CON;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _OC_FAULT_STATUS_VREG(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return &OC1CON;
        case OC_ID_2 :
            return &OC2CON;
        case OC_ID_3 :
            return &OC3CON;
        case OC_ID_4 :
            return &OC4CON;
        case OC_ID_5 :
            return &OC5CON;
        case OC_ID_6 :
            return &OC6CON;
        case OC_ID_7 :
            return &OC7CON;
        case OC_ID_8 :
            return &OC8CON;
        case OC_ID_9 :
            return &OC9CON;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _OC_TIMER_SELECT_MZ_VREG(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return &OC1CON;
        case OC_ID_2 :
            return &OC2CON;
        case OC_ID_3 :
            return &OC3CON;
        case OC_ID_4 :
            return &OC4CON;
        case OC_ID_5 :
            return &OC5CON;
        case OC_ID_6 :
            return &OC6CON;
        case OC_ID_7 :
            return &OC7CON;
        case OC_ID_8 :
            return &OC8CON;
        case OC_ID_9 :
            return &OC9CON;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _OC_CMP_MODE_SEL_VREG(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return &OC1CON;
        case OC_ID_2 :
            return &OC2CON;
        case OC_ID_3 :
            return &OC3CON;
        case OC_ID_4 :
            return &OC4CON;
        case OC_ID_5 :
            return &OC5CON;
        case OC_ID_6 :
            return &OC6CON;
        case OC_ID_7 :
            return &OC7CON;
        case OC_ID_8 :
            return &OC8CON;
        case OC_ID_9 :
            return &OC9CON;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _OC_FAULT_INPUT_VREG(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return &OC1CON;
        case OC_ID_2 :
            return &OC2CON;
        case OC_ID_3 :
            return &OC3CON;
        case OC_ID_4 :
            return &OC4CON;
        case OC_ID_5 :
            return &OC5CON;
        case OC_ID_6 :
            return &OC6CON;
        case OC_ID_7 :
            return &OC7CON;
        case OC_ID_8 :
            return &OC8CON;
        case OC_ID_9 :
            return &OC9CON;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _OC_BUF_VAL_VREG(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return &OC1R;
        case OC_ID_2 :
            return &OC2R;
        case OC_ID_3 :
            return &OC3R;
        case OC_ID_4 :
            return &OC4R;
        case OC_ID_5 :
            return &OC5R;
        case OC_ID_6 :
            return &OC6R;
        case OC_ID_7 :
            return &OC7R;
        case OC_ID_8 :
            return &OC8R;
        case OC_ID_9 :
            return &OC9R;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_TYPE* _OC_SEC_CMP_VAL_VREG(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return &OC1RS;
        case OC_ID_2 :
            return &OC2RS;
        case OC_ID_3 :
            return &OC3RS;
        case OC_ID_4 :
            return &OC4RS;
        case OC_ID_5 :
            return &OC5RS;
        case OC_ID_6 :
            return &OC6RS;
        case OC_ID_7 :
            return &OC7RS;
        case OC_ID_8 :
            return &OC8RS;
        case OC_ID_9 :
            return &OC9RS;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_TYPE*)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_ENABLE_CONTROL_MASK(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return _OC1CON_ON_MASK;
        case OC_ID_2 :
            return _OC2CON_ON_MASK;
        case OC_ID_3 :
            return _OC3CON_ON_MASK;
        case OC_ID_4 :
            return _OC4CON_ON_MASK;
        case OC_ID_5 :
            return _OC5CON_ON_MASK;
        case OC_ID_6 :
            return _OC6CON_ON_MASK;
        case OC_ID_7 :
            return _OC7CON_ON_MASK;
        case OC_ID_8 :
            return _OC8CON_ON_MASK;
        case OC_ID_9 :
            return _OC9CON_ON_MASK;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_STOP_IN_IDLE_MASK(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return _OC1CON_SIDL_MASK;
        case OC_ID_2 :
            return _OC2CON_SIDL_MASK;
        case OC_ID_3 :
            return _OC3CON_SIDL_MASK;
        case OC_ID_4 :
            return _OC4CON_SIDL_MASK;
        case OC_ID_5 :
            return _OC5CON_SIDL_MASK;
        case OC_ID_6 :
            return _OC6CON_SIDL_MASK;
        case OC_ID_7 :
            return _OC7CON_SIDL_MASK;
        case OC_ID_8 :
            return _OC8CON_SIDL_MASK;
        case OC_ID_9 :
            return _OC9CON_SIDL_MASK;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_BUF_SIZE_MASK(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return _OC1CON_OC32_MASK;
        case OC_ID_2 :
            return _OC2CON_OC32_MASK;
        case OC_ID_3 :
            return _OC3CON_OC32_MASK;
        case OC_ID_4 :
            return _OC4CON_OC32_MASK;
        case OC_ID_5 :
            return _OC5CON_OC32_MASK;
        case OC_ID_6 :
            return _OC6CON_OC32_MASK;
        case OC_ID_7 :
            return _OC7CON_OC32_MASK;
        case OC_ID_8 :
            return _OC8CON_OC32_MASK;
        case OC_ID_9 :
            return _OC9CON_OC32_MASK;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_FAULT_STATUS_MASK(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return _OC1CON_OCFLT_MASK;
        case OC_ID_2 :
            return _OC2CON_OCFLT_MASK;
        case OC_ID_3 :
            return _OC3CON_OCFLT_MASK;
        case OC_ID_4 :
            return _OC4CON_OCFLT_MASK;
        case OC_ID_5 :
            return _OC5CON_OCFLT_MASK;
        case OC_ID_6 :
            return _OC6CON_OCFLT_MASK;
        case OC_ID_7 :
            return _OC7CON_OCFLT_MASK;
        case OC_ID_8 :
            return _OC8CON_OCFLT_MASK;
        case OC_ID_9 :
            return _OC9CON_OCFLT_MASK;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_TIMER_SELECT_MZ_MASK(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return _OC1CON_OCTSEL_MASK;
        case OC_ID_2 :
            return _OC2CON_OCTSEL_MASK;
        case OC_ID_3 :
            return _OC3CON_OCTSEL_MASK;
        case OC_ID_4 :
            return _OC4CON_OCTSEL_MASK;
        case OC_ID_5 :
            return _OC5CON_OCTSEL_MASK;
        case OC_ID_6 :
            return _OC6CON_OCTSEL_MASK;
        case OC_ID_7 :
            return _OC7CON_OCTSEL_MASK;
        case OC_ID_8 :
            return _OC8CON_OCTSEL_MASK;
        case OC_ID_9 :
            return _OC9CON_OCTSEL_MASK;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_CMP_MODE_SEL_MASK(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return _OC1CON_OCM_MASK;
        case OC_ID_2 :
            return _OC2CON_OCM_MASK;
        case OC_ID_3 :
            return _OC3CON_OCM_MASK;
        case OC_ID_4 :
            return _OC4CON_OCM_MASK;
        case OC_ID_5 :
            return _OC5CON_OCM_MASK;
        case OC_ID_6 :
            return _OC6CON_OCM_MASK;
        case OC_ID_7 :
            return _OC7CON_OCM_MASK;
        case OC_ID_8 :
            return _OC8CON_OCM_MASK;
        case OC_ID_9 :
            return _OC9CON_OCM_MASK;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_FAULT_INPUT_MASK(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return _OC1CON_OCM_MASK;
        case OC_ID_2 :
            return _OC2CON_OCM_MASK;
        case OC_ID_3 :
            return _OC3CON_OCM_MASK;
        case OC_ID_4 :
            return _OC4CON_OCM_MASK;
        case OC_ID_5 :
            return _OC5CON_OCM_MASK;
        case OC_ID_6 :
            return _OC6CON_OCM_MASK;
        case OC_ID_7 :
            return _OC7CON_OCM_MASK;
        case OC_ID_8 :
            return _OC8CON_OCM_MASK;
        case OC_ID_9 :
            return _OC9CON_OCM_MASK;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_BUF_VAL_MASK(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return (SFR_DATA)-1;
        case OC_ID_2 :
            return (SFR_DATA)-1;
        case OC_ID_3 :
            return (SFR_DATA)-1;
        case OC_ID_4 :
            return (SFR_DATA)-1;
        case OC_ID_5 :
            return (SFR_DATA)-1;
        case OC_ID_6 :
            return (SFR_DATA)-1;
        case OC_ID_7 :
            return (SFR_DATA)-1;
        case OC_ID_8 :
            return (SFR_DATA)-1;
        case OC_ID_9 :
            return (SFR_DATA)-1;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_SEC_CMP_VAL_MASK(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return (SFR_DATA)-1;
        case OC_ID_2 :
            return (SFR_DATA)-1;
        case OC_ID_3 :
            return (SFR_DATA)-1;
        case OC_ID_4 :
            return (SFR_DATA)-1;
        case OC_ID_5 :
            return (SFR_DATA)-1;
        case OC_ID_6 :
            return (SFR_DATA)-1;
        case OC_ID_7 :
            return (SFR_DATA)-1;
        case OC_ID_8 :
            return (SFR_DATA)-1;
        case OC_ID_9 :
            return (SFR_DATA)-1;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_ENABLE_CONTROL_POS(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return _OC1CON_ON_POSITION;
        case OC_ID_2 :
            return _OC2CON_ON_POSITION;
        case OC_ID_3 :
            return _OC3CON_ON_POSITION;
        case OC_ID_4 :
            return _OC4CON_ON_POSITION;
        case OC_ID_5 :
            return _OC5CON_ON_POSITION;
        case OC_ID_6 :
            return _OC6CON_ON_POSITION;
        case OC_ID_7 :
            return _OC7CON_ON_POSITION;
        case OC_ID_8 :
            return _OC8CON_ON_POSITION;
        case OC_ID_9 :
            return _OC9CON_ON_POSITION;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_STOP_IN_IDLE_POS(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return _OC1CON_SIDL_POSITION;
        case OC_ID_2 :
            return _OC2CON_SIDL_POSITION;
        case OC_ID_3 :
            return _OC3CON_SIDL_POSITION;
        case OC_ID_4 :
            return _OC4CON_SIDL_POSITION;
        case OC_ID_5 :
            return _OC5CON_SIDL_POSITION;
        case OC_ID_6 :
            return _OC6CON_SIDL_POSITION;
        case OC_ID_7 :
            return _OC7CON_SIDL_POSITION;
        case OC_ID_8 :
            return _OC8CON_SIDL_POSITION;
        case OC_ID_9 :
            return _OC9CON_SIDL_POSITION;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_BUF_SIZE_POS(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return _OC1CON_OC32_POSITION;
        case OC_ID_2 :
            return _OC2CON_OC32_POSITION;
        case OC_ID_3 :
            return _OC3CON_OC32_POSITION;
        case OC_ID_4 :
            return _OC4CON_OC32_POSITION;
        case OC_ID_5 :
            return _OC5CON_OC32_POSITION;
        case OC_ID_6 :
            return _OC6CON_OC32_POSITION;
        case OC_ID_7 :
            return _OC7CON_OC32_POSITION;
        case OC_ID_8 :
            return _OC8CON_OC32_POSITION;
        case OC_ID_9 :
            return _OC9CON_OC32_POSITION;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_FAULT_STATUS_POS(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return _OC1CON_OCFLT_POSITION;
        case OC_ID_2 :
            return _OC2CON_OCFLT_POSITION;
        case OC_ID_3 :
            return _OC3CON_OCFLT_POSITION;
        case OC_ID_4 :
            return _OC4CON_OCFLT_POSITION;
        case OC_ID_5 :
            return _OC5CON_OCFLT_POSITION;
        case OC_ID_6 :
            return _OC6CON_OCFLT_POSITION;
        case OC_ID_7 :
            return _OC7CON_OCFLT_POSITION;
        case OC_ID_8 :
            return _OC8CON_OCFLT_POSITION;
        case OC_ID_9 :
            return _OC9CON_OCFLT_POSITION;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_TIMER_SELECT_MZ_POS(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return _OC1CON_OCTSEL_POSITION;
        case OC_ID_2 :
            return _OC2CON_OCTSEL_POSITION;
        case OC_ID_3 :
            return _OC3CON_OCTSEL_POSITION;
        case OC_ID_4 :
            return _OC4CON_OCTSEL_POSITION;
        case OC_ID_5 :
            return _OC5CON_OCTSEL_POSITION;
        case OC_ID_6 :
            return _OC6CON_OCTSEL_POSITION;
        case OC_ID_7 :
            return _OC7CON_OCTSEL_POSITION;
        case OC_ID_8 :
            return _OC8CON_OCTSEL_POSITION;
        case OC_ID_9 :
            return _OC9CON_OCTSEL_POSITION;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_CMP_MODE_SEL_POS(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return _OC1CON_OCM_POSITION;
        case OC_ID_2 :
            return _OC2CON_OCM_POSITION;
        case OC_ID_3 :
            return _OC3CON_OCM_POSITION;
        case OC_ID_4 :
            return _OC4CON_OCM_POSITION;
        case OC_ID_5 :
            return _OC5CON_OCM_POSITION;
        case OC_ID_6 :
            return _OC6CON_OCM_POSITION;
        case OC_ID_7 :
            return _OC7CON_OCM_POSITION;
        case OC_ID_8 :
            return _OC8CON_OCM_POSITION;
        case OC_ID_9 :
            return _OC9CON_OCM_POSITION;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_FAULT_INPUT_POS(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return _OC1CON_OCM_POSITION;
        case OC_ID_2 :
            return _OC2CON_OCM_POSITION;
        case OC_ID_3 :
            return _OC3CON_OCM_POSITION;
        case OC_ID_4 :
            return _OC4CON_OCM_POSITION;
        case OC_ID_5 :
            return _OC5CON_OCM_POSITION;
        case OC_ID_6 :
            return _OC6CON_OCM_POSITION;
        case OC_ID_7 :
            return _OC7CON_OCM_POSITION;
        case OC_ID_8 :
            return _OC8CON_OCM_POSITION;
        case OC_ID_9 :
            return _OC9CON_OCM_POSITION;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_BUF_VAL_POS(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return (SFR_DATA)0;
        case OC_ID_2 :
            return (SFR_DATA)0;
        case OC_ID_3 :
            return (SFR_DATA)0;
        case OC_ID_4 :
            return (SFR_DATA)0;
        case OC_ID_5 :
            return (SFR_DATA)0;
        case OC_ID_6 :
            return (SFR_DATA)0;
        case OC_ID_7 :
            return (SFR_DATA)0;
        case OC_ID_8 :
            return (SFR_DATA)0;
        case OC_ID_9 :
            return (SFR_DATA)0;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_SEC_CMP_VAL_POS(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return (SFR_DATA)0;
        case OC_ID_2 :
            return (SFR_DATA)0;
        case OC_ID_3 :
            return (SFR_DATA)0;
        case OC_ID_4 :
            return (SFR_DATA)0;
        case OC_ID_5 :
            return (SFR_DATA)0;
        case OC_ID_6 :
            return (SFR_DATA)0;
        case OC_ID_7 :
            return (SFR_DATA)0;
        case OC_ID_8 :
            return (SFR_DATA)0;
        case OC_ID_9 :
            return (SFR_DATA)0;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_ENABLE_CONTROL_LEN(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return _OC1CON_ON_LENGTH;
        case OC_ID_2 :
            return _OC2CON_ON_LENGTH;
        case OC_ID_3 :
            return _OC3CON_ON_LENGTH;
        case OC_ID_4 :
            return _OC4CON_ON_LENGTH;
        case OC_ID_5 :
            return _OC5CON_ON_LENGTH;
        case OC_ID_6 :
            return _OC6CON_ON_LENGTH;
        case OC_ID_7 :
            return _OC7CON_ON_LENGTH;
        case OC_ID_8 :
            return _OC8CON_ON_LENGTH;
        case OC_ID_9 :
            return _OC9CON_ON_LENGTH;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_STOP_IN_IDLE_LEN(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return _OC1CON_SIDL_LENGTH;
        case OC_ID_2 :
            return _OC2CON_SIDL_LENGTH;
        case OC_ID_3 :
            return _OC3CON_SIDL_LENGTH;
        case OC_ID_4 :
            return _OC4CON_SIDL_LENGTH;
        case OC_ID_5 :
            return _OC5CON_SIDL_LENGTH;
        case OC_ID_6 :
            return _OC6CON_SIDL_LENGTH;
        case OC_ID_7 :
            return _OC7CON_SIDL_LENGTH;
        case OC_ID_8 :
            return _OC8CON_SIDL_LENGTH;
        case OC_ID_9 :
            return _OC9CON_SIDL_LENGTH;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_BUF_SIZE_LEN(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return _OC1CON_OC32_LENGTH;
        case OC_ID_2 :
            return _OC2CON_OC32_LENGTH;
        case OC_ID_3 :
            return _OC3CON_OC32_LENGTH;
        case OC_ID_4 :
            return _OC4CON_OC32_LENGTH;
        case OC_ID_5 :
            return _OC5CON_OC32_LENGTH;
        case OC_ID_6 :
            return _OC6CON_OC32_LENGTH;
        case OC_ID_7 :
            return _OC7CON_OC32_LENGTH;
        case OC_ID_8 :
            return _OC8CON_OC32_LENGTH;
        case OC_ID_9 :
            return _OC9CON_OC32_LENGTH;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_FAULT_STATUS_LEN(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return _OC1CON_OCFLT_LENGTH;
        case OC_ID_2 :
            return _OC2CON_OCFLT_LENGTH;
        case OC_ID_3 :
            return _OC3CON_OCFLT_LENGTH;
        case OC_ID_4 :
            return _OC4CON_OCFLT_LENGTH;
        case OC_ID_5 :
            return _OC5CON_OCFLT_LENGTH;
        case OC_ID_6 :
            return _OC6CON_OCFLT_LENGTH;
        case OC_ID_7 :
            return _OC7CON_OCFLT_LENGTH;
        case OC_ID_8 :
            return _OC8CON_OCFLT_LENGTH;
        case OC_ID_9 :
            return _OC9CON_OCFLT_LENGTH;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_TIMER_SELECT_MZ_LEN(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return _OC1CON_OCTSEL_LENGTH;
        case OC_ID_2 :
            return _OC2CON_OCTSEL_LENGTH;
        case OC_ID_3 :
            return _OC3CON_OCTSEL_LENGTH;
        case OC_ID_4 :
            return _OC4CON_OCTSEL_LENGTH;
        case OC_ID_5 :
            return _OC5CON_OCTSEL_LENGTH;
        case OC_ID_6 :
            return _OC6CON_OCTSEL_LENGTH;
        case OC_ID_7 :
            return _OC7CON_OCTSEL_LENGTH;
        case OC_ID_8 :
            return _OC8CON_OCTSEL_LENGTH;
        case OC_ID_9 :
            return _OC9CON_OCTSEL_LENGTH;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_CMP_MODE_SEL_LEN(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return _OC1CON_OCM_LENGTH;
        case OC_ID_2 :
            return _OC2CON_OCM_LENGTH;
        case OC_ID_3 :
            return _OC3CON_OCM_LENGTH;
        case OC_ID_4 :
            return _OC4CON_OCM_LENGTH;
        case OC_ID_5 :
            return _OC5CON_OCM_LENGTH;
        case OC_ID_6 :
            return _OC6CON_OCM_LENGTH;
        case OC_ID_7 :
            return _OC7CON_OCM_LENGTH;
        case OC_ID_8 :
            return _OC8CON_OCM_LENGTH;
        case OC_ID_9 :
            return _OC9CON_OCM_LENGTH;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_FAULT_INPUT_LEN(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return _OC1CON_OCM_LENGTH;
        case OC_ID_2 :
            return _OC2CON_OCM_LENGTH;
        case OC_ID_3 :
            return _OC3CON_OCM_LENGTH;
        case OC_ID_4 :
            return _OC4CON_OCM_LENGTH;
        case OC_ID_5 :
            return _OC5CON_OCM_LENGTH;
        case OC_ID_6 :
            return _OC6CON_OCM_LENGTH;
        case OC_ID_7 :
            return _OC7CON_OCM_LENGTH;
        case OC_ID_8 :
            return _OC8CON_OCM_LENGTH;
        case OC_ID_9 :
            return _OC9CON_OCM_LENGTH;
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_BUF_VAL_LEN(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case OC_ID_2 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case OC_ID_3 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case OC_ID_4 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case OC_ID_5 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case OC_ID_6 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case OC_ID_7 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case OC_ID_8 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case OC_ID_9 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

PLIB_INLINE SFR_DATA _OC_SEC_CMP_VAL_LEN(OC_MODULE_ID i)
{
    switch (i) {
        case OC_ID_1 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case OC_ID_2 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case OC_ID_3 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case OC_ID_4 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case OC_ID_5 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case OC_ID_6 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case OC_ID_7 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case OC_ID_8 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case OC_ID_9 :
            return (SFR_DATA)sizeof(SFR_DATA);
        case OC_NUMBER_OF_MODULES :
        default :
            return (SFR_DATA)-1;
    }
}

/* Section 2 - Feature variant inclusion */

#define PLIB_TEMPLATE PLIB_INLINE
#include "../templates/oc_EnableControl_Default.h"
#include "../templates/oc_StopInIdle_Default.h"
#include "../templates/oc_FaultInput_Default.h"
#include "../templates/oc_FaultStatus_Default.h"
#include "../templates/oc_TimerSelect_MZ.h"
#include "../templates/oc_AlternateClock_Default.h"
#include "../templates/oc_AlternateTimerSelect_Default.h"
#include "../templates/oc_BufferValue_32Bit_Variant.h"
#include "../templates/oc_PulseWidth_32Bit_Variant.h"
#include "../templates/oc_BufferSize_Default.h"
#include "../templates/oc_CompareModeSelect_Default.h"

/* Section 3 - PLIB dispatch function definitions */

PLIB_INLINE_API void PLIB_OC_Enable(OC_MODULE_ID index)
{
    switch (index) {
        case OC_ID_1 :
            OC_Enable_Default(index);
            break;
        case OC_ID_2 :
            OC_Enable_Default(index);
            break;
        case OC_ID_3 :
            OC_Enable_Default(index);
            break;
        case OC_ID_4 :
            OC_Enable_Default(index);
            break;
        case OC_ID_5 :
            OC_Enable_Default(index);
            break;
        case OC_ID_6 :
            OC_Enable_Default(index);
            break;
        case OC_ID_7 :
            OC_Enable_Default(index);
            break;
        case OC_ID_8 :
            OC_Enable_Default(index);
            break;
        case OC_ID_9 :
            OC_Enable_Default(index);
            break;
        case OC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API void PLIB_OC_Disable(OC_MODULE_ID index)
{
    switch (index) {
        case OC_ID_1 :
            OC_Disable_Default(index);
            break;
        case OC_ID_2 :
            OC_Disable_Default(index);
            break;
        case OC_ID_3 :
            OC_Disable_Default(index);
            break;
        case OC_ID_4 :
            OC_Disable_Default(index);
            break;
        case OC_ID_5 :
            OC_Disable_Default(index);
            break;
        case OC_ID_6 :
            OC_Disable_Default(index);
            break;
        case OC_ID_7 :
            OC_Disable_Default(index);
            break;
        case OC_ID_8 :
            OC_Disable_Default(index);
            break;
        case OC_ID_9 :
            OC_Disable_Default(index);
            break;
        case OC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_OC_IsEnabled(OC_MODULE_ID index)
{
    switch (index) {
        case OC_ID_1 :
            return OC_IsEnabled_Default(index);
        case OC_ID_2 :
            return OC_IsEnabled_Default(index);
        case OC_ID_3 :
            return OC_IsEnabled_Default(index);
        case OC_ID_4 :
            return OC_IsEnabled_Default(index);
        case OC_ID_5 :
            return OC_IsEnabled_Default(index);
        case OC_ID_6 :
            return OC_IsEnabled_Default(index);
        case OC_ID_7 :
            return OC_IsEnabled_Default(index);
        case OC_ID_8 :
            return OC_IsEnabled_Default(index);
        case OC_ID_9 :
            return OC_IsEnabled_Default(index);
        case OC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API bool PLIB_OC_ExistsEnableControl(OC_MODULE_ID index)
{
    switch (index) {
        case OC_ID_1 :
            return OC_ExistsEnableControl_Default(index);
        case OC_ID_2 :
            return OC_ExistsEnableControl_Default(index);
        case OC_ID_3 :
            return OC_ExistsEnableControl_Default(index);
        case OC_ID_4 :
            return OC_ExistsEnableControl_Default(index);
        case OC_ID_5 :
            return OC_ExistsEnableControl_Default(index);
        case OC_ID_6 :
            return OC_ExistsEnableControl_Default(index);
        case OC_ID_7 :
            return OC_ExistsEnableControl_Default(index);
        case OC_ID_8 :
            return OC_ExistsEnableControl_Default(index);
        case OC_ID_9 :
            return OC_ExistsEnableControl_Default(index);
        case OC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_OC_StopInIdleEnable(OC_MODULE_ID index)
{
    switch (index) {
        case OC_ID_1 :
            OC_StopInIdleEnable_Default(index);
            break;
        case OC_ID_2 :
            OC_StopInIdleEnable_Default(index);
            break;
        case OC_ID_3 :
            OC_StopInIdleEnable_Default(index);
            break;
        case OC_ID_4 :
            OC_StopInIdleEnable_Default(index);
            break;
        case OC_ID_5 :
            OC_StopInIdleEnable_Default(index);
            break;
        case OC_ID_6 :
            OC_StopInIdleEnable_Default(index);
            break;
        case OC_ID_7 :
            OC_StopInIdleEnable_Default(index);
            break;
        case OC_ID_8 :
            OC_StopInIdleEnable_Default(index);
            break;
        case OC_ID_9 :
            OC_StopInIdleEnable_Default(index);
            break;
        case OC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API void PLIB_OC_StopInIdleDisable(OC_MODULE_ID index)
{
    switch (index) {
        case OC_ID_1 :
            OC_StopInIdleDisable_Default(index);
            break;
        case OC_ID_2 :
            OC_StopInIdleDisable_Default(index);
            break;
        case OC_ID_3 :
            OC_StopInIdleDisable_Default(index);
            break;
        case OC_ID_4 :
            OC_StopInIdleDisable_Default(index);
            break;
        case OC_ID_5 :
            OC_StopInIdleDisable_Default(index);
            break;
        case OC_ID_6 :
            OC_StopInIdleDisable_Default(index);
            break;
        case OC_ID_7 :
            OC_StopInIdleDisable_Default(index);
            break;
        case OC_ID_8 :
            OC_StopInIdleDisable_Default(index);
            break;
        case OC_ID_9 :
            OC_StopInIdleDisable_Default(index);
            break;
        case OC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_OC_ExistsStopInIdle(OC_MODULE_ID index)
{
    switch (index) {
        case OC_ID_1 :
            return OC_ExistsStopInIdle_Default(index);
        case OC_ID_2 :
            return OC_ExistsStopInIdle_Default(index);
        case OC_ID_3 :
            return OC_ExistsStopInIdle_Default(index);
        case OC_ID_4 :
            return OC_ExistsStopInIdle_Default(index);
        case OC_ID_5 :
            return OC_ExistsStopInIdle_Default(index);
        case OC_ID_6 :
            return OC_ExistsStopInIdle_Default(index);
        case OC_ID_7 :
            return OC_ExistsStopInIdle_Default(index);
        case OC_ID_8 :
            return OC_ExistsStopInIdle_Default(index);
        case OC_ID_9 :
            return OC_ExistsStopInIdle_Default(index);
        case OC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_OC_FaultInputSelect(OC_MODULE_ID index, OC_FAULTS flt)
{
    switch (index) {
        case OC_ID_1 :
            OC_FaultInputSelect_Default(index, flt);
            break;
        case OC_ID_2 :
            OC_FaultInputSelect_Default(index, flt);
            break;
        case OC_ID_3 :
            OC_FaultInputSelect_Default(index, flt);
            break;
        case OC_ID_4 :
            OC_FaultInputSelect_Default(index, flt);
            break;
        case OC_ID_5 :
            OC_FaultInputSelect_Default(index, flt);
            break;
        case OC_ID_6 :
            OC_FaultInputSelect_Default(index, flt);
            break;
        case OC_ID_7 :
            OC_FaultInputSelect_Default(index, flt);
            break;
        case OC_ID_8 :
            OC_FaultInputSelect_Default(index, flt);
            break;
        case OC_ID_9 :
            OC_FaultInputSelect_Default(index, flt);
            break;
        case OC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_OC_ExistsFaultInput(OC_MODULE_ID index)
{
    switch (index) {
        case OC_ID_1 :
            return OC_ExistsFaultInput_Default(index);
        case OC_ID_2 :
            return OC_ExistsFaultInput_Default(index);
        case OC_ID_3 :
            return OC_ExistsFaultInput_Default(index);
        case OC_ID_4 :
            return OC_ExistsFaultInput_Default(index);
        case OC_ID_5 :
            return OC_ExistsFaultInput_Default(index);
        case OC_ID_6 :
            return OC_ExistsFaultInput_Default(index);
        case OC_ID_7 :
            return OC_ExistsFaultInput_Default(index);
        case OC_ID_8 :
            return OC_ExistsFaultInput_Default(index);
        case OC_ID_9 :
            return OC_ExistsFaultInput_Default(index);
        case OC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API bool PLIB_OC_FaultHasOccurred(OC_MODULE_ID index)
{
    switch (index) {
        case OC_ID_1 :
            return OC_FaultHasOccurred_Default(index);
        case OC_ID_2 :
            return OC_FaultHasOccurred_Default(index);
        case OC_ID_3 :
            return OC_FaultHasOccurred_Default(index);
        case OC_ID_4 :
            return OC_FaultHasOccurred_Default(index);
        case OC_ID_5 :
            return OC_FaultHasOccurred_Default(index);
        case OC_ID_6 :
            return OC_FaultHasOccurred_Default(index);
        case OC_ID_7 :
            return OC_FaultHasOccurred_Default(index);
        case OC_ID_8 :
            return OC_FaultHasOccurred_Default(index);
        case OC_ID_9 :
            return OC_FaultHasOccurred_Default(index);
        case OC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API bool PLIB_OC_ExistsFaultStatus(OC_MODULE_ID index)
{
    switch (index) {
        case OC_ID_1 :
            return OC_ExistsFaultStatus_Default(index);
        case OC_ID_2 :
            return OC_ExistsFaultStatus_Default(index);
        case OC_ID_3 :
            return OC_ExistsFaultStatus_Default(index);
        case OC_ID_4 :
            return OC_ExistsFaultStatus_Default(index);
        case OC_ID_5 :
            return OC_ExistsFaultStatus_Default(index);
        case OC_ID_6 :
            return OC_ExistsFaultStatus_Default(index);
        case OC_ID_7 :
            return OC_ExistsFaultStatus_Default(index);
        case OC_ID_8 :
            return OC_ExistsFaultStatus_Default(index);
        case OC_ID_9 :
            return OC_ExistsFaultStatus_Default(index);
        case OC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_OC_TimerSelect(OC_MODULE_ID index, OC_16BIT_TIMERS tmr)
{
    switch (index) {
        case OC_ID_1 :
            OC_TimerSelect_MZ(index, tmr);
            break;
        case OC_ID_2 :
            OC_TimerSelect_MZ(index, tmr);
            break;
        case OC_ID_3 :
            OC_TimerSelect_MZ(index, tmr);
            break;
        case OC_ID_4 :
            OC_TimerSelect_MZ(index, tmr);
            break;
        case OC_ID_5 :
            OC_TimerSelect_MZ(index, tmr);
            break;
        case OC_ID_6 :
            OC_TimerSelect_MZ(index, tmr);
            break;
        case OC_ID_7 :
            OC_TimerSelect_MZ(index, tmr);
            break;
        case OC_ID_8 :
            OC_TimerSelect_MZ(index, tmr);
            break;
        case OC_ID_9 :
            OC_TimerSelect_MZ(index, tmr);
            break;
        case OC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_OC_ExistsTimerSelect(OC_MODULE_ID index)
{
    switch (index) {
        case OC_ID_1 :
            return OC_ExistsTimerSelect_MZ(index);
        case OC_ID_2 :
            return OC_ExistsTimerSelect_MZ(index);
        case OC_ID_3 :
            return OC_ExistsTimerSelect_MZ(index);
        case OC_ID_4 :
            return OC_ExistsTimerSelect_MZ(index);
        case OC_ID_5 :
            return OC_ExistsTimerSelect_MZ(index);
        case OC_ID_6 :
            return OC_ExistsTimerSelect_MZ(index);
        case OC_ID_7 :
            return OC_ExistsTimerSelect_MZ(index);
        case OC_ID_8 :
            return OC_ExistsTimerSelect_MZ(index);
        case OC_ID_9 :
            return OC_ExistsTimerSelect_MZ(index);
        case OC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_OC_AlternateClockEnable(OC_MODULE_ID index)
{
    switch (index) {
        case OC_ID_1 :
            OC_AlternateClockEnable_Default(index);
            break;
        case OC_ID_2 :
            OC_AlternateClockEnable_Default(index);
            break;
        case OC_ID_3 :
            OC_AlternateClockEnable_Default(index);
            break;
        case OC_ID_4 :
            OC_AlternateClockEnable_Default(index);
            break;
        case OC_ID_5 :
            OC_AlternateClockEnable_Default(index);
            break;
        case OC_ID_6 :
            OC_AlternateClockEnable_Default(index);
            break;
        case OC_ID_7 :
            OC_AlternateClockEnable_Default(index);
            break;
        case OC_ID_8 :
            OC_AlternateClockEnable_Default(index);
            break;
        case OC_ID_9 :
            OC_AlternateClockEnable_Default(index);
            break;
        case OC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API void PLIB_OC_AlternateClockDisable(OC_MODULE_ID index)
{
    switch (index) {
        case OC_ID_1 :
            OC_AlternateClockDisable_Default(index);
            break;
        case OC_ID_2 :
            OC_AlternateClockDisable_Default(index);
            break;
        case OC_ID_3 :
            OC_AlternateClockDisable_Default(index);
            break;
        case OC_ID_4 :
            OC_AlternateClockDisable_Default(index);
            break;
        case OC_ID_5 :
            OC_AlternateClockDisable_Default(index);
            break;
        case OC_ID_6 :
            OC_AlternateClockDisable_Default(index);
            break;
        case OC_ID_7 :
            OC_AlternateClockDisable_Default(index);
            break;
        case OC_ID_8 :
            OC_AlternateClockDisable_Default(index);
            break;
        case OC_ID_9 :
            OC_AlternateClockDisable_Default(index);
            break;
        case OC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_OC_ExistsAlternateClock(OC_MODULE_ID index)
{
    switch (index) {
        case OC_ID_1 :
            return OC_ExistsAlternateClock_Default(index);
        case OC_ID_2 :
            return OC_ExistsAlternateClock_Default(index);
        case OC_ID_3 :
            return OC_ExistsAlternateClock_Default(index);
        case OC_ID_4 :
            return OC_ExistsAlternateClock_Default(index);
        case OC_ID_5 :
            return OC_ExistsAlternateClock_Default(index);
        case OC_ID_6 :
            return OC_ExistsAlternateClock_Default(index);
        case OC_ID_7 :
            return OC_ExistsAlternateClock_Default(index);
        case OC_ID_8 :
            return OC_ExistsAlternateClock_Default(index);
        case OC_ID_9 :
            return OC_ExistsAlternateClock_Default(index);
        case OC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API bool PLIB_OC_AlternateTimerSelect(OC_MODULE_ID index, OC_ALT_TIMERS tmr)
{
    switch (index) {
        case OC_ID_1 :
            return OC_AlternateTimerSelect_Default(index, tmr);
        case OC_ID_2 :
            return OC_AlternateTimerSelect_Default(index, tmr);
        case OC_ID_3 :
            return OC_AlternateTimerSelect_Default(index, tmr);
        case OC_ID_4 :
            return OC_AlternateTimerSelect_Default(index, tmr);
        case OC_ID_5 :
            return OC_AlternateTimerSelect_Default(index, tmr);
        case OC_ID_6 :
            return OC_AlternateTimerSelect_Default(index, tmr);
        case OC_ID_7 :
            return OC_AlternateTimerSelect_Default(index, tmr);
        case OC_ID_8 :
            return OC_AlternateTimerSelect_Default(index, tmr);
        case OC_ID_9 :
            return OC_AlternateTimerSelect_Default(index, tmr);
        case OC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API bool PLIB_OC_ExistsAlternateTimerSelect(OC_MODULE_ID index)
{
    switch (index) {
        case OC_ID_1 :
            return OC_ExistsAlternateTimerSelect_Default(index);
        case OC_ID_2 :
            return OC_ExistsAlternateTimerSelect_Default(index);
        case OC_ID_3 :
            return OC_ExistsAlternateTimerSelect_Default(index);
        case OC_ID_4 :
            return OC_ExistsAlternateTimerSelect_Default(index);
        case OC_ID_5 :
            return OC_ExistsAlternateTimerSelect_Default(index);
        case OC_ID_6 :
            return OC_ExistsAlternateTimerSelect_Default(index);
        case OC_ID_7 :
            return OC_ExistsAlternateTimerSelect_Default(index);
        case OC_ID_8 :
            return OC_ExistsAlternateTimerSelect_Default(index);
        case OC_ID_9 :
            return OC_ExistsAlternateTimerSelect_Default(index);
        case OC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_OC_Buffer32BitSet(OC_MODULE_ID index, uint32_t val32Bit)
{
    switch (index) {
        case OC_ID_1 :
            OC_Buffer32BitSet_32Bit_Variant(index, val32Bit);
            break;
        case OC_ID_2 :
            OC_Buffer32BitSet_32Bit_Variant(index, val32Bit);
            break;
        case OC_ID_3 :
            OC_Buffer32BitSet_32Bit_Variant(index, val32Bit);
            break;
        case OC_ID_4 :
            OC_Buffer32BitSet_32Bit_Variant(index, val32Bit);
            break;
        case OC_ID_5 :
            OC_Buffer32BitSet_32Bit_Variant(index, val32Bit);
            break;
        case OC_ID_6 :
            OC_Buffer32BitSet_32Bit_Variant(index, val32Bit);
            break;
        case OC_ID_7 :
            OC_Buffer32BitSet_32Bit_Variant(index, val32Bit);
            break;
        case OC_ID_8 :
            OC_Buffer32BitSet_32Bit_Variant(index, val32Bit);
            break;
        case OC_ID_9 :
            OC_Buffer32BitSet_32Bit_Variant(index, val32Bit);
            break;
        case OC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API void PLIB_OC_Buffer16BitSet(OC_MODULE_ID index, uint16_t val16Bit)
{
    switch (index) {
        case OC_ID_1 :
            OC_Buffer16BitSet_32Bit_Variant(index, val16Bit);
            break;
        case OC_ID_2 :
            OC_Buffer16BitSet_32Bit_Variant(index, val16Bit);
            break;
        case OC_ID_3 :
            OC_Buffer16BitSet_32Bit_Variant(index, val16Bit);
            break;
        case OC_ID_4 :
            OC_Buffer16BitSet_32Bit_Variant(index, val16Bit);
            break;
        case OC_ID_5 :
            OC_Buffer16BitSet_32Bit_Variant(index, val16Bit);
            break;
        case OC_ID_6 :
            OC_Buffer16BitSet_32Bit_Variant(index, val16Bit);
            break;
        case OC_ID_7 :
            OC_Buffer16BitSet_32Bit_Variant(index, val16Bit);
            break;
        case OC_ID_8 :
            OC_Buffer16BitSet_32Bit_Variant(index, val16Bit);
            break;
        case OC_ID_9 :
            OC_Buffer16BitSet_32Bit_Variant(index, val16Bit);
            break;
        case OC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_OC_ExistsBufferValue(OC_MODULE_ID index)
{
    switch (index) {
        case OC_ID_1 :
            return OC_ExistsBufferValue_32Bit_Variant(index);
        case OC_ID_2 :
            return OC_ExistsBufferValue_32Bit_Variant(index);
        case OC_ID_3 :
            return OC_ExistsBufferValue_32Bit_Variant(index);
        case OC_ID_4 :
            return OC_ExistsBufferValue_32Bit_Variant(index);
        case OC_ID_5 :
            return OC_ExistsBufferValue_32Bit_Variant(index);
        case OC_ID_6 :
            return OC_ExistsBufferValue_32Bit_Variant(index);
        case OC_ID_7 :
            return OC_ExistsBufferValue_32Bit_Variant(index);
        case OC_ID_8 :
            return OC_ExistsBufferValue_32Bit_Variant(index);
        case OC_ID_9 :
            return OC_ExistsBufferValue_32Bit_Variant(index);
        case OC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_OC_PulseWidth32BitSet(OC_MODULE_ID index, uint32_t pulseWidth)
{
    switch (index) {
        case OC_ID_1 :
            OC_PulseWidth32BitSet_32Bit_Variant(index, pulseWidth);
            break;
        case OC_ID_2 :
            OC_PulseWidth32BitSet_32Bit_Variant(index, pulseWidth);
            break;
        case OC_ID_3 :
            OC_PulseWidth32BitSet_32Bit_Variant(index, pulseWidth);
            break;
        case OC_ID_4 :
            OC_PulseWidth32BitSet_32Bit_Variant(index, pulseWidth);
            break;
        case OC_ID_5 :
            OC_PulseWidth32BitSet_32Bit_Variant(index, pulseWidth);
            break;
        case OC_ID_6 :
            OC_PulseWidth32BitSet_32Bit_Variant(index, pulseWidth);
            break;
        case OC_ID_7 :
            OC_PulseWidth32BitSet_32Bit_Variant(index, pulseWidth);
            break;
        case OC_ID_8 :
            OC_PulseWidth32BitSet_32Bit_Variant(index, pulseWidth);
            break;
        case OC_ID_9 :
            OC_PulseWidth32BitSet_32Bit_Variant(index, pulseWidth);
            break;
        case OC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API void PLIB_OC_PulseWidth16BitSet(OC_MODULE_ID index, uint16_t pulseWidth)
{
    switch (index) {
        case OC_ID_1 :
            OC_PulseWidth16BitSet_32Bit_Variant(index, pulseWidth);
            break;
        case OC_ID_2 :
            OC_PulseWidth16BitSet_32Bit_Variant(index, pulseWidth);
            break;
        case OC_ID_3 :
            OC_PulseWidth16BitSet_32Bit_Variant(index, pulseWidth);
            break;
        case OC_ID_4 :
            OC_PulseWidth16BitSet_32Bit_Variant(index, pulseWidth);
            break;
        case OC_ID_5 :
            OC_PulseWidth16BitSet_32Bit_Variant(index, pulseWidth);
            break;
        case OC_ID_6 :
            OC_PulseWidth16BitSet_32Bit_Variant(index, pulseWidth);
            break;
        case OC_ID_7 :
            OC_PulseWidth16BitSet_32Bit_Variant(index, pulseWidth);
            break;
        case OC_ID_8 :
            OC_PulseWidth16BitSet_32Bit_Variant(index, pulseWidth);
            break;
        case OC_ID_9 :
            OC_PulseWidth16BitSet_32Bit_Variant(index, pulseWidth);
            break;
        case OC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_OC_ExistsPulseWidth(OC_MODULE_ID index)
{
    switch (index) {
        case OC_ID_1 :
            return OC_ExistsPulseWidth_32Bit_Variant(index);
        case OC_ID_2 :
            return OC_ExistsPulseWidth_32Bit_Variant(index);
        case OC_ID_3 :
            return OC_ExistsPulseWidth_32Bit_Variant(index);
        case OC_ID_4 :
            return OC_ExistsPulseWidth_32Bit_Variant(index);
        case OC_ID_5 :
            return OC_ExistsPulseWidth_32Bit_Variant(index);
        case OC_ID_6 :
            return OC_ExistsPulseWidth_32Bit_Variant(index);
        case OC_ID_7 :
            return OC_ExistsPulseWidth_32Bit_Variant(index);
        case OC_ID_8 :
            return OC_ExistsPulseWidth_32Bit_Variant(index);
        case OC_ID_9 :
            return OC_ExistsPulseWidth_32Bit_Variant(index);
        case OC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_OC_BufferSizeSelect(OC_MODULE_ID index, OC_BUFFER_SIZE size)
{
    switch (index) {
        case OC_ID_1 :
            OC_BufferSizeSelect_Default(index, size);
            break;
        case OC_ID_2 :
            OC_BufferSizeSelect_Default(index, size);
            break;
        case OC_ID_3 :
            OC_BufferSizeSelect_Default(index, size);
            break;
        case OC_ID_4 :
            OC_BufferSizeSelect_Default(index, size);
            break;
        case OC_ID_5 :
            OC_BufferSizeSelect_Default(index, size);
            break;
        case OC_ID_6 :
            OC_BufferSizeSelect_Default(index, size);
            break;
        case OC_ID_7 :
            OC_BufferSizeSelect_Default(index, size);
            break;
        case OC_ID_8 :
            OC_BufferSizeSelect_Default(index, size);
            break;
        case OC_ID_9 :
            OC_BufferSizeSelect_Default(index, size);
            break;
        case OC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_OC_ExistsBufferSize(OC_MODULE_ID index)
{
    switch (index) {
        case OC_ID_1 :
            return OC_ExistsBufferSize_Default(index);
        case OC_ID_2 :
            return OC_ExistsBufferSize_Default(index);
        case OC_ID_3 :
            return OC_ExistsBufferSize_Default(index);
        case OC_ID_4 :
            return OC_ExistsBufferSize_Default(index);
        case OC_ID_5 :
            return OC_ExistsBufferSize_Default(index);
        case OC_ID_6 :
            return OC_ExistsBufferSize_Default(index);
        case OC_ID_7 :
            return OC_ExistsBufferSize_Default(index);
        case OC_ID_8 :
            return OC_ExistsBufferSize_Default(index);
        case OC_ID_9 :
            return OC_ExistsBufferSize_Default(index);
        case OC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

PLIB_INLINE_API void PLIB_OC_ModeSelect(OC_MODULE_ID index, OC_COMPARE_MODES cmpMode)
{
    switch (index) {
        case OC_ID_1 :
            OC_ModeSelect_Default(index, cmpMode);
            break;
        case OC_ID_2 :
            OC_ModeSelect_Default(index, cmpMode);
            break;
        case OC_ID_3 :
            OC_ModeSelect_Default(index, cmpMode);
            break;
        case OC_ID_4 :
            OC_ModeSelect_Default(index, cmpMode);
            break;
        case OC_ID_5 :
            OC_ModeSelect_Default(index, cmpMode);
            break;
        case OC_ID_6 :
            OC_ModeSelect_Default(index, cmpMode);
            break;
        case OC_ID_7 :
            OC_ModeSelect_Default(index, cmpMode);
            break;
        case OC_ID_8 :
            OC_ModeSelect_Default(index, cmpMode);
            break;
        case OC_ID_9 :
            OC_ModeSelect_Default(index, cmpMode);
            break;
        case OC_NUMBER_OF_MODULES :
        default :
            break;
    }
}

PLIB_INLINE_API bool PLIB_OC_ExistsCompareModeSelect(OC_MODULE_ID index)
{
    switch (index) {
        case OC_ID_1 :
            return OC_ExistsCompareModeSelect_Default(index);
        case OC_ID_2 :
            return OC_ExistsCompareModeSelect_Default(index);
        case OC_ID_3 :
            return OC_ExistsCompareModeSelect_Default(index);
        case OC_ID_4 :
            return OC_ExistsCompareModeSelect_Default(index);
        case OC_ID_5 :
            return OC_ExistsCompareModeSelect_Default(index);
        case OC_ID_6 :
            return OC_ExistsCompareModeSelect_Default(index);
        case OC_ID_7 :
            return OC_ExistsCompareModeSelect_Default(index);
        case OC_ID_8 :
            return OC_ExistsCompareModeSelect_Default(index);
        case OC_ID_9 :
            return OC_ExistsCompareModeSelect_Default(index);
        case OC_NUMBER_OF_MODULES :
        default :
            return (bool)0;
    }
}

#endif
