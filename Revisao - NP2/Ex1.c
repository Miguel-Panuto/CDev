#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num, i;

  printf("Entre com o numero que deseja saber a tabuada: ");
  scanf("%d", &num);
  system ("cls");  //Esse comando é opicional,  é o  comando de limpar a tela, uso ele  somente porque gosto

  for (i = 1; i <= 10; i++)
    printf("%d \n", num * i);
  return 0;
}
