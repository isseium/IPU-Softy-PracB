/* 5.c */
#include <stdio.h>

struct status{
  int life,magic,power;         /* ��̿�ϡ���ˡ�ϡ��� �Υ��ơ�����*/
  int sleep: 1, confuse: 1, paralysis: 1, poison: 1; /* ��̲���������㡢�� �Υ��ơ����� */
};

/* ����ɽ�� */
void put_status(struct status *person)
{
  printf("----------Status----------\n");
  printf("life: %d\nmagic: %d\npower: %d\nsleep: %d\nconfuse: %d\nparalysis: %d\npoison: %d\n\n"
         ,person->life, person->magic, person->power, person->sleep, person->confuse
         , person->paralysis, person->poison);
}

/* �����Ѳ����� */
void change_status(struct status *person, int p, int poison)
{
  /* ��̿�� */
  if(person->sleep==1){         /* ��̲���֤ΤȤ� */
    person->life -= p;
    person->sleep = 0;
  }else                         /* ��̲���ְʳ��ΤȤ� */
    person->life -= p/2;

  /* �� */
  if(person->poison==1)        /* �Ǿ��֤ΤȤ� */
    person->power--;

  /* �Ǥ�Ũ */
  if(poison == 1)
    person->poison=1;
}

int main(){
  struct status hero;
  int i;

  /* ������� */
  hero.life = 200;
  hero.magic = 100;
  hero.power = 10;
  hero.sleep = 1;
  hero.confuse = 0;
  hero.paralysis = 0;
  hero.poison = 0;

  put_status(&hero);            /* ������֤�ɽ�� */

  for(i=0;i<3;i++){             /* ������Ũ���鶯�� 10 �ι����Ϣ³3������� */
    change_status(&hero,10,1);
    put_status(&hero);          /* ɽ�� */
  }

  return 0;
}
