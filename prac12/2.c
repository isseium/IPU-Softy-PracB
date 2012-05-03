/* 2.c */
#include <stdio.h>
#include <math.h>

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

/* ２点の距離を返す */
double getDist(struct point p1, struct point p2)
{
  return sqrt(pow(p2.x - p1.x,2)+pow(p2.y - p1.y,2));
}

/* ヘロンの公式を用いて三角形の面積を計算 */
double triangle_area(struct point p1, struct point p2, struct point p3)
{
  double s,a,b,c;

  a = getDist(p1,p2);
  b = getDist(p2,p3);
  c = getDist(p3,p1);

  s = (a + b + c) / 2;

  return sqrt(s*(s-a)*(s-b)*(s-c)); 
}

int main()
{
  struct point p1,p2,p3;

  p1 = define_point(1,2);
  p2 = define_point(5,3);
  p3 = define_point(-2,3);

  printf("S = %f\n",triangle_area(p1,p2,p3));

  return 0;
}



