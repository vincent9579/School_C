#include <math.h>
#include <stdio.h>

int main() {
	
	int arr1[6];
	int arr2[6];
	int arr3[6];
	int arr4[6];
	int i;
	
	scanf("%d %d %d %d %d %d",&arr1[0],&arr1[1],&arr1[2],&arr1[3],&arr1[4],&arr1[5]);
	scanf("%d %d %d %d %d %d",&arr2[0],&arr2[1],&arr2[2],&arr2[3],&arr2[4],&arr2[5]);
	printf("\n");

	for(i=0;i<=5;i++)
	{
		arr3[i]=arr1[i]+arr2[i];
		if(arr3[i]%2==1)  arr4[i]=1;
		else if(arr3[i]%2==0) arr4[i]=0;
		
		
	}
	
	for(i=0;i<=5;i++)
	{
		printf("%d ",arr4[i]);
	}
	
	return 0;
        

}
