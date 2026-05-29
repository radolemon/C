#include <stdio.h>

int main(void) {
    int i = 1, j = 1, sum = 0;

    while (sum < 100000) {
        sum += j;

        printf("%2d日目までの合計金額 %8d 円\n", i, sum);
        i++;
        j *= 2;
    }

    return 0;
}
