#include "radio.h"
#include <stdio.h>

extern void BoardRadioInit();

void RadioInit(){
  printf("RadioInit\r\n");
  BoardRadioInit();
}
