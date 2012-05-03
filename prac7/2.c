/* 2.c */
#include <stdio.h>

int main()
{
  int i,j;
  double ans;
  double A[3][3]={{1.00,4.00,7.00},{2.00,5.00,8.00},{3.00,6.00,9.00}};
  double x[]={1.00,0.50,0.33};
  
  for(i=0;i<3;i++){
    ans = 0.0;
    for(j=0;j<3;j++)
      ans += A[i][j]*x[j];
    printf("Ax[%d]=%f\n",i+1,ans);
  }
  
  return 0;
}
