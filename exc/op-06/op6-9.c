#include <stdio.h>

void rev_intary(int v[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int tmp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = tmp;
    }
}

int main(void) {
    int a[5] = {10, 20, 30, 40, 50};

    rev_intary(a, 5);

    puts("配列aの値を表示します。");
    for (int i = 0; i < 5; i++)
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}
