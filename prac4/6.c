/* 6.c */
#include <stdio.h>

/*  x の y 乗を求める */
double pow(double x, double y)
{
  double i,n=1;

  for(i=1;i<=y;i++)
    n *= x;

  return n;
}

     
/* 外心の x 座標を求める関数 */
double getCircumcenterX(double x1, double y1, double x2, double y2, double x3, double y3)
{
  return ((y2-y3)*(pow(x1,2)+pow(y1,2))+(y3-y1)*(pow(x2,2)+pow(y2,2))+(y1-y2)*(pow(x3,2)+pow(y3,2)))
    /(2*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));
}

/* 外心の y 座標を求める関数 */
double getCircumcenterY(double x1, double y1, double x2, double y2, double x3, double y3)
{
  return ((x2-x3)*(pow(x1,2)+pow(y1,2))+(x3-x1)*(pow(x2,2)+pow(y2,2))+(x1-x2)*(pow(x3,2)+pow(y3,2)))
    /(2*(y1*(x2-x3)+y2*(x3-x1)+y3*(x1-x2)));
}

int main()
{
  double x1,x2,x3,y1,y2,y3;

  printf("x1 :");
  scanf("%lf",&x1);

  printf("y1 :");
  scanf("%lf",&y1);

  printf("x2 :");
  scanf("%lf",&x2);

  printf("y2 :");
  scanf("%lf",&y2);

  printf("x3 :");
  scanf("%lf",&x3);

  printf("y3 :");
  scanf("%lf",&y3);

  printf("(x ,y) = (%f, %f)\n", getCircumcenterX(x1,y1,x2,y2,x3,y3), getCircumcenterY(x1,y1,x2,y2,x3,y3));

  return 0;

                                                                           
}
