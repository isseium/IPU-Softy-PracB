/* 9.c */
#include <stdio.h>
#define PI 3.14159265358979323846

double getVol(double r)
{
  return (4*PI*r*r*r)/3;
}

int main()
{
  double d;

  d = 30;
  printf("d : %f , Vol : %f\n",d,getVol(d/2));
  
  d = 25;
  printf("d : %f , Vol : %f\n",d,getVol(d/2));

  return 0;
}
