#include <stdio.h>

double diff(double x, double y) {
    double z;
    z = x -y;

    return z;
}

int main(void) {
    double a, b, c;

    printf("実数１："); scanf("%lf", &a);
    printf("実数２："); scanf("%lf", &b);

    c = diff(a, b);

    printf("%f - %f = %f\n", a, b, c);

    return 0;
}
