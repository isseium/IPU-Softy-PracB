/* 6.c */
#include <stdio.h>
#define N 100

union op_1{
  float a[N][N];
  float x[N][N];
};

union op_2{
  float b[N][N];
  float y[N][N];
};

void add(float matrix1[N][N], float matrix2[N][N], float ans[N][N], int n)
{
  int i,j;

  /* �û� */
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      ans[i][j] = matrix1[i][j] + matrix2[i][j];
}

void multi(float matrix1[N][N], float matrix2[N][N], float ans[N][N], int n)
{
  int i,j,k;
  float tmp;
  
  /* �軻 */
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
  union op_1 op1;
  union op_2 op2;
  float ans[N][N];
  int i,j,n;

  printf("Input dimension of the matrix : ");
  scanf("%d",&n);

  /* A ���ɤ߹��� */
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("Input A %d, %d : ",i+1,j+1);
      scanf("%f",&op1.a[i][j]);
    }
  }
  
  /* B ���ɤ߹��� */
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("Input B %d, %d : ",i+1,j+1);
      scanf("%f",&op2.b[i][j]);
    }
  }

  /* �û� */
  add(op1.a,op2.b,ans,n);
    
  /* ɽ�� */
  for(i=0;i<n;i++){
    for(j=0;j<n;j++)
      printf("%f ",ans[i][j]);
    printf("\n");
  }
  
  /* X ���ɤ߹��� */
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("Input X %d, %d : ",i+1,j+1);
      scanf("%f",&op1.a[i][j]);
    }
  }
  
  /* Y ���ɤ߹��� */
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("Input Y %d, %d : ",i+1,j+1);
      scanf("%f",&op2.b[i][j]);
    }
  }
  
  /* �軻 */
  multi(op1.x,op2.y,ans,n);
  
  /* ɽ�� */
  for(i=0;i<n;i++){
    for(j=0;j<n;j++)
      printf("%f ",ans[i][j]);
    printf("\n");
  }
  
  return 0;
}

