#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, m, d, c, n, k, i, j, l;

  printf("Insira algum ano\n");
  scanf("%d", &a);

  c = a/100;
  n = a - 19*(a/19);
  k = (c - 17)/25;
  i = c - c/4 - (c-k)/3 + 19 * n + 15;
  i = i - 30*(i/30);
  i = i - (i/28) * (1-(1/28)) * (29/(i + 1)) * ((21 - n)/11);
  j = a + a/4 + i + 2 - c + c/4;
  j = j - 7*(j/7);
  l = i - j;
  m = 3 + (l + 40)/44;
  d = l + 28 -31*(m/4);

  printf("A pascoa do ano %d, sera no dia %d do mes %d\n", a, d, m);
  return 0;
}
