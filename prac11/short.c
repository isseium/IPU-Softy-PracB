/* 5.c */
#include <stdio.h>

struct point{
  double x;
  double y;
};

int main()
{
  struct point a,b;
  
  printf("Input point a [x y]: ");
  scanf("%lf %lf",&a.x, &a.y);
  printf("Input point b [x y]: ");
  scanf("%lf %lf",&b.x, &b.y);
  
  printf("Slope : %f\n",(b.y - a.y) / (b.x - a.x));
  
  return 0; 
}
