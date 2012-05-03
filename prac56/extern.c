/* exturn.c: exturn ������� */
#include <stdio.h>

extern int a; /* �ѿ� a �� extern ��� */
int b = 2;

int func()
{
  int b;
  extern int c; /* �ѿ� c �� extern ��� */

  b = 3;

  printf("func: a = %d, b = %d, c = %d\n", a, b, c);  /* �ѿ����ͤ�ɽ�� */

  c = 6;

  return 0;
}

int c = 4;

int main()
{
  extern int c; /* �ѿ� c �� extern ��� */

  func();

  a = 5;

  printf("main: a = %d, b = %d, c = %d\n", a, b, c); /* �ѿ����ͤ�ɽ�� */

  return 0;
}

int a = 1;
