#include <stdio.h>
#include <stdlib.h>

int main() {
  int numInt[3], i;

  for (i = 0; i <= 2; i++){
    printf("Entre com o numero %d: ", i + 1);
    scanf("%d", &numInt[i]);
    system ("cls");
  }
  for (i = 2; i >= 0; i--){
    printf("%d", numInt[i]);
  }
  return 0;
}
