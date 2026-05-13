#include <stdio.h>

int main(void) {
    int num;

    printf("整数を入力："); scanf("%d", &num);

    switch (num % 5) {
        case 0:
            puts("S");
            break;
        case 1:
            puts("A");
            break;
        case 2:
            puts("B");
            break;
        case 3:
            puts("C");
            break;
        case 4:
            puts("D");
            break;
    }
}
