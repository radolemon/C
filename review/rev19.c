#include <stdio.h>
#define N 5

int main(void) {
    int a[N];
    int num;

    for (int i = 0; i < N; i++) {
        printf("a[%d]: ", i); scanf("%d", &num);
        a[i] = num;
    }

    puts("配列の値を表示します。");

    for (int i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
