/* 2-3-p.c */
#include <stdio.h>

/* src1������ʸ����Τ��Ȥ�src2��Ϣ�뤷��ʸ�����dst������ �ʥݥ����ǡ�*/
int str_connect(char *dst, char *src1, char *src2)
{
  while(*src1!='\0'){
    *dst=*src1;
    dst++;
    src1++;
  }

  while(*src2!='\0'){
    *dst=*src2;
    dst++;
    src2++;
  }

  *dst='\0';

  return 0;
}

int main()
{
  char strA[80],strB[80],dst[80];
  int n;

  printf("Input string A: ");
  scanf("%s",strA);
  printf("Input string B: ");
  scanf("%s",strB);

  /* ���� */
  str_connect(dst,strA,strB);
  
  printf("Connect (pointer): %s\n",dst);

  return 0;
}

