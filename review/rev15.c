#include <stdio.h>

int main(void) {
    int num;

    do {
        printf("入力値: ");
        scanf("%d", &num);
    } while(num != 0);

    return 0;
}
