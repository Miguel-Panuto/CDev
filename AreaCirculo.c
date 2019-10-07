#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  float raio, areaCirculo;

  printf("Insira o tamanho do raio\n");
  scanf("%f", &raio);

  areaCirculo = M_PI*pow(raio, 2);

  printf("A area do circulo e %f \n", areaCirculo);

  return 0;
}
