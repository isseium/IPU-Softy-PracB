/* 7.c */
#include <stdio.h>

int main()
{
  int i,j,flag;

  for(i=2;i<=50;i++){
    flag = 0;
    for(j=2;j<i;j++)
      if(i%j==0){
        flag = 1;
        break;
      }    
    if(flag == 0)
      printf("%d ",i);
  }

  printf("\n");

  return 0;
}
    
