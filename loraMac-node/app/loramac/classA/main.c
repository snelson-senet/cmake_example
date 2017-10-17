#include <stdio.h>
// #include <LoRaMac.h>
#include <radio.h>
#include <board.h>

int main(int argc, char const *argv[]) {

  printf("ClassA board type = %d\r\n", BOARD_TYPE);
  // LoRaMacInit();
  RadioInit();

  return 0;
}
