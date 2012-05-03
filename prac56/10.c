/* 10.c */
#include <stdio.h>
#define PI 3.14159265358979323846

double getCost(double r, double t, double g, double c);
double getWeight(double r, double t,double g);
double getVol(double r, double t);

/* ¸¶²Á¤ò·×»» */
double getCost(double r, double t, double g, double c)
{
  /* r:È¾·Â, t:¸ü¤µ, g:Èæ½Å, c:Ã±²Á(±ß/g) */
  return getWeight(r,t,g) * c;
}

/* ½Å¤µ¤ò·×»» */
double getWeight(double r, double t,double g)
{
  return g * getVol(r,t);
}

/* ÂÎÀÑ¤ò·×»» */
double getVol(double r, double t)
{
  return PI * r * r * t;
}

int main()
{
  double au_g=19.3, ag_g=10.5, cu_g=8.93; /* Èæ½Å */
  double au_c=1324, ag_c=17.76, cu_c=0.2211; /* Ã±²Á */
  double r,t;                   /* È¾·Â, ¸ü¤µ */

  /* È¾·Â¤ª¤è¤Ó¸ü¤µ¤òÆþÎÏ */
  printf("Input radius : ");
  scanf("%lf",&r);
  printf("Input thickness : ");
  scanf("%lf",&t);

  /* ¶â¥á¥À¥ë¤Î¸¶²Á */
  printf("Gold medal : %f\n", getCost(r,t,au_g,au_c));
  /* ¶ä¥á¥À¥ë¤Î¸¶²Á */
  printf("Silver medal : %f\n", getCost(r,t,ag_g,ag_c));
  /* ¶â¥á¥À¥ë¤Î¸¶²Á */
  printf("Bronze medal : %f\n", getCost(r,t,cu_g,cu_c));

  return 0;
}
