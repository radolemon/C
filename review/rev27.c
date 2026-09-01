#include <stdio.h>

int limit_num(int);

int main(void) {
    int limit;

    printf("制限値: "); scanf("%d", &limit);

    printf("%dまで足すと%dを超えます。", limit_num(limit), limit);

    return 0;
}

int limit_num(int n) {
    int sum = 0;
    int cnt = 0;

    while (1) {
        if (n < sum) break;

        cnt++;
        sum += cnt;
    }

    return cnt;
}
