/*
    [Special] rev2-7.c

    1.  毎月一万円ずつ銀行に貯金することを
        考えます。
        年利率が1%だった時に5年間積み立てていると。
        合計いくらになるのかを求めるプログラムを作成して
        ください。

    2.  ・貯金する金額
        ・貯金する期間
        ・年利率
        をそれぞれ入力できるようにしてみましょう。
*/

#include <stdio.h>

int main(void) {
    double savings, years, apr, aap, total = 0;

    printf("貯金する金額 (月)："); scanf("%lf", &savings);
    printf("貯金する期間 (年)："); scanf("%lf", &years);
    printf("年利率 (％)："); scanf("%lf", &apr);

    apr = apr / 100;
    aap = savings * 12;

    total = (savings * 12 * years) * (1 + (apr / 100) * (years + 1) / 2);

    printf("合計：%d", (int)total);
}
