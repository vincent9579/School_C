#include<stdio.h>

int main(){
    int num;
    double Summer,Non_Summer;
    scanf("%d",&num);
    switch(num){
        default:
        {
            Summer = (num - 700) * 5.63 + 200 * 4.97 + 170 * 4.39 + 210 * 3.02 + 120 * 2.10;
            Non_Summer = (num - 700) * 4.50 + 200 * 4.01 + 170 * 3.61 + 210 * 2.68 + 120 * 2.10;
            printf("Summer months:%.2lf\n",Summer);
            printf("Non-Summer months:%.2lf",Non_Summer);
        }
        case 0 ... 120:
            Summer = num * 2.10;
            Non_Summer = num * 2.10;
            printf("Summer months:%.2lf\n",Summer);
            printf("Non-Summer months:%.2lf",Non_Summer);
        case 121 ... 330:
            Summer = (num - 120) * 3.02 + 120 * 2.10;
            Non_Summer = (num - 120)  * 2.68 + 120 * 2.10;
            printf("Summer months:%.2lf\n",Summer);
            printf("Non-Summer months:%.2lf",Non_Summer);
        case 331 ... 500:
            Summer = (num - 330) * 4.39 + 210 * 3.02 + 120 * 2.10;
            Non_Summer = (num - 330) * 3.61 + 210 * 2.68 + 120 * 2.10;
            printf("Summer months:%.2lf\n",Summer);
            printf("Non-Summer months:%.2lf",Non_Summer);
        case 501 ... 700:
            Summer = (num - 500) * 4.97 + 170 * 4.39 + 210 * 3.02 + 120 * 2.10;
            Non_Summer = (num - 500) * 4.01 + 170 * 3.61 + 210 * 2.68 + 120 * 2.10;
            printf("Summer months:%.2lf\n",Summer);
            printf("Non-Summer months:%.2lf",Non_Summer);
    }
}
