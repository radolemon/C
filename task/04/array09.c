#include <stdio.h>

#define N 5

int main(void) {
    double weight[N], max = 0, min = 0, tmp = 0;

    for (int i = 0; i < N; i++) {
        printf("%d人目の体重 = ", i + 1);
        scanf("%lf", &weight[i]);

        if (i == 0) min = weight[i];

        tmp = weight[i];
        
        if (tmp > max) max = tmp;
        if (tmp < min) min = tmp;
    }

    printf("最大値 = %0.1fkg\n最小値 = %0.1fkg", max, min);

    return 0;
}
