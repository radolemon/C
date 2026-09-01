#include <stdio.h>

int main(void) {
    int len;

    puts("正方形を作ります。");
    printf("何段ですか： ");
    scanf("%d", &len);

    for (int y = 1; y <= len; y++) {
        for (int x = 1; x <= len; x++) {
            putchar('*');
        }

        putchar('\n');
    }

    return 0;
}
