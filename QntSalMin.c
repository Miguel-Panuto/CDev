#include <stdio.h>
#include <stdlib.h>

int main() {
  float sal, qntSal;

  printf("Insira teu salario bro, faz sol, squish squish\n");
  scanf ("%f", &sal);

  qntSal = sal/780;

  if(qntSal > 15)
    printf("Voce tem %.2f salarios minimos, assim sendo eh do tipo A\n", qntSal);
  else if(qntSal > 5 && qntSal <= 15)
    printf("Voce tem %.2f salarios minimos, assim sendo eh do tipo B\n", qntSal);
  else if(qntSal > 3 && qntSal <= 5)
    printf("Voce tem %.2f salarios minimos, assim sendo eh do tipo C\n", qntSal);
  else if(qntSal > 1 && qntSal <= 3)
    printf("Voce tem %.2f salarios minimos, assim sendo eh do tipo D\n", qntSal);
  else
    printf("Voce tem %.2f salarios minimos, assim sendo eh do tipo E\n", qntSal);
  return 0;
}
