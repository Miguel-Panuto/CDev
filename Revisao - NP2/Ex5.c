#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a[3][3], b[3][3], soma[3][3], sub[3][3], diag_b = 0, i, j;
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++){
      printf("\nInsira o valor da posicao A[%d][%d]: ", i, j);
      scanf("%d", &a[i][j]);
    }
  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++){
      printf("\nInsira o valor da posicao B[%d][%d]: ", i, j);
      scanf("%d", &b[i][j]);
    }
    for (i = 0; i < 3; i++)
      for (j = 0; j < 3; j++){
        soma[i][j] = a[i][j] + b[i][j];
        sub[i][j] = a[i][j] - b[i][j];
      }
    for (i = 0; i < 3; i++)
      diag_b += b[i][i];
    printf("\nA soma das matrizes eh de\n");
    for (i = 0; i < 3; i++){
      for (j = 0; j < 3; j++){
        printf(" %d ", soma[i][j]);
      }
      printf("\n");
    }
    printf("\nA subtracao das matrizes eh de\n");
    for (i = 0; i < 3; i++){
      for (j = 0; j < 3; j++){
        printf(" %d ", sub[i][j]);
      }
      printf("\n");
    }
    printf("\nA soma das diagonais de B eh de, %d\n", diag_b);

  return 0;
}
