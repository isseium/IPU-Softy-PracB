/* 2-a.c */
#include <stdio.h>

int main()
{
  int p,n,t;
  char c;

  /* $B2LJ*$rF~NO(B */ 
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
  
  /* $B8D?t$rF~NO(B */
  printf("Input number : ");
  scanf("%d",&n);
  
  /* $B9g7W$rI=<((B */
  printf("Total : %d yen.\n", p * n);

  return 0;
} 

  
