#include <stdio.h>
#include <stdlib.h>

int main() {
  int  i, j, k, n;
  float n1, n2, p;

  printf("Entre com um numero entre 3 e 18: ");
  scanf("%d", &n);

  if(n > 18 || n < 3)
    printf("Numero invalido\n");
  else{
    n2 = 216;
    i = 0;
    do{
      i++;
      j = 0;
      do{
        j++;
        k = 0;
        do{
          k++;
          if ((i+j+k) == n)
            n1++;
        }while(k <= 6);
      }while (j <= 6);
    }while (i <= 6);

    p = (n1/n2) * 100;
    printf("A probabilidade do %d aparecer eh de %.2f%%\n", n, p);
  }
  return 0;
}
