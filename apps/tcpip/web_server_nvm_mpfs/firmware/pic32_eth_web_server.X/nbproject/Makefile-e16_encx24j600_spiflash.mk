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
ifeq "$(wildcard nbproject/Makefile-local-e16_encx24j600_spiflash.mk)" "nbproject/Makefile-local-e16_encx24j600_spiflash.mk"
include nbproject/Makefile-local-e16_encx24j600_spiflash.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=e16_encx24j600_spiflash
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/pic32_eth_web_server.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/pic32_eth_web_server.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
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
SOURCEFILES_QUOTED_IF_SPACED=../src/system_config/e16_encx24j600_spiflash/framework/driver/flash/src/drv_flash_static.c ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_tasks.c ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_api.c ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_master_ebm_tasks.c ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_master_rm_tasks.c ../src/system_config/e16_encx24j600_spiflash/framework/net/pres/net_pres_enc_glue.c ../src/system_config/e16_encx24j600_spiflash/framework/net/pres/net_pres_cert_store.c ../src/system_config/e16_encx24j600_spiflash/framework/system/clk/src/sys_clk_static.c ../src/system_config/e16_encx24j600_spiflash/framework/system/ports/src/sys_ports_static.c ../src/system_config/e16_encx24j600_spiflash/system_init.c ../src/system_config/e16_encx24j600_spiflash/system_interrupt.c ../src/system_config/e16_encx24j600_spiflash/system_exceptions.c ../src/system_config/e16_encx24j600_spiflash/system_tasks.c ../src/app.c ../src/main.c ../src/http_print.c ../src/custom_http_app.c ../src/mpfs_img2.c ../../../../../bsp/pic32mx795_pim+e16/bsp_sys_init.c ../../../../../framework/crypto/src/random.c ../../../../../framework/crypto/src/arc4.c ../../../../../framework/crypto/src/crypto.c ../../../../../framework/crypto/src/md5.c ../../../../../framework/crypto/src/sha.c ../../../../../framework/crypto/src/coding.c ../../../../../framework/crypto/src/error.c ../../../../../framework/crypto/src/integer.c ../../../../../framework/crypto/src/logging.c ../../../../../framework/crypto/src/memory.c ../../../../../framework/crypto/src/misc.c ../../../../../framework/crypto/src/port.c ../../../../../framework/crypto/src/ecc.c ../../../../../framework/crypto/src/pwdbased.c ../../../../../framework/crypto/src/tfm.c ../../../../../framework/crypto/src/asn.c ../../../../../framework/crypto/src/des3.c ../../../../../framework/crypto/src/rsa.c ../../../../../framework/crypto/src/aes.c ../../../../../framework/crypto/src/sha256.c ../../../../../framework/crypto/src/sha512.c ../../../../../framework/crypto/src/hmac.c ../../../../../framework/crypto/src/hash.c ../../../../../framework/crypto/src/compress.c ../../../../../framework/driver/encx24j600/src/dynamic/bus/spi/drv_encx24j600_spi_bus.c ../../../../../framework/driver/encx24j600/src/dynamic/closed_state/drv_encx24j600_closed_state.c ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_initialization_state.c ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_configure_state.c ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_detect_state.c ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_reset_state.c ../../../../../framework/driver/encx24j600/src/dynamic/packet/drv_encx24j600_tx_packet.c ../../../../../framework/driver/encx24j600/src/dynamic/packet/drv_encx24j600_rx_packet.c ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_running_state.c ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_change_duplex_state.c ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_check_int_state.c ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_check_status_state.c ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_check_tx_status_state.c ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_reset_rx_state.c ../../../../../framework/driver/encx24j600/src/dynamic/drv_encx24j600_api.c ../../../../../framework/driver/encx24j600/src/dynamic/drv_encx24j600_main_state.c ../../../../../framework/driver/encx24j600/src/dynamic/drv_encx24j600_utils.c ../../../../../framework/driver/spi/src/dynamic/drv_spi.c ../../../../../framework/driver/spi/src/drv_spi_sys_queue_fifo.c ../../../../../framework/driver/spi_flash/sst25vf016b/src/dynamic/drv_sst25vf016b.c ../../../../../framework/driver/spi_flash/sst25vf016b/src/mla/SPIFlash.c ../../../../../framework/driver/tmr/src/dynamic/drv_tmr.c ../../../../../framework/driver/usart/src/dynamic/drv_usart.c ../../../../../framework/driver/usart/src/dynamic/drv_usart_buffer_queue.c ../../../../../framework/driver/usart/src/dynamic/drv_usart_read_write.c ../../../../../framework/driver/usart/src/mla/UART.c ../../../../../framework/net/pres/src/net_pres.c ../../../../../framework/system/command/src/sys_command.c ../../../../../framework/system/common/src/sys_buffer.c ../../../../../framework/system/common/src/sys_queue.c ../../../../../framework/system/console/src/sys_console.c ../../../../../framework/system/console/src/sys_console_uart.c ../../../../../framework/system/debug/src/sys_debug.c ../../../../../framework/system/devcon/src/sys_devcon.c ../../../../../framework/system/devcon/src/sys_devcon_pic32mx.c ../../../../../framework/system/fs/src/dynamic/sys_fs.c ../../../../../framework/system/fs/src/dynamic/sys_fs_media_manager.c ../../../../../framework/system/fs/mpfs/src/mpfs.c ../../../../../framework/system/int/src/sys_int_pic32.c ../../../../../framework/system/random/src/sys_random.c ../../../../../framework/system/reset/src/sys_reset.c ../../../../../framework/system/tmr/src/sys_tmr.c ../../../../../framework/tcpip/src/common/sys_fs_wrapper.c ../../../../../framework/tcpip/src/common/helpers.c ../../../../../framework/tcpip/src/tcp.c ../../../../../framework/tcpip/src/udp.c ../../../../../framework/tcpip/src/arp.c ../../../../../framework/tcpip/src/dhcp.c ../../../../../framework/tcpip/src/dns.c ../../../../../framework/tcpip/src/http.c ../../../../../framework/tcpip/src/nbns.c ../../../../../framework/tcpip/src/smtp.c ../../../../../framework/tcpip/src/tcpip_announce.c ../../../../../framework/tcpip/src/tcpip_commands.c ../../../../../framework/tcpip/src/hash_fnv.c ../../../../../framework/tcpip/src/oahash.c ../../../../../framework/tcpip/src/tcpip_heap_alloc.c ../../../../../framework/tcpip/src/tcpip_helpers.c ../../../../../framework/tcpip/src/tcpip_helper_c32.S ../../../../../framework/tcpip/src/tcpip_manager.c ../../../../../framework/tcpip/src/tcpip_notify.c ../../../../../framework/tcpip/src/tcpip_packet.c ../../../../../framework/tcpip/src/ipv4.c ../../../../../framework/tcpip/src/sntp.c ../../../../../framework/tcpip/src/tcpip_heap_internal.c ../../../../../framework/tcpip/src/icmp.c ../../../../../framework/tcpip/src/dhcps.c ../../../../../framework/tcpip/src/ddns.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/asm.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/blake2b.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/camellia.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/chacha.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/chacha20_poly1305.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/curve25519.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/dh.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/dsa.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ecc_fp.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ed25519.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/fe_low_mem.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/fe_operations.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ge_low_mem.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ge_operations.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/hc128.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/md2.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/md4.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/pkcs7.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/poly1305.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/rabbit.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ripemd.c ../../../../../third_party/tcpip/wolfssl/src/crl.c ../../../../../third_party/tcpip/wolfssl/src/internal.c ../../../../../third_party/tcpip/wolfssl/src/io.c ../../../../../third_party/tcpip/wolfssl/src/keys.c ../../../../../third_party/tcpip/wolfssl/src/ocsp.c ../../../../../third_party/tcpip/wolfssl/src/sniffer.c ../../../../../third_party/tcpip/wolfssl/src/ssl.c ../../../../../third_party/tcpip/wolfssl/src/tls.c ../../../../../framework/crypto/src/asm.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/_ext/1495834797/drv_flash_static.o ${OBJECTDIR}/_ext/1676865386/drv_spi_tasks.o ${OBJECTDIR}/_ext/1676865386/drv_spi_api.o ${OBJECTDIR}/_ext/1676865386/drv_spi_master_ebm_tasks.o ${OBJECTDIR}/_ext/1676865386/drv_spi_master_rm_tasks.o ${OBJECTDIR}/_ext/971131287/net_pres_enc_glue.o ${OBJECTDIR}/_ext/971131287/net_pres_cert_store.o ${OBJECTDIR}/_ext/360868340/sys_clk_static.o ${OBJECTDIR}/_ext/394705988/sys_ports_static.o ${OBJECTDIR}/_ext/689678155/system_init.o ${OBJECTDIR}/_ext/689678155/system_interrupt.o ${OBJECTDIR}/_ext/689678155/system_exceptions.o ${OBJECTDIR}/_ext/689678155/system_tasks.o ${OBJECTDIR}/_ext/1360937237/app.o ${OBJECTDIR}/_ext/1360937237/main.o ${OBJECTDIR}/_ext/1360937237/http_print.o ${OBJECTDIR}/_ext/1360937237/custom_http_app.o ${OBJECTDIR}/_ext/1360937237/mpfs_img2.o ${OBJECTDIR}/_ext/728775826/bsp_sys_init.o ${OBJECTDIR}/_ext/29024758/random.o ${OBJECTDIR}/_ext/29024758/arc4.o ${OBJECTDIR}/_ext/29024758/crypto.o ${OBJECTDIR}/_ext/29024758/md5.o ${OBJECTDIR}/_ext/29024758/sha.o ${OBJECTDIR}/_ext/29024758/coding.o ${OBJECTDIR}/_ext/29024758/error.o ${OBJECTDIR}/_ext/29024758/integer.o ${OBJECTDIR}/_ext/29024758/logging.o ${OBJECTDIR}/_ext/29024758/memory.o ${OBJECTDIR}/_ext/29024758/misc.o ${OBJECTDIR}/_ext/29024758/port.o ${OBJECTDIR}/_ext/29024758/ecc.o ${OBJECTDIR}/_ext/29024758/pwdbased.o ${OBJECTDIR}/_ext/29024758/tfm.o ${OBJECTDIR}/_ext/29024758/asn.o ${OBJECTDIR}/_ext/29024758/des3.o ${OBJECTDIR}/_ext/29024758/rsa.o ${OBJECTDIR}/_ext/29024758/aes.o ${OBJECTDIR}/_ext/29024758/sha256.o ${OBJECTDIR}/_ext/29024758/sha512.o ${OBJECTDIR}/_ext/29024758/hmac.o ${OBJECTDIR}/_ext/29024758/hash.o ${OBJECTDIR}/_ext/29024758/compress.o ${OBJECTDIR}/_ext/2115314394/drv_encx24j600_spi_bus.o ${OBJECTDIR}/_ext/1455582699/drv_encx24j600_closed_state.o ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_initialization_state.o ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_configure_state.o ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_detect_state.o ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_reset_state.o ${OBJECTDIR}/_ext/1210338337/drv_encx24j600_tx_packet.o ${OBJECTDIR}/_ext/1210338337/drv_encx24j600_rx_packet.o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_running_state.o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_change_duplex_state.o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_int_state.o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_status_state.o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_tx_status_state.o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_reset_rx_state.o ${OBJECTDIR}/_ext/772120936/drv_encx24j600_api.o ${OBJECTDIR}/_ext/772120936/drv_encx24j600_main_state.o ${OBJECTDIR}/_ext/772120936/drv_encx24j600_utils.o ${OBJECTDIR}/_ext/1324760662/drv_spi.o ${OBJECTDIR}/_ext/1385053818/drv_spi_sys_queue_fifo.o ${OBJECTDIR}/_ext/1112873152/drv_sst25vf016b.o ${OBJECTDIR}/_ext/1335609251/SPIFlash.o ${OBJECTDIR}/_ext/941160041/drv_tmr.o ${OBJECTDIR}/_ext/821589181/drv_usart.o ${OBJECTDIR}/_ext/821589181/drv_usart_buffer_queue.o ${OBJECTDIR}/_ext/821589181/drv_usart_read_write.o ${OBJECTDIR}/_ext/1595536294/UART.o ${OBJECTDIR}/_ext/871719959/net_pres.o ${OBJECTDIR}/_ext/1891376032/sys_command.o ${OBJECTDIR}/_ext/598853952/sys_buffer.o ${OBJECTDIR}/_ext/598853952/sys_queue.o ${OBJECTDIR}/_ext/1434663852/sys_console.o ${OBJECTDIR}/_ext/1434663852/sys_console_uart.o ${OBJECTDIR}/_ext/2137108136/sys_debug.o ${OBJECTDIR}/_ext/482662494/sys_devcon.o ${OBJECTDIR}/_ext/482662494/sys_devcon_pic32mx.o ${OBJECTDIR}/_ext/1750042194/sys_fs.o ${OBJECTDIR}/_ext/1750042194/sys_fs_media_manager.o ${OBJECTDIR}/_ext/614935175/mpfs.o ${OBJECTDIR}/_ext/1042686532/sys_int_pic32.o ${OBJECTDIR}/_ext/470001640/sys_random.o ${OBJECTDIR}/_ext/64182180/sys_reset.o ${OBJECTDIR}/_ext/2110151058/sys_tmr.o ${OBJECTDIR}/_ext/1886247299/sys_fs_wrapper.o ${OBJECTDIR}/_ext/1886247299/helpers.o ${OBJECTDIR}/_ext/1164207549/tcp.o ${OBJECTDIR}/_ext/1164207549/udp.o ${OBJECTDIR}/_ext/1164207549/arp.o ${OBJECTDIR}/_ext/1164207549/dhcp.o ${OBJECTDIR}/_ext/1164207549/dns.o ${OBJECTDIR}/_ext/1164207549/http.o ${OBJECTDIR}/_ext/1164207549/nbns.o ${OBJECTDIR}/_ext/1164207549/smtp.o ${OBJECTDIR}/_ext/1164207549/tcpip_announce.o ${OBJECTDIR}/_ext/1164207549/tcpip_commands.o ${OBJECTDIR}/_ext/1164207549/hash_fnv.o ${OBJECTDIR}/_ext/1164207549/oahash.o ${OBJECTDIR}/_ext/1164207549/tcpip_heap_alloc.o ${OBJECTDIR}/_ext/1164207549/tcpip_helpers.o ${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o ${OBJECTDIR}/_ext/1164207549/tcpip_manager.o ${OBJECTDIR}/_ext/1164207549/tcpip_notify.o ${OBJECTDIR}/_ext/1164207549/tcpip_packet.o ${OBJECTDIR}/_ext/1164207549/ipv4.o ${OBJECTDIR}/_ext/1164207549/sntp.o ${OBJECTDIR}/_ext/1164207549/tcpip_heap_internal.o ${OBJECTDIR}/_ext/1164207549/icmp.o ${OBJECTDIR}/_ext/1164207549/dhcps.o ${OBJECTDIR}/_ext/1164207549/ddns.o ${OBJECTDIR}/_ext/1699919941/asm.o ${OBJECTDIR}/_ext/1699919941/blake2b.o ${OBJECTDIR}/_ext/1699919941/camellia.o ${OBJECTDIR}/_ext/1699919941/chacha.o ${OBJECTDIR}/_ext/1699919941/chacha20_poly1305.o ${OBJECTDIR}/_ext/1699919941/curve25519.o ${OBJECTDIR}/_ext/1699919941/dh.o ${OBJECTDIR}/_ext/1699919941/dsa.o ${OBJECTDIR}/_ext/1699919941/ecc_fp.o ${OBJECTDIR}/_ext/1699919941/ed25519.o ${OBJECTDIR}/_ext/1699919941/fe_low_mem.o ${OBJECTDIR}/_ext/1699919941/fe_operations.o ${OBJECTDIR}/_ext/1699919941/ge_low_mem.o ${OBJECTDIR}/_ext/1699919941/ge_operations.o ${OBJECTDIR}/_ext/1699919941/hc128.o ${OBJECTDIR}/_ext/1699919941/md2.o ${OBJECTDIR}/_ext/1699919941/md4.o ${OBJECTDIR}/_ext/1699919941/pkcs7.o ${OBJECTDIR}/_ext/1699919941/poly1305.o ${OBJECTDIR}/_ext/1699919941/rabbit.o ${OBJECTDIR}/_ext/1699919941/ripemd.o ${OBJECTDIR}/_ext/615233400/crl.o ${OBJECTDIR}/_ext/615233400/internal.o ${OBJECTDIR}/_ext/615233400/io.o ${OBJECTDIR}/_ext/615233400/keys.o ${OBJECTDIR}/_ext/615233400/ocsp.o ${OBJECTDIR}/_ext/615233400/sniffer.o ${OBJECTDIR}/_ext/615233400/ssl.o ${OBJECTDIR}/_ext/615233400/tls.o ${OBJECTDIR}/_ext/29024758/asm.o
POSSIBLE_DEPFILES=${OBJECTDIR}/_ext/1495834797/drv_flash_static.o.d ${OBJECTDIR}/_ext/1676865386/drv_spi_tasks.o.d ${OBJECTDIR}/_ext/1676865386/drv_spi_api.o.d ${OBJECTDIR}/_ext/1676865386/drv_spi_master_ebm_tasks.o.d ${OBJECTDIR}/_ext/1676865386/drv_spi_master_rm_tasks.o.d ${OBJECTDIR}/_ext/971131287/net_pres_enc_glue.o.d ${OBJECTDIR}/_ext/971131287/net_pres_cert_store.o.d ${OBJECTDIR}/_ext/360868340/sys_clk_static.o.d ${OBJECTDIR}/_ext/394705988/sys_ports_static.o.d ${OBJECTDIR}/_ext/689678155/system_init.o.d ${OBJECTDIR}/_ext/689678155/system_interrupt.o.d ${OBJECTDIR}/_ext/689678155/system_exceptions.o.d ${OBJECTDIR}/_ext/689678155/system_tasks.o.d ${OBJECTDIR}/_ext/1360937237/app.o.d ${OBJECTDIR}/_ext/1360937237/main.o.d ${OBJECTDIR}/_ext/1360937237/http_print.o.d ${OBJECTDIR}/_ext/1360937237/custom_http_app.o.d ${OBJECTDIR}/_ext/1360937237/mpfs_img2.o.d ${OBJECTDIR}/_ext/728775826/bsp_sys_init.o.d ${OBJECTDIR}/_ext/29024758/random.o.d ${OBJECTDIR}/_ext/29024758/arc4.o.d ${OBJECTDIR}/_ext/29024758/crypto.o.d ${OBJECTDIR}/_ext/29024758/md5.o.d ${OBJECTDIR}/_ext/29024758/sha.o.d ${OBJECTDIR}/_ext/29024758/coding.o.d ${OBJECTDIR}/_ext/29024758/error.o.d ${OBJECTDIR}/_ext/29024758/integer.o.d ${OBJECTDIR}/_ext/29024758/logging.o.d ${OBJECTDIR}/_ext/29024758/memory.o.d ${OBJECTDIR}/_ext/29024758/misc.o.d ${OBJECTDIR}/_ext/29024758/port.o.d ${OBJECTDIR}/_ext/29024758/ecc.o.d ${OBJECTDIR}/_ext/29024758/pwdbased.o.d ${OBJECTDIR}/_ext/29024758/tfm.o.d ${OBJECTDIR}/_ext/29024758/asn.o.d ${OBJECTDIR}/_ext/29024758/des3.o.d ${OBJECTDIR}/_ext/29024758/rsa.o.d ${OBJECTDIR}/_ext/29024758/aes.o.d ${OBJECTDIR}/_ext/29024758/sha256.o.d ${OBJECTDIR}/_ext/29024758/sha512.o.d ${OBJECTDIR}/_ext/29024758/hmac.o.d ${OBJECTDIR}/_ext/29024758/hash.o.d ${OBJECTDIR}/_ext/29024758/compress.o.d ${OBJECTDIR}/_ext/2115314394/drv_encx24j600_spi_bus.o.d ${OBJECTDIR}/_ext/1455582699/drv_encx24j600_closed_state.o.d ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_initialization_state.o.d ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_configure_state.o.d ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_detect_state.o.d ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_reset_state.o.d ${OBJECTDIR}/_ext/1210338337/drv_encx24j600_tx_packet.o.d ${OBJECTDIR}/_ext/1210338337/drv_encx24j600_rx_packet.o.d ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_running_state.o.d ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_change_duplex_state.o.d ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_int_state.o.d ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_status_state.o.d ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_tx_status_state.o.d ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_reset_rx_state.o.d ${OBJECTDIR}/_ext/772120936/drv_encx24j600_api.o.d ${OBJECTDIR}/_ext/772120936/drv_encx24j600_main_state.o.d ${OBJECTDIR}/_ext/772120936/drv_encx24j600_utils.o.d ${OBJECTDIR}/_ext/1324760662/drv_spi.o.d ${OBJECTDIR}/_ext/1385053818/drv_spi_sys_queue_fifo.o.d ${OBJECTDIR}/_ext/1112873152/drv_sst25vf016b.o.d ${OBJECTDIR}/_ext/1335609251/SPIFlash.o.d ${OBJECTDIR}/_ext/941160041/drv_tmr.o.d ${OBJECTDIR}/_ext/821589181/drv_usart.o.d ${OBJECTDIR}/_ext/821589181/drv_usart_buffer_queue.o.d ${OBJECTDIR}/_ext/821589181/drv_usart_read_write.o.d ${OBJECTDIR}/_ext/1595536294/UART.o.d ${OBJECTDIR}/_ext/871719959/net_pres.o.d ${OBJECTDIR}/_ext/1891376032/sys_command.o.d ${OBJECTDIR}/_ext/598853952/sys_buffer.o.d ${OBJECTDIR}/_ext/598853952/sys_queue.o.d ${OBJECTDIR}/_ext/1434663852/sys_console.o.d ${OBJECTDIR}/_ext/1434663852/sys_console_uart.o.d ${OBJECTDIR}/_ext/2137108136/sys_debug.o.d ${OBJECTDIR}/_ext/482662494/sys_devcon.o.d ${OBJECTDIR}/_ext/482662494/sys_devcon_pic32mx.o.d ${OBJECTDIR}/_ext/1750042194/sys_fs.o.d ${OBJECTDIR}/_ext/1750042194/sys_fs_media_manager.o.d ${OBJECTDIR}/_ext/614935175/mpfs.o.d ${OBJECTDIR}/_ext/1042686532/sys_int_pic32.o.d ${OBJECTDIR}/_ext/470001640/sys_random.o.d ${OBJECTDIR}/_ext/64182180/sys_reset.o.d ${OBJECTDIR}/_ext/2110151058/sys_tmr.o.d ${OBJECTDIR}/_ext/1886247299/sys_fs_wrapper.o.d ${OBJECTDIR}/_ext/1886247299/helpers.o.d ${OBJECTDIR}/_ext/1164207549/tcp.o.d ${OBJECTDIR}/_ext/1164207549/udp.o.d ${OBJECTDIR}/_ext/1164207549/arp.o.d ${OBJECTDIR}/_ext/1164207549/dhcp.o.d ${OBJECTDIR}/_ext/1164207549/dns.o.d ${OBJECTDIR}/_ext/1164207549/http.o.d ${OBJECTDIR}/_ext/1164207549/nbns.o.d ${OBJECTDIR}/_ext/1164207549/smtp.o.d ${OBJECTDIR}/_ext/1164207549/tcpip_announce.o.d ${OBJECTDIR}/_ext/1164207549/tcpip_commands.o.d ${OBJECTDIR}/_ext/1164207549/hash_fnv.o.d ${OBJECTDIR}/_ext/1164207549/oahash.o.d ${OBJECTDIR}/_ext/1164207549/tcpip_heap_alloc.o.d ${OBJECTDIR}/_ext/1164207549/tcpip_helpers.o.d ${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o.d ${OBJECTDIR}/_ext/1164207549/tcpip_manager.o.d ${OBJECTDIR}/_ext/1164207549/tcpip_notify.o.d ${OBJECTDIR}/_ext/1164207549/tcpip_packet.o.d ${OBJECTDIR}/_ext/1164207549/ipv4.o.d ${OBJECTDIR}/_ext/1164207549/sntp.o.d ${OBJECTDIR}/_ext/1164207549/tcpip_heap_internal.o.d ${OBJECTDIR}/_ext/1164207549/icmp.o.d ${OBJECTDIR}/_ext/1164207549/dhcps.o.d ${OBJECTDIR}/_ext/1164207549/ddns.o.d ${OBJECTDIR}/_ext/1699919941/asm.o.d ${OBJECTDIR}/_ext/1699919941/blake2b.o.d ${OBJECTDIR}/_ext/1699919941/camellia.o.d ${OBJECTDIR}/_ext/1699919941/chacha.o.d ${OBJECTDIR}/_ext/1699919941/chacha20_poly1305.o.d ${OBJECTDIR}/_ext/1699919941/curve25519.o.d ${OBJECTDIR}/_ext/1699919941/dh.o.d ${OBJECTDIR}/_ext/1699919941/dsa.o.d ${OBJECTDIR}/_ext/1699919941/ecc_fp.o.d ${OBJECTDIR}/_ext/1699919941/ed25519.o.d ${OBJECTDIR}/_ext/1699919941/fe_low_mem.o.d ${OBJECTDIR}/_ext/1699919941/fe_operations.o.d ${OBJECTDIR}/_ext/1699919941/ge_low_mem.o.d ${OBJECTDIR}/_ext/1699919941/ge_operations.o.d ${OBJECTDIR}/_ext/1699919941/hc128.o.d ${OBJECTDIR}/_ext/1699919941/md2.o.d ${OBJECTDIR}/_ext/1699919941/md4.o.d ${OBJECTDIR}/_ext/1699919941/pkcs7.o.d ${OBJECTDIR}/_ext/1699919941/poly1305.o.d ${OBJECTDIR}/_ext/1699919941/rabbit.o.d ${OBJECTDIR}/_ext/1699919941/ripemd.o.d ${OBJECTDIR}/_ext/615233400/crl.o.d ${OBJECTDIR}/_ext/615233400/internal.o.d ${OBJECTDIR}/_ext/615233400/io.o.d ${OBJECTDIR}/_ext/615233400/keys.o.d ${OBJECTDIR}/_ext/615233400/ocsp.o.d ${OBJECTDIR}/_ext/615233400/sniffer.o.d ${OBJECTDIR}/_ext/615233400/ssl.o.d ${OBJECTDIR}/_ext/615233400/tls.o.d ${OBJECTDIR}/_ext/29024758/asm.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/_ext/1495834797/drv_flash_static.o ${OBJECTDIR}/_ext/1676865386/drv_spi_tasks.o ${OBJECTDIR}/_ext/1676865386/drv_spi_api.o ${OBJECTDIR}/_ext/1676865386/drv_spi_master_ebm_tasks.o ${OBJECTDIR}/_ext/1676865386/drv_spi_master_rm_tasks.o ${OBJECTDIR}/_ext/971131287/net_pres_enc_glue.o ${OBJECTDIR}/_ext/971131287/net_pres_cert_store.o ${OBJECTDIR}/_ext/360868340/sys_clk_static.o ${OBJECTDIR}/_ext/394705988/sys_ports_static.o ${OBJECTDIR}/_ext/689678155/system_init.o ${OBJECTDIR}/_ext/689678155/system_interrupt.o ${OBJECTDIR}/_ext/689678155/system_exceptions.o ${OBJECTDIR}/_ext/689678155/system_tasks.o ${OBJECTDIR}/_ext/1360937237/app.o ${OBJECTDIR}/_ext/1360937237/main.o ${OBJECTDIR}/_ext/1360937237/http_print.o ${OBJECTDIR}/_ext/1360937237/custom_http_app.o ${OBJECTDIR}/_ext/1360937237/mpfs_img2.o ${OBJECTDIR}/_ext/728775826/bsp_sys_init.o ${OBJECTDIR}/_ext/29024758/random.o ${OBJECTDIR}/_ext/29024758/arc4.o ${OBJECTDIR}/_ext/29024758/crypto.o ${OBJECTDIR}/_ext/29024758/md5.o ${OBJECTDIR}/_ext/29024758/sha.o ${OBJECTDIR}/_ext/29024758/coding.o ${OBJECTDIR}/_ext/29024758/error.o ${OBJECTDIR}/_ext/29024758/integer.o ${OBJECTDIR}/_ext/29024758/logging.o ${OBJECTDIR}/_ext/29024758/memory.o ${OBJECTDIR}/_ext/29024758/misc.o ${OBJECTDIR}/_ext/29024758/port.o ${OBJECTDIR}/_ext/29024758/ecc.o ${OBJECTDIR}/_ext/29024758/pwdbased.o ${OBJECTDIR}/_ext/29024758/tfm.o ${OBJECTDIR}/_ext/29024758/asn.o ${OBJECTDIR}/_ext/29024758/des3.o ${OBJECTDIR}/_ext/29024758/rsa.o ${OBJECTDIR}/_ext/29024758/aes.o ${OBJECTDIR}/_ext/29024758/sha256.o ${OBJECTDIR}/_ext/29024758/sha512.o ${OBJECTDIR}/_ext/29024758/hmac.o ${OBJECTDIR}/_ext/29024758/hash.o ${OBJECTDIR}/_ext/29024758/compress.o ${OBJECTDIR}/_ext/2115314394/drv_encx24j600_spi_bus.o ${OBJECTDIR}/_ext/1455582699/drv_encx24j600_closed_state.o ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_initialization_state.o ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_configure_state.o ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_detect_state.o ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_reset_state.o ${OBJECTDIR}/_ext/1210338337/drv_encx24j600_tx_packet.o ${OBJECTDIR}/_ext/1210338337/drv_encx24j600_rx_packet.o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_running_state.o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_change_duplex_state.o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_int_state.o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_status_state.o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_tx_status_state.o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_reset_rx_state.o ${OBJECTDIR}/_ext/772120936/drv_encx24j600_api.o ${OBJECTDIR}/_ext/772120936/drv_encx24j600_main_state.o ${OBJECTDIR}/_ext/772120936/drv_encx24j600_utils.o ${OBJECTDIR}/_ext/1324760662/drv_spi.o ${OBJECTDIR}/_ext/1385053818/drv_spi_sys_queue_fifo.o ${OBJECTDIR}/_ext/1112873152/drv_sst25vf016b.o ${OBJECTDIR}/_ext/1335609251/SPIFlash.o ${OBJECTDIR}/_ext/941160041/drv_tmr.o ${OBJECTDIR}/_ext/821589181/drv_usart.o ${OBJECTDIR}/_ext/821589181/drv_usart_buffer_queue.o ${OBJECTDIR}/_ext/821589181/drv_usart_read_write.o ${OBJECTDIR}/_ext/1595536294/UART.o ${OBJECTDIR}/_ext/871719959/net_pres.o ${OBJECTDIR}/_ext/1891376032/sys_command.o ${OBJECTDIR}/_ext/598853952/sys_buffer.o ${OBJECTDIR}/_ext/598853952/sys_queue.o ${OBJECTDIR}/_ext/1434663852/sys_console.o ${OBJECTDIR}/_ext/1434663852/sys_console_uart.o ${OBJECTDIR}/_ext/2137108136/sys_debug.o ${OBJECTDIR}/_ext/482662494/sys_devcon.o ${OBJECTDIR}/_ext/482662494/sys_devcon_pic32mx.o ${OBJECTDIR}/_ext/1750042194/sys_fs.o ${OBJECTDIR}/_ext/1750042194/sys_fs_media_manager.o ${OBJECTDIR}/_ext/614935175/mpfs.o ${OBJECTDIR}/_ext/1042686532/sys_int_pic32.o ${OBJECTDIR}/_ext/470001640/sys_random.o ${OBJECTDIR}/_ext/64182180/sys_reset.o ${OBJECTDIR}/_ext/2110151058/sys_tmr.o ${OBJECTDIR}/_ext/1886247299/sys_fs_wrapper.o ${OBJECTDIR}/_ext/1886247299/helpers.o ${OBJECTDIR}/_ext/1164207549/tcp.o ${OBJECTDIR}/_ext/1164207549/udp.o ${OBJECTDIR}/_ext/1164207549/arp.o ${OBJECTDIR}/_ext/1164207549/dhcp.o ${OBJECTDIR}/_ext/1164207549/dns.o ${OBJECTDIR}/_ext/1164207549/http.o ${OBJECTDIR}/_ext/1164207549/nbns.o ${OBJECTDIR}/_ext/1164207549/smtp.o ${OBJECTDIR}/_ext/1164207549/tcpip_announce.o ${OBJECTDIR}/_ext/1164207549/tcpip_commands.o ${OBJECTDIR}/_ext/1164207549/hash_fnv.o ${OBJECTDIR}/_ext/1164207549/oahash.o ${OBJECTDIR}/_ext/1164207549/tcpip_heap_alloc.o ${OBJECTDIR}/_ext/1164207549/tcpip_helpers.o ${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o ${OBJECTDIR}/_ext/1164207549/tcpip_manager.o ${OBJECTDIR}/_ext/1164207549/tcpip_notify.o ${OBJECTDIR}/_ext/1164207549/tcpip_packet.o ${OBJECTDIR}/_ext/1164207549/ipv4.o ${OBJECTDIR}/_ext/1164207549/sntp.o ${OBJECTDIR}/_ext/1164207549/tcpip_heap_internal.o ${OBJECTDIR}/_ext/1164207549/icmp.o ${OBJECTDIR}/_ext/1164207549/dhcps.o ${OBJECTDIR}/_ext/1164207549/ddns.o ${OBJECTDIR}/_ext/1699919941/asm.o ${OBJECTDIR}/_ext/1699919941/blake2b.o ${OBJECTDIR}/_ext/1699919941/camellia.o ${OBJECTDIR}/_ext/1699919941/chacha.o ${OBJECTDIR}/_ext/1699919941/chacha20_poly1305.o ${OBJECTDIR}/_ext/1699919941/curve25519.o ${OBJECTDIR}/_ext/1699919941/dh.o ${OBJECTDIR}/_ext/1699919941/dsa.o ${OBJECTDIR}/_ext/1699919941/ecc_fp.o ${OBJECTDIR}/_ext/1699919941/ed25519.o ${OBJECTDIR}/_ext/1699919941/fe_low_mem.o ${OBJECTDIR}/_ext/1699919941/fe_operations.o ${OBJECTDIR}/_ext/1699919941/ge_low_mem.o ${OBJECTDIR}/_ext/1699919941/ge_operations.o ${OBJECTDIR}/_ext/1699919941/hc128.o ${OBJECTDIR}/_ext/1699919941/md2.o ${OBJECTDIR}/_ext/1699919941/md4.o ${OBJECTDIR}/_ext/1699919941/pkcs7.o ${OBJECTDIR}/_ext/1699919941/poly1305.o ${OBJECTDIR}/_ext/1699919941/rabbit.o ${OBJECTDIR}/_ext/1699919941/ripemd.o ${OBJECTDIR}/_ext/615233400/crl.o ${OBJECTDIR}/_ext/615233400/internal.o ${OBJECTDIR}/_ext/615233400/io.o ${OBJECTDIR}/_ext/615233400/keys.o ${OBJECTDIR}/_ext/615233400/ocsp.o ${OBJECTDIR}/_ext/615233400/sniffer.o ${OBJECTDIR}/_ext/615233400/ssl.o ${OBJECTDIR}/_ext/615233400/tls.o ${OBJECTDIR}/_ext/29024758/asm.o

# Source Files
SOURCEFILES=../src/system_config/e16_encx24j600_spiflash/framework/driver/flash/src/drv_flash_static.c ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_tasks.c ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_api.c ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_master_ebm_tasks.c ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_master_rm_tasks.c ../src/system_config/e16_encx24j600_spiflash/framework/net/pres/net_pres_enc_glue.c ../src/system_config/e16_encx24j600_spiflash/framework/net/pres/net_pres_cert_store.c ../src/system_config/e16_encx24j600_spiflash/framework/system/clk/src/sys_clk_static.c ../src/system_config/e16_encx24j600_spiflash/framework/system/ports/src/sys_ports_static.c ../src/system_config/e16_encx24j600_spiflash/system_init.c ../src/system_config/e16_encx24j600_spiflash/system_interrupt.c ../src/system_config/e16_encx24j600_spiflash/system_exceptions.c ../src/system_config/e16_encx24j600_spiflash/system_tasks.c ../src/app.c ../src/main.c ../src/http_print.c ../src/custom_http_app.c ../src/mpfs_img2.c ../../../../../bsp/pic32mx795_pim+e16/bsp_sys_init.c ../../../../../framework/crypto/src/random.c ../../../../../framework/crypto/src/arc4.c ../../../../../framework/crypto/src/crypto.c ../../../../../framework/crypto/src/md5.c ../../../../../framework/crypto/src/sha.c ../../../../../framework/crypto/src/coding.c ../../../../../framework/crypto/src/error.c ../../../../../framework/crypto/src/integer.c ../../../../../framework/crypto/src/logging.c ../../../../../framework/crypto/src/memory.c ../../../../../framework/crypto/src/misc.c ../../../../../framework/crypto/src/port.c ../../../../../framework/crypto/src/ecc.c ../../../../../framework/crypto/src/pwdbased.c ../../../../../framework/crypto/src/tfm.c ../../../../../framework/crypto/src/asn.c ../../../../../framework/crypto/src/des3.c ../../../../../framework/crypto/src/rsa.c ../../../../../framework/crypto/src/aes.c ../../../../../framework/crypto/src/sha256.c ../../../../../framework/crypto/src/sha512.c ../../../../../framework/crypto/src/hmac.c ../../../../../framework/crypto/src/hash.c ../../../../../framework/crypto/src/compress.c ../../../../../framework/driver/encx24j600/src/dynamic/bus/spi/drv_encx24j600_spi_bus.c ../../../../../framework/driver/encx24j600/src/dynamic/closed_state/drv_encx24j600_closed_state.c ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_initialization_state.c ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_configure_state.c ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_detect_state.c ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_reset_state.c ../../../../../framework/driver/encx24j600/src/dynamic/packet/drv_encx24j600_tx_packet.c ../../../../../framework/driver/encx24j600/src/dynamic/packet/drv_encx24j600_rx_packet.c ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_running_state.c ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_change_duplex_state.c ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_check_int_state.c ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_check_status_state.c ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_check_tx_status_state.c ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_reset_rx_state.c ../../../../../framework/driver/encx24j600/src/dynamic/drv_encx24j600_api.c ../../../../../framework/driver/encx24j600/src/dynamic/drv_encx24j600_main_state.c ../../../../../framework/driver/encx24j600/src/dynamic/drv_encx24j600_utils.c ../../../../../framework/driver/spi/src/dynamic/drv_spi.c ../../../../../framework/driver/spi/src/drv_spi_sys_queue_fifo.c ../../../../../framework/driver/spi_flash/sst25vf016b/src/dynamic/drv_sst25vf016b.c ../../../../../framework/driver/spi_flash/sst25vf016b/src/mla/SPIFlash.c ../../../../../framework/driver/tmr/src/dynamic/drv_tmr.c ../../../../../framework/driver/usart/src/dynamic/drv_usart.c ../../../../../framework/driver/usart/src/dynamic/drv_usart_buffer_queue.c ../../../../../framework/driver/usart/src/dynamic/drv_usart_read_write.c ../../../../../framework/driver/usart/src/mla/UART.c ../../../../../framework/net/pres/src/net_pres.c ../../../../../framework/system/command/src/sys_command.c ../../../../../framework/system/common/src/sys_buffer.c ../../../../../framework/system/common/src/sys_queue.c ../../../../../framework/system/console/src/sys_console.c ../../../../../framework/system/console/src/sys_console_uart.c ../../../../../framework/system/debug/src/sys_debug.c ../../../../../framework/system/devcon/src/sys_devcon.c ../../../../../framework/system/devcon/src/sys_devcon_pic32mx.c ../../../../../framework/system/fs/src/dynamic/sys_fs.c ../../../../../framework/system/fs/src/dynamic/sys_fs_media_manager.c ../../../../../framework/system/fs/mpfs/src/mpfs.c ../../../../../framework/system/int/src/sys_int_pic32.c ../../../../../framework/system/random/src/sys_random.c ../../../../../framework/system/reset/src/sys_reset.c ../../../../../framework/system/tmr/src/sys_tmr.c ../../../../../framework/tcpip/src/common/sys_fs_wrapper.c ../../../../../framework/tcpip/src/common/helpers.c ../../../../../framework/tcpip/src/tcp.c ../../../../../framework/tcpip/src/udp.c ../../../../../framework/tcpip/src/arp.c ../../../../../framework/tcpip/src/dhcp.c ../../../../../framework/tcpip/src/dns.c ../../../../../framework/tcpip/src/http.c ../../../../../framework/tcpip/src/nbns.c ../../../../../framework/tcpip/src/smtp.c ../../../../../framework/tcpip/src/tcpip_announce.c ../../../../../framework/tcpip/src/tcpip_commands.c ../../../../../framework/tcpip/src/hash_fnv.c ../../../../../framework/tcpip/src/oahash.c ../../../../../framework/tcpip/src/tcpip_heap_alloc.c ../../../../../framework/tcpip/src/tcpip_helpers.c ../../../../../framework/tcpip/src/tcpip_helper_c32.S ../../../../../framework/tcpip/src/tcpip_manager.c ../../../../../framework/tcpip/src/tcpip_notify.c ../../../../../framework/tcpip/src/tcpip_packet.c ../../../../../framework/tcpip/src/ipv4.c ../../../../../framework/tcpip/src/sntp.c ../../../../../framework/tcpip/src/tcpip_heap_internal.c ../../../../../framework/tcpip/src/icmp.c ../../../../../framework/tcpip/src/dhcps.c ../../../../../framework/tcpip/src/ddns.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/asm.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/blake2b.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/camellia.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/chacha.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/chacha20_poly1305.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/curve25519.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/dh.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/dsa.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ecc_fp.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ed25519.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/fe_low_mem.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/fe_operations.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ge_low_mem.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ge_operations.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/hc128.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/md2.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/md4.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/pkcs7.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/poly1305.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/rabbit.c ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ripemd.c ../../../../../third_party/tcpip/wolfssl/src/crl.c ../../../../../third_party/tcpip/wolfssl/src/internal.c ../../../../../third_party/tcpip/wolfssl/src/io.c ../../../../../third_party/tcpip/wolfssl/src/keys.c ../../../../../third_party/tcpip/wolfssl/src/ocsp.c ../../../../../third_party/tcpip/wolfssl/src/sniffer.c ../../../../../third_party/tcpip/wolfssl/src/ssl.c ../../../../../third_party/tcpip/wolfssl/src/tls.c ../../../../../framework/crypto/src/asm.c


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
	${MAKE}  -f nbproject/Makefile-e16_encx24j600_spiflash.mk dist/${CND_CONF}/${IMAGE_TYPE}/pic32_eth_web_server.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

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
${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o: ../../../../../framework/tcpip/src/tcpip_helper_c32.S  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o.ok ${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o.err 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o.d" "${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o.asm.d" -t $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC} $(MP_EXTRA_AS_PRE)  -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o.d"  -o ${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o ../../../../../framework/tcpip/src/tcpip_helper_c32.S  -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    -Wa,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_AS_POST),-MD="${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o.asm.d",--defsym=__ICD2RAM=1,--defsym=__MPLAB_DEBUG=1,--gdwarf-2,--defsym=__DEBUG=1,--defsym=__MPLAB_DEBUGGER_REAL_ICE=1
	
else
${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o: ../../../../../framework/tcpip/src/tcpip_helper_c32.S  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o.ok ${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o.err 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o.d" "${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o.asm.d" -t $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC} $(MP_EXTRA_AS_PRE)  -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o.d"  -o ${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o ../../../../../framework/tcpip/src/tcpip_helper_c32.S  -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    -Wa,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_AS_POST),-MD="${OBJECTDIR}/_ext/1164207549/tcpip_helper_c32.o.asm.d",--gdwarf-2
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/_ext/1495834797/drv_flash_static.o: ../src/system_config/e16_encx24j600_spiflash/framework/driver/flash/src/drv_flash_static.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1495834797" 
	@${RM} ${OBJECTDIR}/_ext/1495834797/drv_flash_static.o.d 
	@${RM} ${OBJECTDIR}/_ext/1495834797/drv_flash_static.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1495834797/drv_flash_static.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1495834797/drv_flash_static.o.d" -o ${OBJECTDIR}/_ext/1495834797/drv_flash_static.o ../src/system_config/e16_encx24j600_spiflash/framework/driver/flash/src/drv_flash_static.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1676865386/drv_spi_tasks.o: ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_tasks.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1676865386" 
	@${RM} ${OBJECTDIR}/_ext/1676865386/drv_spi_tasks.o.d 
	@${RM} ${OBJECTDIR}/_ext/1676865386/drv_spi_tasks.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1676865386/drv_spi_tasks.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1676865386/drv_spi_tasks.o.d" -o ${OBJECTDIR}/_ext/1676865386/drv_spi_tasks.o ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_tasks.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1676865386/drv_spi_api.o: ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_api.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1676865386" 
	@${RM} ${OBJECTDIR}/_ext/1676865386/drv_spi_api.o.d 
	@${RM} ${OBJECTDIR}/_ext/1676865386/drv_spi_api.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1676865386/drv_spi_api.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1676865386/drv_spi_api.o.d" -o ${OBJECTDIR}/_ext/1676865386/drv_spi_api.o ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_api.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1676865386/drv_spi_master_ebm_tasks.o: ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_master_ebm_tasks.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1676865386" 
	@${RM} ${OBJECTDIR}/_ext/1676865386/drv_spi_master_ebm_tasks.o.d 
	@${RM} ${OBJECTDIR}/_ext/1676865386/drv_spi_master_ebm_tasks.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1676865386/drv_spi_master_ebm_tasks.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1676865386/drv_spi_master_ebm_tasks.o.d" -o ${OBJECTDIR}/_ext/1676865386/drv_spi_master_ebm_tasks.o ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_master_ebm_tasks.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1676865386/drv_spi_master_rm_tasks.o: ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_master_rm_tasks.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1676865386" 
	@${RM} ${OBJECTDIR}/_ext/1676865386/drv_spi_master_rm_tasks.o.d 
	@${RM} ${OBJECTDIR}/_ext/1676865386/drv_spi_master_rm_tasks.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1676865386/drv_spi_master_rm_tasks.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1676865386/drv_spi_master_rm_tasks.o.d" -o ${OBJECTDIR}/_ext/1676865386/drv_spi_master_rm_tasks.o ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_master_rm_tasks.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/971131287/net_pres_enc_glue.o: ../src/system_config/e16_encx24j600_spiflash/framework/net/pres/net_pres_enc_glue.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/971131287" 
	@${RM} ${OBJECTDIR}/_ext/971131287/net_pres_enc_glue.o.d 
	@${RM} ${OBJECTDIR}/_ext/971131287/net_pres_enc_glue.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/971131287/net_pres_enc_glue.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/971131287/net_pres_enc_glue.o.d" -o ${OBJECTDIR}/_ext/971131287/net_pres_enc_glue.o ../src/system_config/e16_encx24j600_spiflash/framework/net/pres/net_pres_enc_glue.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/971131287/net_pres_cert_store.o: ../src/system_config/e16_encx24j600_spiflash/framework/net/pres/net_pres_cert_store.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/971131287" 
	@${RM} ${OBJECTDIR}/_ext/971131287/net_pres_cert_store.o.d 
	@${RM} ${OBJECTDIR}/_ext/971131287/net_pres_cert_store.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/971131287/net_pres_cert_store.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/971131287/net_pres_cert_store.o.d" -o ${OBJECTDIR}/_ext/971131287/net_pres_cert_store.o ../src/system_config/e16_encx24j600_spiflash/framework/net/pres/net_pres_cert_store.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/360868340/sys_clk_static.o: ../src/system_config/e16_encx24j600_spiflash/framework/system/clk/src/sys_clk_static.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/360868340" 
	@${RM} ${OBJECTDIR}/_ext/360868340/sys_clk_static.o.d 
	@${RM} ${OBJECTDIR}/_ext/360868340/sys_clk_static.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/360868340/sys_clk_static.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/360868340/sys_clk_static.o.d" -o ${OBJECTDIR}/_ext/360868340/sys_clk_static.o ../src/system_config/e16_encx24j600_spiflash/framework/system/clk/src/sys_clk_static.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/394705988/sys_ports_static.o: ../src/system_config/e16_encx24j600_spiflash/framework/system/ports/src/sys_ports_static.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/394705988" 
	@${RM} ${OBJECTDIR}/_ext/394705988/sys_ports_static.o.d 
	@${RM} ${OBJECTDIR}/_ext/394705988/sys_ports_static.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/394705988/sys_ports_static.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/394705988/sys_ports_static.o.d" -o ${OBJECTDIR}/_ext/394705988/sys_ports_static.o ../src/system_config/e16_encx24j600_spiflash/framework/system/ports/src/sys_ports_static.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/689678155/system_init.o: ../src/system_config/e16_encx24j600_spiflash/system_init.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/689678155" 
	@${RM} ${OBJECTDIR}/_ext/689678155/system_init.o.d 
	@${RM} ${OBJECTDIR}/_ext/689678155/system_init.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/689678155/system_init.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/689678155/system_init.o.d" -o ${OBJECTDIR}/_ext/689678155/system_init.o ../src/system_config/e16_encx24j600_spiflash/system_init.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/689678155/system_interrupt.o: ../src/system_config/e16_encx24j600_spiflash/system_interrupt.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/689678155" 
	@${RM} ${OBJECTDIR}/_ext/689678155/system_interrupt.o.d 
	@${RM} ${OBJECTDIR}/_ext/689678155/system_interrupt.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/689678155/system_interrupt.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/689678155/system_interrupt.o.d" -o ${OBJECTDIR}/_ext/689678155/system_interrupt.o ../src/system_config/e16_encx24j600_spiflash/system_interrupt.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/689678155/system_exceptions.o: ../src/system_config/e16_encx24j600_spiflash/system_exceptions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/689678155" 
	@${RM} ${OBJECTDIR}/_ext/689678155/system_exceptions.o.d 
	@${RM} ${OBJECTDIR}/_ext/689678155/system_exceptions.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/689678155/system_exceptions.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/689678155/system_exceptions.o.d" -o ${OBJECTDIR}/_ext/689678155/system_exceptions.o ../src/system_config/e16_encx24j600_spiflash/system_exceptions.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/689678155/system_tasks.o: ../src/system_config/e16_encx24j600_spiflash/system_tasks.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/689678155" 
	@${RM} ${OBJECTDIR}/_ext/689678155/system_tasks.o.d 
	@${RM} ${OBJECTDIR}/_ext/689678155/system_tasks.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/689678155/system_tasks.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/689678155/system_tasks.o.d" -o ${OBJECTDIR}/_ext/689678155/system_tasks.o ../src/system_config/e16_encx24j600_spiflash/system_tasks.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/app.o: ../src/app.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/app.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1360937237/app.o.d" -o ${OBJECTDIR}/_ext/1360937237/app.o ../src/app.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/main.o: ../src/main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/main.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1360937237/main.o.d" -o ${OBJECTDIR}/_ext/1360937237/main.o ../src/main.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/http_print.o: ../src/http_print.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/http_print.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/http_print.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/http_print.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1360937237/http_print.o.d" -o ${OBJECTDIR}/_ext/1360937237/http_print.o ../src/http_print.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/custom_http_app.o: ../src/custom_http_app.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/custom_http_app.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/custom_http_app.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/custom_http_app.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1360937237/custom_http_app.o.d" -o ${OBJECTDIR}/_ext/1360937237/custom_http_app.o ../src/custom_http_app.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/mpfs_img2.o: ../src/mpfs_img2.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/mpfs_img2.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/mpfs_img2.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/mpfs_img2.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1360937237/mpfs_img2.o.d" -o ${OBJECTDIR}/_ext/1360937237/mpfs_img2.o ../src/mpfs_img2.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/728775826/bsp_sys_init.o: ../../../../../bsp/pic32mx795_pim+e16/bsp_sys_init.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/728775826" 
	@${RM} ${OBJECTDIR}/_ext/728775826/bsp_sys_init.o.d 
	@${RM} ${OBJECTDIR}/_ext/728775826/bsp_sys_init.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/728775826/bsp_sys_init.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/728775826/bsp_sys_init.o.d" -o ${OBJECTDIR}/_ext/728775826/bsp_sys_init.o ../../../../../bsp/pic32mx795_pim+e16/bsp_sys_init.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/random.o: ../../../../../framework/crypto/src/random.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/random.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/random.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/random.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/random.o.d" -o ${OBJECTDIR}/_ext/29024758/random.o ../../../../../framework/crypto/src/random.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/arc4.o: ../../../../../framework/crypto/src/arc4.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/arc4.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/arc4.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/arc4.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/arc4.o.d" -o ${OBJECTDIR}/_ext/29024758/arc4.o ../../../../../framework/crypto/src/arc4.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/crypto.o: ../../../../../framework/crypto/src/crypto.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/crypto.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/crypto.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/crypto.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/crypto.o.d" -o ${OBJECTDIR}/_ext/29024758/crypto.o ../../../../../framework/crypto/src/crypto.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/md5.o: ../../../../../framework/crypto/src/md5.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/md5.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/md5.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/md5.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/md5.o.d" -o ${OBJECTDIR}/_ext/29024758/md5.o ../../../../../framework/crypto/src/md5.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/sha.o: ../../../../../framework/crypto/src/sha.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/sha.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/sha.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/sha.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/sha.o.d" -o ${OBJECTDIR}/_ext/29024758/sha.o ../../../../../framework/crypto/src/sha.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/coding.o: ../../../../../framework/crypto/src/coding.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/coding.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/coding.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/coding.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/coding.o.d" -o ${OBJECTDIR}/_ext/29024758/coding.o ../../../../../framework/crypto/src/coding.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/error.o: ../../../../../framework/crypto/src/error.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/error.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/error.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/error.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/error.o.d" -o ${OBJECTDIR}/_ext/29024758/error.o ../../../../../framework/crypto/src/error.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/integer.o: ../../../../../framework/crypto/src/integer.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/integer.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/integer.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/integer.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/integer.o.d" -o ${OBJECTDIR}/_ext/29024758/integer.o ../../../../../framework/crypto/src/integer.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/logging.o: ../../../../../framework/crypto/src/logging.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/logging.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/logging.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/logging.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/logging.o.d" -o ${OBJECTDIR}/_ext/29024758/logging.o ../../../../../framework/crypto/src/logging.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/memory.o: ../../../../../framework/crypto/src/memory.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/memory.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/memory.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/memory.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/memory.o.d" -o ${OBJECTDIR}/_ext/29024758/memory.o ../../../../../framework/crypto/src/memory.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/misc.o: ../../../../../framework/crypto/src/misc.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/misc.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/misc.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/misc.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/misc.o.d" -o ${OBJECTDIR}/_ext/29024758/misc.o ../../../../../framework/crypto/src/misc.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/port.o: ../../../../../framework/crypto/src/port.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/port.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/port.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/port.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/port.o.d" -o ${OBJECTDIR}/_ext/29024758/port.o ../../../../../framework/crypto/src/port.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/ecc.o: ../../../../../framework/crypto/src/ecc.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/ecc.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/ecc.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/ecc.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/ecc.o.d" -o ${OBJECTDIR}/_ext/29024758/ecc.o ../../../../../framework/crypto/src/ecc.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/pwdbased.o: ../../../../../framework/crypto/src/pwdbased.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/pwdbased.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/pwdbased.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/pwdbased.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/pwdbased.o.d" -o ${OBJECTDIR}/_ext/29024758/pwdbased.o ../../../../../framework/crypto/src/pwdbased.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/tfm.o: ../../../../../framework/crypto/src/tfm.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/tfm.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/tfm.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/tfm.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/tfm.o.d" -o ${OBJECTDIR}/_ext/29024758/tfm.o ../../../../../framework/crypto/src/tfm.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/asn.o: ../../../../../framework/crypto/src/asn.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/asn.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/asn.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/asn.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/asn.o.d" -o ${OBJECTDIR}/_ext/29024758/asn.o ../../../../../framework/crypto/src/asn.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/des3.o: ../../../../../framework/crypto/src/des3.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/des3.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/des3.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/des3.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/des3.o.d" -o ${OBJECTDIR}/_ext/29024758/des3.o ../../../../../framework/crypto/src/des3.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/rsa.o: ../../../../../framework/crypto/src/rsa.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/rsa.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/rsa.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/rsa.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/rsa.o.d" -o ${OBJECTDIR}/_ext/29024758/rsa.o ../../../../../framework/crypto/src/rsa.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/aes.o: ../../../../../framework/crypto/src/aes.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/aes.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/aes.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/aes.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/aes.o.d" -o ${OBJECTDIR}/_ext/29024758/aes.o ../../../../../framework/crypto/src/aes.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/sha256.o: ../../../../../framework/crypto/src/sha256.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/sha256.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/sha256.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/sha256.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/sha256.o.d" -o ${OBJECTDIR}/_ext/29024758/sha256.o ../../../../../framework/crypto/src/sha256.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/sha512.o: ../../../../../framework/crypto/src/sha512.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/sha512.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/sha512.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/sha512.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/sha512.o.d" -o ${OBJECTDIR}/_ext/29024758/sha512.o ../../../../../framework/crypto/src/sha512.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/hmac.o: ../../../../../framework/crypto/src/hmac.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/hmac.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/hmac.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/hmac.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/hmac.o.d" -o ${OBJECTDIR}/_ext/29024758/hmac.o ../../../../../framework/crypto/src/hmac.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/hash.o: ../../../../../framework/crypto/src/hash.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/hash.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/hash.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/hash.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/hash.o.d" -o ${OBJECTDIR}/_ext/29024758/hash.o ../../../../../framework/crypto/src/hash.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/compress.o: ../../../../../framework/crypto/src/compress.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/compress.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/compress.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/compress.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/compress.o.d" -o ${OBJECTDIR}/_ext/29024758/compress.o ../../../../../framework/crypto/src/compress.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/2115314394/drv_encx24j600_spi_bus.o: ../../../../../framework/driver/encx24j600/src/dynamic/bus/spi/drv_encx24j600_spi_bus.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2115314394" 
	@${RM} ${OBJECTDIR}/_ext/2115314394/drv_encx24j600_spi_bus.o.d 
	@${RM} ${OBJECTDIR}/_ext/2115314394/drv_encx24j600_spi_bus.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2115314394/drv_encx24j600_spi_bus.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/2115314394/drv_encx24j600_spi_bus.o.d" -o ${OBJECTDIR}/_ext/2115314394/drv_encx24j600_spi_bus.o ../../../../../framework/driver/encx24j600/src/dynamic/bus/spi/drv_encx24j600_spi_bus.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1455582699/drv_encx24j600_closed_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/closed_state/drv_encx24j600_closed_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1455582699" 
	@${RM} ${OBJECTDIR}/_ext/1455582699/drv_encx24j600_closed_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/1455582699/drv_encx24j600_closed_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1455582699/drv_encx24j600_closed_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1455582699/drv_encx24j600_closed_state.o.d" -o ${OBJECTDIR}/_ext/1455582699/drv_encx24j600_closed_state.o ../../../../../framework/driver/encx24j600/src/dynamic/closed_state/drv_encx24j600_closed_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1730942135/drv_encx24j600_initialization_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_initialization_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1730942135" 
	@${RM} ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_initialization_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_initialization_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1730942135/drv_encx24j600_initialization_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1730942135/drv_encx24j600_initialization_state.o.d" -o ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_initialization_state.o ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_initialization_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1730942135/drv_encx24j600_configure_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_configure_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1730942135" 
	@${RM} ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_configure_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_configure_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1730942135/drv_encx24j600_configure_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1730942135/drv_encx24j600_configure_state.o.d" -o ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_configure_state.o ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_configure_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1730942135/drv_encx24j600_detect_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_detect_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1730942135" 
	@${RM} ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_detect_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_detect_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1730942135/drv_encx24j600_detect_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1730942135/drv_encx24j600_detect_state.o.d" -o ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_detect_state.o ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_detect_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1730942135/drv_encx24j600_reset_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_reset_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1730942135" 
	@${RM} ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_reset_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_reset_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1730942135/drv_encx24j600_reset_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1730942135/drv_encx24j600_reset_state.o.d" -o ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_reset_state.o ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_reset_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1210338337/drv_encx24j600_tx_packet.o: ../../../../../framework/driver/encx24j600/src/dynamic/packet/drv_encx24j600_tx_packet.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1210338337" 
	@${RM} ${OBJECTDIR}/_ext/1210338337/drv_encx24j600_tx_packet.o.d 
	@${RM} ${OBJECTDIR}/_ext/1210338337/drv_encx24j600_tx_packet.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1210338337/drv_encx24j600_tx_packet.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1210338337/drv_encx24j600_tx_packet.o.d" -o ${OBJECTDIR}/_ext/1210338337/drv_encx24j600_tx_packet.o ../../../../../framework/driver/encx24j600/src/dynamic/packet/drv_encx24j600_tx_packet.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1210338337/drv_encx24j600_rx_packet.o: ../../../../../framework/driver/encx24j600/src/dynamic/packet/drv_encx24j600_rx_packet.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1210338337" 
	@${RM} ${OBJECTDIR}/_ext/1210338337/drv_encx24j600_rx_packet.o.d 
	@${RM} ${OBJECTDIR}/_ext/1210338337/drv_encx24j600_rx_packet.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1210338337/drv_encx24j600_rx_packet.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1210338337/drv_encx24j600_rx_packet.o.d" -o ${OBJECTDIR}/_ext/1210338337/drv_encx24j600_rx_packet.o ../../../../../framework/driver/encx24j600/src/dynamic/packet/drv_encx24j600_rx_packet.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1207282394/drv_encx24j600_running_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_running_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1207282394" 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_running_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_running_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_running_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_running_state.o.d" -o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_running_state.o ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_running_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1207282394/drv_encx24j600_change_duplex_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_change_duplex_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1207282394" 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_change_duplex_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_change_duplex_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_change_duplex_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_change_duplex_state.o.d" -o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_change_duplex_state.o ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_change_duplex_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_int_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_check_int_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1207282394" 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_int_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_int_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_int_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_int_state.o.d" -o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_int_state.o ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_check_int_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_status_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_check_status_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1207282394" 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_status_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_status_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_status_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_status_state.o.d" -o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_status_state.o ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_check_status_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_tx_status_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_check_tx_status_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1207282394" 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_tx_status_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_tx_status_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_tx_status_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_tx_status_state.o.d" -o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_tx_status_state.o ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_check_tx_status_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1207282394/drv_encx24j600_reset_rx_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_reset_rx_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1207282394" 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_reset_rx_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_reset_rx_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_reset_rx_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_reset_rx_state.o.d" -o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_reset_rx_state.o ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_reset_rx_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/772120936/drv_encx24j600_api.o: ../../../../../framework/driver/encx24j600/src/dynamic/drv_encx24j600_api.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/772120936" 
	@${RM} ${OBJECTDIR}/_ext/772120936/drv_encx24j600_api.o.d 
	@${RM} ${OBJECTDIR}/_ext/772120936/drv_encx24j600_api.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/772120936/drv_encx24j600_api.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/772120936/drv_encx24j600_api.o.d" -o ${OBJECTDIR}/_ext/772120936/drv_encx24j600_api.o ../../../../../framework/driver/encx24j600/src/dynamic/drv_encx24j600_api.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/772120936/drv_encx24j600_main_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/drv_encx24j600_main_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/772120936" 
	@${RM} ${OBJECTDIR}/_ext/772120936/drv_encx24j600_main_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/772120936/drv_encx24j600_main_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/772120936/drv_encx24j600_main_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/772120936/drv_encx24j600_main_state.o.d" -o ${OBJECTDIR}/_ext/772120936/drv_encx24j600_main_state.o ../../../../../framework/driver/encx24j600/src/dynamic/drv_encx24j600_main_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/772120936/drv_encx24j600_utils.o: ../../../../../framework/driver/encx24j600/src/dynamic/drv_encx24j600_utils.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/772120936" 
	@${RM} ${OBJECTDIR}/_ext/772120936/drv_encx24j600_utils.o.d 
	@${RM} ${OBJECTDIR}/_ext/772120936/drv_encx24j600_utils.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/772120936/drv_encx24j600_utils.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/772120936/drv_encx24j600_utils.o.d" -o ${OBJECTDIR}/_ext/772120936/drv_encx24j600_utils.o ../../../../../framework/driver/encx24j600/src/dynamic/drv_encx24j600_utils.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1324760662/drv_spi.o: ../../../../../framework/driver/spi/src/dynamic/drv_spi.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1324760662" 
	@${RM} ${OBJECTDIR}/_ext/1324760662/drv_spi.o.d 
	@${RM} ${OBJECTDIR}/_ext/1324760662/drv_spi.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1324760662/drv_spi.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1324760662/drv_spi.o.d" -o ${OBJECTDIR}/_ext/1324760662/drv_spi.o ../../../../../framework/driver/spi/src/dynamic/drv_spi.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1385053818/drv_spi_sys_queue_fifo.o: ../../../../../framework/driver/spi/src/drv_spi_sys_queue_fifo.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1385053818" 
	@${RM} ${OBJECTDIR}/_ext/1385053818/drv_spi_sys_queue_fifo.o.d 
	@${RM} ${OBJECTDIR}/_ext/1385053818/drv_spi_sys_queue_fifo.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1385053818/drv_spi_sys_queue_fifo.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1385053818/drv_spi_sys_queue_fifo.o.d" -o ${OBJECTDIR}/_ext/1385053818/drv_spi_sys_queue_fifo.o ../../../../../framework/driver/spi/src/drv_spi_sys_queue_fifo.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1112873152/drv_sst25vf016b.o: ../../../../../framework/driver/spi_flash/sst25vf016b/src/dynamic/drv_sst25vf016b.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1112873152" 
	@${RM} ${OBJECTDIR}/_ext/1112873152/drv_sst25vf016b.o.d 
	@${RM} ${OBJECTDIR}/_ext/1112873152/drv_sst25vf016b.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1112873152/drv_sst25vf016b.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1112873152/drv_sst25vf016b.o.d" -o ${OBJECTDIR}/_ext/1112873152/drv_sst25vf016b.o ../../../../../framework/driver/spi_flash/sst25vf016b/src/dynamic/drv_sst25vf016b.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1335609251/SPIFlash.o: ../../../../../framework/driver/spi_flash/sst25vf016b/src/mla/SPIFlash.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1335609251" 
	@${RM} ${OBJECTDIR}/_ext/1335609251/SPIFlash.o.d 
	@${RM} ${OBJECTDIR}/_ext/1335609251/SPIFlash.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1335609251/SPIFlash.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1335609251/SPIFlash.o.d" -o ${OBJECTDIR}/_ext/1335609251/SPIFlash.o ../../../../../framework/driver/spi_flash/sst25vf016b/src/mla/SPIFlash.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/941160041/drv_tmr.o: ../../../../../framework/driver/tmr/src/dynamic/drv_tmr.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/941160041" 
	@${RM} ${OBJECTDIR}/_ext/941160041/drv_tmr.o.d 
	@${RM} ${OBJECTDIR}/_ext/941160041/drv_tmr.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/941160041/drv_tmr.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/941160041/drv_tmr.o.d" -o ${OBJECTDIR}/_ext/941160041/drv_tmr.o ../../../../../framework/driver/tmr/src/dynamic/drv_tmr.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/821589181/drv_usart.o: ../../../../../framework/driver/usart/src/dynamic/drv_usart.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/821589181" 
	@${RM} ${OBJECTDIR}/_ext/821589181/drv_usart.o.d 
	@${RM} ${OBJECTDIR}/_ext/821589181/drv_usart.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/821589181/drv_usart.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/821589181/drv_usart.o.d" -o ${OBJECTDIR}/_ext/821589181/drv_usart.o ../../../../../framework/driver/usart/src/dynamic/drv_usart.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/821589181/drv_usart_buffer_queue.o: ../../../../../framework/driver/usart/src/dynamic/drv_usart_buffer_queue.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/821589181" 
	@${RM} ${OBJECTDIR}/_ext/821589181/drv_usart_buffer_queue.o.d 
	@${RM} ${OBJECTDIR}/_ext/821589181/drv_usart_buffer_queue.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/821589181/drv_usart_buffer_queue.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/821589181/drv_usart_buffer_queue.o.d" -o ${OBJECTDIR}/_ext/821589181/drv_usart_buffer_queue.o ../../../../../framework/driver/usart/src/dynamic/drv_usart_buffer_queue.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/821589181/drv_usart_read_write.o: ../../../../../framework/driver/usart/src/dynamic/drv_usart_read_write.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/821589181" 
	@${RM} ${OBJECTDIR}/_ext/821589181/drv_usart_read_write.o.d 
	@${RM} ${OBJECTDIR}/_ext/821589181/drv_usart_read_write.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/821589181/drv_usart_read_write.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/821589181/drv_usart_read_write.o.d" -o ${OBJECTDIR}/_ext/821589181/drv_usart_read_write.o ../../../../../framework/driver/usart/src/dynamic/drv_usart_read_write.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1595536294/UART.o: ../../../../../framework/driver/usart/src/mla/UART.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1595536294" 
	@${RM} ${OBJECTDIR}/_ext/1595536294/UART.o.d 
	@${RM} ${OBJECTDIR}/_ext/1595536294/UART.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1595536294/UART.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1595536294/UART.o.d" -o ${OBJECTDIR}/_ext/1595536294/UART.o ../../../../../framework/driver/usart/src/mla/UART.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/871719959/net_pres.o: ../../../../../framework/net/pres/src/net_pres.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/871719959" 
	@${RM} ${OBJECTDIR}/_ext/871719959/net_pres.o.d 
	@${RM} ${OBJECTDIR}/_ext/871719959/net_pres.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/871719959/net_pres.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/871719959/net_pres.o.d" -o ${OBJECTDIR}/_ext/871719959/net_pres.o ../../../../../framework/net/pres/src/net_pres.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1891376032/sys_command.o: ../../../../../framework/system/command/src/sys_command.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1891376032" 
	@${RM} ${OBJECTDIR}/_ext/1891376032/sys_command.o.d 
	@${RM} ${OBJECTDIR}/_ext/1891376032/sys_command.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1891376032/sys_command.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1891376032/sys_command.o.d" -o ${OBJECTDIR}/_ext/1891376032/sys_command.o ../../../../../framework/system/command/src/sys_command.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/598853952/sys_buffer.o: ../../../../../framework/system/common/src/sys_buffer.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/598853952" 
	@${RM} ${OBJECTDIR}/_ext/598853952/sys_buffer.o.d 
	@${RM} ${OBJECTDIR}/_ext/598853952/sys_buffer.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/598853952/sys_buffer.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/598853952/sys_buffer.o.d" -o ${OBJECTDIR}/_ext/598853952/sys_buffer.o ../../../../../framework/system/common/src/sys_buffer.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/598853952/sys_queue.o: ../../../../../framework/system/common/src/sys_queue.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/598853952" 
	@${RM} ${OBJECTDIR}/_ext/598853952/sys_queue.o.d 
	@${RM} ${OBJECTDIR}/_ext/598853952/sys_queue.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/598853952/sys_queue.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/598853952/sys_queue.o.d" -o ${OBJECTDIR}/_ext/598853952/sys_queue.o ../../../../../framework/system/common/src/sys_queue.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1434663852/sys_console.o: ../../../../../framework/system/console/src/sys_console.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1434663852" 
	@${RM} ${OBJECTDIR}/_ext/1434663852/sys_console.o.d 
	@${RM} ${OBJECTDIR}/_ext/1434663852/sys_console.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1434663852/sys_console.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1434663852/sys_console.o.d" -o ${OBJECTDIR}/_ext/1434663852/sys_console.o ../../../../../framework/system/console/src/sys_console.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1434663852/sys_console_uart.o: ../../../../../framework/system/console/src/sys_console_uart.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1434663852" 
	@${RM} ${OBJECTDIR}/_ext/1434663852/sys_console_uart.o.d 
	@${RM} ${OBJECTDIR}/_ext/1434663852/sys_console_uart.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1434663852/sys_console_uart.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1434663852/sys_console_uart.o.d" -o ${OBJECTDIR}/_ext/1434663852/sys_console_uart.o ../../../../../framework/system/console/src/sys_console_uart.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/2137108136/sys_debug.o: ../../../../../framework/system/debug/src/sys_debug.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2137108136" 
	@${RM} ${OBJECTDIR}/_ext/2137108136/sys_debug.o.d 
	@${RM} ${OBJECTDIR}/_ext/2137108136/sys_debug.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2137108136/sys_debug.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/2137108136/sys_debug.o.d" -o ${OBJECTDIR}/_ext/2137108136/sys_debug.o ../../../../../framework/system/debug/src/sys_debug.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/482662494/sys_devcon.o: ../../../../../framework/system/devcon/src/sys_devcon.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/482662494" 
	@${RM} ${OBJECTDIR}/_ext/482662494/sys_devcon.o.d 
	@${RM} ${OBJECTDIR}/_ext/482662494/sys_devcon.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/482662494/sys_devcon.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/482662494/sys_devcon.o.d" -o ${OBJECTDIR}/_ext/482662494/sys_devcon.o ../../../../../framework/system/devcon/src/sys_devcon.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/482662494/sys_devcon_pic32mx.o: ../../../../../framework/system/devcon/src/sys_devcon_pic32mx.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/482662494" 
	@${RM} ${OBJECTDIR}/_ext/482662494/sys_devcon_pic32mx.o.d 
	@${RM} ${OBJECTDIR}/_ext/482662494/sys_devcon_pic32mx.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/482662494/sys_devcon_pic32mx.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/482662494/sys_devcon_pic32mx.o.d" -o ${OBJECTDIR}/_ext/482662494/sys_devcon_pic32mx.o ../../../../../framework/system/devcon/src/sys_devcon_pic32mx.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1750042194/sys_fs.o: ../../../../../framework/system/fs/src/dynamic/sys_fs.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1750042194" 
	@${RM} ${OBJECTDIR}/_ext/1750042194/sys_fs.o.d 
	@${RM} ${OBJECTDIR}/_ext/1750042194/sys_fs.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1750042194/sys_fs.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1750042194/sys_fs.o.d" -o ${OBJECTDIR}/_ext/1750042194/sys_fs.o ../../../../../framework/system/fs/src/dynamic/sys_fs.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1750042194/sys_fs_media_manager.o: ../../../../../framework/system/fs/src/dynamic/sys_fs_media_manager.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1750042194" 
	@${RM} ${OBJECTDIR}/_ext/1750042194/sys_fs_media_manager.o.d 
	@${RM} ${OBJECTDIR}/_ext/1750042194/sys_fs_media_manager.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1750042194/sys_fs_media_manager.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1750042194/sys_fs_media_manager.o.d" -o ${OBJECTDIR}/_ext/1750042194/sys_fs_media_manager.o ../../../../../framework/system/fs/src/dynamic/sys_fs_media_manager.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/614935175/mpfs.o: ../../../../../framework/system/fs/mpfs/src/mpfs.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/614935175" 
	@${RM} ${OBJECTDIR}/_ext/614935175/mpfs.o.d 
	@${RM} ${OBJECTDIR}/_ext/614935175/mpfs.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/614935175/mpfs.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/614935175/mpfs.o.d" -o ${OBJECTDIR}/_ext/614935175/mpfs.o ../../../../../framework/system/fs/mpfs/src/mpfs.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1042686532/sys_int_pic32.o: ../../../../../framework/system/int/src/sys_int_pic32.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1042686532" 
	@${RM} ${OBJECTDIR}/_ext/1042686532/sys_int_pic32.o.d 
	@${RM} ${OBJECTDIR}/_ext/1042686532/sys_int_pic32.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1042686532/sys_int_pic32.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1042686532/sys_int_pic32.o.d" -o ${OBJECTDIR}/_ext/1042686532/sys_int_pic32.o ../../../../../framework/system/int/src/sys_int_pic32.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/470001640/sys_random.o: ../../../../../framework/system/random/src/sys_random.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/470001640" 
	@${RM} ${OBJECTDIR}/_ext/470001640/sys_random.o.d 
	@${RM} ${OBJECTDIR}/_ext/470001640/sys_random.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/470001640/sys_random.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/470001640/sys_random.o.d" -o ${OBJECTDIR}/_ext/470001640/sys_random.o ../../../../../framework/system/random/src/sys_random.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/64182180/sys_reset.o: ../../../../../framework/system/reset/src/sys_reset.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/64182180" 
	@${RM} ${OBJECTDIR}/_ext/64182180/sys_reset.o.d 
	@${RM} ${OBJECTDIR}/_ext/64182180/sys_reset.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/64182180/sys_reset.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/64182180/sys_reset.o.d" -o ${OBJECTDIR}/_ext/64182180/sys_reset.o ../../../../../framework/system/reset/src/sys_reset.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/2110151058/sys_tmr.o: ../../../../../framework/system/tmr/src/sys_tmr.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2110151058" 
	@${RM} ${OBJECTDIR}/_ext/2110151058/sys_tmr.o.d 
	@${RM} ${OBJECTDIR}/_ext/2110151058/sys_tmr.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2110151058/sys_tmr.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/2110151058/sys_tmr.o.d" -o ${OBJECTDIR}/_ext/2110151058/sys_tmr.o ../../../../../framework/system/tmr/src/sys_tmr.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1886247299/sys_fs_wrapper.o: ../../../../../framework/tcpip/src/common/sys_fs_wrapper.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1886247299" 
	@${RM} ${OBJECTDIR}/_ext/1886247299/sys_fs_wrapper.o.d 
	@${RM} ${OBJECTDIR}/_ext/1886247299/sys_fs_wrapper.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1886247299/sys_fs_wrapper.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1886247299/sys_fs_wrapper.o.d" -o ${OBJECTDIR}/_ext/1886247299/sys_fs_wrapper.o ../../../../../framework/tcpip/src/common/sys_fs_wrapper.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1886247299/helpers.o: ../../../../../framework/tcpip/src/common/helpers.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1886247299" 
	@${RM} ${OBJECTDIR}/_ext/1886247299/helpers.o.d 
	@${RM} ${OBJECTDIR}/_ext/1886247299/helpers.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1886247299/helpers.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1886247299/helpers.o.d" -o ${OBJECTDIR}/_ext/1886247299/helpers.o ../../../../../framework/tcpip/src/common/helpers.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/tcp.o: ../../../../../framework/tcpip/src/tcp.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcp.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcp.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/tcp.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/tcp.o.d" -o ${OBJECTDIR}/_ext/1164207549/tcp.o ../../../../../framework/tcpip/src/tcp.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/udp.o: ../../../../../framework/tcpip/src/udp.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/udp.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/udp.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/udp.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/udp.o.d" -o ${OBJECTDIR}/_ext/1164207549/udp.o ../../../../../framework/tcpip/src/udp.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/arp.o: ../../../../../framework/tcpip/src/arp.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/arp.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/arp.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/arp.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/arp.o.d" -o ${OBJECTDIR}/_ext/1164207549/arp.o ../../../../../framework/tcpip/src/arp.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/dhcp.o: ../../../../../framework/tcpip/src/dhcp.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/dhcp.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/dhcp.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/dhcp.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/dhcp.o.d" -o ${OBJECTDIR}/_ext/1164207549/dhcp.o ../../../../../framework/tcpip/src/dhcp.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/dns.o: ../../../../../framework/tcpip/src/dns.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/dns.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/dns.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/dns.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/dns.o.d" -o ${OBJECTDIR}/_ext/1164207549/dns.o ../../../../../framework/tcpip/src/dns.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/http.o: ../../../../../framework/tcpip/src/http.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/http.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/http.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/http.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/http.o.d" -o ${OBJECTDIR}/_ext/1164207549/http.o ../../../../../framework/tcpip/src/http.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/nbns.o: ../../../../../framework/tcpip/src/nbns.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/nbns.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/nbns.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/nbns.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/nbns.o.d" -o ${OBJECTDIR}/_ext/1164207549/nbns.o ../../../../../framework/tcpip/src/nbns.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/smtp.o: ../../../../../framework/tcpip/src/smtp.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/smtp.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/smtp.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/smtp.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/smtp.o.d" -o ${OBJECTDIR}/_ext/1164207549/smtp.o ../../../../../framework/tcpip/src/smtp.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/tcpip_announce.o: ../../../../../framework/tcpip/src/tcpip_announce.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_announce.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_announce.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/tcpip_announce.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/tcpip_announce.o.d" -o ${OBJECTDIR}/_ext/1164207549/tcpip_announce.o ../../../../../framework/tcpip/src/tcpip_announce.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/tcpip_commands.o: ../../../../../framework/tcpip/src/tcpip_commands.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_commands.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_commands.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/tcpip_commands.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/tcpip_commands.o.d" -o ${OBJECTDIR}/_ext/1164207549/tcpip_commands.o ../../../../../framework/tcpip/src/tcpip_commands.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/hash_fnv.o: ../../../../../framework/tcpip/src/hash_fnv.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/hash_fnv.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/hash_fnv.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/hash_fnv.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/hash_fnv.o.d" -o ${OBJECTDIR}/_ext/1164207549/hash_fnv.o ../../../../../framework/tcpip/src/hash_fnv.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/oahash.o: ../../../../../framework/tcpip/src/oahash.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/oahash.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/oahash.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/oahash.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/oahash.o.d" -o ${OBJECTDIR}/_ext/1164207549/oahash.o ../../../../../framework/tcpip/src/oahash.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/tcpip_heap_alloc.o: ../../../../../framework/tcpip/src/tcpip_heap_alloc.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_heap_alloc.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_heap_alloc.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/tcpip_heap_alloc.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/tcpip_heap_alloc.o.d" -o ${OBJECTDIR}/_ext/1164207549/tcpip_heap_alloc.o ../../../../../framework/tcpip/src/tcpip_heap_alloc.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/tcpip_helpers.o: ../../../../../framework/tcpip/src/tcpip_helpers.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_helpers.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_helpers.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/tcpip_helpers.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/tcpip_helpers.o.d" -o ${OBJECTDIR}/_ext/1164207549/tcpip_helpers.o ../../../../../framework/tcpip/src/tcpip_helpers.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/tcpip_manager.o: ../../../../../framework/tcpip/src/tcpip_manager.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_manager.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_manager.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/tcpip_manager.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/tcpip_manager.o.d" -o ${OBJECTDIR}/_ext/1164207549/tcpip_manager.o ../../../../../framework/tcpip/src/tcpip_manager.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/tcpip_notify.o: ../../../../../framework/tcpip/src/tcpip_notify.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_notify.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_notify.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/tcpip_notify.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/tcpip_notify.o.d" -o ${OBJECTDIR}/_ext/1164207549/tcpip_notify.o ../../../../../framework/tcpip/src/tcpip_notify.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/tcpip_packet.o: ../../../../../framework/tcpip/src/tcpip_packet.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_packet.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_packet.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/tcpip_packet.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/tcpip_packet.o.d" -o ${OBJECTDIR}/_ext/1164207549/tcpip_packet.o ../../../../../framework/tcpip/src/tcpip_packet.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/ipv4.o: ../../../../../framework/tcpip/src/ipv4.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/ipv4.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/ipv4.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/ipv4.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/ipv4.o.d" -o ${OBJECTDIR}/_ext/1164207549/ipv4.o ../../../../../framework/tcpip/src/ipv4.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/sntp.o: ../../../../../framework/tcpip/src/sntp.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/sntp.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/sntp.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/sntp.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/sntp.o.d" -o ${OBJECTDIR}/_ext/1164207549/sntp.o ../../../../../framework/tcpip/src/sntp.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/tcpip_heap_internal.o: ../../../../../framework/tcpip/src/tcpip_heap_internal.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_heap_internal.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_heap_internal.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/tcpip_heap_internal.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/tcpip_heap_internal.o.d" -o ${OBJECTDIR}/_ext/1164207549/tcpip_heap_internal.o ../../../../../framework/tcpip/src/tcpip_heap_internal.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/icmp.o: ../../../../../framework/tcpip/src/icmp.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/icmp.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/icmp.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/icmp.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/icmp.o.d" -o ${OBJECTDIR}/_ext/1164207549/icmp.o ../../../../../framework/tcpip/src/icmp.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/dhcps.o: ../../../../../framework/tcpip/src/dhcps.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/dhcps.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/dhcps.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/dhcps.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/dhcps.o.d" -o ${OBJECTDIR}/_ext/1164207549/dhcps.o ../../../../../framework/tcpip/src/dhcps.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/ddns.o: ../../../../../framework/tcpip/src/ddns.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/ddns.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/ddns.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/ddns.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/ddns.o.d" -o ${OBJECTDIR}/_ext/1164207549/ddns.o ../../../../../framework/tcpip/src/ddns.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/asm.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/asm.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/asm.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/asm.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/asm.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/asm.o.d" -o ${OBJECTDIR}/_ext/1699919941/asm.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/asm.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/blake2b.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/blake2b.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/blake2b.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/blake2b.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/blake2b.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/blake2b.o.d" -o ${OBJECTDIR}/_ext/1699919941/blake2b.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/blake2b.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/camellia.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/camellia.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/camellia.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/camellia.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/camellia.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/camellia.o.d" -o ${OBJECTDIR}/_ext/1699919941/camellia.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/camellia.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/chacha.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/chacha.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/chacha.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/chacha.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/chacha.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/chacha.o.d" -o ${OBJECTDIR}/_ext/1699919941/chacha.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/chacha.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/chacha20_poly1305.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/chacha20_poly1305.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/chacha20_poly1305.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/chacha20_poly1305.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/chacha20_poly1305.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/chacha20_poly1305.o.d" -o ${OBJECTDIR}/_ext/1699919941/chacha20_poly1305.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/chacha20_poly1305.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/curve25519.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/curve25519.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/curve25519.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/curve25519.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/curve25519.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/curve25519.o.d" -o ${OBJECTDIR}/_ext/1699919941/curve25519.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/curve25519.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/dh.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/dh.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/dh.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/dh.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/dh.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/dh.o.d" -o ${OBJECTDIR}/_ext/1699919941/dh.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/dh.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/dsa.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/dsa.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/dsa.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/dsa.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/dsa.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/dsa.o.d" -o ${OBJECTDIR}/_ext/1699919941/dsa.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/dsa.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/ecc_fp.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ecc_fp.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/ecc_fp.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/ecc_fp.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/ecc_fp.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/ecc_fp.o.d" -o ${OBJECTDIR}/_ext/1699919941/ecc_fp.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ecc_fp.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/ed25519.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ed25519.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/ed25519.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/ed25519.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/ed25519.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/ed25519.o.d" -o ${OBJECTDIR}/_ext/1699919941/ed25519.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ed25519.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/fe_low_mem.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/fe_low_mem.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/fe_low_mem.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/fe_low_mem.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/fe_low_mem.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/fe_low_mem.o.d" -o ${OBJECTDIR}/_ext/1699919941/fe_low_mem.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/fe_low_mem.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/fe_operations.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/fe_operations.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/fe_operations.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/fe_operations.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/fe_operations.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/fe_operations.o.d" -o ${OBJECTDIR}/_ext/1699919941/fe_operations.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/fe_operations.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/ge_low_mem.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ge_low_mem.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/ge_low_mem.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/ge_low_mem.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/ge_low_mem.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/ge_low_mem.o.d" -o ${OBJECTDIR}/_ext/1699919941/ge_low_mem.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ge_low_mem.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/ge_operations.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ge_operations.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/ge_operations.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/ge_operations.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/ge_operations.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/ge_operations.o.d" -o ${OBJECTDIR}/_ext/1699919941/ge_operations.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ge_operations.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/hc128.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/hc128.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/hc128.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/hc128.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/hc128.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/hc128.o.d" -o ${OBJECTDIR}/_ext/1699919941/hc128.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/hc128.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/md2.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/md2.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/md2.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/md2.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/md2.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/md2.o.d" -o ${OBJECTDIR}/_ext/1699919941/md2.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/md2.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/md4.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/md4.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/md4.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/md4.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/md4.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/md4.o.d" -o ${OBJECTDIR}/_ext/1699919941/md4.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/md4.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/pkcs7.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/pkcs7.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/pkcs7.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/pkcs7.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/pkcs7.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/pkcs7.o.d" -o ${OBJECTDIR}/_ext/1699919941/pkcs7.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/pkcs7.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/poly1305.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/poly1305.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/poly1305.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/poly1305.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/poly1305.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/poly1305.o.d" -o ${OBJECTDIR}/_ext/1699919941/poly1305.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/poly1305.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/rabbit.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/rabbit.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/rabbit.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/rabbit.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/rabbit.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/rabbit.o.d" -o ${OBJECTDIR}/_ext/1699919941/rabbit.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/rabbit.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/ripemd.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ripemd.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/ripemd.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/ripemd.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/ripemd.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/ripemd.o.d" -o ${OBJECTDIR}/_ext/1699919941/ripemd.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ripemd.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/615233400/crl.o: ../../../../../third_party/tcpip/wolfssl/src/crl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/615233400" 
	@${RM} ${OBJECTDIR}/_ext/615233400/crl.o.d 
	@${RM} ${OBJECTDIR}/_ext/615233400/crl.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/615233400/crl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/615233400/crl.o.d" -o ${OBJECTDIR}/_ext/615233400/crl.o ../../../../../third_party/tcpip/wolfssl/src/crl.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/615233400/internal.o: ../../../../../third_party/tcpip/wolfssl/src/internal.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/615233400" 
	@${RM} ${OBJECTDIR}/_ext/615233400/internal.o.d 
	@${RM} ${OBJECTDIR}/_ext/615233400/internal.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/615233400/internal.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/615233400/internal.o.d" -o ${OBJECTDIR}/_ext/615233400/internal.o ../../../../../third_party/tcpip/wolfssl/src/internal.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/615233400/io.o: ../../../../../third_party/tcpip/wolfssl/src/io.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/615233400" 
	@${RM} ${OBJECTDIR}/_ext/615233400/io.o.d 
	@${RM} ${OBJECTDIR}/_ext/615233400/io.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/615233400/io.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/615233400/io.o.d" -o ${OBJECTDIR}/_ext/615233400/io.o ../../../../../third_party/tcpip/wolfssl/src/io.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/615233400/keys.o: ../../../../../third_party/tcpip/wolfssl/src/keys.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/615233400" 
	@${RM} ${OBJECTDIR}/_ext/615233400/keys.o.d 
	@${RM} ${OBJECTDIR}/_ext/615233400/keys.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/615233400/keys.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/615233400/keys.o.d" -o ${OBJECTDIR}/_ext/615233400/keys.o ../../../../../third_party/tcpip/wolfssl/src/keys.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/615233400/ocsp.o: ../../../../../third_party/tcpip/wolfssl/src/ocsp.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/615233400" 
	@${RM} ${OBJECTDIR}/_ext/615233400/ocsp.o.d 
	@${RM} ${OBJECTDIR}/_ext/615233400/ocsp.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/615233400/ocsp.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/615233400/ocsp.o.d" -o ${OBJECTDIR}/_ext/615233400/ocsp.o ../../../../../third_party/tcpip/wolfssl/src/ocsp.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/615233400/sniffer.o: ../../../../../third_party/tcpip/wolfssl/src/sniffer.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/615233400" 
	@${RM} ${OBJECTDIR}/_ext/615233400/sniffer.o.d 
	@${RM} ${OBJECTDIR}/_ext/615233400/sniffer.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/615233400/sniffer.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/615233400/sniffer.o.d" -o ${OBJECTDIR}/_ext/615233400/sniffer.o ../../../../../third_party/tcpip/wolfssl/src/sniffer.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/615233400/ssl.o: ../../../../../third_party/tcpip/wolfssl/src/ssl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/615233400" 
	@${RM} ${OBJECTDIR}/_ext/615233400/ssl.o.d 
	@${RM} ${OBJECTDIR}/_ext/615233400/ssl.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/615233400/ssl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/615233400/ssl.o.d" -o ${OBJECTDIR}/_ext/615233400/ssl.o ../../../../../third_party/tcpip/wolfssl/src/ssl.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/615233400/tls.o: ../../../../../third_party/tcpip/wolfssl/src/tls.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/615233400" 
	@${RM} ${OBJECTDIR}/_ext/615233400/tls.o.d 
	@${RM} ${OBJECTDIR}/_ext/615233400/tls.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/615233400/tls.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/615233400/tls.o.d" -o ${OBJECTDIR}/_ext/615233400/tls.o ../../../../../third_party/tcpip/wolfssl/src/tls.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/asm.o: ../../../../../framework/crypto/src/asm.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/asm.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/asm.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/asm.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_REAL_ICE=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/asm.o.d" -o ${OBJECTDIR}/_ext/29024758/asm.o ../../../../../framework/crypto/src/asm.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
else
${OBJECTDIR}/_ext/1495834797/drv_flash_static.o: ../src/system_config/e16_encx24j600_spiflash/framework/driver/flash/src/drv_flash_static.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1495834797" 
	@${RM} ${OBJECTDIR}/_ext/1495834797/drv_flash_static.o.d 
	@${RM} ${OBJECTDIR}/_ext/1495834797/drv_flash_static.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1495834797/drv_flash_static.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1495834797/drv_flash_static.o.d" -o ${OBJECTDIR}/_ext/1495834797/drv_flash_static.o ../src/system_config/e16_encx24j600_spiflash/framework/driver/flash/src/drv_flash_static.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1676865386/drv_spi_tasks.o: ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_tasks.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1676865386" 
	@${RM} ${OBJECTDIR}/_ext/1676865386/drv_spi_tasks.o.d 
	@${RM} ${OBJECTDIR}/_ext/1676865386/drv_spi_tasks.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1676865386/drv_spi_tasks.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1676865386/drv_spi_tasks.o.d" -o ${OBJECTDIR}/_ext/1676865386/drv_spi_tasks.o ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_tasks.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1676865386/drv_spi_api.o: ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_api.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1676865386" 
	@${RM} ${OBJECTDIR}/_ext/1676865386/drv_spi_api.o.d 
	@${RM} ${OBJECTDIR}/_ext/1676865386/drv_spi_api.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1676865386/drv_spi_api.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1676865386/drv_spi_api.o.d" -o ${OBJECTDIR}/_ext/1676865386/drv_spi_api.o ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_api.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1676865386/drv_spi_master_ebm_tasks.o: ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_master_ebm_tasks.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1676865386" 
	@${RM} ${OBJECTDIR}/_ext/1676865386/drv_spi_master_ebm_tasks.o.d 
	@${RM} ${OBJECTDIR}/_ext/1676865386/drv_spi_master_ebm_tasks.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1676865386/drv_spi_master_ebm_tasks.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1676865386/drv_spi_master_ebm_tasks.o.d" -o ${OBJECTDIR}/_ext/1676865386/drv_spi_master_ebm_tasks.o ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_master_ebm_tasks.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1676865386/drv_spi_master_rm_tasks.o: ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_master_rm_tasks.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1676865386" 
	@${RM} ${OBJECTDIR}/_ext/1676865386/drv_spi_master_rm_tasks.o.d 
	@${RM} ${OBJECTDIR}/_ext/1676865386/drv_spi_master_rm_tasks.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1676865386/drv_spi_master_rm_tasks.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1676865386/drv_spi_master_rm_tasks.o.d" -o ${OBJECTDIR}/_ext/1676865386/drv_spi_master_rm_tasks.o ../src/system_config/e16_encx24j600_spiflash/framework/driver/spi/dynamic/drv_spi_master_rm_tasks.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/971131287/net_pres_enc_glue.o: ../src/system_config/e16_encx24j600_spiflash/framework/net/pres/net_pres_enc_glue.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/971131287" 
	@${RM} ${OBJECTDIR}/_ext/971131287/net_pres_enc_glue.o.d 
	@${RM} ${OBJECTDIR}/_ext/971131287/net_pres_enc_glue.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/971131287/net_pres_enc_glue.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/971131287/net_pres_enc_glue.o.d" -o ${OBJECTDIR}/_ext/971131287/net_pres_enc_glue.o ../src/system_config/e16_encx24j600_spiflash/framework/net/pres/net_pres_enc_glue.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/971131287/net_pres_cert_store.o: ../src/system_config/e16_encx24j600_spiflash/framework/net/pres/net_pres_cert_store.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/971131287" 
	@${RM} ${OBJECTDIR}/_ext/971131287/net_pres_cert_store.o.d 
	@${RM} ${OBJECTDIR}/_ext/971131287/net_pres_cert_store.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/971131287/net_pres_cert_store.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/971131287/net_pres_cert_store.o.d" -o ${OBJECTDIR}/_ext/971131287/net_pres_cert_store.o ../src/system_config/e16_encx24j600_spiflash/framework/net/pres/net_pres_cert_store.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/360868340/sys_clk_static.o: ../src/system_config/e16_encx24j600_spiflash/framework/system/clk/src/sys_clk_static.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/360868340" 
	@${RM} ${OBJECTDIR}/_ext/360868340/sys_clk_static.o.d 
	@${RM} ${OBJECTDIR}/_ext/360868340/sys_clk_static.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/360868340/sys_clk_static.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/360868340/sys_clk_static.o.d" -o ${OBJECTDIR}/_ext/360868340/sys_clk_static.o ../src/system_config/e16_encx24j600_spiflash/framework/system/clk/src/sys_clk_static.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/394705988/sys_ports_static.o: ../src/system_config/e16_encx24j600_spiflash/framework/system/ports/src/sys_ports_static.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/394705988" 
	@${RM} ${OBJECTDIR}/_ext/394705988/sys_ports_static.o.d 
	@${RM} ${OBJECTDIR}/_ext/394705988/sys_ports_static.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/394705988/sys_ports_static.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/394705988/sys_ports_static.o.d" -o ${OBJECTDIR}/_ext/394705988/sys_ports_static.o ../src/system_config/e16_encx24j600_spiflash/framework/system/ports/src/sys_ports_static.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/689678155/system_init.o: ../src/system_config/e16_encx24j600_spiflash/system_init.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/689678155" 
	@${RM} ${OBJECTDIR}/_ext/689678155/system_init.o.d 
	@${RM} ${OBJECTDIR}/_ext/689678155/system_init.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/689678155/system_init.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/689678155/system_init.o.d" -o ${OBJECTDIR}/_ext/689678155/system_init.o ../src/system_config/e16_encx24j600_spiflash/system_init.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/689678155/system_interrupt.o: ../src/system_config/e16_encx24j600_spiflash/system_interrupt.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/689678155" 
	@${RM} ${OBJECTDIR}/_ext/689678155/system_interrupt.o.d 
	@${RM} ${OBJECTDIR}/_ext/689678155/system_interrupt.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/689678155/system_interrupt.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/689678155/system_interrupt.o.d" -o ${OBJECTDIR}/_ext/689678155/system_interrupt.o ../src/system_config/e16_encx24j600_spiflash/system_interrupt.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/689678155/system_exceptions.o: ../src/system_config/e16_encx24j600_spiflash/system_exceptions.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/689678155" 
	@${RM} ${OBJECTDIR}/_ext/689678155/system_exceptions.o.d 
	@${RM} ${OBJECTDIR}/_ext/689678155/system_exceptions.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/689678155/system_exceptions.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/689678155/system_exceptions.o.d" -o ${OBJECTDIR}/_ext/689678155/system_exceptions.o ../src/system_config/e16_encx24j600_spiflash/system_exceptions.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/689678155/system_tasks.o: ../src/system_config/e16_encx24j600_spiflash/system_tasks.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/689678155" 
	@${RM} ${OBJECTDIR}/_ext/689678155/system_tasks.o.d 
	@${RM} ${OBJECTDIR}/_ext/689678155/system_tasks.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/689678155/system_tasks.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/689678155/system_tasks.o.d" -o ${OBJECTDIR}/_ext/689678155/system_tasks.o ../src/system_config/e16_encx24j600_spiflash/system_tasks.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/app.o: ../src/app.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/app.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/app.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1360937237/app.o.d" -o ${OBJECTDIR}/_ext/1360937237/app.o ../src/app.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/main.o: ../src/main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/main.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/main.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1360937237/main.o.d" -o ${OBJECTDIR}/_ext/1360937237/main.o ../src/main.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/http_print.o: ../src/http_print.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/http_print.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/http_print.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/http_print.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1360937237/http_print.o.d" -o ${OBJECTDIR}/_ext/1360937237/http_print.o ../src/http_print.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/custom_http_app.o: ../src/custom_http_app.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/custom_http_app.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/custom_http_app.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/custom_http_app.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1360937237/custom_http_app.o.d" -o ${OBJECTDIR}/_ext/1360937237/custom_http_app.o ../src/custom_http_app.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1360937237/mpfs_img2.o: ../src/mpfs_img2.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1360937237" 
	@${RM} ${OBJECTDIR}/_ext/1360937237/mpfs_img2.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937237/mpfs_img2.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937237/mpfs_img2.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1360937237/mpfs_img2.o.d" -o ${OBJECTDIR}/_ext/1360937237/mpfs_img2.o ../src/mpfs_img2.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/728775826/bsp_sys_init.o: ../../../../../bsp/pic32mx795_pim+e16/bsp_sys_init.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/728775826" 
	@${RM} ${OBJECTDIR}/_ext/728775826/bsp_sys_init.o.d 
	@${RM} ${OBJECTDIR}/_ext/728775826/bsp_sys_init.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/728775826/bsp_sys_init.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/728775826/bsp_sys_init.o.d" -o ${OBJECTDIR}/_ext/728775826/bsp_sys_init.o ../../../../../bsp/pic32mx795_pim+e16/bsp_sys_init.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/random.o: ../../../../../framework/crypto/src/random.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/random.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/random.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/random.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/random.o.d" -o ${OBJECTDIR}/_ext/29024758/random.o ../../../../../framework/crypto/src/random.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/arc4.o: ../../../../../framework/crypto/src/arc4.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/arc4.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/arc4.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/arc4.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/arc4.o.d" -o ${OBJECTDIR}/_ext/29024758/arc4.o ../../../../../framework/crypto/src/arc4.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/crypto.o: ../../../../../framework/crypto/src/crypto.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/crypto.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/crypto.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/crypto.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/crypto.o.d" -o ${OBJECTDIR}/_ext/29024758/crypto.o ../../../../../framework/crypto/src/crypto.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/md5.o: ../../../../../framework/crypto/src/md5.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/md5.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/md5.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/md5.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/md5.o.d" -o ${OBJECTDIR}/_ext/29024758/md5.o ../../../../../framework/crypto/src/md5.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/sha.o: ../../../../../framework/crypto/src/sha.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/sha.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/sha.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/sha.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/sha.o.d" -o ${OBJECTDIR}/_ext/29024758/sha.o ../../../../../framework/crypto/src/sha.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/coding.o: ../../../../../framework/crypto/src/coding.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/coding.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/coding.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/coding.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/coding.o.d" -o ${OBJECTDIR}/_ext/29024758/coding.o ../../../../../framework/crypto/src/coding.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/error.o: ../../../../../framework/crypto/src/error.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/error.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/error.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/error.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/error.o.d" -o ${OBJECTDIR}/_ext/29024758/error.o ../../../../../framework/crypto/src/error.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/integer.o: ../../../../../framework/crypto/src/integer.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/integer.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/integer.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/integer.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/integer.o.d" -o ${OBJECTDIR}/_ext/29024758/integer.o ../../../../../framework/crypto/src/integer.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/logging.o: ../../../../../framework/crypto/src/logging.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/logging.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/logging.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/logging.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/logging.o.d" -o ${OBJECTDIR}/_ext/29024758/logging.o ../../../../../framework/crypto/src/logging.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/memory.o: ../../../../../framework/crypto/src/memory.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/memory.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/memory.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/memory.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/memory.o.d" -o ${OBJECTDIR}/_ext/29024758/memory.o ../../../../../framework/crypto/src/memory.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/misc.o: ../../../../../framework/crypto/src/misc.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/misc.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/misc.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/misc.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/misc.o.d" -o ${OBJECTDIR}/_ext/29024758/misc.o ../../../../../framework/crypto/src/misc.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/port.o: ../../../../../framework/crypto/src/port.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/port.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/port.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/port.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/port.o.d" -o ${OBJECTDIR}/_ext/29024758/port.o ../../../../../framework/crypto/src/port.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/ecc.o: ../../../../../framework/crypto/src/ecc.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/ecc.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/ecc.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/ecc.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/ecc.o.d" -o ${OBJECTDIR}/_ext/29024758/ecc.o ../../../../../framework/crypto/src/ecc.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/pwdbased.o: ../../../../../framework/crypto/src/pwdbased.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/pwdbased.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/pwdbased.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/pwdbased.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/pwdbased.o.d" -o ${OBJECTDIR}/_ext/29024758/pwdbased.o ../../../../../framework/crypto/src/pwdbased.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/tfm.o: ../../../../../framework/crypto/src/tfm.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/tfm.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/tfm.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/tfm.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/tfm.o.d" -o ${OBJECTDIR}/_ext/29024758/tfm.o ../../../../../framework/crypto/src/tfm.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/asn.o: ../../../../../framework/crypto/src/asn.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/asn.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/asn.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/asn.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/asn.o.d" -o ${OBJECTDIR}/_ext/29024758/asn.o ../../../../../framework/crypto/src/asn.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/des3.o: ../../../../../framework/crypto/src/des3.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/des3.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/des3.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/des3.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/des3.o.d" -o ${OBJECTDIR}/_ext/29024758/des3.o ../../../../../framework/crypto/src/des3.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/rsa.o: ../../../../../framework/crypto/src/rsa.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/rsa.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/rsa.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/rsa.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/rsa.o.d" -o ${OBJECTDIR}/_ext/29024758/rsa.o ../../../../../framework/crypto/src/rsa.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/aes.o: ../../../../../framework/crypto/src/aes.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/aes.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/aes.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/aes.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/aes.o.d" -o ${OBJECTDIR}/_ext/29024758/aes.o ../../../../../framework/crypto/src/aes.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/sha256.o: ../../../../../framework/crypto/src/sha256.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/sha256.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/sha256.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/sha256.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/sha256.o.d" -o ${OBJECTDIR}/_ext/29024758/sha256.o ../../../../../framework/crypto/src/sha256.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/sha512.o: ../../../../../framework/crypto/src/sha512.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/sha512.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/sha512.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/sha512.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/sha512.o.d" -o ${OBJECTDIR}/_ext/29024758/sha512.o ../../../../../framework/crypto/src/sha512.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/hmac.o: ../../../../../framework/crypto/src/hmac.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/hmac.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/hmac.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/hmac.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/hmac.o.d" -o ${OBJECTDIR}/_ext/29024758/hmac.o ../../../../../framework/crypto/src/hmac.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/hash.o: ../../../../../framework/crypto/src/hash.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/hash.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/hash.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/hash.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/hash.o.d" -o ${OBJECTDIR}/_ext/29024758/hash.o ../../../../../framework/crypto/src/hash.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/compress.o: ../../../../../framework/crypto/src/compress.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/compress.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/compress.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/compress.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/compress.o.d" -o ${OBJECTDIR}/_ext/29024758/compress.o ../../../../../framework/crypto/src/compress.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/2115314394/drv_encx24j600_spi_bus.o: ../../../../../framework/driver/encx24j600/src/dynamic/bus/spi/drv_encx24j600_spi_bus.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2115314394" 
	@${RM} ${OBJECTDIR}/_ext/2115314394/drv_encx24j600_spi_bus.o.d 
	@${RM} ${OBJECTDIR}/_ext/2115314394/drv_encx24j600_spi_bus.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2115314394/drv_encx24j600_spi_bus.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/2115314394/drv_encx24j600_spi_bus.o.d" -o ${OBJECTDIR}/_ext/2115314394/drv_encx24j600_spi_bus.o ../../../../../framework/driver/encx24j600/src/dynamic/bus/spi/drv_encx24j600_spi_bus.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1455582699/drv_encx24j600_closed_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/closed_state/drv_encx24j600_closed_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1455582699" 
	@${RM} ${OBJECTDIR}/_ext/1455582699/drv_encx24j600_closed_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/1455582699/drv_encx24j600_closed_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1455582699/drv_encx24j600_closed_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1455582699/drv_encx24j600_closed_state.o.d" -o ${OBJECTDIR}/_ext/1455582699/drv_encx24j600_closed_state.o ../../../../../framework/driver/encx24j600/src/dynamic/closed_state/drv_encx24j600_closed_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1730942135/drv_encx24j600_initialization_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_initialization_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1730942135" 
	@${RM} ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_initialization_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_initialization_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1730942135/drv_encx24j600_initialization_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1730942135/drv_encx24j600_initialization_state.o.d" -o ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_initialization_state.o ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_initialization_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1730942135/drv_encx24j600_configure_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_configure_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1730942135" 
	@${RM} ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_configure_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_configure_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1730942135/drv_encx24j600_configure_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1730942135/drv_encx24j600_configure_state.o.d" -o ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_configure_state.o ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_configure_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1730942135/drv_encx24j600_detect_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_detect_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1730942135" 
	@${RM} ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_detect_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_detect_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1730942135/drv_encx24j600_detect_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1730942135/drv_encx24j600_detect_state.o.d" -o ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_detect_state.o ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_detect_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1730942135/drv_encx24j600_reset_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_reset_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1730942135" 
	@${RM} ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_reset_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_reset_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1730942135/drv_encx24j600_reset_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1730942135/drv_encx24j600_reset_state.o.d" -o ${OBJECTDIR}/_ext/1730942135/drv_encx24j600_reset_state.o ../../../../../framework/driver/encx24j600/src/dynamic/initialization_state/drv_encx24j600_reset_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1210338337/drv_encx24j600_tx_packet.o: ../../../../../framework/driver/encx24j600/src/dynamic/packet/drv_encx24j600_tx_packet.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1210338337" 
	@${RM} ${OBJECTDIR}/_ext/1210338337/drv_encx24j600_tx_packet.o.d 
	@${RM} ${OBJECTDIR}/_ext/1210338337/drv_encx24j600_tx_packet.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1210338337/drv_encx24j600_tx_packet.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1210338337/drv_encx24j600_tx_packet.o.d" -o ${OBJECTDIR}/_ext/1210338337/drv_encx24j600_tx_packet.o ../../../../../framework/driver/encx24j600/src/dynamic/packet/drv_encx24j600_tx_packet.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1210338337/drv_encx24j600_rx_packet.o: ../../../../../framework/driver/encx24j600/src/dynamic/packet/drv_encx24j600_rx_packet.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1210338337" 
	@${RM} ${OBJECTDIR}/_ext/1210338337/drv_encx24j600_rx_packet.o.d 
	@${RM} ${OBJECTDIR}/_ext/1210338337/drv_encx24j600_rx_packet.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1210338337/drv_encx24j600_rx_packet.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1210338337/drv_encx24j600_rx_packet.o.d" -o ${OBJECTDIR}/_ext/1210338337/drv_encx24j600_rx_packet.o ../../../../../framework/driver/encx24j600/src/dynamic/packet/drv_encx24j600_rx_packet.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1207282394/drv_encx24j600_running_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_running_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1207282394" 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_running_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_running_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_running_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_running_state.o.d" -o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_running_state.o ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_running_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1207282394/drv_encx24j600_change_duplex_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_change_duplex_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1207282394" 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_change_duplex_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_change_duplex_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_change_duplex_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_change_duplex_state.o.d" -o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_change_duplex_state.o ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_change_duplex_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_int_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_check_int_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1207282394" 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_int_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_int_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_int_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_int_state.o.d" -o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_int_state.o ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_check_int_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_status_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_check_status_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1207282394" 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_status_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_status_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_status_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_status_state.o.d" -o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_status_state.o ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_check_status_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_tx_status_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_check_tx_status_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1207282394" 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_tx_status_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_tx_status_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_tx_status_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_tx_status_state.o.d" -o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_check_tx_status_state.o ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_check_tx_status_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1207282394/drv_encx24j600_reset_rx_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_reset_rx_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1207282394" 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_reset_rx_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_reset_rx_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_reset_rx_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1207282394/drv_encx24j600_reset_rx_state.o.d" -o ${OBJECTDIR}/_ext/1207282394/drv_encx24j600_reset_rx_state.o ../../../../../framework/driver/encx24j600/src/dynamic/running_state/drv_encx24j600_reset_rx_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/772120936/drv_encx24j600_api.o: ../../../../../framework/driver/encx24j600/src/dynamic/drv_encx24j600_api.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/772120936" 
	@${RM} ${OBJECTDIR}/_ext/772120936/drv_encx24j600_api.o.d 
	@${RM} ${OBJECTDIR}/_ext/772120936/drv_encx24j600_api.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/772120936/drv_encx24j600_api.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/772120936/drv_encx24j600_api.o.d" -o ${OBJECTDIR}/_ext/772120936/drv_encx24j600_api.o ../../../../../framework/driver/encx24j600/src/dynamic/drv_encx24j600_api.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/772120936/drv_encx24j600_main_state.o: ../../../../../framework/driver/encx24j600/src/dynamic/drv_encx24j600_main_state.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/772120936" 
	@${RM} ${OBJECTDIR}/_ext/772120936/drv_encx24j600_main_state.o.d 
	@${RM} ${OBJECTDIR}/_ext/772120936/drv_encx24j600_main_state.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/772120936/drv_encx24j600_main_state.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/772120936/drv_encx24j600_main_state.o.d" -o ${OBJECTDIR}/_ext/772120936/drv_encx24j600_main_state.o ../../../../../framework/driver/encx24j600/src/dynamic/drv_encx24j600_main_state.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/772120936/drv_encx24j600_utils.o: ../../../../../framework/driver/encx24j600/src/dynamic/drv_encx24j600_utils.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/772120936" 
	@${RM} ${OBJECTDIR}/_ext/772120936/drv_encx24j600_utils.o.d 
	@${RM} ${OBJECTDIR}/_ext/772120936/drv_encx24j600_utils.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/772120936/drv_encx24j600_utils.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/772120936/drv_encx24j600_utils.o.d" -o ${OBJECTDIR}/_ext/772120936/drv_encx24j600_utils.o ../../../../../framework/driver/encx24j600/src/dynamic/drv_encx24j600_utils.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1324760662/drv_spi.o: ../../../../../framework/driver/spi/src/dynamic/drv_spi.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1324760662" 
	@${RM} ${OBJECTDIR}/_ext/1324760662/drv_spi.o.d 
	@${RM} ${OBJECTDIR}/_ext/1324760662/drv_spi.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1324760662/drv_spi.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1324760662/drv_spi.o.d" -o ${OBJECTDIR}/_ext/1324760662/drv_spi.o ../../../../../framework/driver/spi/src/dynamic/drv_spi.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1385053818/drv_spi_sys_queue_fifo.o: ../../../../../framework/driver/spi/src/drv_spi_sys_queue_fifo.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1385053818" 
	@${RM} ${OBJECTDIR}/_ext/1385053818/drv_spi_sys_queue_fifo.o.d 
	@${RM} ${OBJECTDIR}/_ext/1385053818/drv_spi_sys_queue_fifo.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1385053818/drv_spi_sys_queue_fifo.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1385053818/drv_spi_sys_queue_fifo.o.d" -o ${OBJECTDIR}/_ext/1385053818/drv_spi_sys_queue_fifo.o ../../../../../framework/driver/spi/src/drv_spi_sys_queue_fifo.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1112873152/drv_sst25vf016b.o: ../../../../../framework/driver/spi_flash/sst25vf016b/src/dynamic/drv_sst25vf016b.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1112873152" 
	@${RM} ${OBJECTDIR}/_ext/1112873152/drv_sst25vf016b.o.d 
	@${RM} ${OBJECTDIR}/_ext/1112873152/drv_sst25vf016b.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1112873152/drv_sst25vf016b.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1112873152/drv_sst25vf016b.o.d" -o ${OBJECTDIR}/_ext/1112873152/drv_sst25vf016b.o ../../../../../framework/driver/spi_flash/sst25vf016b/src/dynamic/drv_sst25vf016b.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1335609251/SPIFlash.o: ../../../../../framework/driver/spi_flash/sst25vf016b/src/mla/SPIFlash.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1335609251" 
	@${RM} ${OBJECTDIR}/_ext/1335609251/SPIFlash.o.d 
	@${RM} ${OBJECTDIR}/_ext/1335609251/SPIFlash.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1335609251/SPIFlash.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1335609251/SPIFlash.o.d" -o ${OBJECTDIR}/_ext/1335609251/SPIFlash.o ../../../../../framework/driver/spi_flash/sst25vf016b/src/mla/SPIFlash.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/941160041/drv_tmr.o: ../../../../../framework/driver/tmr/src/dynamic/drv_tmr.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/941160041" 
	@${RM} ${OBJECTDIR}/_ext/941160041/drv_tmr.o.d 
	@${RM} ${OBJECTDIR}/_ext/941160041/drv_tmr.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/941160041/drv_tmr.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/941160041/drv_tmr.o.d" -o ${OBJECTDIR}/_ext/941160041/drv_tmr.o ../../../../../framework/driver/tmr/src/dynamic/drv_tmr.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/821589181/drv_usart.o: ../../../../../framework/driver/usart/src/dynamic/drv_usart.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/821589181" 
	@${RM} ${OBJECTDIR}/_ext/821589181/drv_usart.o.d 
	@${RM} ${OBJECTDIR}/_ext/821589181/drv_usart.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/821589181/drv_usart.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/821589181/drv_usart.o.d" -o ${OBJECTDIR}/_ext/821589181/drv_usart.o ../../../../../framework/driver/usart/src/dynamic/drv_usart.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/821589181/drv_usart_buffer_queue.o: ../../../../../framework/driver/usart/src/dynamic/drv_usart_buffer_queue.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/821589181" 
	@${RM} ${OBJECTDIR}/_ext/821589181/drv_usart_buffer_queue.o.d 
	@${RM} ${OBJECTDIR}/_ext/821589181/drv_usart_buffer_queue.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/821589181/drv_usart_buffer_queue.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/821589181/drv_usart_buffer_queue.o.d" -o ${OBJECTDIR}/_ext/821589181/drv_usart_buffer_queue.o ../../../../../framework/driver/usart/src/dynamic/drv_usart_buffer_queue.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/821589181/drv_usart_read_write.o: ../../../../../framework/driver/usart/src/dynamic/drv_usart_read_write.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/821589181" 
	@${RM} ${OBJECTDIR}/_ext/821589181/drv_usart_read_write.o.d 
	@${RM} ${OBJECTDIR}/_ext/821589181/drv_usart_read_write.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/821589181/drv_usart_read_write.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/821589181/drv_usart_read_write.o.d" -o ${OBJECTDIR}/_ext/821589181/drv_usart_read_write.o ../../../../../framework/driver/usart/src/dynamic/drv_usart_read_write.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1595536294/UART.o: ../../../../../framework/driver/usart/src/mla/UART.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1595536294" 
	@${RM} ${OBJECTDIR}/_ext/1595536294/UART.o.d 
	@${RM} ${OBJECTDIR}/_ext/1595536294/UART.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1595536294/UART.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1595536294/UART.o.d" -o ${OBJECTDIR}/_ext/1595536294/UART.o ../../../../../framework/driver/usart/src/mla/UART.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/871719959/net_pres.o: ../../../../../framework/net/pres/src/net_pres.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/871719959" 
	@${RM} ${OBJECTDIR}/_ext/871719959/net_pres.o.d 
	@${RM} ${OBJECTDIR}/_ext/871719959/net_pres.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/871719959/net_pres.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/871719959/net_pres.o.d" -o ${OBJECTDIR}/_ext/871719959/net_pres.o ../../../../../framework/net/pres/src/net_pres.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1891376032/sys_command.o: ../../../../../framework/system/command/src/sys_command.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1891376032" 
	@${RM} ${OBJECTDIR}/_ext/1891376032/sys_command.o.d 
	@${RM} ${OBJECTDIR}/_ext/1891376032/sys_command.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1891376032/sys_command.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1891376032/sys_command.o.d" -o ${OBJECTDIR}/_ext/1891376032/sys_command.o ../../../../../framework/system/command/src/sys_command.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/598853952/sys_buffer.o: ../../../../../framework/system/common/src/sys_buffer.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/598853952" 
	@${RM} ${OBJECTDIR}/_ext/598853952/sys_buffer.o.d 
	@${RM} ${OBJECTDIR}/_ext/598853952/sys_buffer.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/598853952/sys_buffer.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/598853952/sys_buffer.o.d" -o ${OBJECTDIR}/_ext/598853952/sys_buffer.o ../../../../../framework/system/common/src/sys_buffer.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/598853952/sys_queue.o: ../../../../../framework/system/common/src/sys_queue.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/598853952" 
	@${RM} ${OBJECTDIR}/_ext/598853952/sys_queue.o.d 
	@${RM} ${OBJECTDIR}/_ext/598853952/sys_queue.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/598853952/sys_queue.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/598853952/sys_queue.o.d" -o ${OBJECTDIR}/_ext/598853952/sys_queue.o ../../../../../framework/system/common/src/sys_queue.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1434663852/sys_console.o: ../../../../../framework/system/console/src/sys_console.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1434663852" 
	@${RM} ${OBJECTDIR}/_ext/1434663852/sys_console.o.d 
	@${RM} ${OBJECTDIR}/_ext/1434663852/sys_console.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1434663852/sys_console.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1434663852/sys_console.o.d" -o ${OBJECTDIR}/_ext/1434663852/sys_console.o ../../../../../framework/system/console/src/sys_console.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1434663852/sys_console_uart.o: ../../../../../framework/system/console/src/sys_console_uart.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1434663852" 
	@${RM} ${OBJECTDIR}/_ext/1434663852/sys_console_uart.o.d 
	@${RM} ${OBJECTDIR}/_ext/1434663852/sys_console_uart.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1434663852/sys_console_uart.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1434663852/sys_console_uart.o.d" -o ${OBJECTDIR}/_ext/1434663852/sys_console_uart.o ../../../../../framework/system/console/src/sys_console_uart.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/2137108136/sys_debug.o: ../../../../../framework/system/debug/src/sys_debug.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2137108136" 
	@${RM} ${OBJECTDIR}/_ext/2137108136/sys_debug.o.d 
	@${RM} ${OBJECTDIR}/_ext/2137108136/sys_debug.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2137108136/sys_debug.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/2137108136/sys_debug.o.d" -o ${OBJECTDIR}/_ext/2137108136/sys_debug.o ../../../../../framework/system/debug/src/sys_debug.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/482662494/sys_devcon.o: ../../../../../framework/system/devcon/src/sys_devcon.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/482662494" 
	@${RM} ${OBJECTDIR}/_ext/482662494/sys_devcon.o.d 
	@${RM} ${OBJECTDIR}/_ext/482662494/sys_devcon.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/482662494/sys_devcon.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/482662494/sys_devcon.o.d" -o ${OBJECTDIR}/_ext/482662494/sys_devcon.o ../../../../../framework/system/devcon/src/sys_devcon.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/482662494/sys_devcon_pic32mx.o: ../../../../../framework/system/devcon/src/sys_devcon_pic32mx.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/482662494" 
	@${RM} ${OBJECTDIR}/_ext/482662494/sys_devcon_pic32mx.o.d 
	@${RM} ${OBJECTDIR}/_ext/482662494/sys_devcon_pic32mx.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/482662494/sys_devcon_pic32mx.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/482662494/sys_devcon_pic32mx.o.d" -o ${OBJECTDIR}/_ext/482662494/sys_devcon_pic32mx.o ../../../../../framework/system/devcon/src/sys_devcon_pic32mx.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1750042194/sys_fs.o: ../../../../../framework/system/fs/src/dynamic/sys_fs.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1750042194" 
	@${RM} ${OBJECTDIR}/_ext/1750042194/sys_fs.o.d 
	@${RM} ${OBJECTDIR}/_ext/1750042194/sys_fs.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1750042194/sys_fs.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1750042194/sys_fs.o.d" -o ${OBJECTDIR}/_ext/1750042194/sys_fs.o ../../../../../framework/system/fs/src/dynamic/sys_fs.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1750042194/sys_fs_media_manager.o: ../../../../../framework/system/fs/src/dynamic/sys_fs_media_manager.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1750042194" 
	@${RM} ${OBJECTDIR}/_ext/1750042194/sys_fs_media_manager.o.d 
	@${RM} ${OBJECTDIR}/_ext/1750042194/sys_fs_media_manager.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1750042194/sys_fs_media_manager.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1750042194/sys_fs_media_manager.o.d" -o ${OBJECTDIR}/_ext/1750042194/sys_fs_media_manager.o ../../../../../framework/system/fs/src/dynamic/sys_fs_media_manager.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/614935175/mpfs.o: ../../../../../framework/system/fs/mpfs/src/mpfs.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/614935175" 
	@${RM} ${OBJECTDIR}/_ext/614935175/mpfs.o.d 
	@${RM} ${OBJECTDIR}/_ext/614935175/mpfs.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/614935175/mpfs.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/614935175/mpfs.o.d" -o ${OBJECTDIR}/_ext/614935175/mpfs.o ../../../../../framework/system/fs/mpfs/src/mpfs.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1042686532/sys_int_pic32.o: ../../../../../framework/system/int/src/sys_int_pic32.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1042686532" 
	@${RM} ${OBJECTDIR}/_ext/1042686532/sys_int_pic32.o.d 
	@${RM} ${OBJECTDIR}/_ext/1042686532/sys_int_pic32.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1042686532/sys_int_pic32.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1042686532/sys_int_pic32.o.d" -o ${OBJECTDIR}/_ext/1042686532/sys_int_pic32.o ../../../../../framework/system/int/src/sys_int_pic32.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/470001640/sys_random.o: ../../../../../framework/system/random/src/sys_random.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/470001640" 
	@${RM} ${OBJECTDIR}/_ext/470001640/sys_random.o.d 
	@${RM} ${OBJECTDIR}/_ext/470001640/sys_random.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/470001640/sys_random.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/470001640/sys_random.o.d" -o ${OBJECTDIR}/_ext/470001640/sys_random.o ../../../../../framework/system/random/src/sys_random.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/64182180/sys_reset.o: ../../../../../framework/system/reset/src/sys_reset.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/64182180" 
	@${RM} ${OBJECTDIR}/_ext/64182180/sys_reset.o.d 
	@${RM} ${OBJECTDIR}/_ext/64182180/sys_reset.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/64182180/sys_reset.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/64182180/sys_reset.o.d" -o ${OBJECTDIR}/_ext/64182180/sys_reset.o ../../../../../framework/system/reset/src/sys_reset.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/2110151058/sys_tmr.o: ../../../../../framework/system/tmr/src/sys_tmr.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/2110151058" 
	@${RM} ${OBJECTDIR}/_ext/2110151058/sys_tmr.o.d 
	@${RM} ${OBJECTDIR}/_ext/2110151058/sys_tmr.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2110151058/sys_tmr.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/2110151058/sys_tmr.o.d" -o ${OBJECTDIR}/_ext/2110151058/sys_tmr.o ../../../../../framework/system/tmr/src/sys_tmr.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1886247299/sys_fs_wrapper.o: ../../../../../framework/tcpip/src/common/sys_fs_wrapper.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1886247299" 
	@${RM} ${OBJECTDIR}/_ext/1886247299/sys_fs_wrapper.o.d 
	@${RM} ${OBJECTDIR}/_ext/1886247299/sys_fs_wrapper.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1886247299/sys_fs_wrapper.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1886247299/sys_fs_wrapper.o.d" -o ${OBJECTDIR}/_ext/1886247299/sys_fs_wrapper.o ../../../../../framework/tcpip/src/common/sys_fs_wrapper.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1886247299/helpers.o: ../../../../../framework/tcpip/src/common/helpers.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1886247299" 
	@${RM} ${OBJECTDIR}/_ext/1886247299/helpers.o.d 
	@${RM} ${OBJECTDIR}/_ext/1886247299/helpers.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1886247299/helpers.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1886247299/helpers.o.d" -o ${OBJECTDIR}/_ext/1886247299/helpers.o ../../../../../framework/tcpip/src/common/helpers.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/tcp.o: ../../../../../framework/tcpip/src/tcp.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcp.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcp.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/tcp.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/tcp.o.d" -o ${OBJECTDIR}/_ext/1164207549/tcp.o ../../../../../framework/tcpip/src/tcp.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/udp.o: ../../../../../framework/tcpip/src/udp.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/udp.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/udp.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/udp.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/udp.o.d" -o ${OBJECTDIR}/_ext/1164207549/udp.o ../../../../../framework/tcpip/src/udp.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/arp.o: ../../../../../framework/tcpip/src/arp.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/arp.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/arp.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/arp.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/arp.o.d" -o ${OBJECTDIR}/_ext/1164207549/arp.o ../../../../../framework/tcpip/src/arp.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/dhcp.o: ../../../../../framework/tcpip/src/dhcp.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/dhcp.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/dhcp.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/dhcp.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/dhcp.o.d" -o ${OBJECTDIR}/_ext/1164207549/dhcp.o ../../../../../framework/tcpip/src/dhcp.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/dns.o: ../../../../../framework/tcpip/src/dns.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/dns.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/dns.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/dns.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/dns.o.d" -o ${OBJECTDIR}/_ext/1164207549/dns.o ../../../../../framework/tcpip/src/dns.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/http.o: ../../../../../framework/tcpip/src/http.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/http.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/http.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/http.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/http.o.d" -o ${OBJECTDIR}/_ext/1164207549/http.o ../../../../../framework/tcpip/src/http.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/nbns.o: ../../../../../framework/tcpip/src/nbns.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/nbns.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/nbns.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/nbns.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/nbns.o.d" -o ${OBJECTDIR}/_ext/1164207549/nbns.o ../../../../../framework/tcpip/src/nbns.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/smtp.o: ../../../../../framework/tcpip/src/smtp.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/smtp.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/smtp.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/smtp.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/smtp.o.d" -o ${OBJECTDIR}/_ext/1164207549/smtp.o ../../../../../framework/tcpip/src/smtp.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/tcpip_announce.o: ../../../../../framework/tcpip/src/tcpip_announce.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_announce.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_announce.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/tcpip_announce.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/tcpip_announce.o.d" -o ${OBJECTDIR}/_ext/1164207549/tcpip_announce.o ../../../../../framework/tcpip/src/tcpip_announce.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/tcpip_commands.o: ../../../../../framework/tcpip/src/tcpip_commands.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_commands.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_commands.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/tcpip_commands.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/tcpip_commands.o.d" -o ${OBJECTDIR}/_ext/1164207549/tcpip_commands.o ../../../../../framework/tcpip/src/tcpip_commands.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/hash_fnv.o: ../../../../../framework/tcpip/src/hash_fnv.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/hash_fnv.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/hash_fnv.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/hash_fnv.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/hash_fnv.o.d" -o ${OBJECTDIR}/_ext/1164207549/hash_fnv.o ../../../../../framework/tcpip/src/hash_fnv.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/oahash.o: ../../../../../framework/tcpip/src/oahash.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/oahash.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/oahash.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/oahash.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/oahash.o.d" -o ${OBJECTDIR}/_ext/1164207549/oahash.o ../../../../../framework/tcpip/src/oahash.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/tcpip_heap_alloc.o: ../../../../../framework/tcpip/src/tcpip_heap_alloc.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_heap_alloc.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_heap_alloc.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/tcpip_heap_alloc.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/tcpip_heap_alloc.o.d" -o ${OBJECTDIR}/_ext/1164207549/tcpip_heap_alloc.o ../../../../../framework/tcpip/src/tcpip_heap_alloc.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/tcpip_helpers.o: ../../../../../framework/tcpip/src/tcpip_helpers.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_helpers.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_helpers.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/tcpip_helpers.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/tcpip_helpers.o.d" -o ${OBJECTDIR}/_ext/1164207549/tcpip_helpers.o ../../../../../framework/tcpip/src/tcpip_helpers.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/tcpip_manager.o: ../../../../../framework/tcpip/src/tcpip_manager.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_manager.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_manager.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/tcpip_manager.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/tcpip_manager.o.d" -o ${OBJECTDIR}/_ext/1164207549/tcpip_manager.o ../../../../../framework/tcpip/src/tcpip_manager.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/tcpip_notify.o: ../../../../../framework/tcpip/src/tcpip_notify.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_notify.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_notify.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/tcpip_notify.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/tcpip_notify.o.d" -o ${OBJECTDIR}/_ext/1164207549/tcpip_notify.o ../../../../../framework/tcpip/src/tcpip_notify.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/tcpip_packet.o: ../../../../../framework/tcpip/src/tcpip_packet.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_packet.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_packet.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/tcpip_packet.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/tcpip_packet.o.d" -o ${OBJECTDIR}/_ext/1164207549/tcpip_packet.o ../../../../../framework/tcpip/src/tcpip_packet.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/ipv4.o: ../../../../../framework/tcpip/src/ipv4.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/ipv4.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/ipv4.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/ipv4.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/ipv4.o.d" -o ${OBJECTDIR}/_ext/1164207549/ipv4.o ../../../../../framework/tcpip/src/ipv4.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/sntp.o: ../../../../../framework/tcpip/src/sntp.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/sntp.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/sntp.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/sntp.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/sntp.o.d" -o ${OBJECTDIR}/_ext/1164207549/sntp.o ../../../../../framework/tcpip/src/sntp.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/tcpip_heap_internal.o: ../../../../../framework/tcpip/src/tcpip_heap_internal.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_heap_internal.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/tcpip_heap_internal.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/tcpip_heap_internal.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/tcpip_heap_internal.o.d" -o ${OBJECTDIR}/_ext/1164207549/tcpip_heap_internal.o ../../../../../framework/tcpip/src/tcpip_heap_internal.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/icmp.o: ../../../../../framework/tcpip/src/icmp.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/icmp.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/icmp.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/icmp.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/icmp.o.d" -o ${OBJECTDIR}/_ext/1164207549/icmp.o ../../../../../framework/tcpip/src/icmp.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/dhcps.o: ../../../../../framework/tcpip/src/dhcps.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/dhcps.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/dhcps.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/dhcps.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/dhcps.o.d" -o ${OBJECTDIR}/_ext/1164207549/dhcps.o ../../../../../framework/tcpip/src/dhcps.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1164207549/ddns.o: ../../../../../framework/tcpip/src/ddns.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1164207549" 
	@${RM} ${OBJECTDIR}/_ext/1164207549/ddns.o.d 
	@${RM} ${OBJECTDIR}/_ext/1164207549/ddns.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1164207549/ddns.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1164207549/ddns.o.d" -o ${OBJECTDIR}/_ext/1164207549/ddns.o ../../../../../framework/tcpip/src/ddns.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/asm.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/asm.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/asm.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/asm.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/asm.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/asm.o.d" -o ${OBJECTDIR}/_ext/1699919941/asm.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/asm.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/blake2b.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/blake2b.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/blake2b.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/blake2b.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/blake2b.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/blake2b.o.d" -o ${OBJECTDIR}/_ext/1699919941/blake2b.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/blake2b.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/camellia.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/camellia.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/camellia.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/camellia.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/camellia.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/camellia.o.d" -o ${OBJECTDIR}/_ext/1699919941/camellia.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/camellia.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/chacha.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/chacha.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/chacha.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/chacha.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/chacha.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/chacha.o.d" -o ${OBJECTDIR}/_ext/1699919941/chacha.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/chacha.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/chacha20_poly1305.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/chacha20_poly1305.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/chacha20_poly1305.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/chacha20_poly1305.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/chacha20_poly1305.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/chacha20_poly1305.o.d" -o ${OBJECTDIR}/_ext/1699919941/chacha20_poly1305.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/chacha20_poly1305.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/curve25519.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/curve25519.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/curve25519.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/curve25519.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/curve25519.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/curve25519.o.d" -o ${OBJECTDIR}/_ext/1699919941/curve25519.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/curve25519.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/dh.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/dh.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/dh.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/dh.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/dh.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/dh.o.d" -o ${OBJECTDIR}/_ext/1699919941/dh.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/dh.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/dsa.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/dsa.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/dsa.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/dsa.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/dsa.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/dsa.o.d" -o ${OBJECTDIR}/_ext/1699919941/dsa.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/dsa.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/ecc_fp.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ecc_fp.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/ecc_fp.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/ecc_fp.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/ecc_fp.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/ecc_fp.o.d" -o ${OBJECTDIR}/_ext/1699919941/ecc_fp.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ecc_fp.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/ed25519.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ed25519.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/ed25519.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/ed25519.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/ed25519.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/ed25519.o.d" -o ${OBJECTDIR}/_ext/1699919941/ed25519.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ed25519.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/fe_low_mem.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/fe_low_mem.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/fe_low_mem.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/fe_low_mem.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/fe_low_mem.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/fe_low_mem.o.d" -o ${OBJECTDIR}/_ext/1699919941/fe_low_mem.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/fe_low_mem.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/fe_operations.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/fe_operations.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/fe_operations.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/fe_operations.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/fe_operations.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/fe_operations.o.d" -o ${OBJECTDIR}/_ext/1699919941/fe_operations.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/fe_operations.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/ge_low_mem.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ge_low_mem.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/ge_low_mem.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/ge_low_mem.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/ge_low_mem.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/ge_low_mem.o.d" -o ${OBJECTDIR}/_ext/1699919941/ge_low_mem.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ge_low_mem.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/ge_operations.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ge_operations.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/ge_operations.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/ge_operations.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/ge_operations.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/ge_operations.o.d" -o ${OBJECTDIR}/_ext/1699919941/ge_operations.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ge_operations.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/hc128.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/hc128.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/hc128.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/hc128.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/hc128.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/hc128.o.d" -o ${OBJECTDIR}/_ext/1699919941/hc128.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/hc128.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/md2.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/md2.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/md2.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/md2.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/md2.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/md2.o.d" -o ${OBJECTDIR}/_ext/1699919941/md2.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/md2.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/md4.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/md4.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/md4.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/md4.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/md4.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/md4.o.d" -o ${OBJECTDIR}/_ext/1699919941/md4.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/md4.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/pkcs7.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/pkcs7.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/pkcs7.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/pkcs7.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/pkcs7.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/pkcs7.o.d" -o ${OBJECTDIR}/_ext/1699919941/pkcs7.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/pkcs7.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/poly1305.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/poly1305.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/poly1305.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/poly1305.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/poly1305.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/poly1305.o.d" -o ${OBJECTDIR}/_ext/1699919941/poly1305.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/poly1305.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/rabbit.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/rabbit.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/rabbit.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/rabbit.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/rabbit.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/rabbit.o.d" -o ${OBJECTDIR}/_ext/1699919941/rabbit.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/rabbit.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/1699919941/ripemd.o: ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ripemd.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1699919941" 
	@${RM} ${OBJECTDIR}/_ext/1699919941/ripemd.o.d 
	@${RM} ${OBJECTDIR}/_ext/1699919941/ripemd.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1699919941/ripemd.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/1699919941/ripemd.o.d" -o ${OBJECTDIR}/_ext/1699919941/ripemd.o ../../../../../third_party/tcpip/wolfssl/wolfcrypt/src/ripemd.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/615233400/crl.o: ../../../../../third_party/tcpip/wolfssl/src/crl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/615233400" 
	@${RM} ${OBJECTDIR}/_ext/615233400/crl.o.d 
	@${RM} ${OBJECTDIR}/_ext/615233400/crl.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/615233400/crl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/615233400/crl.o.d" -o ${OBJECTDIR}/_ext/615233400/crl.o ../../../../../third_party/tcpip/wolfssl/src/crl.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/615233400/internal.o: ../../../../../third_party/tcpip/wolfssl/src/internal.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/615233400" 
	@${RM} ${OBJECTDIR}/_ext/615233400/internal.o.d 
	@${RM} ${OBJECTDIR}/_ext/615233400/internal.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/615233400/internal.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/615233400/internal.o.d" -o ${OBJECTDIR}/_ext/615233400/internal.o ../../../../../third_party/tcpip/wolfssl/src/internal.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/615233400/io.o: ../../../../../third_party/tcpip/wolfssl/src/io.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/615233400" 
	@${RM} ${OBJECTDIR}/_ext/615233400/io.o.d 
	@${RM} ${OBJECTDIR}/_ext/615233400/io.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/615233400/io.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/615233400/io.o.d" -o ${OBJECTDIR}/_ext/615233400/io.o ../../../../../third_party/tcpip/wolfssl/src/io.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/615233400/keys.o: ../../../../../third_party/tcpip/wolfssl/src/keys.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/615233400" 
	@${RM} ${OBJECTDIR}/_ext/615233400/keys.o.d 
	@${RM} ${OBJECTDIR}/_ext/615233400/keys.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/615233400/keys.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/615233400/keys.o.d" -o ${OBJECTDIR}/_ext/615233400/keys.o ../../../../../third_party/tcpip/wolfssl/src/keys.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/615233400/ocsp.o: ../../../../../third_party/tcpip/wolfssl/src/ocsp.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/615233400" 
	@${RM} ${OBJECTDIR}/_ext/615233400/ocsp.o.d 
	@${RM} ${OBJECTDIR}/_ext/615233400/ocsp.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/615233400/ocsp.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/615233400/ocsp.o.d" -o ${OBJECTDIR}/_ext/615233400/ocsp.o ../../../../../third_party/tcpip/wolfssl/src/ocsp.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/615233400/sniffer.o: ../../../../../third_party/tcpip/wolfssl/src/sniffer.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/615233400" 
	@${RM} ${OBJECTDIR}/_ext/615233400/sniffer.o.d 
	@${RM} ${OBJECTDIR}/_ext/615233400/sniffer.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/615233400/sniffer.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/615233400/sniffer.o.d" -o ${OBJECTDIR}/_ext/615233400/sniffer.o ../../../../../third_party/tcpip/wolfssl/src/sniffer.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/615233400/ssl.o: ../../../../../third_party/tcpip/wolfssl/src/ssl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/615233400" 
	@${RM} ${OBJECTDIR}/_ext/615233400/ssl.o.d 
	@${RM} ${OBJECTDIR}/_ext/615233400/ssl.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/615233400/ssl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/615233400/ssl.o.d" -o ${OBJECTDIR}/_ext/615233400/ssl.o ../../../../../third_party/tcpip/wolfssl/src/ssl.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/615233400/tls.o: ../../../../../third_party/tcpip/wolfssl/src/tls.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/615233400" 
	@${RM} ${OBJECTDIR}/_ext/615233400/tls.o.d 
	@${RM} ${OBJECTDIR}/_ext/615233400/tls.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/615233400/tls.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/615233400/tls.o.d" -o ${OBJECTDIR}/_ext/615233400/tls.o ../../../../../third_party/tcpip/wolfssl/src/tls.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
${OBJECTDIR}/_ext/29024758/asm.o: ../../../../../framework/crypto/src/asm.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/29024758" 
	@${RM} ${OBJECTDIR}/_ext/29024758/asm.o.d 
	@${RM} ${OBJECTDIR}/_ext/29024758/asm.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/29024758/asm.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -DHAVE_CONFIG_H -I"../../../../../framework/driver/spi_flash/sst25vf016b/src" -I"../../../../../third_party/tcpip/wolfssl/wolfssl" -I"../src" -I"../src/system_config/e16_encx24j600_spiflash" -I"../../../../../framework" -I"../src/system_config/e16_encx24j600_spiflash/framework" -I"../../../../../bsp/pic32mx795_pim+e16" -I"../../../../../third_party/tcpip/wolfssl" -Wall -MMD -MF "${OBJECTDIR}/_ext/29024758/asm.o.d" -o ${OBJECTDIR}/_ext/29024758/asm.o ../../../../../framework/crypto/src/asm.c    -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD) 
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compileCPP
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/pic32_eth_web_server.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk  ../../../../../bin/framework/peripheral/PIC32MX795F512L_peripherals.a ../../../../../framework/tcpip/src/crypto/aes_pic32mx.a  
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mdebugger -D__MPLAB_DEBUGGER_REAL_ICE=1 -mprocessor=$(MP_PROCESSOR_OPTION)  -o dist/${CND_CONF}/${IMAGE_TYPE}/pic32_eth_web_server.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}    ..\..\..\..\..\bin\framework\peripheral\PIC32MX795F512L_peripherals.a ..\..\..\..\..\framework\tcpip\src\crypto\aes_pic32mx.a      -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD)    -mreserve=boot@0x1FC02000:0x1FC02FEF -mreserve=boot@0x1FC02000:0x1FC024FF  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,--defsym=__MPLAB_DEBUGGER_REAL_ICE=1,--defsym=_min_heap_size=66248,--gc-sections,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml
	
else
dist/${CND_CONF}/${IMAGE_TYPE}/pic32_eth_web_server.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk  ../../../../../bin/framework/peripheral/PIC32MX795F512L_peripherals.a ../../../../../framework/tcpip/src/crypto/aes_pic32mx.a 
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mprocessor=$(MP_PROCESSOR_OPTION)  -o dist/${CND_CONF}/${IMAGE_TYPE}/pic32_eth_web_server.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}    ..\..\..\..\..\bin\framework\peripheral\PIC32MX795F512L_peripherals.a ..\..\..\..\..\framework\tcpip\src\crypto\aes_pic32mx.a      -DXPRJ_e16_encx24j600_spiflash=$(CND_CONF)    $(COMPARISON_BUILD)  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=_min_heap_size=66248,--gc-sections,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml
	${MP_CC_DIR}\\xc32-bin2hex dist/${CND_CONF}/${IMAGE_TYPE}/pic32_eth_web_server.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} 
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/e16_encx24j600_spiflash
	${RM} -r dist/e16_encx24j600_spiflash

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
