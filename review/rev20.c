#include <stdio.h>
#define N 5

int main(void) {
    int a[N];
    int b[N];
    int num;
    int tmp;

    for (int i = 0; i < N; i++) {
        printf("a[%d]: ", i); scanf("%d", &num);
        a[i] = num;
    }

    for (int i = 0; i < N / 2; i++) {
        int tmp = a[i];
        a[i] = a[(N - 1)- i];
        a[(N - 1) - i] = tmp;
    }

    puts("配列の値を表示します。");

    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
