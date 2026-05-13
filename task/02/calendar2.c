#include <stdio.h>

int main(void) {
    int AD, test;

    printf("西暦を入力："); scanf("%d", &test);

    AD = test - 1582;

    switch (AD % 4) {
        case 0:
            if (AD % 100 == 1 || AD % 400 == 0) {
                printf("%dはうるう年です。");
                break;
            }
        case 1:
            printf("%dはうるう年ではありません。");
            break;
    }

    return 0;
}
