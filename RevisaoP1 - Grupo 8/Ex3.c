#include <stdio.h>
#include <stdlib.h>

int main() {
  float porca, qntPorc, parafuso, qntPar, arruela, qntArru, total, totalPecas, descPor, descPara, descArru, desconto, subtotal;

  printf("Digite a quantidade de porcas que voce deseja\n");
  scanf("%f", &qntPorc);
  porca = qntPorc * 0.3;
  system ("cls");

  printf("Digite a quantidade de parafusos que voce deseja\n");
  scanf("%f", &qntPar);
  parafuso = qntPar * 0.05;
  system ("cls");

  printf("Digite a quantidade de arruelas que o voce deseja\n");
  scanf("%f", &qntArru);
  arruela = qntArru * 0.35;
  system ("cls");

  totalPecas = qntPorc + qntPar + qntArru;
  total = porca + parafuso + arruela;
  descPor = porca * 0.1;
  descPara = parafuso * 0.2;
  descArru = arruela * 0.3;

  desconto = descPor + descPara + descArru;
  subtotal = total - desconto;

  printf("O total de pecas compradas foi %.0f, com o total de R$%.2f, com o desconto de R$%.2f, com o subtotal de R$%.2f\n", totalPecas, total, desconto, subtotal);
  return 0;
}
