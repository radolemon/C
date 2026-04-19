/*
    < 問題 >
    「10/3=3余り1です。」
    と表示するプログラムを作ってください。
*/
#include <stdio.h>

int main(void) {
    printf("%d/%d=%d余り%dです。\n", 10, 3, 10/3, 10%3);

    return 0;
}
