#include <stdio.h>
#include <stdlib.h>

int main(void){
  int Aa[3], Bb[3][3], Cc[3], i, j;
  for (i = 0; i <= 2; i++){
    printf("Insira o valor %d do vetor A: ", i + 1);
    scanf("%d", &Aa[i]);
  }
  system ("cls");
  for(i = 0; i <= 2; i++){
    for(j = 0; j <= 2; j++){
      printf("Insira o valor de %d x %d: ", i + 1, j + 1);
      scanf("%d", &Bb[i][j]);
    }
  }
  for (i = 0; i <= 2; i++){
    Cc[i] = 0;
    for(j = 0; j <= 2; j++){
      Bb[i][j] *= Aa[j];
      Cc[i] += Bb[i][j];
    }
  }
  printf("\n");

  for (i = 0; i <= 2; i++){
      printf("%d ", Cc[i]);
  }
  return 0;
}
