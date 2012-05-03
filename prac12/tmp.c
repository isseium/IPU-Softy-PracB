#include <stdio.h>
#define N 3

void multi(float matrix1[N][N], float matrix2[N][N], float ans[N][N], int n)
{
  int i,j,k,l;
  float tmp;
  
  /* ¾è»» */
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      tmp = 0.0;
      for(k=0;k<n;k++){
        tmp += matrix1[i][k] * matrix2[k][j];
      }
      ans[i][j] = tmp;
    }
  }
}

int main()
{
  float a[3][3] = {{1,2,3},{4,5,6},{7,8,9}},
  b[3][3] = {{1,2,3},{4,5,6},{7,8,9}},ans[3][3];
  int n=3,i,j;

  multi(a,b,ans,n);

  /* É½¼¨ */
  for(i=0;i<n;i++){
    for(j=0;j<n;j++)
      printf("%f ",ans[i][j]);
    printf("\n");
  }
  
  return 0;
}
