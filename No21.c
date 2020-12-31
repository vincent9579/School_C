#include <math.h>
#include <stdio.h>

int main() {
	long long int a,b,c,x,i=0;
	printf("input two number 1<=a,b<=9999:");
	scanf("%d %d",&a,&b);
	if(1<=a<=9999&&1<=b<=9999){
	
		do{
		
		i++;
		c=i*a;
		
		}
		while(c%b!=0);
		x=(a*b)/c;
		printf("最大公因數:%d",x);
    	
	}
}
