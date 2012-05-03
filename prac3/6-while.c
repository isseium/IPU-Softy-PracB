/* 6-while.c */
#include <stdio.h>

int main()
{
  int i=0,sum=0;

  while(sum<=1000000){
    i++;
    sum += i;
  }
  printf("%d\n",i);

  return 0;
}
