#include <stdio.h>
#include <stdlib.h>

int main() {
  int primos[10], i = 0, j, num = 1, divi = 0, k = 0;
  primos[9] = 0;
  for (i = 0; i != 1;){
    for(j = num; j >= 1; j--){
      if (num % j == 0)
        divi ++;
    }
    if (divi <= 2){
      primos[k] = num;
      k++;
    }
    divi = 0;
    if (primos[9] != 0)
      i = 1;
    else
      i = 0;
    num ++;
  }
  printf("O primeiros numeros primos sao\n");
  for (i = 0; i <= 9; i++){
    printf("%d\n", primos[i]);
  }
  return 0;
}
