/*
    < 問題 >
    縦10cm、横20cmの長方形の面積を計算し、
    その後で縦の長さを30cmに変更してもう一度
    面積を表示してください。
*/

#include <stdio.h>

int main(void) {
    int height = 10;
    int width = 20;

    printf("面積：%d\n", height * width);
    
    height = 30;

    printf("面積：%d", height * width);

    return 0;
}
