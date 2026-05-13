#include <stdio.h>

int main(void) {
    int point;

    printf("テストの点数を入力してください。"); scanf("%d", &point);

    if (point >= 0 && point <= 100) {
        if (point <= 60) {
            puts("あなたの成績はDです。");
        } else if (point <= 70) {
            puts("あなたの成績はCです。");
        } else if (point <= 80) {
            puts("あなたの成績はBです。");
        } else
            puts("あなたの成績はAです。");
    } else 
        puts("判定不能");
}
