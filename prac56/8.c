/* 8.c */
#include <stdio.h>

int main()
{
  char c;
  c = NULL;

  while(1){
    printf("input? : ");
    scanf("%c%*c",&c);

    /* Ƚ�� */
    if(c != ' '){
      /* ʸ����Ƚ�� */
      if (c >= 'A' && c <= 'Z')
        printf("Capital letter\n"); /* ��ʸ�� */
      else if(c >= 'a' && c <= 'z')
        printf("Small letter\n"); /* ��ʸ�� */
      else if(c >= '0' && c <= '9')
        printf("Number\n");       /* ���� */
      else
        printf("Others\n");       /* ����¾ */
    }else
      break;                    /* ������ä���롼�פ�ȴ���� */
  }

  return 0;
}
