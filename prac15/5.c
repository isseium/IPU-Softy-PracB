/* 5.c */
#include <stdio.h>

int main()
{
  char *month[]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  int n;

  printf("Input number : ");
  scanf("%d",&n);

  if(n < 1 || n > 12){
    printf("Invaild number\n");
    return -1;
  }

  printf("%s %c\n",month[n-1],*(month[n-1]+1));

  return 0;
}
