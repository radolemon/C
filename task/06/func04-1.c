#include <stdio.h>

int comp1(double a, double b);

int main(void) {
    double x, y;

    printf("実数１："); scanf("%lf", &x);
    printf("実数２："); scanf("%lf", &y);

    switch (comp1(x, y)) {
        case 1: printf("実数１のほうが大きいです。\n"); break;
        case 0: printf("実数１と２は等しいです。"); break;
        case -1: printf("実数２のほうが大きいです。\n"); break;
    }

    return 0;
}

int comp1(double a, double b) {
    if (a > b) return 1;
    else if (a < b) return -1;
    else return 0;
}
