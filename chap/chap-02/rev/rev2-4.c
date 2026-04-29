#include <stdio.h>

int main(void) {
    int num1, num2, sum;
    double division;

    printf("二つの整数を入力："); scanf("%d%d", &num1, &num2);

    sum = num1 + num2;
    division = (double)num1 / num2;

    printf("%d + %d = %d\n", num1, num2, sum);
    printf("%d / %d = %f", num1, num2, division);
}
