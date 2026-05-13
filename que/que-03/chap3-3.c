/*
    < 問題 >
    整数1つ入力する。
    その整数が
    ・3でも5でも割り切れる
        「3でも5でも割り切れます。」
    ・3で割り切れるが5では割り切れない
        「3で割り切れます。5では割り切れません。」
    ・3で割り切れない
        「3で割り切れません。」
    と表示させてみよう。
*/

#include <stdio.h>

int main(void) {
    int integer;
    char test = "aaaa";

    printf("整数を入力：");  scanf("%d", &integer);

    if (integer % 3 == 0) {
        if (integer % 5 == 0) {
            puts("3でも5でも割り切れます。");
            return 0;
        }

        puts("3で割り切れます。");
        puts("5では割り切れません。");
    } else
        puts("3で割り切れません。");

    return 0;
}
