#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, soma = 0, resto;

  for (i = 1; i <= 500; i++){
    resto = i%2;
    if (resto == 0){
      soma += i;
    }
  }
  printf("Resultado da soma eh %d\n", soma);
  return 0;
}
