/* 8.c */
#include <stdio.h>

struct person {
  float height;
  float weight;
  float bmi;
  float normal_weight;
};

void check(struct person *p)
{
  p->bmi = p->weight / (p->height * p->height);
  p->normal_weight = p->height * p->height * 22.0;
}

int main()
{
  struct person p;
  
  printf("Input height[m] : ");
  scanf("%f", &p.height);
  printf("Input weight[kg] : ");
  scanf("%f", &p.weight);
  
  check(&p);
  
  printf("BMI : %f, NormalWeight : %f\n", p.bmi, p.normal_weight);
  
  return 0;
}

