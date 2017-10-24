/*
 / _____)             _              | |
( (____  _____ ____ _| |_ _____  ____| |__
 \____ \| ___ |    (_   _) ___ |/ ___)  _ \
 _____) ) ____| | | || |_| ____( (___| | | |
(______/|_____)_|_|_| \__)_____)\____)_| |_|
    (C)2013 Semtech

Description: Ping-Pong implementation

License: Revised BSD License, see LICENSE.TXT file include in the project

Maintainer: Miguel Luis and Gregory Cristian
*/
#include <string.h>
#include "board.h"

/**
 * Main application entry point.
 */
int main( void )
{

    // Target board initialisation
    BoardInitMcu( );
    BoardInitPeriph( );

    while( 1 )
    {
        uint8_t *hw = "Hello World!\r\n";
        UartPutBuffer( &Uart2, hw, strlen(hw) );
        GpioWrite( &Led1, GpioRead( &Led1 ) ^ 1 );
        GpioWrite( &Led2, GpioRead( &Led2 ) ^ 1 );
        DelayMs( 3000 );
    }
}
