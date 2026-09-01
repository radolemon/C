#include <stdio.h>

#define N 10

int main(void) {
    double tmp, vx[N];

    printf("実数値を入力：");
    scanf("%lf", &tmp);

    for (int i = 0; i < N; i++) {
        vx[i] = tmp;

        printf("vx[%d] = %0.2f\n", i, vx[i]);
    }

    return 0;
}
