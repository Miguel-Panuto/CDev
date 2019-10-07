#include <stdio.h>
#include <stdlib.h>

int main(){
  int aprovacao, i;
  float nota, media;

  for (i=1; i <= 3; i++){
    printf("Digite a nota\n");
    scanf("%f", &nota);
    if(nota >= 0 && nota <= 10)
      media += nota/3;
    else{
      i--;
      printf("Numero invalido\n");
    }
  }
  if(media < 4)
    aprovacao = 1;
  else if (media >= 4 && media < 7)
    aprovacao = 2;
  else
    aprovacao = 3;
  switch (aprovacao) {
    case 1:
      printf("Voce foi reprovado com nota %.2f\n", media);
      break;
    case 2:
      printf("Voce esta de exame com nota %.2f\n", media);
      break;
    case 3:
      printf("Voce foi aprovado com nota %.2f\n", media);
  }
  return 0;
}
