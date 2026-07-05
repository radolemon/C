#include <stdio.h>

int sumup(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum+=i;
    }

    return sum;
}

int main(void) {
    int n;

    printf("整数："); scanf("%d", &n);
    printf("1なら%dまでの全整数の和は%dです。\n", n, sumup(n));

    return 0;
}
