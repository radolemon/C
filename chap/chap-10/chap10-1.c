#include <stdio.h>

int main(void) {
    int a;
    int *P;

    a = 10;
    P = &a;

    printf("aの値: %d\n", a);
    printf("pの値: %p\n", P);

    *P = 100;

    printf("aの値: %d\n", a);

    return 0;
}
