/* 1.c */
#include <stdio.h>
#define N 10

/* r �� n ���Ƶ�Ū�˼¸�����ؿ� */
double pow(double r, int n)
{
  if (n > 0)
    return r * pow(r,n-1);
  else if (n == 0)
    return 1;
}

int main()
{
  double x[N],sum=0.0,ave=0.0,v=0.0;
  int i;

  /* 10�ĤΥǡ�������� */
  for(i=0;i<N;i++){
    printf("x[%d] : ",i);
    scanf("%lf",&x[i]);
    sum += x[i];                /* ʿ�ѷ׻��� */
  }

  /* ʿ�Ѥ�׻� */
  ave = sum / N;

  /* (x[i]-ave)^2�����¤���� */
  sum = 0.0;
  for(i=0;i<N;i++){
    sum += pow(x[i] - ave,2);
  }

  /* ʬ������� */
  v = sum / N;

  /* ɽ�� */
  printf("AVE = %f, V = %f\n", ave, v);

  return 0;
}
