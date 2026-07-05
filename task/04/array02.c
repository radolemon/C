#include <stdio.h>

int main(void) {
    int vc[5];

    for (int i = 0; i < 5; i++) {
        vc[i] = (i + 1) * 10;
        printf("vc[%d] = %d\n", i, vc[i]);
    }

    return 0;
}
