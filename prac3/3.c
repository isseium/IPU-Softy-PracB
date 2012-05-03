/* 3.c */
#include <stdio.h>

int main()
{
  int i;

  for(i=1;i<=20;i++)
    if ((i % 2)==1)
      printf("%d ", i);

  printf("\n");

  return 0;
}
