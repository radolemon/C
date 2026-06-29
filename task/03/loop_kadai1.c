#include <stdio.h>

int main(void) {
    double box;

    while (1) {
        printf("宝箱が3つある。どれを開けますか？ (1 or 2 or 3): ");
        scanf("%lf", &box);
        if (box >= 1 && box <= 3)
            break;
    }

    if (box == 1) {
        puts("宝箱は罠だった！眠りガラスが噴出した！");
    } else if (box == 2) {
        puts("宝箱には10000Gが入っていた！");
    } else {
        puts("宝箱は罠だった！毒ガスが噴出した！");
    }

    return 0;
}
