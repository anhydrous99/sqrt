/*
 * Uses the taylor series around 1 up to the 5th term diverges from actual with large numbers
 */
double taylorsqrt(double y)
{
  return 0.246094 + y * (1.23047 + y * (-0.820313 + y * (0.492188 + (-0.175781 + 0.0273438 * y) * y)));
}
