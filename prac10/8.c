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
  if(x < 0 || x >= 8 || y < 0 || y >= 8 || a[x][y]==0)	/* ��� 1,��� 2 */
    return 0;
  if(a[x][y]==c) /* ��� 3 */
    return c;		
  if(reverse(a,c,x+dx,y+dy,dx,dy, g) == c){
    a[x][y] *= -1; /* ȿž */
    (*g)++;
    return c;
  }else
    return 0;
}

int cput(int a[][8], int c, int *cx, int *cy)
{
  int max=0,i,j,k,l,g,b[8][8],dx,dy;
  
  for(i=0;i<8;i++)/* ��ɸ(0,0)����(7,7)�ޤǷ����֤� */
    for(j=0;j<8;j++){
      for(k=0;k<8;k++) /* �ޥåפν������������������ */
        for(l=0;l<8;l++)
          b[k][l] = a[k][l];
      if(b[i][j]==0){ /* �ʤˤ⤪���Ƥ��ʤ��ä��� */
        g=0; /* ȿž������� */
        for(dx=-1;dx<=1;dx++) /* ȿž */
          for(dy=-1;dy<=1;dy++)
            reverse(b, c, i+dx, j+dy, dx, dy, &g);
        if(g > max){ /* ȿž��������max����礭���ä��Ȥ� */
          max = g; /* ȿž������ */
          *cx=i; /* x ��ɸ���� */
          *cy=j; /* y ��ɸ���� */
        }
      }
    }
  return 0;
}

int main(){
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
    printf("turn: %d (O:%d, X:%d)\n", turn, cnt, turn + 4 - cnt); /* ���ߤξ��� */
    printf("%c x y>",symbol[c+1]); /* ���Ϥ�¥����å�������ɽ�� */
    if(c==1)
      scanf("%d %d",&x,&y); /* ���� */
    else{
      cput(a,c,&x,&y);
      printf("%d %d\n",x,y);
    }
    
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


