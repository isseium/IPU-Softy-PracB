/* 6.c */
#include <stdio.h>

int main()
{
  int i=0,j=0; /* ループカウンタ */
  char a[]="orange"; 
  char b[80];

  /* 文字数（'\0'を除く）を求める */
  while (a[i] != '\0'){
    i++;
  }

  while(a[j] != '\0'){
    b[j] = a[i - j - 1];
    j++;
  }

  b[j] = '\0';

  printf("a: %s\n", a);
  printf("b: %s\n", b);

  return 0;
}
