#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int numAle[20], i, valor, qnt = 0;
  srand((unsigned)time(NULL));

  for (i = 0; i <= 19; i++){
    numAle[i] = rand() % 10;
    printf("%d\n", numAle[i]);
  }
  printf("Entre com um valor: ");
  scanf("%d", &valor);

  system ("cls");

  for (i = 0; i <= 19; i++){
    if(valor == numAle[i]){
      qnt++;
      printf("Numero encontrado na posicao %d\n", i + 1);
    }
  }
  printf("A quantidade que o numero foi de %d vezes\n", qnt);
}
