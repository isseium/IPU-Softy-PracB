/* 2.c */
#include <stdio.h>
#define N 8

struct student{
  int stu_num; /* �����ֹ� */
  char *name_j; /* ��̾ */
  char *name_e; /* ��̾�ʥ��޻���*/
  int birthday; /* ��������yyyymmdd��*/
  char *usr_id; /* �桼��ID */
  int gender; /* ���̡�0:����,1:��,2:����*/
  int pc; /* PC��̵ͭ��0:����,1:���äƤ���,2:���äƤ��ʤ���*/
};

int main()
{
  int num,i;
  char *gender[] = {"Unknown","Male","Female"};
  char *pc[] = {"Unknown","Have","No have"};
  
  /* ��¤�Τ���������Ƚ���� */
  struct student stu_data[N] = {
    {2006004,"����������","Shota ABE",19880304,"g031e004",1,0},
    {2006019,"��ƣ��������","Erika ENDOH",19870523,"g031e019",2,0},
    {2006046,"���ӡ��","Takuhide KIKUCHI",19871223,"g031e046",1,0},
    {2006063,"���� ����","Issei KOAMTSU",19880224,"g031e063",1,1},
    {2006081,"�����ڡ�˭","Yutaka SASAKI",19870427,"g031e081",1,0},
    {2006107,"�ⶶ������","Kenta TAKAHASHI",19871116,"g031e107",1,0},
    {2006114,"�ܻ�������","Katsuya TATEYAMA",19871227,"g031e114",1,0},
    {2006132,"���ġ��ƻ�","Atsushi NARITA",19870717,"g031e132",1,0},
  };
  
  /* ���� */
  printf("Input Student Number :");
  scanf("%d",&num);
  
  for(i=0;i<N;i++)
    if(stu_data[i].stu_num == num){
      printf("Student Number: %d\n",stu_data[i].stu_num);
      printf("Name(JPN): %s\n",stu_data[i].name_j);
      printf("Name(ENG): %s\n",stu_data[i].name_e);
      printf("Birthday: %d\n",stu_data[i].birthday);
      printf("UserID: %s\n",stu_data[i].usr_id);
      printf("gender: %s\n",gender[stu_data[i].gender]);
      printf("PC: %s\n",pc[stu_data[i].pc]);
      break;
    }
  
  if(i==N)
    printf("Not found.\n");
  
  return 0;
}
