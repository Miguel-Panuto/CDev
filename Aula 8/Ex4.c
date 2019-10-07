#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, pessoas;
  float altura[30], mediaAlt = 0;
  printf("Entre com a quantidade de pessoas: ");
  scanf("%d", &pessoas);

  for (i = 0; i <= pessoas - 1; i++){
    printf("Entre qual a altura da pessoa %d: ", i + 1);
    scanf("%f", &altura[i]);
    mediaAlt += altura[i]/pessoas;
    system ("cls");
  }
    printf("A media de altura eh de %.2f\n", mediaAlt);
  return 0;
}
