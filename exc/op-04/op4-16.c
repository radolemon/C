#include <stdio.h>

int main(void) {
    int num, no;

    printf("整数値："); scanf("%d", &no);

    for (int i = 1; i <= no; i+=2) {
        printf("%d ", i);
    }

    return 0;
}
