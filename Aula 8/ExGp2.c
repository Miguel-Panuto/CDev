#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, max, paridade, impar = 0, par = 0, valores[100];
  printf("Quantos valores voce quer digitar? ");
  scanf("%d", &max);

  max--;

  for (i = 0; i <= max; i++){
    printf("Digite o numero %d: ", i + 1);
    scanf("%d", &valores[i]);
    paridade = valores[i] % 2;
    if (paridade == 0)
      par++;
    else
      impar ++;
    system ("cls");
  }
  printf("O primeiro valor foi %d e o ultimo %d\n", valores[0], valores[max]);
  printf("E o numero de numeros pares eh de %d e o de impares eh de %d\n", par, impar);
  return 0;
}
