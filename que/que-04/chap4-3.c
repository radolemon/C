/*
    +-+-+
    -+-+-
    +-+-+
*/

#include <stdio.h>

int main(void) {
    int x, y;

    printf("行数： ");
    scanf("%d", &y);

    printf("文字数： ");
    scanf("%d", &x);

    for (int i = 1; i <= y; i++) {
        for (int j = 1; j <= x; j++) {
            if (i % 2) {
                if (j % 2) {
                    putchar('+');
                } else {
                    putchar('-');
                }
            } else {
                if (j % 2) {
                    putchar('-');
                } else {
                    putchar('+');
                }
            }
        }

        putchar('\n');
    }

    return 0;
}
