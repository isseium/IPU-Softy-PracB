/* 7.c */
#include <stdio.h>
#include <stdlib.h>

struct sparts{
  int item;
  float quant;
};

struct item{
  char *part_name; /* アイテム名 */
  char *unit_name; /* 単位名 */
  int n_spart; /* 子アイテム数 */
  struct sparts *kobuhin; /* 子アイテム */
} buhin[22];

void set_n_spart(int index, int number)
{
  buhin[index].n_spart = number;
  buhin[index].kobuhin = (struct sparts *)malloc(number*sizeof(struct sparts));
}

void init_buhin(void)
{
  buhin[0].part_name = "オーダ";
  buhin[0].unit_name = "";
  set_n_spart(0,3);
    buhin[0].kobuhin[0].item = 1;
    buhin[0].kobuhin[0].quant = 10.0;
    buhin[0].kobuhin[1].item = 5;
    buhin[0].kobuhin[1].quant = 6.0;
	buhin[0].kobuhin[2].item = 4;
    buhin[0].kobuhin[2].quant = 4.0;

  buhin[1].part_name = "直4エンジン";
  set_n_spart(1,4);
    buhin[1].kobuhin[0].item = 2;
    buhin[1].kobuhin[0].quant = 1.0;
    buhin[1].kobuhin[1].item = 7;
    buhin[1].kobuhin[1].quant = 1.0;
    buhin[1].kobuhin[2].item = 3;
    buhin[1].kobuhin[2].quant = 1.0;
    buhin[1].kobuhin[3].item = 4;
    buhin[1].kobuhin[3].quant = 4.0;
		
  buhin[2].part_name = "SHAssy";
  set_n_spart(2,4);
    buhin[2].kobuhin[0].item = 8;
    buhin[2].kobuhin[0].quant = 1.0;
    buhin[2].kobuhin[1].item = 9;
    buhin[2].kobuhin[1].quant = 1.0;
    buhin[2].kobuhin[2].item = 10;
    buhin[2].kobuhin[2].quant = 2.0;
    buhin[2].kobuhin[3].item = 11;
    buhin[2].kobuhin[3].quant = 10.0;

  buhin[3].part_name = "CCAssy（直4用）";
  set_n_spart(3,4);
    buhin[3].kobuhin[0].item = 12;
    buhin[3].kobuhin[0].quant = 1.0;
    buhin[3].kobuhin[1].item = 13;
    buhin[3].kobuhin[1].quant = 1.0;
    buhin[3].kobuhin[2].item = 14;
    buhin[3].kobuhin[2].quant = 1.0;
    buhin[3].kobuhin[3].item = 11;
    buhin[3].kobuhin[3].quant = 10.0;
		
  buhin[4].part_name = "PSAssy";
  set_n_spart(4,4);
    buhin[4].kobuhin[0].item = 15;
    buhin[4].kobuhin[0].quant = 1.0;
    buhin[4].kobuhin[1].item = 16;
    buhin[4].kobuhin[1].quant = 1.0;
  	buhin[4].kobuhin[2].item = 17;
    buhin[4].kobuhin[2].quant = 1.0;
		buhin[4].kobuhin[3].item = 18;
    buhin[4].kobuhin[3].quant = 2.0;

	
  buhin[5].part_name = "V8エンジン";
	set_n_spart(5,4);
    buhin[5].kobuhin[0].item = 2;
    buhin[5].kobuhin[0].quant = 2.0;
    buhin[5].kobuhin[1].item = 19;
    buhin[5].kobuhin[1].quant = 2.0;
    buhin[5].kobuhin[2].item = 20;
    buhin[5].kobuhin[2].quant = 1.0;
    buhin[5].kobuhin[3].item = 4;
    buhin[5].kobuhin[3].quant = 8.0;

  buhin[6].part_name = "CCAssy（V8用）";
  set_n_spart(6,4);
    buhin[6].kobuhin[0].item = 21;
    buhin[6].kobuhin[0].quant = 1.0;
    buhin[6].kobuhin[1].item = 22;
    buhin[6].kobuhin[1].quant = 1.0;
    buhin[6].kobuhin[2].item = 14;
    buhin[6].kobuhin[2].quant = 1.0;
    buhin[6].kobuhin[3].item = 11;
    buhin[6].kobuhin[3].quant = 10.0;

  buhin[7].part_name = "シリンダ（直4用）";
  set_n_spart(7,0);
  
  buhin[8].part_name = "シリンダヘッド";
  set_n_spart(8,0);

  buhin[9].part_name = "シリンダヘッドカバー";
  set_n_spart(9,0);

  buhin[10].part_name = "カムシャフト";
  set_n_spart(10,0);

  buhin[11].part_name = "ボルト";
  set_n_spart(11,0);  
	
  buhin[12].part_name = "クランクケース（直4用）";
  set_n_spart(12,0);  
	
  buhin[13].part_name = "クランクシャフト（直4用）";
  set_n_spart(13,0);  
	
  buhin[14].part_name = "クランクケースカバー";
  set_n_spart(14,0);  
	
  buhin[15].part_name = "ピストン";
  set_n_spart(15,0);
	
  buhin[16].part_name = "ガスケット";
  set_n_spart(16,0);

  buhin[17].part_name = "コンロッド";
  set_n_spart(17,0);
	
  buhin[18].part_name = "ピストンクリップ";
  set_n_spart(18,0);
	
  buhin[19].part_name = "シリンダ（V8用）";
  set_n_spart(19,0);
	
  buhin[20].part_name = "クランクケース（V8用）";
  set_n_spart(20,0);      
	
  buhin[21].part_name = "クランクシャフト（V8用）";
  set_n_spart(21,0);  
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
  int p0; /* 計算の基準のアイテム番号 */
  int i;

  init_buhin(); /* データを初期化 */

  p0 = 0; /* 計算の基準のアイテム番号 */

  /* 個部品がなければ必要量を求め表示 */
  for(i=0;i<21;i++)
    if(buhin[i].n_spart == 0)
      printf("Total quantity of %s is %f in %s.\n",
             buhin[i].part_name, get_q(p0,i), buhin[p0].part_name);
  
  return 0;
}
