
/***** (i) 日付 *****/
/* year : 年を格納, 年は整数であるから int 型*/
/* month: 月を格納, 月は整数であるから int 型*/
/* day  : 日を格納, 日は整数であるから int 型 */
struct date{
  int year;
  int month;
  int day;
};

/***** (ii) 時刻 *****/
/* hour : 時を格納, 時は整数であるから int 型 */
/* min  : 分を格納, 分は整数であるから int 型*/
/* sec  : 秒を格納, 秒は整数であるから int 型 */
struct time{
  int hour;
  int min;
  int sec;
};

/***** (iii) 本 *****/
/* title  : タイトルを格納, タイトルは文字列であるから *char型 */
/* writer : 著者を格納, 著者は文字列であるから *char型 */
/* ISBN   : ISBNを格納, ISBNは10桁の整数であるから long long型 */
struct book{
  char *title;
  char *writer;
  long long ISBN;
};

/***** (iv) xy平面上の点 *****/
/* x : x 座標を格納, 座標は実数であるから double型 */
/* y : y 座標を格納, 座標は実数であるから double型 */
struct point{
  double x;
  double y;
};

/***** (v) 複素数 *****/
/* real      : 実部を格納, 実部は実数であるから dobule型 */
/* imaginary : 虚部を格納, 虚部は実数であるから double型 */
struct complex{
  double real;
  double imaginary;
};


