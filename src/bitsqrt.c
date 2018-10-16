#include <stdint.h>

double bitsqrt(double y)
{
  int64_t yint = *(int64_t*)&y;
  const int64_t one = 1, fif2 = 52, six1 = 61;

  yint -= one << fif2;
  yint >>= one;
  yint += one << six1;

  return *(double*)&yint;
}
