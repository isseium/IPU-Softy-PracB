/* 7-b.c */
#include <stdio.h>

int main()
{
  double c,d;

  printf("c : ");
  scanf("%lf",&c);
  printf("d : ");
  scanf("%lf",&d);

  printf("c + d = %.4f\n", c + d);
  printf("c + d = %e\n", c + d);

  printf("c - d = %.4f\n", c - d);
  printf("c - d = %e\n", c - d);

  printf("c * d = %.4f\n", c * d);
  printf("c * d = %e\n", c * d);

  if (d != 0){
    printf("c / d = %.4f\n", c / d);
    printf("c / d = %e\n", c / d);
  }else{
    printf("Cannot divide\n");
    return -1;
  }

  return 0;
}
