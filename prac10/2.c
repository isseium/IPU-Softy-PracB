/* 2.c */
#include <stdio.h>

void upper(char *src, char *dst)
{
  while(*src!='\0'){
    if(*src>='a' && *src<='z') /* ��ʸ��Ƚ�� */	
      *dst = *src - 0x20;
    else
      *dst = *src;
    src++;
    dst++;
  }
  
  *dst = *src;
}

int main()
{
  int cnt[26],i;
  char str[80];
  
  /* ����� */
  for(i=0;i<26;i++)
    cnt[i]=0;
  
  printf("enter the string.\n");
  scanf("%s",str);
  
  /* ���٤���ʸ���ˤ��� */
  upper(str,str);
  
  for(i=0;str[i]!='\0';i++){
    if(str[i] >= 'A' && str[i] <= 'Z')
      cnt[str[i]-'A']++;
  }
  
  /* ɽ�� */
  for(i=0;i<26;i++){
    if(cnt[i] > 0)
      printf("'%c'=%d\n",i+'A',cnt[i]);
  }
  
  return 0;
}

