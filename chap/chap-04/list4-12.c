#include <stdio.h>

int main(void) {
    int no;

    printf("正の整数を入力せよ："); scanf("%d", &no);

    for (int i = no; i >= 0; i--) {
        printf("%d ", i);
    }

    putchar('\n');

    return 0;
}
