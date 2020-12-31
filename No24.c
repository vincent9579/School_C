#include <stdio.h>
#include <math.h>
#define MAXSIZE 30
 
int main()
{
    float x[MAXSIZE];
    int  i, n;
    float average, variance, sum = 0, sum1 = 0;

    printf("輸入 N ( 1 ? N ? 30)\n");
    scanf("%d", &n);
    printf("輸入 %d 個整數 \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    average = sum / (float)n;
    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + pow((x[i] - average), 2);
    }
    variance = sum1 / (float)n;
    printf("變異數為:%.2f\n", variance);

}
