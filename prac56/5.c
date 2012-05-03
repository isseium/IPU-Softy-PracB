/* 5.c */
#include <stdio.h>

/* 第三の柱を返す関数 */
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
    move(n-1,from,getTmpPole(from,to)); /* 円盤n上にある円盤を第三の柱に移動する */
    showMes(n,from,to); /* 円盤nを目的の柱へ移動 */
    move(n-1,getTmpPole(from,to),to); /* 第三の柱に移動した円盤を目的の柱に移動する */
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

  /* 無効な値に対する処理 */
  if(n < 1 || from < 1 || from > 3 || to < 1 || to > 3){
    printf("invalid number\n");
    return -1;
  }

  /* 移動 */
  move(n,from,to);

  return 0;
}



