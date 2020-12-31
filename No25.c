#include <math.h>
#include <stdio.h>

int main() {
	long long int a=1,i=0,o;
	double N,x,y,z,result;
	printf("input two number 1<=N<=10 x :");
	scanf("%lf %lf",&N,&x);
	if(x>=6.28){
		x=x-6.28;
	}
	for(i=0;i<=N;i++){
		z=pow(x,(2*i+1));
		y=pow(-1,i);
		//printf(" %lf\n %lf\n",y,z);
		for(o=1;o<=(2*i+1);o++){
			a*=o;
		} 
		//printf("	%d\n",a);
		result=(y*z)/a+result;
		//printf("%lf\n",result);
		a=1;
	}
	printf("%.4lf\n",result);
	
	   
}

