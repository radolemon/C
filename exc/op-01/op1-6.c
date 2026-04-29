#include <stdio.h>

int main(void) {
    int num, num1, num2 = 0;

    printf("整数を入力してください：");
    scanf("%d", &num);

    num1 = num;
    num2 = num - 7;

    printf("%dから7を減じると%dです。", num1, num2);

    return 0;
}
