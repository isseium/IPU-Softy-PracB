/* 8.c */
#include <stdio.h>
#include <string.h>

/* 整数を文字に変換 */
void itoa(int src, char *dst)
{
  int i,keta;

  if (src < 0){        /* 絶対値にする */
    *dst = '-';
    dst++;
    src *= -1;
  }	
  
  keta = 1;
  for(i=10; i<src; i*=10)       /* 桁数を求める */
    keta++;
  
  for(i=keta-1;i >= 0; i--){
    *(dst+i) = src % 10 + '0' ; /* 10で割った余りを文字型にして格納 */
    src = (src - (src % 10))/ 10; /* (元の数字 - 余り) / 10 とする  */
  }
  
  *(dst+keta) = '\0';
}

/* 実数を文字に変換 */
void ftoa(double src, char *dst, int n)
{
  char ans[80];
  int i,keta;
  
  for(i=0;i<n;i++)              /* 10^n倍する */
    src *= 10;	
  
  itoa((int)src,ans);           /* 整数部分を変換 */
  
  keta = strlen(ans);           /* 文字数を得る */
  
  /* 下n桁までを 1 桁後ろに移動 */
  for(i=0;i<=n;i++)
    *(ans+keta-i+1) = *(ans+keta-i);
  
  *(ans+keta-i+1) = '.';        /* 小数点を追加 */
  *(ans+keta+1) = '\0';         /* ヌル文字を追加 */
  strcpy(dst,ans);              /* コピー */
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
