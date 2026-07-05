#include <stdio.h>

void comp2(double x, double y) {
    if (x > y) printf("実数１のほうが大きいです。\n");
    else if (x > y) printf("実数２のほうが大きいです。\n");
    else printf("実数１と２は等しいです。");
}

int main(void) {
    double x, y;

    printf("実数１："); scanf("%lf", &x);
    printf("実数２："); scanf("%lf", &y);

    comp2(x, y);

    return 0;
}
