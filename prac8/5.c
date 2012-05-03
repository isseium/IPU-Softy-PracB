/* 5.c */
#include <stdio.h>

void itoa(int src, char *dst)
{
  int i,j,keta;

  /* 符合 */
  if (src < 0){
    *dst = '-';
    dst++;
    src *= -1;                  /* 絶対値にする */
  }

  /* 桁数を求める */
  if(src == 0){
    keta = 1;
    *dst = '0';
  }else{
    keta = 0;
    for(i=1;i <= src;i *= 10)
      keta++;
  }
    
  for(i=keta-1;i >= 0; i--){
    *(dst+i) = src % 10 + '0' ;
    src = (src - (src % 10))/ 10;
  }

  *(dst+keta) = '\0';
}


int main()
{
  int n;
  char c[80];

  printf("Input number: ");
  scanf("%d",&n);

  itoa(n,c);

  printf("int: %d -> char: %s\n",n, c);

  return 0;
}


