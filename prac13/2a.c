/* 2.c : 1.c �Ȱۤʤ���ʬ�Τ� */
int main()
{
  float t_quant; /* �����¢�� */
  int p0=0; /* �׻��δ��Υ����ƥ��ֹ� */
  int q0; /* Ĵ�٤��������ƥ��ֹ� */
  int i;  /* �롼�ץ����� */
  int q[] = {6,7,9,10,11,12,13};  /* Ĵ�٤륢���ƥ��ֹ�: 6,7,9,10,11,12,13 */

  init_buhin(); /* �ǡ��������� */

  /* ɬ���̤����ɽ�� */
  for (i = 0; i < 7; i++){    
    /* ɬ���̤���� */
    t_quant = get_q(p0, q[i]);
    
    /* ���ɽ�� */
    printf("Total quantity of %s is %f in %s.\n",
           buhin[q0].part_name, t_quant, buhin[p0].part_name);
    }

  return 0;
}
