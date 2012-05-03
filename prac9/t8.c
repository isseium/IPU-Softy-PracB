#include <stdio.h>
#include <string.h>
/* 8.c */

/* ������ʸ�����Ѵ� */
void i2a(int src, char *dst)
{
  int i,j,keta;
  
  /* ��� */
  if (src < 0){
    *dst = '-';
    dst++;
    src *= -1;                  /* �����ͤˤ��� */
  }
  
  /* �������� */
  keta=1;
  for(i=10; i<=src; i*=10)
    keta++;  
  
  /* �ݥ��󥿤�Ǹ����ˤ��� */
  dst += keta;
  *dst = '\0';
  dst--;
  
  for(i=0;i < keta; i++){
    *dst= src % 10 + '0' ;
    dst--;
    src = (src - (src % 10))/ 10;
  }
}

/* �¿���ʸ�����Ѵ� */
void ftoa(double src, char *dst, int n)
{
  char ans[80],tmp[80];
  int i;		
  
  /* ������ʬ���Ѵ� */
  i2a((int)src,dst);
  
  /* ��������Ϣ�� */
  strcat(dst,".");
  
  /* ��� */
  if (src < 0){
    src *= -1;                  /* �����ͤˤ��� */
  }
  
  /* ������ʬ��10�ܤ���������ʬ��ʸ�����Ѵ����������n�󷫤��֤� */
  for(i=0;i<n;i++){
    src -= (int)src;            /* ������ʬ������ */
    src *= 10.0;		/* �������̤��ͤ�������ʬ�ˤ��� */
    i2a((int)src,tmp);		/* ������ʬ��ʸ�����Ѵ� */
    strcat(dst,tmp);		/* Ϣ�� */
  }
}

int main()
{
  double value;
  char c[80];
  
  scanf("%lf",&value);
  
  ftoa(value, c, 3);
  
  printf("ftoa: %s\n",c);
  
  return 0;
}

