#include <stdio.h>

#define N 4

int a[N][N] = {{1,2,3,4},{4,5,6,4},{7,8,9,4},{19,11,12,4}};
int b[N][N];

void show(int c[N][N])
{
  int i,j;
  for(i=0;i<N;i++){
    for(j=0;j<N;j++)
      printf("%3d",c[i][j]);
      printf("\n");
  }
}

void main()
{
  int i,j,tmp;


  for(i=0;i<N;i++){
    for(j=0;j<N;j++){
      tmp = a[j][i]
      a[j][i] = a[i][N-j-1];
      a[i]
    printf("\n");
  }

  show(a);
  printf("\n");
  show(a);

}
