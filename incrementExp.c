#include <stdio.h>

int main() {
  int i = 0, j = 0, k = 0;
  printf("i %d, j %d, k %d\n", i, j, k);

  j = i++;
  printf("i %d, j %d, k %d\n", i, j, k);

  k = ++i;
  printf("i %d, j %d, k %d\n", i, j, k);

  return 0;
}
