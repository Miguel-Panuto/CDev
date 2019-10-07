#include <stdio.h>
#include <stdlib.h>

int main() {

  float choco, morango, baunilia, chocoQnt, morangoQnt, bauniliaQnt, total;
  choco = 3.5f;
  morango = 4;
  baunilia = 3.75f;

  printf("Quantos picoles de chocolate o senhor quer? (valor R$%.2f)\n", choco);
  scanf("%f", &chocoQnt);

  printf("Quantos picoles de morango o senhor quer? (valor R$%.2f)\n", morango);
  scanf("%f", &morangoQnt);

  printf("Quantos picoles de baunilia o senhor quer? (valor R$%.2f)\n", baunilia);
  scanf("%f", &bauniliaQnt);

  total = chocoQnt * choco + morangoQnt * morango + bauniliaQnt * baunilia;

  printf("O total a se pagar pela compra eh de R$%.2f\n", total);

  return 0;
}
