#include <stdio.h>

double avg(int n1) {
    return (n1 - 100) * 0.9;
}

int main(void) {
    int height;

    printf("身長を入力せよ："); scanf("%d", &height);

    printf("平均体重は%.1f", avg(height));
}
