/*
    練習3 (chap6-6.c)
        int型配列の平均値を返す
        関数 a_ave を設計し、
        main関数内で平均値を表示してください。
*/

#include <stdio.h>
#define NUMBER 5

int a_ave(int array[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += array[i];
    }

    return sum / n;
}

int main(void) {
    int a[NUMBER] = {30, 40, 50, 10, 20};

    printf("平均値は%dです。", a_ave(a, NUMBER));

    return 0;
}
