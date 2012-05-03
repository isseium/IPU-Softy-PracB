/* 5.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char *a_unit[] = {"mi","yd","in"}, *b_unit[] = {"km","m","cm"}, *arg[] = {"-k","-m","-c"};
  double rate[] = {1.61,0.91,2.54};
  int i;
  
  if (argc != 3){               /* 引数の数が3であるか */
    printf("Invalid arg\n");
    return -1;
  }

  for(i=0;i<3;i++)              /* 該当する引数を探す */
    if(strcmp(argv[1],arg[i])==0)
      break;
  
  if(i==4){                     /* 該当する引数がないとき */
    printf("Invalid arg\n");
    return -1;
  }
  
  /* 計算&表示 */
  printf("%s [%s] = %f [%s]\n",argv[2],b_unit[i],atof(argv[2])/rate[i], a_unit[i]);
  
  return 0;
}


