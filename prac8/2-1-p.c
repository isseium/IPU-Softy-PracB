/* 2-1-p.c */
#include <stdio.h>

/* strが示す文字列の長さを返す（ポインタ版） */
int str_length(char *str)
{
  int i;

  for(i=0;*str!='\0';++i)
    str++;

  return i;
}

int main()
{
  char str[80];

  printf("Input string: ");
  scanf("%s",str);

  printf("Length (pointer): %d\n",str_length(str));

  return 0;

}
