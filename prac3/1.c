/* 1.c */
#include <stdio.h>

int main()
{
  int x, y, z, max;

  max = 0;

  printf("x: ");
  scanf("%d", &x);
  printf("y: ");
  scanf("%d", &y);
  printf("z: ");
  scanf("%d", &z);

  if (x > max ){
    max = x;
  }
  if (y > max){
    max = y;
  }
  if (z > max){
    max = z;
  }

  printf("max = %d\n",max);

}
