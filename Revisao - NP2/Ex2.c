#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float qtd, preco, total = 0;
  int escolha;
  while (escolha != 0){
    printf("Insira o que deseja\n"
            "\n1 - Pastel de Queijo - R$3,00\n"
            "\n2 - Pastel de Carne - R$3,00\n"
            "\n3 - Pastelao - R$5,00\n"
            "\n4 - Big Pastel - R$7,00 \n"
            "\n5 - Refrigerante - R$2,50\n"
            "\n6 - Cerveja - R$3,50\n"
            "\n0 - Para  encerrar a operacao\n");
    scanf("%d", &escolha);
    switch (escolha) {
      case 1:
        preco = 3;
        break;
      case 2:
        preco = 3;
        break;
      case 3:
        preco = 5;
        break;
      case 4:
        preco = 7;
        break;
      case 5:
        preco = 2.5;
        break;
      case 6:
        preco = 3.5;
        break;
      default:
        printf("Opção inválida\n");
      }

      system ("cls");

      if (escolha > 0 && escolha < 7){
        printf("Digite a quantidade desejada: ");
        scanf("%f", &qtd);
        preco *= qtd;
        total += preco;
      }
    system ("cls");
  }
  printf("O senhor(a) deseja entrega domiciliar? 1/0\n");
  scanf("%d", &escolha);
  if (escolha == 1)
    total += 2;
  printf("O total a se pagar eh de %.2f\n", total);
  return 0;
}
