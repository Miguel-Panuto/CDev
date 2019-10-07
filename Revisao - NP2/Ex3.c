#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void) {
  int i, num[15], opNum[15];
  srand (time(NULL));

  for (i = 0; i < 10; i++){
    num[i] = rand()%50;
    if(num[i] < 25)
      opNum[i] = pow(num[i], 2) - (2 * num[i]);
    else
      opNum[i] = (num[i]/3) + num[i];

    printf("O numero eh %d e o numero operado eh %d\n", num[i], opNum[i]);
  }
  return 0;
}
