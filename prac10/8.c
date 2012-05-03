/* 8.c */
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
  if(x < 0 || x >= 8 || y < 0 || y >= 8 || a[x][y]==0)	/* 条件 1,条件 2 */
    return 0;
  if(a[x][y]==c) /* 条件 3 */
    return c;		
  if(reverse(a,c,x+dx,y+dy,dx,dy, g) == c){
    a[x][y] *= -1; /* 反転 */
    (*g)++;
    return c;
  }else
    return 0;
}

int cput(int a[][8], int c, int *cx, int *cy)
{
  int max=0,i,j,k,l,g,b[8][8],dx,dy;
  
  for(i=0;i<8;i++)/* 座標(0,0)から(7,7)まで繰り返す */
    for(j=0;j<8;j++){
      for(k=0;k<8;k++) /* マップの初期化（毎回初期化する） */
        for(l=0;l<8;l++)
          b[k][l] = a[k][l];
      if(b[i][j]==0){ /* なにもおいていなかったら */
        g=0; /* 反転数初期化 */
        for(dx=-1;dx<=1;dx++) /* 反転 */
          for(dy=-1;dy<=1;dy++)
            reverse(b, c, i+dx, j+dy, dx, dy, &g);
        if(g > max){ /* 反転した数がmaxより大きかったとき */
          max = g; /* 反転数記憶 */
          *cx=i; /* x 座標記憶 */
          *cy=j; /* y 座標記憶 */
        }
      }
    }
  return 0;
}

int main(){
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
    printf("turn: %d (O:%d, X:%d)\n", turn, cnt, turn + 4 - cnt); /* 現在の状態 */
    printf("%c x y>",symbol[c+1]); /* 入力を促すメッセージの表示 */
    if(c==1)
      scanf("%d %d",&x,&y); /* 入力 */
    else{
      cput(a,c,&x,&y);
      printf("%d %d\n",x,y);
    }
    
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


