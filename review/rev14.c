#include <stdio.h>

int main(void) {
    int num;

    printf("入力値: "); scanf("%d", &num);

    for (int i = 0; i < num; i+=2) {
        printf("%d\n", i);
    }

    return 0;
}
