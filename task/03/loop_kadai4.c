#include <stdio.h>

int main(void) {
    int t = 0, f = 0, tmp = 0;

    while (1) {
        printf("投票してください (賛成：1、反対:0) :");
        scanf("%d", &tmp);

        if (tmp == -1) break;

        switch (tmp) {
            case 0: f++; puts("反対ですね"); break;
            case 1: t++; puts("賛成ですね"); break;
            default: continue;
        }
    }

    printf("結果は「賛成 %d 票、反対 %d 票」でした。\n", t, f);

    if (t > f) 
        puts("本件は可決されました。");
    else if (t < f)
        puts("本件は否決されました。");
    else 
        puts("本件は再投票されます。");
}
