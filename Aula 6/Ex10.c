#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j, ale, ant = 61;

  for (i = 1; i <= 6; i++){
    if (i == 1)
      printf("Jogo %d: ", i);
    else
      printf("\nJogo %d: ", i);
    for (j = 1; j <= 6; j++){
      ale = rand() % 60;
      if (ale == ant)
        j--;
      else
        printf("%d ", ale);
      ant = ale;
    }
  }
  return 0;
}
