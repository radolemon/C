#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if ((i == 3 && j == 3) || (i == 3 && j == 7) || 
                (i == 6 && j == 3) || (i == 6 && j == 7) || 
                (i == 7 && j == 4) || (i == 7 && j == 5) || (i == 7 && j == 6)) {
                printf("*");
            } else {
                printf(" "); 
            }
        }
        putchar('\n');
    }
    return 0;
}