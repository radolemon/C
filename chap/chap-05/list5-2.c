#include <stdio.h>

int main(void) {
    int num[5];

    for (int i = 0; i < 5; i++) {
        num[i] = i + 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("num[%d] = %d\n", i, num[i]);
    }

    return 0;
}
