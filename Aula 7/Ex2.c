#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, fat;

  printf("Insira o numero a se calcular: ");
  scanf("%d", &fat);

  i = fat;
  while (i != 1) {
    fat *= (i-1);
    i--;
  }

  printf("O numero fatorado eh: %d\n", fat);
  return 0;
}
