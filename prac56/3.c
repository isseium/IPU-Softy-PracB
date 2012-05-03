/* 3.c */
#include <stdio.h>

int euclid(int m, int n);

int main()
{
  int m,n;

  printf("m : ");
  scanf("%d",&m);
  printf("n : ");
  scanf("%d",&n);

  printf("Highest common factor : %d\n",euclid(m,n));

  return 0;
}

int euclid(int m, int n)
{
  int z;

  if(n==0)
    return m;
  else if(m%n==0)
    return n;
  
  m = m % n;

  return euclid(n, m);          /* m,nを入れ替えて関数へ渡す */
}
