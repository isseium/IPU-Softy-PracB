/* 8.c */
#include <stdio.h>
#include <string.h>

/* ������ʸ�����Ѵ� */
void itoa(int src, char *dst)
{
  int i,keta;

  if (src < 0){        /* �����ͤˤ��� */
    *dst = '-';
    dst++;
    src *= -1;
  }	
  
  keta = 1;
  for(i=10; i<src; i*=10)       /* �������� */
    keta++;
  
  for(i=keta-1;i >= 0; i--){
    *(dst+i) = src % 10 + '0' ; /* 10�ǳ�ä�;���ʸ�����ˤ��Ƴ�Ǽ */
    src = (src - (src % 10))/ 10; /* (���ο��� - ;��) / 10 �Ȥ���  */
  }
  
  *(dst+keta) = '\0';
}

/* �¿���ʸ�����Ѵ� */
void ftoa(double src, char *dst, int n)
{
  char ans[80];
  int i,keta;
  
  for(i=0;i<n;i++)              /* 10^n�ܤ��� */
    src *= 10;	
  
  itoa((int)src,ans);           /* ������ʬ���Ѵ� */
  
  keta = strlen(ans);           /* ʸ���������� */
  
  /* ��n��ޤǤ� 1 ����˰�ư */
  for(i=0;i<=n;i++)
    *(ans+keta-i+1) = *(ans+keta-i);
  
  *(ans+keta-i+1) = '.';        /* ���������ɲ� */
  *(ans+keta+1) = '\0';         /* �̥�ʸ�����ɲ� */
  strcpy(dst,ans);              /* ���ԡ� */
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
