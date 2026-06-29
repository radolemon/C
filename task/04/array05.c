#include <stdio.h>

int main(void) {
    int sel, array[5] = {9, 4, 7, 2, 5};

    printf("要素番号を入力：");
    scanf("%d", &sel);

    printf("array[%d] = %d", sel, array[sel]);

    return 0;
}
