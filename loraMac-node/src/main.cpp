#include <stdio.h>
#include <LoRaMac.h>
#include <radio.h>

int main(int argc, char const *argv[]) {

  printf("main\r\n");
  LoRaMacInit();
  RadioInit();

  return 0;
}
