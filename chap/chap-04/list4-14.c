#include <stdio.h>

int main(void) {
    int num, max = 0;

    printf("整数は何個："); scanf("%d", &num);

    int sum = 0;
    for (int i = 1; i<= num; i++) {
        int tmp;

        printf("No.%d：", i); scanf("%d", &tmp);
        
        if (tmp > max) max = tmp;

        sum += tmp;
    }

    printf("合計値： %d\n", sum);
    printf("平均値： %.2f\n", (double)sum / sum);
    printf("最高値： %d", max);

    return 0;
}
