#include <stdio.h>
#include <stdlib.h>

int main() {
  float altura[3];
  int i;
  for (i = 0; i <= 2; i++){
    printf("Digite a altura da pessoa %d: ", i + 1);
    scanf("%f", &altura[i]);
    system ("cls");
  }
  altura[3] = (altura[0] + altura[1] + altura[2])/3;

  printf("A media das altura eh de %.2f", altura[3]);
  return 0;
}
