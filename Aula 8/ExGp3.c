#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int numAle[1000], soma = 0, i;
  srand ((unsigned)time(NULL));
  for (i = 0; i <= 999; i++){
    numAle[i] = rand() % 100;
    printf("%d\n", numAle[i]);
    soma += numAle[i];
  }
  printf("a soma dos numeros aleatorios e de %d\n", soma);
  return 0;
}
