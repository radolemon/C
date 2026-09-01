#include <stdio.h>

int main(void) {
    int cnt;

    printf("何個*を表示しますか："); scanf("%d", &cnt);

    for (int i = 1; i <= cnt; i++) {
        printf("*");

        if (i % 5 == 0) putchar('\n');
    }

    return 0;
}
