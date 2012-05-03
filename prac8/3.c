/* 3.c */
#include <stdio.h>

void str_copy(char *dst, char *src)
{
  while (*src != '\0'){ /* *src に格納された文字が '\0'でない間、繰り返し */
    *dst = *src;  /* *src に格納された文字を *dstにコピー */
    src++;
    dst++;
  }
  *dst = *src; /* 文字列の最後を示す '\0' をコピー */
}

void str_swap(char *ptr1, char *ptr2)
{
  char tmp[80]; /* テンポラリ */

  str_copy(tmp ,ptr1);
  str_copy(ptr1,ptr2);
  str_copy(ptr2,tmp);

}

int main()
{
  char a[80], b[80]; /* ２つの文字配列 */

  /* 文字列を入力 */
  printf("a: ");
  scanf("%s", a); 
  printf("b: ");
  scanf("%s", b);

  str_swap(a, b); /* 文字列をコピー */
  printf("a: %s\n", a);
  printf("b: %s\n", b); /* コピー後の結果を表示 */

  return 0;
}
