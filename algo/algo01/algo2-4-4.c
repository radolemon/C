#include <stdio.h>

int main(void) {
    int cnt = 1;

    while (cnt <= 4) {
        if (cnt == 3)
            printf("\n");

        printf("* ");
        cnt ++;
    }

    return 0;
}
