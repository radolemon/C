#include <stdio.h>

int main(void) {
    int num;

    printf("入力値: "); scanf("%d", &num);

    if (num == 0) {
        puts("zero");
    } else {
        puts("not zero");
    }

    return 0;
}
