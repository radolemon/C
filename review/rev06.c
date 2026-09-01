#include <stdio.h>

int main(void) {
    double n1, n2;

    printf("実数１ = "); scanf("%lf", &n1);
    printf("実数２ = "); scanf("%lf", &n2);

    printf("平均は%.2fです。", (n1 + n2) / 2);

    return 0;
}
