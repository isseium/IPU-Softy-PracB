/* 9.c */
#include <stdio.h>
#include <math.h>
#define ORTHOGONAL 1
#define POLAR 2

struct orthogonal_complex{
  double r;
  double i;
};

struct polar_complex{
  double r;
  double theta;
};

/* ���Ū��ʣ�ǿ� */
struct complex {
  int form;/* ��������Ƥ�������򼨤����̻� */
  union common_complex{ /* ξ������ʣ�ǿ���������ǽ�ʶ����� */
    struct orthogonal_complex orthogonal_value;
    struct polar_complex polar_value;
  }value;
};

/* ľ�Է�������� */
struct complex define_complex_by_orthogonal(double r, double i)
{
  struct complex z;
  
  z.form = ORTHOGONAL;
  z.value.orthogonal_value.r = r;
  z.value.orthogonal_value.i = i;
  
  return z;
}

/* �˷�������� */
struct complex define_complex_by_polar(double r, double theta)
{
  struct complex z;
  
  z.form = POLAR;
  z.value.polar_value.r = r;
  z.value.polar_value.theta = theta;
  
  return z;
}

/* ľ�������˷������Ѵ� */
struct complex polar2orthogonal(struct complex z)
{
  struct complex ans;
  
  if(z.form == ORTHOGONAL)
    return z;
  
  ans.form = ORTHOGONAL;
  ans.value.orthogonal_value.r = z.value.polar_value.r * cos(z.value.polar_value.theta);
  ans.value.orthogonal_value.i = z.value.polar_value.r * sin(z.value.polar_value.theta);
  
  return ans;
}

/* �˷�����ľ��������Ѵ� */
struct complex orthogonal2polar(struct complex z)
{
  struct complex ans;
  
  if(z.form == POLAR)
    return z;
  
  ans.form = POLAR;
  ans.value.polar_value.r = sqrt(pow(z.value.orthogonal_value.r,2) + pow(z.value.orthogonal_value.i,2));
  ans.value.polar_value.theta = atan(z.value.orthogonal_value.i / z.value.orthogonal_value.r);
  
  return ans;
}

struct complex complex_add(struct complex z1, struct complex z2)
{
  /* ������ľ��������Ѵ� */
  z1 = polar2orthogonal(z1);
  z2 = polar2orthogonal(z2);
  
  /* �û�������̤��֤� */
  return define_complex_by_orthogonal(z1.value.orthogonal_value.r + z2.value.orthogonal_value.r, z1.value.orthogonal_value.i + z2.value.orthogonal_value.i);
}

struct complex complex_sub(struct complex z1, struct complex z2)
{
  /* ������ľ��������Ѵ� */
  z1 = polar2orthogonal(z1);
  z2 = polar2orthogonal(z2);
  
  /* ����������̤��֤� */
  return define_complex_by_orthogonal(z1.value.orthogonal_value.r - z2.value.orthogonal_value.r, z1.value.orthogonal_value.i - z2.value.orthogonal_value.i);
}

struct complex complex_mul(struct complex z1, struct complex z2)
{
  /* ������˷������Ѵ� */
  z1 = orthogonal2polar(z1);
  z2 = orthogonal2polar(z2);
  
  /* �˷����Ǿ軻������̤�ľ��������֤� */
  return polar2orthogonal(define_complex_by_polar(z1.value.polar_value.r * z2.value.polar_value.r, z1.value.polar_value.theta + z2.value.polar_value.theta));
}

struct complex complex_div(struct complex z1, struct complex z2)
{
  /* ������˷������Ѵ� */
  z1 = orthogonal2polar(z1);
  z2 = orthogonal2polar(z2);
  
  /* �˷����ǽ���������̤�ľ��������֤� */
  return polar2orthogonal(define_complex_by_polar(z1.value.polar_value.r / z2.value.polar_value.r, z1.value.polar_value.theta - z2.value.polar_value.theta));
}

/* ľ������ǽ��� */
void put_complex_by_orthogonal(struct complex z)
{
  /* ľ��������Ѵ� */
  z = polar2orthogonal(z);
  printf("%.2f%+.2fi\n", z.value.orthogonal_value.r, z.value.orthogonal_value.i);
}

/* �˷����ǽ��� */
void put_complex_by_polar(struct complex z)
{
  /* �˷������Ѵ� */
  z = orthogonal2polar(z);  	
  printf("%.2f(cos(%fpi) + i*sin(%fpi))\n", z.value.polar_value.r, z.value.polar_value.theta / M_PI, z.value.polar_value.theta / M_PI);
}

int main()
{
  struct complex z1,z2,z3,z4,z5,ans;
  int i;
  
  /* ����� */
  z1 = define_complex_by_orthogonal(1.732,1.0);
  z2 = define_complex_by_polar(1.0,M_PI/6);
  z3 = define_complex_by_orthogonal(2.0,3.464);
  z4 = define_complex_by_polar(2.0,M_PI/3);
  z5 = define_complex_by_orthogonal(2.0,1.0);

  ans = complex_add(complex_div(complex_sub(complex_mul(z1,z2),z3),z4),z5);  /* �׻� */

  put_complex_by_orthogonal(ans);  /* ľ�������ɽ�� */
  put_complex_by_polar(ans);  /* �˷�����ɽ�� */

  return 0;
}
