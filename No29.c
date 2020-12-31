#include <stdio.h>

int main() {
	int i,j,num,a[10],b,sum[10]={0};
	
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		scanf("%d",&a[i]);
		b = a[i];
		while(b / 10 != 0){
			sum[i] += b % 10;
			b /= 10; 
		} 
		sum[i] += b;
	}
	
	for(i=num-1;i>=0;i--){
		for(j=i-1;j>=0;j--)
			if(sum[i] < sum[j-1] || (sum[i] == sum[j-1] && a[i] < a[j-1])){  
				b = sum[i];
				sum[i] = sum[j-1];
				sum[j-1] = b;
				b = a[i];
				a[i] = a[j-1];
				a[j-1] = b;
			}
	} 
	for(i=0;i<num;i++)
		printf("%d ",a[i]);
		
	return 0;
}

