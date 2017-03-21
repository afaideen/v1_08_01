#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-e_wi_nvm.mk)" "nbproject/Makefile-local-e_wi_nvm.mk"
include nbproject/Makefile-local-e_wi_nvm.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=e_wi_nvm
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/EagleEye2014.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/EagleEye2014.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=
else
COMPARISON_BUILD=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=../src/app.c ../src/main.c ../src/app_wifi.c ../src/NVMFlash.c ../src/queue.c ../src/app_commands.c ../src/sensor.c "../src/DS1307 v2.c" ../../../../framework/common/src/delay.c ../../../../framework/driver/nvm/src/dynamic/drv_nvm.c ../../../../framework/driver/nvm/src/dynamic/drv_nvm_erasewrite.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/_ext/1360937237/app.o ${OBJECTDIR}/_ext/1360937237/main.o ${OBJECTDIR}/_ext/1360937237/app_wifi.o ${OBJECTDIR}/_ext/1360937237/NVMFlash.o ${OBJECTDIR}/_ext/1360937237/queue.o ${OBJECTDIR}/_ext/1360937237/app_commands.o ${OBJECTDIR}/_ext/1360937237/sensor.o "${OBJECTDIR}/_ext/1360937237/DS1307 v2.o" ${OBJECTDIR}/_ext/768819121/delay.o ${OBJECTDIR}/_ext/571308596/drv_nvm.o ${OBJECTDIR}/_ext/571308596/drv_nvm_erasewrite.o
POSSIBLE_DEPFILES=${OBJECTDIR}/_ext/1360937237/app.o.d ${OBJECTDIR}/_ext/1360937237/main.o.d ${OBJECTDIR}/_ext/1360937237/app_wifi.o.d ${OBJECTDIR}/_ext/1360937237/NVMFlash.o.d ${OBJECTDIR}/_ext/1360937237/queue.o.d ${OBJECTDIR}/_ext/1360937237/app_commands.o.d ${OBJECTDIR}/_ext/1360937237/sensor.o.d "${OBJECTDIR}/_ext/1360937237/DS1307 v2.o.d" ${OBJECTDIR}/_ext/768819121/delay.o.d ${OBJECTDIR}/_ext/571308596/drv_nvm.o.d ${OBJECTDIR}/_ext/571308596/drv_nvm_erasewrite.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/_ext/1360937237/app.o ${OBJECTDIR}/_ext/1360937237/main.o ${OBJECTDIR}/_ext/1360937237/app_wifi.o ${OBJECTDIR}/_ext/1360937237/NVMFlash.o ${OBJECTDIR}/_ext/1360937237/queue.o ${OBJECTDIR}/_ext/1360937237/app_commands.o ${OBJECTDIR}/_ext/1360937237/sensor.o ${OBJECTDIR}/_ext/1360937237/DS1307\ v2.o ${OBJECTDIR}/_ext/768819121/delay.o ${OBJECTDIR}/_ext/571308596/drv_nvm.o ${OBJECTDIR}/_ext/571308596/drv_nvm_erasewrite.o

# Source Files
SOURCEFILES=../src/app.c ../src/main.c ../src/app_wifi.c ../src/NVMFlash.c ../src/queue.c ../src/app_commands.c ../src/sensor.c ../src/DS1307 v2.c ../../../../framework/common/src/delay.c ../../../../framework/driver/nvm/src/dynamic/drv_nvm.c ../../../../framework/driver/nvm/src/dynamic/drv_nvm_erasewrite.c


CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-e_wi_nvm.mk dist/${CND_CONF}/${IMAGE_TYPE}/EagleEye2014.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=32MX795F512L
MP_LINKER_FILE_OPTION=
# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/_ext/1360937237/app.o: ../src/app.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/app.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -I"../src" -I"../src/system_config/e-wi" -I"../../../../framework" -I"../src/system_config/e-wi/framework" -I"../../../../bsp/eagleeye2014" -MMD -MF "${OBJECTDIR}/_ext/1360937237/app.o.d" -o ${OBJECTDIR}/_ext/1360937237/app.o ../src/app.c    -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/main.o: ../src/main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/main.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -I"../src" -I"../src/system_config/e-wi" -I"../../../../framework" -I"../src/system_config/e-wi/framework" -I"../../../../bsp/eagleeye2014" -MMD -MF "${OBJECTDIR}/_ext/1360937237/main.o.d" -o ${OBJECTDIR}/_ext/1360937237/main.o ../src/main.c    -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/app_wifi.o: ../src/app_wifi.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app_wifi.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app_wifi.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/app_wifi.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -I"../src" -I"../src/system_config/e-wi" -I"../../../../framework" -I"../src/system_config/e-wi/framework" -I"../../../../bsp/eagleeye2014" -MMD -MF "${OBJECTDIR}/_ext/1360937237/app_wifi.o.d" -o ${OBJECTDIR}/_ext/1360937237/app_wifi.o ../src/app_wifi.c    -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/NVMFlash.o: ../src/NVMFlash.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/NVMFlash.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/NVMFlash.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/NVMFlash.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -I"../src" -I"../src/system_config/e-wi" -I"../../../../framework" -I"../src/system_config/e-wi/framework" -I"../../../../bsp/eagleeye2014" -MMD -MF "${OBJECTDIR}/_ext/1360937237/NVMFlash.o.d" -o ${OBJECTDIR}/_ext/1360937237/NVMFlash.o ../src/NVMFlash.c    -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/queue.o: ../src/queue.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/queue.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/queue.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/queue.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -I"../src" -I"../src/system_config/e-wi" -I"../../../../framework" -I"../src/system_config/e-wi/framework" -I"../../../../bsp/eagleeye2014" -MMD -MF "${OBJECTDIR}/_ext/1360937237/queue.o.d" -o ${OBJECTDIR}/_ext/1360937237/queue.o ../src/queue.c    -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/app_commands.o: ../src/app_commands.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app_commands.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app_commands.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/app_commands.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -I"../src" -I"../src/system_config/e-wi" -I"../../../../framework" -I"../src/system_config/e-wi/framework" -I"../../../../bsp/eagleeye2014" -MMD -MF "${OBJECTDIR}/_ext/1360937237/app_commands.o.d" -o ${OBJECTDIR}/_ext/1360937237/app_commands.o ../src/app_commands.c    -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/sensor.o: ../src/sensor.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/sensor.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/sensor.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/sensor.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -I"../src" -I"../src/system_config/e-wi" -I"../../../../framework" -I"../src/system_config/e-wi/framework" -I"../../../../bsp/eagleeye2014" -MMD -MF "${OBJECTDIR}/_ext/1360937237/sensor.o.d" -o ${OBJECTDIR}/_ext/1360937237/sensor.o ../src/sensor.c    -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/DS1307\ v2.o: ../src/DS1307\ v2.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} "${OBJECTDIR}/_ext/1360937237/DS1307 v2.o".d 
	@${RM} "${OBJECTDIR}/_ext/1360937237/DS1307 v2.o" 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/DS1307 v2.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -I"../src" -I"../src/system_config/e-wi" -I"../../../../framework" -I"../src/system_config/e-wi/framework" -I"../../../../bsp/eagleeye2014" -MMD -MF "${OBJECTDIR}/_ext/1360937237/DS1307 v2.o.d" -o "${OBJECTDIR}/_ext/1360937237/DS1307 v2.o" "../src/DS1307 v2.c"    -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/768819121/delay.o: ../../../../framework/common/src/delay.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/768819121" 
	@${RM} ${OBJECTDIR}/_ext/768819121/delay.o.d 
	@${RM} ${OBJECTDIR}/_ext/768819121/delay.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/768819121/delay.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -I"../src" -I"../src/system_config/e-wi" -I"../../../../framework" -I"../src/system_config/e-wi/framework" -I"../../../../bsp/eagleeye2014" -MMD -MF "${OBJECTDIR}/_ext/768819121/delay.o.d" -o ${OBJECTDIR}/_ext/768819121/delay.o ../../../../framework/common/src/delay.c    -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/571308596/drv_nvm.o: ../../../../framework/driver/nvm/src/dynamic/drv_nvm.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/571308596" 
	@${RM} ${OBJECTDIR}/_ext/571308596/drv_nvm.o.d 
	@${RM} ${OBJECTDIR}/_ext/571308596/drv_nvm.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/571308596/drv_nvm.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -I"../src" -I"../src/system_config/e-wi" -I"../../../../framework" -I"../src/system_config/e-wi/framework" -I"../../../../bsp/eagleeye2014" -MMD -MF "${OBJECTDIR}/_ext/571308596/drv_nvm.o.d" -o ${OBJECTDIR}/_ext/571308596/drv_nvm.o ../../../../framework/driver/nvm/src/dynamic/drv_nvm.c    -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/571308596/drv_nvm_erasewrite.o: ../../../../framework/driver/nvm/src/dynamic/drv_nvm_erasewrite.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/571308596" 
	@${RM} ${OBJECTDIR}/_ext/571308596/drv_nvm_erasewrite.o.d 
	@${RM} ${OBJECTDIR}/_ext/571308596/drv_nvm_erasewrite.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/571308596/drv_nvm_erasewrite.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -I"../src" -I"../src/system_config/e-wi" -I"../../../../framework" -I"../src/system_config/e-wi/framework" -I"../../../../bsp/eagleeye2014" -MMD -MF "${OBJECTDIR}/_ext/571308596/drv_nvm_erasewrite.o.d" -o ${OBJECTDIR}/_ext/571308596/drv_nvm_erasewrite.o ../../../../framework/driver/nvm/src/dynamic/drv_nvm_erasewrite.c    -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD) 
	
else
${OBJECTDIR}/_ext/1360937237/app.o: ../src/app.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/app.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -I"../src" -I"../src/system_config/e-wi" -I"../../../../framework" -I"../src/system_config/e-wi/framework" -I"../../../../bsp/eagleeye2014" -MMD -MF "${OBJECTDIR}/_ext/1360937237/app.o.d" -o ${OBJECTDIR}/_ext/1360937237/app.o ../src/app.c    -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/main.o: ../src/main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/main.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -I"../src" -I"../src/system_config/e-wi" -I"../../../../framework" -I"../src/system_config/e-wi/framework" -I"../../../../bsp/eagleeye2014" -MMD -MF "${OBJECTDIR}/_ext/1360937237/main.o.d" -o ${OBJECTDIR}/_ext/1360937237/main.o ../src/main.c    -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/app_wifi.o: ../src/app_wifi.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app_wifi.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app_wifi.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/app_wifi.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -I"../src" -I"../src/system_config/e-wi" -I"../../../../framework" -I"../src/system_config/e-wi/framework" -I"../../../../bsp/eagleeye2014" -MMD -MF "${OBJECTDIR}/_ext/1360937237/app_wifi.o.d" -o ${OBJECTDIR}/_ext/1360937237/app_wifi.o ../src/app_wifi.c    -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/NVMFlash.o: ../src/NVMFlash.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/NVMFlash.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/NVMFlash.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/NVMFlash.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -I"../src" -I"../src/system_config/e-wi" -I"../../../../framework" -I"../src/system_config/e-wi/framework" -I"../../../../bsp/eagleeye2014" -MMD -MF "${OBJECTDIR}/_ext/1360937237/NVMFlash.o.d" -o ${OBJECTDIR}/_ext/1360937237/NVMFlash.o ../src/NVMFlash.c    -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/queue.o: ../src/queue.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/queue.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/queue.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/queue.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -I"../src" -I"../src/system_config/e-wi" -I"../../../../framework" -I"../src/system_config/e-wi/framework" -I"../../../../bsp/eagleeye2014" -MMD -MF "${OBJECTDIR}/_ext/1360937237/queue.o.d" -o ${OBJECTDIR}/_ext/1360937237/queue.o ../src/queue.c    -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/app_commands.o: ../src/app_commands.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app_commands.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app_commands.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/app_commands.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -I"../src" -I"../src/system_config/e-wi" -I"../../../../framework" -I"../src/system_config/e-wi/framework" -I"../../../../bsp/eagleeye2014" -MMD -MF "${OBJECTDIR}/_ext/1360937237/app_commands.o.d" -o ${OBJECTDIR}/_ext/1360937237/app_commands.o ../src/app_commands.c    -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/sensor.o: ../src/sensor.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/sensor.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/sensor.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/sensor.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -I"../src" -I"../src/system_config/e-wi" -I"../../../../framework" -I"../src/system_config/e-wi/framework" -I"../../../../bsp/eagleeye2014" -MMD -MF "${OBJECTDIR}/_ext/1360937237/sensor.o.d" -o ${OBJECTDIR}/_ext/1360937237/sensor.o ../src/sensor.c    -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/DS1307\ v2.o: ../src/DS1307\ v2.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} "${OBJECTDIR}/_ext/1360937237/DS1307 v2.o".d 
	@${RM} "${OBJECTDIR}/_ext/1360937237/DS1307 v2.o" 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/DS1307 v2.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -I"../src" -I"../src/system_config/e-wi" -I"../../../../framework" -I"../src/system_config/e-wi/framework" -I"../../../../bsp/eagleeye2014" -MMD -MF "${OBJECTDIR}/_ext/1360937237/DS1307 v2.o.d" -o "${OBJECTDIR}/_ext/1360937237/DS1307 v2.o" "../src/DS1307 v2.c"    -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/768819121/delay.o: ../../../../framework/common/src/delay.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/768819121" 
	@${RM} ${OBJECTDIR}/_ext/768819121/delay.o.d 
	@${RM} ${OBJECTDIR}/_ext/768819121/delay.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/768819121/delay.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -I"../src" -I"../src/system_config/e-wi" -I"../../../../framework" -I"../src/system_config/e-wi/framework" -I"../../../../bsp/eagleeye2014" -MMD -MF "${OBJECTDIR}/_ext/768819121/delay.o.d" -o ${OBJECTDIR}/_ext/768819121/delay.o ../../../../framework/common/src/delay.c    -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/571308596/drv_nvm.o: ../../../../framework/driver/nvm/src/dynamic/drv_nvm.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/571308596" 
	@${RM} ${OBJECTDIR}/_ext/571308596/drv_nvm.o.d 
	@${RM} ${OBJECTDIR}/_ext/571308596/drv_nvm.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/571308596/drv_nvm.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -I"../src" -I"../src/system_config/e-wi" -I"../../../../framework" -I"../src/system_config/e-wi/framework" -I"../../../../bsp/eagleeye2014" -MMD -MF "${OBJECTDIR}/_ext/571308596/drv_nvm.o.d" -o ${OBJECTDIR}/_ext/571308596/drv_nvm.o ../../../../framework/driver/nvm/src/dynamic/drv_nvm.c    -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/571308596/drv_nvm_erasewrite.o: ../../../../framework/driver/nvm/src/dynamic/drv_nvm_erasewrite.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/571308596" 
	@${RM} ${OBJECTDIR}/_ext/571308596/drv_nvm_erasewrite.o.d 
	@${RM} ${OBJECTDIR}/_ext/571308596/drv_nvm_erasewrite.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/571308596/drv_nvm_erasewrite.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -I"../src" -I"../src/system_config/e-wi" -I"../../../../framework" -I"../src/system_config/e-wi/framework" -I"../../../../bsp/eagleeye2014" -MMD -MF "${OBJECTDIR}/_ext/571308596/drv_nvm_erasewrite.o.d" -o ${OBJECTDIR}/_ext/571308596/drv_nvm_erasewrite.o ../../../../framework/driver/nvm/src/dynamic/drv_nvm_erasewrite.c    -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD) 
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compileCPP
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/EagleEye2014.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mdebugger -D__MPLAB_DEBUGGER_REAL_ICE=1 -mprocessor=$(MP_PROCESSOR_OPTION)  -o dist/${CND_CONF}/${IMAGE_TYPE}/EagleEye2014.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD)    -mreserve=boot@0x1FC02000:0x1FC02FEF -mreserve=boot@0x1FC02000:0x1FC024FF  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,--defsym=__MPLAB_DEBUGGER_REAL_ICE=1,--defsym=_min_heap_size=53248,--gc-sections,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map"
	
else
dist/${CND_CONF}/${IMAGE_TYPE}/EagleEye2014.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mprocessor=$(MP_PROCESSOR_OPTION)  -o dist/${CND_CONF}/${IMAGE_TYPE}/EagleEye2014.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_e_wi_nvm=$(CND_CONF)    $(COMPARISON_BUILD)  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=_min_heap_size=53248,--gc-sections,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map"
	${MP_CC_DIR}\\xc32-bin2hex dist/${CND_CONF}/${IMAGE_TYPE}/EagleEye2014.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} 
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/e_wi_nvm
	${RM} -r dist/e_wi_nvm

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
