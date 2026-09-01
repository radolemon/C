#include <stdio.h>

int main(void) {
    int n1;

    printf("入力値: "); scanf("%d", &n1);

    if (n1 < 0) puts("negative");
    else if (n1 > 0) puts("positive");
    else puts("zero");

    return 0;
}
