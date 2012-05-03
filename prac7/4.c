/* 4.c */
#include <stdio.h>
#define N 3
#define E 0.00001

double abs(double x)
{
  if (x<0)
    return -x;
  else
    return x;
}

int main()
{
  double a[N][N]={{5.0,-2.0,1.0},{3.0,8.0,-3.0},{1.0,1.0,-4.0}};
  double b[N]={4.0,10.0,-9.0};
  double x[N];
  double y[N]={0.00,0.00,0.00};
  double y2[N];
  int i,j,flg;
  double tmp;

  while(1){
    flg = 0;                    /* 収束チェック用フラグの初期化 */

    for(i=0;i<N;i++){
      /* y'を求める */
      tmp = 0.0;
      for(j=0;j<N;j++)
        if(j!=i)
          tmp -= a[i][j]*y[j];
      y2[i] = (b[i]+tmp)/a[i][i];
      
      /* |y'-y| の 判定 */
      if (abs(y2[i]-y[i])<E){
        x[i]=y[i];
      }else{
        y[i]=y2[i];
        flg++;
      }
    }

    /* すべてが収束しているか */
    if(flg==0)
      break;
  }

  /* 表示 */
  for(i=0;i<N;i++)
    printf("x[%d] = %f\n",i+1,x[i]);

  return 0;
}
