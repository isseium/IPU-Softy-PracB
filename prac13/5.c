/* 5.c */
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
  set_n_spart(0,4);
    buhin[0].kobuhin[0].item = 1;
    buhin[0].kobuhin[0].quant = 20.0;
    buhin[0].kobuhin[1].item = 2;
    buhin[0].kobuhin[1].quant = 15.0;
    buhin[0].kobuhin[2].item = 3;
    buhin[0].kobuhin[2].quant = 30.0;
    buhin[0].kobuhin[3].item = 4;
    buhin[0].kobuhin[3].quant = 10.0;
	
  buhin[1].part_name = "������";
  set_n_spart(1,3);
    buhin[1].kobuhin[0].item = 5;
    buhin[1].kobuhin[0].quant = 1.0;
    buhin[1].kobuhin[1].item = 6;
    buhin[1].kobuhin[1].quant = 1.0;
    buhin[1].kobuhin[2].item = 7;
    buhin[1].kobuhin[2].quant = 1.0;

  buhin[2].part_name = "����Ч";
  set_n_spart(2,2);
    buhin[2].kobuhin[0].item = 8;
    buhin[2].kobuhin[0].quant = 1.0;
    buhin[2].kobuhin[1].item = 6;
    buhin[2].kobuhin[1].quant = 1.0;

  buhin[3].part_name = "�顼���";
  set_n_spart(3,2);
    buhin[3].kobuhin[0].item = 9;
    buhin[3].kobuhin[0].quant = 1.0;
    buhin[3].kobuhin[1].item = 10;
    buhin[3].kobuhin[1].quant = 1.0;

  buhin[4].part_name = "����Ч���å�";
  set_n_spart(4,2);
    buhin[4].kobuhin[0].item = 2;
    buhin[4].kobuhin[0].quant = 1.0;
    buhin[4].kobuhin[1].item = 3;
    buhin[4].kobuhin[1].quant = 1.0;

  buhin[5].part_name = "������";
  set_n_spart(5,2);
    buhin[5].kobuhin[0].item = 11;
    buhin[5].kobuhin[0].quant = 1.0;
    buhin[5].kobuhin[1].item = 12;
    buhin[5].kobuhin[1].quant = 1.0;

  buhin[6].part_name = "���Ϥ�";
  set_n_spart(6,0);
  
  buhin[7].part_name = "̣����";
  set_n_spart(7,0);

  buhin[8].part_name = "��";
  set_n_spart(8,2);
    buhin[8].kobuhin[0].item = 11;
    buhin[8].kobuhin[0].quant = 1.0;
    buhin[8].kobuhin[1].item = 13;
    buhin[8].kobuhin[1].quant = 1.0;

  buhin[9].part_name = "��";
  set_n_spart(9,0);

  buhin[10].part_name = "������";
  set_n_spart(10,0);

  buhin[11].part_name = "�ȥ󥫥�";
  set_n_spart(11,0);

  buhin[12].part_name = "����٥�";
  set_n_spart(12,0);

  buhin[13].part_name = "�̻�";
  set_n_spart(13,0);
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
  float t_quant; /* �����¢�� */
  int p0; /* �׻��δ��Υ����ƥ��ֹ� */
  int q0; /* Ĵ�٤��������ƥ��ֹ� */
  
  init_buhin(); /* �ǡ��������� */
  
  p0 = 0; /* �׻��δ��Υ����ƥ��ֹ� */
  q0 = 11; /* Ĵ�٤��������ƥ��ֹ� */
  
  /* ɬ���̤���� */
  t_quant = get_q(p0, q0);
  
  /* ���ɽ�� */
  printf("Total quantity of %s is %f in %s.\n",
         buhin[q0].part_name, t_quant, buhin[p0].part_name);
  return 0;
}

