#include <stdio.h>

int main(void) {

    char a[20];
    int i;
    fgets(a, 20, stdin);
    for (i = 0; i < 20; i++) {
        if (a[i] < 123 && a[i] > 96) 
            printf("%c", a[i] - 32);
        else if (a[i] < 91 && a[i] > 64)
            printf("%c", a[i]);
        else if(a[i] < 58 && a[i] > 47)
            printf("0");
    }
    return 0;
}
