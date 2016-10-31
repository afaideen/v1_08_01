menu "USB"
    depends on HAVE_USB || HAVE_USBHS
    
menu "Device"

config USB_DEV_CDC_TX${INSTANCE}
    bool "CDC: Transmit String Over COM Port"
    set USE_USB_STACK_NEEDED to y if USB_DEV_CDC_TX${INSTANCE}
    set DRV_USB_DEVICE_SUPPORT to y if USB_DEV_CDC_TX${INSTANCE}
    set DRV_USB_ENDPOINTS_NUMBER to 3 if USB_DEV_CDC_TX${INSTANCE}
    set DRV_USB_ENDPOINTS_NUMBER to 4 if USB_DEV_CDC_TX${INSTANCE} && USE_SYS_CONSOLE
    set USB_DEVICE_USE_CDC_NEEDED to y if USB_DEV_CDC_TX${INSTANCE}
    set USB_DEVICE_FUNCTION_1_DEVICE_CLASS_IDX0 to "CDC" if USB_DEV_CDC_TX${INSTANCE}
    set USB_DEVICE_PRODUCT_ID_SELECT_IDX0 to "cdc_com_port_single_demo" if USB_DEV_CDC_TX${INSTANCE}
    default n
	persistent if GENERATE_USB_MOUSE_DEMO${INSTANCE} || USB_HOST_CDC_TX${INSTANCE} || USB_HOST_CDC_RX${INSTANCE}
	---help---
	<!DOCTYPE HTML>
	<html>
	<h2>MPLAB Harmony USB CDC Client TX Application Template</h2>
	<p>	This template generates a simple code example which transmits
	a string of bytes as a USB CDC Client. It will automatically configure
	the USB stack with the following settings:</p>
	<br>- USB CDC Client
	<br>- Number of Endpoints: 3
	<br>- Product ID: "cdc_com_port_single_demo"
	<p>All other USB stack configuration options are set to their 
	default values. The stack configuration may be modified by 
	the user using MHC, under Harmony Framework Configuration -> USB</p></html>
	---endhelp---


config USB_DEV_CDC_TX_NUM_PORTS${INSTANCE}
    int "Number of COM Ports"
	depends on USB_DEV_CDC_TX${INSTANCE}
    default 1
	persistent

config USB_DEV_CDC_TX_STRG${INSTANCE}
    string "Transmit String"
	depends on USB_DEV_CDC_TX${INSTANCE}
    default "Hello World"

config USB_DEV_CDC_RX${INSTANCE}
    bool "CDC: Receive String Over COM Port"
    set USE_USB_STACK_NEEDED to y if USB_DEV_CDC_RX${INSTANCE}
    set DRV_USB_DEVICE_SUPPORT to y if USB_DEV_CDC_RX${INSTANCE}
    set DRV_USB_ENDPOINTS_NUMBER to 3 if USB_DEV_CDC_RX${INSTANCE}
    set DRV_USB_ENDPOINTS_NUMBER to 4 if USB_DEV_CDC_RX${INSTANCE} && USE_SYS_CONSOLE
    set USB_DEVICE_USE_CDC_NEEDED to y if USB_DEV_CDC_RX${INSTANCE}
    set USB_DEVICE_FUNCTION_1_DEVICE_CLASS_IDX0 to "CDC" if USB_DEV_CDC_RX${INSTANCE}
    set USB_DEVICE_PRODUCT_ID_SELECT_IDX0 to "cdc_com_port_single_demo" if USB_DEV_CDC_RX${INSTANCE}
    default n
	persistent if GENERATE_USB_MOUSE_DEMO${INSTANCE} || USB_HOST_CDC_TX${INSTANCE} || USB_HOST_CDC_RX${INSTANCE}
	---help---
	<!DOCTYPE HTML>
	<html>
	<h2>MPLAB Harmony USB CDC Client RX Application Template</h2>
	<p>	This template generates a simple code example which receives a 
	string of bytes as a USB CDC Client. It will automatically configure
	the USB stack with the following settings:</p>
	<br>- USB CDC Client
	<br>- Number of Endpoints: 3
	<br>- Product ID: "cdc_com_port_single_demo"
	<p>All other USB stack configuration options are set to their 
	default values. The stack configuration may be modified by 
	the user using MHC, under Harmony Framework Configuration -> USB</p></html>
	---endhelp---

config USB_DEV_CDC_RX_NUM_PORTS${INSTANCE}
    int "Number of COM Ports"
	depends on USB_DEV_CDC_RX${INSTANCE}
    default 1
	persistent

config USB_DEV_CDC_RX_SIZE${INSTANCE}
    string "Number of Characters to Receive"
	depends on USB_DEV_CDC_RX${INSTANCE}
    default 8

config GENERATE_USB_MOUSE_DEMO${INSTANCE}
    bool "Mouse"
	default n
	persistent if USB_DEV_CDC_TX${INSTANCE} || USB_HOST_CDC_TX${INSTANCE} || USB_HOST_CDC_RX${INSTANCE} 
    set USE_USB_STACK_NEEDED to y if GENERATE_USB_MOUSE_DEMO${INSTANCE}
    set DRV_USB_DEVICE_SUPPORT to y if GENERATE_USB_MOUSE_DEMO${INSTANCE}
    set DRV_USB_ENDPOINTS_NUMBER to 2 if GENERATE_USB_MOUSE_DEMO${INSTANCE}
    set DRV_USB_ENDPOINTS_NUMBER to 3 if GENERATE_USB_MOUSE_DEMO${INSTANCE} && USE_SYS_CONSOLE
    set USB_DEVICE_SOF_EVENT_ENABLE to y if GENERATE_USB_MOUSE_DEMO${INSTANCE}
    set USB_DEVICE_USE_HID_NEEDED to y if GENERATE_USB_MOUSE_DEMO${INSTANCE}
    set USB_DEVICE_FUNCTION_1_DEVICE_CLASS_IDX0 to "HID" if GENERATE_USB_MOUSE_DEMO${INSTANCE}
    set USB_DEVICE_PRODUCT_ID_SELECT_IDX0 to "hid_mouse_demo" if GENERATE_USB_MOUSE_DEMO${INSTANCE}
	---help---
	<!DOCTYPE HTML>
	<html>
	<h2>MPLAB Harmony USB Mouse Demo Application Template</h2>
	<p>	This template generates a simple code example which implements 
	the HID Mouse Demo. When connected, the device emulates mouse 
	operation by moving the cursor in a circular pattern. It will 
	automatically configure the USB stack with the following settings:</p>
	<br>- USB HID Client
	<br>- Number of Endpoints: 2
	<br>- Product ID: "hid_mouse_demo"
	<p>All other USB stack configuration options are set to their 
	default values. The stack configuration may be modified by 
	the user using MHC, under Harmony Framework Configuration -> USB</p></html>
	---endhelp---

ifblock GENERATE_USB_MOUSE_DEMO${INSTANCE}

<#include "/gencode/framework/global_event/config/global_event_macros.ftl">
<@global_event_triggered_hconfig module_name="Mouse" action="Enable/Disable"/>

endif

endmenu

menu "Host"

config USB_HOST_CDC_TX${INSTANCE}
	bool "CDC: Transmit String Over COM Port"
    default n
	persistent if USB_DEV_CDC_TX${INSTANCE} || USB_DEV_CDC_TX${INSTANCE} || GENERATE_USB_MOUSE_DEMO${INSTANCE} 
    set USE_USB_STACK_NEEDED to y if USB_HOST_CDC_TX${INSTANCE}
    set DRV_USB_DEVICE_SUPPORT to n if USB_HOST_CDC_TX${INSTANCE}
    set DRV_USB_HOST_SUPPORT to y if USB_HOST_CDC_TX${INSTANCE}
    set USB_HOST_USE_CDC to y if USB_HOST_CDC_TX${INSTANCE}
    set DRV_TMR_PERIPHERAL_ID_IDX0 to "TMR_ID_2" if USB_HOST_CDC_TX${INSTANCE}
    set DRV_TMR_INTERRUPT_PRIORITY_IDX0 to "INT_PRIORITY_LEVEL4" if USB_HOST_CDC_TX${INSTANCE}
    set XC32_HEAP to "500" if USB_HOST_CDC_TX${INSTANCE}
	---help---
	<!DOCTYPE HTML>
	<html>
	<h2>MPLAB Harmony USB CDC Host TX Application Template</h2>
	<p>	This template generates a simple code example which transmits a
	string of bytes as a USB CDC Host. It will automatically configure
	the USB stack with the following settings:</p>
	<br>- USB CDC Host
	<p>It will also automatically configure Timer 2 as the System 
	Timer. All other USB stack configuration options are set to their 
	default values. The stack configuration may be modified by 
	the user using MHC, under Harmony Framework Configuration -> USB</p></html>
	---endhelp---


config USB_HOST_CDC_TX_NUM_PORTS${INSTANCE}
    int "Number of COM Ports"
	depends on USB_HOST_CDC_TX${INSTANCE}
    default 1
	persistent

config USB_HOST_CDC_TX_STRG${INSTANCE}
    string "Transmit String"
	depends on USB_HOST_CDC_TX${INSTANCE}
    default "Hello World!"

config USB_HOST_CDC_RX${INSTANCE}
	bool "CDC: Receive String Over COM Port"
    default n
	persistent if USB_DEV_CDC_TX${INSTANCE} || USB_DEV_CDC_TX${INSTANCE} || GENERATE_USB_MOUSE_DEMO${INSTANCE} 
    set USE_USB_STACK_NEEDED to y if USB_HOST_CDC_RX${INSTANCE}
    set DRV_USB_DEVICE_SUPPORT to n if USB_HOST_CDC_RX${INSTANCE}
    set DRV_USB_HOST_SUPPORT to y if USB_HOST_CDC_RX${INSTANCE}
    set USB_HOST_USE_CDC to y if USB_HOST_CDC_RX${INSTANCE}
    set DRV_TMR_PERIPHERAL_ID_IDX0 to "TMR_ID_2" if USB_HOST_CDC_RX${INSTANCE}
    set DRV_TMR_INTERRUPT_PRIORITY_IDX0 to "INT_PRIORITY_LEVEL4" if USB_HOST_CDC_RX${INSTANCE}
    set XC32_HEAP to "500" if USB_HOST_CDC_RX${INSTANCE}
	---help---
	<!DOCTYPE HTML>
	<html>
	<h2>MPLAB Harmony USB CDC Host RX Application Template</h2>
	<p>	This template generates a simple code example which receives a
	string of bytes as a USB CDC Host. It will automatically configure
	the USB stack with the following settings:</p>
	<br>- USB CDC Host
	<p>It will also automatically configure Timer 2 as the System 
	Timer. All other USB stack configuration options are set to their 
	default values. The stack configuration may be modified by 
	the user using MHC, under Harmony Framework Configuration -> USB</p></html>
	---endhelp---


config USB_HOST_CDC_RX_NUM_PORTS${INSTANCE}
    int "Number of COM Ports"
	depends on USB_HOST_CDC_RX${INSTANCE}
    default 1
	persistent

config USB_HOST_CDC_RX_SIZE${INSTANCE}
    string "Number of Characters to Receive"
	depends on USB_HOST_CDC_RX${INSTANCE}
    default 8

endmenu

ifblock USB_DEV_CDC_TX${INSTANCE} || USB_DEV_CDC_RX${INSTANCE}

add "^#include \"/utilities/mhc/config/gencode/framework/USB/config/usb_dev_cdc_com_port_macros_app.h.ftl\">" to list APP_FREEMARKER_MACROS
add "^#include \"/utilities/mhc/config/gencode/framework/USB/config/usb_dev_cdc_com_port_macros_app.c.ftl\">" to list APP_FREEMARKER_MACROS
add "^#include \"/utilities/mhc/config/gencode/framework/USB/config/usb_dev_cdc_com_port_macros_system_config.h.ftl\">" to list APP_FREEMARKER_MACROS

endif

ifblock GENERATE_USB_MOUSE_DEMO${INSTANCE}

add "^#include \"/utilities/mhc/config/gencode/framework/USB/config/usb_mouse_device_macros_app.h.ftl\">" to list APP_FREEMARKER_MACROS
add "^#include \"/utilities/mhc/config/gencode/framework/USB/config/usb_mouse_device_macros_app.c.ftl\">" to list APP_FREEMARKER_MACROS
add "^#include \"/utilities/mhc/config/gencode/framework/USB/config/usb_mouse_device_macros_system_config.h.ftl\">" to list APP_FREEMARKER_MACROS

endif

ifblock USB_HOST_CDC_TX${INSTANCE} || USB_HOST_CDC_RX${INSTANCE}

add "^#include \"/utilities/mhc/config/gencode/framework/USB/config/usb_host_cdc_com_port_macros_app.h.ftl\">" to list APP_FREEMARKER_MACROS
add "^#include \"/utilities/mhc/config/gencode/framework/USB/config/usb_host_cdc_com_port_macros_app.c.ftl\">" to list APP_FREEMARKER_MACROS
add "^#include \"/utilities/mhc/config/gencode/framework/USB/config/usb_host_cdc_com_port_macros_system_config.h.ftl\">" to list APP_FREEMARKER_MACROS

endif

ifblock USB_DEV_CDC_TX${INSTANCE} || USB_DEV_CDC_RX${INSTANCE} || GENERATE_USB_MOUSE_DEMO${INSTANCE} || USB_HOST_CDC_TX${INSTANCE} || USB_HOST_CDC_RX${INSTANCE} 

add "^@macro_lib_usb_app_h_includes/>" to list APP${INSTANCE}_H_INCLUDES
add "^@macro_lib_usb_system_config_h_app_constants/>" to list APP${INSTANCE}_H_CONSTANTS
add "^@macro_lib_usb_app_h_type_definitions/>" to list APP${INSTANCE}_H_TYPE_DEFINITIONS
add "^@macro_lib_usb_app_h_data/>" to list APP${INSTANCE}_H_APP_DATA
add "^@macro_lib_usb_app_h_callback_function_declarations/>" to list APP${INSTANCE}_H_APP_CALLBACK_FUNCTION_DECLARATIONS
add "^@macro_lib_usb_app_h_function_declarations/>" to list APP${INSTANCE}_H_APP_FUNCTION_DECLARATIONS
add "^@macro_lib_usb_app_h_states/>" to list APP${INSTANCE}_H_APP_STATES

add "^@macro_lib_usb_app_c_includes/>" to list APP${INSTANCE}_C_INCLUDES
add "^@macro_lib_usb_app_c_global_data/>" to list APP${INSTANCE}_C_GLOBAL_DATA
add "^@macro_lib_usb_app_c_callback_functions/>" to list APP${INSTANCE}_C_CALLBACK_FUNCTIONS
add "^@macro_lib_usb_app_c_local_functions/>" to list APP${INSTANCE}_C_LOCAL_FUNCTIONS
add "^@macro_lib_usb_app_c_initialize/>" to list APP${INSTANCE}_C_INITIALIZE
add "^@macro_lib_usb_app_c_tasks_data/>" to list APP${INSTANCE}_C_TASKS_DATA
add "^@macro_lib_usb_app_c_tasks_state_init/>" to list APP${INSTANCE}_C_TASKS_STATE_INIT
add "^@macro_lib_usb_app_c_tasks_calls_after_init/>" to list APP${INSTANCE}_C_TASKS_CALLS_AFTER_INIT
add "^@macro_lib_usb_app_c_tasks_state_service_tasks/>" to list APP${INSTANCE}_C_TASKS_STATE_SERVICE_TASKS
add "^@macro_lib_usb_app_c_tasks_states/>" to list APP${INSTANCE}_C_TASKS_STATES
endif

endmenu
