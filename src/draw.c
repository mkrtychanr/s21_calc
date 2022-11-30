#include "draw.h"
#include "calculate.h"
#include <stdio.h>
#include <math.h>

void start() {
  char m[25][80] = {0};
  double end = M_PI * 4;
  double step = end / 79;
  double curr = 0;
  for (int i = 0; i < 80; i++) {
    int temp = round((calc(curr) + 1) / (2.0 / 24));
    curr += step;
    if (temp < 0 || temp > 24)
      continue;
    m[temp][i] = 1;
  }
  for (int i = 0; i < 25; i++) {
    for (int j = 0; j < 80; j++) {
      if (m[i][j] == 1) {
        printf("*");
      } else {
        printf(".");
      }
    }
    printf("\n");
  }
}
