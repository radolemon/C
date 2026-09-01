#include <stdio.h>

int show_array(int []);

int main(void) {
    int a[3] = {10, 20, 30};

    show_array(a);

    return 0;
}

int show_array(int x[]) {
    int i;

    for (i = 0; i < 3; i++) {
        printf("x[%d] = %d\n", i, x[i]);
    }

    return 0;
}
