#include <stdio.h>

double power(int y, double x) {
    double n3 = 1;

    for (int i = 1; i <= y; i++) {
        n3 = n3 * x;
    }

    return n3;
}



int main(void) {
    double a;
    int m;

    printf("実数a: "); scanf("%lf", &a);
    printf("正の整数m: "); scanf("%d", &m);

    printf("%.2f の %d 乗 = %.2f", a, m, power(m, a));

    return 0;
}
