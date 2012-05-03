/* 4.c */
#include <stdio.h>

int main()
{
  int i,j,cnt[3]={0,0,0};
  double n;
  
  for(i=0;i<10;i++){
    printf("Input number: ");
    scanf("%lf",&n);
    if(n < 3 && n >= 0)
      cnt[(int)n]++;
  }
  
  printf("\nInterval | Frequency\n---------+---------\n");

  for(i=0;i<3;i++){
    printf("[%d,%d)    | ",i,i+1,cnt[i]);
    for(j=0;j<cnt[i];j++)
      printf("*");
    printf("\n");
  }
  
  return 0;
}
