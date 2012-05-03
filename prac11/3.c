/* 3.c */
#include <stdio.h>

struct name{
  char first[80];
  char family[80];
};

struct date{
  int year;
  int month;
  int day;
};

struct student{
  int stu_num; /* 学籍番号 */
  struct name name_j; /* 氏名 */
  struct name name_e; /* 氏名（ローマ字）*/
  struct date birthday; /* 誕生日（yyyymmdd）*/
  char usr_id[9] /* ユーザID */
  int gender; /* 性別（0:不明,1:男,2:女）*/
  int pc; /* PCの有無（0:不明,2:持っている,3:持っていない）*/
};

void set_student(struct student *stu_data)
{ 
  printf("Student Number: ");
  scanf("%d",&stu_data->stu_num);
  printf("Name(JPN) [Family First]: ");
  scanf("%s %s",stu_data->name_j.family, stu_data->name_j.first);
  printf("First name(ENG) [First Family]: ");
  scanf("%s %s",stu_data->name_e.first, stu_data->name_e.family);
  printf("Birthday [yyyy/mm/dd]: ");
  scanf("%d/%d/%d",&stu_data->birthday.year,&stu_data->birthday.month,&stu_data->birthday.day);
  printf("UserID: ");
  scanf("%s",stu_data->usr_id);
  printf("Gender [0:Unknown, 1:male, 2:female]: ");
  scanf("%d",&stu_data->gender);
  printf("PC [0:Unknown, 1:Have, 2:No have]: ");
  scanf("%d",&stu_data->pc);
  printf("\n");
}

int main()
{
  char *gender[] = {"Unknown","Male","Female"};
  char *pc[] = {"Unknown","Have","No have"};

  struct student stu_data;	

  set_student(&stu_data);
  
  /* 表示 */
  printf("Student Number: %d\n",stu_data.stu_num);
  printf("Frist Name(JPN): %s\n",stu_data.name_j.family);
  printf("Family Name(JPN): %s\n",stu_data.name_j.first);
  printf("Frist Name(ENG): %s\n",stu_data.name_e.first);
  printf("Family Name(ENG): %s\n",stu_data.name_e.family);
  printf("Brithday : %d/%d/%d\n",stu_data.birthday.year, 
         stu_data.birthday.month,stu_data.birthday.day);
  printf("UserID: %s\n",stu_data.usr_id);
  printf("Gender: %s\n",gender[stu_data.gender]);
  printf("PC: %s\n",pc[stu_data.pc]);
  
  return 0;
}

