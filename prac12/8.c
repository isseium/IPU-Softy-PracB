/* 8.c */
#include <stdio.h>
#include <math.h>

struct orthogonal_complex{
  double r;
  double i;
};

struct polar_complex{
  double r;
  double theta;
};

struct orthogonal_complex polar2orthogonal(struct polar_complex z)
{
  struct orthogonal_complex ans;

  ans.r = z.r * cos(z.theta);
  ans.i = z.r * sin(z.theta);  

  return ans;
}

struct polar_complex orthogonal2polar(struct orthogonal_complex z)
{
  struct polar_complex ans;

  ans.r = sqrt(pow(z.r,2) + pow(z.i,2));
  ans.theta = atan(z.i / z.r);

  return ans;
}

struct polar_complex polar_complex_mul(struct polar_complex z1, struct polar_complex z2)
{
  struct polar_complex ans;

  ans.r = z1.r * z2.r;
  ans.theta = z1.theta + z2.theta;

  return ans;
}

void put_orthogonal_complex(struct orthogonal_complex z)
{
  printf("%.2f%+.2fi\n", z.r, z.i);
}

int main()
{
  struct orthogonal_complex z1,ans_ort;
  struct polar_complex z2,ans_plr;
  int i;
  
  z1.r = 1.0/2.0;
  z1.i = sqrt(3.0) / 2.0;
  
  ans_plr = z2 = orthogonal2polar(z1);

  for(i=0;i<5;i++)
    ans_plr = polar_complex_mul(z2,ans_plr);  

  put_orthogonal_complex(polar2orthogonal(ans_plr));

  return 0;
}
