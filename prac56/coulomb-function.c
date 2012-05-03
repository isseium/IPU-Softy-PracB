/* coulomb-function.c */

extern PI;
extern e0;

double coulomb(double q, double es, double r)
{
  return q / ( 4.0 * PI * es * e0 * r * r );
}
