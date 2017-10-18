#include "board.h"
#include <stdio.h>

void BoardInit(){
  printf("Sim0:BoardInit()\r\n");
}

void BoardDisableIrq( void ) {}
void BoardEnableIrq( void )  {}

uint8_t GetBoardPowerSource( void ) { return USB_POWER; }    
