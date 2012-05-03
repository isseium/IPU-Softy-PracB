/* exturn.c: exturn 宣言の例 */
#include <stdio.h>

extern int a; /* 変数 a を extern 宣言 */
int b = 2;

int func()
{
  int b;
  extern int c; /* 変数 c を extern 宣言 */

  b = 3;

  printf("func: a = %d, b = %d, c = %d\n", a, b, c);  /* 変数の値を表示 */

  c = 6;

  return 0;
}

int c = 4;

int main()
{
  extern int c; /* 変数 c を extern 宣言 */

  func();

  a = 5;

  printf("main: a = %d, b = %d, c = %d\n", a, b, c); /* 変数の値を表示 */

  return 0;
}

int a = 1;
