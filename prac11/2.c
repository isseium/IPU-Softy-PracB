/* 2.c */
#include <stdio.h>
#define N 8

struct student{
  int stu_num; /* 学籍番号 */
  char *name_j; /* 氏名 */
  char *name_e; /* 氏名（ローマ字）*/
  int birthday; /* 誕生日（yyyymmdd）*/
  char *usr_id; /* ユーザID */
  int gender; /* 性別（0:不明,1:男,2:女）*/
  int pc; /* PCの有無（0:不明,1:持っている,2:持っていない）*/
};

int main()
{
  int num,i;
  char *gender[] = {"Unknown","Male","Female"};
  char *pc[] = {"Unknown","Have","No have"};
  
  /* 構造体の配列宣言と初期化 */
  struct student stu_data[N] = {
    {2006004,"阿部　将太","Shota ABE",19880304,"g031e004",1,0},
    {2006019,"遠藤　絵梨香","Erika ENDOH",19870523,"g031e019",2,0},
    {2006046,"菊池　卓秀","Takuhide KIKUCHI",19871223,"g031e046",1,0},
    {2006063,"小松 一星","Issei KOAMTSU",19880224,"g031e063",1,1},
    {2006081,"佐々木　豊","Yutaka SASAKI",19870427,"g031e081",1,0},
    {2006107,"高橋　健太","Kenta TAKAHASHI",19871116,"g031e107",1,0},
    {2006114,"舘山　勝也","Katsuya TATEYAMA",19871227,"g031e114",1,0},
    {2006132,"成田　篤史","Atsushi NARITA",19870717,"g031e132",1,0},
  };
  
  /* 検索 */
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
