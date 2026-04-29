#include <stdio.h>

int main(void) {
    int x, y;

    puts("二つの整数を入力せよ。");
    printf("整数x："); scanf("%d", &x);
    printf("整数y："); scanf("%d", &y);

    printf("xの値はyの値の%d％です。", (int)(((double)x / y) * 100)); // x * 100 / yで求めることができる

    return 0;
}
