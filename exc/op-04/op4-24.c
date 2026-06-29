#include <stdio.h>

int main(void) {
    int len, flag = 0;

    if (scanf("%d", &len) != 1) return 1;


    for (int i = 1; i <= (len * 2) - 1; i++) {
        
        if (flag == 0) {
            for (int k = 1; k <= len - i; k++) {
                putchar(' ');
            }
            for (int j = 1; j <= (i - 1) * 2 + 1; j++) {
                putchar('*');
            }
        }
        else {
            int space = i - len;
            int star = ((len * 2 - i) - 1) * 2 + 1;

            for (int k = 1; k <= space; k++) {
                putchar(' ');
            }
            for (int j = 1; j <= star; j++) {
                putchar('*');
            }
        }

        putchar('\n');

        if (i == len) flag = 1;
    }

    return 0;
}