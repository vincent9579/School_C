#include <math.h>
#include <stdio.h>

int main() {
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	c=(a*a)+(b*b);
	if(c>10000) printf("Outside");
	else if(c<=10000) printf("Inside");
	
	return 0;
        
    
}
