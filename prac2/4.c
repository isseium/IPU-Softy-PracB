/* 4.c */
#include <stdio.h>

int main()
{
  int a, b, c, d;

  printf("(ax+b)(cx+d)\n");

  printf("a: ");
  scanf("%d",&a);

  printf("b: ");
  scanf("%d", &b);

  printf("c: ");
  scanf("%d",&c);

  printf("d: ");
  scanf("%d", &d);


  printf(" (%d)*x*x+(%d)*x+(%d)\n",a*c, a*d+b*c, b*d);

  return 0;
}
