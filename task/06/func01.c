#include <stdio.h>

int sum(int x, int y) {
    int z;
    z = x + y;

    return z;
}

int main(void) {
    int a = 10, b = 20;
    printf("%d + %d = %d\n", a, b, sum(a, b));

    return 0;
}
