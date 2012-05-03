/* 3.c */
#include <stdio.h>
#define N 10 /* 桁数 */
#define BASE 5 /* 進数 */

void plus(int x[], int y[], int *z, int n)
{
  int i;
  int carry=0;
  
  for(i=0;i<N;i++){
    *z = x[i] + y[i] + carry;
    if(*z>=n){
      *z -= n;
      carry=1;
    }else{
      carry=0;
    }
    z++;
  }
}

void print(int x[],int n)
{
  int i,flg=0;
  
  printf("(");
  for(i=N-1;i>=0;i--)
    if(flg != 0 || x[i]!=0){
      printf("%d",x[i]);
      flg=1;
    }
  printf(")%d",n);
}

int main()
{
  int x[N] = {4,3,2,1,0,0,0,0,0,0}; /* 1234 */
  int y[N] = {4,3,2,1,0,0,0,0,0,0}; /* 1234 */
  int z[N]; /* 結果格納用 */
  int i;
  
  plus(x,y,z,BASE); /* n進数x[],y[]の加算結果をz[]に格納 */
  
  print(x,BASE); /* 表示 */
  printf(" + ");
  print(y,BASE);
  printf(" = ");
  print(z,BASE);
  
  printf("\n");
  
  return 0;
}

