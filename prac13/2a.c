/* 2.c : 1.c と異なる部分のみ */
int main()
{
  float t_quant; /* 求める所蔵量 */
  int p0=0; /* 計算の基準のアイテム番号 */
  int q0; /* 調べたいアイテム番号 */
  int i;  /* ループカウンタ */
  int q[] = {6,7,9,10,11,12,13};  /* 調べるアイテム番号: 6,7,9,10,11,12,13 */

  init_buhin(); /* データを初期化 */

  /* 必要量を求めて表示 */
  for (i = 0; i < 7; i++){    
    /* 必要量を求める */
    t_quant = get_q(p0, q[i]);
    
    /* 結果表示 */
    printf("Total quantity of %s is %f in %s.\n",
           buhin[q0].part_name, t_quant, buhin[p0].part_name);
    }

  return 0;
}
