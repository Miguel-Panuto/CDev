#include <stdio.h>
#include <stdlib.h>

int main() {
  float S, S0, V, t, espaco;

  printf("Digite o espaco inicial: ");
  scanf("%f", &S0);
  printf("Digite a velocidade: ");
  scanf("%f", &V);
  printf("Digite o tempo: ");
  scanf("%f", &t);

  S = S0 + V * t;
  espaco = S - S0;

  system ("cls");

  printf("A posicao para o objeto eh %.2f e o espaco percorrido eh %.2f\n", S, espaco);
  return 0;
}
