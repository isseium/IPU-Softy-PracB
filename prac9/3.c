/* 3.c */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i;
  double argv_d;
  
  for(i=1;i<argc;i++){
    argv_d = atof(argv[i]);
    printf("%s = %d + %f\n",argv[i], (int)argv_d , (double)(argv_d - (int)argv_d));
  }
  
  return 0;
}
