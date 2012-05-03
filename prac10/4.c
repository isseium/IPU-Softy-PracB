/* 4.c */
#include <stdio.h>
#include <string.h>

int roman2i(char *src)
{
  int ans,len,i,I_flg,C_flg,X_flg,err_flg;
  ans = I_flg = C_flg = X_flg = err_flg = 0; /* ����� */
  
  len = strlen(src);	/* ʸ�����Ĺ������� */
  src += len - 1; /* �ݥ��󥿤�Ǹ����� */
  
  for(i=0;i<=len;i++){ /* ʸ�����ҤȤĤ��ĸ��� */
    if(err_flg==1)
      return -1;
    switch(*src){
    case 'I':
      if(I_flg==0)
        ans+=1;
      else
        ans-=1;
      break;
    case 'V':
      ans+=5;
      I_flg=1;
      break;
    case 'X':
      if(X_flg==0){
        ans+=10;
        I_flg=1;
      }else
        ans-=10;
      break;
    case 'L':
      ans+=50;
      X_flg=1;
      break;
    case 'C':
      if(C_flg==0){
        ans+=100;
        X_flg=1;
      }else
        ans-=100;
      break;
    case 'D':
      ans+=500;
      C_flg=1;
      break;
    case 'M':
      ans+=1000;
      C_flg=1;
      break;
    default:
      err_flg=1;
    }
    src--;
  }
  return ans;
}

int main()
{
  char s[80];
  int ans;
  printf("Input: ");
  scanf("%s",s);
  
  if((ans = roman2i(s))==-1){
    printf("Error.\n");
    return -1;
  }else
    printf("%s = %d\n",s,ans);
  
  return  0;
}
