
#include <math.h>
#include <stdio.h>

int main() {
	int money[100000];
	int P,H,h,M,m,i,a,b,c,d;
	
	scanf("%d",&P);
	printf("\n");
	
	for(i=1;i<=P;i++){
		H=0;
		h=0;
		M=0;
		m=0;
		a=0;
		b=0;
		scanf("%d %d %d %d %d %d",&H,&M,&h,&m,&a,&b);
		if(m>M) 
		{
		money[i]=((h-H+1)*a)*b;	
		}
		else if(m<=M)
		{
		money[i]=((h-H)*a)*b;
		} 
		
		printf("\n\n");	
	}
	for(i=1;i<=P;i++){
		
		printf("%d\n\n",money[i]);
		
	}
	
	return 0;
        
    
}

