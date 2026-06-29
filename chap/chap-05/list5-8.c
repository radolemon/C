#include <stdio.h>

#define N 7

int main(void) {
    int x[N];

    for (int i = 0; i < N; i++) {
        printf("x[%d]：", i);
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < N / 2; i++) {
        int tmp = x[i];
        x[i] = x[(N - 1)- i];
        x[(N - 1) - i] = tmp;
    }

    puts("反転しました。");
    for (int i = 0; i < N; i++) {
        printf("x[%d] = %d\n", i, x[i]);
    }

    return 0;
}
