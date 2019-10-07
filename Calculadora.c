#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int i = 1;
  int rep, tipop;
  float n1, n2, resultado;
  char op;

  rep = 1;

  while (i == 1) {
  n2 = 0;
  resultado = 0;
  if(rep == 1){
  printf("Deseja operacoes especiais, ou normais? '0' para normais e '1' para especiais\n");
  printf("Operacoes normais:\n"
          "'+' para soma\n"
          "'-' para subtracao\n"
          "'*' ou 'x' para multiplicacao\n"
          "'/' para divisao\n"
          "'p' para potenciacao\n"
          "'r' para raiz\n"
          "Operacoes especiais:\n"
          "'s' para seno\n"
          "'c' para cosseno\n"
          "'t' para tangente\n"
          "'l' para logaritmo\n"
          "'o' para logaritmo na base 10\n");
  scanf("%d", &tipop);

  system ("cls");

  if (tipop == 0){
    printf("Digite os numeros e a operacao, exemplo: '2r5'\n");
    scanf("%f%c%f", &n1, &op, &n2);
  }else if (tipop == 1){
    printf("Digite o numero e a operacao, exemplo '.3s'\n");
    scanf("%f%c", &n1, &op);
  }else
    rep = 0;
  system ("cls");

}

    switch (op) {
      case '+':
        resultado = n1 + n2;
        break;
      case '-':
        resultado = n1 - n2;
        break;
      case '*': case 'x':
        resultado = n1 * n2;
        break;
      case '/':
       resultado = n1/n2;
       break;
      case 'p':
        resultado = pow(n1, n2);
        break;
      case 'r':
        resultado = pow(n1, 1/n2);
        break;
      case 's':
        resultado = sin(n1);
        break;
      case 'c':
        resultado = cos(n1);
        break;
      case 't':
        resultado = tan(n1);
        break;
      case 'l':
        resultado = log(n1);
        break;
      case 'o':
        resultado = log10(n1);
        break;
      default:
        printf("Operacao desconhecida\n");
    }
  system ("cls");

  printf("O resultado da operacao eh %.2f\n", resultado);
  printf("Deseja fazer outra operacao, '0' para terminar e '1' para fazer um novo calculo\n");
  scanf("%d", &rep);
  system ("cls");

  if (rep == 0)
    i = 0;
}
    return 0;
}
