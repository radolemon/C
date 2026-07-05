#include <stdio.h>

int comp3(void);

int main(void) {
    switch (comp3()) {
        case 1: printf("実数１のほうが大きいです。\n"); break;
        case 0: printf("実数１と２は等しいです。");
        case -1: printf("実数２のほうが大きいです。\n");
    }
}

int comp3(void) {
    double x, y;

    printf("実数１："); scanf("%lf", &x);
    printf("実数２："); scanf("%lf", &y);

    if (x > y) return 1;
    else if (x < y) return -1;
    else return 0;
}
