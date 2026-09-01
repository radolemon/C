#include <stdio.h>

void maxmin2(int a, int b, int n) {
    int max, min;

    if (a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }

    switch (n) {
        case 1:
            printf("最大値は%dです。\n", max);
            break;
        case -1:
            printf("最小値は%dです。\n", min);
            break;
        default:
            puts("<!> nの値が正しくありません。");
            break;
    }
}

int main(void) {
    int n1, n2, sel;

    puts("二つの整数を入力せよ。");
    printf("整数１："); scanf("%d", &n1);
    printf("整数２："); scanf("%d", &n2);
    printf("選択（最大値：1 / 最小値：-1）："); scanf("%d", &sel);

    maxmin2(n1, n2, sel);

    return 0;
}
