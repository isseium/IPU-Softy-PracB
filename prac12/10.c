/* 10.c */
#include <stdio.h>

struct reg {
  unsigned int a_reg: 8;
  unsigned int b_reg: 8;
  unsigned int c_reg: 8;
  unsigned int zero: 1;
  unsigned int carry: 1;
};

void add(struct reg *r)
{
  r->c_reg = r->a_reg + r->b_reg; /* 足し算 */

  /* zero フラグ */
  if(r->c_reg == 0)
    r->zero = 1;
  else
    r->zero = 0;

  /* carry フラグ */
  if(r->c_reg < r->a_reg || r->c_reg < r->b_reg)
    r->carry = 1;
  else
    r->carry = 0;
}

void sub(struct reg *r)
{
  r->c_reg = r->a_reg - r->b_reg; /* 減算 */

  /* zero フラグ */
  if(r->c_reg == 0)
    r->zero = 1;
  else
    r->zero = 0;

  /* carry フラグ */
  if(r->c_reg > r->a_reg)
    r->carry = 1;
  else
    r->carry = 0;
}

int main()
{
  struct reg r;
  int a,b,type;
  char ope[2] = {'+','-'};  

  printf("a_reg : ");
  scanf("%d",&a);
  printf("b_reg : ");
  scanf("%d",&b);

  r.a_reg = a;
  r.b_reg = b;

  printf("Calc Type [1:add 2:sub] :");
  scanf("%d",&type);

  if(type==1)
    add(&r);
  else if(type==2)
    sub(&r);
  else{
    printf("Invalid type\n");
    return -1;
  }

  printf("\n%d %c %d = %d  (ZERO: %d, Carry: %d)\n",
         r.a_reg, ope[type-1], r.b_reg, r.c_reg,r.zero,r.carry);

  return 0;
}
