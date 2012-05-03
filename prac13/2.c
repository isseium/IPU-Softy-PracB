/* 2.c */
#include <stdio.h>

struct item{
  char *part_name; /* �����ƥ�̾ */
  int n_spart; /* �ҥ����ƥ�̾ */
  int spart[10]; /* �ҥ����ƥ��ֹ� */
  float q_spart[10]; /* �ҥ����ƥ��ɬ���� */
} buhin[20];

void init_buhin(void)
{
  buhin[0].part_name = "��˥塼";
  buhin[0].n_spart = 4;
    buhin[0].spart[0] = 1;
    buhin[0].q_spart[0] = 20.0;
    buhin[0].spart[1] = 2;
    buhin[0].q_spart[1] = 15.0;
    buhin[0].spart[2] = 3;
    buhin[0].q_spart[2] = 30.0;
    buhin[0].spart[3] = 4;
    buhin[0].q_spart[3] = 10.0;

  buhin[1].part_name = "������";
  buhin[1].n_spart = 3;
    buhin[1].spart[0] = 5;
    buhin[1].q_spart[0] = 1.0;
    buhin[1].spart[1] = 6;
    buhin[1].q_spart[1] = 1.0;
    buhin[1].spart[2] = 7;
    buhin[1].q_spart[2] = 1.0;

  buhin[2].part_name = "����Ч";
  buhin[2].n_spart = 2;
    buhin[2].spart[0] = 8;
    buhin[2].q_spart[0] = 1.0;
    buhin[2].spart[1] = 6;
    buhin[2].q_spart[1] = 1.0;

  buhin[3].part_name = "�顼���";
  buhin[3].n_spart = 2;
    buhin[3].spart[0] = 9;
    buhin[3].q_spart[0] = 1.0;
    buhin[3].spart[1] = 10;
    buhin[3].q_spart[1] = 1.0;

  buhin[4].part_name = "����Ч���å�";
  buhin[4].n_spart = 2;
    buhin[4].spart[0] = 2;
    buhin[4].q_spart[0] = 1.0;
    buhin[4].spart[1] = 3;
    buhin[4].q_spart[1] = 1.0;

  buhin[5].part_name = "������";
  buhin[5].n_spart = 2;
    buhin[5].spart[0] = 11;
    buhin[5].q_spart[0] = 1.0;
    buhin[5].spart[1] = 12;
    buhin[5].q_spart[1] = 1.0;

  buhin[6].part_name = "���Ϥ�";
  buhin[6].n_spart = 0;

  buhin[7].part_name = "̣����";
  buhin[7].n_spart = 0;

  buhin[8].part_name = "��";
  buhin[8].n_spart = 2;
    buhin[8].spart[0] = 11;
    buhin[8].q_spart[0] = 1.0;
    buhin[8].spart[1] = 13;
    buhin[8].q_spart[1] = 1.0;

  buhin[9].part_name = "��";
  buhin[9].n_spart = 0;

  buhin[10].part_name = "������";
  buhin[10].n_spart = 0;

  buhin[11].part_name = "�ȥ󥫥�";
  buhin[11].n_spart = 0;

  buhin[12].part_name = "����٥�";
  buhin[12].n_spart = 0;

  buhin[13].part_name = "�̻�";
  buhin[13].n_spart = 0;
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
      r += get_q(buhin[p].spart[i], q) * buhin[p].q_spart[i];
                   /* �ҥ����ƥब����кƵ��ƤӽФ� */
  return r;  /* ��᤿�̤��֤� */
}

void custom_buhin()
{
	int i,n;
	
	printf("----------Default----------\n");
	for(i=0;i<4;i++){
		printf(" %d  %s      \t%f\n", i+1, buhin[i+1].part_name, buhin[0].q_spart[i]);
	}
	
	/* �ѹ���ɬ�פǤ��뤫 */
	printf("�ͤ������ޤ���(1:yes, 2:no) : ");
	scanf("%d",&n);
	
	if(n==1){
		printf("�ͤ������Ƥ���������");
		for(i=0;i<4;i++){
			printf("%s : ",buhin[i+1].part_name);
			scanf("%f",&buhin[0].q_spart[i]);
		}
	}
}

int main()
{
  float t_quant; /* �����¢�� */
  int p0=0; /* �׻��δ��Υ����ƥ��ֹ� */
  int q0; /* Ĵ�٤��������ƥ��ֹ� */
  int i;  /* �롼�ץ����� */
  char c;

  init_buhin(); /* �ǡ��������� */
  
  custom_buhin(); /* �ǡ������ѹ� */
  
  while(1){
	/* ��ॢ���ƥ��ֹ��Ĵ�٤��������ƥ��ֹ������ */
  	printf("Input base item index :");
  	scanf("%d",&q0);

  /* ɬ���̤����ɽ�� */
    /* ɬ���̤���� */
    t_quant = get_q(p0, q0);
    
    /* ���ɽ�� */
    printf("Total quantity of %s is %f in %s.\n",
           buhin[q0].part_name, t_quant, buhin[p0].part_name);
	
	/* ��λ���뤫���ʤ��� */
	printf("Press any key to Exit (Input '.' to continue) : ");
	scanf("%*c%c",&c);
	
	if(c=='.')
	  return 0;
  }
}
