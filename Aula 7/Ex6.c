#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 1, qnt;
  float maior = 0, menor = 999999999999, num;

  printf("Insira a quantidade de numeros desejados: ");
  scanf("%d", &qnt);

  do{
    printf("Insira o numeero %d: ", i);
    scanf("%f", &num);

    if (num > 0){
      if (num > maior)
        maior = num;
      if (num < menor)
        menor = num;
    }
    i++;
    system ("cls");
  } while (i <= qnt);

  printf("O maior numero eh %.2f e o menor %.2f\n", maior, menor);
  return 0;
}
