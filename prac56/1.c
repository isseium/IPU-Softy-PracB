/* 1.c */
#include <stdio.h>

int fib(int x)
{
  if(x > 1)
    return fib(x-1) + fib(x-2);
  else if(x==1)
    return 1;
  else if(x==0)
    return 0;
}

int main()
{
  int x;

  printf("Input number : ");
  scanf("%d",&x);

  if(x<0){
    printf("invalid number\n");
    return -1;
  }

  printf("fib(%d) = %d\n",x,fib(x));

  return 0;
}
