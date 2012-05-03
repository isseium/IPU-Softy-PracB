/* 10.c */
#include <stdio.h>

int main()
{
  int i=0;
  char str[80];

  printf("Input string :");
  scanf("%s",str);

  while(str[i]!='\0'){
    if(str[i]=='z')             /* 'z'のとき */
      str[i] = 'a';
    else if(str[i]=='Z')        /* 'Z'のとき */
      str[i] = 'A';
    else                        /* それ以外のとき */
      str[i] += 1;
    i++;
  }

  printf("Answer: %s\n",str);

  return 0;
}
