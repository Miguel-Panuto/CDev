#include <stdio.h>
#include <stdlib.h>

int main() {
  float media[40], nota[3], mediaClass = 0;
  int i, j, maxCount, np, aluno = 1;

  printf("Entre com a quantidade de alunos: ");
  scanf("%d", &maxCount);
  maxCount;

  for (i = 0; i <= maxCount - 1; i++){
    for (j = 0; j <= 1; j++){
      np = j + 1;
      printf("Digite a NP%d do aluno %d: ", np, aluno);
      scanf("%f", &nota[j]);
    }
    media [i] = (nota[0] + nota[1])/2;
    aluno ++;
    system ("cls");
  }
  aluno = 1;
  for (i = 0; i <= maxCount - 1; i++){
    mediaClass += media[i]/maxCount;
    printf("Media do aluno %d eh %.2f\n", aluno, media[i]);
    aluno ++;
  }
  printf("E a media da classe eh de %.2f\n", mediaClass);
  return 0;
}
