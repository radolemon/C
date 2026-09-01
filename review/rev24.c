#include <stdio.h>

int comp(double num1, double num2) {
    if (num1 > num2) {
        return 1;
    } else if (num1 < num2) {
        return -1;
    } else {
        return 0;
    }
}

int main(void) {
    double a, b;

    printf("実数１: "); scanf("%lf", &a);
    printf("実数２: "); scanf("%lf", &b);

    switch (comp(a, b)) {
        case -1:
            puts("実数２のほうが大きいです。");
            break;
        case 0:
            puts("実数１と２は等しいです。");
            break;
        case 1:
            puts("実数１のほうが大きいです。");
            break;
    }

    return 0;
}
