#include<stdio.h>
#include<math.h>

int main(){
    double x1, y1, x2, y2, x3, y3;
    double x12, y12, x13, y13, x12q, y12q, x13q, y13q;
    double a, b, xm, ym, R;
    scanf("%lf %lf\r%lf %lf\r%lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    x12 = x1 - x2; 
    x13 = x1 - x3;
    y12 = y1 - y2;
    y13 = y1 - y3;
    x12q = x1 * x1 - x2 * x2;
    x13q = x1 * x1 - x3 * x3;
    y12q = y1 * y1 - y2 * y2;
    y13q = y1 * y1 - y3 * y3;
    a = x12 / y12 - x13 / y13;
    b = (x12q + y12q) / (2.* y12) - (x13q + y13q) / (2.* y13);
    xm = b / a;
    ym = (-x12q + 2. * x12 * xm - y12q) / (-2. * y12);
    R = (x1 - xm) * (x1 - xm) + (y1 - ym) * (y1 - ym);
    R = sqrt(R);
    printf("¶ê¤ß:%.3lf %.3lf \n\n", xm, ym);
    printf("¥b®|:%.3lf \n", R);
}
