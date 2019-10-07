#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 5000000, par = 0;

  while (i >= 0) {
    par ++;
    i -= 2;
  }
  printf("A quantidade de numeros pares eh %d\n", par);
  return 0;
}
