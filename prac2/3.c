/* 3.c */
#include <stdio.h>

int main()
{
  int a, b;

  printf("a: ");
  scanf("%d",&a);

  printf("b: ");
  scanf("%d", &b);

  printf(" a = %d, b = %d\n", a, b);
  if ( b != 0 )                 /* 0 �ǳ��Ȥ������顼���ɻ� */
    printf(" a / b = %d ... %d\n", a / b, a % b);
  else
    printf("0 �Ǥϳ��ޤ���\n");
    
  return 0;
}
