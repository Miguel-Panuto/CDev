#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int i;
  float peso1, peso2, peso3, altura, imc = 24;

  for (i = 1; i <= 3; i++){
    printf("Entre com a altura da %d pessoa\n", i);
    scanf("%f", &altura);

    if (i == 1)
      peso1 = imc * pow(altura, 2);
    else if (i == 2)
      peso2 = imc * pow(altura, 2);
    else if (i == 3)
      peso3 = imc * pow(altura, 2);

    system ("cls");
  }
    printf("Peso ideal pessoa 1: %.2f, pessoa 2: %.2f e pessoa 3: %.2f\n", peso1, peso2, peso3);
  return 0;
}
