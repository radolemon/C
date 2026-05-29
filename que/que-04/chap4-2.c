/*
    < 課題 (chap4-2.c) >
    １. 0を入力すると「グー」、1を入力すると「チョキ」,
        2を入力すると「パー」を表示し、「-1」を入力すると終了する
        プログラムを作成してください。

    ２．「グー」「チョキ」「パー」を選んだ回数が最後に
        表示されるように、プログラムに機能を追加してください。
*/

#include <stdio.h>

int main(void)
{
    int rps = 0;
    int r = 0, p = 0, s = 0;

    while (1)
    {
        printf("\n\nグー：0 チョキ：1 パー：2 終了：-1\n入力："); scanf("%d", &rps);

        if (rps == -1) break;

        switch (rps) {
            case 0:
                printf("\nグー");
                r += 1;
                continue;
            case 1:
                printf("\nチョキ");
                s += 1;
                continue;
            case 2:
                printf("\nパー");
                p += 1;
                continue;
        }
    }

    printf("グー： %d チョキ： %d パー： %d", r, s, p);
    return 0;
}
