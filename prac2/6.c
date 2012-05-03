#include <stdio.h>

int main()
{
  int a=1, b=1, c=1;

  if((a >= 2 || b == 1) && c > 0)
    printf("T\n");
  else
    printf("F\n");

  if(a >= 2 || b == 1 && c > 0)
    printf("T\n");
  else
    printf("F\n");

  if((a >= 2 || b == 1 && c > 0) != 0)
    printf("T\n");
  else
    printf("F\n");

  return 0;
}
