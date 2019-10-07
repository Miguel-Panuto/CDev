#include <stdio.h>
#include <stdlib.h>

int main() {
  int i;
  float n1, n2, n3, media[5];

  for (i = 1; i <= 5; i++){
    printf("Entre com a 1 nota: ");
    scanf("%f", &n1);

    printf("Entre com a 2 nota: ");
    scanf("%f", &n2);

    printf("Entre com a 3 nota: ");
    scanf("%f", &n3);

    media [i] = (n1 + n2 + n3)/3;

    system ("cls");
  }
  for (i = 1; i <= 5; i++){
    printf("Aluno %d, media: %.2f\n", i, media[i]);
  }
  return 0;
}
