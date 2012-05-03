/* 9.c */
#include <stdio.h>

/* r の n 乗を再帰的に実現する関数 */
int pow(int r, int n)
{
  if (n > 0)
    return r * pow(r,n-1);
  else if (n == 0)
    return 1;
}

int main()
{
  char b[5]="0101";
  int ans=0;
  int i;

  printf("4 digits binary data: %s\n",b);
  
  for(i=0;i<4;i++)
    if (b[i]=='1')
      ans += pow(2,3-i);

  printf("%s is %d in decimal.\n",b,ans);

  return 0;
}
