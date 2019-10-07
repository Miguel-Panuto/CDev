#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int  origem, destino, combustivel, tempo, hora, minuto;
  int mat[4][4] = {{0,63,210,190},{63,0,160,150},{210,160,0,10},{190,150,10,0}};

  printf("\nSelecione sua cidade de origem: \n"
        "\n1 - Caceras\n"
        "\n2 - Bugres\n"
        "\n3 - Cuiaba\n"
        "\n4 - Vila Grande\n");
  scanf("%d", &origem);
  system ("cls");
  printf("\nSelecione sua cidade de destino: \n"
        "\n1 - Caceras\n"
        "\n2 - Bugres\n"
        "\n3 - Cuiaba\n"
        "\n4 - Vila Grande\n");
  scanf("%d", &destino);
  system("cls");
  if ((origem > 0 && origem < 5) && (destino > 0 && destino < 5)){
    origem --;
    destino --;
    printf("A distancia entre as duas cidades eh de %dkm\n", mat[origem][destino]);
    tempo = mat[origem][destino] * 0.7;
    hora = tempo/60;
    minuto = tempo%60;
    printf("O tempo estimado eh de %d hora(s):%d minuto(s)\n", hora, minuto);
    combustivel = mat[origem][destino]/13;
    printf("O combustivel a ser usado eh de %dlitros\n", combustivel);
  }else
    printf("Opcoes invalidas\n");
  return 0;
}
