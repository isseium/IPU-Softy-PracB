/* 5.c */
#include <stdio.h>

void displaymap(int a[][8])
{
  char symbol[]={'X','-','O'};
  int i,j;
  
  for(i=0;i<8;i++){
    for(j=0;j<8;j++){
      printf("%c",symbol[a[i][j]+1]);
    }
    printf("\n");
  }
}

int main()
{
  int i,j;
  int a[8][8];
  
  /* すべて 0 に初期化 */
  for(i=0;i<8;i++)
    for(j=0;j<8;j++)
      a[i][j]=0;
  
  /* 初期値を与える */
  a[3][3]=a[4][4]=1;
  a[3][4]=a[4][3]=-1;
  
  displaymap(a);
  
  return 0;
}
