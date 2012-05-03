#include <stdio.h>
#include <string.h>
/* 8.c */

/* 整数を文字に変換 */
void i2a(int src, char *dst)
{
  int i,j,keta;
  
  /* 符号 */
  if (src < 0){
    *dst = '-';
    dst++;
    src *= -1;                  /* 絶対値にする */
  }
  
  /* 桁数を求める */
  keta=1;
  for(i=10; i<=src; i*=10)
    keta++;  
  
  /* ポインタを最後尾にする */
  dst += keta;
  *dst = '\0';
  dst--;
  
  for(i=0;i < keta; i++){
    *dst= src % 10 + '0' ;
    dst--;
    src = (src - (src % 10))/ 10;
  }
}

/* 実数を文字に変換 */
void ftoa(double src, char *dst, int n)
{
  char ans[80],tmp[80];
  int i;		
  
  /* 整数部分を変換 */
  i2a((int)src,dst);
  
  /* 小数点を連結 */
  strcat(dst,".");
  
  /* 符号 */
  if (src < 0){
    src *= -1;                  /* 絶対値にする */
  }
  
  /* 小数部分を10倍して整数部分を文字に変換する処理をn回繰り返す */
  for(i=0;i<n;i++){
    src -= (int)src;            /* 小数部分を得る */
    src *= 10.0;		/* 小数第一位の値を整数部分にする */
    i2a((int)src,tmp);		/* 整数部分を文字に変換 */
    strcat(dst,tmp);		/* 連結 */
  }
}

int main()
{
  double value;
  char c[80];
  
  scanf("%lf",&value);
  
  ftoa(value, c, 3);
  
  printf("ftoa: %s\n",c);
  
  return 0;
}

