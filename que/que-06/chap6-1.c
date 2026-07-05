#include <stdio.h>

int sum(int n1, int n2) {
    return n1 + n2;
}

int prod(int n1, int n2) {
    return n1 * n2;
}

int main(void) {
    int a, b;
    puts("二つの誠意数を入力せよ。");
    printf("整数a："); scanf("%d", &a);
    printf("整数b："); scanf("%d", &b);

    printf("それらの和は%dで積は%dです。\n", sum(a, b), prod(a, b));
    
    return 0;
}
