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

/* 抽象的な複素数 */
struct complex {
  int form;/* 代入されている形式を示す識別子 */
  union common_complex{ /* 両形式の複素数を代入可能な共用体 */
    struct orthogonal_complex orthogonal_value;
    struct polar_complex polar_value;
  }value;
};

/* 直行形式を定義 */
struct complex define_complex_by_orthogonal(double r, double i)
{
  struct complex z;
  
  z.form = ORTHOGONAL;
  z.value.orthogonal_value.r = r;
  z.value.orthogonal_value.i = i;
  
  return z;
}

/* 極形式を定義 */
struct complex define_complex_by_polar(double r, double theta)
{
  struct complex z;
  
  z.form = POLAR;
  z.value.polar_value.r = r;
  z.value.polar_value.theta = theta;
  
  return z;
}

/* 直交形式を極形式に変換 */
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

/* 極形式を直交形式に変換 */
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
  /* 形式を直交形式に変換 */
  z1 = polar2orthogonal(z1);
  z2 = polar2orthogonal(z2);
  
  /* 加算した結果を返す */
  return define_complex_by_orthogonal(z1.value.orthogonal_value.r + z2.value.orthogonal_value.r, z1.value.orthogonal_value.i + z2.value.orthogonal_value.i);
}

struct complex complex_sub(struct complex z1, struct complex z2)
{
  /* 形式を直交形式に変換 */
  z1 = polar2orthogonal(z1);
  z2 = polar2orthogonal(z2);
  
  /* 減算した結果を返す */
  return define_complex_by_orthogonal(z1.value.orthogonal_value.r - z2.value.orthogonal_value.r, z1.value.orthogonal_value.i - z2.value.orthogonal_value.i);
}

struct complex complex_mul(struct complex z1, struct complex z2)
{
  /* 形式を極形式に変換 */
  z1 = orthogonal2polar(z1);
  z2 = orthogonal2polar(z2);
  
  /* 極形式で乗算し、結果を直交形式で返す */
  return polar2orthogonal(define_complex_by_polar(z1.value.polar_value.r * z2.value.polar_value.r, z1.value.polar_value.theta + z2.value.polar_value.theta));
}

struct complex complex_div(struct complex z1, struct complex z2)
{
  /* 形式を極形式に変換 */
  z1 = orthogonal2polar(z1);
  z2 = orthogonal2polar(z2);
  
  /* 極形式で除算し、結果を直交形式で返す */
  return polar2orthogonal(define_complex_by_polar(z1.value.polar_value.r / z2.value.polar_value.r, z1.value.polar_value.theta - z2.value.polar_value.theta));
}

/* 直交形式で出力 */
void put_complex_by_orthogonal(struct complex z)
{
  /* 直交形式に変換 */
  z = polar2orthogonal(z);
  printf("%.2f%+.2fi\n", z.value.orthogonal_value.r, z.value.orthogonal_value.i);
}

/* 極形式で出力 */
void put_complex_by_polar(struct complex z)
{
  /* 極形式に変換 */
  z = orthogonal2polar(z);  	
  printf("%.2f(cos(%fpi) + i*sin(%fpi))\n", z.value.polar_value.r, z.value.polar_value.theta / M_PI, z.value.polar_value.theta / M_PI);
}

int main()
{
  struct complex z1,z2,z3,z4,z5,ans;
  int i;
  
  /* 初期化 */
  z1 = define_complex_by_orthogonal(1.732,1.0);
  z2 = define_complex_by_polar(1.0,M_PI/6);
  z3 = define_complex_by_orthogonal(2.0,3.464);
  z4 = define_complex_by_polar(2.0,M_PI/3);
  z5 = define_complex_by_orthogonal(2.0,1.0);

  ans = complex_add(complex_div(complex_sub(complex_mul(z1,z2),z3),z4),z5);  /* 計算 */

  put_complex_by_orthogonal(ans);  /* 直交形式で表示 */
  put_complex_by_polar(ans);  /* 極形式で表示 */

  return 0;
}
