#include <stdio.h>

int main()
{
  int day,month;
  int i;
  int m_month[]={31,28,31,30,31,30,31,31,30,30,31}; /* 月の最大値 */
  char *month2[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
  char *constellation[12] = {"ARIES","TAURUS","GEMINI","CANCER","LEO","VIRGO","LIBRA" ,"SCORPIO"
                               ,"SAGITTARIUS","CAPRICORN","AQUARIUS","PISCES"}; /* 星座名 */
  int term[12][2] = {{4,19},{5,20},{6,21},{7,22},{8,22},{9,22}
                     ,{10,23},{11,21},{12,21},{1,19},{2,18},{3,20}}; /* 星座の期間の終了日 */
  
  
  printf("Enter your birthday [mm/dd] : ");
  scanf("%d/%d", &month, &day);
  
	/* 入力内容のチェック */
  if (month < 1 || month > 12 || day < 1 || day > m_month[month-1]){
    printf("Error : strange data was entered.\n");
    return -1;
  }
  
  /* 日付の出力 */
  printf("Your birth day is %s. %d.\n", *(month2 + month - 1), day);
  
  /* 星座を算出 */
  for(i=0;month != term[i][0]; i++);
  
  if(term[i][1] < day){
    i++;
    if (i == 12 ) i = 0;
  }
  
  /* 星座を表示 */
  printf("Therefore, your constellation is the %s.\n", *(constellation + i));
  
  return 0;
}

