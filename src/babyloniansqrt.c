/* 
 * Uses the Babylonian Method in order to find the square root of a number
 */

double babyloniansqrt(double y)
{
  /* Initial Guess */
  double x = y / 2;

  /* accuracy level */
  double e = 0.0000001;

  while (x*x - y > e)
    x = (y/x + x) / 2;

  return x;
}
