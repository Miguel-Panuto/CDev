#include <stdio.h>
#include <stdlib.h>

int main() {
  float horasTrab, vlrHr, salario, salTotal, bonus;
  char tipo;

printf("Entre com suas horas trabalhadas\n");
scanf("%f", &horasTrab);

system ("cls");

printf("Entre com o valor da hora\n");
scanf("%f", &vlrHr);

system ("cls");

  if(horasTrab <= 40)
    tipo = 'a';
  else if (horasTrab > 40 && horasTrab <= 60)
    tipo = 'b';
  else
    tipo = 'c';

  salario = horasTrab * vlrHr;
  switch (tipo) {
    case 'a':
      salTotal = salario;
      break;
    case 'b':
      salTotal = salario * 1.4;
      break;
    case 'c':
      salTotal = salario * 1.6;
      break;
  }
  printf("O salario eh de %.2f e com o bonus eh %.2f\n", salario, salTotal);
  return 0;
}
