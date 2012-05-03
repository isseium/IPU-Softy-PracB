/* 2-2-p.c */
#include <stdio.h>

/* src1が示す文字列とsrc2が示す文字列をn文字まで比較(ポインタ版) */
int str_ncmp(char *src1, char *src2, int n)
{
  int i=0;

  while(i<n){
    if(*src1 != *src2)
      return -1;
    else if (*src1 == '\0' && *src2 == '\0')
      return 0;
    
    src1++;
    src2++;
    i++;
  }

  return 0;
}

int main()
{
  char strA[80],strB[80];
  int n;

  printf("Input string A: ");
  scanf("%s",strA);
  printf("Input string B: ");
  scanf("%s",strB);
  printf("Number :");
  scanf("%d",&n);
  
  printf("Compare (pointer): %d\n",str_ncmp(strA,strB,n));

  return 0;

}

