#include <stdio.h>
#include <stdlib.h>

int main() {
  float N, Q, L, P, B, T, total;

  printf("Quantos kgs de cafe foram comprados?\n");
  scanf("%f", &N);
  Q = N * 7.5;
  system ("cls");

  printf("Quantos litros de leite foram comprados?\n");
  scanf("%f", &L);
  P = L * 2.5;
  system ("cls");

  printf("Quantos kgs de banana foram comprados?\n");
  scanf("%f", &B);
  T = B * 3.5;
  system ("cls");

  total = Q + P + T;

  printf("Foi gasto R$%.2f com cafe, R$%.2f com leite e R$%.2f com banana, com um total de R$%.2f\n", Q, P, T, total);
  return 0;
}
