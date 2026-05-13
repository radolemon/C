#include <stdio.h>

int main(void) {
    int x, n, y, z;
    x = 15000;

    printf("メニューを選択してください。[1:お預け]、[2:引き出し]、[3:残高照会]"); scanf("%d", &n);

    if (n == 1) {
        printf("いくら預けますか？："); scanf("%d", &y);
        
        if (x - y <= 0) {
            puts("エラーです!");
        } else {
            printf("残高：%d", x - y);
        }
    } else if (n == 2) {
        printf("いくら引き出しますか？："); scanf("%d", &z);

        if (x - z <= 0) {
            puts("エラーです!");
        } else {
            printf("残高：%d", x - z);
        }
    } else if (n == 3) {
        printf("残高は%dです。", x);
    } else {
        puts("エラーです！");
    }

    return 0;
}
