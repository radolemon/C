#include <stdio.h>

int main(void) {
    int sl, sel;

    printf("今の満腹度を入力してください。 ");
    scanf("%d", &sl);

    printf("あなたの満腹度は%dです。\n", sl);

    do {
        while (1) {
            printf("食べるものを選んでください。(1: 大きいパン、2: 小さいパン、3: くさったパン) ");
            scanf("%d", &sel);

            if (sel >= 1 && sel <= 3) break;

            puts("error> 不明な値です");
        }

        switch (sel) {
            case 1:
                sl = sl + 50;
                break;
            case 2:
                sl = sl + 20;
                break;
            case 3:
                sl = sl - 30;
                break;
        }

        if (sl <= 0) {
            sl = 0;
            printf("おなかを下して満腹度が%dになりました。\n", sl);
            puts("あなたはもう動けません。");

            return 0;
        }

        printf("満腹度が%dになりました。", sl);

        if (sl >= 100) break;

        while (1) {
            printf("まだ食べますか？ (1: はい, 2:いいえ) ");
            scanf("%d", &sel);

            if (sel >= 1 && sel <= 2) break;

            puts("error> 不明な値です");
        }

        switch (sel) {
            case 1: continue;
            case 2: return 0;
        }
    } while (sl <= 100);

    puts("\nもうおなかいっぱいです。");

    return 0;
}
