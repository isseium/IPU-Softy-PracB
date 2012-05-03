#include <stdio.h>

void upper(char *src, char *dst)
{ 
  while(*src!='\0'){
    if(*src>='a' && *src<='z') /* 小文字判定 */	
      *dst++ = *src++ - 0x20;
    else
      *dst++ = *src++;
  }
  
  *dst = *src;
}

int main()
{
  char c[80] = "It is a sunny day today.";
  char ans[80];
  
  upper(c,ans);
  
  printf("Before : %s\n",c);
  printf("After : %s\n",ans);
  
  return 0;
}
