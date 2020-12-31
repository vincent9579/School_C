#include <stdio.h>

int main() {
	int num,i;
	scanf("%d",&num);
	int a[num],b[num];
	
	for(i=0;i<num;i++){
		scanf("%d,%d",&a[i],&b[i]);
	}
	printf("\n");
	int ans;
	for(i=0;i<num;i++){
		int c,d;
		c = a[i];
		d = b[i];
		ans = pascal(c,d);
		printf("%d \n\n",ans);
	}
		
}

int pascal(int a, int b){
	if(b == 0 || b == a)
		return 1;
	else 
		return (pascal(a-1,b-1) + pascal(a-1,b));
}

