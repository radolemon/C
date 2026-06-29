#include <stdio.h>

int main(void) {
    int i, n;

    printf("整数値： ");
    scanf("%d", &n);
    
    printf("%dの約数 (割り切れる数)は {", n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d", i);

            if (i != n) printf(", ");
        }
    }

    printf("} \n");

    return 0;
}
