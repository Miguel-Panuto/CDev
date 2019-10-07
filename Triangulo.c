#include <stdio.h>
#include <stdlib.h>

int main() {
  int ab, ac, bc;
  printf("Insira os lados do triangulo, seguindo a regra, AB AC BC\n");
  scanf("%d", &ab);
  scanf("%d", &ac);
  scanf("%d", &bc);
  if (ab == ac && ac == bc)
    printf("O triangulo eh Equilatero\n");
  else if (ab == ac)
    printf("O triangulo eh Isosceles\n");
  else if (ab != ac && ac != bc)
    printf("O triangulo eh Escaleno\n");
  return 0;
}
