/*
    練習１(chap6-4.c)
        int a[5] = {30, 40, 50, 10, 20};
        の最小値を求め、その添え字を返す関数
        int min_of(int v[], int n);
        を設計してください。

        <実行結果>
        最小値の添字は[ ]です。
*/

#include <stdio.h>
#define NUMBER 5

int min_of(int v[], int n) {
    int min = v[0];
    int idx = 0;

    for (int i = 1; i < n; i++)
        if (v[i] < min) {
            min = v[i];
            idx = i;
        }

    return idx;
}

int main(void) {
    int a[NUMBER] = {30, 40, 50, 10, 20};
    int min = min_of(a, NUMBER);

    printf("最小値の添字は[%d]です。", min);

    return 0;
}
