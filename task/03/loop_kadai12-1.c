#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int sl, sel, tmp, r, prob, bread, first = 0, item = 0;

    srand((unsigned int) time(NULL));

    while (1) {
        if (item == 0) {
            printf("今の満腹度を入力してください。 ");
            scanf("%d", &sl);
            printf("あなたの満腹度は%dです。\n", sl);
            if (sl > 0 && sl < 100) {
                item = 1;
            } else 
                puts("1 ~ 99までの数字を入力してください。");
        }

        if (item == 1) {
            bread = rand() % 3;

            switch (bread) {
                case 0: printf("大きいパン"); break;
                case 1: printf("小さいパン"); break;
                case 2: printf("腐ったパン"); break;
            }

            printf("食べますか？ (1: Yes 2: No) ");
            scanf("%d", &sel);

            switch (sel) {
                case 1: item = 2; break;
                case 2: 
                    tmp = 3 + rand() % 5 + 1;
                    sl -= tmp;
                    
                    printf("満腹度は%dになりました。", sl);
            }

            if (sl <= 0 || sl >= 100) break;
            
            item = 2;
        }

        if (item == 2) {
            prob = rand() % 100;

            switch (bread) {
                case 0:
                    if (prob <= 30) {
                        r = 40 + rand() % 9 + 1;
                        sl += r;

                        if (sl <= 0 || sl >= 100) break;

                        printf("かなりお腹にたまりました！");
                        printf("満腹度が%dになりました。", sl);

                        break;
                    } else {
                        r = 20 + rand() % 9 + 1;
                        sl -= r;
                    
                        if (sl <= 0 || sl >= 100) break;

                        printf("パンが腐っていました！\n");
                        printf("おなかを下して満腹度が%dになりました。\n", sl);

                        break;
                    }

                case 1:
                    if (prob <= 70) {
                        r = 20 + rand() % 9 + 1;
                        sl += r;

                        if (sl <= 0 || sl >= 100) break;

                        printf("かなりお腹にたまりました！");
                        printf("満腹度が%dになりました。", sl);

                        break;
                    } else {
                        r = 10 + rand() % 9 + 1;
                        sl -= r;
                    
                        if (sl <= 0 || sl >= 100) break;

                        printf("パンが腐っていました！\n");
                        printf("おなかを下して満腹度が%dになりました。\n", sl);

                        break;
                    }

                case 3:
                    r = 10 + rand() % 9 + 1;
                    sl -= r;

                    if (sl <= 0 || sl >= 100) break;

                    printf("パンが腐っていました！\n");
                    printf("おなかを下して満腹度が%dになりました。\n", sl);

                    break;
            }

            item = 3;
        }

        if (item == 3) {
            printf("まだ食べますか？ (1: はい, 2:いいえ) ");
            scanf("%d", &sel);
            if (sel >= 1 && sel <= 2) {
                switch (sel) {
                    case 1: item = 1; break;
                    case 2: return 0;
                }
            } else
                puts("1か2を入力してください。");
        }
    }
    
    if (sl >= 100) {
        printf("満腹度が%dになりました。\n", sl);
        puts("もうおなかいっぱいです。");
    } else {
        sl = 0;
        printf("おなかを下して満腹度が%dになりました。\n", sl);
        puts("あなたはもう動けません。");
    }

    return 0;
}
