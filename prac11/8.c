/* 8.c */
#include <stdio.h>
#define N 10

struct sinx{
  double x;
  double value;
};

double lagrange(struct sinx *fx, double x)
{
  double Lx=0.0,numerator,denominator;
  int i,j;
  
  for(i=0;i<N;i++){
    numerator=1;
    denominator=1;
    for(j=0;j<N;j++){
      if(i!=j){
        numerator *= x - (fx+j)->x;
        denominator *= (fx+i)->x - (fx+j)->x;
      }
    }
    Lx += numerator / denominator * (fx + i)->value;
  }
  
  return Lx;
}

int main()
{
  struct sinx fx[] = {
    {0.0,0.0},{10.0,0.173648},{20.0,0.342020},{30.0,0.5},{40.0,0.642788},
    {50.0,0.766044},{60.0,0.866025},{70.0,0.939693},{80.0,0.984808},{90.0,1.0}
  };
  
  double x = 45.0;
  
  printf("sin%.3f¡ë= %f\n",x,lagrange(fx,x));
  
  return 0;  
}


