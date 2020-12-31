#include<stdio.h>

#include<math.h>

int main(){
    double a, b, c, d, s, area;
    scanf("%lf%lf%lf",&a,&b,&c);
    if ((a + b > c) && (a + c > b) && (b + c > a)){
        printf("fit");
    }else{
        printf("unfit");
	}   

    return 0;

}
