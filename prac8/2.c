/* 2.c */
#include <stdio.h>

/* strが示す文字列の長さを返す（配列版） */
int str_length(char str[])
{
  int i;

  for(i=0;str[i]!='\0';++i);

  return i;
}

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

  return 0;

}
