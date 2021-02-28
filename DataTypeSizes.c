#include <stdio.h>

int main() {
  printf("int: %lu\n", sizeof(int));
  printf("float: %lu\n", sizeof(float));
  printf("double: %lu\n", sizeof(double));
  printf("char: %lu\n\n", sizeof(char));
  printf("short: %lu\n", sizeof(short));
  printf("long: %lu\n", sizeof(long));
  printf("unsigned: %lu\n", sizeof(unsigned));
  printf("signed: %lu\n", sizeof(signed));
}
