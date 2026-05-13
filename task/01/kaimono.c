#include <stdio.h>

int main(void) {
    int money, cost, count;

    printf("手持ちの金額："); scanf("%d", &money);
    printf("単価："); scanf("%d", &cost);
    printf("個数："); scanf("%d", &count);

    if (money >= cost * count) {
        printf("買えます。お釣りは%d円です。", money - cost * count);
    } else {
        printf("買えません。%d個までなら買えます。", money / cost);
    }
}
