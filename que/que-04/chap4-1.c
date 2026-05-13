/*
    < 問題 >
    整数を２つ入力し、
    小さいほうから大きいほうまでの
    整数を一つずつ表示させる。
*/

#include <stdio.h>

int main(void) {
    int num1, num2 = 0;

    printf("整数１："); scanf("%d", &num1);
    printf("整数２："); scanf("%d", &num2);

    int max = num1;
    int min = num2;
    if (max < min) {
        max = num2;
        min = num1;
    }

    while (min <= max) {
        printf("%d ", min);
        min ++;
    }

    return 0;
}
