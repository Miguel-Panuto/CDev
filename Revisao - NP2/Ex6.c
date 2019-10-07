#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float saldo = 0, saque, deposito;
  int op;
  while (op != 0){
    printf("Banco do Drasil\n"
          "\nInsira o que deseja fazer:\n"
          "\n1 - Consulta de saldo\n"
          "\n2 - Saque\n"
          "\n3 - Deposito\n"
          "\n0 - Sair\n\n");
    scanf("%d", &op);
    system("cls");
    switch (op) {
      case 0:
        printf("Fechando o banco online...");
        break;
      case 1:
        printf("O seu saldo eh de R$%.2f\n", saldo);
        system ("pause");
        break;
      case 2:
        printf("Digite a quantidade do saque: ");
        scanf("%f", &saque);
        saldo -= saque;
        break;
      case 3:
        printf("Digite a quantidade a se depositar: ");
        scanf("%f", &deposito);
        saldo += deposito;
        break;
      default:
        printf("Opcao invalida\n");
        system ("pause");
    }
    system("cls");
  }
  return 0;
}
