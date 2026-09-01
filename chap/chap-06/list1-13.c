#include <stdio.h>

int add(int n1, int n2) {
    int sum;
    sum = n1 + n2;

    return sum;
}

int main(void) {
    int n1, n2;

    puts("二つの整数を入力してください。");
    printf("整数n1："); scanf("%d", &n1);
    printf("整数n2："); scanf("%d", &n2);

    printf("それらの和は%dです。\n", add(n1, n2));

    return 0;
}
