/* 6.c */
#include <stdio.h>
#include <stdlib.h>

struct sparts{
  int item;
  float quant;
};

struct item{
  char *part_name; /* �����ƥ�̾ */
  int n_spart; /* �ҥ����ƥ�� */
  struct sparts *kobuhin; /* �ҥ����ƥ� */
} buhin[20];

void set_n_spart(int index, int number)
{
  buhin[index].n_spart = number;
  buhin[index].kobuhin = (struct sparts *)malloc(number*sizeof(struct sparts));
}


void init_buhin(void)
{
  buhin[0].part_name = "��˥塼";
  buhin[0].unit_name = "";
  set_n_spart(0,5);
    buhin[0].kobuhin[0].item = 1;
    buhin[0].kobuhin[0].quant = 50.0;
    buhin[0].kobuhin[1].item = 2;
    buhin[0].kobuhin[1].quant = 50.0;
    buhin[0].kobuhin[2].item = 3;
    buhin[0].kobuhin[2].quant = 25.0;
    buhin[0].kobuhin[3].item = 4;
    buhin[0].kobuhin[3].quant = 15.0;
    buhin[0].kobuhin[4].item = 5;
    buhin[0].kobuhin[4].quant = 25.0;

  buhin[1].part_name = "����ѥ�";
  buhin[1].unit_name = "��";
  set_n_spart(1,2);
    buhin[1].kobuhin[0].item = 6;
    buhin[1].kobuhin[0].quant = 60.0;
    buhin[1].kobuhin[1].item = 7;
    buhin[1].kobuhin[1].quant = 1.0;
	
  buhin[2].part_name = "����Х���";
  buhin[2].unit_name = "��";
  set_n_spart(2,3);
    buhin[2].kobuhin[0].item = 6;
    buhin[2].kobuhin[0].quant = 60.0;
    buhin[2].kobuhin[1].item = 8;
    buhin[2].kobuhin[1].quant = 10.0;
    buhin[2].kobuhin[2].item = 7;
    buhin[2].kobuhin[2].quant = 1.0;

  buhin[3].part_name = "�ԡ��ʥåĥХ���";
  buhin[3].unit_name = "��";
  set_n_spart(3,3);
    buhin[3].kobuhin[0].item = 9;
    buhin[3].kobuhin[0].quant = 60.0;
    buhin[3].kobuhin[1].item = 8;
    buhin[3].kobuhin[1].quant = 10.0;
    buhin[3].kobuhin[2].item = 7;
    buhin[3].kobuhin[2].quant = 1.0;

  buhin[4].part_name = "����ॵ���";
  buhin[4].unit_name = "��";
  set_n_spart(4,2);
    buhin[4].kobuhin[0].item = 10;
    buhin[4].kobuhin[0].quant = 50.0;
    buhin[4].kobuhin[1].item = 11;
    buhin[4].kobuhin[1].quant = 0.25;

  buhin[5].part_name = "�ԡ��ʥåĥ����";
  buhin[5].unit_name = "��";
  set_n_spart(5,2);
    buhin[5].kobuhin[0].item = 9;
    buhin[5].kobuhin[0].quant = 50.0;
    buhin[5].kobuhin[1].item = 11;
    buhin[5].kobuhin[1].quant = 0.25;

  buhin[6].part_name = "����ڡ�����";
  buhin[6].unit_name = "g";
  set_n_spart(6,0);

  buhin[7].part_name = "���åڥѥ�";
  buhin[7].unit_name = "��";
  set_n_spart(7,0);
  
  buhin[8].part_name = "�Х���";
  buhin[8].unit_name = "g";
  set_n_spart(8,0);

  buhin[9].part_name = "�ԡ��ʥåĥ��꡼��";
  buhin[9].unit_name = "g";
  set_n_spart(9,0);

  buhin[10].part_name = "�����";
  buhin[10].unit_name = "g";
  set_n_spart(10,0);

  buhin[11].part_name = "���ѥ�";
  buhin[11].unit_name = "��";
  set_n_spart(11,0);  
}

/* �����ƥ���̤���� (p ����� q ���̡�*/
float get_q(int p, int q)
{
  int i; /* �롼�ץ����� */
  float r = 0.0; /* �֤��� */

  if (p == q)  /* �׻������������ƥफ�ɤ���? */
    r = 1.0;
  else if (buhin[p].n_spart != 0 ) /* ����˻ҥ����ƥब���뤫? */
    for (i = 0; i < buhin[p].n_spart; i++)
      r += get_q(buhin[p].kobuhin[i].item, q) * buhin[p].kobuhin[i].quant;
       /* �ҥ����ƥब����кƵ��ƤӽФ� */
  return r;  /* ��᤿�̤��֤� */
}

int main()
{
  int p0=0; /* �׻��δ��Υ����ƥ��ֹ� */
  int q[6]={7,6,8,9,10,11}; /* Ĵ�٤��������ƥ��ֹ� */
  int i;
  
  init_buhin(); /* �ǡ��������� */
  
  /* ɬ���̤���ɽ�� */
  for(i=0;i<6;i++){
    /* ���ɽ�� */
    printf("Total quantity of %s is %f[%s] in %s.\n",
           buhin[q[i]].part_name, get_q(p0,q[i]) ,buhin[q[i]].unit_name, buhin[p0].part_name);
  }
  return 0;
}
