/* 6-do.c */
#include <stdio.h>

int main()
{
  int i=0,sum=0;

  do{
    i++;
    sum += i;
  }while(sum<=1000000);

  printf("%d\n",i);

  return 0;
}
