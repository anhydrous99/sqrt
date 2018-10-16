/* 
 * Uses method described best to find square root between 0 and 3
 */


double twovaritsqrt(double y)
{
  double a = y;
  double c = y - 1;

  /* accuracy level */
  double e = 0.0000001;

  while (c > e)
  {
    a = a - a * c / 2;
    c = c * c * (c - 3) / 4;
  }

  return a;
}
