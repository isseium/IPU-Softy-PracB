/* 7.c */
#include <stdio.h>
#include <stdlib.h>

struct sparts{
  int item;
  float quant;
};

struct item{
  char *part_name; /* �����ƥ�̾ */
  char *unit_name; /* ñ��̾ */
  int n_spart; /* �ҥ����ƥ�� */
  struct sparts *kobuhin; /* �ҥ����ƥ� */
} buhin[22];

void set_n_spart(int index, int number)
{
  buhin[index].n_spart = number;
  buhin[index].kobuhin = (struct sparts *)malloc(number*sizeof(struct sparts));
}

void init_buhin(void)
{
  buhin[0].part_name = "������";
  buhin[0].unit_name = "";
  set_n_spart(0,3);
    buhin[0].kobuhin[0].item = 1;
    buhin[0].kobuhin[0].quant = 10.0;
    buhin[0].kobuhin[1].item = 5;
    buhin[0].kobuhin[1].quant = 6.0;
	buhin[0].kobuhin[2].item = 4;
    buhin[0].kobuhin[2].quant = 4.0;

  buhin[1].part_name = "ľ4���󥸥�";
  set_n_spart(1,4);
    buhin[1].kobuhin[0].item = 2;
    buhin[1].kobuhin[0].quant = 1.0;
    buhin[1].kobuhin[1].item = 7;
    buhin[1].kobuhin[1].quant = 1.0;
    buhin[1].kobuhin[2].item = 3;
    buhin[1].kobuhin[2].quant = 1.0;
    buhin[1].kobuhin[3].item = 4;
    buhin[1].kobuhin[3].quant = 4.0;
		
  buhin[2].part_name = "SHAssy";
  set_n_spart(2,4);
    buhin[2].kobuhin[0].item = 8;
    buhin[2].kobuhin[0].quant = 1.0;
    buhin[2].kobuhin[1].item = 9;
    buhin[2].kobuhin[1].quant = 1.0;
    buhin[2].kobuhin[2].item = 10;
    buhin[2].kobuhin[2].quant = 2.0;
    buhin[2].kobuhin[3].item = 11;
    buhin[2].kobuhin[3].quant = 10.0;

  buhin[3].part_name = "CCAssy��ľ4�ѡ�";
  set_n_spart(3,4);
    buhin[3].kobuhin[0].item = 12;
    buhin[3].kobuhin[0].quant = 1.0;
    buhin[3].kobuhin[1].item = 13;
    buhin[3].kobuhin[1].quant = 1.0;
    buhin[3].kobuhin[2].item = 14;
    buhin[3].kobuhin[2].quant = 1.0;
    buhin[3].kobuhin[3].item = 11;
    buhin[3].kobuhin[3].quant = 10.0;
		
  buhin[4].part_name = "PSAssy";
  set_n_spart(4,4);
    buhin[4].kobuhin[0].item = 15;
    buhin[4].kobuhin[0].quant = 1.0;
    buhin[4].kobuhin[1].item = 16;
    buhin[4].kobuhin[1].quant = 1.0;
  	buhin[4].kobuhin[2].item = 17;
    buhin[4].kobuhin[2].quant = 1.0;
		buhin[4].kobuhin[3].item = 18;
    buhin[4].kobuhin[3].quant = 2.0;

	
  buhin[5].part_name = "V8���󥸥�";
	set_n_spart(5,4);
    buhin[5].kobuhin[0].item = 2;
    buhin[5].kobuhin[0].quant = 2.0;
    buhin[5].kobuhin[1].item = 19;
    buhin[5].kobuhin[1].quant = 2.0;
    buhin[5].kobuhin[2].item = 20;
    buhin[5].kobuhin[2].quant = 1.0;
    buhin[5].kobuhin[3].item = 4;
    buhin[5].kobuhin[3].quant = 8.0;

  buhin[6].part_name = "CCAssy��V8�ѡ�";
  set_n_spart(6,4);
    buhin[6].kobuhin[0].item = 21;
    buhin[6].kobuhin[0].quant = 1.0;
    buhin[6].kobuhin[1].item = 22;
    buhin[6].kobuhin[1].quant = 1.0;
    buhin[6].kobuhin[2].item = 14;
    buhin[6].kobuhin[2].quant = 1.0;
    buhin[6].kobuhin[3].item = 11;
    buhin[6].kobuhin[3].quant = 10.0;

  buhin[7].part_name = "��������ľ4�ѡ�";
  set_n_spart(7,0);
  
  buhin[8].part_name = "�������إå�";
  set_n_spart(8,0);

  buhin[9].part_name = "�������إåɥ��С�";
  set_n_spart(9,0);

  buhin[10].part_name = "���ॷ��ե�";
  set_n_spart(10,0);

  buhin[11].part_name = "�ܥ��";
  set_n_spart(11,0);  
	
  buhin[12].part_name = "����󥯥�������ľ4�ѡ�";
  set_n_spart(12,0);  
	
  buhin[13].part_name = "����󥯥���եȡ�ľ4�ѡ�";
  set_n_spart(13,0);  
	
  buhin[14].part_name = "����󥯥��������С�";
  set_n_spart(14,0);  
	
  buhin[15].part_name = "�ԥ��ȥ�";
  set_n_spart(15,0);
	
  buhin[16].part_name = "�������å�";
  set_n_spart(16,0);

  buhin[17].part_name = "�����å�";
  set_n_spart(17,0);
	
  buhin[18].part_name = "�ԥ��ȥ󥯥�å�";
  set_n_spart(18,0);
	
  buhin[19].part_name = "��������V8�ѡ�";
  set_n_spart(19,0);
	
  buhin[20].part_name = "����󥯥�������V8�ѡ�";
  set_n_spart(20,0);      
	
  buhin[21].part_name = "����󥯥���եȡ�V8�ѡ�";
  set_n_spart(21,0);  
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
  int p0; /* �׻��δ��Υ����ƥ��ֹ� */
  int i;

  init_buhin(); /* �ǡ��������� */

  p0 = 0; /* �׻��δ��Υ����ƥ��ֹ� */

  /* �����ʤ��ʤ����ɬ���̤���ɽ�� */
  for(i=0;i<21;i++)
    if(buhin[i].n_spart == 0)
      printf("Total quantity of %s is %f in %s.\n",
             buhin[i].part_name, get_q(p0,i), buhin[p0].part_name);
  
  return 0;
}
