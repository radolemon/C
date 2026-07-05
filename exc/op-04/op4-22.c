#include <stdio.h>

int main(void) {
    int x, y, tmp1, tmp2;

    puts("横長の長方形を作ります。");
    printf("一辺 (その１)"); scanf("%d", &tmp1);
    printf("一辺 (その２)"); scanf("%d", &tmp2);

    if (tmp1 < tmp2) {
        y = tmp1;
        x = tmp2;
    } else {
        y = tmp2;
        x = tmp1;
    }

    for (int i = 1; i <= y; i++) {
        for (int j = 1; j <= x; j++) {
            putchar('*');
        }

        putchar('\n');
    }

    return 0;
}
