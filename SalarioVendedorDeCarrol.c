#include <stdio.h>
#include <stdlib.h>

int main() {
  float salFix, comissao, qntVendido, salario;
  salFix = 900;

  printf("Entre com o valor total vendido ao mes\n");
  scanf("%f", &qntVendido);

  comissao = (qntVendido * 5)/100;

  salario = salFix + comissao;

  printf("O seu salario nesse mes eh de %.2f\n", salario);
  return 0;
}
