#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, r, m, resultado, i;

  printf("Insira o valor de n: ");
  scanf("%d", &n);
  printf("Insira o valor de r: ");
  scanf("%d",&r);
  m = n - r;

  for (i = n-1; i > 0; i--){
    n *= i;
  }
  for (i = r-1; i > 0; i--){
    r *= i;
  }
  for (i = m-1; i > 0; i--){
    m *= i;
  }
  resultado = n/(r * m);

  printf("O resultado eh %d\n", resultado);
  return 0;
}
