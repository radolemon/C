#include <stdio.h>

int main(void) {
    int cost, count;

    puts("金額を計算します");

    printf("単価："); scanf("%d", &cost);
    printf("個数："); scanf("%d", &count);

    printf("税込み金額：%d", (int)((cost + (cost * 0.1)) * count));
}
