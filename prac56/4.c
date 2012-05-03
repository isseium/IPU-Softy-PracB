/* 4.c */
#include <stdio.h>

int pow(int r, int n);
int siguma_f(int r, int n);

int main()
{
  int r,n;

  printf("n : ");
  scanf("%d",&n);
  printf("r : ");
  scanf("%d",&r);

  if(n<0){
    printf("invalid number\n");
    return -1;
  }

  printf("siguma_f(i) = %d\n",siguma_f(r,n));

  return 0;
}

/* r の n 乗を再帰的に実現する関数 */
int pow(int r, int n)
{
  if (n > 0)
    return r * pow(r,n-1);
  else if (n == 0)
    return 1;
}

/* f = r ^ (i - 1) のi=1からnまでの総和を再帰的に実現する関数 */
int siguma_f(int r, int n)
{
  if (n == 1)
    return pow(r,0);
  else if(n > 1)
    return pow(r,n-1) + siguma_f(r,n-1);
}
