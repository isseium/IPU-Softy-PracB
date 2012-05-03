/* 3.c */
#include <stdio.h>

void str_copy(char *dst, char *src)
{
  while (*src != '\0'){ /* *src �˳�Ǽ���줿ʸ���� '\0'�Ǥʤ��֡������֤� */
    *dst = *src;  /* *src �˳�Ǽ���줿ʸ���� *dst�˥��ԡ� */
    src++;
    dst++;
  }
  *dst = *src; /* ʸ����κǸ�򼨤� '\0' �򥳥ԡ� */
}

void str_swap(char *ptr1, char *ptr2)
{
  char tmp[80]; /* �ƥ�ݥ�� */

  str_copy(tmp ,ptr1);
  str_copy(ptr1,ptr2);
  str_copy(ptr2,tmp);

}

int main()
{
  char a[80], b[80]; /* ���Ĥ�ʸ������ */

  /* ʸ��������� */
  printf("a: ");
  scanf("%s", a); 
  printf("b: ");
  scanf("%s", b);

  str_swap(a, b); /* ʸ����򥳥ԡ� */
  printf("a: %s\n", a);
  printf("b: %s\n", b); /* ���ԡ���η�̤�ɽ�� */

  return 0;
}
