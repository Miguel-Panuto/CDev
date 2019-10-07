#include <stdio.h>
#include <stdlib.h>

int main() {
  float notaP1, notaP2, notaT1, notaT2, media1, media2, mediaT;
  char condicao[9];

  printf("Insira a nota da P1\n");
  scanf("%f", &notaP1);
  printf("Insira a nota do trabalho\n");
  scanf("%f", &notaT1);
  media1 = notaP1 * 0.7 + notaT1 * 0.3;
  system ("cls");

  printf("Insira a nota da P2\n");
  scanf("%f", &notaP2);
  printf("Insira a nota do trabalho\n");
  scanf("%f", &notaT2);
  media2 = notaP2 * 0.8 + notaT2 * 0.2;
  system ("cls");

  mediaT = media1 * 0.4 + media2 * 0.6;

  if (mediaT < 5)
  printf("Media P1 = %.2f\n"
          "Media P2 = %.2f \n"
          "Media Final = %.2f\n"
          "Aluno esta Reprovado\n", media1, media2, mediaT);
  else if (mediaT < 7 && mediaT >= 5)
  printf("Media P1 = %.2f\n"
          "Media P2 = %.2f \n"
          "Media Final = %.2f\n"
          "Aluno esta de Exame\n", media1, media2, mediaT);
  else if (mediaT > 7 && mediaT <= 10)
  printf("Media P1 = %.2f\n"
          "Media P2 = %.2f \n"
          "Media Final = %.2f\n"
          "Aluno esta Aprovado\n", media1, media2, mediaT);


  return 0;
}
