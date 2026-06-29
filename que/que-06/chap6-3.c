#include <stdio.h>

double absolute(double n1, double n2) {
    double absolute = 0;

    if (n1 >= n2) absolute = n1 - n2;
    else absolute = n2 - n1;

    return absolute;
}

int main(void) {
    double a, b;

    puts("二つの実数を入力。");
    printf("実数a："); scanf("%lf", &a);
    printf("実数b："); scanf("%lf", &b);

    printf("その差の絶対値は%.1fです。", absolute(a, b));

    return 0;
}
