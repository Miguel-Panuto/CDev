#include <stdio.h>
#include <stdlib.h>

int main() {
  int repet = 1;
  float mediaIdade = 0, idade, pessoas = 0, maior = 0;
  do{
    printf("Insira a idade: ");
    scanf("%f", &idade);
    if (idade > 0){
      pessoas ++;
      mediaIdade = (mediaIdade + idade)/pessoas;
      if (idade > maior)
        maior = idade;
    }
    printf("Deseja consultar mais uma pessoa? 1 para sim\n");
    scanf("%d", &repet);
    system ("cls");
  }while (repet == 1);

  printf("O numero de pessoas consultadas foi: %.0f, a idade media eh de: %.2f e a maior idade eh: %.0f\n", pessoas, mediaIdade, maior);
  return 0;
}
