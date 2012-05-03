/* 5.c */
#include <stdio.h>

/* �軰������֤��ؿ� */
int getTmpPole(int pole1,int pole2)
{
  return 6-pole1-pole2;
}

void showMes(int n,int from,int to)
{
  printf("Move disk %d from pole %d to pole %d\n",n,from,to);
  return;
}
void move(int n,int from,int to)
{
  if(n==1)
    showMes(n,from,to);
  else{
    move(n-1,from,getTmpPole(from,to)); /* ����n��ˤ�����פ��軰����˰�ư���� */
    showMes(n,from,to); /* ����n����Ū����ذ�ư */
    move(n-1,getTmpPole(from,to),to); /* �軰����˰�ư�������פ���Ū����˰�ư���� */
  }
  return;
}

int main()
{
  int n,from,to;

  printf("How many disks? : ");
  scanf("%d",&n);
  printf("From where? [1-3] : ");
  scanf("%d",&from);  
  printf("To where? [1-3] : ");
  scanf("%d",&to);

  /* ̵�����ͤ��Ф������ */
  if(n < 1 || from < 1 || from > 3 || to < 1 || to > 3){
    printf("invalid number\n");
    return -1;
  }

  /* ��ư */
  move(n,from,to);

  return 0;
}



