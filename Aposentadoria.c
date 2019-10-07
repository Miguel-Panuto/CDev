#include <stdio.h>
#include <stdlib.h>

int main() {
  int ano, trab, apo, tempoRestante, prof, sexo;
  printf ("Insira seu ano de nascimento\n");
  scanf ("%d", &ano);

  printf("Insira os seus anos de trabalho\n");
  scanf ("%d", &trab);

  printf("Qual o seu sexo, 1 para masculino e 0 para feminino\n");
  scanf("%d", &sexo);

  printf("Voce eh professor? 1 para sim e 0 para nao\n");
  scanf("%d", &prof);

  if(sexo == 1)
    apo = 95;
  else if(sexo == 0)
    apo = 85;
  else{
    printf("sexo invalido\n");
    system ("pause");
  }
  if (prof == 1)
    apo -= 10;
  else if(prof == 0)
    apo = apo;
  else{
    printf("Caracter invalido\n");
    system ("pause");
  }
  ano = 2018 - ano;
  tempoRestante = apo - (trab + ano);

  if(tempoRestante > 0)
    printf("Voce que tem %d ano, com %d anos de trabalho, e precisa de mais %d anos de servico para atingir a aposentadoria\n", ano, trab, tempoRestante);
  else
    printf ("Voce esta apostado, com %d anos de vida e %d anos de servico\n", ano, tempoRestante);
  return 0;
}
