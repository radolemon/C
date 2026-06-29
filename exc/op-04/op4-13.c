#include <stdio.h>

int main(void) {
    int n, sum = 0;
    
    printf("nの値："); scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("1から5までの総和は%dです。", sum);
}
