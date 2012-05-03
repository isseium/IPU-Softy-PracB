/* 4.c */
#include <stdio.h>

int main()
{
  int i;

  for(i=1;i<=40;i++)
    if ((i % 4)==0)
      printf("%d ", i);

  printf("\n");

  return 0;
}
