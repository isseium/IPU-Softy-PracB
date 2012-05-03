/* 7.c */
#include <stdio.h>

void displaymap(int a[][8])
{
  int i,j;
  char symbol[]={'X','-','O'};
  for(i=0;i<8;i++){
    for(j=0;j<8;j++)
      printf("%c",symbol[a[j][i]+1]);
    printf("\n");
  }
}

int reverse(int a[][8], int c, int x, int y, int dx, int dy, int *g)
{
  if(x < 0 || x >= 8 || y < 0 || y >= 8 || a[x][y]==0 )return 0;
  if(a[x][y]==c) return c;		
  if(reverse(a,c,x+dx,y+dy,dx,dy, g) == c) a[x][y] *= -1 + 0 * (*g)++;
  else return 0;
  return c;
}

int main()
{
  int i,j,dx,dy,x,y,c,g,turn,cnt,a[8][8];
  char symbol[]={'X','-','O'};
  /* 初期化 */
  c = 1; /* 順番 */
  turn = 0; /* 総ターン数 */
  g = 0; /* 反転数 */
  cnt = 2; /* 先手の駒数 */  
  for(i=0;i<8;i++) /* マップの初期化 */
    for(j=0;j<8;j++)
      a[i][j] = 0;
  a[3][3]=a[4][4]=1; /* O の初期配置 */
  a[3][4]=a[4][3]=-1; /* X の初期配置 */  

  while(turn <= 60){
    displaymap(a);	/* 表示 */
    printf("turn: %d (O:%d, X:%d)\n\n", turn, cnt, turn + 4 - cnt,symbol[c+1]);
    printf("%c x y>",symbol[c+1]); /* 入力を促すメッセージの表示 */
    scanf("%d %d",&x,&y); /* 入力 */
    if(a[x][y]==0) /* なにもおいていなかったら */
      for(dx=-1;dx<=1;dx++) /* 反転 */
        for(dy=-1;dy<=1;dy++)
          reverse(a, c, x+dx, y+dy, dx, dy, &g);
    if(g!=0){ /* 反転数が0以外だったら */
      a[x][y] = c; /* 駒を置く */
      cnt += c * g;  /* 反転数を用いて先手の駒数を更新 */
      if(c==1)/* 先手だったら置いた分も追加 */
        cnt++; 
      g=0; /* 反転数初期化 */
      turn++; /* 総ターン数更新 */
      c*=-1; /* 順番更新 */
    } else
      printf("Can't put it here\n");
  }
  return 0;
}
