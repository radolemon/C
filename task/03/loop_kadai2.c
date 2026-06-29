#include <stdio.h>

int main(void) {
    int price, sum = 0;

    do {
        printf("商品の金額を入力： ");
        scanf("%d", &price);

        price = price * 1.1;
        sum += price;
    } while (price != -1);

    printf("合計金額は10％税込みで%d円です。\n", sum + 1);

    return 0;
}
