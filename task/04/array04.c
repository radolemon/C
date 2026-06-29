#include <stdio.h>

#define N 4

int main(void) {
    double vz[N];

    for (int i = 0; i < N; i++) {
        printf("vz[%d] = ", i);
        scanf("%lf", &vz[i]);
    }

    puts("読み込んだ配列の値を表示します。");

    for (int i = 0; i < N; i++) {
        printf("vz[%d] = %5.2f\n", i, vz[i]);
    }

    return 0;
}
