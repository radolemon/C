#include <stdio.h>
#define N 5

double min_of(const double []);

int main(void) {
    double vz[N];

    for (int i = 0; i < N; i++) {
        printf("vz[%d] = ", i); scanf("%lf", &vz[i]);
    }

    printf("最小値は%.2fです。", min_of(vz));

    return 0;
}

double min_of(const double vz[]) {
    double min = vz[0];

    for (int i = 1; i < N; i++) {
        if (min > vz[i]) min = vz[i];
    }

    return min;
}
