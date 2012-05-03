/* 8.c */
#include <stdio.h>

int main()
{
  int x,y,i;

  printf("x : ");
  scanf("%d",&x);

  printf("y : ");
  scanf("%d",&y);

  if (y == 0){                  /* 0 で割るを禁止 */
    printf("error\n");
    return -1;
  }
  
  printf("%d",x/y);             /* 整数部分の商を表示 */

  if(x%y!=0){
    printf(".");
    for(i=0;i<20;i++){
      x = x % y * 10;             /* 余りを出し10倍する */
      if(x == 0)                  /* 余りが 0 であったらループを抜ける */
        break;
      printf("%d",x / y );
    }
  }
  printf("\n");

  return 0;
}
