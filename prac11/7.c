/* 7.c */
#include <stdio.h>

struct money{
  char *name; /* ̾�� */
  int value; /* ���� */
  int cnt; /* ��� */
};

int main(){
  struct money money_data[]={
    {"5000 yen bill",5000,0},
    {"1000 yen bill",1000,0},
    {" 500 yen coin",500,0},
    {" 100 yen coin",100,0},
    {"  50 yen coin",50,0},
    {"  10 yen coin",10,0}
  };
  int payment,deposit,i,tmp;
  
  printf("Payment [yen] : ");
  scanf("%d",&payment);
  printf("Deposit [yen] : ");
  scanf("%d",&deposit);
  
  tmp = deposit - payment;
  i=0;
  while(i < 6){
    if(tmp >= money_data[i].value){
      tmp -= money_data[i].value;
      money_data[i].cnt++;
    }else
      i++;
  }
  
  for(i=0;i<6;i++)
    printf("%s : %d\n",money_data[i].name,money_data[i].cnt);
  
  printf("Change is %d yen.\n",deposit - payment);
  
  return 0;
  
}

