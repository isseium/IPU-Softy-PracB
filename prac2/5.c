/* 5.c */
#include <stdio.h>

int main()
{
  int a, b, c, x, y;

  printf("a: ");
  scanf("%d",&a);

  printf("b: ");
  scanf("%d", &b);

  printf("c: ");
  scanf("%d",&c);

  printf(" y = ax*x + bx + c = (%d)x*x + (%d)x + (%d)\n", a, b, c);

  printf("x: ");
  scanf("%d", &x);

  /* y дЄ╡сдсды */
  y =  a*x*x + b*x + c;
  
  printf(" y = %d, if x = %d.\n", y, x);

  return 0;
}
