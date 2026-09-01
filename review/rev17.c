#include <stdio.h>

int main(void) {
    int n1, n2;

    printf("横幅: "); scanf("%d", &n1);
    printf("個数: "); scanf("%d", &n2);

    for (int i = 1; i <= n2; i++) {
        for (int j = 1; j <= n1; j++) {
            printf("*");
        }

        printf(" ");
    }

    return 0;
}
