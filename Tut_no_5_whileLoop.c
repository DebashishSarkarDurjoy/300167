#include <stdio.h>

int main() {
  int fah, cel;
  int lower, upper, step;
  lower = 0;
  upper = 400;
  step = 20;

  fah = lower;
  do {
    cel = 5 * (fah - 32) / 9;
    printf("%d\t%d\n", fah, cel);
    fah = fah + step;
  } while(fah <= upper);

  return 0;
}
