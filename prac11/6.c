/* 6.c */
#include <stdio.h>
#include <string.h>
#define N 2

struct lecture{
  char *name;
  char *day_of_the_week;
  int hour;
  char *teacher;
  char *place;
};

int search_lecture(struct lecture *lec_data, char *day_of_the_week, int hour)
{
  int i;
  for(i=0;i<N;i++)
    if((strcmp(lec_data->day_of_the_week,day_of_the_week)==0) && (lec_data->hour == hour))
      return i;
    else
      lec_data++;  
  return -1;
}

int main()
{
  char day_of_the_week[80];
  int hour,index;  
  struct lecture lec_data[N] = {
    {"�ɥ��Ļ���","Monday",3,"��ҥ�","��301"},
    {"���եȥ������齬B","Friday",2,"������","�������漼"}
  };
  
  printf("���������Ϥ��Ƥ�������. : ");
  scanf("%s",day_of_the_week);
  printf("���¤����Ϥ��Ƥ�������. : ");
  scanf("%d",&hour);
  
  index = search_lecture(lec_data,day_of_the_week, hour);
  
  if(index != -1){
    printf("���Ȳ��� : %s\n", lec_data[index].name);
    printf("ô��������̾ : %s\n", lec_data[index].teacher);
    printf("���� : %s\n", lec_data[index].place);
  }else
    printf("���Ϥ��줿���������¤˳�������ֵ��Ϥ���ޤ���.\n");
  
  return 0;
}

