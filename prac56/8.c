/* 8.c */
#include <stdio.h>

int main()
{
  char c;
  c = NULL;

  while(1){
    printf("input? : ");
    scanf("%c%*c",&c);

    /* 判定 */
    if(c != ' '){
      /* 文字を判定 */
      if (c >= 'A' && c <= 'Z')
        printf("Capital letter\n"); /* 大文字 */
      else if(c >= 'a' && c <= 'z')
        printf("Small letter\n"); /* 小文字 */
      else if(c >= '0' && c <= '9')
        printf("Number\n");       /* 数字 */
      else
        printf("Others\n");       /* その他 */
    }else
      break;                    /* 空白だったらループを抜ける */
  }

  return 0;
}
