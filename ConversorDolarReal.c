#include <stdio.h>
#include <stdlib.h>

int main() {
  float cotaDolar = 3.4f;
  float qntDolar;
  float real;

  printf("Insira a quantida de dolar que voce tem\n");
  scanf("%f", &qntDolar);

  real = qntDolar * cotaDolar;

  printf("O senhor tem R$%.2f\n", real);
  return 0;
}
