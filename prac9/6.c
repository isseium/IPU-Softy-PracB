/* 6.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char *ope[] = {"+","-","*","/"};
  int i;
  double ans;
  
  if (argc != 4){
    printf("Invalid arg\n");
    return -1;
  }
  
  
  /* �������������õ�� */
  for(i=0;i<4;i++){
    if(strcmp(argv[2],ope[i])==0){
      break;
    }
  }
  
  switch(i){
    case 0: // ��
      ans = atof(argv[1]) + atof(argv[3]);
      break;
    case 1: // ��
      ans = atof(argv[1]) - atof(argv[3]);
      break;
    case 2: // ��
      ans = atof(argv[1]) * atof(argv[3]);
      break;
    case 3: // ��
      ans = atof(argv[1]) / atof(argv[3]);
      break;
    default: /* ̵���ʰ������Ϥ��줿��� */	
      printf("Invalid arg\n");
      return -1;
    }
  
  
  /* ɽ�� */
  printf("%s %s %s = %f\n",argv[1],ope[i],argv[3],ans);
  
  return 0;
}

