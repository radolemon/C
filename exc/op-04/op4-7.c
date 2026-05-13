#include <stdio.h>

int main(void) {
    int num;

    printf("正の整数を入力せよ"); scanf("%d", &num);
    int cnt = 2;

    while (cnt < num) {
        printf("%d ", cnt);
        cnt *= 2;
    }

    printf("\n");
}
