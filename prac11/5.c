/* 5.c */
#include <stdio.h>

struct point{
  double x;
  double y;
};

struct line{
  struct point a;
  struct point b;
};

int main()
{
  struct line l;
  
  printf("Input point a [x y]: ");
  scanf("%lf %lf",&l.a.x, &l.a.y);
  printf("Input point b [x y]: ");
  scanf("%lf %lf",&l.b.x, &l.b.y);
  
  printf("Slope : %f\n",(l.b.y - l.a.y) / (l.b.x - l.a.x));
  
  return 0; 
}
