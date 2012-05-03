/* 10.c */
#include <stdio.h>

struct rectangle {
  int x;
  int y;
  int width;
  int height;
};

int main()
{
  struct rectangle r = {10, 60, 70, 50 };
  int x,y;
  
  printf("Point (x,y): ");
  scanf("(%d,%d)",&x,&y);
  
  if(x <= r.x + r.width && x >= r.x && y <= r.y + r.height && y >= r.y)
    printf("Rectangle contains the point (%d,%d)\n",x,y);
  else
    printf("Rectangle doesn't contain the point (%d,%d)\n",x,y);
  
  return 0; 
}
