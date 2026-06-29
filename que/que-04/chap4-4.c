/*
    *   *
     * *
      *
     * *
    *   *
*/

#include <stdio.h>

int main(void) {
    int n;

    printf("n * n (n: 奇数): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == i || j == n + 1 - i)
                putchar('*');
            else
                putchar(' ');
        }

        putchar('\n');
    }

    return 0;
}
