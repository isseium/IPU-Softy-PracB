#include <stdio.h>

/* �Ԥ������ؤ� */
void swap_row(char **text, int n1, int n2)
{
  char *tmp;
  
  tmp = *(text+n1);
	*(text + n1) = *(text+n2);
  *(text + n2) = tmp;
  
  return;
}

/*����������ؤ� */
void  swap_col(char **text, int n1, int n2)
{
  char tmp;
  int i;

  /* tmp�˳�Ǽ */
  for(i=0;i<10;i++){
    tmp = *(*(text+i)+n2);
    *(*(text+i)+n2) = *(*(text+i)+n1);
    *(*(text+i)+n1) = tmp;
  }

  return;
}

int main()
{
  char *text[] = {"Yv teougo'","aua sedgn ","l!    c uk","onetds ruu",
                    "outdl- ifm","  iyD tdi!", " a  yfroar","isoliaenmn","b o Gdeol?", "c aaviarhr"};
  char pi[] = "48323979853562951413"; /* ʣ���ѤΥ��� */
  int i,j;
  
  for(i=0;i<20;i+=4){
    /* (b) */
    swap_col(text,pi[i]-0x30,pi[i+1]-0x30);
    /* (a) */
    swap_row(text,pi[i+2]-0x30,pi[i+3]-0x30);
  }

  /* ���� */
  for(i=0;i<10;i++)
    printf("%s\n",text[i]);
  
  return 0;
  
}

