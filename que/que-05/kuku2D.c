/*
    P102 List4-18を参考にして、
    計算した九九の数を二次元配列の
    各要素に大入試、それを出力する
    ようにしてみよう
*/

#include <stdio.h>

int main(void) {
    int mul[9][9] = {0};

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            mul[i - 1][j - 1] = i * j;
        }
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%3d", mul[i][j]);
        }

        putchar('\n');
    }

    return 0;
}
