/* 8.c */
#include <stdio.h>


int getLen(char a[])
{
  int i=0;
  while(a[i]!='\0'){
    i++;
  }
  
  return i;
}

int main()
{
  char a[]="abcdefg",b[]="cd";
  int i,j,k,cnt=0;
  
  for(i=0;i<getLen(a);i++){
    k=i;
    for(j=0;j<getLen(b);j++)
      if(a[k]!=b[j])
        break;
      else
        k++;
    if(j==getLen(b)){
      cnt++;
      i += getLen(b)-1;
    }
  }
  
  printf("String A: %s\n",a);
  printf("String B: %s\n",b);  
  printf("The number of appearance: %d\n",cnt);
  
  return 0;
}
