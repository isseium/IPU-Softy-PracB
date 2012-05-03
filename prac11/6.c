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
    {"ドイツ事情","Monday",3,"リヒタ","共301"},
    {"ソフトウェア演習B","Friday",2,"全教員","学生研究室"}
  };
  
  printf("曜日を入力してください. : ");
  scanf("%s",day_of_the_week);
  printf("時限を入力してください. : ");
  scanf("%d",&hour);
  
  index = search_lecture(lec_data,day_of_the_week, hour);
  
  if(index != -1){
    printf("授業科目 : %s\n", lec_data[index].name);
    printf("担当教員氏名 : %s\n", lec_data[index].teacher);
    printf("教室 : %s\n", lec_data[index].place);
  }else
    printf("入力された曜日・時限に該当する講義はありません.\n");
  
  return 0;
}

