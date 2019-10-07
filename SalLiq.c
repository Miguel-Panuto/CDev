#include <stdio.h>
#include <stdlib.h>

int main() {
  float salBruto, inss, irrf, salLiq;

  printf("Insira seu salario bruto\n");
  scanf("%f", &salBruto);

  inss = salBruto * 8.5/100;
  irrf = salBruto * 11/100;

  salLiq = salBruto - inss - irrf;

  printf("Seu salario liquido eh de R$%.2f\n", salLiq);

  return 0;
}
