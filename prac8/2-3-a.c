/* 2-3-a.c */
#include <stdio.h>

/* src1������ʸ����Τ��Ȥ�src2��Ϣ�뤷��ʸ�����dst������ �������ǡ�*/
int str_connect(char dst[], char src1[], char src2[])
{
  int i,j;

  for(i=0;src1[i]!='\0';i++)
    dst[i]=src1[i];

  for(j=0;src2[j]!='\0';j++)
    dst[i+j]=src2[j];

  dst[i+j]='\0';

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
  
  printf("Connect (array): %s\n",dst);

  return 0;

}

