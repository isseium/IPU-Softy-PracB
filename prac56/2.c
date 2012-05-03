/* 2.c */
#include <stdio.h>

int Ackermann(int m, int n)
{
  if (m==0)
    return n + 1;
  else if (n==0)
    return Ackermann(m-1,1);
  
  return Ackermann(m-1,Ackermann(m,n-1));
}

int main()
{
  int m,n;

  printf("m : ");
  scanf("%d",&m);
  printf("n : ");
  scanf("%d",&n);

  if(m < 0 || n < 0){
    prinft("invalid number\n");
    return -1;
  }

  printf("Ackermann(%d,%d) = %d\n",m,n,Ackermann(m,n));

  return 0;
}
