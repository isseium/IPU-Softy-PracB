/* 5.c */
#include <stdio.h>

struct point{
  double x;
  double y;
};

int main()
{
  struct point a,b;
  double slope;

  printf("Input point a [x y]: ");
  scanf("%lf %lf",&a.x, &a.y);
  printf("Input point b [x y]: ");
  scanf("%lf %lf",&b.x, &b.y);

  slope = (a.y - b.y) / (a.x - b.x);

  printf("Slope:%f\n", slope);

  return 0;
}
