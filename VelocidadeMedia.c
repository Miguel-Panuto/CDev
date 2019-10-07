#include <stdio.h>
#include <stdlib.h>

int main() {
  float dist;
  float tempo;
  float vm;

  printf("Insira a distancia\n");
  scanf("%f", &dist);

  printf("Insira o tempo feito\n");
  scanf("%f", &tempo);

  vm = dist/tempo;

  printf("A velocidade media eh de %.2f\n", vm);
  return 0;
}
