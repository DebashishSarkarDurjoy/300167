#include <stdio.h>

int main() {
  int input;
  int small = 9999, smaller = 999999, smallest = 9999999;

  for (int i = 0; i < 10; i++) {
    printf("Number %d: ", i + 1);
    scanf("%d", &input);

    if (input < smallest) {
      small = smaller;
      smaller = smallest;
      smallest = input;
    }
    else if (input < smaller) {
      small = smaller;
      smaller = input;
    }
    else if (input < small) small = input;
  }

  printf("Small %d, smaller %d, smallest %d ", small, smaller, smallest);

  return 0;
}
