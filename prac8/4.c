/* 4.c */
#include <stdio.h>

/* strが示す文字列の長さを返す（ポインタ版） */
int str_length(char *str)
{
  int i;

  for(i=0;*str!='\0';++i)
    str++;

  return i;
}

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

int pattern_match_num(char *text, char *key)
{
  int i,cnt=0;

  for(i=0;i<str_length(text);i++)
    if (str_ncmp(text+i, key, str_length(key))==0)
      cnt++;

  return cnt;
}

int main()
{
  char text[] = "I have a pink pen. You have a pencil. He has a coupe";
  char key[] = "pen";

  printf("%d\n",pattern_match_num(text,key));

  return 0;
}
