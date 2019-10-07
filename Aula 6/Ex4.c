#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, qtd;
  float n1, n2, n3, media[100];

  printf("Entre com a quantidadde de alunos: ");
  scanf("%d", &qtd);

  system ("cls");

  for (i = 1; i <= qtd; i++){
    printf("Entre com a nota 1: ");
    scanf("%f", &n1);
    printf("Entre com a nota 2: ");
    scanf("%f", &n2);
    printf("Entre com a nota 3: ");
    scanf("%f", &n3);

    media [i] = (n1 + n2 + n3)/3;

    system ("cls");
  }
  for (i = 1; i <= qtd; i++){
    printf("Aluno %d, media: %.2f\n", i, media[i]);
  }
  return 0;
}
