
/***** (i) ���� *****/
/* year : ǯ���Ǽ, ǯ�������Ǥ��뤫�� int ��*/
/* month: ����Ǽ, ��������Ǥ��뤫�� int ��*/
/* day  : �����Ǽ, ���������Ǥ��뤫�� int �� */
struct date{
  int year;
  int month;
  int day;
};

/***** (ii) ���� *****/
/* hour : �����Ǽ, ���������Ǥ��뤫�� int �� */
/* min  : ʬ���Ǽ, ʬ�������Ǥ��뤫�� int ��*/
/* sec  : �ä��Ǽ, �ä������Ǥ��뤫�� int �� */
struct time{
  int hour;
  int min;
  int sec;
};

/***** (iii) �� *****/
/* title  : �����ȥ���Ǽ, �����ȥ��ʸ����Ǥ��뤫�� *char�� */
/* writer : ���Ԥ��Ǽ, ���Ԥ�ʸ����Ǥ��뤫�� *char�� */
/* ISBN   : ISBN���Ǽ, ISBN��10��������Ǥ��뤫�� long long�� */
struct book{
  char *title;
  char *writer;
  long long ISBN;
};

/***** (iv) xyʿ�̾���� *****/
/* x : x ��ɸ���Ǽ, ��ɸ�ϼ¿��Ǥ��뤫�� double�� */
/* y : y ��ɸ���Ǽ, ��ɸ�ϼ¿��Ǥ��뤫�� double�� */
struct point{
  double x;
  double y;
};

/***** (v) ʣ�ǿ� *****/
/* real      : �������Ǽ, �����ϼ¿��Ǥ��뤫�� dobule�� */
/* imaginary : �������Ǽ, �����ϼ¿��Ǥ��뤫�� double�� */
struct complex{
  double real;
  double imaginary;
};


