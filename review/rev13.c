#include <stdio.h>

int main(void) {
    int num;

    printf("入力値: "); scanf("%d", &num);

    for (int i = num; i >= 0; i--) {
        printf("%d ", i);
    }

    return 0;
}
