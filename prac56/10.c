/* 10.c */
#include <stdio.h>
#define PI 3.14159265358979323846

double getCost(double r, double t, double g, double c);
double getWeight(double r, double t,double g);
double getVol(double r, double t);

/* ������׻� */
double getCost(double r, double t, double g, double c)
{
  /* r:Ⱦ��, t:����, g:���, c:ñ��(��/g) */
  return getWeight(r,t,g) * c;
}

/* �Ť���׻� */
double getWeight(double r, double t,double g)
{
  return g * getVol(r,t);
}

/* ���Ѥ�׻� */
double getVol(double r, double t)
{
  return PI * r * r * t;
}

int main()
{
  double au_g=19.3, ag_g=10.5, cu_g=8.93; /* ��� */
  double au_c=1324, ag_c=17.76, cu_c=0.2211; /* ñ�� */
  double r,t;                   /* Ⱦ��, ���� */

  /* Ⱦ�¤���Ӹ��������� */
  printf("Input radius : ");
  scanf("%lf",&r);
  printf("Input thickness : ");
  scanf("%lf",&t);

  /* ������θ��� */
  printf("Gold medal : %f\n", getCost(r,t,au_g,au_c));
  /* ������θ��� */
  printf("Silver medal : %f\n", getCost(r,t,ag_g,ag_c));
  /* ������θ��� */
  printf("Bronze medal : %f\n", getCost(r,t,cu_g,cu_c));

  return 0;
}
