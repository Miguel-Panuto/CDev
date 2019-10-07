#include <stdio.h>
#include <stdlib.h>

int main() {
  int numCo, i;
  float valorCasa, comissao, porCom, maiorCo = 0;

  for (i = 1; i <= 3; i++){
    printf("vendedor %d,digite o valor da casa:", i);
    scanf("%f", &valorCasa);

    if (valorCasa >= 50000)
      porCom = 0.12;
    else if (valorCasa >= 30000 && valorCasa < 50000)
      porCom = 0.09;
    else
      porCom = 0.07;

    comissao = valorCasa * porCom;

    printf("Sua comissao eh de R$%.2f\n", comissao);

    if (comissao > maiorCo){
      maiorCo = comissao;
      numCo = i;
    }
  }
  printf("O vendedor %d teve a maior comissao, de R$%.2f\n", numCo, maiorCo);
  return 0;
}
