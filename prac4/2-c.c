/* 2-c.c */
#include <stdio.h>

int main()
{
  float c = 2.99792458e8,m;

  printf("mass [kg]: ");
  scanf("%f",&m);

  printf("E = %e \n", m * c * c );

  return 0;
}
