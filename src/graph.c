#include "double_stack.h"
#include "stack.h"
#include "parse.h"
#include "calculate.h"
#include "draw.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void start();

int main() {
  char str[1024];
  fgets(str, 1024, stdin);
  to_file(str);
  to_polish();
  start();
  return 0;
}
