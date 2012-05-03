#include <stdio.h>

int main()
{
  int a=1, b=1, c=1;

  printf("1 : %d\n",((a >= 2 || b == 1) && c > 0));
  printf("2 : %d\n",(a >= 2 || b == 1 && c > 0));
  printf("3 : %d\n",((a >= 2 || b == 1 && c > 0) != 0));

  return 0;
}
