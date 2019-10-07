#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  float a, b, c, x1, x2, delta;


  printf("Insira o valor de a\n");
  scanf("%f", &a);

  printf("Insira o valor de b\n");
  scanf("%f", &b);

  printf("Insira o valor de c\n");
  scanf("%f", &c);

  delta = b*b - 4 * a * c;

  x1 = (-b + sqrt(delta))/(2 * a);
  x2 = (-b - sqrt(delta))/(2 * a);

  printf("O valor de x1 eh %.2f e o de x2 eh %.2f\n", x1, x2);
  return 0;
}
