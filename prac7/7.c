/* 7.c */
#include <stdio.h>

int main()
{
  char str1[]="Apple";
  char str2[80];
  int i=0;
  
  while(str1[i]!='\0'){
    if (str1[i] >= 'a' && str1[i] <= 'z')
      str2[i] = str1[i] - 0x20;
    else
      str2[i] = str1[i];
    i++;
  }
  str2[i] = '\0';
  
  printf("String A: %s\n",str1);
  printf("Upper case: %s\n",str2);
  
  return 0;
}
