#include <stdio.h>

void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc);

int main() {
  int xlt, ylt, xrb, yrb, pxc, pyc;
  xlt = ylt = xrb = yrb = pxc = pyc = 0;
  scanf("%d%d%d%d", &xlt, &ylt, &xrb, &yrb);
  center(xlt, ylt, xrb, yrb, &pxc, &pyc);
  printf("%d %d", pxc, pyc);
  return 0;
}

void center(int xlt, int ylt, int xrb, int yrb, int *pxc, int *pyc) {
  *pxc = (xlt + xrb) / 2;
  *pyc = (ylt + yrb) / 2;
}