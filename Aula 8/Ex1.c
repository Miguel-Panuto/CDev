#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float media[9];
  int i, ref;
  for (i = 0; i <= 5; i++){
    if (i < 2){
      ref = i + 1;
      printf("Digite a nota da NP%d do aluno 1: ", ref);
      scanf("%f", &media[i]);
    } else if (i > 1 && i < 4){
      ref = i - 1;
      printf("Digite a nota da NP%d do aluno 2: ", ref);
      scanf("%f", &media[i]);
    }else{
      ref = i - 3;
      printf("Digite a nota da NP%d do aluno 3: ", ref);
      scanf("%f", &media[i]);
    }
    system ("cls");
  }
  media[6] = (media[0] + media[1])/2;
  media[7] = (media[2] + media[3])/2;
  media[8] = (media[4] + media[5])/2;
  media[9] = (media[6] + media[7] + media[8])/3;
  printf("A media do aluno 1 eh %.2f\n"
         "A media do aluno 2 eh %.2f\n"
         "A media do aluno 3 eh %.2f\n"
         "A media dos 3 alunos eh %.2f\n", media[6], media[7], media[8], media[9]);
  return 0;
}
