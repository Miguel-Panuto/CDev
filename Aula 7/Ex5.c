#include <stdio.h>
#include <stdlib.h>

int main() {
  int local, rept = 1, praia = 0, campo = 0;
  float sal, mediaSalC = 0, mediaSalP = 0;

  do{
    printf("Qual seu local de preferencia?\n"
            "Campo = 1\n"
            "Praia = 2\n");
    scanf("%d", &local);
    printf("Entre com seu salario: ");
    scanf("%f", &sal);

    if (local == 1){
      ++ campo;
      mediaSalC = (mediaSalC + sal)/campo;
    }else if(local == 2){
      ++ praia;
      mediaSalP = (mediaSalP + sal)/praia;
    }
    printf("Deseja entrevistar outra pessoa? 1 pra sim, qualquer outro digito para nao\n");
    scanf("%d", &rept);
    system ("cls");
  } while (rept == 1);

  printf("A quantidade de pessoas que preferem campo eh %d, com media salaria de: R$%.2f\n"
          "E a quantidade de pessoas que preferem praia eh %d, com media salarial de: R$%.2f\n", campo, mediaSalC, praia, mediaSalP);
  return 0;
}
