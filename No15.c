#include <stdio.h>
#include <string.h>

int main()
{
	int input,j=3,i;
	int number[4];
	int out[4];
	scanf("%d",&input);
	for (i = 1000; i >0 ; i=i/10)
	{

		number[j]=(input/i)%10;
		j=j-1;
		
		/* code */
	}

	for (i = 0; i < 4; ++i)
	{
		number[i]=(number[i]+7)%10;
		/* code */
	}
	out[0]=number[2];
	out[1]=number[3];
	out[2]=number[0];
	out[3]=number[1];

	printf("%d%d%d%d",out[3],out[2],out[1],out[0]);
	return 0;
}

