#include <stdio.h>
#define N 5

void fill(int, int []);

int main(void) {
    int n;
    int xc[N];

    printf("配列に設定する値 = ");
    scanf("%d", &n);

    fill(n, xc);

    for (int i = 0; i < N; i++) {
        printf("xc[%d]=%d\n", i, xc[i]);
    }

    return 0;
}

void fill(int input,int array[]) {
    for (int i = 0; i < N; i++) {
        array[i] = input;
    }
}

