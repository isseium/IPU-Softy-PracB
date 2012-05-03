/* 4.c */
#include <stdio.h>
/*  x $B$N(B y $B>h$r5a$a$k(B */
int pow(int x, int y)
{
  int i,n=1;
  for(i=1;i<=y;i++)
    n *= x;
  return n;
}

/* $B#2>h$NOB!J7+$jJV$79=B$!K(B*/
int sum2_rep(int n)
{
  int answer=0,i;
  for (i = 0; i <= n; i++)
    answer += i * i;
  return answer;
}

/* $B#2>h$NOB!J8x<0!K(B*/
int sum2_formula(int n)
{
  return n * ( n + 1 ) * ( 2 * n + 1) / 6; 
}

/* $B#3>h$NOB!J7+$jJV$79=B$!K(B*/
int sum3_rep(int n)
{
  int answer=0,i;
  for (i = 0; i <= n; i++)
    answer += i * i * i;
  return answer;
}

/* $B#3>h$NOB!J8x<0!K(B*/
int sum3_formula(int n)
{
  return (n * (n + 1) / 2) * (n * (n + 1) / 2) ;
}

/* r$B$N(Bi-1$B>h$NOB!J7+$jJV$79=B$!K(B*/
int sum4_rep(int n, int r)
{
  int answer=0;
  int i,j;
  for (i = 1; i <= n  ; i++)
    answer += pow(r,i-1);
  return answer;
}

/* r$B$N(Bi-1$B>h$NOB!J8x<0!K(B*/
int sum4_formula(int n, int r)
{
  int answer=0;
  answer = ( 1 - pow(r ,n) ) / ( 1 - r );
  return answer;
}

int main()
{
  int n,r;
  printf("(a) n : ");
  scanf("%d",&n);
  printf("rep : %d, formula : %d\n",sum2_rep(n), sum2_formula(n));
  printf("(b) n : ");
  scanf("%d",&n);
  printf("rep : %d, formula : %d\n",sum3_rep(n), sum3_formula(n));
  printf("(c) n : ");
  scanf("%d",&n);
  printf("(c) r : ");
  scanf("%d",&r);
  if(r != 1)
    printf("rep : %d, formula : %d\n", sum4_rep(n,r), sum4_formula(n,r) );
  else
    printf("Invalid number\n");
  return 0;
}
