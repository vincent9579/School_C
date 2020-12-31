#include <math.h>
#include <stdio.h>

int main() {
    long N;
    int i;
    int key =0;
    
    scanf("%ld", &N);
    if (N == 1) {       /*小於2的數非質數*/
        printf("No");
    } else {
        if (N <= 3) {       /* 2 和 3 為質數*/
            printf("Yes");
        } else {
            for (i=3; i <= N/2; i++) {
                if (N % i == 0) {
                    printf("No");
                    return 0;
                }
            }
            printf("Yes");
            return 1;
        }
    }
}
