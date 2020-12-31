#include <stdio.h>    

int main(){    
    long long n,a=1,b=1,temp,i;  
    scanf("%lli",&n);    
    for(i=2;i<=n;i++){  
        temp=a;  
        a=b;  
        b=a+temp;  
    }     
    printf("%lli\n",a);    
}  
