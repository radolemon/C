#include <stdio.h>

int main(void) {
    int cnt = 1;

    while (cnt <= 3) {
        printf("羊が%d匹\n", cnt);

        cnt ++;
    }

    puts("・・・おやすみなさい");

    return 0;
}
