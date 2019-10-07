#include <stdio.h>
#include <stdlib.h>

int main() {
  int cod;
  float dog, hamb, ches, egg, refri, qtd, total = 0, qntTotal = 0;
  do{
    qtd = 0;
    dog = 1.5; hamb = 2; ches = 2.5; egg = 3; refri = 1.5;
    printf("O que o senhor deseja?\n"
          "0 para encerrar a operacao\n"
          "1 para cachorro-quente - R$%.2f\n"
          "2 para hamburguer - R$%.2f\n"
          "3 para cheseburguer - R$%.2f\n"
          "4 para eggcheseburger - R$%.2f\n"
          "5 para refrigerante - R$%.2f\n", dog, hamb, ches, egg, refri);
    scanf("%d", &cod);
    system("cls");

    if (cod != 0){
      printf("Insira a quantidade desejada: ");
      scanf("%f", &qtd);
      qntTotal += qtd;
      if (cod == 1)
        qtd *= dog;
      else if (cod == 2)
        qtd *= hamb;
      else if (cod == 3)
        qtd *= ches;
      else if (cod == 4)
        qtd *= egg;
      else if (cod == 5)
        qtd *= refri;

      total += qtd;
    }
    system ("cls");
  }while (cod != 0 || cod > 5);

  printf("Total a pagar = R$%.2f, com %.0f alimentos comprados\n", total, qntTotal);
  return 0;
}
