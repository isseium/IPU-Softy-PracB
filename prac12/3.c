/* 3.c */
#include <stdio.h>

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

int main()
{
  struct orthogonal_complex z1,z2;

  z1 = define_orthogonal_complex(2.0,3.0);
  z2 = define_orthogonal_complex(4.0,-1.0);

  put_orthogonal_complex(z1);
  put_orthogonal_complex(z2);

  return 0;
}


