#include <stdio.h>

double diff(double x, double y) {
    double z;
    z = x - y;

    return z;
}

int main(void) {
    double a = 1.5, b = 2.0, c;

    c = diff(a, b);
    printf("%f - %f = %f\n", a, b, c);

    return 0;
}
