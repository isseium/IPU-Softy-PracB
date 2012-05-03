/* 2-b.c */
#include <stdio.h>

int main()
{
  char c;
  float j;

  /* 通貨の指定 */
  printf("Currency initial :");
  scanf("%c",&c);

  /* 日本円の指定 */
  printf("Price(JPY):");
  scanf("%f",&j);

  switch (c) {
    case 'U':
      printf("%.2f yen -> %.2f USD\n", j , j / 117.65);
      break;
    case 'G':
      printf("%.2f yen -> %.2f GBDP\n", j , j / 220.98);
      break;
    case 'E':
      printf("%.2f yen -> %.2f EUR\n", j , j / 149.19);
      break;
    case 'K':
      printf("%.2f yen -> %.2f KRW\n", j , j / 0.12283);
      break;
    default:
      printf("Invalid initial\n");
      return 0;
  }
  return 0;
}
