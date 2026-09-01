#include <stdio.h>

int main(void) {
    int num;

    printf("入力値: "); scanf("%d", &num);

    if (num < -10) puts("ランク0");
    else if (num >= -10 && num < 10) puts("ランク1");
    else puts("ランク2");

    return 0;
}
