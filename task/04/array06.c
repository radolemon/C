#include <stdio.h>

int main(void) {
    int i;
    int va[5] = {8, 3,5, 1, 9}, vb[5];

    for (i = 0; i < 5; i++) {
        vb[i] = va[i];
    }

    puts("コピーした配列の値を表示します。");
    for(i = 0; i < 5; i++) {
        printf("%d ", vb[i]);
    }

    putchar('\n');

    return 0;
}
