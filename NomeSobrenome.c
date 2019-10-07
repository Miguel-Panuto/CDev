#include <stdio.h>
#include <stdlib.h>

int main() {
  char nome [20], sobrenome[20];

  printf("Insira seu nome\n");
  scanf("%s", nome);

  printf("Insira seu sobrenome\n");
  scanf("%s", sobrenome);

  printf("O senhor, %s %s ganhou um premio de nada\n", nome, sobrenome);
  return 0;
}
