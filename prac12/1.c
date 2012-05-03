/* 1.c */
#include <stdio.h>

struct point{
  int x;
  int y;
};

struct point define_point(int x, int y)
{
  struct point p;

  p.x = x;
  p.y = y;

  return p;
}

void put_point(struct point p)
{
  printf("(%d, %d)\n",p.x,p.y);
}

int main()
{
  struct point p1,p2,p3;

  p1 = define_point(1,2);
  p2 = define_point(5,4);
  p3 = define_point(-2,3);

  printf("p1 = ");
  put_point(p1);
  printf("p2 = ");
  put_point(p2);
  printf("p3 = ");
  put_point(p3);

  return 0;  
}
