#include <stdio.h>
#include <string.h>

void add (int A[3][3],int B[3][3],int out[3][3]){
	int i,j;
	
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j <3; ++j)
		{
			out[i][j]=A[i][j]+B[i][j];
		}
	}

}

int main(){
	int A[3][3];
	int B[3][3];
	int out[3][3];
	scanf("%d %d %d",&A[0][0],&A[0][1],&A[0][2]);
	scanf("%d %d %d",&A[1][0],&A[1][1],&A[1][2]);
	scanf("%d %d %d",&A[2][0],&A[2][1],&A[2][2]);
	printf("\n");
	scanf("%d %d %d",&B[0][0],&B[0][1],&B[0][2]);
	scanf("%d %d %d",&B[1][0],&B[1][1],&B[1][2]);
	scanf("%d %d %d",&B[2][0],&B[2][1],&B[2][2]);
	printf("\n");
	add(A,B,out);
	printf("%d %d %d\n",out[0][0],out[0][1],out[0][2] );
	printf("%d %d %d\n",out[1][0],out[1][1],out[1][2] );
	printf("%d %d %d\n",out[2][0],out[2][1],out[2][2] );
	return 0;
}
