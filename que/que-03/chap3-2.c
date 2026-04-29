#include <stdio.h>

int main(void) {
    int cost, que;
    double total;

    printf("商品の金額を入力："); scanf("%d", &cost);
    printf("食品ですか？(Yes: 1, No: 2)："); scanf("%d", &que);

    if (que == 1) {
        total = cost + (cost * 0.08);
        printf("税込み金額：%d", (int)total);
    } else if (que == 2) {
        total = cost + (cost * 0.1);
        printf("税込み金額：%d", (int)total);
    } else 
        puts("無効な入力です");

    return 0;
}
