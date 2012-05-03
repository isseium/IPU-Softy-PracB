/* 2-a.c */
#include <stdio.h>

int main()
{
  int p,n,t;
  char c;

  /* 果物を入力 */ 
  printf("Input fruit name. [b, a, or o] : ");
  scanf("%c", &c );
  switch(c){
    case 'b':  /* banana */
      p = 60;
      break;
    case 'a':  /* apple */
      p = 125;
      break;
    case 'o':  /* orange */
      p = 82;
      break;
    default:
      return 0;
  }
  
  /* 個数を入力 */
  printf("Input number : ");
  scanf("%d",&n);
  
  /* 合計を表示 */
  printf("Total : %d yen.\n", p * n);

  return 0;
} 

  
