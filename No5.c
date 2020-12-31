#include <math.h>
#include <stdio.h>

int main() {
	int i,j,k,l,m,n,o,a,b,c,z,x;
	int arr1[100];
	int arr2[100];
	int temp=0;
	int temp2=0;
	
	scanf("%d",&o);
	printf("\n\n");
	
	for(i=1;i<=o;i++)
	{
		scanf("%d %d %d %d %d",&j,&k,&l,&m,&n);
		printf("\n");
		a=(k*30)+(l*30)+(m*20)+(n*20);
		b=a/100;
		if(a%100>0) {
		arr1[i]=b+1;
	}
		else if(a%100==0) 
		{
		arr1[i]=b;
		}
	}
	for(i=1;i<=o;i++)
	{
		arr2[i]=i;
	}
	
	
	for( z = 1; z <= o; z++) {
        for( x = z; x <= o; x++) {
            if( arr1[x] > arr1[z] ) {
                temp = arr1[x];
                arr1[x] = arr1[z];
                arr1[z] = temp;
                
                temp2 = arr2[x];
                arr2[x] = arr2[z];
                arr2[z] = temp2;
            }
        }
    }
	for(i=1;i<=3;i++)
	{
		printf("%d",arr2[i]);
		if(i!=3) printf(">");
	}
	return 0;
}
