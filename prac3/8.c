/* 8.c */
#include <stdio.h>

int main()
{
  int x,y,i;

  printf("x : ");
  scanf("%d",&x);

  printf("y : ");
  scanf("%d",&y);

  if (y == 0){                  /* 0 �ǳ���ػ� */
    printf("error\n");
    return -1;
  }
  
  printf("%d",x/y);             /* ������ʬ�ξ���ɽ�� */

  if(x%y!=0){
    printf(".");
    for(i=0;i<20;i++){
      x = x % y * 10;             /* ;���Ф�10�ܤ��� */
      if(x == 0)                  /* ;�꤬ 0 �Ǥ��ä���롼�פ�ȴ���� */
        break;
      printf("%d",x / y );
    }
  }
  printf("\n");

  return 0;
}
