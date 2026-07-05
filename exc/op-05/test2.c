#include <stdio.h>

int main(void) {
    int a[5];

    for (int i = 0; i < 5; i++) {
        a[i] = (i * i) * 2;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", a[i]);
    }
}
