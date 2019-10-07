#include <stdio.h>
#include <stdlib.h>

int main() {
  int  fibo = 0, a = 0, b = 1, numDes;

  printf("Insira o numero: ");
  scanf("%d", &numDes);

  while (fibo <= numDes){
    fibo = a + b;
    a = b;
    b = fibo;
  }
  printf("%d\n", fibo);
  return 0;
}
