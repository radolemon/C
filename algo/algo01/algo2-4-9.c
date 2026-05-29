#include <stdio.h>

int main(void) {
    int num;
    int at = 1;

    scanf("%d", &num);

    if (num >= 2) {
        while (at <= num) {
            printf("%d ", at);

            at ++;
        }
    }

    return 0;
}
