#include <stdio.h>

int main()
{   
    float x,y;
    int i;
    scanf("%f %d",&x,&i);
    if(i == 2)
    {
        y=(x-70)*0.6;
        printf("%.1f\n",y);
    }
    if(i == 1)
    {
        y=(x-80)*0.7;
        printf("%.1f\n",y);
    }
}
