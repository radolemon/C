#include <stdio.h>

int main(void) {
    int n1;

    printf("入力値: "); scanf("%d", &n1);

    if (-5 <= n1 && n1 < 10) {
        printf("ok");
    } else printf("NG");

    return 0;
}
