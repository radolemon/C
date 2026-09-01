#include <stdio.h>

int main(void) {
    int num[5];

    for (int i = 0; i < 5; i++) {
        num[i] = 5 - i;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", num[i]);
    }
}
