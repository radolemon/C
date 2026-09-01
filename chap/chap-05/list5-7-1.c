#include <stdio.h>

int main(void) {
    double x[5], sum = 0.0;

    for (int i = 0; i < 5; i++) {
        printf("x[%d] : ", i);
        scanf("%lf", &x[i]);
    }

    putchar("\n");

    for(int i = 0; i < 5; i++) {
        printf("x[%d] = %f\n", i, x[i]);
        sum += x[i];
    }
    
    printf("合計： %f", sum);
    return 0;    
}
