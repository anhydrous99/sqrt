
double bakhshalisqrt(double y)
{
  /* Initial Guess */
  double x = y / 2;

  /* accuracy level */
  double e = 0.0000001;

  /* Temporary Variable */
  double x2 = x * x;;

  while (x2 - y > e)
  {
    x = (x2 * (x2 + 6 * y) + y * y) / (4 * x * (x2 + y));
    x2 = x * x;
  }

  return x;
}
