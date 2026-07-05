#include <stdio.h>

int main(void) {
    int tgt, amt = 0, tmp = 1;

    printf("目標金額は？ "); scanf("%d", &tgt);

    for (int i = 0; tgt >= amt; i++) {
        if (i %  3 == 0) continue;
        amt += tmp;

        printf("%2d日目までの合計金額 %8d 円\n", i, amt);

        tmp *= 2;
    }

    return 0;
}
