#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int matriz[3][3], i, j;
  for (i = 0; i <= 2; i++)
    for(j = 0; j <= 2; j++){
      printf("Insira o valor do local %d x %d: ", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);
    }
  for(i = 0; i <= 2; i++)
    for (j = 0; j <= 2; j++){
    matriz [i][j] += result;
    }
  return 0;
}
