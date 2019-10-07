#include <stdio.h>
#include <stdlib.h>

int main() {
  float vlrRefeicao;
  char metodo;

  printf("Qual foi o metodo de pagamento?\n"
         "'v' para a vista\n"
         "'p' para a prazo\n"
         "'c' para credido\n");
  scanf("%c", &metodo);

  printf("Insira o valor da refeicao: ");
  scanf("%f", &vlrRefeicao);

  system ("cls");

  if (metodo == 'v')
    vlrRefeicao *= 0.95;
  else if (metodo == 'p')
    vlrRefeicao *= 1.075;
  else if (metodo == 'c')
    vlrRefeicao *= 1.03;

  printf("O valor da refeicao foi R$%.2f\n", vlrRefeicao);

  return 0;
}
