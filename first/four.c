#include <math.h>
#include <stdio.h>

float dist(int x1, int y1, int x2, int y2);
float area(int x1, int y1, int x2, int y2, int x3, int y3);

int main() {
  int x1, y1, x2, y2, x3, y3;
  float s;
  scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
  s = area(x1, y1, x2, y2, x3, y3);
  printf("%.3f\n", s);
  return 0;
}
float dist(int x1, int y1, int x2, int y2) {
  return sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));
}
float area(int x1, int y1, int x2, int y2, int x3, int y3) {
  float a = dist(x1, y1, x2, y2);
  float b = dist(x1, y1, x3, y3);
  float c = dist(x2, y2, x3, y3);
  float p = (a + b + c) / 2;
  float s = sqrt(p * (p - a) * (p - b) * (p - c));
  return s;
}