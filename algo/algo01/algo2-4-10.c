#include <stdio.h>

int main(void) {
    int num, cnt;

    scanf("%d", &num);

    cnt = num;

    while (cnt <= 9) {
        printf("%d×%d=%d\n", num, cnt, num * cnt);

        cnt ++;
    }

    return 0;
}
