/* 3.c */
#include <stdio.h>

int main()
{
  double a[4][4]={{0.10,0.90,0.00,0.00},{0.00,0.10,0.90,0.00},{0.00,0.00,0.10,0.90},{0.90,0.00,0.00,0.10}};
  double b[4][4];
  double ans[4][4],tmp;
  int n =50;
  int i,j,k,l;
  
  /* ����ans������  */
  for(i=0;i<4;i++)
    for(j=0;j<4;j++)
      ans[i][j] = a[i][j];
  
  /* �߾� */
  for(i=0;i<n-1;i++){
    for(j=0;j<4;j++){
      for(k=0;k<4;k++){
        tmp = 0.0;
        for(l=0;l<4;l++)
          tmp += a[j][l] * ans[l][k];
        b[j][k] = tmp;
      }
    }
    
    /* ���� */
    for(j = 0;j<4;j++)
      for(k = 0;k<4;k++)
        ans[j][k] = b[j][k];
  }
  
  
  /* ɽ�� */
  for(i=0;i<4;i++){
    for(j=0;j<4;j++)
      printf("%f ",ans[i][j]);
    printf("\n");
  }
  
  return 0;
}
