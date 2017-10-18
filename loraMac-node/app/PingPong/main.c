#include <stdio.h>
// #include <LoRaMac.h>
#include <radio.h>
#include <board.h>

int main(int argc, char const *argv[]) {

  printf("PingPong\r\n");
  // LoRaMacInit();
  BoardInit();
  RadioInit();

  return 0;
}
