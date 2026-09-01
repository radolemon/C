#include <stdio.h>

#define N 5

int main(void) {
    int score[N];
    int sum = 0;

    printf("%d人の点数を入力せよ。\n", N);
    for (int i = 0; i < N; i++) {
        printf("%2d番：", i + 1);
        scanf("%d", &score[i]);
        sum += score[i];
    }

    printf("合計点：%5d\n", sum);
    printf("平均点：%5.1f\n", (double)sum / N);

    return 0;
}