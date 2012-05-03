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
  /* ����� */
  c = 1; /* ���� */
  turn = 0; /* ������� */
  g = 0; /* ȿž�� */
  cnt = 2; /* ���ζ�� */  
  for(i=0;i<8;i++) /* �ޥåפν���� */
    for(j=0;j<8;j++)
      a[i][j] = 0;
  a[3][3]=a[4][4]=1; /* O �ν������ */
  a[3][4]=a[4][3]=-1; /* X �ν������ */  

  while(turn <= 60){
    displaymap(a);	/* ɽ�� */
    printf("turn: %d (O:%d, X:%d)\n\n", turn, cnt, turn + 4 - cnt,symbol[c+1]);
    printf("%c x y>",symbol[c+1]); /* ���Ϥ�¥����å�������ɽ�� */
    scanf("%d %d",&x,&y); /* ���� */
    if(a[x][y]==0) /* �ʤˤ⤪���Ƥ��ʤ��ä��� */
      for(dx=-1;dx<=1;dx++) /* ȿž */
        for(dy=-1;dy<=1;dy++)
          reverse(a, c, x+dx, y+dy, dx, dy, &g);
    if(g!=0){ /* ȿž����0�ʳ����ä��� */
      a[x][y] = c; /* ����֤� */
      cnt += c * g;  /* ȿž�����Ѥ������ζ���򹹿� */
      if(c==1)/* �����ä����֤���ʬ���ɲ� */
        cnt++; 
      g=0; /* ȿž������� */
      turn++; /* ����������� */
      c*=-1; /* ���ֹ��� */
    } else
      printf("Can't put it here\n");
  }
  return 0;
}
