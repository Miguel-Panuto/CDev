#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  float altura, peso, imc;

  printf("Insira sua altura\n");
  scanf("%f", &altura);

  printf("Insira seu peso\n");
  scanf("%f", &peso);

  imc = peso / pow(altura, 2);

  if(imc >= 40)
    printf("Sua classificacao de IMC eh Obesidade Classe III, com IMC de %.2f\n", imc);
  else if (imc >= 35 && imc <= 39.9)
    printf("Sua classificacao de IMC eh Obesidade Classe II, com IMC de %.2f\n", imc);
  else if (imc >= 30 && imc <= 34.9)
    printf("Sua classificacao de IMC eh Obesidade Classe I, com IMC de %.2f\n", imc);
  else if (imc >= 25 && imc <= 29.9)
    printf("Sua classificacao de IMC eh Excesso de Peso, com IMC de %.2f\n", imc);
  else if (imc >= 18.5 && imc <= 24.9)
    printf("Sua classificacao de IMC eh Peso Normal, com IMC de %.2f\n", imc);
  else
    printf("Sua classificacao de IMC eh Abaixo do Peso Normal, com IMC de %.2f\n", imc);
  return 0;
}
