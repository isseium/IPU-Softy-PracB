/* 4.c */
#include <stdio.h>
#include <math.h>

struct orthogonal_complex{
  double r;                     /* º¬…Ù */
  double i;                     /* µı…Ù */
};

struct orthogonal_complex define_orthogonal_complex(double x, double y)
{
  struct orthogonal_complex c;

  c.r = x;
  c.i = y;

  return c;
}

void put_orthogonal_complex(struct orthogonal_complex c)
{
  printf("%.2f%+.2fi\n",c.r,c.i);
}

struct orthogonal_complex orthogonal_complex_add
 (struct orthogonal_complex z1,struct orthogonal_complex z2)
{
  struct orthogonal_complex z;

  z.r = z1.r + z2.r;
  z.i = z1.i + z2.i;

  return z;
}

struct orthogonal_complex orthogonal_complex_sub
 (struct orthogonal_complex z1,struct orthogonal_complex z2)
{
  struct orthogonal_complex z;

  z.r = z1.r - z2.r;
  z.i = z1.i - z2.i;

  return z;
}

struct orthogonal_complex orthogonal_complex_mul
 (struct orthogonal_complex z1,struct orthogonal_complex z2)
{
  struct orthogonal_complex z;

  z.r = (z1.r * z2.r) - (z1.i * z2.i);
  z.i = (z1.r * z2.i) + (z1.i * z2.r);

  return z;
}

struct orthogonal_complex orthogonal_complex_div
 (struct orthogonal_complex z1,struct orthogonal_complex z2)
{
  struct orthogonal_complex z;

  z.r = ((z1.r * z2.r)+(z1.i * z2.i)) / ( pow(z2.r,2)+pow(z2.i,2));
  z.i = ((z1.i * z2.r)-(z1.r * z2.i)) / ( pow(z2.r,2)+pow(z2.i,2));

  return z;
}

int main()
{
  struct orthogonal_complex z1,z2,z;

  z1 = define_orthogonal_complex(2.0,3.0);
  z2 = define_orthogonal_complex(4.0,-1.0);

  z = orthogonal_complex_add(z1,z2);
  printf("z1 + z2 = ");
  put_orthogonal_complex(z);

  z = orthogonal_complex_sub(z1,z2);
  printf("z1 - z2 = ");
  put_orthogonal_complex(z);

  z = orthogonal_complex_mul(z1,z2);
  printf("z1 * z2 = ");
  put_orthogonal_complex(z);

  z = orthogonal_complex_div(z1,z2);
  printf("z1 / z2 = ");
  put_orthogonal_complex(z);

  return 0;
}
