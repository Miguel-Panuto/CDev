#include <stdio.h>
#include <stdlib.h>

int main() {
  float salario;
  int porc;

  printf("Insira o teu salario bro, faz sol, squish squish\n");
  scanf("%f", &salario);

  if(salario < 1200){
    salario *= 1.2;
    porc = 20;
  }
  else if(salario >= 1200 && salario < 2000){
    salario *= 1.15;
    porc = 15;
  }
  else{
    salario *= 1.08;
    porc = 8;
  }
  printf("O novo salario do candango eh de R$%.2f, de %d%%\n", salario, porc);
  return 0;
}
