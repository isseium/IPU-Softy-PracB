/* 9.c */
#include <stdio.h>
#include <math.h>

/* 四捨五入を行う関数 */
double own_rint(double x){
  double ans;
  int m_flag=0;                   /* 負フラグ 1:負*/

  if(x < 0){                    /* 負の値であったら絶対値にする */
    m_flag=1;                   /* 負フラグを立てる */
    x *= -1;                    /* 絶対値にする */
  }

  if(x < (double)(int)x + 0.5)  /* 小数点部分が0.5未満のとき */
    ans = (double)(int)x;       /* 切り捨て */
  else if ( x == (double)(int)x + 0.5){ /* 小数点部分が0.5のとき */
    if((int)x % 2 == 0)         /* 偶数 */
      ans = (double)(int)x;
    else                        /* 奇数のとき （偶数にする）*/
      ans = (double)(int)x + 1.0; 
  }else                         /* 小数点部分が0.5より大きいとき */
    ans = (double)(int)x + 1.0; /* 切り上げ */

  if(m_flag == 1)               /* 元の値が負であった場合 */
    ans *= -1;                  /* もとに戻す */

  return ans;                   /* 値を返す */
}
  
/* 切り上げを行う関数 */
double own_ceil(double x){
  if (x > (int)x)
    return (double)(int)x + 1.0;
  else
    return (double)(int)x;
}

/* 切り捨てを行う関数 */
double own_floor(double x){
  if(x < 0)
    return (double)(int)x - 1.0;
  else
    return (double)(int)x;
}


int main()
{
  double n1 = 123.456789, n2 = 1234.56789;

  printf("rint(%f):\t %f\n",n1,rint(n1));
  printf("rint(%f):\t %f\n",n2,rint(n2));
  printf("own_rint(%f):\t %f\n",n1,own_rint(n1));
  printf("own_rint(%f):\t %f\n",n2,own_rint(n2));

  printf("ceil(%f):\t %f\n",n1,ceil(n1));
  printf("ceil(%f):\t %f\n",n2,ceil(n2));
  printf("own_ceil(%f):\t %f\n",n1,own_ceil(n1));
  printf("own_ceil(%f):\t %f\n",n2,own_ceil(n2));

  printf("floor(%f):\t %f\n",n1,floor(n1));
  printf("floor(%f):\t %f\n",n2,floor(n2));
  printf("own_floor(%f):\t %f\n",n1,own_floor(n1));
  printf("own_floor(%f):\t %f\n",n2,own_floor(n2));

  return 0;
}
