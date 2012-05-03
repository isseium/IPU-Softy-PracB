/* 5.c */
#include <stdio.h>

struct status{
  int life,magic,power;         /* 生命力、魔法力、力 のステータス*/
  int sleep: 1, confuse: 1, paralysis: 1, poison: 1; /* 睡眠、混乱、麻痺、毒 のステータス */
};

/* 状態表示 */
void put_status(struct status *person)
{
  printf("----------Status----------\n");
  printf("life: %d\nmagic: %d\npower: %d\nsleep: %d\nconfuse: %d\nparalysis: %d\npoison: %d\n\n"
         ,person->life, person->magic, person->power, person->sleep, person->confuse
         , person->paralysis, person->poison);
}

/* 状態変化処理 */
void change_status(struct status *person, int p, int poison)
{
  /* 生命力 */
  if(person->sleep==1){         /* 睡眠状態のとき */
    person->life -= p;
    person->sleep = 0;
  }else                         /* 睡眠状態以外のとき */
    person->life -= p/2;

  /* 力 */
  if(person->poison==1)        /* 毒状態のとき */
    person->power--;

  /* 毒の敵 */
  if(poison == 1)
    person->poison=1;
}

int main(){
  struct status hero;
  int i;

  /* 初期設定 */
  hero.life = 200;
  hero.magic = 100;
  hero.power = 10;
  hero.sleep = 1;
  hero.confuse = 0;
  hero.paralysis = 0;
  hero.poison = 0;

  put_status(&hero);            /* 初期状態を表示 */

  for(i=0;i<3;i++){             /* 毒性の敵から強さ 10 の攻撃を連続3回受ける */
    change_status(&hero,10,1);
    put_status(&hero);          /* 表示 */
  }

  return 0;
}
