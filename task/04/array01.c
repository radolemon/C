#include <stdio.h>

int main(void) {
    int data[6] = {1, 3, 5, 7, 9, 11};

    for (int i = 0; i < 6; i++) {
        printf("%d ", data[i]);
    }
    putchar('\n');

    return 0;
}
