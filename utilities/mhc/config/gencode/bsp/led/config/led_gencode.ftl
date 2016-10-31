menu "LED"
    
config GENERATE_CODE_LED${INSTANCE}
    bool "LED?"
    select USE_BSP_NEEDED
    default n
    
ifblock GENERATE_CODE_LED${INSTANCE}

comment "**** Note: Please configure BSP settings under BSP Configuration menu ****"

    
choice
    prompt "Select BSP LED To Use"
    depends on GENERATE_CODE_LED${INSTANCE}
    default APP_LED3${INSTANCE}

config APP_LED0${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_LED0
    set APP_LED_NAME${INSTANCE} to "BSP_LED_0" if APP_LED0${INSTANCE}
    bool "BSP LED0"

config APP_LED1${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_LED1
    set APP_LED_NAME${INSTANCE} to "BSP_LED_1" if APP_LED1${INSTANCE}
    bool "BSP LED1"

config APP_LED2${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_LED2
    set APP_LED_NAME${INSTANCE} to "BSP_LED_2" if APP_LED2${INSTANCE}
    bool "BSP LED2"

config APP_LED3${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_LED3
    set APP_LED_NAME${INSTANCE} to "BSP_LED_3" if APP_LED3${INSTANCE}
    bool "BSP LED3"

config APP_LED4${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_LED4
    set APP_LED_NAME${INSTANCE} to "BSP_LED_4" if APP_LED4${INSTANCE}
    bool "BSP LED4"

config APP_LED5${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_LED5
    set APP_LED_NAME${INSTANCE} to "BSP_LED_5" if APP_LED5${INSTANCE}
    bool "BSP LED5"

config APP_LED6${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_LED6
    set APP_LED_NAME${INSTANCE} to "BSP_LED_6" if APP_LED6${INSTANCE}
    bool "BSP LED6"

config APP_LED7${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_LED7
    set APP_LED_NAME${INSTANCE} to "BSP_LED_7" if APP_LED7${INSTANCE}
    bool "BSP LED7"

config APP_LED8${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_LED8
    set APP_LED_NAME${INSTANCE} to "BSP_LED_8" if APP_LED8${INSTANCE}
    bool "BSP LED8"

config APP_LED9${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_LED9
    set APP_LED_NAME${INSTANCE} to "BSP_LED_9" if APP_LED9${INSTANCE}
    bool "BSP LED9"

config APP_LED10${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_LED10
    set APP_LED_NAME${INSTANCE} to "BSP_LED_10" if APP_LED10${INSTANCE}
    bool "BSP LED10"

config APP_LED11${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_MEB_LED1
    set APP_LED_NAME${INSTANCE} to "BSP_MEB_LED_1" if APP_LED11${INSTANCE}
    bool "BSP MEB LED1"

config APP_LED12${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_MEB_LED2
    set APP_LED_NAME${INSTANCE} to "BSP_MEB_LED_2" if APP_LED12${INSTANCE}
    bool "BSP MEB LED2"

config APP_LED13${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_MEB_LED3
    set APP_LED_NAME${INSTANCE} to "BSP_MEB_LED_3" if APP_LED13${INSTANCE}
    bool "BSP MEB LED3"

config APP_LED14${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_MEB_LED4
    set APP_LED_NAME${INSTANCE} to "BSP_MEB_LED_4" if APP_LED14${INSTANCE}
    bool "BSP MEB LED4"

config APP_LED15${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_MEB_LED5
    set APP_LED_NAME${INSTANCE} to "BSP_MEB_LED_5" if APP_LED15${INSTANCE}
    bool "BSP MEB LED5"

config APP_LED16${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_LED_RED
    set APP_LED_NAME${INSTANCE} to "BSP_LED_RED" if APP_LED16${INSTANCE}
    bool "BSP LED Red"

config APP_LED17${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_LED_GREEN
    set APP_LED_NAME${INSTANCE} to "BSP_LED_GREEN" if APP_LED17${INSTANCE}
    bool "BSP LED Green"

config APP_LED18${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_LED_BLUE
    set APP_LED_NAME${INSTANCE} to "BSP_LED_BLUE" if APP_LED18${INSTANCE}
    bool "BSP LED Blue"

config APP_LED19${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_MEB2_LED3
    set APP_LED_NAME${INSTANCE} to "BSP_LED_D3" if APP_LED19${INSTANCE}
    bool "BSP MEB2 LED3"

config APP_LED20${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_MEB2_LED4
    set APP_LED_NAME${INSTANCE} to "BSP_LED_D4" if APP_LED20${INSTANCE}
    bool "BSP MEB2 LED4"

config APP_LED21${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_MEB2_LED5
    set APP_LED_NAME${INSTANCE} to "BSP_LED_D5" if APP_LED21${INSTANCE}
    bool "BSP MEB2 LED5"

config APP_LED22${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_MEB2_LED6
    set APP_LED_NAME${INSTANCE} to "BSP_LED_D6" if APP_LED22${INSTANCE}
    bool "BSP MEB2 LED6"

config APP_LED23${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    depends on BSP_MEB2_LED7
    set APP_LED_NAME${INSTANCE} to "BSP_LED_D7" if APP_LED23${INSTANCE}
    bool "BSP MEB2 LED7"


endchoice

config APP_LED_NAME${INSTANCE}
    depends on GENERATE_CODE_LED${INSTANCE}
    string
    default ""

<#include "/gencode/framework/global_event/config/global_event_macros.ftl">
<@global_event_triggered_hconfig module_name="LED" action="Toggle"/>

add "^#include \"/utilities/mhc/config/gencode/bsp/led/config/led_gencode_macros_app.h.ftl\">" to list APP_FREEMARKER_MACROS
add "^@macro_led_app_h_includes/>" to list APP${INSTANCE}_H_INCLUDES
add "^@macro_led_app_h_constants/>" to list APP${INSTANCE}_H_CONSTANTS
add "^@macro_led_app_h_data/>" to list APP${INSTANCE}_H_APP_DATA
add "^@macro_led_app_h_callback_function_declarations/>" to list APP${INSTANCE}_H_APP_CALLBACK_FUNCTION_DECLARATIONS
add "^@macro_led_app_h_function_declarations/>" to list APP${INSTANCE}_H_APP_FUNCTION_DECLARATIONS

add "^#include \"/utilities/mhc/config/gencode/bsp/led/config/led_gencode_macros_app.c.ftl\">" to list APP_FREEMARKER_MACROS
add "^@macro_led_app_c_includes/>" to list APP${INSTANCE}_C_INCLUDES
add "^@macro_led_app_c_callback_functions/>" to list APP${INSTANCE}_C_CALLBACK_FUNCTIONS
add "^@macro_led_app_c_local_functions/>" to list APP${INSTANCE}_C_LOCAL_FUNCTIONS
add "^@macro_led_app_c_initialize/>" to list APP${INSTANCE}_C_INITIALIZE
add "^@macro_led_app_c_tasks_data/>" to list APP${INSTANCE}_C_TASKS_DATA
add "^@macro_led_app_c_tasks_state_init/>" to list APP${INSTANCE}_C_TASKS_STATE_INIT
add "^@macro_led_app_c_tasks_calls_after_init/>" to list APP${INSTANCE}_C_TASKS_CALLS_AFTER_INIT
add "^@macro_led_app_c_tasks_state_service_tasks/>" to list APP${INSTANCE}_C_TASKS_STATE_SERVICE_TASKS
  
endif

endmenu
