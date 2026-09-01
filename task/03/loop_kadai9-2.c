#include <stdio.h>

int main(void) {
    int n, f = 1;

    printf("整数値： ");
    scanf("%d", &n);

    printf("%dの約数 (割り切れる数)は {1, ", n);
    f = 2;
    while (f <= n) {
        if (n % f == 0) {
            printf("%d", f);
            if (f != n) printf(", ");
        }

        f++;
    }

    printf("} \n");

    return 0;
}
