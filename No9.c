#include <stdio.h>
#include <string.h>
// get M!
int fun(int a)
{
	int sum=1,i;
	for (i = 1; i <= a; ++i)
	{
		sum=sum*i;
	}
	return sum;
}
int main()
{
	int m,n,out;
	printf("m=");
	scanf("%d",&m);
	printf("n=");
	scanf("%d",&n);
	out=fun(m)/fun(n)/fun(m-n);
	printf("c=%d\n", out);

	return 0;
}
