/* 6.c */
#include <stdio.h>

int main()
{
  int i=0,j=0; /* �롼�ץ����� */
  char a[]="orange"; 
  char b[80];

  /* ʸ������'\0'������ˤ���� */
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
