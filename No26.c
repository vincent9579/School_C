#include<stdio.h>
#include<math.h>

int main(){
    double X1, Y1, X2, Y2, X3, Y3,x4,y4,x5,y5,x6,y6,length1,length2,length3,a1,a2,b1,b2,c1,c2,A,B,C,S;
    scanf("%lf %lf\r%lf %lf\r%lf %lf", &X1, &Y1, &X2, &Y2, &X3, &Y3);
    length1=sqrt(pow(X1-X2,2)+pow(Y1-Y2,2));
	length2=sqrt(pow(X1-X3,2)+pow(Y1-Y3,2));
	length3=sqrt(pow(X2-X3,2)+pow(Y2-Y3,2));
	while((length1>=length2+length3)||(length2>=length1+length3)||length3>=length1+length2)
	{
		printf("輸入的座標無法構成三角形，請重新輸入\n");
		scanf("%lf %lf\r%lf %lf\r%lf %lf", &X1, &Y1, &X2, &Y2, &X3, &Y3);
		length1=sqrt(pow(X1-X2,2)+pow(Y1-Y2,2));
		length2=sqrt(pow(X1-X3,2)+pow(Y1-Y3,2));
		length3=sqrt(pow(X2-X3,2)+pow(Y2-Y3,2));
	}
    //外心
	a1=2*(X2-X1);
	b1=2*(Y2-Y1);
	c1=X2*X2+Y2*Y2-X1*X1-Y1*Y1;
	a2=2*(X3-X2);
	b2=2*(Y3-Y2);
	c2=X3*X3+Y3*Y3-X2*X2-Y2*Y2;
	x4=(c1*b2-c2*b1)/(a1*b2-a2*b1);
	y4=(a1*c2-a2*c1)/(a1*b2-a2*b1);
    //重心
    x5 = (X1 + X2 + X3)/3;
    y5 = (Y1 + Y2 + Y3)/3;
    //內心
    A=length1;
    B=length2;
    C=length3;
    S=A+B+C; 
    x6=(A*X1+B*X2+C*X3)/S;
    y6=(A*Y1+B*Y2+C*Y3)/S;
    printf("重心座標:(%lf,%lf)\n",x5,y5);
    printf("內心座標:(%lf,%lf)\n",x6,y6);
	printf("外心座標:(%lf,%lf)\n",x4,y4);

}
