#include <math.h>
#include <stdio.h>

int main() {
	int a,i;
	int egg;
	printf("input egg quantity:");
	scanf("%d",&egg);
	for(i=0;i<egg;i++){
		if(i%7==2&&i%9==2&&i%3==2)
			printf("%d\n",i);
				
	}
        
    
}
