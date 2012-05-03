/* 7.c */
#include <stdio.h>
#define PI 3.1416

struct polar_complex{
  double r;
  double theta;
};

struct polar_complex define_polar_complex(double r, double theta)
{
  struct polar_complex z;
  z.r = r;
  z.theta = theta;
  
  return z;
}

void put_polar_complex(struct polar_complex z)
{
  printf("%.2f(cos(%fpi) + i*sin(%fpi))\n", z.r, z.theta / PI, z.theta / PI);
}

struct polar_complex polar_complex_mul(struct polar_complex z1, struct polar_complex z2)
{
  struct polar_complex ans;

  ans.r = z1.r * z2.r;
  ans.theta = z1.theta + z2.theta;

  return ans;
}

struct polar_complex polar_complex_div(struct polar_complex z1, struct polar_complex z2)
{
  struct polar_complex ans;

  ans.r = z1.r / z2.r;
  ans.theta = z1.theta - z2.theta;

  return ans;
}

int main()
{
  struct polar_complex z1,z2,ans_mul,ans_div;

  z1 = define_polar_complex(4.0, PI/2);
  z2 = define_polar_complex(2.0, PI/6);

  ans_mul = polar_complex_mul(z1,z2);
  ans_div = polar_complex_div(z1,z2);

  put_polar_complex(ans_mul);
  put_polar_complex(ans_div);

  return 0;
}
