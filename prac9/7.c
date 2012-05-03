/* 7.c */
#include <stdio.h>
#include <string.h>
#include <math.h>

int atohex(char *s){
  int i,n,keta,ans=0;

  keta = strlen(s);

  for(i=0;i < keta ;i++){
    if(*(s+i) >= '0' && *(s+i) <= '9')
      n = *(s+i) - '0';
    else if(*(s+i)>='a' && *(s+i) <= 'f')
      n = *(s+i) - 'a' + 10;
    else
      n = 0;  
    ans +=  n * pow(16,keta-i-1); 
  }
    
  return ans;
}

int main(int argc, char *argv[])
{
  char *ope[] = {"+","-","*","/"};
  int i,ans;
  
  if (argc != 4){
    printf("Invalid arg\n");
    return -1;
  }

  for(i=0;i<4;i++)              /* 該当する引数を探す */
    if(strcmp(argv[2],ope[i])==0)
      break;
  
  switch(i){
    case 0: // 和
      ans = atohex(argv[1]) + atohex(argv[3]);
      break;
    case 1: // 差
      ans = atohex(argv[1]) - atohex(argv[3]);
      break;
    case 2: // 積
      ans = atohex(argv[1]) * atohex(argv[3]);
      break;
    case 3: // 商
      ans = atohex(argv[1]) / atohex(argv[3]);
      break;
    default: /* 無効な引数が渡された場合 */	
      printf("Invalid arg\n");
      return -1;
    }

  printf("%s %s %s = %x\n",argv[1],ope[i],argv[3],ans); /* 表示 */
  
  return 0;
}

