#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, A[10], B[10], C[10], D[20];

  for (i = 1; i <= 10; i++){
    printf("Digite o numero %d do conjunto: ", i);
    scanf("%d", A[i]);
  }
  printf("\nA = {%d, ", A[1]);
  for (i = 2; i <= 9; i++){
    printf("%d", A[i]);
  }
  printf("%d}", A[10]);
  return 0;
}
