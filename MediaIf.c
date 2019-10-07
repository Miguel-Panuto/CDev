#include <stdlib.h>
#include <stdio.h>

int main() {
  float nota1, nota2, nota3, media;

  printf("Insira suas notas dando espacos entre si, desta maneira: nota1 nota2 nota3\n");
  scanf("%f %f %f", &nota1, &nota2, &nota3);

  media = (nota1 + nota2 + nota3)/3;

  if (media >= 6 && media <=10)
    printf("Voce foi aprovado, com %.2f de media\n", media);
  else if(nota1 >10 || nota2 > 10 || nota3 > 10)
    printf("Achou que eu nao ia perceber ne??\n");
  else if (media >= 4 && media < 6)
    printf("Voce esta de exame com a media %.2f\n", media);
  else
    printf("Voce foi reprovado com a media %.2f\n", media);
  return 0;
}
