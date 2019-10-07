#include <stdio.h>
#include <stdlib.h>

int main() {
  int larg, alt, metrosQuad, qntPisos, tipo;

  printf("Insira a largura e altura\n");
  scanf("%d", &larg);
  scanf("%d", &alt);

  metrosQuad = larg * alt;

  if (metrosQuad < 100) {
    tipo = 1;
  }else if(metrosQuad >= 100){
    tipo = 2;
  }

  switch (tipo) {
    case 1:
      qntPisos = 10;
      break;
    case 2:
      qntPisos = 20;
      break;
  }
  printf("A quantidade de pisos a ser utilizado eh %d com %d metros quadrados\n", qntPisos, metrosQuad);
  return 0;
}
