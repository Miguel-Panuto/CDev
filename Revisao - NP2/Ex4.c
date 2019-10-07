#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int i, j, mat[6][5], vet[5], vetMult[5], total = 0;
  srand(time(NULL));
  for (i = 0; i < 5; i++){
    vet[i] = 0;
    for (j  = 0; j < 4; j++){
      mat[i][j] = rand()%10;
      printf(" %d ", mat[i][j]);
      vet[i] += mat[i][j];
      vetMult[i] = vet[i] * 2;
      total += vetMult[i];
    }
    printf("\n");
  }
  printf("\nVetor normal: \n");
  for (i = 0; i < 5; i++)
    printf(" %d ", vet[i]);
  printf("\n\nVetor multiplicado: \n");
  for(i = 0; i < 5; i++)
    printf(" %d ", vetMult[i]);
  printf("\n\nTotal: %d\n", total);

  return 0;
}
