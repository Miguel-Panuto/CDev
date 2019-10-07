#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  float volume, raio;

  printf("Entre com o raio\n");
  scanf("%f", &raio);
  system ("cls");

  volume = (4 * M_PI * pow (raio, 3))/3;

  printf("O volume da esfera eh de %.2f\n", volume);
  return 0;
}
