/*
    < 問題 >
    半径と高さを入力し、
    「半径〇、高さ□の円錐の体積は△△です。」と表示する
    小数点２桁で表示
*/

#include <stdio.h>

int main(void) {
    double r, h, pi, v;

    pi = 3.14;

    printf("半径ｒ："); scanf("%lf", &r);
    printf("高さｈ："); scanf("%lf", &h);

    v = r * r * pi * h / 3;

    printf("半径%f、高さ%fの円錐の体積は%.2fです。", r, h, v);
}
