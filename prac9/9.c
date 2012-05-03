/* 9.c */
#include <stdio.h>
#include <math.h>

/* �ͼθ�����Ԥ��ؿ� */
double own_rint(double x){
  double ans;
  int m_flag=0;                   /* ��ե饰 1:��*/

  if(x < 0){                    /* ����ͤǤ��ä��������ͤˤ��� */
    m_flag=1;                   /* ��ե饰��Ω�Ƥ� */
    x *= -1;                    /* �����ͤˤ��� */
  }

  if(x < (double)(int)x + 0.5)  /* ��������ʬ��0.5̤���ΤȤ� */
    ans = (double)(int)x;       /* �ڤ�Τ� */
  else if ( x == (double)(int)x + 0.5){ /* ��������ʬ��0.5�ΤȤ� */
    if((int)x % 2 == 0)         /* ���� */
      ans = (double)(int)x;
    else                        /* ����ΤȤ� �ʶ����ˤ����*/
      ans = (double)(int)x + 1.0; 
  }else                         /* ��������ʬ��0.5����礭���Ȥ� */
    ans = (double)(int)x + 1.0; /* �ڤ�夲 */

  if(m_flag == 1)               /* �����ͤ���Ǥ��ä���� */
    ans *= -1;                  /* ��Ȥ��᤹ */

  return ans;                   /* �ͤ��֤� */
}
  
/* �ڤ�夲��Ԥ��ؿ� */
double own_ceil(double x){
  if (x > (int)x)
    return (double)(int)x + 1.0;
  else
    return (double)(int)x;
}

/* �ڤ�ΤƤ�Ԥ��ؿ� */
double own_floor(double x){
  if(x < 0)
    return (double)(int)x - 1.0;
  else
    return (double)(int)x;
}


int main()
{
  double n1 = 123.456789, n2 = 1234.56789;

  printf("rint(%f):\t %f\n",n1,rint(n1));
  printf("rint(%f):\t %f\n",n2,rint(n2));
  printf("own_rint(%f):\t %f\n",n1,own_rint(n1));
  printf("own_rint(%f):\t %f\n",n2,own_rint(n2));

  printf("ceil(%f):\t %f\n",n1,ceil(n1));
  printf("ceil(%f):\t %f\n",n2,ceil(n2));
  printf("own_ceil(%f):\t %f\n",n1,own_ceil(n1));
  printf("own_ceil(%f):\t %f\n",n2,own_ceil(n2));

  printf("floor(%f):\t %f\n",n1,floor(n1));
  printf("floor(%f):\t %f\n",n2,floor(n2));
  printf("own_floor(%f):\t %f\n",n1,own_floor(n1));
  printf("own_floor(%f):\t %f\n",n2,own_floor(n2));

  return 0;
}
