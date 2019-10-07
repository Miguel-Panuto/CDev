#include <stdio.h>
#include <stdlib.h>

int main() {
  float n1;
  float n2;

  printf("Insira o primeiro numero:\n");
  scanf("%f", &n1);

  printf("Insira o segundo numero:\n");
  scanf("%f", &n2);

  if(n1==n2)
    printf("n1 eh igual a n2\n");
  else
  printf("n1 nao eh igual a n2\n");
  return 0;
}
