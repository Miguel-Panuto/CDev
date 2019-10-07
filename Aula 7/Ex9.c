#include <stdio.h>
#include <stdlib.h>

int main() {
  int valor;

  printf("Entre com o valor desejado\n");
  scanf("%d", &valor);

  do{   
    printf("%d", valor % 10);
    valor /= 10;
  }while (valor != 0);
  return 0;
}
