#include <math.h>
#include <stdio.h>

int main() {
	int a;
	double money;
	printf("input time:");
	scanf("%d",&a);
	if(a<=180)
	money=a*0.16;
	else if(180<a<=300)
	money=a*0.16*0.9;
	else if(300<a<=600)
	money=a*0.16*0.8;
	else if(600<a)
	money=a*0.16*0.7;
	printf("%lf",money);
}
