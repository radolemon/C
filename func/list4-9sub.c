#include <stdio.h>
int add(int);

int main(void) {
    int num;

    printf("整数は何個：");
    scanf("%d", &num);

    int sum = add(num);

    printf("合計値：%d\n", sum);
    printf("平均値：%.2f\n", (double)sum / num);
}

int add(int n) {
    int i = 0;
    int sum = 0;

    while (i < n) {
        int tmp;
        printf("No.%d：", ++i);
        scanf("%d", &tmp);
        sum += tmp;
    }

    return sum;
}
