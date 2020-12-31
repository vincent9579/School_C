#include <stdio.h>

int main(void) {
    
    char a[5];
    fgets(a, 5, stdin);
    int i;
    for (i=0;i<4;i++) {
        switch (a[i])
        {
        case '1':
            printf("7");
            break;
        case '2':
            printf("4");
            break;
        case '3':
            printf("1");
            break;
        case '4':
            printf("8");
            break;
        case '5':
            printf("5");
            break;
        case '6':
            printf("2");
            break;
        case '7':
            printf("9");
            break;
        case '8':
            printf("6");
            break;
        case '9':
            printf("3");
            break;
        case '0':
            printf("0");
            break;
        default:
            break;
        }
    }
    return 0;
}
