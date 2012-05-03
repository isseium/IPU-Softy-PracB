/* 5.c */
#include <stdio.h>
#include <stdlib.h>

struct sparts{
  int item;
  float quant;
};

struct item{
  char *part_name; /* アイテム名 */
  int n_spart; /* 子アイテム数 */
  struct sparts *kobuhin; /* 子アイテム */
} buhin[20];

void set_n_spart(int index, int number)
{
  buhin[index].n_spart = number;
  buhin[index].kobuhin = (struct sparts *)malloc(number*sizeof(struct sparts));
}


void init_buhin(void)
{
  buhin[0].part_name = "メニュー";
  set_n_spart(0,4);
    buhin[0].kobuhin[0].item = 1;
    buhin[0].kobuhin[0].quant = 20.0;
    buhin[0].kobuhin[1].item = 2;
    buhin[0].kobuhin[1].quant = 15.0;
    buhin[0].kobuhin[2].item = 3;
    buhin[0].kobuhin[2].quant = 30.0;
    buhin[0].kobuhin[3].item = 4;
    buhin[0].kobuhin[3].quant = 10.0;
	
  buhin[1].part_name = "カツ定";
  set_n_spart(1,3);
    buhin[1].kobuhin[0].item = 5;
    buhin[1].kobuhin[0].quant = 1.0;
    buhin[1].kobuhin[1].item = 6;
    buhin[1].kobuhin[1].quant = 1.0;
    buhin[1].kobuhin[2].item = 7;
    buhin[1].kobuhin[2].quant = 1.0;

  buhin[2].part_name = "カツ丼";
  set_n_spart(2,2);
    buhin[2].kobuhin[0].item = 8;
    buhin[2].kobuhin[0].quant = 1.0;
    buhin[2].kobuhin[1].item = 6;
    buhin[2].kobuhin[1].quant = 1.0;

  buhin[3].part_name = "ラーメン";
  set_n_spart(3,2);
    buhin[3].kobuhin[0].item = 9;
    buhin[3].kobuhin[0].quant = 1.0;
    buhin[3].kobuhin[1].item = 10;
    buhin[3].kobuhin[1].quant = 1.0;

  buhin[4].part_name = "カツ丼セット";
  set_n_spart(4,2);
    buhin[4].kobuhin[0].item = 2;
    buhin[4].kobuhin[0].quant = 1.0;
    buhin[4].kobuhin[1].item = 3;
    buhin[4].kobuhin[1].quant = 1.0;

  buhin[5].part_name = "おかず";
  set_n_spart(5,2);
    buhin[5].kobuhin[0].item = 11;
    buhin[5].kobuhin[0].quant = 1.0;
    buhin[5].kobuhin[1].item = 12;
    buhin[5].kobuhin[1].quant = 1.0;

  buhin[6].part_name = "ごはん";
  set_n_spart(6,0);
  
  buhin[7].part_name = "味噌汁";
  set_n_spart(7,0);

  buhin[8].part_name = "具";
  set_n_spart(8,2);
    buhin[8].kobuhin[0].item = 11;
    buhin[8].kobuhin[0].quant = 1.0;
    buhin[8].kobuhin[1].item = 13;
    buhin[8].kobuhin[1].quant = 1.0;

  buhin[9].part_name = "麺";
  set_n_spart(9,0);

  buhin[10].part_name = "スープ";
  set_n_spart(10,0);

  buhin[11].part_name = "トンカツ";
  set_n_spart(11,0);

  buhin[12].part_name = "キャベツ";
  set_n_spart(12,0);

  buhin[13].part_name = "玉子";
  set_n_spart(13,0);
}

/* アイテムの量を求める (p の中の q の量）*/
float get_q(int p, int q)
{
  int i; /* ループカウンタ */
  float r = 0.0; /* 返す量 */
  
  if (p == q)  /* 計算したいアイテムかどうか? */
    r = 1.0;
  else if (buhin[p].n_spart != 0 ) /* さらに子アイテムがあるか? */
    for (i = 0; i < buhin[p].n_spart; i++)
      r += get_q(buhin[p].kobuhin[i].item, q) * buhin[p].kobuhin[i].quant;
  /* 子アイテムがあれば再帰呼び出し */
  return r;  /* 求めた量を返す */
}

int main()
{
  float t_quant; /* 求める所蔵量 */
  int p0; /* 計算の基準のアイテム番号 */
  int q0; /* 調べたいアイテム番号 */
  
  init_buhin(); /* データを初期化 */
  
  p0 = 0; /* 計算の基準のアイテム番号 */
  q0 = 11; /* 調べたいアイテム番号 */
  
  /* 必要量を求める */
  t_quant = get_q(p0, q0);
  
  /* 結果表示 */
  printf("Total quantity of %s is %f in %s.\n",
         buhin[q0].part_name, t_quant, buhin[p0].part_name);
  return 0;
}

