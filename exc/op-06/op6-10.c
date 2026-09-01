#include <stdio.h>
#define N 5

void intary_rcpy(int v1[], const int v2[], int n) {
    for (int i = 0; i < n; i++) {
        v1[i] = v2[n - 1 - i];
    }
}

int main(void) {
    int ary[N];
    int copy[N];

    for (int i = 0; i < N; i++) {
        ary[i] = i + 1;
    }

    intary_rcpy(copy, ary, N);

    for (int i = 0; i < N; i++) {
        printf("反転した値： %d\n", copy[i]);
    }

    return 0;
}
