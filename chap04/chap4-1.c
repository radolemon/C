#include <stdio.h>

int main(void)
{
    int a,b;

    printf("二つの整数を入力。");
    scanf("%d%d", &a, &b);

    while (a <= b ){
        printf("%d ", a);
        a++;
    }
    printf("\n");

    return 0;
}