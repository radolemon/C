#include <stdio.h>

int main(void) {
    int h;
    double w;

    printf("身長を入力せよ："); scanf("%d", &h);

    w = (h - 100) * 0.9;

    printf("標準体重は%.1fです。", w);

    return 0;
    
}
