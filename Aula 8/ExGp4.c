#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int numAle[1000], soma = 0, i, maior = 0, menor = 101;
  srand ((unsigned)time(NULL));

  for (i = 0; i <= 51; i++){
    numAle[i] = rand() % 14;
    printf("%d\n", numAle[i]);
    soma += numAle[i];
    if(numAle[i] > maior)
      maior = numAle[i];
    else if(numAle[i] < menor)
      menor = numAle[i];
  }
  printf("a soma dos numeros aleatorios e de %d\n", soma);
  printf("O maior valor foi %d e o menor %d\n", maior, menor);
  printf("O numero na posicao 100 eh o %d, da posicao 500 eh o %d e o da posicao 1000 eh o %d\n", numAle[99], numAle[499], numAle[999]);
  return 0;
}
