/*
    < 問題 >
    長方形の縦横の長さを実数で入力。

    ・縦のほうが長い
        「縦長の長方形です。」
    ・横のほうが長い
        「横長の長方形です。」
    と表示し、最後に
        「面積は○○です。」 (小数第２位まで)
    と表示するようにする。
*/

#include <stdio.h>

int main(void) {
    double w, h;

    printf("縦："); scanf("%lf", &h);
    printf("横："); scanf("%lf", &w);

    if (h > w) 
        printf("縦長の長方形です。\n");
    else
        printf("横長の長方形です。\n");

    printf("面積は%.2fです。", w * h);

    return 0;
}
