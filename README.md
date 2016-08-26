# v1_08_01
Microchip Harmony v1-08. Demo for encx24j600+spi flash. This demo also works well for email demo using tls v1-2 to talk with google server.
You will need PIM(pic32mx795f512l), Explorer 16, pictail plus ssd1926 and fast 100mbps ethernet pictailplus/enc28j60. 
Pictail plus ssd1926 cointains spi flash sst29vf016b. The system was tested with mplabx v3-35, and xc32 v1.42 or 1.31

1. Download the zipped file
2. Extract it to a folder under c:/ drive
3. Open mplabx ide.
4. Go to project folder ..apps\tcpip\web_server_nvm_mpfs\firmware\pic32_eth_web_server.X
5. On the tool bar menu, there is drag down list on configuration profile. Eg you can choose 'e16_encx24j600_spiflash' for demonstration
of webserver on external spi flash.
6. Build main project. Upon successfull download the hex into the board.
7. Enjoy!
