#include <stdio.h>

int main(void) {
    double num;

    printf("実数を入力："); scanf("%lf", &num);

    printf("その1.1倍は%fです", num * 1.1);

    return 0;
}
