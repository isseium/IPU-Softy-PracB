/* 1.c */
#include <stdio.h>
#define PI 3.1415926536
#define N 10

/* (2) Ⱦ��r�αߤα߼���Ĺ��l���������s�򻻽Ф���ؿ�*/
void circle(double r, double *l, double *s)
{
  *l = PI * 2 * r;              /* �߼���Ĺ�� */
  *s = PI * r * r;              /* ���� */
}

/* (3) ʿ�Ѥ����ʬ���򻻽Ф���ؿ� */
void ave_var(double data[], double *ave, double *var)
{
  int i;
  double sum=0;

  /* ��פ���� */
  for(i=0;i<N;i++)
    sum += data[i];

  /* ʿ�Ѥ�׻� */
  *ave = sum / N;

  /* (x[i]-ave)^2�����¤���� */
  sum = 0;
  for(i=0;i<N;i++)
    sum += (data[i] - *ave) * (data[i] - *ave);

  /* ʬ������� */
  *var = sum / N;
} 

/* (4) ����a,b������c�����ؿ� */
void midpoint(double a[], double b[], double c[])
{
  c[0] = (a[0] + b[0]) / 2;
  c[1] = (a[1] + b[1]) / 2;
}

int main()
{
  double r,l,s,ave,var;
  double data[] = {1.54,0.53,0.93,1.60,2.94,0.52,2.11,0.68,1.48,0.37};
  double a[]={2,3},b[]={3,-4},c[2];

  r = 10.0;

  /* �׻� */
  circle(r,&l,&s);
  ave_var(data,&ave,&var);
  midpoint(a,b,c);

  printf("(2) r = %f, l = %f, s = %f\n", r,l,s);
  printf("(3) ave = %f, var = %f\n", ave, var);
  printf("(4) c(%.3f,%.3f)\n",c[0],c[1]);

  return 0;
}
