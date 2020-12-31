#include<stdio.h>
#include<math.h>

int main(){
	int num,i,j,max=0;
	scanf("%d",&num);
	int x[num],y[num];
	scanf("%d %d",&x[0],&y[0]);
	for(i=1;i<num;i++){
		scanf("%d %d",&x[i],&y[i]);
		for(j=i-1;j>=0;j--){
			if(pow(x[i]-x[j],2)+pow(y[i]-y[j],2)>max)
				max = pow(x[i]-x[j],2)+pow(y[i]-y[j],2);
		}
	}
	printf("%d",max);
		
return 0;
}
