/* 2.c */
#include <stdio.h>

int str_length(char *str)
{
  int i = 0; /* �롼�ץ����� */

  while(str[i] != '\0') /* '\0' �ޤǥ롼�� */
    ++i;

    return i;
}

int main(int argc, char *argv[])
{
  int i = 0; /* �롼�ץ����� */

  for (i = 1; i < argc ; i++)
    printf("%s: %d\n", argv[i], str_length(argv[i]));

  return 0;
}
