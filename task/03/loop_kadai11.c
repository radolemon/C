#include <stdio.h>

int main(void) {
    int sl, sel;

    printf("今の満腹度を入力してください。 ");
    scanf("%d", &sl);

    printf("あなたの満腹度は%dです。\n", sl);

    do {
        printf("食べるものを選んでください。(1: 大きいパン、2: 小さいパン、3: くさったパン) ");
        scanf("%d", &sel);

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

        if (sl <= 0) sl = 1;

        printf("満腹度が%dになりました。\n", sl);
    } while (sl <= 100);

    printf("もうおなかいっぱいです。");

    return 0;
}
