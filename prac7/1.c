/* 1.c */
#include <stdio.h>
#define N 10

/* r の n 乗を再帰的に実現する関数 */
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

  /* 10個のデータを取得 */
  for(i=0;i<N;i++){
    printf("x[%d] : ",i);
    scanf("%lf",&x[i]);
    sum += x[i];                /* 平均計算用 */
  }

  /* 平均を計算 */
  ave = sum / N;

  /* (x[i]-ave)^2の総和を求める */
  sum = 0.0;
  for(i=0;i<N;i++){
    sum += pow(x[i] - ave,2);
  }

  /* 分散を求める */
  v = sum / N;

  /* 表示 */
  printf("AVE = %f, V = %f\n", ave, v);

  return 0;
}
