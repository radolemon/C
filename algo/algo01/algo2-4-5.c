#include <stdio.h>

int main(void) {
    int cnt = 1;

    while (cnt <= 6) {
        if (cnt == 2)
            printf("\n");
        else if (cnt == 4)
            printf("\n");

        printf("*");

        cnt ++;
    }

    return 0;
}
