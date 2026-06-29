#include <stdio.h>

int main(void) {
    int cost[6] = {120, 150, 130, 190, 210, 100}, vol[6] = {13, 24, 11, 20, 18, 16}, sel;

    printf("商品番号を入力：");
    scanf("%d", &sel);

    printf("商品番号は[%d]の売り上げ：%d", sel, cost[sel - 1] * vol[sel - 1]);

    return 0;
}
