#include <stdio.h>

void alert(void);

int main(void) {
    int n;

    printf("整数を入力："); scanf("%d", &n);
    if (n < 0) alert();

    return 0;
}

void alert(void) {
    printf("警告です！");
}
