#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, qtd, aux,soma = 0;

  printf("Insira a quantidade desejada: ");
  scanf("%d", &qtd);
  system ("cls");
  for (i = 1; i <= qtd; i++){
    printf("Insira o valor: ");
    scanf("%d", &aux);

    if (aux > 0){
      soma += aux;
    }
    system ("cls");
  }
  printf("A soma dos numeros positivos eh %d\n", soma);
  return 0;
}
