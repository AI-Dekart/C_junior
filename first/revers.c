#include <math.h>
#include <stdio.h>

void print_revers(int x);

int main() {
  int x;
  scanf("%d", &x);
  print_revers(x);
  return 0;
}

void print_revers(int x) {
  printf("%d", x % 10);
  x = x / 10;
  if (x != 0) {
    print_revers(x);
  }
}