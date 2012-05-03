/* 5.c */
#include <stdio.h>

/*  x の y 乗を求める */
int pow(int x, int y)
{
  int i,n=1;
  for(i=1;i<=y;i++)
    n *= x;
  return n;
}
 
/* Sn を求める関数 */
int calcSn(int n, int a, int r)
{
  int sn = 0;
  int i;

  for(i=1;i<=n;i++){
    sn = sn + a * pow(r,i-1);
  }

  return sn;
}

int main()
{
  int i;
  int n, a, r;
  int s=0;

  printf("n : ");
  scanf("%d", &n);

  printf("a : ");
  scanf("%d", &a);

  printf("r : ");
  scanf("%d", &r);

  if(r==1){
    printf("Invalid number\n");
    return -1;
  }

  for(i=1;i<=n;i++){
    s += calcSn(i, a, r);
  }

  printf("%d\n",s);

  return 0;
}
