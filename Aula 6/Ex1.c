#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, numDes;

  printf("Entre com o numero desejado de tabuada: ");
  scanf("%d", &numDes);
  system ("cls");

  for (i = 0; i <= 10; i++){
    printf("%d\n", numDes * i);
  }
  return 0;
}
