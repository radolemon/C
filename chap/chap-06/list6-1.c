#include <stdio.h>

int max2(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int max3(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    return max;
}

int maxmin2(int a, int b, int n) {
    int ret;

    switch (n) {
        case 1:
            if (a > b) ret = a;
            else ret = b;
            break;
        case -1:
            if (a < b) ret = a;
            else ret = b;
            break;
        default:
            puts("<!> nの値が正しくありません。");
            ret = -1;
            break;
    }

    return ret;
}

int main(void) {
    int n1, n2, n3;

    puts("二つの整数を入力せよ。");
    printf("整数１："); scanf("%d", &n1);
    printf("整数２："); scanf("%d", &n2);
    printf("1 or -1："); scanf("%d", &n3);

    printf("大きいほうの値は%dです。\n", maxmin2(n1, n2, n3));

    return 0;
}
