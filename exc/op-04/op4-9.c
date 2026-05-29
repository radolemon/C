#include <stdio.h>

int main(void) {
    int num, cnt = 0;

    printf("正の整数："); scanf("%d", &num);

    while (1) {
        cnt ++;
        
        if (num <= 0 || cnt > num) return 0;

        if (cnt % 2 == 0) {
            printf("-");
            continue;
        }

        printf("+");
    }

    return 0;
}
