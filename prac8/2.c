/* 2.c */
#include <stdio.h>

/* str������ʸ�����Ĺ�����֤��������ǡ� */
int str_length(char str[])
{
  int i;

  for(i=0;str[i]!='\0';++i);

  return i;
}

/* str������ʸ�����Ĺ�����֤��ʥݥ����ǡ� */
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
