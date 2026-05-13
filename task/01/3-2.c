#include <stdio.h>

int main(void) {
    int money, cost, count, amt;
    double disc;

    printf("手持ちの金額："); scanf("%d", &money);
    printf("単価："); scanf("%d", &cost);
    printf("個数："); scanf("%d", &count);

    if (count >= 21) {
        disc = 0.8;
        cost = cost - (cost * disc);
        amt = count * cost;
    } else if (count >= 11) {
        disc = 0.9;
        cost = cost - (cost * disc);
        amt = count * cost;
    } else if (count >= 6) {
        disc = 0.95;
        cost = cost - (cost * disc);
        amt = count * cost;
    } else {
        amt = count * cost;
    }
    
    if (money >= amt) {
        printf("単価が%d％オフになります。\n", (int)(100 - disc * 100));
        printf("買えます。お釣りは%d円です。", money - amt);
    } else {
        printf("買えません。%d個までなら買えます。", money / cost);
    }

    return 0;
}
