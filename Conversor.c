#include <stdlib.h>
#include <stdio.h>

int main() {
  float celsius, faren;

  printf("Insira a temperatura em celsius\n");
  scanf("%f", &celsius);

  faren = (celsius * 1.8) + 32;

  printf("A temperatura em Farenheit e %.2f\n", faren);
  return 0;
}
