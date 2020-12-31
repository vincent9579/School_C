#include <math.h>
#include <stdio.h>

int main() {
    int n,m,dx,dy,dd,x,y;
    scanf("%d %d",&n,&m);
    //x+y=n
    //2x+4y=m
    dx=(n*4-m*1);
    dy=(1*m-2*n);
    dd=(1*4-2*1);
    x=dx/dd;
    y=dy/dd;
    printf("%d %d",x,y);
	return 0;    
}
