#include <stdio.h>

int main(void) {
    int i, x, sum = 0;

    printf("数字を1つ入力してください。");
    scanf("%d", &x);
    for (i = 1; i <= x; i++) {
        sum += i;
    }

    printf("1から%dまでの和 = %d", x, sum);

    return 0;
}
