/* 7-a.c */
#include <stdio.h>

int main()
{
  int a,b;

  printf("a : ");
  scanf("%d",&a);
  printf("b : ");
  scanf("%d",&b);

  printf("a + b = %d (d)\n", a + b);
  printf("a + b = %x (h)\n", a + b);

  printf("a - b = %d (d)\n", a - b);
  printf("a - b = %x (h)\n", a - b);

  printf("a * b = %d (d)\n", a * b);
  printf("a * b = %x (h)\n", a * b);

  if (b != 0){
    printf("a / b = %d (d)\n", a / b);
    printf("a / b = %x (h)\n", a / b);
  }else{
    printf("Cannot divide\n");
    return -1;
  }

  return 0;
}
