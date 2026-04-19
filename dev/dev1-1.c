/*
    < 発展 > chap1-3.c
    商品の値段を入力してください： ( 入力 )
    いくら払いますか？： ( 入力 )

    (1) お釣りは○○円です。
    (2) 1000円札は△枚になります。
    と表示させる
*/

#include <stdio.h>

int main(void) {
    int cost, amount, change;

    printf("商品の値段を入力してください："); scanf("%d", &cost);
    printf("いくら支払いますか？："); scanf("%d", &amount);

    change = amount - cost;

    printf("お釣りは%d円です。\n", change);
    printf("1000円札は%d枚になります。", ((change % 10000) % 5000 ) / 1000);
        /*
            cost = 22500, amount = 100000だったらchange = 77500になる

            自販機などでは77500だったら7枚の万札と1枚の5千円札と2000円になるから
            ((change % 10000) % 5000) / 1000でお釣りになった時の1000札のみを出せる
        */
}
