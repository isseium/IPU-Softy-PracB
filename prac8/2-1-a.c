/* 2-1-a.c */
#include <stdio.h>

/* strが示す文字列の長さを返す（配列版） */
int str_length(char str[])
{
  int i;

  for(i=0;str[i]!='\0';++i);

  return i;
}


int main()
{
  char str[80];

  printf("Input string: ");
  scanf("%s",str);

  printf("Length (array): %d\n",str_length(str));

  return 0;
}
