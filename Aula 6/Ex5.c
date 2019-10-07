#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, num;

  printf("Insira o numero: ");
  scanf("%d", &num);

  for (i = num - 1; i > 0; i--){
    num = num * i;
  }
  printf("Resultado %d\n", num);
  return 0;
}
