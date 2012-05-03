/* 8.c */
#include <stdio.h>

/* ���ꤵ�줿�ؿ� f(x) = x * x - 2 */
float f(float x)
{
  return x*x - 2;
}

/* �����ͤ����ؿ� */
float abs(float x)
{
  if (x < 0)
    x *= -1;

  return x;
}

int main()
{
  float xa=1.0, xb=2.0, xc, e = 0.000001 ;

  do{
    xc = (xa + xb) / 2;
    if (f(xc)>0)
      xb = xc;
    else if (f(xc)<0)
      xa = xc;
  }while(abs(f(xc)) > e);
    
  printf("x = %f\n", xc);

  return 0;
}

  
