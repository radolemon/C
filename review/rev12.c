#include <stdio.h>

int main(void) {
    int num;

    printf("表示回数: "); scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        puts("Hello World!");
    }

    return 0;
}
