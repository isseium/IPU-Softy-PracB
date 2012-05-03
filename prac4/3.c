/* 3.c */
#include <stdio.h>

int main()
{
  float height,weight;

  printf("Height[m] : ");
  scanf("%f", &height);

  printf("Weight[kg] : ");
  scanf("%f", &weight);

  printf("BMI : %f\n",weight / (height * height));
  printf("Standard Weight : %f\n", height * height * 22.0);

  return 0;

}
