#include <stdio.h>

int main(void) {
    int len;

    puts("二等辺三角形を作ります。");
    printf("何段ですか： ");
    scanf("%d", &len);

    for (int y = 1; y <= len; y++) {
        for (int x = 0; x <= len - y; x++) {
            putchar('*');
        }

        for (int x = 1; x <= y; x++) {
            putchar(' ');
        }

        putchar('\n');
    }

    return 0;
}
