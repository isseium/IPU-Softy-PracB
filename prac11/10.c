/* 10.c */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct fare_chart{
  int dist_lower; /* �Ķȥ����֤β��� */
  int dist_upper; /* �Ķȥ����֤ξ�� */
  int fare; /* ���� */
};
struct station{
  char *name;
  double dist;
};

int calc_fare(struct fare_chart *fare_data, struct station *station_data, int dep, int dst)
{
  int distance,i; 
  distance = abs((int)ceil((station_data+dst)->dist - (station_data+dep)->dist)); /* ��Υ�򻻽� */
  for(i=0; (fare_data+i)->dist_upper <= distance;i++); /* ��������ǡ����򸡺� */
  return (fare_data+i)->fare;
}

int main()
{
  struct fare_chart fare_data[] = {
    {1,3,220},{4,6,280},{7,10,300},{11,15,360},{16,20,500},{21,25,630},{26,30,760},{31,35,900},
    {36,40,1030},{41,45,1170},{46,50,1300},{51,60,1510},{61,70,1760},{71,80,2030},{81,90,2300}
  };
  
  struct station station_data[] = {
    {"����",0.0},{"����",5.6},{"����",12.2},{"��̱",16.6},{"����",21.3},{"������",26.9},
    {"����ƾµ���",32.0},{"��Ʋ",37.3},{"���滳�⸶",44.4},{"����",52.2},{"��Ļë",59.8},
    {"���",64.5},{"���",70.8},{"����",73.7},{"���İ첹��",78.4},{"�ܻ�",82.0}
  };
  int dep,dst;
  
  printf("Input station code of depature    : ");
  scanf("%d",&dep);
  printf("Input station code of destination : ");
  scanf("%d",&dst);
  
  printf("The fare between %s and %s is %d [yen].\n", station_data[dep].name,
         station_data[dst].name, calc_fare(fare_data,station_data,dep,dst));
  
  return 0;
}
