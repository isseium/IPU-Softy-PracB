/* 9.c */
#include <stdio.h>

int main()
{
  int t, f, turu, kame, i;

  printf("Total : ");
  scanf("%d",&t);

  printf("Number of foot : ");
  scanf("%d", &f);

  turu = t;                     /* すべて鶴とみなす */
  kame = 0;

  while(turu * 2 + kame * 4 != f){
    turu--;
    kame++1;
    if(turu<0){
      printf("No answer\n");
      return -1;
    }
  }

  printf("turu : %d, kame : %d\n", turu, kame);

  return 0;
}
