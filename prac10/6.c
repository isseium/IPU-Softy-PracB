/* 6.c */
#include <stdio.h>

void displaymap(int a[][8])
{
  char symbol[]={'X','-','O'};
  int i,j;
  
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      printf("%c",symbol[a[j][i]+1]);
    }
    printf("\n");
  }
}

int reverse(int a[][8], int c, int x, int y, int dx, int dy)
{
  if(x < 0 || x >= 8 || y < 0 || y >= 8 || a[x][y]==0)	/* 条件 1,条件 2 */
    return 0;
  if(a[x][y]==c) /* 条件 3 */
    return c;
  if(reverse(a,c,x+dx,y+dy,dx,dy) == c){
    a[x][y] *= -1; /* 反転 */
    return c;
  }else
    return 0;
}

int main()
{	
  int i,j,dx,dy;
  int a[8][8];
  int x,y,c;
  
  /* すべて 0 に初期化 */
  for(i=0;i<8;i++)
    for(j=0;j<8;j++)
      a[i][j]=0;
  
  /* 初期値を与える */
  a[3][3]=a[4][4]=1;
  a[3][4]=a[4][3]=-1;
  
  displaymap(a);	/* 初期化直後の表示 */
  printf("\n");
  
  x = 4;
  y = 2;
  c = 1;
  a[x][y]=c;
  
  for(dx=-1;dx<=1;dx++)
    for(dy=-1;dy<=1;dy++)
      reverse(a, c, x+dx, y+dy, dx, dy);
  
  displaymap(a);	/* 処理後の表示 */
  
  return 0;
}
