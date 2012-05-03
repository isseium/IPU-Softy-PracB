/* coulomb-main.c */

#include <stdio.h>
double PI = 3.142;
double e0 = 8.854e-12;

double coulomb(double q, double es, double r);

int main()
{
  double q, es, r;

  printf("q? ");
  scanf("%f", &q);
  printf("es? ");
  scanf("%f", &es);
  printf("r? ");
  scanf("%f", &r);

  printf("E = %e\n", coulomb(q, es, r));
}
