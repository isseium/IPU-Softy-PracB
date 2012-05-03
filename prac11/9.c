/* 9.c */
#include <stdio.h>
#define N 30

struct time{
  int hour;
  int min;
};

int search(struct time *time_data, struct time *now)
{
  int i;
  for(i=0;i<N;i++){
    if(time_data->hour >= now->hour && time_data->min >= now->min)
      return i;
    else
      time_data++;
  }
  return -1;
}

void print_data(struct time *time_data, struct time *now)
{
  int index,i;

  index = search(time_data,now);
  
  if(index != -1){
    printf("   Departure   Waiting time\n");
    for(i=index;i<N && i<index+3;i++)
      printf("%d)    %d:%d     %3d [min.]\n",i-index+1,(time_data+i)->hour,(time_data+i)->min,
             (time_data+i)->hour * 60 + (time_data+i)->min - (now->hour * 60 + now->min));
  }else{
    printf("Not found.\n");
  }
}

int main()
{
  struct time time_data[N] = {
    {6,32},{7,2},{7,22},{7,36},{7,49},{8,4},{8,42},{9,7},{9,28},{10,38},{11,19},{11,24},
    {12,41},{13,15},{13,41},{13,56},{14,55},{15,13},{15,24},{16,25},{17,2},{17,23},{17,46},
    {18,10},{18,49},{19,18},{19,29},{20,12},{20,49},{21,50}
  },now;
  
  printf("Enter current time [hh:mm] : ");
  scanf("%d:%d",&now.hour,&now.min);

  print_data(time_data, &now);

  return 0;
}		


