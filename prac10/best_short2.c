#include <stdio.h>
void displaymap(int a[][8]){
	int i,j,symbol[]={'X','-','O'};
	for(i=0;i<8;i++)for(j=0;j<8;j++) if(j==7 || 0 * printf("%c",symbol[a[j][i]+1]))printf("%c\n",symbol[a[j][i]+1]);
}
int reverse(int a[][8], int c, int x, int y, int dx, int dy, int *g){
	if (!(x <= 0 || x > 8 || y <= 0 || y > 8 || a[x][y]==0 ) &&((a[x][y] == c) || ((reverse(a,c,x+dx,y+dy,dx,dy, g) == c) && (dx=2) ))||dy==2)return c + 0 * ((dx!=2 ) || ( dy!=2 && (dx!=2  || (a[x][y] *= -1) * (*g)++)) - c * (!(x <= 0 || x > 8 || y <= 0 || y > 8 || a[x][y]==0 )));
}
int main(){
	int i,j,dx,dy,x,y,c=1,g=0,turn=0,cnt=2,a[8][8]={0},symbol[]={'X','-','O'};
	while(turn<=61 && (turn > 0 || (a[3][3]=a[4][4]=-1 * (a[3][4]=a[4][3]=-1)))){
		displaymap(a);
		if(a[x][y]== 0 * (printf("turn: %d (O:%d, X:%d)\n\n%c x y>", turn, cnt, turn + 4 - cnt,symbol[c+1]) + scanf("%d %d",&x,&y)))for(dx=-1;dx<=1;dx++) for(dy=-1;dy<=1;dy++) reverse(a, c, x+dx, y+dy, dx, dy, &g);
		if(((g!=0) && (cnt+=c*g) && !(g = 0 * (a[x][y] = c)  * (turn++) * (cnt+=(c+1)/2) * (c*=-1))) || printf("Can't put it here\n"));
	}
	return 0;
}