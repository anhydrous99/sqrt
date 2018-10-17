#include "sqrts.h"

#include <stdio.h>
#include <math.h>

int main(void)
{
  double y = 125;
  double y2 = 1.42;
  printf("The square root of %f using the babylonian method is %f\n", y, babyloniansqrt(y));
  printf("The square root of %f using the bakhshli method is %f\n", y, bakhshalisqrt(y));
  printf("The square root of %f using the two-variable iterative method %f\n", y2, twovaritsqrt(y2));
  printf("The square root of %f using the taylor series around 1 to the 5th term is %f\n", y2, taylorsqrt(y2));
  printf("The square root of %f by bit shifting is %f\n", y, bitsqrt(y));
  printf("The square root of %f using the built in sqrt function is %f\n", y, sqrt(y));
  return 0;
}
