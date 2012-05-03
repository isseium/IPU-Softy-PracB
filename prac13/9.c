/* 9.c */
#include <stdio.h>

struct fraction{
  int numerator;
  int denominator;
};

int getMCD(int m, int n)
{
  int z;
  
  if(n==0)
    return m;
  else if(m%n==0)
    return n;
  
  m = m % n;

  return getMCD(n, m);          /* m,nを入れ替えて関数へ渡す */
}

int main()
{
  struct fraction f;
  int mcd;
  
  printf("Numerator: ");
  scanf("%d",&f.numerator);
  printf("Denominator: ");
  scanf("%d",&f.denominator);
  
  mcd = getMCD(f.numerator, f.denominator);
  
  printf("%d/%d -> %d/%d\n", f.numerator, f.denominator, f.numerator / mcd, f.denominator / mcd);
  
  return 0;
}
