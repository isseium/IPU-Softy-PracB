#include <stdio.h>
void displaymap(int a[][8]){
	int i,j,symbol[]={'X','-','O'};
	for(i=0;i<8;i++)for(j=0;j<8;j++) printf("%c%c",symbol[a[j][i]+1], j/7 * 10) ;
}
int reverse(int a[][8], int c, int x, int y, int dx, int dy, int *g){
	if(x <= 0 || x > 8 || y <= 0 || y > 8 || a[x][y]==0 )return 0;
	if(a[x][y]==c) return c;		
	if(reverse(a,c,x+dx,y+dy,dx,dy, g) == c) a[x][y] *= -1 + 0 * (*g)++;
	else return 0;
	return c;
}
int main(){
	int i,j,dx,dy,x,y,c=1,g=0,turn=0,cnt=2,a[8][8]={0},symbol[]={'X','-','O'};
	a[3][3]=a[4][4]=-1 * (a[3][4]=a[4][3]=-1);
	while(turn <= 60){
		displaymap(a);
		printf("turn: %d (O:%d, X:%d)\n\n%c x y>", turn, cnt, turn + 4 - cnt,symbol[c+1]);
		scanf("%d %d",&x,&y);
		if(a[x][y]==0)for(dx=-1;dx<=1;dx++) for(dy=-1;dy<=1;dy++) reverse(a, c, x+dx, y+dy, dx, dy, &g);
		if(g!=0)cnt += g + (g=0) * ((a[x][y] = c)  * (turn++) * (cnt+=(c+1)/2) * (c*=-1));
		else printf("Can't put it here\n");
	}
	return 0;
}