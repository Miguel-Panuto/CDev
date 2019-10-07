#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 1;
  char nome[10];

  printf("Insira seu nome: ");
  scanf("%s", &nome);

  while (i <= 100) {
    printf("%s\n", nome);
    i++;
  }
  return 0;
}
