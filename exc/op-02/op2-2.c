/* 
    p27 演習2-2 (op2-2.c)
    商を実数で表示する機能を追加する
*/

#include <stdio.h>

int main(void) {
    int a, b;

    puts("二つの整数を入力せよ。");
    printf("整数 a："); scanf("%d", &a);
    printf("整数 b："); scanf("%d", &b);

    printf("それらの和は%dで積は%dで商は%fです。", a + b, a * b, (double)a / b);

    return 0;
}
