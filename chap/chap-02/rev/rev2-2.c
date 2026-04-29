#include <stdio.h>

int main(void) {
    int num;

    printf("整数を入力："); scanf("%d", &num);

    printf("2倍は%dです\n", num * 2);

    printf("2乗は%dです\n", num * num);

    return 0;
}
