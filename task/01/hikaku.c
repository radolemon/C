#include <stdio.h>

int main(void) {
    int a, b;

    printf("データを２つの入力してください。"); scanf("%d%d", &a, &b);

    if (a > b) 
        printf("%dが%dより大きいです。", a, b);
    else if (a < b)
        printf("%dが%dより大きいです。", b, a);
    else
        printf("どちらも同じ数です。");

    return 0;
}
