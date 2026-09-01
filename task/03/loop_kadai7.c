#include <stdio.h>

int main(void) {
    int i, x, sum = 0;

    while (1) {
        printf("数字を1つ入力してください。");
        scanf("%d", &x);
        if (x > 0) break;
        printf("1以上の数字を入力してください。\n");
    }

    for (i = 1; i <= x; i++) {
        sum += i;
    }

    printf("1から%dまでの和 = %d", x, sum);

    return 0;
}
