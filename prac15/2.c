/* 2.c */
#include <stdio.h>

struct point{
  double x,y;
};

double MyMax(double x1, double x2, double x3)
{
  double max = x1;

  if(max < x2)
    max = x2;
  
  if(max < x3)
    max = x3;

  return max;
}

double MyMin(double x1, double x2, double x3)
{
  double min = x1;

  if(min > x2)
    min = x2;
  
  if(min > x3)
    min = x3;

  return min;
}

double MyAbs(double x)
{
  if(x<0)
    x *= -1;

  return x;
}

double getSs(struct point max, struct point min)
{
  return (max.x - min.x) * (max.y - min.y);
}

double getSt(struct point p1, struct point p2)
{
  double ans;
  int i;

  return MyAbs(p1.x - p2.x) * MyAbs(p1.y - p2.y) / 2;
}

int main()
{
  struct point p[3], max, min;
  int i;
  double St;

  for(i=0;i<3;i++){
    printf("Input point%d [x y] : ", i);
    scanf("%lf %lf", &p[i].x, &p[i].y);
  }

  /* 各座標の最大値および最小値を求める */
  max.x = MyMax(p[0].x, p[1].x, p[2].x);
  max.y = MyMax(p[0].y, p[1].y, p[2].y);
  min.x = MyMin(p[0].x, p[1].x, p[2].x);
  min.y = MyMin(p[0].y, p[1].y, p[2].y);
  
  /* T を求める */
  St = getSs(max, min) - getSt(p[0],p[1]) - getSt(p[1],p[2]) - getSt(p[2], p[0]);

  printf("St : %f\n", St);

  return 0;
}



