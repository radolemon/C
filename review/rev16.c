#include <stdio.h>

int main(void) {
    int num;
    int sum = 0, cnt = 0;

    printf("正の整数を入力: ");
    scanf("%d", &num);

    while (1) {
        if (num < sum) break;

        cnt++;

        sum+=cnt;
    }

    printf("%dで%dを超えました（合計 %d）", cnt, num, sum);

    return 0;
}
